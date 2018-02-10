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

// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t970431102;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t1813008745;
// System.Net.Sockets.Socket
struct Socket_t150013987;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t673269884;
// System.Net.EndPoint
struct EndPoint_t1294049535;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket150013987.h"
#include "System_System_Net_Sockets_SocketAsyncOperation2602276174.h"
#include "System_System_Net_EndPoint1294049535.h"
#include "System_System_Net_Sockets_SocketError291509957.h"
#include "System_System_Net_Sockets_SocketFlags292238148.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Net_Sockets_SocketAsyncEventArgs970431102.h"

// System.Void System.Net.Sockets.SocketAsyncEventArgs::.ctor()
extern "C"  void SocketAsyncEventArgs__ctor_m2409327454 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::add_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
extern "C"  void SocketAsyncEventArgs_add_Completed_m504170843 (SocketAsyncEventArgs_t970431102 * __this, EventHandler_1_t1813008745 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::remove_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>)
extern "C"  void SocketAsyncEventArgs_remove_Completed_m3312204008 (SocketAsyncEventArgs_t970431102 * __this, EventHandler_1_t1813008745 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::get_AcceptSocket()
extern "C"  Socket_t150013987 * SocketAsyncEventArgs_get_AcceptSocket_m3084800424 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_AcceptSocket(System.Net.Sockets.Socket)
extern "C"  void SocketAsyncEventArgs_set_AcceptSocket_m3630769027 (SocketAsyncEventArgs_t970431102 * __this, Socket_t150013987 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.Sockets.SocketAsyncEventArgs::get_Buffer()
extern "C"  ByteU5BU5D_t58506160* SocketAsyncEventArgs_get_Buffer_m3362688133 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_Buffer(System.Byte[])
extern "C"  void SocketAsyncEventArgs_set_Buffer_m1714217670 (SocketAsyncEventArgs_t970431102 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::get_BufferList()
extern "C"  Il2CppObject* SocketAsyncEventArgs_get_BufferList_m2032263024 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BufferList(System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>)
extern "C"  void SocketAsyncEventArgs_set_BufferList_m4006237727 (SocketAsyncEventArgs_t970431102 * __this, Il2CppObject* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_BytesTransferred()
extern "C"  int32_t SocketAsyncEventArgs_get_BytesTransferred_m3649262106 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_BytesTransferred(System.Int32)
extern "C"  void SocketAsyncEventArgs_set_BytesTransferred_m621983759 (SocketAsyncEventArgs_t970431102 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_Count()
extern "C"  int32_t SocketAsyncEventArgs_get_Count_m1713632402 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_Count(System.Int32)
extern "C"  void SocketAsyncEventArgs_set_Count_m385332671 (SocketAsyncEventArgs_t970431102 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_DisconnectReuseSocket(System.Boolean)
extern "C"  void SocketAsyncEventArgs_set_DisconnectReuseSocket_m3843468833 (SocketAsyncEventArgs_t970431102 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.SocketAsyncEventArgs::get_LastOperation()
extern "C"  int32_t SocketAsyncEventArgs_get_LastOperation_m227446427 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_LastOperation(System.Net.Sockets.SocketAsyncOperation)
extern "C"  void SocketAsyncEventArgs_set_LastOperation_m3188860774 (SocketAsyncEventArgs_t970431102 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::get_Offset()
extern "C"  int32_t SocketAsyncEventArgs_get_Offset_m1199092434 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_Offset(System.Int32)
extern "C"  void SocketAsyncEventArgs_set_Offset_m2574729671 (SocketAsyncEventArgs_t970431102 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::get_RemoteEndPoint()
extern "C"  EndPoint_t1294049535 * SocketAsyncEventArgs_get_RemoteEndPoint_m3198498044 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_RemoteEndPoint(System.Net.EndPoint)
extern "C"  void SocketAsyncEventArgs_set_RemoteEndPoint_m1360575983 (SocketAsyncEventArgs_t970431102 * __this, EndPoint_t1294049535 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SendPacketsSendSize(System.Int32)
extern "C"  void SocketAsyncEventArgs_set_SendPacketsSendSize_m2537991804 (SocketAsyncEventArgs_t970431102 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::get_SocketError()
extern "C"  int32_t SocketAsyncEventArgs_get_SocketError_m3030139504 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketError(System.Net.Sockets.SocketError)
extern "C"  void SocketAsyncEventArgs_set_SocketError_m4002991197 (SocketAsyncEventArgs_t970431102 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncEventArgs::get_SocketFlags()
extern "C"  int32_t SocketAsyncEventArgs_get_SocketFlags_m25658192 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_SocketFlags(System.Net.Sockets.SocketFlags)
extern "C"  void SocketAsyncEventArgs_set_SocketFlags_m177381437 (SocketAsyncEventArgs_t970431102 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.SocketAsyncEventArgs::get_UserToken()
extern "C"  Il2CppObject * SocketAsyncEventArgs_get_UserToken_m1440215414 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::set_UserToken(System.Object)
extern "C"  void SocketAsyncEventArgs_set_UserToken_m3057049639 (SocketAsyncEventArgs_t970431102 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Finalize()
extern "C"  void SocketAsyncEventArgs_Finalize_m3178205252 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose(System.Boolean)
extern "C"  void SocketAsyncEventArgs_Dispose_m3038175826 (SocketAsyncEventArgs_t970431102 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::Dispose()
extern "C"  void SocketAsyncEventArgs_Dispose_m274593819 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::OnCompleted(System.Net.Sockets.SocketAsyncEventArgs)
extern "C"  void SocketAsyncEventArgs_OnCompleted_m3831078430 (SocketAsyncEventArgs_t970431102 * __this, SocketAsyncEventArgs_t970431102 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBuffer(System.Byte[],System.Int32,System.Int32)
extern "C"  void SocketAsyncEventArgs_SetBuffer_m2648613995 (SocketAsyncEventArgs_t970431102 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SetBufferInternal(System.Byte[],System.Int32,System.Int32)
extern "C"  void SocketAsyncEventArgs_SetBufferInternal_m4212212526 (SocketAsyncEventArgs_t970431102 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::ReceiveCallback()
extern "C"  void SocketAsyncEventArgs_ReceiveCallback_m1719428356 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::ConnectCallback()
extern "C"  void SocketAsyncEventArgs_ConnectCallback_m3063926347 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::TryConnect(System.Net.EndPoint)
extern "C"  int32_t SocketAsyncEventArgs_TryConnect_m2917118400 (SocketAsyncEventArgs_t970431102 * __this, EndPoint_t1294049535 * ___endpoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::SendCallback()
extern "C"  void SocketAsyncEventArgs_SendCallback_m1142713811 (SocketAsyncEventArgs_t970431102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.SocketAsyncEventArgs::DoOperation(System.Net.Sockets.SocketAsyncOperation,System.Net.Sockets.Socket)
extern "C"  void SocketAsyncEventArgs_DoOperation_m80157657 (SocketAsyncEventArgs_t970431102 * __this, int32_t ___operation, Socket_t150013987 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
