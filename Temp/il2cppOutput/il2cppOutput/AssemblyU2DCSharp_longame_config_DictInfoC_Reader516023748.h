#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// longame.config.DictInfoC_Reader
struct DictInfoC_Reader_t516023748;
// longame.config.DictInfoC_Config
struct DictInfoC_Config_t96211011;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.config.DictInfoC_Reader
struct  DictInfoC_Reader_t516023748  : public Il2CppObject
{
public:
	// longame.config.DictInfoC_Config longame.config.DictInfoC_Reader::config
	DictInfoC_Config_t96211011 * ___config_1;

public:
	inline static int32_t get_offset_of_config_1() { return static_cast<int32_t>(offsetof(DictInfoC_Reader_t516023748, ___config_1)); }
	inline DictInfoC_Config_t96211011 * get_config_1() const { return ___config_1; }
	inline DictInfoC_Config_t96211011 ** get_address_of_config_1() { return &___config_1; }
	inline void set_config_1(DictInfoC_Config_t96211011 * value)
	{
		___config_1 = value;
		Il2CppCodeGenWriteBarrier(&___config_1, value);
	}
};

struct DictInfoC_Reader_t516023748_StaticFields
{
public:
	// longame.config.DictInfoC_Reader longame.config.DictInfoC_Reader::instance
	DictInfoC_Reader_t516023748 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(DictInfoC_Reader_t516023748_StaticFields, ___instance_0)); }
	inline DictInfoC_Reader_t516023748 * get_instance_0() const { return ___instance_0; }
	inline DictInfoC_Reader_t516023748 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(DictInfoC_Reader_t516023748 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
