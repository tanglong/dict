#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// longame.NetFW.dos
struct dos_t2760560279;
// longame.NetFW.ClassStorage`1<longame.NetFW.SModule>
struct ClassStorage_1_t2219270110;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_longame_NetFW_SMODULEMODE3553031153.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.SModule
struct  SModule_t1423905262  : public Il2CppObject
{
public:
	// longame.NetFW.dos longame.NetFW.SModule::m_do
	dos_t2760560279 * ___m_do_1;
	// longame.NetFW.SMODULEMODE longame.NetFW.SModule::m_mode
	int32_t ___m_mode_2;

public:
	inline static int32_t get_offset_of_m_do_1() { return static_cast<int32_t>(offsetof(SModule_t1423905262, ___m_do_1)); }
	inline dos_t2760560279 * get_m_do_1() const { return ___m_do_1; }
	inline dos_t2760560279 ** get_address_of_m_do_1() { return &___m_do_1; }
	inline void set_m_do_1(dos_t2760560279 * value)
	{
		___m_do_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_do_1, value);
	}

	inline static int32_t get_offset_of_m_mode_2() { return static_cast<int32_t>(offsetof(SModule_t1423905262, ___m_mode_2)); }
	inline int32_t get_m_mode_2() const { return ___m_mode_2; }
	inline int32_t* get_address_of_m_mode_2() { return &___m_mode_2; }
	inline void set_m_mode_2(int32_t value)
	{
		___m_mode_2 = value;
	}
};

struct SModule_t1423905262_StaticFields
{
public:
	// System.Byte[] longame.NetFW.SModule::_
	ByteU5BU5D_t58506160* _____0;
	// longame.NetFW.ClassStorage`1<longame.NetFW.SModule> longame.NetFW.SModule::storage
	ClassStorage_1_t2219270110 * ___storage_3;

public:
	inline static int32_t get_offset_of___0() { return static_cast<int32_t>(offsetof(SModule_t1423905262_StaticFields, _____0)); }
	inline ByteU5BU5D_t58506160* get___0() const { return _____0; }
	inline ByteU5BU5D_t58506160** get_address_of___0() { return &_____0; }
	inline void set___0(ByteU5BU5D_t58506160* value)
	{
		_____0 = value;
		Il2CppCodeGenWriteBarrier(&_____0, value);
	}

	inline static int32_t get_offset_of_storage_3() { return static_cast<int32_t>(offsetof(SModule_t1423905262_StaticFields, ___storage_3)); }
	inline ClassStorage_1_t2219270110 * get_storage_3() const { return ___storage_3; }
	inline ClassStorage_1_t2219270110 ** get_address_of_storage_3() { return &___storage_3; }
	inline void set_storage_3(ClassStorage_1_t2219270110 * value)
	{
		___storage_3 = value;
		Il2CppCodeGenWriteBarrier(&___storage_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
