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

// longame.NetFW.CommandFactory
struct CommandFactory_t3552396462;
// longame.NetFW.OnParseMsgHandler
struct OnParseMsgHandler_t4119810284;
// longame.NetFW.OnProcessMsgHandler
struct OnProcessMsgHandler_t1743510888;
// longame.NetFW.NetMsg
struct NetMsg_t795376147;
// longame.NetFW.ProtocolBase
struct ProtocolBase_t3085277944;
// longame.NetFW.ClassStorage`1<longame.NetFW.CommandFactory>
struct ClassStorage_1_t52794014;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_longame_NetFW_OnParseMsgHandler4119810284.h"
#include "AssemblyU2DCSharp_longame_NetFW_OnProcessMsgHandle1743510888.h"
#include "AssemblyU2DCSharp_longame_NetFW_NetMsg795376147.h"
#include "AssemblyU2DCSharp_longame_NetFW_ProtocolBase3085277944.h"

// System.Void longame.NetFW.CommandFactory::.ctor()
extern "C"  void CommandFactory__ctor_m3286897355 (CommandFactory_t3552396462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.CommandFactory::.cctor()
extern "C"  void CommandFactory__cctor_m2627473986 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.CommandFactory::Reset()
extern "C"  void CommandFactory_Reset_m933330296 (CommandFactory_t3552396462 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.CommandFactory::registerParseMsgCmd(System.UInt16,longame.NetFW.OnParseMsgHandler)
extern "C"  void CommandFactory_registerParseMsgCmd_m500430242 (CommandFactory_t3552396462 * __this, uint16_t ___protoID, OnParseMsgHandler_t4119810284 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.CommandFactory::registerProcessMsgCmd(System.UInt16,longame.NetFW.OnProcessMsgHandler)
extern "C"  void CommandFactory_registerProcessMsgCmd_m670058794 (CommandFactory_t3552396462 * __this, uint16_t ___protoID, OnProcessMsgHandler_t1743510888 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.CommandFactory::ParseMessage(longame.NetFW.NetMsg)
extern "C"  bool CommandFactory_ParseMessage_m3287503116 (CommandFactory_t3552396462 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.CommandFactory::ProcessMessage(longame.NetFW.ProtocolBase)
extern "C"  void CommandFactory_ProcessMessage_m4218452119 (CommandFactory_t3552396462 * __this, ProtocolBase_t3085277944 * ___proto, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.CommandFactory::OnDummyMessage(longame.NetFW.NetMsg)
extern "C"  bool CommandFactory_OnDummyMessage_m4178843254 (Il2CppObject * __this /* static, unused */, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.CommandFactory::OnDummyProcess(longame.NetFW.ProtocolBase)
extern "C"  void CommandFactory_OnDummyProcess_m43235621 (Il2CppObject * __this /* static, unused */, ProtocolBase_t3085277944 * ___proto, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.CommandFactory::setDefaultProcessFunc(longame.NetFW.OnProcessMsgHandler)
extern "C"  void CommandFactory_setDefaultProcessFunc_m2739197869 (CommandFactory_t3552396462 * __this, OnProcessMsgHandler_t1743510888 * ___defaultFunc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.CommandFactory::setDefaultParseFunc(longame.NetFW.OnParseMsgHandler)
extern "C"  void CommandFactory_setDefaultParseFunc_m1961510885 (CommandFactory_t3552396462 * __this, OnParseMsgHandler_t4119810284 * ___defaultFunc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.ClassStorage`1<longame.NetFW.CommandFactory> longame.NetFW.CommandFactory::getStorage()
extern "C"  ClassStorage_1_t52794014 * CommandFactory_getStorage_m258275940 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
