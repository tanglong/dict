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

// longame.NetFW.TimeOutSocket
struct TimeOutSocket_t2634392899;
// System.Net.Sockets.Socket
struct Socket_t150013987;
// System.Net.IPEndPoint
struct IPEndPoint_t1265996582;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.Object
struct Il2CppObject;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t970431102;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPEndPoint1265996582.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Net_Sockets_SocketAsyncEventArgs970431102.h"
#include "System_System_Net_Sockets_SocketError291509957.h"

// System.Void longame.NetFW.TimeOutSocket::.ctor()
extern "C"  void TimeOutSocket__ctor_m4042801000 (TimeOutSocket_t2634392899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket longame.NetFW.TimeOutSocket::BeginConnect(System.Net.IPEndPoint,System.Int32,System.AsyncCallback)
extern "C"  Socket_t150013987 * TimeOutSocket_BeginConnect_m27991032 (TimeOutSocket_t2634392899 * __this, IPEndPoint_t1265996582 * ___remoteEndPoint, int32_t ___timeoutMSec, AsyncCallback_t1363551830 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.TimeOutSocket::CallBackMethod(System.IAsyncResult)
extern "C"  void TimeOutSocket_CallBackMethod_m818905953 (TimeOutSocket_t2634392899 * __this, Il2CppObject * ___asyncresult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.TimeOutSocket::CheckConnectSuccessful()
extern "C"  bool TimeOutSocket_CheckConnectSuccessful_m3324262884 (TimeOutSocket_t2634392899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket longame.NetFW.TimeOutSocket::ConnectAsync(System.Net.IPEndPoint,System.Int32)
extern "C"  Socket_t150013987 * TimeOutSocket_ConnectAsync_m1754398109 (TimeOutSocket_t2634392899 * __this, IPEndPoint_t1265996582 * ___remoteEndPoint, int32_t ___timeoutMSec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.TimeOutSocket::OnConnect(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
extern "C"  void TimeOutSocket_OnConnect_m1726171427 (TimeOutSocket_t2634392899 * __this, Il2CppObject * ___sender, SocketAsyncEventArgs_t970431102 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError longame.NetFW.TimeOutSocket::GetSocketError()
extern "C"  int32_t TimeOutSocket_GetSocketError_m2326071381 (TimeOutSocket_t2634392899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketAsyncEventArgs longame.NetFW.TimeOutSocket::GetSocketAsyncEventArgs()
extern "C"  SocketAsyncEventArgs_t970431102 * TimeOutSocket_GetSocketAsyncEventArgs_m3161258865 (TimeOutSocket_t2634392899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
