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

// longame.NetFW.SessionC
struct SessionC_t4230184412;
// longame.NetFW.OnParseMsgHandler
struct OnParseMsgHandler_t4119810284;
// longame.NetFW.OnProcessMsgHandler
struct OnProcessMsgHandler_t1743510888;
// System.String
struct String_t;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// longame.NetFW.NetMsg
struct NetMsg_t795376147;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3494006030;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.Net.Sockets.Socket
struct Socket_t150013987;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_longame_NetFW_OnParseMsgHandler4119810284.h"
#include "AssemblyU2DCSharp_longame_NetFW_OnProcessMsgHandle1743510888.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "AssemblyU2DCSharp_longame_NetFW_NetMsg795376147.h"
#include "System_System_Net_Sockets_SocketError291509957.h"
#include "System_System_Net_Sockets_Socket150013987.h"
#include "AssemblyU2DCSharp_longame_NetFW_LINK_STATE1052687675.h"

// System.Void longame.NetFW.SessionC::.ctor()
extern "C"  void SessionC__ctor_m1320398493 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionC::.ctor(longame.NetFW.OnParseMsgHandler,longame.NetFW.OnProcessMsgHandler)
extern "C"  void SessionC__ctor_m6067981 (SessionC_t4230184412 * __this, OnParseMsgHandler_t4119810284 * ___defaultParseFunc, OnProcessMsgHandler_t1743510888 * ___defaultProcessFunc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String longame.NetFW.SessionC::get_ConnectIP()
extern "C"  String_t* SessionC_get_ConnectIP_m4229794336 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionC::Finalize()
extern "C"  void SessionC_Finalize_m2783514789 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionC::onConnFailed()
extern "C"  void SessionC_onConnFailed_m1980969135 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionC::setConnectTime(System.Int32)
extern "C"  void SessionC_setConnectTime_m4090880653 (SessionC_t4230184412 * __this, int32_t ___msDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionC::SetConnectAddress(System.String,System.UInt16)
extern "C"  void SessionC_SetConnectAddress_m1152718825 (SessionC_t4230184412 * __this, String_t* ___ip, uint16_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SessionC::StartConnectServer(System.UInt16,System.AsyncCallback,System.Boolean)
extern "C"  int32_t SessionC_StartConnectServer_m281780653 (SessionC_t4230184412 * __this, uint16_t ___timeout, AsyncCallback_t1363551830 * ___asyncCallback, bool ___isUseAsync, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SessionC::SessionUpdate(System.Boolean)
extern "C"  int32_t SessionC_SessionUpdate_m1679906723 (SessionC_t4230184412 * __this, bool ___isPing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SessionC::StopConnectServer()
extern "C"  int32_t SessionC_StopConnectServer_m2821019416 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.SessionC::parseMessage(longame.NetFW.NetMsg)
extern "C"  bool SessionC_parseMessage_m1932491994 (SessionC_t4230184412 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SessionC::ConnectServerWithIPAddr(System.Net.IPAddress[],System.UInt16,System.UInt16,System.AsyncCallback)
extern "C"  int32_t SessionC_ConnectServerWithIPAddr_m3544060047 (SessionC_t4230184412 * __this, IPAddressU5BU5D_t3494006030* ___ips, uint16_t ___port, uint16_t ___timeout, AsyncCallback_t1363551830 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionC::ConnectServerSuccess()
extern "C"  void SessionC_ConnectServerSuccess_m3724357629 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionC::ConnectServerFail()
extern "C"  void SessionC_ConnectServerFail_m1107586950 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SessionC::ConnectServerWithIPStr(System.String,System.UInt16,System.UInt16,System.AsyncCallback)
extern "C"  int32_t SessionC_ConnectServerWithIPStr_m1613401298 (SessionC_t4230184412 * __this, String_t* ___host, uint16_t ___port, uint16_t ___timeout, AsyncCallback_t1363551830 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SessionC::ConnectServerWithIPStrAsync(System.String,System.UInt16,System.UInt16,System.AsyncCallback)
extern "C"  int32_t SessionC_ConnectServerWithIPStrAsync_m2926018168 (SessionC_t4230184412 * __this, String_t* ___host, uint16_t ___port, uint16_t ___timeout, AsyncCallback_t1363551830 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionC::GetHostAddressesCallback(System.IAsyncResult)
extern "C"  void SessionC_GetHostAddressesCallback_m2954481299 (SessionC_t4230184412 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SessionC::ConnectWithSaveIP(System.UInt16)
extern "C"  int32_t SessionC_ConnectWithSaveIP_m2286570067 (SessionC_t4230184412 * __this, uint16_t ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError longame.NetFW.SessionC::GetSocketError()
extern "C"  int32_t SessionC_GetSocketError_m3321152716 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SessionC::CheckConnectSuccess()
extern "C"  int32_t SessionC_CheckConnectSuccess_m2689602958 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.SessionC::OpenNet(System.Net.Sockets.Socket)
extern "C"  bool SessionC_OpenNet_m3673398215 (SessionC_t4230184412 * __this, Socket_t150013987 * ___sock, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionC::CloseNet()
extern "C"  void SessionC_CloseNet_m2557716300 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.LINK_STATE longame.NetFW.SessionC::get_LinkState()
extern "C"  int32_t SessionC_get_LinkState_m477940169 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionC::set_LinkState(longame.NetFW.LINK_STATE)
extern "C"  void SessionC_set_LinkState_m677020952 (SessionC_t4230184412 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.LINK_STATE longame.NetFW.SessionC::GetLinkState()
extern "C"  int32_t SessionC_GetLinkState_m1962705480 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.LINK_STATE longame.NetFW.SessionC::LS_Connecting()
extern "C"  int32_t SessionC_LS_Connecting_m1490099947 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.LINK_STATE longame.NetFW.SessionC::LS_Connected()
extern "C"  int32_t SessionC_LS_Connected_m3373072984 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.LINK_STATE longame.NetFW.SessionC::LS_Close()
extern "C"  int32_t SessionC_LS_Close_m3057673351 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SessionC::GetConnectStatus(System.Int32)
extern "C"  int32_t SessionC_GetConnectStatus_m1010963372 (SessionC_t4230184412 * __this, int32_t ___err, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SessionC::GetConnectIpAddressNum()
extern "C"  int32_t SessionC_GetConnectIpAddressNum_m3625865890 (SessionC_t4230184412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
