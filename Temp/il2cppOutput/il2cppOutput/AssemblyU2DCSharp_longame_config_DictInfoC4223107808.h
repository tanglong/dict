#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// longame.NetFW.DWORD
struct DWORD_t2825930397;
// System.Collections.Generic.List`1<longame.config.DictElementInfoS>
struct List_1_t113627001;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.config.DictInfoC
struct  DictInfoC_t4223107808  : public Il2CppObject
{
public:
	// longame.NetFW.DWORD longame.config.DictInfoC::id
	DWORD_t2825930397 * ___id_0;
	// System.Collections.Generic.List`1<longame.config.DictElementInfoS> longame.config.DictInfoC::vecItems
	List_1_t113627001 * ___vecItems_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DictInfoC_t4223107808, ___id_0)); }
	inline DWORD_t2825930397 * get_id_0() const { return ___id_0; }
	inline DWORD_t2825930397 ** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(DWORD_t2825930397 * value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_vecItems_1() { return static_cast<int32_t>(offsetof(DictInfoC_t4223107808, ___vecItems_1)); }
	inline List_1_t113627001 * get_vecItems_1() const { return ___vecItems_1; }
	inline List_1_t113627001 ** get_address_of_vecItems_1() { return &___vecItems_1; }
	inline void set_vecItems_1(List_1_t113627001 * value)
	{
		___vecItems_1 = value;
		Il2CppCodeGenWriteBarrier(&___vecItems_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
