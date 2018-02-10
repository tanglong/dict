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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.NetMsg
struct  NetMsg_t795376147  : public Il2CppObject
{
public:
	// System.UInt16 longame.NetFW.NetMsg::m_size
	uint16_t ___m_size_0;
	// System.UInt16 longame.NetFW.NetMsg::m_ID
	uint16_t ___m_ID_1;
	// System.UInt16 longame.NetFW.NetMsg::m_readIndex
	uint16_t ___m_readIndex_2;
	// System.UInt16 longame.NetFW.NetMsg::m_writeIndex
	uint16_t ___m_writeIndex_3;
	// System.Byte[] longame.NetFW.NetMsg::m_buffer
	ByteU5BU5D_t58506160* ___m_buffer_4;

public:
	inline static int32_t get_offset_of_m_size_0() { return static_cast<int32_t>(offsetof(NetMsg_t795376147, ___m_size_0)); }
	inline uint16_t get_m_size_0() const { return ___m_size_0; }
	inline uint16_t* get_address_of_m_size_0() { return &___m_size_0; }
	inline void set_m_size_0(uint16_t value)
	{
		___m_size_0 = value;
	}

	inline static int32_t get_offset_of_m_ID_1() { return static_cast<int32_t>(offsetof(NetMsg_t795376147, ___m_ID_1)); }
	inline uint16_t get_m_ID_1() const { return ___m_ID_1; }
	inline uint16_t* get_address_of_m_ID_1() { return &___m_ID_1; }
	inline void set_m_ID_1(uint16_t value)
	{
		___m_ID_1 = value;
	}

	inline static int32_t get_offset_of_m_readIndex_2() { return static_cast<int32_t>(offsetof(NetMsg_t795376147, ___m_readIndex_2)); }
	inline uint16_t get_m_readIndex_2() const { return ___m_readIndex_2; }
	inline uint16_t* get_address_of_m_readIndex_2() { return &___m_readIndex_2; }
	inline void set_m_readIndex_2(uint16_t value)
	{
		___m_readIndex_2 = value;
	}

	inline static int32_t get_offset_of_m_writeIndex_3() { return static_cast<int32_t>(offsetof(NetMsg_t795376147, ___m_writeIndex_3)); }
	inline uint16_t get_m_writeIndex_3() const { return ___m_writeIndex_3; }
	inline uint16_t* get_address_of_m_writeIndex_3() { return &___m_writeIndex_3; }
	inline void set_m_writeIndex_3(uint16_t value)
	{
		___m_writeIndex_3 = value;
	}

	inline static int32_t get_offset_of_m_buffer_4() { return static_cast<int32_t>(offsetof(NetMsg_t795376147, ___m_buffer_4)); }
	inline ByteU5BU5D_t58506160* get_m_buffer_4() const { return ___m_buffer_4; }
	inline ByteU5BU5D_t58506160** get_address_of_m_buffer_4() { return &___m_buffer_4; }
	inline void set_m_buffer_4(ByteU5BU5D_t58506160* value)
	{
		___m_buffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_buffer_4, value);
	}
};

struct NetMsg_t795376147_StaticFields
{
public:
	// System.Byte[] longame.NetFW.NetMsg::bufTemp
	ByteU5BU5D_t58506160* ___bufTemp_5;

public:
	inline static int32_t get_offset_of_bufTemp_5() { return static_cast<int32_t>(offsetof(NetMsg_t795376147_StaticFields, ___bufTemp_5)); }
	inline ByteU5BU5D_t58506160* get_bufTemp_5() const { return ___bufTemp_5; }
	inline ByteU5BU5D_t58506160** get_address_of_bufTemp_5() { return &___bufTemp_5; }
	inline void set_bufTemp_5(ByteU5BU5D_t58506160* value)
	{
		___bufTemp_5 = value;
		Il2CppCodeGenWriteBarrier(&___bufTemp_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
