#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t3575652790;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.ProtoTinyBinary
struct  ProtoTinyBinary_t3601821784  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Byte> longame.NetFW.ProtoTinyBinary::m_val
	List_1_t3575652790 * ___m_val_0;

public:
	inline static int32_t get_offset_of_m_val_0() { return static_cast<int32_t>(offsetof(ProtoTinyBinary_t3601821784, ___m_val_0)); }
	inline List_1_t3575652790 * get_m_val_0() const { return ___m_val_0; }
	inline List_1_t3575652790 ** get_address_of_m_val_0() { return &___m_val_0; }
	inline void set_m_val_0(List_1_t3575652790 * value)
	{
		___m_val_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_val_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
