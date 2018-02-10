#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// longame.NetFW.SysPingTime
struct SysPingTime_t3866637947;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.CSysPing
struct  CSysPing_t3490850155  : public Il2CppObject
{
public:

public:
};

struct CSysPing_t3490850155_StaticFields
{
public:
	// longame.NetFW.SysPingTime longame.NetFW.CSysPing::m_default
	SysPingTime_t3866637947 * ___m_default_0;

public:
	inline static int32_t get_offset_of_m_default_0() { return static_cast<int32_t>(offsetof(CSysPing_t3490850155_StaticFields, ___m_default_0)); }
	inline SysPingTime_t3866637947 * get_m_default_0() const { return ___m_default_0; }
	inline SysPingTime_t3866637947 ** get_address_of_m_default_0() { return &___m_default_0; }
	inline void set_m_default_0(SysPingTime_t3866637947 * value)
	{
		___m_default_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_default_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
