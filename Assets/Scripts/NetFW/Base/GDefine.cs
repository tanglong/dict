using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace longame.NetFW
{
    class GDefine
    {
        public const int NETWORK_BUF_SIZE = 1024 *4* 16;
        public const int NETWORK_MSG_HEADER = 4;
        public const int MAX_DYNAMIC_PACKETS = 50000;

        public const UInt16 SYSPING_REQ = 0xFFFA;// 65530,系统PING请求
        public const UInt16 SYSPING_ACK = 0xFFFB;// 65531,系统PING响应
        public const UInt16 PROTOCOL_VERSION_NTF = 0xFFFC;// 65532,协议版本通知
        public const UInt16 PROTOCOL_VERSION_AVAILABLE_NTF = 0xFFFD;//最低可运行版本
		//public const int SYSPING_KEEPIDLE 	= 30000;	//(毫秒)多长时间未收到消息就发送SYSPING探测
        public const int SYSPING_KEEPIDLE 	= 10000;	//(毫秒)多长时间未收到消息就发送SYSPING探测
        public const int SYSPING_KEEPINTVL	= 10000;	//(毫秒),发送SYSPING探测的间隔是多少
		//public const int SYSPING_KEEPCNT	= 3;		//总共要发多少次SYSPING探测
        public const int SYSPING_KEEPCNT	= 2;		//总共要发多少次SYSPING探测
    }


	public enum SMODULEMODE
	{
		MOD_SINGLE,
		MOD_MULTIPLE
	};
	public delegate void dos(byte[] b, int s, int l);	
	/// <summary>
	/// 安全模块,用以给消息加密//
	/// </summary>
	public class SModule
	{
		/// <summary>
		/// 加解密的密钥,默认是Longame_projA_zhslm
		/// </summary>
		//static byte[] _ = new byte[] 
		//{
		//	0x4C, 0x6F, 0x6E, 0x67, 0x61, 0x6D, 0x65, 0x5F, 0x70, 0x72, 0x6F, 0x6A, 0x41, 0x5F, 0x7A, 0x68,
		//	0x73, 0x6C, 0x6D,
		//};
		/// <summary>
		/// 加解密的密钥,默认是NetEncryptTestStr
		/// </summary>
		static byte[] _ = new byte[] 
		{
			0x4E, 0x65, 0x74, 0x45, 0x6E, 0x63, 0x72, 0x79, 0x70, 0x74, 0x54, 0x65, 0x73, 0x74, 0x53, 0x74,
			0x72,
		};

		private dos m_do;	    //默认消息解析函数//

		/// <summary>
		/// 加密模式
		/// </summary>
		SMODULEMODE m_mode = SMODULEMODE.MOD_MULTIPLE;
		/// <summary>
		/// 用指定的密钥字符串和模式进行加密
		/// </summary>
		/// <param name="keyStr"></param>
		/// <param name="mode"></param>
		public SModule(string ks, SMODULEMODE m)
			: base()
		{
			SetKStr(ks);
			SetMode(m);
		}
		/// <summary>
		/// 用指定的密钥和模式加密
		/// </summary>
		/// <param name="key"></param>
		/// <param name="mode"></param>
		public SModule(byte[] k, SMODULEMODE m)
			: base()
		{
			SetK(k);
			SetMode(m);
		}
		/// <summary>
		/// 用默认的密钥进行加密
		/// </summary>
		/// <param name="mode"></param>
		public SModule(SMODULEMODE m)
			: base()
		{
			SetMode(m);
		}
		/// <summary>
		/// 用默认的密钥默认的模式加密
		/// </summary>
		public SModule()
		{
			m_do = new dos((b, s, l) =>
			{
				if (_ == null)
				{
					return;
				}
				if (s >= l)
				{
					return;
				}
				int n = _.Length;

				int t = 0;
				for (int i = s; i < l; ++i)
				{
					b[i] ^= _[t];
					++t;
					if (t == n)
						t = 0;
				}
				if (m_mode == SMODULEMODE.MOD_SINGLE)
				{
					return;
				}
				t = 0;
				for (int i = l - 1; i >= s; --i)
				{
					b[i] ^= _[t];
					++t;
					if (t == n)
						t = 0;
				}
			});

		}
		public void SetMode(SMODULEMODE m = SMODULEMODE.MOD_MULTIPLE)
		{
			m_mode = m;
		}
		public void SetK(byte[] k)
		{
			_ = k;
		}
		public void SetKStr(string ks)
		{
			_ = System.Text.Encoding.ASCII.GetBytes(ks);
		}
		public void SetF(dos d)
		{
			m_do = d;
		}
		/// <summary>
		/// 进行加密操作
		/// </summary>
		/// <param name="b">需要加密的buf</param>
		/// <param name="s">起始位置(包含)</param>
		/// <param name="l">结束位置(不包含)</param>
		public void Do(byte[] b, int s, int l)
		{
			if (m_do != null)
			{
				m_do(b, s, l);
			}
			//if (_ == null)
			//{
			//	return;
			//}
			//if (s >= l)
			//{
			//	return;
			//}
			//int n = _.Length;

			//int t = 0;
			//for (int i = s; i < l; ++i)
			//{
			//	b[i] ^= _[t];
			//	++t;
			//	if (t == n)
			//		t = 0;
			//}
			//if (m_mode == SMODULEMODE.MOD_SINGLE)
			//{
			//	return;
			//}
			//t = 0;
			//for (int i = l - 1; i >= s; --i)
			//{
			//	b[i] ^= _[t];
			//	++t;
			//	if (t == n)
			//		t = 0;
			//}
		}

		public void Do(byte[] b, int s)
		{
			if (m_do != null)
			{
				m_do(b, s, b.Length);
			}
		}

		//这里保存所有的命令工厂//
		private static ClassStorage<SModule> storage = new ClassStorage<SModule>();
		public static ClassStorage<SModule> getStorage()
		{
			return storage;
		}


	}
}