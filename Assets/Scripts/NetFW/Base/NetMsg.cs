using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Diagnostics;

namespace longame.NetFW
{
    public class NetMsg
    {
		public NetMsg()
			: this(GDefine.NETWORK_BUF_SIZE)
        {
			//m_buffer = new byte[GDefine.NETWORK_BUF_SIZE];
        }
		public NetMsg(UInt32 bufSize)
		{
			m_buffer = new byte[bufSize];
		}
		public NetMsg(byte[] data, UInt32 index, UInt32 size)
        {
			UpdateNetMsg(data,index,size);
		}

		public void UpdateNetMsg(byte [] data,UInt32 index,UInt32 size)
		{
			m_buffer = new byte[size/*GDefine.NETWORK_BUF_SIZE*/];
			Array.Copy(data, index, m_buffer, 0, size);
			m_size = BitConverter.ToUInt16(m_buffer, 0);
			Debug.Assert(m_size == size);
			m_ID = BitConverter.ToUInt16(m_buffer, sizeof(UInt16));
			m_readIndex = m_writeIndex = GDefine.NETWORK_MSG_HEADER;
		}

		//public void ID(
		//	UInt16 wID	//消息ID
		//	)
		//{
		//	m_ID = wID;
		//	m_size = Types.NETWORK_MSG_HEADER;
		//	m_readIndex = m_writeIndex = Types.NETWORK_MSG_HEADER;
		//}

		public UInt16 GetID()
		{
			return m_ID;
		}
		public void SetID(UInt16 value)
		{
			m_ID = value;
			m_size = GDefine.NETWORK_MSG_HEADER;
			m_readIndex = m_writeIndex = GDefine.NETWORK_MSG_HEADER;
		}

		//public UInt16 ID
		//{
		//	get { return m_ID; }
		//	set
		//	{
		//		m_ID = value;
		//		m_size = GDefine.NETWORK_MSG_HEADER;
		//		m_readIndex = m_writeIndex = GDefine.NETWORK_MSG_HEADER;
		//	}
		//}

        public UInt16 getSize()
        {
            return m_size;
        }

		//在这里给buf加上前四个字节:buf长度和protoID//
        public byte[] getData()
        {
            byte[] buf = new byte[m_size];
            Array.Copy(m_buffer, 0, buf, 0, m_size);
            if(m_size >= GDefine.NETWORK_MSG_HEADER)
            {
                byte [] pID = BitConverter.GetBytes(m_ID);
                byte[] pSize = BitConverter.GetBytes(m_size);
                Array.Copy(pSize, 0, buf, 0, pSize.Length);
                Array.Copy(pID, 0, buf, pSize.Length, pID.Length);
            }
            return buf;
        }

        /*! @brief 写入一定长度数据
           @exception OutOfBoundException 　写入数据超过缓存长度
       */
        public void writeData(
            byte[] data,     //数据
            int index,
            int size
            )
        {
            if (m_writeIndex + size > GDefine.NETWORK_BUF_SIZE)
                throw new OutOfBoundException(string.Format("[ID:{0}] Message::WriteData > NETWORK_BUF_SIZE", GetID()));

            Array.ConstrainedCopy(data, index, m_buffer, m_writeIndex, size);
            m_writeIndex += (UInt16)size;
            m_size += (UInt16)size;
        }

        /*! @brief 写入一定长度数据
			@exception OutOfBoundException 　写入数据超过缓存长度
		*/
        public void writeData(
            byte[] data     //数据
            )
        {
            writeData(data, 0, data.Length);
        }

        /*! @brief 读一定长度的数据
			@exception OutOfBoundException　长度不足
		*/
        public void readData(
            byte[] data,     //数据
			UInt16 size
            )
        {
			if (m_readIndex + size/*data.Length*/ > GDefine.NETWORK_BUF_SIZE)
                throw new OutOfBoundException(string.Format("[ID:{0}] Message::ReadData > NETWORK_BUF_SIZE", GetID()));
			if (m_readIndex + size/*data.Length*/ > getSize())
                throw new OutOfBoundException(string.Format("[ID:{0}] Message::ReadData > GetSize()", GetID()));

			Array.ConstrainedCopy(m_buffer, m_readIndex, data, 0, size/*data.Length*/);
			m_readIndex += size/*(UInt16)data.Length*/;
        }

        public void Write(byte o)
        {
            if (m_writeIndex + 1 > GDefine.NETWORK_BUF_SIZE)
                throw new OutOfBoundException(string.Format("[ID:{0}] Message::WriteData > NETWORK_BUF_SIZE", GetID()));

            m_buffer[m_writeIndex] = o;
           
            m_writeIndex += 1;
            m_size += 1;
        }

        public void Read(ref byte o)
        {
            if (m_readIndex + 1 > GDefine.NETWORK_BUF_SIZE)
                throw new OutOfBoundException(string.Format("[ID:{0}] Message::ReadData > NETWORK_BUF_SIZE", GetID()));
            if (m_readIndex + 1 > getSize())
                throw new OutOfBoundException(string.Format("[ID:{0}] Message::ReadData > GetSize()", GetID()));

            o = m_buffer[m_readIndex];
            m_readIndex += 1;
        }

        public void Write(SByte o)
        {
            if (m_writeIndex + 1 > GDefine.NETWORK_BUF_SIZE)
                throw new OutOfBoundException(string.Format("[ID:{0}] Message::WriteData > NETWORK_BUF_SIZE", GetID()));

            m_buffer[m_writeIndex] = (byte)o;

            m_writeIndex += 1;
            m_size += 1;
        }

        public void Read(ref SByte o)
        {
            if (m_readIndex + 1 > GDefine.NETWORK_BUF_SIZE)
                throw new OutOfBoundException(string.Format("[ID:{0}] Message::ReadData > NETWORK_BUF_SIZE", GetID()));
            if (m_readIndex + 1 > getSize())
                throw new OutOfBoundException(string.Format("[ID:{0}] Message::ReadData > GetSize()", GetID()));

            o = (SByte)m_buffer[m_readIndex];
            m_readIndex += 1;
        }

        public void Write(UInt16 o)
        {
            byte[] buf = BitConverter.GetBytes(o);
            writeData(buf);
        }

        public void Read(ref UInt16 o)
        {
			readData(bufTemp, sizeof(UInt16));
			o = BitConverter.ToUInt16(bufTemp, 0);
        }

        public void Write(Int16 o)
        {
            byte[] buf = BitConverter.GetBytes(o);
            writeData(buf);
        }

        public void Read(ref Int16 o)
        {
			readData(bufTemp, sizeof(Int16));
			o = BitConverter.ToInt16(bufTemp, 0);
        }

        public void Write(UInt32 o)
        {
            byte[] buf = BitConverter.GetBytes(o);
            writeData(buf);
        }

        public void Read(ref UInt32 o)
        {
			readData(bufTemp, sizeof(UInt32));
			o = BitConverter.ToUInt32(bufTemp, 0);
        }

        public void Write(Int32 o)
        {
            byte[] buf = BitConverter.GetBytes(o);
            writeData(buf);
        }

        public void Read(ref Int32 o)
        {
			readData(bufTemp, sizeof(Int32));
			o = BitConverter.ToInt32(bufTemp, 0);
        }

        public void Write(UInt64 o)
        {
            byte[] buf = BitConverter.GetBytes(o);
            writeData(buf);
        }

        public void Read(ref UInt64 o)
        {
			readData(bufTemp, sizeof(UInt64));
			o = BitConverter.ToUInt64(bufTemp, 0);
        }

        public void Write(Int64 o)
        {
            byte[] buf = BitConverter.GetBytes(o);
            writeData(buf);
        }

        public void Read(ref Int64 o)
        {
			readData(bufTemp, sizeof(Int64));
			o = BitConverter.ToInt64(bufTemp, 0);
        }

        public void Write(float o)
        {
            byte[] buf = BitConverter.GetBytes(o);
            writeData(buf);
        }

        public void Read(ref float o)
        {
			readData(bufTemp, sizeof(float));
			o = BitConverter.ToSingle(bufTemp, 0);
        }

        public void Write(double o)
        {
            byte[] buf = BitConverter.GetBytes(o);
            writeData(buf);
        }

        public void Read(ref double o)
        {
			readData(bufTemp, sizeof(double));
			o = BitConverter.ToSingle(bufTemp, 0);
        }

		public void Write(bool o)
		{
			byte[] buf = BitConverter.GetBytes(o);
			writeData(buf);
		}

		public void Read(ref bool o)
		{
			readData(bufTemp, sizeof(double));
			o = BitConverter.ToBoolean(bufTemp, 0);
		}

        public void Write(string o)
        {
            byte[] buf = System.Text.Encoding.UTF8.GetBytes(o);
            writeData(buf);
            Write((byte)0);
        }

        public void Read(ref string o)
        {
            ushort stringLength = 0;
            bool hasFind = false;
            for (int i = m_readIndex; i < m_size && i < m_buffer.Length; ++i)
            {
                if (m_buffer[i] == '\0')
                {
                    hasFind = true;
                    break;
                }
                ++stringLength;
            }
            if (!hasFind)
            {
                throw new OutOfBoundException("Message ReadString Error:no string find");
            }

            byte[] data = new byte[stringLength];
			readData(data, stringLength);
            m_readIndex++; //最后一个0结尾的也要读取

            o = new String(System.Text.Encoding.UTF8.GetChars(data));
        }

        public void Write<T>(T o)
		where T : NetMessageTrans
        {
			o.WriteToMsg(this);
        }

        public void Read<T>(ref T o)
		where T : NetMessageTrans
        {
			o.ReadFromMsg(this);
        }

		public int getReadPtr()
		{
			return m_readIndex;
		}
		public int getWritePrt()
		{
			return m_writeIndex;
		}


        private UInt16 m_size;			//长度
		private UInt16 m_ID;			//消息ID
		private UInt16 m_readIndex;	    //读取位置
        private UInt16 m_writeIndex;    //写入位置
		private byte[] m_buffer;	    //数据缓存
		static byte[] bufTemp = new byte[16];

    };
}
