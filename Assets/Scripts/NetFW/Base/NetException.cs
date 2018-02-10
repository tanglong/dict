using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace longame.NetFW
{
    class UnhandledMessageException:
        Exception
    {
        public UnhandledMessageException(
            UInt16 id,	//消息ID
            UInt16 size	//消息长度
            )
            : base(String.Format("unhandled msg ID:{0} size:{1}", id, size))
        {
        }
    }
	class UnhandledProtoException :
		Exception
	{
		public UnhandledProtoException(
			UInt16 id	//消息ID
			)
			: base(String.Format("unhandled msg ID:{0} ", id))
		{
		}
	}

    class OutOfBoundException : Exception
    {
        public OutOfBoundException(string msg) :
            base(msg)
        {
        }
    }

    class ProtocolVersionException : Exception
    {
        public ProtocolVersionException(
            UInt32 localVersion,	//本地版本
            UInt32 farVersion	//远程版本
            )
            : base(String.Format("Invalid protocol version.(local:{0},far:{1})", localVersion, farVersion))
        {
        }
    }

}
