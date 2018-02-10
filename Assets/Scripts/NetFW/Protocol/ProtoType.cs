using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using longame.NetFW;
using System.Diagnostics;

namespace longame.NetFW
{
    [DebuggerDisplay("m_val = {m_val}")]
	public class ProtoString : NetMessageTrans
	{
		private String m_val = "";

		public void SetValue(String s)
		{
			m_val = s;
		}
		public String GetValue() { return m_val; }
		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(m_val);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_val);
			return true;
		}
		public ProtoString DeepClone()
		{
			ProtoString clone = new ProtoString();
			clone.SetValue(m_val);
			return clone;
		}

	}

    [DebuggerDisplay("m_val = {m_val}")]
	public class ProtoInt : NetMessageTrans
	{
		private int m_val = 0;
		public bool equals(System.Object o)
		{
			if (/*!(o.GetType() == typeof(System.Int16)) && */!(o.GetType() == typeof(System.Int32)) /*&& !(o.GetType() == typeof(System.Int64))*/)
			{
				return false;
			}
			ProtoInt p = (ProtoInt)o;
			if (!(p.equals(this.m_val)))
			{
				return false;
			}
			return true;
		}

		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
		public static bool operator ==(ProtoInt lhs, ProtoInt rhs)
		{
			return lhs.m_val == rhs.m_val;
		}
		public static bool operator !=(ProtoInt lhs, ProtoInt rhs)
		{
			return lhs.m_val != rhs.m_val;
		}
		public static bool operator ==(ProtoInt lhs, int rhs)
		{
			return lhs.m_val == rhs;
		}
		public static bool operator !=(ProtoInt lhs, int rhs)
		{
			return lhs.m_val != rhs;
		}
		public override int GetHashCode()
		{
			return m_val.GetHashCode();
		}

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(m_val);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_val);
			//m_val = msg.ReadInt();
			return true;
		}
		public ProtoInt DeepClone()
		{
			ProtoInt clone = new ProtoInt();
			clone.SetValue(m_val);
			return clone;
		}

		public void SetValue(int i)
		{
			m_val = i;
		}
		public int GetValue() { return m_val; }

	}

    [DebuggerDisplay("m_val = {m_val}")]
	public class ProtoUInt : NetMessageTrans
	{
		private uint m_val = 0;
		public bool equals(System.Object o)
		{
			if (/*!(o.GetType() == typeof(System.Int16)) && */!(o.GetType() == typeof(System.Int32)) /*&& !(o.GetType() == typeof(System.Int64))*/)
			{
				return false;
			}
			ProtoUInt p = (ProtoUInt)o;
			if (!(p.equals(this.m_val)))
			{
				return false;
			}
			return true;
		}

		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
		public static bool operator ==(ProtoUInt lhs, ProtoUInt rhs)
		{
			return lhs.m_val == rhs.m_val;
		}
		public static bool operator !=(ProtoUInt lhs, ProtoUInt rhs)
		{
			return lhs.m_val != rhs.m_val;
		}
		public static bool operator ==(ProtoUInt lhs, uint rhs)
		{
			return lhs.m_val == rhs;
		}
		public static bool operator !=(ProtoUInt lhs, uint rhs)
		{
			return lhs.m_val != rhs;
		}
		public override int GetHashCode()
		{
			return m_val.GetHashCode();
		}

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(m_val);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_val);
			//m_val = (uint)msg.ReadInt();
			return true;
		}
		public ProtoUInt DeepClone()
		{
			ProtoUInt clone = new ProtoUInt();
			clone.SetValue(m_val);
			return clone;
		}

		public void SetValue(uint i)
		{
			m_val = i;
		}
		public uint GetValue() { return m_val; }

	}

    [DebuggerDisplay("m_val = {m_val}")]
	public class ProtoUshort : NetMessageTrans
	{
		private ushort m_val = 0;
		public bool equals(System.Object o)
		{
			if (!(o.GetType() == typeof(System.UInt16)))
			{
				return false;
			}
			ProtoUshort p = (ProtoUshort)o;
			if (!(p.equals(this.m_val)))
			{
				return false;
			}
			return true;
		}

		public override int GetHashCode()
		{
			return m_val.GetHashCode();
		}
		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
		public static bool operator ==(ProtoUshort lhs, ProtoUshort rhs)
		{
			return lhs.m_val == rhs.m_val;
		}
		public static bool operator !=(ProtoUshort lhs, ProtoUshort rhs)
		{
			return lhs.m_val != rhs.m_val;
		}
		public static bool operator ==(ProtoUshort lhs, ushort rhs)
		{
			return lhs.m_val == rhs;
		}
		public static bool operator !=(ProtoUshort lhs, ushort rhs)
		{
			return lhs.m_val != rhs;
		}

		public void SetValue(ushort i)
		{
			m_val = i;
		}
		public ushort GetValue() { return m_val; }

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(m_val);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_val);
			return true;
		}
		public ProtoUshort DeepClone()
		{
			ProtoUshort clone = new ProtoUshort();
			clone.SetValue(m_val);
			return clone;
		}

	}

    [DebuggerDisplay("m_val = {m_val}")]
	public class ProtoULong : NetMessageTrans
	{
		private ulong m_val = 0;
		public bool equals(System.Object o)
		{
			if (!(o.GetType() == typeof(System.UInt32)))
			{
				return false;
			}
			ProtoULong p = (ProtoULong)o;
			if (!(p.equals(this.m_val)))
			{
				return false;
			}
			return true;
		}

		public override int GetHashCode()
		{
			return m_val.GetHashCode();
		}
		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
		public static bool operator ==(ProtoULong lhs, ProtoULong rhs)
		{
			return lhs.m_val == rhs.m_val;
		}
		public static bool operator !=(ProtoULong lhs, ProtoULong rhs)
		{
			return lhs.m_val != rhs.m_val;
		}
		public static bool operator ==(ProtoULong lhs, ulong rhs)
		{
			return lhs.m_val == rhs;
		}
		public static bool operator !=(ProtoULong lhs, ulong rhs)
		{
			return lhs.m_val != rhs;
		}

		public void SetValue(ulong i)
		{
			m_val = i;
		}
		public ulong GetValue() { return m_val; }

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write((long)m_val);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_val);
			//m_val = (UInt32)msg.ReadInt();
			return true;
		}
		public ProtoULong DeepClone()
		{
			ProtoULong clone = new ProtoULong();
			clone.SetValue(m_val);
			return clone;
		}

	}

    [DebuggerDisplay("m_val = {m_val}")]
	public class ProtoByte : NetMessageTrans
	{
		private byte m_val = 0;

		public bool equals(System.Object o)
		{
			if (!(o.GetType() == typeof(System.Byte)))
			{
				return false;
			}
			ProtoByte p = (ProtoByte)o;
			if (!(p.equals(this.m_val)))
			{
				return false;
			}
			return true;
		}


		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
		public static bool operator ==(ProtoByte lhs, ProtoByte rhs)
		{
			return lhs.m_val == rhs.m_val;
		}
		public static bool operator !=(ProtoByte lhs, ProtoByte rhs)
		{
			return lhs.m_val != rhs.m_val;
		}
		public static bool operator ==(ProtoByte lhs, Byte rhs)
		{
			return lhs.m_val == rhs;
		}
		public static bool operator !=(ProtoByte lhs, Byte rhs)
		{
			return lhs.m_val != rhs;
		}
		public override int GetHashCode()
		{
			return m_val.GetHashCode();
		}

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(m_val);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_val);
			return true;
		}
		public ProtoByte DeepClone()
		{
			ProtoByte clone = new ProtoByte();
			clone.SetValue(m_val);
			return clone;
		}

		public void SetValue(byte i)
		{
			m_val = i;
		}
		public Byte GetValue() { return m_val; }

	}

    [DebuggerDisplay("m_val = {m_val}")]
	public class ProtoLongLong : NetMessageTrans
	{
		private Int64 m_val = 0;

		public bool equals(System.Object o)
		{
			if (!(o.GetType() == typeof(System.Int64)))
			{
				return false;
			}
			ProtoLongLong p = (ProtoLongLong)o;
			if (!(p.equals(this.m_val)))
			{
				return false;
			}
			return true;
		}


		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
		public static bool operator ==(ProtoLongLong lhs, ProtoLongLong rhs)
		{
			return lhs.m_val == rhs.m_val;
		}
		public static bool operator !=(ProtoLongLong lhs, ProtoLongLong rhs)
		{
			return lhs.m_val != rhs.m_val;
		}
		public static bool operator ==(ProtoLongLong lhs, Int64 rhs)
		{
			return lhs.m_val == rhs;
		}
		public static bool operator !=(ProtoLongLong lhs, Int64 rhs)
		{
			return lhs.m_val != rhs;
		}
		public override int GetHashCode()
		{
			return m_val.GetHashCode();
		}

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(m_val);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_val);
			return true;
		}
		public ProtoLongLong DeepClone()
		{
			ProtoLongLong clone = new ProtoLongLong();
			clone.SetValue(m_val);
			return clone;
		}

		public void SetValue(Int64 i)
		{
			m_val = i;
		}
		public Int64 GetValue() { return m_val; }

	}

    [DebuggerDisplay("m_val = {m_val}")]
	public class ProtoULongLong : NetMessageTrans
	{
		private ulong m_val = 0;

		public bool equals(System.Object o)
		{
			if (!(o.GetType() == typeof(System.UInt64)))
			{
				return false;
			}
			ProtoULongLong p = (ProtoULongLong)o;
			if (!(p.equals(this.m_val)))
			{
				return false;
			}
			return true;
		}


		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
		public static bool operator ==(ProtoULongLong lhs, ProtoULongLong rhs)
		{
			return lhs.m_val == rhs.m_val;
		}
		public static bool operator !=(ProtoULongLong lhs, ProtoULongLong rhs)
		{
			return lhs.m_val != rhs.m_val;
		}
		public static bool operator ==(ProtoULongLong lhs, ulong rhs)
		{
			return lhs.m_val == rhs;
		}
		public static bool operator !=(ProtoULongLong lhs, ulong rhs)
		{
			return lhs.m_val != rhs;
		}
		public override int GetHashCode()
		{
			return m_val.GetHashCode();
		}

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(m_val);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_val);
			return true;
		}
		public ProtoULongLong DeepClone()
		{
			ProtoULongLong clone = new ProtoULongLong();
			clone.SetValue(m_val);
			return clone;
		}

		public void SetValue(UInt64 i)
		{
			m_val = i;
		}
		public UInt64 GetValue() { return m_val; }

	}

    [DebuggerDisplay("m_val = {m_val}")]
	public class ProtoFloat : NetMessageTrans
	{
		private float m_val = 0;

		public bool equals(System.Object o)
		{
			if (!(o.GetType() == typeof(System.Single)))
			{
				return false;
			}
			ProtoULongLong p = (ProtoULongLong)o;
			if (!(p.equals(this.m_val)))
			{
				return false;
			}
			return true;
		}


		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
		public static bool operator ==(ProtoFloat lhs, ProtoFloat rhs)
		{
			return lhs.m_val == rhs.m_val;
		}
		public static bool operator !=(ProtoFloat lhs, ProtoFloat rhs)
		{
			return lhs.m_val != rhs.m_val;
		}
		public static bool operator ==(ProtoFloat lhs, float rhs)
		{
			return lhs.m_val == rhs;
		}
		public static bool operator !=(ProtoFloat lhs, float rhs)
		{
			return lhs.m_val != rhs;
		}
		public override int GetHashCode()
		{
			return m_val.GetHashCode();
		}

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(m_val);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_val );
			return true;
		}
		public ProtoFloat DeepClone()
		{
			ProtoFloat clone = new ProtoFloat();
			clone.SetValue(m_val);
			return clone;
		}

		public void SetValue(float i)
		{
			m_val = i;
		}
		public float GetValue() { return m_val; }

	}



	public class POS2D_L : NetMessageTrans
	{
		//注意,m_x为实际坐标乘以1000//
		public int m_x;
		//注意,m_y为实际坐标乘以1000//
		public int m_y;

		public bool equals(System.Object o)
		{
			if (!(o.GetType() == typeof(POS2D_L)))
			{
				return false;
			}
			POS2D_L p = (POS2D_L)o;
			if (!(p.m_x == this.m_x && p.m_y == this.m_y))
			{
				return false;
			}
			return true;
		}
		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
		public static bool operator ==(POS2D_L lhs, POS2D_L rhs)
		{
			return lhs.m_x == rhs.m_x && lhs.m_y == rhs.m_y;
		}
		public static bool operator !=(POS2D_L lhs, POS2D_L rhs)
		{
			return lhs.m_x != rhs.m_x || lhs.m_y != rhs.m_y;
		}
		public override int GetHashCode()
		{
			return m_x.GetHashCode() + m_y.GetHashCode();
		}

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(m_x);
			msg.Write(m_y);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_x);
			msg.Read(ref m_y);
			return true;
		}
		public POS2D_L DeepClone()
		{
			POS2D_L clone = new POS2D_L();
			clone.SetValue(m_x, m_y);
			return clone;
		}

		public void SetValue(int x, int y)
		{
			m_x = x;
			m_y = y;
		}
		public void SetValue(POS2D_L b)
		{
			m_x = b.m_x;
			m_y = b.m_y;
		}
		public POS2D_L GetValue() { return this; }


	}

	public class POS2D_S : NetMessageTrans
	{
		public short m_x;
		public short m_y;

		public bool equals(System.Object o)
		{
			if (!(o.GetType() == typeof(POS2D_S)))
			{
				return false;
			}
			POS2D_S p = (POS2D_S)o;
			if (!(p.m_x == this.m_x && p.m_y == this.m_y))
			{
				return false;
			}
			return true;
		}
		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
		public static bool operator ==(POS2D_S lhs, POS2D_S rhs)
		{
			return lhs.m_x == rhs.m_x && lhs.m_y == rhs.m_y;
		}
		public static bool operator !=(POS2D_S lhs, POS2D_S rhs)
		{
			return lhs.m_x != rhs.m_x || lhs.m_y != rhs.m_y;
		}
		public override int GetHashCode()
		{
			return m_x.GetHashCode() + m_y.GetHashCode();
		}

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(m_x);
			msg.Write(m_y);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_x);
			msg.Read(ref m_y);
			return true;
		}
		public POS2D_S DeepClone()
		{
			POS2D_S clone = new POS2D_S();
			clone.SetValue(m_x, m_y);
			return clone;
		}

		public void SetValue(POS2D_S b)
		{
			m_x = b.m_x;
			m_y = b.m_y;
		}
		public void SetValue(short x, short y)
		{
			m_x = x;
			m_y = y;
		}
		public POS2D_S GetValue() { return this; }
	}

	public class ProtoBool : NetMessageTrans
	{
		private bool m_val = false;

		public bool equals(System.Object o)
		{
			if (!(o.GetType() == typeof(System.Boolean)))
			{
				return false;
			}
			ProtoBool p = (ProtoBool)o;
			if (!(p.equals(this.m_val)))
			{
				return false;
			}
			return true;
		}
		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
		public static bool operator ==(ProtoBool lhs, ProtoBool rhs)
		{
			return lhs.m_val == rhs.m_val;
		}
		public static bool operator !=(ProtoBool lhs, ProtoBool rhs)
		{
			return lhs.m_val != rhs.m_val;
		}
		public static bool operator ==(ProtoBool lhs, bool rhs)
		{
			return lhs.m_val == rhs;
		}
		public static bool operator !=(ProtoBool lhs, bool rhs)
		{
			return lhs.m_val != rhs;
		}
		public override int GetHashCode()
		{
			return m_val.GetHashCode();
		}

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(m_val);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref m_val);
			return true;
		}
		public ProtoBool DeepClone()
		{
			ProtoBool clone = new ProtoBool();
			clone.SetValue(m_val);
			return clone;
		}

		public void SetValue(bool b)
		{
			m_val = b;
		}
		public bool GetValue() { return m_val; }

	}

	public class ProtoTinyBinary : NetMessageTrans
	{
		private List<byte> m_val;

		public void SetValue(List<byte> s)
		{
			m_val = s;
		}
		public List<byte> GetValue() { return m_val; }
		public void WriteToMsg(NetMsg msg)
		{
			if (m_val != null)
			{
				int len = m_val.Count;
				msg.Write((ushort)len);
				for (int i = 0; i < len; ++i)
					msg.Write(m_val[i]);
			}

		}

		public bool ReadFromMsg(NetMsg msg)
		{
			if (m_val != null)
				m_val.Clear();
			else
				m_val = new List<byte>();
			ushort len = 0;
			msg.Read(ref len);
			for (int i = 0; i < len; ++i)
			{
				byte b = 0;
				msg.Read(ref b);
				m_val.Add(b);

			}
			return true;
		}
		public ProtoTinyBinary DeepClone()
		{
			ProtoTinyBinary clone = new ProtoTinyBinary();
			clone.SetValue(new List<byte>(m_val));
			return clone;
		}

	}

	//public class UserName : ProtoString { }

	//public class PassWord : ProtoString { }

	////	public class MacAddress:ProtoString{}

	//	typedef unsigned char		BYTE;
    [DebuggerDisplay("val = {base.m_val}")]
	public class BYTE : ProtoByte { public new BYTE DeepClone() { BYTE clone = new BYTE(); clone.SetValue(this.GetValue()); return clone; } }
	//	typedef unsigned long		DWORD;
    [DebuggerDisplay("val = {base.m_val}")]
	public class DWORD : ProtoUInt { public new DWORD DeepClone() { DWORD clone = new DWORD(); clone.SetValue(this.GetValue()); return clone; } }
	//	typedef unsigned short		WORD;

    [DebuggerDisplay("val = {base.m_val}")]
	public class WORD : ProtoUshort { public new WORD DeepClone() { WORD clone = new WORD(); clone.SetValue(this.GetValue()); return clone; } }

    [DebuggerDisplay("val = {base.m_val}")]
	public class INT : ProtoInt { public new INT DeepClone() { INT clone = new INT(); clone.SetValue(this.GetValue()); return clone; } }

    [DebuggerDisplay("val = {base.m_val}")]
	public class Long : ProtoInt { public new Long DeepClone() { Long clone = new Long(); clone.SetValue(this.GetValue()); return clone; } }

    [DebuggerDisplay("val = {base.m_val}")]
	public class ULong : ProtoULong { public new ULong DeepClone() { ULong clone = new ULong(); clone.SetValue(this.GetValue()); return clone; } }

    [DebuggerDisplay("val = {base.m_val}")]
	public class FLOAT : ProtoFloat { public new FLOAT DeepClone() { FLOAT clone = new FLOAT(); clone.SetValue(this.GetValue()); return clone; } }


	//public class UserID : DWORD { }

	//public class RoleID : DWORD { public new RoleID DeepClone() { RoleID clone = new RoleID(); clone.SetValue(this.GetValue()); return clone; } }	//角色ID
	//public class CharacterID : RoleID { public new CharacterID DeepClone() { CharacterID clone = new CharacterID(); clone.SetValue(this.GetValue()); return clone; } }	//玩家ID

	//public class ErrorType : WORD { }

	//	public class DictID:WORD{}

	//	public class DictInfo{}

	public class UnitGender : ProtoByte { public new UnitGender DeepClone() { UnitGender clone = new UnitGender(); clone.SetValue(this.GetValue()); return clone; } }

	//	typedef long				TIME_SEC;
	public class TIME_SEC : Long { public new TIME_SEC DeepClone() { TIME_SEC clone = new TIME_SEC(); clone.SetValue(this.GetValue()); return clone; } }

	//	typedef long long			TIME_MSEL;
	public class TIME_MSEL : ProtoLongLong { public new TIME_MSEL DeepClone() { TIME_MSEL clone = new TIME_MSEL(); clone.SetValue(this.GetValue()); return clone; } }

	//	typedef DWORD				SerialType;

	//	typedef unsigned long long	QWORD;
	public class QWORD : ProtoULongLong { public new QWORD DeepClone() { QWORD clone = new QWORD(); clone.SetValue(this.GetValue()); return clone; } }


	//	typedef const char *		PCSTR;

	//	typedef WORD				HandleType;
	public class SerialType : DWORD { public new SerialType DeepClone() { SerialType clone = new SerialType(); clone.SetValue(this.GetValue()); return clone; } }
	public class HandleType : WORD { public new HandleType DeepClone() { HandleType clone = new HandleType(); clone.SetValue(this.GetValue()); return clone; } }

	public class SessionHandle : NetMessageTrans
	{
		public HandleType handle = new HandleType();
		public SerialType serial = new SerialType();

		public bool equals(System.Object o)
		{
            if (!(o.GetType() == typeof(SessionHandle)))
			{
				return false;
			}
            SessionHandle p = (SessionHandle)o;
            if (!(p.handle == this.handle && p.serial == this.serial))
			{
				return false;
			}
			return true;
		}
		public override bool Equals(System.Object o)
		{
			return equals(o);
		}
        public static bool operator ==(SessionHandle lhs, SessionHandle rhs)
		{
            return lhs.handle == rhs.handle && lhs.serial == rhs.serial;
		}
        public static bool operator !=(SessionHandle lhs, SessionHandle rhs)
		{
            return lhs.handle != rhs.handle || lhs.serial != rhs.serial;
		}
		public override int GetHashCode()
		{
            return handle.GetHashCode() + serial.GetHashCode();
		}

		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(handle);
			msg.Write(serial);
		}

		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref handle);
			msg.Read(ref serial);
			return true;
		}
		public SessionHandle DeepClone()
		{
			SessionHandle clone = new SessionHandle();
			clone.SetValue(handle, serial);
			return clone;
		}

		public void SetValue(SessionHandle b)
		{
			handle = b.handle;
			serial = b.serial;
		}
		public void SetValue(HandleType x, SerialType y)
		{
			handle = x;
			serial = y;
		}
		public SessionHandle GetValue() { return this; }


	}

	//	typedef DWORD				IP_TYPE;
	public class IP_TYPE : DWORD { public new IP_TYPE DeepClone() { IP_TYPE clone = new IP_TYPE(); clone.SetValue(this.GetValue()); return clone; } }

	//	typedef WORD				PORT_TYPE;
	public class PORT_TYPE : WORD { public new PORT_TYPE DeepClone() { PORT_TYPE clone = new PORT_TYPE(); clone.SetValue(this.GetValue()); return clone; } }

	//public class MacAddress : ProtoString { public new MacAddress DeepClone() { MacAddress clone = new MacAddress(); clone.SetValue(this.GetValue()); return clone; } }	//mac地址
	//public class NickName : ProtoString { public new NickName DeepClone() { NickName clone = new NickName(); clone.SetValue(this.GetValue()); return clone; } }	//角色(包括玩家)昵称





}
