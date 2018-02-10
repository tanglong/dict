#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// longame.NetFW.HandleType
struct HandleType_t2446476017;
// longame.NetFW.SerialType
struct SerialType_t4155313341;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.SessionHandle
struct  SessionHandle_t3084750221  : public Il2CppObject
{
public:
	// longame.NetFW.HandleType longame.NetFW.SessionHandle::handle
	HandleType_t2446476017 * ___handle_0;
	// longame.NetFW.SerialType longame.NetFW.SessionHandle::serial
	SerialType_t4155313341 * ___serial_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SessionHandle_t3084750221, ___handle_0)); }
	inline HandleType_t2446476017 * get_handle_0() const { return ___handle_0; }
	inline HandleType_t2446476017 ** get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(HandleType_t2446476017 * value)
	{
		___handle_0 = value;
		Il2CppCodeGenWriteBarrier(&___handle_0, value);
	}

	inline static int32_t get_offset_of_serial_1() { return static_cast<int32_t>(offsetof(SessionHandle_t3084750221, ___serial_1)); }
	inline SerialType_t4155313341 * get_serial_1() const { return ___serial_1; }
	inline SerialType_t4155313341 ** get_address_of_serial_1() { return &___serial_1; }
	inline void set_serial_1(SerialType_t4155313341 * value)
	{
		___serial_1 = value;
		Il2CppCodeGenWriteBarrier(&___serial_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
