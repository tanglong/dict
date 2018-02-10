#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<System.Object>
struct  Singleton_1_t1089921813  : public Il2CppObject
{
public:

public:
};

struct Singleton_1_t1089921813_StaticFields
{
public:
	// T Singleton`1::m_instance
	Il2CppObject * ___m_instance_0;

public:
	inline static int32_t get_offset_of_m_instance_0() { return static_cast<int32_t>(offsetof(Singleton_1_t1089921813_StaticFields, ___m_instance_0)); }
	inline Il2CppObject * get_m_instance_0() const { return ___m_instance_0; }
	inline Il2CppObject ** get_address_of_m_instance_0() { return &___m_instance_0; }
	inline void set_m_instance_0(Il2CppObject * value)
	{
		___m_instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
