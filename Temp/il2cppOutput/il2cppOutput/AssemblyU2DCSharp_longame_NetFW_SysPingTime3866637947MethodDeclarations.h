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

// longame.NetFW.SysPingTime
struct SysPingTime_t3866637947;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"

// System.Void longame.NetFW.SysPingTime::.ctor()
extern "C"  void SysPingTime__ctor_m3169308528 (SysPingTime_t3866637947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.SysPingTime::init(System.Int32[])
extern "C"  void SysPingTime_init_m3595987443 (SysPingTime_t3866637947 * __this, Int32U5BU5D_t1809983122* ___pingTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.SysPingTime::getNextPingTime(System.Byte)
extern "C"  int32_t SysPingTime_getNextPingTime_m2147069831 (SysPingTime_t3866637947 * __this, uint8_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte longame.NetFW.SysPingTime::getMaxPingCount()
extern "C"  uint8_t SysPingTime_getMaxPingCount_m1916381673 (SysPingTime_t3866637947 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
