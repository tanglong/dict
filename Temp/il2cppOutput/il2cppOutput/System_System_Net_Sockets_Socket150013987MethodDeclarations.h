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

// System.Net.Sockets.Socket
struct Socket_t150013987;
// System.Net.SocketAddress
struct SocketAddress_t3972045899;
// System.Net.EndPoint
struct EndPoint_t1294049535;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3494006030;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t970431102;
// System.Exception
struct Exception_t1967233988;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily1632127208.h"
#include "System_System_Net_Sockets_SocketType3987933693.h"
#include "System_System_Net_Sockets_ProtocolType2288572066.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_Sockets_SocketAsyncEventArgs970431102.h"
#include "System_System_Net_Sockets_SelectMode2300501359.h"
#include "System_System_Net_Sockets_SocketFlags292238148.h"
#include "System_System_Net_SocketAddress3972045899.h"
#include "System_System_Net_EndPoint1294049535.h"
#include "System_System_Net_Sockets_SocketError291509957.h"
#include "System_System_Net_Sockets_SocketOptionLevel1963840268.h"
#include "System_System_Net_Sockets_SocketOptionName3764387107.h"
#include "System_System_Net_Sockets_SocketShutdown3653513113.h"

// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern "C"  void Socket__ctor_m3306971388 (Socket_t150013987 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.cctor()
extern "C"  void Socket__cctor_m3717010356 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::LocalEndPoint_internal(System.IntPtr,System.Int32&)
extern "C"  SocketAddress_t3972045899 * Socket_LocalEndPoint_internal_m842593232 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_LocalEndPoint()
extern "C"  EndPoint_t1294049535 * Socket_get_LocalEndPoint_m2353653724 (Socket_t150013987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.Net.IPAddress[],System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Socket_BeginConnect_m3154955140 (Socket_t150013987 * __this, IPAddressU5BU5D_t3494006030* ___addresses, int32_t ___port, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Socket_BeginConnect_m2964975029 (Socket_t150013987 * __this, String_t* ___host, int32_t ___port, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ConnectAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C"  bool Socket_ConnectAsync_m327318847 (Socket_t150013987 * __this, SocketAsyncEventArgs_t970431102 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress[],System.Int32)
extern "C"  void Socket_Connect_m2053194101 (Socket_t150013987 * __this, IPAddressU5BU5D_t3494006030* ___addresses, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Disconnect_internal(System.IntPtr,System.Boolean,System.Int32&)
extern "C"  void Socket_Disconnect_internal_m729858741 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, bool ___reuse, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Disconnect(System.Boolean)
extern "C"  void Socket_Disconnect_m1484513886 (Socket_t150013987 * __this, bool ___reuseSocket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::EndConnect(System.IAsyncResult)
extern "C"  void Socket_EndConnect_m526559305 (Socket_t150013987 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.Sockets.Socket::InvalidAsyncOp(System.String)
extern "C"  Exception_t1967233988 * Socket_InvalidAsyncOp_m521531680 (Socket_t150013987 * __this, String_t* ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
extern "C"  bool Socket_Poll_m3896260468 (Socket_t150013987 * __this, int32_t ___time_us, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C"  int32_t Socket_Receive_m1175719569 (Socket_t150013987 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::RecvFrom_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&)
extern "C"  int32_t Socket_RecvFrom_internal_m548074296 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t3972045899 ** ___sockaddr, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&)
extern "C"  int32_t Socket_ReceiveFrom_nochecks_m1640775589 (Socket_t150013987 * __this, ByteU5BU5D_t58506160* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1294049535 ** ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks_exc(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Boolean,System.Int32&)
extern "C"  int32_t Socket_ReceiveFrom_nochecks_exc_m1710579486 (Socket_t150013987 * __this, ByteU5BU5D_t58506160* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1294049535 ** ___remote_end, bool ___throwOnError, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
extern "C"  int32_t Socket_Send_m559194015 (Socket_t150013987 * __this, ByteU5BU5D_t58506160* ___buf, int32_t ___size, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal_real(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C"  int32_t Socket_SendTo_internal_real_m1099307538 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t3972045899 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress,System.Int32&)
extern "C"  int32_t Socket_SendTo_internal_m1277507089 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, SocketAddress_t3972045899 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::SendTo_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint)
extern "C"  int32_t Socket_SendTo_nochecks_m3330734301 (Socket_t150013987 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___size, int32_t ___flags, EndPoint_t1294049535 * ___remote_end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::CheckProtocolSupport()
extern "C"  void Socket_CheckProtocolSupport_m1469859642 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern "C"  bool Socket_get_SupportsIPv4_m1110590311 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern "C"  bool Socket_get_SupportsIPv6_m1110592233 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern "C"  IntPtr_t Socket_Socket_internal_m2439457133 (Socket_t150013987 * __this, int32_t ___family, int32_t ___type, int32_t ___proto, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Finalize()
extern "C"  void Socket_Finalize_m2469626537 (Socket_t150013987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern "C"  int32_t Socket_get_AddressFamily_m794897675 (Socket_t150013987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Blocking_internal(System.IntPtr,System.Boolean,System.Int32&)
extern "C"  void Socket_Blocking_internal_m3854701116 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, bool ___block, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Blocking()
extern "C"  bool Socket_get_Blocking_m686821555 (Socket_t150013987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Blocking(System.Boolean)
extern "C"  void Socket_set_Blocking_m1232454324 (Socket_t150013987 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
extern "C"  bool Socket_get_Connected_m32348333 (Socket_t150013987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_Connected(System.Boolean)
extern "C"  void Socket_set_Connected_m2362942170 (Socket_t150013987 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.Sockets.Socket::RemoteEndPoint_internal(System.IntPtr,System.Int32&)
extern "C"  SocketAddress_t3972045899 * Socket_RemoteEndPoint_internal_m2146026531 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
extern "C"  EndPoint_t1294049535 * Socket_get_RemoteEndPoint_m3864554657 (Socket_t150013987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern "C"  void Socket_Linger_m3971058726 (Socket_t150013987 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern "C"  void Socket_Dispose_m1498201101 (Socket_t150013987 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose()
extern "C"  void Socket_Dispose_m1221567766 (Socket_t150013987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern "C"  void Socket_Close_internal_m712534810 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
extern "C"  void Socket_Close_m183746607 (Socket_t150013987 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal_real(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C"  void Socket_Connect_internal_real_m2238725464 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t3972045899 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C"  void Socket_Connect_internal_m3048485651 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t3972045899 * ___sa, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern "C"  void Socket_Connect_internal_m2215852042 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, SocketAddress_t3972045899 * ___sa, int32_t* ___error, bool ___requireSocketPolicyFile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::CheckEndPoint(System.Net.SocketAddress)
extern "C"  bool Socket_CheckEndPoint_m44041593 (Il2CppObject * __this /* static, unused */, SocketAddress_t3972045899 * ___sa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Net.Sockets.Socket::GetUnityCrossDomainHelperMethod(System.String)
extern "C"  MethodInfo_t * Socket_GetUnityCrossDomainHelperMethod_m4288049067 (Il2CppObject * __this /* static, unused */, String_t* ___methodname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
extern "C"  void Socket_Connect_m3443149996 (Socket_t150013987 * __this, EndPoint_t1294049535 * ___remoteEP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint,System.Boolean)
extern "C"  void Socket_Connect_m3198523729 (Socket_t150013987 * __this, EndPoint_t1294049535 * ___remoteEP, bool ___requireSocketPolicy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::ReceiveAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C"  bool Socket_ReceiveAsync_m2408835960 (Socket_t150013987 * __this, SocketAsyncEventArgs_t970431102 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::SendAsync(System.Net.Sockets.SocketAsyncEventArgs)
extern "C"  bool Socket_SendAsync_m3069255749 (Socket_t150013987 * __this, SocketAsyncEventArgs_t970431102 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern "C"  bool Socket_Poll_internal_m1151471955 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t ___mode, int32_t ___timeout, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode,System.Int32&)
extern "C"  bool Socket_Poll_m2679937609 (Socket_t150013987 * __this, int32_t ___time_us, int32_t ___mode, int32_t* ___socket_error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C"  int32_t Socket_Receive_internal_m2102825858 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_Receive_nochecks_m2765323495 (Socket_t150013987 * __this, ByteU5BU5D_t58506160* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern "C"  void Socket_GetSocketOption_obj_internal_m3360460275 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Il2CppObject ** ___obj_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C"  int32_t Socket_Send_internal_m2939578505 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock, ByteU5BU5D_t58506160* ___buf, int32_t ___offset, int32_t ___count, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_Send_nochecks_m2300802670 (Socket_t150013987 * __this, ByteU5BU5D_t58506160* ___buf, int32_t ___offset, int32_t ___size, int32_t ___flags, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern "C"  Il2CppObject * Socket_GetSocketOption_m3158663719 (Socket_t150013987 * __this, int32_t ___optionLevel, int32_t ___optionName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern "C"  void Socket_Shutdown_internal_m2019310737 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t ___how, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown(System.Net.Sockets.SocketShutdown)
extern "C"  void Socket_Shutdown_m202135370 (Socket_t150013987 * __this, int32_t ___how, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern "C"  void Socket_SetSocketOption_internal_m111805231 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket, int32_t ___level, int32_t ___name, Il2CppObject * ___obj_val, ByteU5BU5D_t58506160* ___byte_val, int32_t ___int_val, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
