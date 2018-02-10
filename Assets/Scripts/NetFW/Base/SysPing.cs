using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace longame.NetFW
{
    public class CSysPing
    {
        ///*! @brief 处理系统PING请求
        //    @ingroup buildin
        //*/
        //public static bool onSysPingReq(
        //    Session pSession,	//连接对象指针
        //    NetMsg msg		//网络消息
        //    )
        //{
        //    //@todo
        //    /*
        //    Message msgSend;
        //    msgSend.ID(Types.SYSPING_ACK);
        //    pSession.sendMessage(msgSend);
        //     */
        //    return true;
        //}

        ///*! @brief 处理系统PING响应
        //    @ingroup buildin
        //*/
        //public static bool onSysPingAck(
        //    Session pSession,	//连接对象指针
        //    NetMsg msg		//网络消息
        //    )
        //{
        //    return true;
        //}

        public static SysPingTime getDefault()
        {
            if (m_default == null)
            {
                m_default = new SysPingTime();
                Int32 [] timeData = new Int32[GDefine.SYSPING_KEEPCNT+1];
                 
			    Int32 tm=GDefine.SYSPING_KEEPIDLE;
                for (int i = 0; i < timeData.Length; ++i)
			    {
				    timeData[i]=tm;
				    tm+=GDefine.SYSPING_KEEPINTVL;
			    }
                m_default.init(timeData);
            }
            return m_default;
        }
		public static SysPingTime getCustom(int SYSPING_KEEPIDLE, int SYSPING_KEEPINTVL)
		{
			m_default = new SysPingTime();
			Int32[] timeData = new Int32[GDefine.SYSPING_KEEPCNT + 1];

			Int32 tm = SYSPING_KEEPIDLE;
			for (int i = 0; i < timeData.Length; ++i)
			{
				timeData[i] = tm;
				tm += SYSPING_KEEPINTVL;
			}
			m_default.init(timeData);
			return m_default;
		}

        private static SysPingTime m_default;

    };

	public class SysPingTime
	{
		public void init(Int32[] pingTimes)
        {
            if(pingTimes.Length==0)
            {
                return;
            }
            times = pingTimes;
        }

		public Int32 getNextPingTime(Byte count)
        {
            return times[count];
        }

		public Byte getMaxPingCount()
        {
            return (Byte)times.Length;
        }

		private Int32[] 	times;			//系统PING时间数组地址
	};

	//extern SysPingTime g_sysPingTime;
}
