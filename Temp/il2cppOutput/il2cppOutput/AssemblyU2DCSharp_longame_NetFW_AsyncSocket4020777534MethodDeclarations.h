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

// longame.NetFW.AsyncSocket
struct AsyncSocket_t4020777534;
// System.Net.IPEndPoint
struct IPEndPoint_t1265996582;
// System.IAsyncResult
struct IAsyncResult_t537683269;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPEndPoint1265996582.h"
#include "AssemblyU2DCSharp_longame_NetFW_SocketConnectStateE794443370.h"

// System.Void longame.NetFW.AsyncSocket::.ctor()
extern "C"  void AsyncSocket__ctor_m2926796557 (AsyncSocket_t4020777534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.AsyncSocket::BeginConnect(System.Net.IPEndPoint,System.Int32)
extern "C"  void AsyncSocket_BeginConnect_m3556910857 (AsyncSocket_t4020777534 * __this, IPEndPoint_t1265996582 * ___remoteEndPoint, int32_t ___timeoutMSec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.SocketConnectStateEnum longame.NetFW.AsyncSocket::CheckConnectOk()
extern "C"  int32_t AsyncSocket_CheckConnectOk_m251747076 (AsyncSocket_t4020777534 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.AsyncSocket::CallBackMethod(System.IAsyncResult)
extern "C"  void AsyncSocket_CallBackMethod_m2230610310 (AsyncSocket_t4020777534 * __this, Il2CppObject * ___asyncresult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
