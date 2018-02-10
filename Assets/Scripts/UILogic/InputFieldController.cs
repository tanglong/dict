using UnityEngine;
using UnityEngine.UI;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using longame.config;

public class InputFieldController : MonoBehaviour {

    void Awake()
    {
        input = gameObject.GetComponent<InputField>();

        var se = new InputField.SubmitEvent();
        se.AddListener(SubmitContent);
        input.onEndEdit = se;

        var oce = new InputField.OnChangeEvent();
        oce.AddListener(EnterContent);
        input.onValueChanged = oce;

        Transform butTransform = gameObject.transform.Find("Button");
        Button clearBut = butTransform.gameObject.GetComponent<Button>();
        clearBut.onClick.AddListener(delegate { ClearSearchWord(); });
    }

    InputField input = null;
    Button[] queryButtons = new Button[20];
    ScrollRect scrollRect = null;
    GameObject textRect = null;
    Text contentText = null;
    // Use this for initialization
    void Start () {

        GameObject parent = gameObject.transform.parent.gameObject;
        for (int i = 0; i < 20; ++i)
        {
            int j = i + 1;
            Transform butTransform = parent.transform.Find("Scroll View/Viewport/Content/Button_query_" + j.ToString());
            queryButtons[i] = butTransform.gameObject.GetComponent<Button>();
            queryButtons[i].gameObject.active = false;
        }
        scrollRect = parent.transform.Find("Scroll View").gameObject.GetComponent<ScrollRect>();
        scrollRect.horizontalScrollbar.gameObject.active = false;
        scrollRect.verticalScrollbar.gameObject.active = false;

        textRect = parent.transform.Find("Display").gameObject;
        Transform displayTransform = parent.transform.Find("Display/Viewport/Text");
        contentText = displayTransform.gameObject.GetComponent<Text>();
        contentText.gameObject.active = true;

        SwitchToSearchUI();
    }
	
	// Update is called once per frame
	void Update () {
	
	}

    void SwitchToSearchUI()
    {
        textRect.active = false;
        scrollRect.gameObject.active = true;
        //gameObject.active = true;
        input.text = "";

        //EventSystem.current.SetSelectedGameObject(input.gameObject, null);
        //input.OnPointerClick(new PointerEventData(EventSystem.current));
        input.ActivateInputField();
        input.Select();
    }

    void SwitchToDisplayUI()
    {
        textRect.active = true;
        scrollRect.gameObject.active = false;
        //gameObject.active = false;
    }


    private void SubmitContent(string arg)
    {
        DictInfoC dictInfo =  DictInfoC_Reader.getInstance().getName(arg);
        if(dictInfo == null)
        {
            return;
        }
    }

    private void EnterContent(string arg)
    {
        Debug.Log("EnterContent:"+arg);

        string InputString = input.text;
        if(InputString == "")
        {
            for (int i = 0; i < 20; ++i)
            {
                queryButtons[i].gameObject.active = false;
            }
            scrollRect.gameObject.active = false;
            return;
        }
        scrollRect.gameObject.active = true;

        List<DictInfoC> lstDictInfos = DictInfoC_Reader.getInstance().getMatchName(InputString);

        GameObject parent = gameObject.transform.parent.gameObject;

        for (int i = 0; i < 20; ++i)
        {
            queryButtons[i].gameObject.active = false;
        }

        int k = 0;
        for (int i = 0; i < lstDictInfos.Count; ++i)
        {
            for(int j = 0; j < lstDictInfos[i].vecItems.Count; ++j)
            {
                if( k >= 20)
                {
                    break;
                }

                queryButtons[k].gameObject.active = true;
                Text buttonText = queryButtons[k].GetComponentInChildren<Text>();

                string head = lstDictInfos[i].vecItems[j].head.GetValue();
                buttonText.text = head;

                int wordIndex = (int)lstDictInfos[i].id.GetValue();

                queryButtons[k].onClick.RemoveAllListeners();
                queryButtons[k].onClick.AddListener(delegate { ClickSearchWord(wordIndex); });
                ++k;
            }
        }
        if(k > 0)
        {
            textRect.gameObject.active = false;
        }

    }

    void ClickSearchWord(int i)
    {
        DictInfoC info = DictInfoC_Reader.getInstance().getInfo(i);
        SwitchToDisplayUI();

        String strDisplay = null;
        
        for (int k = 0; k != info.vecItems.Count; ++k)
        {
            strDisplay += "\n";
            strDisplay += "<b>";
            strDisplay += "<color=D9CCD9FF>";
            strDisplay += info.vecItems[k].name.GetValue();
            strDisplay += "</color>";
            strDisplay += "</b>";
            strDisplay += "\n";
            strDisplay += "<b>";
            strDisplay += "<color=teal>";
            strDisplay += info.vecItems[k].head.GetValue();
            strDisplay += "</color>";
            strDisplay += "</b>";
            strDisplay += "\n";
            strDisplay += info.vecItems[k].explain.GetValue();
        }
        contentText.text = strDisplay;
    }

    void ClearSearchWord()
    {
        input.text = "";
    }
}
