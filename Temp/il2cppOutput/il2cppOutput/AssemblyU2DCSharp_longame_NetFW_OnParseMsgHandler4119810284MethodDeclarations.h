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

// longame.NetFW.OnParseMsgHandler
struct OnParseMsgHandler_t4119810284;
// System.Object
struct Il2CppObject;
// longame.NetFW.NetMsg
struct NetMsg_t795376147;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_longame_NetFW_NetMsg795376147.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void longame.NetFW.OnParseMsgHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void OnParseMsgHandler__ctor_m1665788771 (OnParseMsgHandler_t4119810284 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.OnParseMsgHandler::Invoke(longame.NetFW.NetMsg)
extern "C"  bool OnParseMsgHandler_Invoke_m3448635316 (OnParseMsgHandler_t4119810284 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_OnParseMsgHandler_t4119810284(Il2CppObject* delegate, NetMsg_t795376147 * ___msg);
// System.IAsyncResult longame.NetFW.OnParseMsgHandler::BeginInvoke(longame.NetFW.NetMsg,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnParseMsgHandler_BeginInvoke_m3708365669 (OnParseMsgHandler_t4119810284 * __this, NetMsg_t795376147 * ___msg, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.OnParseMsgHandler::EndInvoke(System.IAsyncResult)
extern "C"  bool OnParseMsgHandler_EndInvoke_m3083309503 (OnParseMsgHandler_t4119810284 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
