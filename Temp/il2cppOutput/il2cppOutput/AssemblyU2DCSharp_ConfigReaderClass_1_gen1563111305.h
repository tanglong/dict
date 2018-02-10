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
// longame.NetFW.NetMsg
struct NetMsg_t795376147;
// System.Collections.Generic.Dictionary`2<System.Int32,longame.config.DictInfoC>
struct Dictionary_2_t418951295;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConfigReaderClass`1<longame.config.DictInfoC>
struct  ConfigReaderClass_1_t1563111305  : public Il2CppObject
{
public:
	// System.Byte[] ConfigReaderClass`1::buffer
	ByteU5BU5D_t58506160* ___buffer_1;
	// longame.NetFW.NetMsg ConfigReaderClass`1::message
	NetMsg_t795376147 * ___message_2;
	// System.Int32 ConfigReaderClass`1::readSize
	int32_t ___readSize_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,CLASS> ConfigReaderClass`1::data_dict
	Dictionary_2_t418951295 * ___data_dict_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ConfigReaderClass`1::name_data_dict
	Dictionary_2_t190145395 * ___name_data_dict_5;

public:
	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(ConfigReaderClass_1_t1563111305, ___buffer_1)); }
	inline ByteU5BU5D_t58506160* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t58506160** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t58506160* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_1, value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(ConfigReaderClass_1_t1563111305, ___message_2)); }
	inline NetMsg_t795376147 * get_message_2() const { return ___message_2; }
	inline NetMsg_t795376147 ** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(NetMsg_t795376147 * value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier(&___message_2, value);
	}

	inline static int32_t get_offset_of_readSize_3() { return static_cast<int32_t>(offsetof(ConfigReaderClass_1_t1563111305, ___readSize_3)); }
	inline int32_t get_readSize_3() const { return ___readSize_3; }
	inline int32_t* get_address_of_readSize_3() { return &___readSize_3; }
	inline void set_readSize_3(int32_t value)
	{
		___readSize_3 = value;
	}

	inline static int32_t get_offset_of_data_dict_4() { return static_cast<int32_t>(offsetof(ConfigReaderClass_1_t1563111305, ___data_dict_4)); }
	inline Dictionary_2_t418951295 * get_data_dict_4() const { return ___data_dict_4; }
	inline Dictionary_2_t418951295 ** get_address_of_data_dict_4() { return &___data_dict_4; }
	inline void set_data_dict_4(Dictionary_2_t418951295 * value)
	{
		___data_dict_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_dict_4, value);
	}

	inline static int32_t get_offset_of_name_data_dict_5() { return static_cast<int32_t>(offsetof(ConfigReaderClass_1_t1563111305, ___name_data_dict_5)); }
	inline Dictionary_2_t190145395 * get_name_data_dict_5() const { return ___name_data_dict_5; }
	inline Dictionary_2_t190145395 ** get_address_of_name_data_dict_5() { return &___name_data_dict_5; }
	inline void set_name_data_dict_5(Dictionary_2_t190145395 * value)
	{
		___name_data_dict_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_data_dict_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
