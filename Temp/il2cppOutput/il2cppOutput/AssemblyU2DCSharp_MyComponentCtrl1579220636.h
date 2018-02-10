#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1355425710;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyComponentCtrl
struct  MyComponentCtrl_t1579220636  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct MyComponentCtrl_t1579220636_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> MyComponentCtrl::ComponentObjDic
	Dictionary_2_t1355425710 * ___ComponentObjDic_2;

public:
	inline static int32_t get_offset_of_ComponentObjDic_2() { return static_cast<int32_t>(offsetof(MyComponentCtrl_t1579220636_StaticFields, ___ComponentObjDic_2)); }
	inline Dictionary_2_t1355425710 * get_ComponentObjDic_2() const { return ___ComponentObjDic_2; }
	inline Dictionary_2_t1355425710 ** get_address_of_ComponentObjDic_2() { return &___ComponentObjDic_2; }
	inline void set_ComponentObjDic_2(Dictionary_2_t1355425710 * value)
	{
		___ComponentObjDic_2 = value;
		Il2CppCodeGenWriteBarrier(&___ComponentObjDic_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
