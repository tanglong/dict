#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// longame.NetFW.OnProcessMsgHandler
struct OnProcessMsgHandler_t1743510888;
// System.Object
struct Il2CppObject;
// longame.NetFW.ProtocolBase
struct ProtocolBase_t3085277944;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_longame_NetFW_ProtocolBase3085277944.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void longame.NetFW.OnProcessMsgHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void OnProcessMsgHandler__ctor_m1079501855 (OnProcessMsgHandler_t1743510888 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.OnProcessMsgHandler::Invoke(longame.NetFW.ProtocolBase)
extern "C"  void OnProcessMsgHandler_Invoke_m2505758751 (OnProcessMsgHandler_t1743510888 * __this, ProtocolBase_t3085277944 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnProcessMsgHandler_t1743510888(Il2CppObject* delegate, ProtocolBase_t3085277944 * ___msg);
// System.IAsyncResult longame.NetFW.OnProcessMsgHandler::BeginInvoke(longame.NetFW.ProtocolBase,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnProcessMsgHandler_BeginInvoke_m728863110 (OnProcessMsgHandler_t1743510888 * __this, ProtocolBase_t3085277944 * ___msg, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.OnProcessMsgHandler::EndInvoke(System.IAsyncResult)
extern "C"  void OnProcessMsgHandler_EndInvoke_m2370321839 (OnProcessMsgHandler_t1743510888 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
