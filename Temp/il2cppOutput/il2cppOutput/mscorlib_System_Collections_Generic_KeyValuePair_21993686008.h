#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// longame.NetFW.OnParseMsgHandler
struct OnParseMsgHandler_t4119810284;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt16,longame.NetFW.OnParseMsgHandler>
struct  KeyValuePair_2_t1993686008 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint16_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	OnParseMsgHandler_t4119810284 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1993686008, ___key_0)); }
	inline uint16_t get_key_0() const { return ___key_0; }
	inline uint16_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint16_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1993686008, ___value_1)); }
	inline OnParseMsgHandler_t4119810284 * get_value_1() const { return ___value_1; }
	inline OnParseMsgHandler_t4119810284 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(OnParseMsgHandler_t4119810284 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
