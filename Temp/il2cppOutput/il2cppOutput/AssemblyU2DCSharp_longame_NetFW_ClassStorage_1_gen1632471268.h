﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t2949654135;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.ClassStorage`1<System.Object>
struct  ClassStorage_1_t1632471268  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,INFO> longame.NetFW.ClassStorage`1::m_infoMap
	Dictionary_2_t2949654135 * ___m_infoMap_0;

public:
	inline static int32_t get_offset_of_m_infoMap_0() { return static_cast<int32_t>(offsetof(ClassStorage_1_t1632471268, ___m_infoMap_0)); }
	inline Dictionary_2_t2949654135 * get_m_infoMap_0() const { return ___m_infoMap_0; }
	inline Dictionary_2_t2949654135 ** get_address_of_m_infoMap_0() { return &___m_infoMap_0; }
	inline void set_m_infoMap_0(Dictionary_2_t2949654135 * value)
	{
		___m_infoMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_infoMap_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
