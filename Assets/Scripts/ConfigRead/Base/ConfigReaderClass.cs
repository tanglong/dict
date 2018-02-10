using System;
using System.Collections.Generic;
using System.Collections;
//using System.IO;
using longame.NetFW;
using UnityEngine;
using longame.config;

#pragma warning disable 0168 // variable declared but not used.
#pragma warning disable 0219 // variable assigned but not used.
#pragma warning disable 0414 // private field assigned but not used.

public abstract class ConfigReaderClass<CLASS> where CLASS : new()
{
    //private Hashtable data_hash = null;
	private const int MAX_PACKET_SIZE = 1024 * 4 * 16;
	private byte[] 	  buffer 		  = null;
	private NetMsg 	  message 		  = null;
	private int    	  readSize		  = 0;
	private Dictionary<int,CLASS> data_dict = new Dictionary<int, CLASS>();
    private Dictionary<string, int> name_data_dict = new Dictionary<string, int>();

    protected abstract int getKey(CLASS info);
    protected abstract List<string>  getName(CLASS info);


    public CLASS getInfo(int key)
	{
		if(data_dict.ContainsKey(key))
		{
			return (CLASS)this.data_dict[key];
		}
		return default(CLASS);
	}

    public CLASS getName(string name)
    {
        if (name_data_dict.ContainsKey(name))
        {
            int keyID = this.name_data_dict[name];
            return getInfo(keyID);
        }
        return default(CLASS);
    }


	public Dictionary<int, CLASS> getData()
	{
		return this.data_dict;
	}
	public int getCount()
	{
		return this.data_dict.Count;
	}


	private void reset(int size)
	{
		this.readSize = 0;
	}

	private void reloadMessage()
	{
		if(this.buffer.Length == this.readSize)
		{
			return;
		}
		int count = this.buffer.Length - this.readSize;
		if (count > MAX_PACKET_SIZE)
		{
			count = MAX_PACKET_SIZE-1;
		}
		this.message = new NetMsg();
		this.message.writeData(buffer, this.readSize, count);
	}
	
	private CLASS tryLoad()
	{
		NetMessageTrans info = (NetMessageTrans)(new CLASS());
		int _ptr = message.getReadPtr();
		info.ReadFromMsg(message);
		this.readSize += message.getReadPtr() - _ptr;
		return (CLASS)info;
	}

	static string GetConfigFilePath(string FileName, bool isStreamingPath)
	{
		string frontW = "";
		if (FileName.Length > 0 && FileName[0] != '/')
		{
			frontW = "/";
		}
		if (isStreamingPath)
			return Application.streamingAssetsPath + frontW + FileName;
		return Application.persistentDataPath + "/Longame" + frontW + FileName;
	}

	public void  LoadConfigFile(string FileName)
	{
        //编辑器直接读取StreamingAssets文件夹的配置
#if UNITY_EDITOR
        int item_size = -1;
#else
        int item_size = LoadFromPersistentData(FileName);
#endif
        if (item_size == -1)
        {
            item_size = LoadFromStreamingAssets(FileName);
        }
        if (item_size == -1)
        {
            Debug.LogError("Cant not Load Config !");
            return;
        }

		reset(item_size);
		//reset1(item_size);

		reloadMessage();
		CLASS info;
		for(int i = 0; i < item_size; ++i)
		{
			try
			{
				info = tryLoad();
			}
			catch(Exception e)
			{
				reloadMessage();
				info = tryLoad();
                //Debug.LogError("LoadDataFile Error!"+ FileName+",exception:"+e.ToString());
			}
            int keyID = getKey(info);
            data_dict.Add(keyID,info);

            List<string> lstName = getName(info);
            foreach (string name in lstName)
            {
                if (!name_data_dict.ContainsKey(name))
                {
                    name_data_dict.Add(name, keyID);
                }
            }
        }

		buffer = null;
	}

    int LoadFromStreamingAssets(string FileName)
    {
        //检查StreamingAssets目录中否有该文件//
        string file_name = GetConfigFilePath(FileName, true);

#if OliverDebug
		FileLogDebug.WriteLog(FLTEnum.SysLog, "file_name:{0}", file_name);
#endif
        bool isAndroidWWW = false;
        int item_size = 0;

#if UNITY_ANDROID
		if(Application.platform == RuntimePlatform.Android)
		{//Is Android System read file
 			WWW www = new WWW(file_name);
			while (!www.isDone) { }
			int wwwlen = www.bytes.Length;
			if (wwwlen <= 0)
			{
				return -1;
			}
			byte[] buf = new byte[wwwlen];
			www.bytes.CopyTo(buf,0);

			item_size = buf[0] + buf[1] * 256 + buf[2] * 256 * 256 + buf[3] * 256 * 256 * 256;

			buffer = new byte[wwwlen - 4];
			for (int n = 4; n < wwwlen; ++n)
			{
				buffer[n - 4] = buf[n];
			}
			isAndroidWWW = true;
			www.Dispose();
		}
#endif
        if (isAndroidWWW == false)
        {//Is not Android System read file
            if (!System.IO.File.Exists(file_name))
            {
#if OliverDebug
				DebugLog.LogW("FileName ({0})  can't exist!",file_name);
#endif
                return -1;
            }
			System.IO.Stream inStream = System.IO.File.OpenRead(file_name);
			//System.IO.Stream inStream = Windows.Storage.OpenRead(file_name);
			item_size = inStream.ReadByte() + inStream.ReadByte() * 256 + inStream.ReadByte() * 256 * 256 + inStream.ReadByte() * 256 * 256 * 256;
            buffer = new byte[inStream.Length];
            inStream.Read(buffer, 0, buffer.Length);
            inStream.Close();
        }

        return item_size;
    }

    int LoadFromPersistentData(string FileName)
    {
        int item_size = 0;
        //检查用户数据目录里是否有该文件//
        string file_name = GetConfigFilePath(FileName, false);
        if (!System.IO.File.Exists(file_name))
        {
#if OliverDebug
				DebugLog.LogW("FileName ({0}) can't exist!",file_name);
#endif
            return -1;
        }
		System.IO.Stream inStream = System.IO.File.OpenRead(file_name);
        item_size = inStream.ReadByte() + inStream.ReadByte() * 256 + inStream.ReadByte() * 256 * 256 + inStream.ReadByte() * 256 * 256 * 256;
        buffer = new byte[inStream.Length];
        inStream.Read(buffer, 0, buffer.Length);
        inStream.Close();
        return item_size;
    }

    public  List<int> PartialMatch(string partialKey,int num)
    {
        List<int> returnedValues = new List<int>();
        int curCount = 0;
        foreach (KeyValuePair<string,int> kValue in name_data_dict)
        {
            if (kValue.Key.StartsWith(partialKey))
            {
                if(curCount < num)
                {
                    if(returnedValues.Contains(kValue.Value))
                    {
                        continue;
                    }
                    returnedValues.Add(kValue.Value);
                    ++curCount;
                }
                else
                {
                    break;
                }
            }
        }
        return returnedValues;
    }
}

