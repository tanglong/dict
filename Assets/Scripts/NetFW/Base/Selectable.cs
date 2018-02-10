using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Net.Sockets;
using System.Diagnostics;

namespace longame.NetFW
{
    public class Selectable:IDisposable
    {
        private Socket m_socket;		    //套按字
        private bool m_canRecvData;	        //可以接收数据
        public bool CanRecvData
        {
            get { return m_canRecvData; }
            set { m_canRecvData = value; }
        }
        private bool m_canSendData;	        //可以发送数据
        public bool CanSendData
        {
            get { return m_canSendData; }
            set { m_canSendData = value; }
        }


        //! 获得套按字
        public Socket getSocket()
        {
            return m_socket;
        }

        public void Dispose()
        {
        }

        protected Selectable()
        {
            m_canRecvData = true;
            m_canSendData = true;
        }

		//! 加入选择器
		protected bool joinSelector(
			Socket socket		//套按字
			)
        {
            Debug.Assert(m_socket == null);
            m_socket = socket;
            if (Selector.getInstance().insert(this))
            {
                return true;
            }
            else
            {
                m_socket = null;
                return false;
            }
        }

		//! 退出选择器
		protected bool quitSelector()
        {
            Debug.Assert(m_socket != null);
            if (Selector.getInstance().remove(this))
            {
                m_socket = null;
                return true;
            }
            else
            {
                return false;
            }
        }

    }
}
