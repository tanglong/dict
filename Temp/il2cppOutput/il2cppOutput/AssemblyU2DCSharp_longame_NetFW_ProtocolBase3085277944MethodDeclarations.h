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

// longame.NetFW.ProtocolBase
struct ProtocolBase_t3085277944;
// System.Type
struct Type_t;
// longame.NetFW.NetMsg
struct NetMsg_t795376147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "AssemblyU2DCSharp_longame_NetFW_NetMsg795376147.h"

// System.Void longame.NetFW.ProtocolBase::.ctor()
extern "C"  void ProtocolBase__ctor_m1237792129 (ProtocolBase_t3085277944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.ProtocolBase::.ctor(System.UInt16,System.Type,System.Boolean)
extern "C"  void ProtocolBase__ctor_m2421945847 (ProtocolBase_t3085277944 * __this, uint16_t ___protoId, Type_t * ___protoType, bool ___needRead, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 longame.NetFW.ProtocolBase::GetProtoId()
extern "C"  uint16_t ProtocolBase_GetProtoId_m1879636965 (ProtocolBase_t3085277944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.ProtocolBase::WriteToMsg(longame.NetFW.NetMsg)
extern "C"  void ProtocolBase_WriteToMsg_m3659257525 (ProtocolBase_t3085277944 * __this, NetMsg_t795376147 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.ProtocolBase::ReadFromMsg(longame.NetFW.NetMsg)
extern "C"  bool ProtocolBase_ReadFromMsg_m828799895 (ProtocolBase_t3085277944 * __this, NetMsg_t795376147 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type longame.NetFW.ProtocolBase::GetProtoType()
extern "C"  Type_t * ProtocolBase_GetProtoType_m3088846793 (ProtocolBase_t3085277944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
