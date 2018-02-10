#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ClockMgr/ComplexTime
struct ComplexTime_t2073492349;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClockMgr
struct  ClockMgr_t1142854474  : public Il2CppObject
{
public:
	// ClockMgr/ComplexTime ClockMgr::m_tComplexTime
	ComplexTime_t2073492349 * ___m_tComplexTime_0;
	// System.DateTime ClockMgr::startTime
	DateTime_t339033936  ___startTime_1;

public:
	inline static int32_t get_offset_of_m_tComplexTime_0() { return static_cast<int32_t>(offsetof(ClockMgr_t1142854474, ___m_tComplexTime_0)); }
	inline ComplexTime_t2073492349 * get_m_tComplexTime_0() const { return ___m_tComplexTime_0; }
	inline ComplexTime_t2073492349 ** get_address_of_m_tComplexTime_0() { return &___m_tComplexTime_0; }
	inline void set_m_tComplexTime_0(ComplexTime_t2073492349 * value)
	{
		___m_tComplexTime_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_tComplexTime_0, value);
	}

	inline static int32_t get_offset_of_startTime_1() { return static_cast<int32_t>(offsetof(ClockMgr_t1142854474, ___startTime_1)); }
	inline DateTime_t339033936  get_startTime_1() const { return ___startTime_1; }
	inline DateTime_t339033936 * get_address_of_startTime_1() { return &___startTime_1; }
	inline void set_startTime_1(DateTime_t339033936  value)
	{
		___startTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
