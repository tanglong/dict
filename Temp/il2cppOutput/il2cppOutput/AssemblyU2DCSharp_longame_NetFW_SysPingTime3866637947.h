#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.SysPingTime
struct  SysPingTime_t3866637947  : public Il2CppObject
{
public:
	// System.Int32[] longame.NetFW.SysPingTime::times
	Int32U5BU5D_t1809983122* ___times_0;

public:
	inline static int32_t get_offset_of_times_0() { return static_cast<int32_t>(offsetof(SysPingTime_t3866637947, ___times_0)); }
	inline Int32U5BU5D_t1809983122* get_times_0() const { return ___times_0; }
	inline Int32U5BU5D_t1809983122** get_address_of_times_0() { return &___times_0; }
	inline void set_times_0(Int32U5BU5D_t1809983122* value)
	{
		___times_0 = value;
		Il2CppCodeGenWriteBarrier(&___times_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
