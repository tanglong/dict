#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Net.Sockets.Socket,longame.NetFW.Selectable>
struct Dictionary_2_t1569862852;
// System.Collections.Generic.List`1<System.Net.Sockets.Socket>
struct List_1_t946972956;
// longame.NetFW.Selector
struct Selector_t4016677198;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.Selector
struct  Selector_t4016677198  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Net.Sockets.Socket,longame.NetFW.Selectable> longame.NetFW.Selector::m_sockets
	Dictionary_2_t1569862852 * ___m_sockets_0;
	// System.Collections.Generic.List`1<System.Net.Sockets.Socket> longame.NetFW.Selector::m_baseFdSet
	List_1_t946972956 * ___m_baseFdSet_1;

public:
	inline static int32_t get_offset_of_m_sockets_0() { return static_cast<int32_t>(offsetof(Selector_t4016677198, ___m_sockets_0)); }
	inline Dictionary_2_t1569862852 * get_m_sockets_0() const { return ___m_sockets_0; }
	inline Dictionary_2_t1569862852 ** get_address_of_m_sockets_0() { return &___m_sockets_0; }
	inline void set_m_sockets_0(Dictionary_2_t1569862852 * value)
	{
		___m_sockets_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_sockets_0, value);
	}

	inline static int32_t get_offset_of_m_baseFdSet_1() { return static_cast<int32_t>(offsetof(Selector_t4016677198, ___m_baseFdSet_1)); }
	inline List_1_t946972956 * get_m_baseFdSet_1() const { return ___m_baseFdSet_1; }
	inline List_1_t946972956 ** get_address_of_m_baseFdSet_1() { return &___m_baseFdSet_1; }
	inline void set_m_baseFdSet_1(List_1_t946972956 * value)
	{
		___m_baseFdSet_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_baseFdSet_1, value);
	}
};

struct Selector_t4016677198_StaticFields
{
public:
	// longame.NetFW.Selector longame.NetFW.Selector::m_instance
	Selector_t4016677198 * ___m_instance_2;

public:
	inline static int32_t get_offset_of_m_instance_2() { return static_cast<int32_t>(offsetof(Selector_t4016677198_StaticFields, ___m_instance_2)); }
	inline Selector_t4016677198 * get_m_instance_2() const { return ___m_instance_2; }
	inline Selector_t4016677198 ** get_address_of_m_instance_2() { return &___m_instance_2; }
	inline void set_m_instance_2(Selector_t4016677198 * value)
	{
		___m_instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
