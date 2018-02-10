#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// longame.NetFW.ProtoString
struct ProtoString_t3564632392;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.config.DictElementInfoS
struct  DictElementInfoS_t3611635328  : public Il2CppObject
{
public:
	// longame.NetFW.ProtoString longame.config.DictElementInfoS::name
	ProtoString_t3564632392 * ___name_0;
	// longame.NetFW.ProtoString longame.config.DictElementInfoS::head
	ProtoString_t3564632392 * ___head_1;
	// longame.NetFW.ProtoString longame.config.DictElementInfoS::explain
	ProtoString_t3564632392 * ___explain_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DictElementInfoS_t3611635328, ___name_0)); }
	inline ProtoString_t3564632392 * get_name_0() const { return ___name_0; }
	inline ProtoString_t3564632392 ** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(ProtoString_t3564632392 * value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_head_1() { return static_cast<int32_t>(offsetof(DictElementInfoS_t3611635328, ___head_1)); }
	inline ProtoString_t3564632392 * get_head_1() const { return ___head_1; }
	inline ProtoString_t3564632392 ** get_address_of_head_1() { return &___head_1; }
	inline void set_head_1(ProtoString_t3564632392 * value)
	{
		___head_1 = value;
		Il2CppCodeGenWriteBarrier(&___head_1, value);
	}

	inline static int32_t get_offset_of_explain_2() { return static_cast<int32_t>(offsetof(DictElementInfoS_t3611635328, ___explain_2)); }
	inline ProtoString_t3564632392 * get_explain_2() const { return ___explain_2; }
	inline ProtoString_t3564632392 ** get_address_of_explain_2() { return &___explain_2; }
	inline void set_explain_2(ProtoString_t3564632392 * value)
	{
		___explain_2 = value;
		Il2CppCodeGenWriteBarrier(&___explain_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
