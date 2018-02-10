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

// longame.NetFW.ProtoTinyBinary
struct ProtoTinyBinary_t3601821784;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t3575652790;
// longame.NetFW.NetMsg
struct NetMsg_t795376147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_longame_NetFW_NetMsg795376147.h"

// System.Void longame.NetFW.ProtoTinyBinary::.ctor()
extern "C"  void ProtoTinyBinary__ctor_m1186097587 (ProtoTinyBinary_t3601821784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.ProtoTinyBinary::SetValue(System.Collections.Generic.List`1<System.Byte>)
extern "C"  void ProtoTinyBinary_SetValue_m1635340555 (ProtoTinyBinary_t3601821784 * __this, List_1_t3575652790 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Byte> longame.NetFW.ProtoTinyBinary::GetValue()
extern "C"  List_1_t3575652790 * ProtoTinyBinary_GetValue_m987036804 (ProtoTinyBinary_t3601821784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.ProtoTinyBinary::WriteToMsg(longame.NetFW.NetMsg)
extern "C"  void ProtoTinyBinary_WriteToMsg_m753229507 (ProtoTinyBinary_t3601821784 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.ProtoTinyBinary::ReadFromMsg(longame.NetFW.NetMsg)
extern "C"  bool ProtoTinyBinary_ReadFromMsg_m2652173873 (ProtoTinyBinary_t3601821784 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.ProtoTinyBinary longame.NetFW.ProtoTinyBinary::DeepClone()
extern "C"  ProtoTinyBinary_t3601821784 * ProtoTinyBinary_DeepClone_m3102909373 (ProtoTinyBinary_t3601821784 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
