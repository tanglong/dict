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

// SocketAsyncClient.SocketClient
struct SocketClient_t3318664090;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t970431102;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Net_Sockets_SocketAsyncEventArgs970431102.h"

// System.Void SocketAsyncClient.SocketClient::.ctor(System.String,System.Int32)
extern "C"  void SocketClient__ctor_m1380838872 (SocketClient_t3318664090 * __this, String_t* ___hostName, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketAsyncClient.SocketClient::.cctor()
extern "C"  void SocketClient__cctor_m3932533130 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SocketAsyncClient.SocketClient::get_ConnectState()
extern "C"  bool SocketClient_get_ConnectState_m3751563301 (SocketClient_t3318664090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketAsyncClient.SocketClient::Connect()
extern "C"  void SocketClient_Connect_m2777714187 (SocketClient_t3318664090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketAsyncClient.SocketClient::Disconnect()
extern "C"  void SocketClient_Disconnect_m801144829 (SocketClient_t3318664090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketAsyncClient.SocketClient::OnConnect(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
extern "C"  void SocketClient_OnConnect_m1691610728 (SocketClient_t3318664090 * __this, Il2CppObject * ___sender, SocketAsyncEventArgs_t970431102 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketAsyncClient.SocketClient::OnReceive(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
extern "C"  void SocketClient_OnReceive_m3738726479 (SocketClient_t3318664090 * __this, Il2CppObject * ___sender, SocketAsyncEventArgs_t970431102 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketAsyncClient.SocketClient::OnSend(System.Object,System.Net.Sockets.SocketAsyncEventArgs)
extern "C"  void SocketClient_OnSend_m3826613292 (SocketClient_t3318664090 * __this, Il2CppObject * ___sender, SocketAsyncEventArgs_t970431102 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketAsyncClient.SocketClient::ProcessError(System.Net.Sockets.SocketAsyncEventArgs)
extern "C"  void SocketClient_ProcessError_m1264974156 (SocketClient_t3318664090 * __this, SocketAsyncEventArgs_t970431102 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SocketAsyncClient.SocketClient::SendReceive(System.String)
extern "C"  String_t* SocketClient_SendReceive_m1622695369 (SocketClient_t3318664090 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SocketAsyncClient.SocketClient::Dispose()
extern "C"  void SocketClient_Dispose_m3607806464 (SocketClient_t3318664090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
