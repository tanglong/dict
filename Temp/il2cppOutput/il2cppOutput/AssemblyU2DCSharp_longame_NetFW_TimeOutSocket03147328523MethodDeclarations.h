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

// longame.NetFW.TimeOutSocket0
struct TimeOutSocket0_t3147328523;
// System.Net.Sockets.Socket
struct Socket_t150013987;
// System.Net.IPEndPoint
struct IPEndPoint_t1265996582;
// System.Action`2<System.Net.Sockets.Socket,System.Net.IPEndPoint>
struct Action_2_t18544181;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_IPEndPoint1265996582.h"
#include "System_System_Net_Sockets_Socket150013987.h"

// System.Void longame.NetFW.TimeOutSocket0::.ctor()
extern "C"  void TimeOutSocket0__ctor_m1901650958 (TimeOutSocket0_t3147328523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket longame.NetFW.TimeOutSocket0::CheckConnectivityForProxyHost(System.Net.IPEndPoint,System.Int32)
extern "C"  Socket_t150013987 * TimeOutSocket0_CheckConnectivityForProxyHost_m3099117223 (Il2CppObject * __this /* static, unused */, IPEndPoint_t1265996582 * ___remoteEndPoint, int32_t ___timeoutMSec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.TimeOutSocket0::CallWithTimeout(System.Action`2<System.Net.Sockets.Socket,System.Net.IPEndPoint>,System.Int32,System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern "C"  void TimeOutSocket0_CallWithTimeout_m2545216715 (Il2CppObject * __this /* static, unused */, Action_2_t18544181 * ___action, int32_t ___timeoutMilliseconds, Socket_t150013987 * ___socket, IPEndPoint_t1265996582 * ___ipendPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.TimeOutSocket0::ConnectToProxyServers(System.Net.Sockets.Socket,System.Net.IPEndPoint)
extern "C"  void TimeOutSocket0_ConnectToProxyServers_m1147541358 (Il2CppObject * __this /* static, unused */, Socket_t150013987 * ___testSocket, IPEndPoint_t1265996582 * ___ipEndPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
