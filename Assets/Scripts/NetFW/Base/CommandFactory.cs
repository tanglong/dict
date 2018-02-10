//#define IsOriginalCommandFactory
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace longame.NetFW
{
    public class ClassStorage<INFO> where INFO : new()
    {
        public ClassStorage()
        {
            m_infoMap = new Dictionary<Type, INFO>();
        }

        /// <summary>
        /// 根据类型信息获得特定类信息
        /// </summary>
        /// <param name="info">类型信息</param>
        /// <returns></returns>
        public INFO GetClassInfo(Type info)
        {
            if (!m_infoMap.ContainsKey(info))
            {
                m_infoMap.Add(info, new INFO());
            }
            return m_infoMap[info];
        }

        private Dictionary<Type, INFO> m_infoMap; //类信息集合
    }

#if IsOriginalCommandFactory
	#region CommandFactory2
	public delegate void MESSAGE_FUNC(Session session,NetMsg message);
    public class CommandFactory2
    {
        //! 构造函数
        public CommandFactory2()
        {
			//m_commands = new MESSAGE_FUNC[0x10000];
			m_commands = new Dictionary<ushort, MESSAGE_FUNC>();
            //m_commands_NL = new Dictionary<ushort, MESSAGE_FUNC>();
            m_defaultFunc = new MESSAGE_FUNC(onDummyMessage);
			//for( uint i=0;i< m_commands.Count;i++)
			//{
			//	m_commands[i]=m_defaultFunc;
			//}

			//registerProcessMessageCmd(Types.SYSPING_REQ, SysPing.onSysPingReq);
			//registerProcessMessageCmd(Types.SYSPING_ACK, SysPing.onSysPingAck);
			//registerProcessMessageCmd(Types.PROTOCOL_VERSION_NTF, ProtocolVersion.onProtocolVersionNtf);
        }

		//! 解析消息
        public bool parseMessage(
            Session session,	//连接对象
            NetMsg msg		//网络消息
            )
        {
            if (m_commands.ContainsKey(msg.GetID()))
			{
				m_commands[msg.GetID()](session, msg);
				return true;
			}
			else
				m_defaultFunc(session, msg);
			return false;
        }

        public void ProcessMessage(ProtocolBase proto)
        {

        }
        public static void onDummyMessage(
            Session session,	//连接对象
            NetMsg msg		//网络消息
            )
        {
            System.Console.WriteLine("unhandled msg ID:{0} size:{1}", msg.GetID(), msg.getSize());
            //throw new UnhandledMessageException(msg.ID, msg.getSize());
        }

		//! 设置默认消息处理函数
        public void setDefaultFunc(MESSAGE_FUNC defaultFunc)
        {
            if(m_defaultFunc==defaultFunc)
	        {
		        return;
	        }
            //for (ushort i = 0; i < m_commands.Count; i++)
            //{
            //    if (m_commands[i] == m_defaultFunc)
            //    {
            //        m_commands[i] = defaultFunc;
            //    }
            //}
            m_defaultFunc = defaultFunc;
        }

		//!注册单个网络消息处理命令
		public void registerProcessMessageCmd(
            UInt16 cmd,				//网络消息ID
            MESSAGE_FUNC func		//处理函数
            )
        {
				m_commands[cmd] = func;
        }

		Dictionary<UInt16, MESSAGE_FUNC> m_commands;   //网络处理表
        //Dictionary<UInt16, MESSAGE_FUNC> m_commands_NL;   //网络处理表
		//private MESSAGE_FUNC[] m_commands;   //网络处理表
        private MESSAGE_FUNC m_defaultFunc;	//默认消息处理函数

        private static ClassStorage<CommandFactory2> storage = new ClassStorage<CommandFactory2>();
        public static ClassStorage<CommandFactory2> getStorage()
        {
            return storage;
        }
    }
	#endregion
#endif

	#region //My CommandFactory//
	public delegate bool OnParseMsgHandler(NetMsg msg);				//消息解析函数的声明委托//
	public delegate void OnProcessMsgHandler(ProtocolBase msg);		//消息处理函数的声明委托//

	public class CommandFactory
	{
        public void Reset()
        {
            mParseMsgCmdList = new Dictionary<UInt16, OnParseMsgHandler>();
            mProcessMsgCmdList = new Dictionary<UInt16, OnProcessMsgHandler>();
        }


		private OnProcessMsgHandler m_defaultProcessFunc;	//默认消息处理函数//
        private OnParseMsgHandler m_defaultParseFunc;	    //默认消息解析函数//
		public CommandFactory()
		{
			m_defaultProcessFunc = new OnProcessMsgHandler(OnDummyProcess);
            m_defaultParseFunc = new OnParseMsgHandler(OnDummyMessage);
        }

		Dictionary<UInt16, OnParseMsgHandler> mParseMsgCmdList = new Dictionary<UInt16, OnParseMsgHandler>();
		Dictionary<UInt16, OnProcessMsgHandler> mProcessMsgCmdList = new Dictionary<UInt16, OnProcessMsgHandler>();

		public void registerParseMsgCmd(ushort protoID, OnParseMsgHandler handler)
		{
            mParseMsgCmdList[protoID] = handler;

		}

        public void registerProcessMsgCmd(ushort protoID, OnProcessMsgHandler handler)
		{
			mProcessMsgCmdList[protoID] = handler;
		}

		public bool ParseMessage(NetMsg msg)
		{
            if (mParseMsgCmdList.ContainsKey(msg.GetID()))
            {
                mParseMsgCmdList[msg.GetID()](msg);

            }
            else 
			{
                m_defaultParseFunc(msg);
			}

			return true;
		}

		public void ProcessMessage(ProtocolBase proto)
		{
            if (mProcessMsgCmdList.ContainsKey(proto.GetProtoId()))
            {
                OnProcessMsgHandler OnProcessMsg = (OnProcessMsgHandler)mProcessMsgCmdList[proto.GetProtoId()];
                OnProcessMsg(proto);
            }
            else
            {
                m_defaultProcessFunc(proto);
            }
		}

        //默认的Message处理函数//
        public static bool OnDummyMessage(NetMsg msg)
		{
			//System.Console.WriteLine("!!!!!Can't parse net cmd ID:{0},size:{1}", msg.ID, msg.getSize());

            //throw new UnhandledProtoException(proto.GetProtoId());
            return true;
		}
        //默认的Process处理函数//
		public static void OnDummyProcess(ProtocolBase proto)
		{
			//System.Console.WriteLine("!!!!!Can't Process net cmd ID, ID:{0}", proto.GetProtoId());

            //throw new UnhandledProtoException(proto.GetProtoId());
		}



		//设置默认消息处理函数//
		public void setDefaultProcessFunc(OnProcessMsgHandler defaultFunc)
		{
			if (m_defaultProcessFunc == defaultFunc)
			{
				return;
			}
			m_defaultProcessFunc = defaultFunc;
		}
        public void setDefaultParseFunc(OnParseMsgHandler defaultFunc)
        {
            if (m_defaultParseFunc == defaultFunc)
            {
                return;
            }
            m_defaultParseFunc = defaultFunc;
        }


        //这里保存所有的命令工厂//
        private static ClassStorage<CommandFactory> storage = new ClassStorage<CommandFactory>();
        public static ClassStorage<CommandFactory> getStorage()
        {
            return storage;
        }


	}
	#endregion
}
