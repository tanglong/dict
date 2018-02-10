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

// longame.NetFW.ProtoFloat
struct ProtoFloat_t3328343747;
// System.Object
struct Il2CppObject;
// longame.NetFW.NetMsg
struct NetMsg_t795376147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_longame_NetFW_NetMsg795376147.h"
#include "AssemblyU2DCSharp_longame_NetFW_ProtoFloat3328343747.h"

// System.Void longame.NetFW.ProtoFloat::.ctor()
extern "C"  void ProtoFloat__ctor_m3529956310 (ProtoFloat_t3328343747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.ProtoFloat::equals(System.Object)
extern "C"  bool ProtoFloat_equals_m3553393203 (ProtoFloat_t3328343747 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.ProtoFloat::Equals(System.Object)
extern "C"  bool ProtoFloat_Equals_m1085131283 (ProtoFloat_t3328343747 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.ProtoFloat::GetHashCode()
extern "C"  int32_t ProtoFloat_GetHashCode_m2180895287 (ProtoFloat_t3328343747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.ProtoFloat::WriteToMsg(longame.NetFW.NetMsg)
extern "C"  void ProtoFloat_WriteToMsg_m2070645248 (ProtoFloat_t3328343747 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.ProtoFloat::ReadFromMsg(longame.NetFW.NetMsg)
extern "C"  bool ProtoFloat_ReadFromMsg_m3822990508 (ProtoFloat_t3328343747 * __this, NetMsg_t795376147 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.ProtoFloat longame.NetFW.ProtoFloat::DeepClone()
extern "C"  ProtoFloat_t3328343747 * ProtoFloat_DeepClone_m3240477453 (ProtoFloat_t3328343747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.ProtoFloat::SetValue(System.Single)
extern "C"  void ProtoFloat_SetValue_m2790524462 (ProtoFloat_t3328343747 * __this, float ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single longame.NetFW.ProtoFloat::GetValue()
extern "C"  float ProtoFloat_GetValue_m873937909 (ProtoFloat_t3328343747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.ProtoFloat::op_Equality(longame.NetFW.ProtoFloat,longame.NetFW.ProtoFloat)
extern "C"  bool ProtoFloat_op_Equality_m4249016462 (Il2CppObject * __this /* static, unused */, ProtoFloat_t3328343747 * ___lhs, ProtoFloat_t3328343747 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.ProtoFloat::op_Inequality(longame.NetFW.ProtoFloat,longame.NetFW.ProtoFloat)
extern "C"  bool ProtoFloat_op_Inequality_m469052297 (Il2CppObject * __this /* static, unused */, ProtoFloat_t3328343747 * ___lhs, ProtoFloat_t3328343747 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.ProtoFloat::op_Equality(longame.NetFW.ProtoFloat,System.Single)
extern "C"  bool ProtoFloat_op_Equality_m1940890168 (Il2CppObject * __this /* static, unused */, ProtoFloat_t3328343747 * ___lhs, float ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.ProtoFloat::op_Inequality(longame.NetFW.ProtoFloat,System.Single)
extern "C"  bool ProtoFloat_op_Inequality_m3067305501 (Il2CppObject * __this /* static, unused */, ProtoFloat_t3328343747 * ___lhs, float ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
