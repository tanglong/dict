#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// longame.NetFW.OnProcessMsgHandler
struct OnProcessMsgHandler_t1743510888;
// longame.NetFW.OnParseMsgHandler
struct OnParseMsgHandler_t4119810284;
// System.Collections.Generic.Dictionary`2<System.UInt16,longame.NetFW.OnParseMsgHandler>
struct Dictionary_2_t2505154710;
// System.Collections.Generic.Dictionary`2<System.UInt16,longame.NetFW.OnProcessMsgHandler>
struct Dictionary_2_t128855314;
// longame.NetFW.ClassStorage`1<longame.NetFW.CommandFactory>
struct ClassStorage_1_t52794014;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.CommandFactory
struct  CommandFactory_t3552396462  : public Il2CppObject
{
public:
	// longame.NetFW.OnProcessMsgHandler longame.NetFW.CommandFactory::m_defaultProcessFunc
	OnProcessMsgHandler_t1743510888 * ___m_defaultProcessFunc_0;
	// longame.NetFW.OnParseMsgHandler longame.NetFW.CommandFactory::m_defaultParseFunc
	OnParseMsgHandler_t4119810284 * ___m_defaultParseFunc_1;
	// System.Collections.Generic.Dictionary`2<System.UInt16,longame.NetFW.OnParseMsgHandler> longame.NetFW.CommandFactory::mParseMsgCmdList
	Dictionary_2_t2505154710 * ___mParseMsgCmdList_2;
	// System.Collections.Generic.Dictionary`2<System.UInt16,longame.NetFW.OnProcessMsgHandler> longame.NetFW.CommandFactory::mProcessMsgCmdList
	Dictionary_2_t128855314 * ___mProcessMsgCmdList_3;

public:
	inline static int32_t get_offset_of_m_defaultProcessFunc_0() { return static_cast<int32_t>(offsetof(CommandFactory_t3552396462, ___m_defaultProcessFunc_0)); }
	inline OnProcessMsgHandler_t1743510888 * get_m_defaultProcessFunc_0() const { return ___m_defaultProcessFunc_0; }
	inline OnProcessMsgHandler_t1743510888 ** get_address_of_m_defaultProcessFunc_0() { return &___m_defaultProcessFunc_0; }
	inline void set_m_defaultProcessFunc_0(OnProcessMsgHandler_t1743510888 * value)
	{
		___m_defaultProcessFunc_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_defaultProcessFunc_0, value);
	}

	inline static int32_t get_offset_of_m_defaultParseFunc_1() { return static_cast<int32_t>(offsetof(CommandFactory_t3552396462, ___m_defaultParseFunc_1)); }
	inline OnParseMsgHandler_t4119810284 * get_m_defaultParseFunc_1() const { return ___m_defaultParseFunc_1; }
	inline OnParseMsgHandler_t4119810284 ** get_address_of_m_defaultParseFunc_1() { return &___m_defaultParseFunc_1; }
	inline void set_m_defaultParseFunc_1(OnParseMsgHandler_t4119810284 * value)
	{
		___m_defaultParseFunc_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_defaultParseFunc_1, value);
	}

	inline static int32_t get_offset_of_mParseMsgCmdList_2() { return static_cast<int32_t>(offsetof(CommandFactory_t3552396462, ___mParseMsgCmdList_2)); }
	inline Dictionary_2_t2505154710 * get_mParseMsgCmdList_2() const { return ___mParseMsgCmdList_2; }
	inline Dictionary_2_t2505154710 ** get_address_of_mParseMsgCmdList_2() { return &___mParseMsgCmdList_2; }
	inline void set_mParseMsgCmdList_2(Dictionary_2_t2505154710 * value)
	{
		___mParseMsgCmdList_2 = value;
		Il2CppCodeGenWriteBarrier(&___mParseMsgCmdList_2, value);
	}

	inline static int32_t get_offset_of_mProcessMsgCmdList_3() { return static_cast<int32_t>(offsetof(CommandFactory_t3552396462, ___mProcessMsgCmdList_3)); }
	inline Dictionary_2_t128855314 * get_mProcessMsgCmdList_3() const { return ___mProcessMsgCmdList_3; }
	inline Dictionary_2_t128855314 ** get_address_of_mProcessMsgCmdList_3() { return &___mProcessMsgCmdList_3; }
	inline void set_mProcessMsgCmdList_3(Dictionary_2_t128855314 * value)
	{
		___mProcessMsgCmdList_3 = value;
		Il2CppCodeGenWriteBarrier(&___mProcessMsgCmdList_3, value);
	}
};

struct CommandFactory_t3552396462_StaticFields
{
public:
	// longame.NetFW.ClassStorage`1<longame.NetFW.CommandFactory> longame.NetFW.CommandFactory::storage
	ClassStorage_1_t52794014 * ___storage_4;

public:
	inline static int32_t get_offset_of_storage_4() { return static_cast<int32_t>(offsetof(CommandFactory_t3552396462_StaticFields, ___storage_4)); }
	inline ClassStorage_1_t52794014 * get_storage_4() const { return ___storage_4; }
	inline ClassStorage_1_t52794014 ** get_address_of_storage_4() { return &___storage_4; }
	inline void set_storage_4(ClassStorage_1_t52794014 * value)
	{
		___storage_4 = value;
		Il2CppCodeGenWriteBarrier(&___storage_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
