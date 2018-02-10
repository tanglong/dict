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

// longame.NetFW.CSysPing
struct CSysPing_t3490850155;
// longame.NetFW.SysPingTime
struct SysPingTime_t3866637947;

#include "codegen/il2cpp-codegen.h"

// System.Void longame.NetFW.CSysPing::.ctor()
extern "C"  void CSysPing__ctor_m1683429358 (CSysPing_t3490850155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.SysPingTime longame.NetFW.CSysPing::getDefault()
extern "C"  SysPingTime_t3866637947 * CSysPing_getDefault_m2424968793 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.SysPingTime longame.NetFW.CSysPing::getCustom(System.Int32,System.Int32)
extern "C"  SysPingTime_t3866637947 * CSysPing_getCustom_m120588683 (Il2CppObject * __this /* static, unused */, int32_t ___SYSPING_KEEPIDLE, int32_t ___SYSPING_KEEPINTVL, const MethodInfo* method) IL2CPP_METHOD_ATTR;
