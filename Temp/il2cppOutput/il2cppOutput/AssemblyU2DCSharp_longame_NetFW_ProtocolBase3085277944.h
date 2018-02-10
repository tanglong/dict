#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.ProtocolBase
struct  ProtocolBase_t3085277944  : public Il2CppObject
{
public:
	// System.UInt16 longame.NetFW.ProtocolBase::mProtoId
	uint16_t ___mProtoId_1;
	// System.Type longame.NetFW.ProtocolBase::m_tyProtoType
	Type_t * ___m_tyProtoType_2;
	// System.Boolean longame.NetFW.ProtocolBase::m_needReadFromMsg
	bool ___m_needReadFromMsg_3;

public:
	inline static int32_t get_offset_of_mProtoId_1() { return static_cast<int32_t>(offsetof(ProtocolBase_t3085277944, ___mProtoId_1)); }
	inline uint16_t get_mProtoId_1() const { return ___mProtoId_1; }
	inline uint16_t* get_address_of_mProtoId_1() { return &___mProtoId_1; }
	inline void set_mProtoId_1(uint16_t value)
	{
		___mProtoId_1 = value;
	}

	inline static int32_t get_offset_of_m_tyProtoType_2() { return static_cast<int32_t>(offsetof(ProtocolBase_t3085277944, ___m_tyProtoType_2)); }
	inline Type_t * get_m_tyProtoType_2() const { return ___m_tyProtoType_2; }
	inline Type_t ** get_address_of_m_tyProtoType_2() { return &___m_tyProtoType_2; }
	inline void set_m_tyProtoType_2(Type_t * value)
	{
		___m_tyProtoType_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_tyProtoType_2, value);
	}

	inline static int32_t get_offset_of_m_needReadFromMsg_3() { return static_cast<int32_t>(offsetof(ProtocolBase_t3085277944, ___m_needReadFromMsg_3)); }
	inline bool get_m_needReadFromMsg_3() const { return ___m_needReadFromMsg_3; }
	inline bool* get_address_of_m_needReadFromMsg_3() { return &___m_needReadFromMsg_3; }
	inline void set_m_needReadFromMsg_3(bool value)
	{
		___m_needReadFromMsg_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
