﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SingletonComponent`1<System.Object>
struct  SingletonComponent_1_t2280340772  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct SingletonComponent_1_t2280340772_StaticFields
{
public:
	// T SingletonComponent`1::m_instance
	Il2CppObject * ___m_instance_2;

public:
	inline static int32_t get_offset_of_m_instance_2() { return static_cast<int32_t>(offsetof(SingletonComponent_1_t2280340772_StaticFields, ___m_instance_2)); }
	inline Il2CppObject * get_m_instance_2() const { return ___m_instance_2; }
	inline Il2CppObject ** get_address_of_m_instance_2() { return &___m_instance_2; }
	inline void set_m_instance_2(Il2CppObject * value)
	{
		___m_instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
