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

// longame.NetFW.ProtoString
struct ProtoString_t3564632392;
// System.String
struct String_t;
// longame.NetFW.NetMsg
struct NetMsg_t795376147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_longame_NetFW_NetMsg795376147.h"

// System.Void longame.NetFW.ProtoString::.ctor()
extern "C"  void ProtoString__ctor_m1683088195 (ProtoString_t3564632392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.ProtoString::SetValue(System.String)
extern "C"  void ProtoString_SetValue_m312684786 (ProtoString_t3564632392 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String longame.NetFW.ProtoString::GetValue()
extern "C"  String_t* ProtoString_GetValue_m685288025 (ProtoString_t3564632392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.ProtoString::WriteToMsg(longame.NetFW.NetMsg)
extern "C"  void ProtoString_WriteToMsg_m313444147 (ProtoString_t3564632392 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.ProtoString::ReadFromMsg(longame.NetFW.NetMsg)
extern "C"  bool ProtoString_ReadFromMsg_m3149141441 (ProtoString_t3564632392 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.ProtoString longame.NetFW.ProtoString::DeepClone()
extern "C"  ProtoString_t3564632392 * ProtoString_DeepClone_m2047560157 (ProtoString_t3564632392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
