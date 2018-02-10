using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;


class ClockMgr
{
    class ComplexTime
    {
        public UInt32 localTime = 0;
        public UInt32 serverTime = 0;    
    }

    private ComplexTime m_tComplexTime = new ComplexTime();
    private DateTime startTime = new System.DateTime(1970, 1, 1).ToLocalTime();

    public ClockMgr()
    {

    }

    public bool Init(UInt32 serverTime)
    {
        m_tComplexTime.serverTime = serverTime;
        m_tComplexTime.localTime = GetNowSecond();
        return true;
    }

    public UInt32 GetCurServerTime()
    {
        UInt32 nowSec = GetNowSecond();
        if(nowSec < m_tComplexTime.localTime)
        {
            return m_tComplexTime.serverTime;
        }
        return nowSec - m_tComplexTime.localTime + m_tComplexTime.serverTime;
    }

    public UInt32 GetCurClientTime()
    {
        return GetNowSecond();
    }

    public DateTime ConvertStampToDateTime(UInt32 stamp)
    {
        return startTime.AddSeconds((double)stamp);
    }

    public UInt32 ConvertDateTimeToStamp(System.DateTime time)
    {
        UInt32 stamp = (UInt32)(time - startTime).TotalSeconds;
        return stamp;
    }

    public UInt32 GetNowSecond()
    {
        return ConvertDateTimeToStamp(System.DateTime.Now);
    }

    public String ConvertStampToString(UInt32 stamp)
    {
        System.DateTime dateTime = ConvertStampToDateTime(stamp);
        return dateTime.ToString();
    }
}
