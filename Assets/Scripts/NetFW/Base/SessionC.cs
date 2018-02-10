using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Net.Sockets;
using System.Net;
using System.Threading;

namespace longame.NetFW
{
    public class SessionC:Session
    {
        private string m_connectIP;		                    //连接的IP地址//
		public string ConnectIP
		{
			get { return m_connectIP; }
		}
		private System.Net.IPAddress[] m_connectIpAddressArray;
		private System.Net.EndPoint m_connectOkEndPoint = null;
        private UInt16 m_connectPort;		                //连接的端口号//
        private Socket m_connectSocket;	                    //连接套接字//
		protected TimeOutSocket m_TimeOutSocket = null;

		private Int64 m_connectTimeOut;	                    //连接超时时刻//
        private Int64 m_connectTime;                        //连接时间//
        private IPEndPoint m_serverEP;			            //远程服务器网络地址//

        private CommandFactory m_commandFactory;	        //命令工厂//
		private OnProcessMsgHandler m_defaultProcessFunc;	//默认处理函数//
		private OnParseMsgHandler m_defaultParseFunc;		//默认解析函数//

		private AsyncCallback m_asyncCallback = null;
        public SessionC():this(CommandFactory.OnDummyMessage,CommandFactory.OnDummyProcess)
        {
        }

        public SessionC(OnParseMsgHandler defaultParseFunc,OnProcessMsgHandler defaultProcessFunc)
        {
            m_connectIP = "0.0.0.0";
            m_defaultParseFunc = defaultParseFunc;
            m_defaultProcessFunc = defaultProcessFunc;

			//m_uiInitSendBufSize *= 10;
			SetInitSendBufSize(GetInitSendBufSize() * 10);
			//m_uiInitRecvBufSize *= 10;
			SetInitRecvBufSize(GetInitRecvBufSize() * 10);
			//m_sendbuf_dynamic = true;
			SetSendbuf_dynamic(true);
			LinkState = LINK_STATE.LS_CLOSED;
        }
        ~SessionC()
        {
            if (m_connectSocket != null)
            {
                m_connectSocket.Close();
                m_connectSocket = null;
            }
        }

        /// <summary>
        /// 连接失败事件,可以在该事件中调用方法SetConnectTime()方法，决定是否在一定时间好重新启动连接
        /// </summary>
        /// <returns></returns>
        public virtual void onConnFailed()
        {
			//TODO:断线重连可使用//
        }

        /// <summary>
        /// 设置重连时间
        /// </summary>
        /// <param name="msDelta">在多少毫秒后重连，如果为 < 0的数值表示不准备重连</param>
        /// <returns></returns>
        public void setConnectTime(
            int msDelta
            )
        {
            if(msDelta < 0)
            {
                m_connectTime = -1;
            }
            else
            {
                m_connectTime = SystemTime.GetCurMsTime() + msDelta;
            }
        }

		/// <summary>
        /// 设置连接地址
		/// </summary>
        /// <param name="ip">要连接的服务器IP地址</param>
        /// <param name="port">要连接的服务器端口号</param>
		/// <returns></returns>
		public void SetConnectAddress(
			string ip,	
			UInt16 port		
			)
        {
            m_connectIP = ip;
            m_connectPort = port;
        }   

        ////设置本地地址
        //public void setLocalAddress(
        //    string ip,	//本地IP地址//
        //    UInt16 port		//本地端口号//
        //    )
        //{
        //}

		//启动,连接到服务器//
        /*
         * 最长5秒钟后返回结果
         */
		public virtual int StartConnectServer(ushort timeout, AsyncCallback asyncCallback,bool isUseAsync)
        {
			if(isUseAsync == false)
			{
				int code = ConnectServerWithIPStr(m_connectIP, m_connectPort, timeout, asyncCallback);
				if (code != 0)
				{
					return code;
				}
			}
			else
			{
				int code = ConnectServerWithIPStrAsync(m_connectIP, m_connectPort, timeout, asyncCallback);
				if (code != 0)
				{
					return code;
				}
			}
			
			return 0;
        }

		/// <summary>
        /// 运行,收发数据
		/// </summary>
		/// <returns></returns>
		public int SessionUpdate(bool isPing = true)
        {
            switch (LinkState)
            {
                case LINK_STATE.LS_CONNECTED:
                {
                    if (!base.NetUpdate(isPing))
                    {
                        CloseNet();
                        return 1;
                    }
                    break;
                }
                case LINK_STATE.LS_WAITRETRY:
                {
                    if (SystemTime.GetCurMsTime() < m_connectTime)
                    {//连接时间还未到，退出//
                        break;
                    }
                    ConnectWithSaveIP(1); //m_linkState will be LS_CONNECTING
                    break;
                }
                case LINK_STATE.LS_CONNECTING:
                {
                    int code = CheckConnectSuccess();
					//if (code == 0)
					//{
					//	LinkState = LINK_STATE.LS_CONNECTED;
					//}
					//else 
					if (code < 0)
                    {
                        onConnFailed();
                        if (m_connectTime < 0)
                        {
                            LinkState = LINK_STATE.LS_CLOSED;
                        }
                        else
                        {
                            LinkState = LINK_STATE.LS_WAITRETRY;
                        }
                    }
                    break;
                }
                default:
                {
                    break;
                }
            }
            return 0;
        }

		/// <summary>
        /// 停止
		/// </summary>
		/// <returns></returns>
		public int StopConnectServer()
        {
            if (LinkState==LINK_STATE.LS_CONNECTED)
            {
                CloseNet();
            }
            return 0;
        }

		/// <summary>
        /// 解析消息
		/// </summary>
		/// <param name="msg"></param>
		/// <returns></returns>
		public override bool parseMessage(NetMsg msg)
        {
            return m_commandFactory.ParseMessage(msg);
        }

        /// <summary>
        /// 连接到服务器
        /// </summary>
        /// <param name="ip">要连接的服务器IP地址</param>
        /// <param name="port">要连接的服务器端口号</param>
        /// <param name="timeout">超时值(秒)</param>
        /// <returns>
        /// 0 成功
        /// 其它 失败
        /// </returns>
		public int ConnectServerWithIPAddr(System.Net.IPAddress[] ips, UInt16 port, ushort timeout,AsyncCallback callback)
        {
			m_connectIpAddressArray = ips;
			m_asyncCallback = callback;

			//m_serverEP.Address.ToString();

			//Socket sock = TimeOutSocket.Connect(m_serverEP, timeout);
			m_connectTimeOut = SystemTime.GetCurMsTime() + timeout;

			//Socket sock = m_TimeOutSocket.ConnectAsync(m_serverEP, timeout);

			if (m_asyncCallback != null)
			{
				m_connectSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
				m_connectSocket.BeginConnect(m_connectIpAddressArray, port, m_asyncCallback, m_connectSocket);
			}
			else
			{
				if (m_TimeOutSocket == null)
					m_TimeOutSocket = new TimeOutSocket();

				m_serverEP = new System.Net.IPEndPoint(ips[0], port);
				Socket sock = m_TimeOutSocket.BeginConnect(m_serverEP, timeout, m_asyncCallback);
				if (sock != null)
				{
					sock.Blocking = false;
					m_connectSocket = sock;
					m_connectTime = -1;
					LinkState = LINK_STATE.LS_CONNECTING;

					return 0;
				}

			}

			return 1;
        }
		/// <summary>
		/// 设置网络连接成功//
		/// </summary>
		public void ConnectServerSuccess()
		{
			if (m_connectSocket != null)
			{
				m_connectSocket.Blocking = false;
				m_connectTime = -1;
				LinkState = LINK_STATE.LS_CONNECTING;
				m_connectOkEndPoint = m_connectSocket.RemoteEndPoint;

#if DEBUG
				if (m_connectOkEndPoint == null)
				{
					UnityEngine.Debug.LogError("0 m_connectOkEndPoint == null");
				}
				else
				{
					UnityEngine.Debug.LogWarning("0 m_connectOkEndPoint:" + m_connectOkEndPoint);
				}
#endif
			}
		}
		/// <summary>
		/// 设置网络连接失败//
		/// </summary>
		public void ConnectServerFail()
		{
			if (m_connectSocket != null)
			{
				m_connectSocket.Blocking = false;
				m_connectTime = -1;
				LinkState = LINK_STATE.LS_CLOSED;
			}
		}

        /// <summary>
        /// 连接到服务器
        /// </summary>
        /// <param name="host">要连接的服务器名称</param>
        /// <param name="port">要连接的服务器端口号</param>
        /// <param name="timeout">超时值(秒)</param>
        /// <returns>
        /// 0 成功
        /// 其它 失败
        /// </returns>
		private int ConnectServerWithIPStr(string host, UInt16 port, ushort timeout, AsyncCallback callback)
        {
			try
			{
				System.Net.IPAddress OneAddress;
				if(System.Net.IPAddress.TryParse(host,out OneAddress))
				{//先检测给定的host是ip格式的字符串吗?不是就需要解析域名了//
					System.Net.IPAddress[] IPaddr = new[] { OneAddress };
					return ConnectServerWithIPAddr(IPaddr, port, timeout, callback);
				}

				System.Net.IPAddress[] IPs = System.Net.Dns.GetHostAddresses(host);
				if (IPs.Length == 0)
				{
					return 5;
				}
				return ConnectServerWithIPAddr(IPs, port, timeout, callback);
			}
			catch(Exception e)
			{
				return 6;
			}

        }

		System.Net.IPAddress[] addresses;
		private int ConnectServerWithIPStrAsync(string host, UInt16 port, ushort timeout, AsyncCallback callback)
		{
			try
			{
				System.Net.IPAddress OneAddress;
				if (System.Net.IPAddress.TryParse(host, out OneAddress))
				{//先检测给定的host是ip格式的字符串吗?不是就需要解析域名了//
					System.Net.IPAddress[] IPaddr = new[] { OneAddress };
					return ConnectServerWithIPAddr(IPaddr, port, timeout, callback);
				}

				m_asyncCallback = callback;
				IAsyncResult result = System.Net.Dns.BeginGetHostAddresses(host, GetHostAddressesCallback, null);

				return 0;
			}
			catch (Exception e)
			{
				return 6;
			}

		}


		private void GetHostAddressesCallback(IAsyncResult result)
		{
			addresses = Dns.EndGetHostAddresses(result);
			if (addresses.Length != 0)
			{
#if UNITY_EDITOR
				UnityEngine.Debug.LogWarning("GetHostAddressesCallback ,addresses[0]=>" + addresses[0]);
#endif
				int code = ConnectServerWithIPAddr(addresses, m_connectPort, 0, m_asyncCallback);
			}
			else
			{
#if UNITY_EDITOR
				System.Console.WriteLine("ConnectServerWithIPAddr,addresses.Length == 0");
#endif
			}
			////int code = m_sessionLogin.StartConnectServer(0,  new AsyncCallback(CallBackMethod));
			//Debug.LogWarning("ConnectServerWithIPAddr,code:" + code);

		}

        /// <summary>
        /// 子类再次连接时调用
        /// </summary>
        /// <param name="timeout">超时的时间</param>
        /// <returns></returns>
		public int ConnectWithSaveIP(ushort timeout)
        {
			//return ConnectServerWithIPStr(m_connectIP, m_connectPort, timeout);
			return ConnectServerWithIPAddr(m_connectIpAddressArray, m_connectPort, timeout, m_asyncCallback);
        }

		public SocketError GetSocketError()
		{
			if (m_TimeOutSocket != null)
				return m_TimeOutSocket.GetSocketError();
			return SocketError.SocketError;
		}
		//public Socket GetSocket()
		//{
		//	if(m_TimeOutSocket != null )
		//	{
		//		SocketAsyncEventArgs eventArgs = m_TimeOutSocket.GetSocketAsyncEventArgs();
		//		if (eventArgs != null)
		//			return eventArgs.ConnectSocket;
		//	}

		//	return null;
		//}

		/// <summary>
        /// 是否连接成功
		/// </summary>
		/// <returns>
        /// 等于 0 成功
        /// 小于 0 失败
        /// 大于 0 等待中
        /// </returns>
		protected virtual int CheckConnectSuccess()
        {
			if (m_connectSocket == null)
				return -1;
			int err = -1;
			try
			{
				//m_connectSocket.Connect(m_serverEP);
				if (m_connectOkEndPoint == null)
				{
#if DEBUG
					UnityEngine.Debug.LogError("m_connectOkEndPoint == null");
#endif
					m_connectSocket.Connect(m_connectIpAddressArray, m_connectPort);
				}
				else
				{
					m_connectSocket.Connect(m_connectOkEndPoint/*, m_connectPort*/);
				}

			}
			catch (SocketException e)
			{
				err = e.ErrorCode;
			}
			int code = GetConnectStatus(err);
			
			//if (m_TimeOutSocket.CheckConnectSuccessful())
			//{
			//	code = 0;
			//}
			//else
			//{
			//	code = 1;
			//}
			//int code = GetConnectStatus((int)m_TimeOutSocket.GetSocketError());
	        if(code==0)
	        {
                bool opened=OpenNet(m_connectSocket);
		        if(opened)
		        {
					LinkState = LINK_STATE.LS_CONNECTED;
					m_connectSocket = null;
		        }
		        else
		        {
			        code=-1;
		        }
	         }
	         if(code==-1)
	         {
				 //m_connectSocket.Dispose();
				 m_connectSocket = null;
	         }
	        return code;
        }

		//!//
		/// <summary>
        /// 打开连接
		/// </summary>
        /// <param name="sock">套接字</param>
		/// <returns></returns>
		public override bool OpenNet(Socket sock)
        {
            if(!base.OpenNet(sock))
	        {
		        return false;
	        }
            m_commandFactory = CommandFactory.getStorage().GetClassInfo(this.GetType());
			m_commandFactory.setDefaultParseFunc(m_defaultParseFunc);
			m_commandFactory.setDefaultProcessFunc(m_defaultProcessFunc);
            return true;
        }

		/// <summary>
        /// 关闭连接
		/// </summary>
		/// <returns></returns>
		public override void CloseNet()
        {
            base.CloseNet();
            LinkState = LINK_STATE.LS_CLOSED;
		}

		protected LINK_STATE m_linkState;//连接状态//
		protected LINK_STATE LinkState
		{
			get { return m_linkState; }
			set
			{
				m_linkState = value;
			}
		}
        public LINK_STATE GetLinkState()
        {
            return LinkState;
        }

		public LINK_STATE LS_Connecting()
		{
			return LINK_STATE.LS_CONNECTING;
		}
		public LINK_STATE LS_Connected()
		{
			return LINK_STATE.LS_CONNECTED;
		}
		public LINK_STATE LS_Close()
		{
			return LINK_STATE.LS_CLOSED;
		}


        /// <summary>
        /// 获得连接状态
        /// </summary>
        /// <param name="err"></param>
        /// <returns>
        /// 等于0 成功
        /// 小于0 失败
        /// 大于0 等待中
        /// </returns>
        protected int GetConnectStatus(int err)
        {

            switch ((SocketError)err)
            {
                case SocketError.Success:
				case SocketError.IsConnected:
                    return 0;
				case SocketError.WouldBlock:
				case SocketError.InProgress:
                case SocketError.InvalidArgument:
                case SocketError.AlreadyInProgress:
                    return SystemTime.GetCurMsTime() < m_connectTimeOut ? 1 : -1;
                default:
                    return -1;
            }
        }
		/// <summary>
		/// 得到连接服务器的地址数量//
		/// </summary>
		/// <returns></returns>
		public int GetConnectIpAddressNum()
		{
			return m_connectIpAddressArray.Length;
		}

    };
}
