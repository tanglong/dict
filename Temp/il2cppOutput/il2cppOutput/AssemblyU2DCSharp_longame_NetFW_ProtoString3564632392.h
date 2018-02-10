#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.ProtoString
struct  ProtoString_t3564632392  : public Il2CppObject
{
public:
	// System.String longame.NetFW.ProtoString::m_val
	String_t* ___m_val_0;

public:
	inline static int32_t get_offset_of_m_val_0() { return static_cast<int32_t>(offsetof(ProtoString_t3564632392, ___m_val_0)); }
	inline String_t* get_m_val_0() const { return ___m_val_0; }
	inline String_t** get_address_of_m_val_0() { return &___m_val_0; }
	inline void set_m_val_0(String_t* value)
	{
		___m_val_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_val_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
