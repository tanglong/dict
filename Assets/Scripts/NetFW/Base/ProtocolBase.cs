using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace longame.NetFW
{
	public interface NetMessageTrans
    {
        //将对象放到Message对象中//
		void WriteToMsg(NetMsg m);

        //把对象从Message对象中取出//
		bool ReadFromMsg(NetMsg m);
    }


	public abstract class ProtocolBase : NetMessageTrans
	{
		public const ushort PROTO_ID = 0;
		protected ushort mProtoId; //协议ID号//
        protected Type m_tyProtoType;
		bool m_needReadFromMsg = true;
		public ProtocolBase()
		{
			this.mProtoId = 0;
		}

		//public ProtocolBase(ushort protoId, Type protoType)
		//{
		//	this.mProtoId = protoId;
		//	this.m_tyProtoType = protoType;
		//	if (m_needReadFromMsg)
		//	{
		//		CommandFactory.getStorage().GetClassInfo(protoType).registerParseMsgCmd(this.mProtoId, this.ReadFromMsg);
		//	}
		//}
		public ProtocolBase(ushort protoId, Type protoType,bool needRead)
		{
			m_needReadFromMsg = needRead;

			this.mProtoId = protoId;
			this.m_tyProtoType = protoType;
			if (m_needReadFromMsg)
			{
				CommandFactory.getStorage().GetClassInfo(protoType).registerParseMsgCmd(this.mProtoId, this.ReadFromMsg);
			}

		}
		public ushort GetProtoId()
		{
			return this.mProtoId;
		}

		public virtual void WriteToMsg(NetMsg m)
		{
		}

		public virtual bool ReadFromMsg(NetMsg m)
		{
			return true;
		}

		public Type GetProtoType()
		{
			return m_tyProtoType;
		}
	}

}
