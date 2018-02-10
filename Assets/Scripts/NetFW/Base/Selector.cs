using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Collections;
using System.Net.Sockets;

namespace longame.NetFW
{
    /*! @brief 选择器类
		@ingroup buildin
	*/
    public class Selector
    {
        private Dictionary<Socket, Selectable> m_sockets;	//套接字集合
		//private ArrayList m_baseFdSet;		                //基本描述符
		private List<Socket> m_baseFdSet;		                //基本描述符
        private static Selector m_instance;                 //实例

        public static Selector getInstance()
        {
            if (m_instance == null)
            {
                m_instance = new Selector();
				SystemTime.StartTimeTick();
            }
            return m_instance;
        }
        //! 加入套接字
		public bool insert(
			Selectable socket		
			)
        {
            if (m_sockets.ContainsKey(socket.getSocket()))
            {
                return false;
            }
            Socket s = socket.getSocket();
            m_sockets.Add(s, socket);
		    m_baseFdSet.Add(s);
            return true;
        }

		//! 删除套接字
		public bool remove(
			Selectable socket		
			)
        {
            if (!m_sockets.ContainsKey(socket.getSocket()))
            {
                return false;
            }
            m_sockets.Remove(socket.getSocket());
            m_baseFdSet.Remove(socket.getSocket());
            return true;
        }

		//! 构造函数
        private Selector()
        {
            m_sockets = new Dictionary<Socket, Selectable>();
			//m_baseFdSet = new ArrayList();
			m_baseFdSet = new List<Socket>();
		}

		//!运行例程，更新时间
        public int Update()
        {
			return 0;
            if (m_sockets.Count==0)
            {
                return 0;
            }

			//ArrayList recvFdSet = m_baseFdSet;
			//ArrayList sendFdSet = m_baseFdSet;
			List<Socket> recvFdSet = new List<Socket>(m_baseFdSet);
			List<Socket> sendFdSet = new List<Socket>(m_baseFdSet);

            Socket.Select(recvFdSet, sendFdSet, null, 0);
            

            {//接收数据标志
				//FileLogDebug.WriteLog(FLTEnum.SysLog,"recvFdSet.Count:{0}", recvFdSet.Count);
                for (int i = 0; i < recvFdSet.Count; i++)
                {
                    Selectable socket = getSelectable((Socket)recvFdSet[i]);
                    socket.CanRecvData = true;
                }
            }

            {//发送数据标志
				//FileLogDebug.WriteLog(FLTEnum.SysLog, "sendFdSet.Count:{0}", sendFdSet.Count);
                for (int i = 0; i < sendFdSet.Count; i++)
                {
                    Selectable socket = getSelectable((Socket)sendFdSet[i]);
                    socket.CanSendData = true;
                }
            }
            return 0;
        }

        /*! @brief获得相关联的可选择对象

			调用方应确保传入有效值,在该函数内假定总是会找到相关对象
		*/
		private Selectable getSelectable(
			Socket socket
			)
        {
            Selectable item;
            if (!m_sockets.TryGetValue(socket, out item))
                return null;
            return item;
        }

    }
}
