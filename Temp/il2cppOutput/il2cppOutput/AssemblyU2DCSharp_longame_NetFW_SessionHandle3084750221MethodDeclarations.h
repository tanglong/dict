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

// longame.NetFW.SessionHandle
struct SessionHandle_t3084750221;
// System.Object
struct Il2CppObject;
// longame.NetFW.NetMsg
struct NetMsg_t795376147;
// longame.NetFW.HandleType
struct HandleType_t2446476017;
// longame.NetFW.SerialType
struct SerialType_t4155313341;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_longame_NetFW_NetMsg795376147.h"
#include "AssemblyU2DCSharp_longame_NetFW_SessionHandle3084750221.h"
#include "AssemblyU2DCSharp_longame_NetFW_HandleType2446476017.h"
#include "AssemblyU2DCSharp_longame_NetFW_SerialType4155313341.h"

// System.Void longame.NetFW.SessionHandle::.ctor()
extern "C"  void SessionHandle__ctor_m1136659038 (SessionHandle_t3084750221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.SessionHandle::equals(System.Object)
extern "C"  bool SessionHandle_equals_m3402813859 (SessionHandle_t3084750221 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.SessionHandle::Equals(System.Object)
extern "C"  bool SessionHandle_Equals_m934551939 (SessionHandle_t3084750221 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SessionHandle::GetHashCode()
extern "C"  int32_t SessionHandle_GetHashCode_m4225425691 (SessionHandle_t3084750221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionHandle::WriteToMsg(longame.NetFW.NetMsg)
extern "C"  void SessionHandle_WriteToMsg_m412501112 (SessionHandle_t3084750221 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.SessionHandle::ReadFromMsg(longame.NetFW.NetMsg)
extern "C"  bool SessionHandle_ReadFromMsg_m1651303452 (SessionHandle_t3084750221 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.SessionHandle longame.NetFW.SessionHandle::DeepClone()
extern "C"  SessionHandle_t3084750221 * SessionHandle_DeepClone_m2886309651 (SessionHandle_t3084750221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionHandle::SetValue(longame.NetFW.SessionHandle)
extern "C"  void SessionHandle_SetValue_m1414088624 (SessionHandle_t3084750221 * __this, SessionHandle_t3084750221 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SessionHandle::SetValue(longame.NetFW.HandleType,longame.NetFW.SerialType)
extern "C"  void SessionHandle_SetValue_m1351321701 (SessionHandle_t3084750221 * __this, HandleType_t2446476017 * ___x, SerialType_t4155313341 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.SessionHandle longame.NetFW.SessionHandle::GetValue()
extern "C"  SessionHandle_t3084750221 * SessionHandle_GetValue_m3845310299 (SessionHandle_t3084750221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.SessionHandle::op_Equality(longame.NetFW.SessionHandle,longame.NetFW.SessionHandle)
extern "C"  bool SessionHandle_op_Equality_m542976060 (Il2CppObject * __this /* static, unused */, SessionHandle_t3084750221 * ___lhs, SessionHandle_t3084750221 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.SessionHandle::op_Inequality(longame.NetFW.SessionHandle,longame.NetFW.SessionHandle)
extern "C"  bool SessionHandle_op_Inequality_m2747903735 (Il2CppObject * __this /* static, unused */, SessionHandle_t3084750221 * ___lhs, SessionHandle_t3084750221 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
