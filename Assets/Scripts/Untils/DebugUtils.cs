using System;
using System.Diagnostics;
using UnityEngine;

public class DebugUtils
{
    [Conditional("DEBUG")]
    public static void Assert(bool _bCondition)
    {
        if (!_bCondition)
        {
            throw new Exception();
        }
    }
}

