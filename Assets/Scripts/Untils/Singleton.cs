using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;


public abstract class Singleton<T> : System.Object where T : Singleton<T>,new()
{
    private static T m_instance = null;
    public static T GetInstance()
    {
        if(m_instance == null)
        {
            m_instance = new T();
            return m_instance;
         }
         return m_instance;
    }

    public virtual int Init()
    {
        return 0;
    }

    public virtual int Start()
    {
        return 0;
    }

    public virtual int Update()
    {
        return 0;
    }

    public virtual int Stop()
    {
        return 0;
    }
  }


public class SingletonComponent<T> : MonoBehaviour where T : MonoBehaviour
{
    private static T m_instance = null;
    public static T GetInstance()
    {
        if (m_instance == null)
        {
            m_instance = FindObjectOfType(typeof(T)) as T;
            if (m_instance == null)
            {
                string name = typeof(T).ToString() + @"(Singleton)";
                m_instance = new GameObject(name).AddComponent<T>();
                DontDestroyOnLoad(m_instance);
            }
        }
        return m_instance;
    }
}



public class MyComponentCtrl : MonoBehaviour
{
    static Dictionary<string, GameObject> ComponentObjDic = new Dictionary<string, GameObject>();

    public static T Attach<T>(string ComponentName, bool isNewObj) where T : Component
    {
        return Attach<T>(ComponentName, isNewObj, null);
    }

    public static T Attach<T>(string ComponentName, bool isNewObj, GameObject MainObj) where T : Component
    {
        return Attach<T>(ComponentName, isNewObj, MainObj, true);
    }

    public static T Attach<T>(string ComponentName, bool isNewObj, GameObject MainObj, bool IsSubObj) where T : Component
    {
        return Attach<T>(ComponentName, isNewObj, MainObj, IsSubObj, false);
    }

    /// <summary>
    /// 将指定的组件附加到一个单独的Object上//
    /// </summary>
    /// <typeparam name="T">需要附加的组件Classs名称</typeparam>
    /// <param name="ComponentName">给该组件取得名称</param>
    /// <param name="isNewObj">是否生成新的物件</param>
    /// <param name="MainObj">父物件</param>
    /// <param name="IsSubObj">是否作为父物件的子物件</param>
    /// <param name="DontDestoryOnLoad">是否在载入场景时不摧毁该物件</param>
    /// <returns>返回生成的组件</returns>
    /// 
    public static T Attach<T>(string ComponentName, bool isNewObj, GameObject MainObj, bool IsSubObj, bool DontDestoryOnLoad) where T : Component
    {
        GameObject obj = null;
        if (isNewObj)
        {
            //obj = (GameObject)GameObject.FindObjectOfType(typeof(T));
            obj = GameObject.Find(ComponentName);
            if (obj == null)
            {
                obj = new GameObject(ComponentName);
                if (MainObj != null && IsSubObj)
                    obj.transform.parent = MainObj.transform;
            }
        }
        else if (MainObj != null)
        {
            obj = MainObj;
        }
        else
        {
            obj = new GameObject(ComponentName);
        }

        T newObj = obj.GetComponent<T>();
        if (newObj == null)
        {
            newObj = obj.AddComponent<T>();
        }

        if (DontDestoryOnLoad)
        {
            DontDestroyOnLoad(obj.gameObject);
        }

        if (!ComponentObjDic.ContainsKey(ComponentName))
        {
            ComponentObjDic.Add(ComponentName, obj);
        }
        return newObj;
    }

    public static void DestoryAllObj()
    {
        if (ComponentObjDic != null && ComponentObjDic.Count > 0)
        {
            foreach (KeyValuePair<string, GameObject> ele in ComponentObjDic)
            {
                if (ele.Value != null)
                    Destroy(ele.Value);
            }
        }
        ComponentObjDic.Clear();
    }

    public static void DestoryObj(string name)
    {
        if (ComponentObjDic.ContainsKey(name))
        {
            Destroy(ComponentObjDic[name]);
            ComponentObjDic.Remove(name);
        }
    }
}