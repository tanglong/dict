#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Diagnostics.Stopwatch
struct Stopwatch_t2509581612;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.SystemTime
struct  SystemTime_t1101836043  : public Il2CppObject
{
public:

public:
};

struct SystemTime_t1101836043_StaticFields
{
public:
	// System.Diagnostics.Stopwatch longame.NetFW.SystemTime::stopwatch
	Stopwatch_t2509581612 * ___stopwatch_0;

public:
	inline static int32_t get_offset_of_stopwatch_0() { return static_cast<int32_t>(offsetof(SystemTime_t1101836043_StaticFields, ___stopwatch_0)); }
	inline Stopwatch_t2509581612 * get_stopwatch_0() const { return ___stopwatch_0; }
	inline Stopwatch_t2509581612 ** get_address_of_stopwatch_0() { return &___stopwatch_0; }
	inline void set_stopwatch_0(Stopwatch_t2509581612 * value)
	{
		___stopwatch_0 = value;
		Il2CppCodeGenWriteBarrier(&___stopwatch_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
