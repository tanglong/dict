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

// longame.NetFW.Session
struct Session_t2115134405;
// System.String
struct String_t;
// System.Net.Sockets.Socket
struct Socket_t150013987;
// longame.NetFW.NetMsg
struct NetMsg_t795376147;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// longame.NetFW.SysPingTime
struct SysPingTime_t3866637947;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_longame_NetFW_SessionError2214472321.h"
#include "System_System_Net_Sockets_Socket150013987.h"
#include "AssemblyU2DCSharp_longame_NetFW_NetMsg795376147.h"
#include "AssemblyU2DCSharp_longame_NetFW_SysPingTime3866637947.h"

// System.Void longame.NetFW.Session::.ctor()
extern "C"  void Session__ctor_m265169382 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String longame.NetFW.Session::get_IP()
extern "C"  String_t* Session_get_IP_m4101948267 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 longame.NetFW.Session::get_Port()
extern "C"  uint16_t Session_get_Port_m3105224435 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String longame.NetFW.Session::get_IP_Local()
extern "C"  String_t* Session_get_IP_Local_m3913333559 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 longame.NetFW.Session::get_Port_Local()
extern "C"  uint16_t Session_get_Port_Local_m2562009279 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::Finalize()
extern "C"  void Session_Finalize_m1318708412 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::SetIsUseS(System.Boolean)
extern "C"  void Session_SetIsUseS_m3044066035 (Session_t2115134405 * __this, bool ___isUse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::SetError(longame.NetFW.SessionError)
extern "C"  void Session_SetError_m2895946273 (Session_t2115134405 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.SessionError longame.NetFW.Session::GetError()
extern "C"  int32_t Session_GetError_m637452598 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Session::OpenNet(System.Net.Sockets.Socket)
extern "C"  bool Session_OpenNet_m2260797686 (Session_t2115134405 * __this, Socket_t150013987 * ___sock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Session::NetUpdate(System.Boolean)
extern "C"  bool Session_NetUpdate_m899015541 (Session_t2115134405 * __this, bool ___isPing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::CloseNet()
extern "C"  void Session_CloseNet_m1092909923 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Session::parseMessage(longame.NetFW.NetMsg)
extern "C"  bool Session_parseMessage_m519891465 (Session_t2115134405 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Session::sendMessage(longame.NetFW.NetMsg)
extern "C"  bool Session_sendMessage_m3544882338 (Session_t2115134405 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.Session::GetSysError()
extern "C"  int32_t Session_GetSysError_m3432752195 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Session::HandleData(System.Byte[],System.UInt32,System.UInt32)
extern "C"  bool Session_HandleData_m423697941 (Session_t2115134405 * __this, ByteU5BU5D_t58506160* ___data, uint32_t ___index, uint32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Session::SendData(System.Byte[])
extern "C"  bool Session_SendData_m1266245261 (Session_t2115134405 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.Session::getPacketLength(System.Byte[],System.UInt32,System.UInt32)
extern "C"  int32_t Session_getPacketLength_m351386619 (Session_t2115134405 * __this, ByteU5BU5D_t58506160* ___data, uint32_t ___index, uint32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::AdjustRecvBuffer(System.UInt32)
extern "C"  void Session_AdjustRecvBuffer_m975687 (Session_t2115134405 * __this, uint32_t ___handled_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Session::PushData(System.Byte[])
extern "C"  bool Session_PushData_m2999214523 (Session_t2115134405 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 longame.NetFW.Session::GetSendBufSize()
extern "C"  uint32_t Session_GetSendBufSize_m3980319641 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 longame.NetFW.Session::GetRecvBufSize()
extern "C"  uint32_t Session_GetRecvBufSize_m3323075323 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::AdjustSendBuf(System.UInt32)
extern "C"  void Session_AdjustSendBuf_m1733664954 (Session_t2115134405 * __this, uint32_t ___handled_size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] longame.NetFW.Session::GetSendData()
extern "C"  ByteU5BU5D_t58506160* Session_GetSendData_m1268418934 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 longame.NetFW.Session::GetSendDataSize()
extern "C"  uint32_t Session_GetSendDataSize_m2051982088 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::NetInit()
extern "C"  void Session_NetInit_m1816766289 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::SetSysPingTime(longame.NetFW.SysPingTime)
extern "C"  void Session_SetSysPingTime_m4238729423 (Session_t2115134405 * __this, SysPingTime_t3866637947 * ___sysPingTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::uppack()
extern "C"  void Session_uppack_m1635583346 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 longame.NetFW.Session::GetInitSendBufSize()
extern "C"  uint32_t Session_GetInitSendBufSize_m2024335977 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::SetInitSendBufSize(System.UInt32)
extern "C"  void Session_SetInitSendBufSize_m1622854178 (Session_t2115134405 * __this, uint32_t ___uiInitSendBufSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 longame.NetFW.Session::GetInitRecvBufSize()
extern "C"  uint32_t Session_GetInitRecvBufSize_m1367091659 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::SetInitRecvBufSize(System.UInt32)
extern "C"  void Session_SetInitRecvBufSize_m3259832832 (Session_t2115134405 * __this, uint32_t ___uiInitRecvBufSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::SetSendbuf_dynamic(System.Boolean)
extern "C"  void Session_SetSendbuf_dynamic_m1622456318 (Session_t2115134405 * __this, bool ___sendbuf_dynamic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::SetReleaseDynamicSendBuf(System.Boolean)
extern "C"  void Session_SetReleaseDynamicSendBuf_m1942630982 (Session_t2115134405 * __this, bool ___bReleaseDynamicSendBuf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::SetMaxDynamicSendBufSize(System.UInt32)
extern "C"  void Session_SetMaxDynamicSendBufSize_m2905434061 (Session_t2115134405 * __this, uint32_t ___uiMaxDynamicSendBufSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::ClearSendBuf()
extern "C"  void Session_ClearSendBuf_m2357351644 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::ClearRecvBuf()
extern "C"  void Session_ClearRecvBuf_m3507524926 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::InitBuf()
extern "C"  void Session_InitBuf_m787684551 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::ResetBuf()
extern "C"  void Session_ResetBuf_m1467429314 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Session::CreateBuffer(System.UInt32&,System.Byte[]&)
extern "C"  bool Session_CreateBuffer_m624885713 (Il2CppObject * __this /* static, unused */, uint32_t* ___size, ByteU5BU5D_t58506160** ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Session::IncreaseSendBuf()
extern "C"  bool Session_IncreaseSendBuf_m4183113953 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::RecvData()
extern "C"  void Session_RecvData_m209323726 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Session::SendData()
extern "C"  void Session_SendData_m3208657648 (Session_t2115134405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
