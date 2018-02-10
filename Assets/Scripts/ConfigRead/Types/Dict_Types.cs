using System;
using longame.NetFW;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

/*
字典信息
*/


namespace longame.config
{//协议相关类型定义//
	public class DictElementInfoS :NetMessageTrans	//字典信息//
	{
		public ProtoString	name = new ProtoString();		//字典ID//
		public ProtoString	head = new ProtoString();		//字典头//
		public ProtoString	explain = new ProtoString();	//字典内容//
		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(this.name);
			msg.Write(this.head);
			msg.Write(this.explain);
		}
		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref this.name);
			msg.Read(ref this.head);
			msg.Read(ref this.explain);
			return true;
		}
		public DictElementInfoS DeepClone()
		{
			DictElementInfoS clone = new DictElementInfoS();
			clone.name = this.name.DeepClone();
			clone.head = this.head.DeepClone();
			clone.explain = this.explain.DeepClone();
			return clone;
		}
	}

	
	public class DictInfoC :NetMessageTrans	//字典信息//
	{
		public DWORD					id = new DWORD();							//字典ID//
		public List<DictElementInfoS>	vecItems = new List<DictElementInfoS>();	//字典//
		public void WriteToMsg(NetMsg msg)
		{
			msg.Write(this.id);
			
			msg.Write((byte)vecItems.Count);
			for(int i = 0;i<vecItems.Count;++i)
			{
				msg.Write(this.vecItems[i]);
			}
		}
		public bool ReadFromMsg(NetMsg msg)
		{
			msg.Read(ref this.id);
			
			vecItems.Clear();
			byte vecItems_size = 0;
			msg.Read(ref vecItems_size);
			for(int i = 0;i<vecItems_size;++i)
			{
				DictElementInfoS info = new DictElementInfoS();
				msg.Read(ref info);
				vecItems.Add(info);
			}
			return true;
		}
		public DictInfoC DeepClone()
		{
			DictInfoC clone = new DictInfoC();
			clone.id = this.id.DeepClone();
			
			int vecItems_size = vecItems.Count;
			clone.vecItems.Clear();
			for(int i = 0;i<vecItems_size;++i)
			{
				clone.vecItems.Add(vecItems[i].DeepClone());
			}
			return clone;
		}
	}
	public class DictInfoC_Config : ConfigReaderClass<DictInfoC>
	{
		protected override int getKey(DictInfoC info)
		{
			return (int)(info.id.GetValue());
		}
        protected override List<string> getName(DictInfoC info)
        {
            List<string> lstName = new List<string>();
            foreach(DictElementInfoS ele in info.vecItems)
            {
                lstName.Add(ele.name.GetValue());
                lstName.Add(ele.head.GetValue());
            }
            return lstName;
        }
	}
	public class DictInfoC_Reader
	{
		private static DictInfoC_Reader instance = null;

		protected DictInfoC_Reader ()
		{
		}

		public static DictInfoC_Reader getInstance()
		{
			if (instance == null)
				reset();
			return instance;
		}

		public static void reset()
		{
			instance = new DictInfoC_Reader();
			instance.init();
		}

		private DictInfoC_Config config;

        public void init()
		{
			this.config = new DictInfoC_Config();
			try
			{
                for (int i = 0;i < 13;++i)
                {
                    string str = "/Config/DictInfoC_" + i.ToString() + ".dat";
                    this.config.LoadConfigFile(str);
                }
            }
			catch(Exception e)
			{
                Debug.LogError("DictInfoC load Error"+ e.ToString());
			}

		}

		public DictInfoC getInfo(int index)
		{
			return this.config.getInfo(index);
		}

        public DictInfoC getName(string name)
        {
            return this.config.getName(name);
        }

        public List<DictInfoC> getMatchName(string name)
        {
            List<int> lstMatchID = this.config.PartialMatch(name,15);
            List<DictInfoC> lstDictInfos = new List<DictInfoC>();
            foreach(int kValue in lstMatchID)
            {
                DictInfoC dictValue = getInfo(kValue);
                lstDictInfos.Add(dictValue);
            }
            return lstDictInfos;
        }

		public int getCount()
		{
			return this.config.getCount();
		}

        public void addExtraInfo()
        {

        }
	}	
	
	
}

