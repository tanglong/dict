using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Net.Sockets;
using System.Net;
using System.Diagnostics;
using System.IO;
using System.Threading;

namespace longame.NetFW
{
	public enum SessionError
	{
		ERROR_INIT = 0,
		ERROR_DEFAULT = -1,	//默认错误//
		ERROR_REMOTECLOSED = -2,	//远端关闭//
		ERROR_PINGTIMEOUT = -3,	//PING超时//
		ERROR_SENDBUFFER = -4,	//发送缓存不足//
		ERROR_PROTOCOLVERSION = -5,	//协议版本不对//
		ERROR_UNPACK = -6,	//解包协议//
		ERROR_PARSEMESSAGE = -7,	//解析协议//
		ERROR_SENDMESSAGE = -8,	//发送协议//
		ERROR_RECVFAILED = -9,	//接收失败//
		ERROR_SENDFAILED = -10,	//发送失败1//
		ERROR_SENDFAILED2 = -11,	//发送失败2//
	}

	public class SystemTime
	{
		static System.Diagnostics.Stopwatch stopwatch = new System.Diagnostics.Stopwatch();
		public static void StartTimeTick()
		{
			if (!stopwatch.IsRunning)
				stopwatch.Start();
		}
		public static Int64 GetCurTicks()
		{
			return stopwatch.ElapsedTicks;
		}
		public static Int64 GetCurMsTime()
		{
			//return (stopwatch.ElapsedTicks / TimeSpan.TicksPerMillisecond);
			return stopwatch.ElapsedMilliseconds;
		}
		public static Int64 GetCurSec()
		{
			return (stopwatch.ElapsedTicks / TimeSpan.TicksPerSecond);
		}
		public void ResetTime()
		{
			stopwatch.Reset();
		}



		//获取系统启动后经过的毫秒数//
		public static Int64 GetSysMSTime()
		{
			//return System.Environment.TickCount;
			return System.DateTime.Now.Ticks / TimeSpan.TicksPerSecond;
		}



	}

	public class Session : Selectable
	{

		private SysPingTime m_SysPingTimes;	//系统PING时间和最大次数

		private string m_strIP;					//IP地址//
		public string IP
		{
			get { return m_strIP; }
		}
		private UInt16 m_uiPort;					//端口//
		public UInt16 Port
		{
			get { return m_uiPort; }
		}

		private string m_strLocalIp;				//本地IP地址//
		public string IP_Local
		{
			get { return m_strLocalIp; }
		}
		private UInt16 m_local_port;			//本地端口//
		public UInt16 Port_Local
		{
			get { return m_local_port; }
		}

		/// <summary>
		/// 是否需要对消息进行加解密
		/// </summary>
		private bool m_IsUseS = false;
		//private SModule m_SModule = new SModule(SMODULEMODE.MOD_MULTIPLE);

		private byte[] m_bysSendBuf;		//发送缓存//
		private byte[] m_bysRecvBuf;		//接收缓存//

		private UInt32 m_uiSendSize;		//发送缓存中数据长度//
		private UInt32 m_uiRecvSize;		//接收缓存中数据长度//
		private UInt16 m_sPacketLen;		//逻辑包长度//

		private SessionError m_ErrorCode;				//错误号定义//

		private Byte m_bySysPingCount;		//SYSPING探测计数//



		public Session()
		{
			//m_init_send_buffer_size = Types.NETWORK_BUF_SIZE;
			m_uiInitSendBufSize = GDefine.NETWORK_BUF_SIZE;
			//m_uiInitSendBufSize = 8 * GDefine.NETWORK_BUF_SIZE;
			m_uiInitRecvBufSize = GDefine.NETWORK_BUF_SIZE;
			m_bReleaseDynamicSendBuf = false;
			m_uiMaxDynamicSendBufSize = 10 * 1024 * 1024;	//10M
			//m_SysPingTimes = CSysPing.getCustom(20000,20000);
			m_SysPingTimes = CSysPing.getDefault();

			//以下变量在close时要重设//	
			m_uiSendSize = 0;
			m_uiRecvSize = 0;
			m_sPacketLen = 0;
			m_ErrorCode = SessionError.ERROR_INIT;
			SModule.getStorage().GetClassInfo(typeof(SModule)).SetMode();

		}

		~Session()
		{
			CloseNet();
			ClearSendBuf();
			ClearRecvBuf();
		}

		/// <summary>
		/// 设置是否使用消息加密
		/// </summary>
		/// <param name="isUse"></param>
		public void SetIsUseS(bool isUse)
		{
			m_IsUseS = isUse;
		}

		//!设置错误号//
		public void SetError(SessionError error)
		{
			m_ErrorCode = error;
		}

		//!得到错误号
		public SessionError GetError()
		{
			return m_ErrorCode;
		}

		//以下函数暂时没有使用到,暂时注释掉//
		//!发送消息	
		//public bool SendMsg(
		//    UInt16 id,	//消息ID
		//    UInt16 code	//返回码
		//    )
		//{
		//    NetMsg msgSend = new NetMsg();
		//    msgSend.ID = id;
		//    msgSend.Write(code);
		//    return SendMsg(msgSend);
		//}

		////!发送消息	
		//public bool SendMsg(
		//    UInt16 handle,	//句柄
		//    UInt32 serial,	//序列号
		//    UInt16 id,		//消息ID
		//    UInt16 code	//返回码
		//    )
		//{
		//    NetMsg msgSend = new NetMsg();
		//    msgSend.ID = id;
		//    msgSend.Write(handle);
		//    msgSend.Write(serial);
		//    msgSend.Write(code);
		//    return SendMsg(msgSend);
		//}

		//private const int TRANS_SIZE = sizeof(UInt16) + sizeof(UInt32);
		////!发送消息	
		//public bool SendMsg(
		//    UInt16 handle,	//句柄
		//    UInt32 serial,	//序列号
		//    NetMsg msg	//要发送的消息
		//    )
		//{
		//    int size = msg.getSize();
		//    if (size + TRANS_SIZE > GDefine.NETWORK_BUF_SIZE)
		//    {
		//        SetError(SessionError.ERROR_SENDMESSAGE);
		//        return false;
		//    }
		//    NetMsg msgSend = new NetMsg();
		//    msgSend.ID = msg.ID;
		//    msgSend.Write(handle);
		//    msgSend.Write(serial);
		//    byte[] src = msg.getData();
		//    msgSend.writeData(src, GDefine.NETWORK_MSG_HEADER, src.Length - GDefine.NETWORK_MSG_HEADER);
		//    return SendMsg(msgSend);
		//}

		//!打开连接//
		public virtual bool OpenNet(
			Socket sock				//套接字
			)
		{
			if (sock.LocalEndPoint == null || sock.RemoteEndPoint == null)
				return false;
			m_strLocalIp = ((IPEndPoint)sock.LocalEndPoint).Address.ToString();
			m_local_port = (UInt16)((IPEndPoint)sock.LocalEndPoint).Port;
			m_strIP = ((IPEndPoint)sock.RemoteEndPoint).Address.ToString();
			m_uiPort = (UInt16)((IPEndPoint)sock.RemoteEndPoint).Port;

			sock.Blocking = false;
			m_socket = sock;

			NetInit();
			CanRecvData = true;
			CanSendData = true;
			joinSelector(m_socket);
			return true;
		}

		/*! @brief 接收发送消息例程//
		*/
		public virtual bool NetUpdate(bool isPing = true)
		{
			//if (CanRecvData)
			{
				RecvData();
				CanRecvData = false;
			}
#if UNITY_EDITOR
			if (m_socket != null && m_socket.Connected == false)
			{
				UnityEngine.Debug.LogError("m_socket.Connected == false");
			}
#endif

			if (m_SysPingTimes != null)
			{//检测对方是否当机//
				if (m_bySysPingCount >= m_SysPingTimes.getMaxPingCount())
				{//已超过最大探测时间//
				}
				else if (SystemTime.GetCurMsTime() - m_lastReceivedTick >= m_SysPingTimes.getNextPingTime(m_bySysPingCount))
				{
					++m_bySysPingCount;
					if (m_bySysPingCount >= m_SysPingTimes.getMaxPingCount())
					{//已超过最大探测时间//
						if (isPing)
						{
							SetError(SessionError.ERROR_PINGTIMEOUT);
						}
					}
					else
					{//发送探测包
						//TODO:这里写ping代码//
						//NetMsg msg = new NetMsg();
						//msg.ID = Types.SYSPING_REQ;
						//CanSendData = true;
						//sendMessage(msg,false);
					}
				}
			}
			//if (CanSendData)
			{
				SendData();
				CanSendData = false;
			}
			if (m_ErrorCode != SessionError.ERROR_INIT)
			{//出错
				//结束前发送最后一次数据
				SendData();
				return false;
			}
			else
			{
				return true;
			}
		}

		//!关闭连接
		public virtual void CloseNet()
		{
			if (m_socket != null)
			{
				quitSelector();
				m_socket.Close();
				//m_socket.Dispose();
				m_socket = null;
			}
			m_uiSendSize = 0;
			m_uiRecvSize = 0;
			m_sPacketLen = 0;
			m_bySysPingCount = 0;
			if (m_bReleaseDynamicSendBuf)
			{
				ResetBuf();
			}
		}

		//!解析消息
		public virtual bool parseMessage(
			NetMsg msg		//网络消息
			)
		{
			return true;
		}

		//!发送消息
		public virtual bool sendMessage(
			NetMsg msg	//要发送的消息
			)
		{
			return PushData(msg.getData());
		}

		//!得到错误号
		public int GetSysError()
		{
			return m_systemError;
		}

		//! 处理数据
		/*! 在默认实现中，该方法会调用 parseMessage
			如果有网络消息的格式与 NetMsg不同，请覆盖该方法
			data 在接收缓冲区中，允许修改data之前的数据，允许的长度为offsetof(Message::Fake,buffer)
		*/
		NetMsg m_Msg = null;
		public virtual bool HandleData(byte[] data, UInt32 index, UInt32 size)
		{
			if (m_IsUseS)
			{
				SModule.getStorage().GetClassInfo(typeof(SModule)).Do(data, (int)(index + 4), (int)(index + size));
			}
			if(m_Msg == null)
			{
				m_Msg = new NetMsg(data, index, size);
			}
			else
			{
				m_Msg.UpdateNetMsg(data, index, size);
			}
			//msg.UpdateNetMsg(data, index, size);
			return parseMessage(m_Msg);
		}

		//! 发送原始数据
		public bool SendData(byte[] data)
		{
			return PushData(data);
		}

		//! 获得消息包的长度
		/*
			< 0,解包出错
			==0 , 未完整，等待
			> 0, 数据包的长度，整个长度
		*/
		public virtual int getPacketLength(byte[] data, UInt32 index, UInt32 size)
		{
			if (size < GDefine.NETWORK_MSG_HEADER)
			{
				return 0;
			}
			int len = (int)BitConverter.ToUInt16(data, (int)index);
			if (len < GDefine.NETWORK_MSG_HEADER)
			{
				return -1;
			}
			return len;
		}

		//!调整接收缓存
		protected void AdjustRecvBuffer(
			UInt32 handled_size				//已处理长度
			)
		{
			if (handled_size != 0 && m_uiRecvSize >= handled_size)
			{
				m_uiRecvSize -= handled_size;
				if (m_uiRecvSize != 0)
				{
					byte[] newBuf = new byte[m_bysRecvBuf.Length];
					try
					{
						Array.Copy(m_bysRecvBuf, handled_size, newBuf, 0, m_uiRecvSize);
					}
					catch(Exception e)
					{
						
					}
					m_bysRecvBuf = newBuf;
				}
			}
		}

		//!向发送缓冲区添加数据
		protected bool PushData(byte[] data)
		{
			if (m_bysSendBuf == null)
			{
				return false;
			}

			if(m_IsUseS)
			{
				SModule.getStorage().GetClassInfo(typeof(SModule)).Do(data, 4);
			}

			do
			{
				if (m_uiSendSize + data.Length <= m_bysSendBuf.Length)
				{
					Array.Copy(data, 0, m_bysSendBuf, m_uiSendSize, data.Length);
					m_uiSendSize += (UInt32)data.Length;
					return true;
				}
			}
			while (IncreaseSendBuf());

			FileStream fs = new FileStream("full.dat", FileMode.Create);
			fs.Write(data, 0, data.Length);
			fs.Flush();
			fs.Close();

			SetError(SessionError.ERROR_SENDBUFFER);
			return false;
		}
		//!
		protected UInt32 GetSendBufSize()
		{
			return (UInt32)m_bysSendBuf.Length;
		}
		//!
		protected UInt32 GetRecvBufSize()
		{
			return (UInt32)m_bysRecvBuf.Length;
		}

		//!调整发送缓存
		protected void AdjustSendBuf(
			UInt32 handled_size				//已处理长度
			)
		{
			m_uiSendSize -= handled_size;
			if (m_uiSendSize > 0)
			{//如果只发送了部分内容,将剩余的部分向前移
				byte[] newBuf = new byte[m_bysSendBuf.Length];
				Array.Copy(m_bysSendBuf, handled_size, newBuf, 0, m_uiSendSize);
				m_bysSendBuf = newBuf;
			}
		}

		//!得到发送数据
		protected byte[] GetSendData()
		{
			return m_bysSendBuf;
		}

		//!得到发送数据大小
		protected UInt32 GetSendDataSize()
		{
			return m_uiSendSize;
		}

		//!网络初始化
		protected void NetInit()
		{
			m_ErrorCode = SessionError.ERROR_INIT;
			m_systemError = 0;
			InitBuf();
			m_lastReceivedTick = SystemTime.GetCurMsTime();
		}

		//!设置SYSPING时间
		/*!
			如果设置为NULL，表示关闭系统探测功能
		*/
		protected void SetSysPingTime(
			SysPingTime sysPingTime	//SYSPING时间
			)
		{
			m_SysPingTimes = sysPingTime;
		}

		protected virtual void uppack()
		{
			//byte [] msg_buf = m_recv_buffer;
			UInt32 index = 0;	//已处理的数据包
			for (; ; )
			{
				if (m_sPacketLen == 0)
				{//获得包长度
					int len = getPacketLength(m_bysRecvBuf, index, m_uiRecvSize - index);
					if (len == 0)
					{//不能解决出消息长度
						break;
					}
					if (len < 0)
					{//有错误发生
						SetError(SessionError.ERROR_UNPACK);
						return;
					}
					m_sPacketLen = (UInt16)len;
				}
				if (index + m_sPacketLen > m_uiRecvSize)
				{//不是完整的包
					break;
				}
				if (!HandleData(m_bysRecvBuf, index, m_sPacketLen))
				{
					if (m_ErrorCode != SessionError.ERROR_INIT)
					{
						SetError(SessionError.ERROR_PARSEMESSAGE);
					}
					return;
				}
				index += m_sPacketLen;
				m_sPacketLen = 0;
			}
			AdjustRecvBuffer(index);
		}

		protected Socket m_socket;				//套接字
		private UInt32 m_uiInitSendBufSize;
		protected UInt32 GetInitSendBufSize()
		{
			return m_uiInitSendBufSize;
		}
		protected void SetInitSendBufSize(UInt32 uiInitSendBufSize)
		{
			m_uiInitSendBufSize = uiInitSendBufSize;
		}
		private UInt32 m_uiInitRecvBufSize;
		protected UInt32 GetInitRecvBufSize()
		{
			return m_uiInitRecvBufSize;
		}
		protected void SetInitRecvBufSize(UInt32 uiInitRecvBufSize)
		{
			m_uiInitRecvBufSize = uiInitRecvBufSize;
		}
		private bool m_sendbuf_dynamic;				//发送缓存不足时是否动态分配
		protected void SetSendbuf_dynamic(bool sendbuf_dynamic)
		{
			m_sendbuf_dynamic = sendbuf_dynamic;
		}
		private bool m_bReleaseDynamicSendBuf;		//发送缓存是否动态释放
		protected void SetReleaseDynamicSendBuf(bool bReleaseDynamicSendBuf)
		{
			m_bReleaseDynamicSendBuf = bReleaseDynamicSendBuf;
		}
		private UInt32 m_uiMaxDynamicSendBufSize;
		protected void SetMaxDynamicSendBufSize(UInt32 uiMaxDynamicSendBufSize)
		{
			m_uiMaxDynamicSendBufSize = uiMaxDynamicSendBufSize;
		}

		protected Int64 m_lastReceivedTick;						//最后接收到数据的时间戳
		protected int m_systemError;							//当前系统错误号

		protected void ClearSendBuf()
		{
			m_bysSendBuf = null;
		}

		private void ClearRecvBuf()
		{
			m_bysRecvBuf = null;
		}

		//!创建发送与接收缓存
		private void InitBuf()
		{
			if (m_uiInitSendBufSize < GDefine.NETWORK_BUF_SIZE)
			{
				Debug.Assert(false);
				m_uiInitSendBufSize = GDefine.NETWORK_BUF_SIZE;
			}
			if (m_bysSendBuf == null || m_bysSendBuf.Length < m_uiInitSendBufSize)
			{
				ClearSendBuf();
				CreateBuffer(ref m_uiInitSendBufSize, out m_bysSendBuf);
			}
			if (m_uiInitRecvBufSize < GDefine.NETWORK_BUF_SIZE)
			{
				Debug.Assert(false);
				m_uiInitRecvBufSize = GDefine.NETWORK_BUF_SIZE;
			}
			if (m_bysRecvBuf == null || m_bysRecvBuf.Length < m_uiInitRecvBufSize)
			{
				ClearRecvBuf();
				CreateBuffer(ref m_uiInitRecvBufSize, out m_bysRecvBuf);
			}
		}

		//!还原buffer
		private void ResetBuf()
		{
			if (m_bysSendBuf != null)
			{
				if (m_uiInitSendBufSize != m_bysSendBuf.Length)
				{
					ClearSendBuf();
				}
			}
		}

		//!创建缓存
		private static bool CreateBuffer(
			ref UInt32 size,			//缓存长度,输入输出
			out byte[] data			//缓存,输出
			)
		{
			if (size < GDefine.NETWORK_BUF_SIZE)
			{
				size = GDefine.NETWORK_BUF_SIZE;
			}
			data = new byte[size + 1];
			data[size - 1] = 0;
			return true;
		}

		//!增加发送缓存大小
		private bool IncreaseSendBuf()
		{
			//不允许动态增长
			if (!m_sendbuf_dynamic)
			{
				return false;
			}

			//已达到最大值,不能理增长
			if (m_bysSendBuf.Length >= m_uiMaxDynamicSendBufSize)
			{
				return false;
			}

			//创建新的缓存
			UInt32 buffer_size = (UInt32)m_bysSendBuf.Length * 2;
			if (buffer_size > m_uiMaxDynamicSendBufSize)
			{
				buffer_size = m_uiMaxDynamicSendBufSize;
			}
			byte[] data;
			if (!CreateBuffer(ref buffer_size, out data))
			{
				return false;
			}

			//移动数据
			Array.Copy(m_bysSendBuf, 0, data, 0, m_uiSendSize);
			m_bysSendBuf = data;
			return true;
		}

		//! 接收数据
		private void RecvData()
		{
			int space = (int)(m_bysRecvBuf.Length - m_uiRecvSize);
			Debug.Assert(space > 0);
			int len = 0;
			int errorNo = 0;
			try
			{
				//在这里接受网络消息//
				len = m_socket.Receive(m_bysRecvBuf, (int)m_uiRecvSize, space, SocketFlags.None);
			}
			catch (SocketException e)
			{
				errorNo = e.ErrorCode;
				//System.Console.WriteLine("m_socket.Receive error:{0}", e);
			}
			if (len > 0)
			{
				m_uiRecvSize += (UInt32)len;

				m_bySysPingCount = 0;
				m_lastReceivedTick = SystemTime.GetCurMsTime();

				uppack();
			}
			else
			{
				if (errorNo != (int)SocketError.WouldBlock && m_ErrorCode == SessionError.ERROR_INIT)
				{
					if (len == 0)
					{
						SetError(SessionError.ERROR_REMOTECLOSED);
					}
					else
					{
						m_systemError = errorNo;
						SetError(SessionError.ERROR_RECVFAILED);
					}
				}
			}
		}

		//! 发送数据
		private void SendData()
		{
			if (m_uiSendSize == 0)
			{
				return;
			}

			int errorNo = 0;
			int len = 0;
			try
			{
				//在这里发送网络消息//
				len = m_socket.Send(m_bysSendBuf, (int)m_uiSendSize, SocketFlags.None);
			}
			catch (SocketException e)
			{
				errorNo = e.ErrorCode;
			}

			if (len > 0)
			{
				AdjustSendBuf((UInt32)len);
			}
			else
			{
				if (errorNo != (int)SocketError.WouldBlock && m_ErrorCode == SessionError.ERROR_INIT)
				{
					if (len == 0)
					{
						SetError(SessionError.ERROR_SENDFAILED);
					}
					else
					{
						m_systemError = errorNo;
						SetError(SessionError.ERROR_SENDFAILED2);
					}
				}
			}
		}


	}

	public enum SocketConnectStateEnum
	{
		None,
		Connecting,
		ConnectOk,
		ConnectFail,
		ConnectTimeOut,
	}
	class AsyncSocket
	{
		private Socket m_socket = null;
		private int m_iTimeoutMSec;
		private long m_lConnectStartTime;
		private SocketConnectStateEnum connectState = SocketConnectStateEnum.None;
		public void BeginConnect(IPEndPoint remoteEndPoint, int timeoutMSec)
		{
			m_iTimeoutMSec = timeoutMSec;

			m_lConnectStartTime = SystemTime.GetCurMsTime();

			string serverIp = Convert.ToString(remoteEndPoint.Address);
			int serverPort = remoteEndPoint.Port;
			Socket socket = new Socket(AddressFamily.InterNetwork,
				SocketType.Stream,
				 ProtocolType.Tcp);

			socket.BeginConnect(serverIp, serverPort,
				new AsyncCallback(CallBackMethod), socket);

			connectState = SocketConnectStateEnum.Connecting;

		}

		public SocketConnectStateEnum CheckConnectOk()
		{
			if (SystemTime.GetCurMsTime() - m_lConnectStartTime > m_iTimeoutMSec)
			{
				if (connectState != SocketConnectStateEnum.ConnectOk)
				{
					m_socket.Close();
					connectState = SocketConnectStateEnum.ConnectTimeOut;
				}
			}
			else
			{
				connectState = SocketConnectStateEnum.Connecting;
			}

			return connectState;
		}

		private void CallBackMethod(IAsyncResult asyncresult)
		{
			try
			{
				m_socket = asyncresult.AsyncState as Socket;

				if (m_socket != null)
				{
					m_socket.EndConnect(asyncresult);
					connectState = SocketConnectStateEnum.ConnectOk;
				}
			}
			catch (Exception ex)
			{
				connectState = SocketConnectStateEnum.ConnectFail;
				//System.Console.WriteLine("Connect Error:{0}", ex);
			}
			finally
			{

			}
		}
	}


	class TimeOutSocket0
	{
		static public Socket CheckConnectivityForProxyHost(IPEndPoint remoteEndPoint, int timeoutMSec)
		{
			Socket testSocket = null;

			try
			{
				testSocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
				//IPAddress ip = null;
				if (testSocket != null) // Pass a Correct IP
				{
					//time out 5 Sec
					CallWithTimeout(ConnectToProxyServers, timeoutMSec, testSocket, remoteEndPoint);

					if (testSocket != null && testSocket.Connected)
					{
						return testSocket;
					}

				}
			}
			catch (Exception ex)
			{
				return null;
			}
			finally
			{
				try
				{
					if (testSocket != null)
					{
						testSocket.Shutdown(SocketShutdown.Both);
					}
				}
				catch (Exception ex)
				{

				}
				finally
				{
					if (testSocket != null)
						testSocket.Close();
				}

			}

			return testSocket;
		}


		static void CallWithTimeout(Action<Socket, IPEndPoint> action,
				int timeoutMilliseconds, Socket socket, IPEndPoint ipendPoint)
		{
			try
			{
				Action wrappedAction = () =>
				{
					action(socket, ipendPoint);
				};

				IAsyncResult result = wrappedAction.BeginInvoke(null, null);

				if (result.AsyncWaitHandle.WaitOne(timeoutMilliseconds))
				{
					wrappedAction.EndInvoke(result);
				}

			}
			catch (Exception ex)
			{

			}
		}

		static void ConnectToProxyServers(Socket testSocket, IPEndPoint ipEndPoint)
		{
			try
			{
				if (testSocket == null || ipEndPoint == null)
					return;

				testSocket.Connect(ipEndPoint);

			}
			catch (Exception ex)
			{

			}
		}

		///Testing the above code Add your IP and port 
		//bool isConnected = CheckConnectivityForProxyHost("192.168.1.100", 1010);
	}

	public class TimeOutSocket
	{
		private bool IsConnectionSuccessful = false;
		private Exception socketexception;
		private ManualResetEvent TimeoutObject = new ManualResetEvent(false);
		private SocketAsyncEventArgs socketAsyncEventArgs;

		public TimeOutSocket()
		{
			socketAsyncEventArgs = new SocketAsyncEventArgs();
			socketAsyncEventArgs.Completed += new EventHandler<SocketAsyncEventArgs>(OnConnect);
		}

		public Socket BeginConnect(IPEndPoint remoteEndPoint, int timeoutMSec,AsyncCallback callback)
		{
			IsConnectionSuccessful = false;
			TimeoutObject.Reset();
			socketexception = null;

			string serverIp = Convert.ToString(remoteEndPoint.Address);
			int serverPort = remoteEndPoint.Port;
			Socket socket = new Socket(AddressFamily.InterNetwork,
				SocketType.Stream,
				 ProtocolType.Tcp);

			if (callback != null)
			{
				socket.BeginConnect(serverIp, serverPort, callback, socket);
			}
			else
			{
				socket.BeginConnect(serverIp, serverPort,
					new AsyncCallback(CallBackMethod), socket);
			}

			if (TimeoutObject.WaitOne(timeoutMSec, false))
			{
				if (IsConnectionSuccessful)
				{
					return socket;
				}
				else
				{
					socket.Close();
					return null;
				}
			}
			else
			{
				socket.Close();
				return null;
			}
		}

		private void CallBackMethod(IAsyncResult asyncresult)
		{
			try
			{
				//UnityEngine.Debug.LogWarning("_CallBackMethod:" + SystemTime.GetCurMsTime());
				IsConnectionSuccessful = false;
				Socket socket = asyncresult.AsyncState as Socket;

				if (socket != null)
				{
					socket.EndConnect(asyncresult);
					IsConnectionSuccessful = true;
				}
			}
			catch (Exception ex)
			{
				IsConnectionSuccessful = false;
				socketexception = ex;
				//UnityEngine.Debug.LogWarning("ex:" + ex);

			}
			finally
			{
				TimeoutObject.Set();
			}
		}

		public bool CheckConnectSuccessful()
		{
			return IsConnectionSuccessful;
		}

		public Socket ConnectAsync(IPEndPoint remoteEndPoint, int timeoutMSec)
		{
			TimeoutObject.Reset();
			socketexception = null;

			string serverIp = Convert.ToString(remoteEndPoint.Address);
			int serverPort = remoteEndPoint.Port;
			Socket socket = new Socket(AddressFamily.InterNetwork,
				SocketType.Stream,
				 ProtocolType.Tcp);

			if (socketAsyncEventArgs != null)
			{
				socketAsyncEventArgs.RemoteEndPoint = remoteEndPoint;
				socketAsyncEventArgs.UserToken = socket;
				socket.ConnectAsync(socketAsyncEventArgs);


				if (TimeoutObject.WaitOne(timeoutMSec, false) || socketAsyncEventArgs.SocketError == SocketError.Success )
				{
					if (IsConnectionSuccessful || socketAsyncEventArgs.SocketError == SocketError.Success)
					{
						return socket;
					}
					else
					{
						socket.Close();
						return null;
					}
				}
				else
				{
					socket.Close();
					return null;
				}
			}
			return null;
		}

		private void OnConnect(object sender, SocketAsyncEventArgs e)
		{
			// Signals the end of connection.
			TimeoutObject.Set();

			// Set the flag for socket connected.
			IsConnectionSuccessful = (e.SocketError == SocketError.Success);
		}

		public SocketError GetSocketError()
		{
			return socketAsyncEventArgs.SocketError;
		}
		public SocketAsyncEventArgs GetSocketAsyncEventArgs()
		{
			return socketAsyncEventArgs;
		}
	}

	public enum LINK_STATE			//连接状态//
	{
		LS_NONE = -1,
		LS_CLOSED,          //已关闭//
		LS_WAITRETRY,		//等待重连//
		LS_CONNECTING,		//正在连接//
		LS_CONNECTED,		//已连接//
	};


}
