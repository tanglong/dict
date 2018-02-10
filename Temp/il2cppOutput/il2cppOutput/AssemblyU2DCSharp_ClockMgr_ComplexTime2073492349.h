#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClockMgr/ComplexTime
struct  ComplexTime_t2073492349  : public Il2CppObject
{
public:
	// System.UInt32 ClockMgr/ComplexTime::localTime
	uint32_t ___localTime_0;
	// System.UInt32 ClockMgr/ComplexTime::serverTime
	uint32_t ___serverTime_1;

public:
	inline static int32_t get_offset_of_localTime_0() { return static_cast<int32_t>(offsetof(ComplexTime_t2073492349, ___localTime_0)); }
	inline uint32_t get_localTime_0() const { return ___localTime_0; }
	inline uint32_t* get_address_of_localTime_0() { return &___localTime_0; }
	inline void set_localTime_0(uint32_t value)
	{
		___localTime_0 = value;
	}

	inline static int32_t get_offset_of_serverTime_1() { return static_cast<int32_t>(offsetof(ComplexTime_t2073492349, ___serverTime_1)); }
	inline uint32_t get_serverTime_1() const { return ___serverTime_1; }
	inline uint32_t* get_address_of_serverTime_1() { return &___serverTime_1; }
	inline void set_serverTime_1(uint32_t value)
	{
		___serverTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
