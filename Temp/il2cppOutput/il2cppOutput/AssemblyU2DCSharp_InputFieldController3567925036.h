#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t2345609593;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t729687770;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1048578170;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputFieldController
struct  InputFieldController_t3567925036  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.InputField InputFieldController::input
	InputField_t2345609593 * ___input_2;
	// UnityEngine.UI.Button[] InputFieldController::queryButtons
	ButtonU5BU5D_t729687770* ___queryButtons_3;
	// UnityEngine.UI.ScrollRect InputFieldController::scrollRect
	ScrollRect_t1048578170 * ___scrollRect_4;
	// UnityEngine.GameObject InputFieldController::textRect
	GameObject_t4012695102 * ___textRect_5;
	// UnityEngine.UI.Text InputFieldController::contentText
	Text_t3286458198 * ___contentText_6;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(InputFieldController_t3567925036, ___input_2)); }
	inline InputField_t2345609593 * get_input_2() const { return ___input_2; }
	inline InputField_t2345609593 ** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(InputField_t2345609593 * value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier(&___input_2, value);
	}

	inline static int32_t get_offset_of_queryButtons_3() { return static_cast<int32_t>(offsetof(InputFieldController_t3567925036, ___queryButtons_3)); }
	inline ButtonU5BU5D_t729687770* get_queryButtons_3() const { return ___queryButtons_3; }
	inline ButtonU5BU5D_t729687770** get_address_of_queryButtons_3() { return &___queryButtons_3; }
	inline void set_queryButtons_3(ButtonU5BU5D_t729687770* value)
	{
		___queryButtons_3 = value;
		Il2CppCodeGenWriteBarrier(&___queryButtons_3, value);
	}

	inline static int32_t get_offset_of_scrollRect_4() { return static_cast<int32_t>(offsetof(InputFieldController_t3567925036, ___scrollRect_4)); }
	inline ScrollRect_t1048578170 * get_scrollRect_4() const { return ___scrollRect_4; }
	inline ScrollRect_t1048578170 ** get_address_of_scrollRect_4() { return &___scrollRect_4; }
	inline void set_scrollRect_4(ScrollRect_t1048578170 * value)
	{
		___scrollRect_4 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_4, value);
	}

	inline static int32_t get_offset_of_textRect_5() { return static_cast<int32_t>(offsetof(InputFieldController_t3567925036, ___textRect_5)); }
	inline GameObject_t4012695102 * get_textRect_5() const { return ___textRect_5; }
	inline GameObject_t4012695102 ** get_address_of_textRect_5() { return &___textRect_5; }
	inline void set_textRect_5(GameObject_t4012695102 * value)
	{
		___textRect_5 = value;
		Il2CppCodeGenWriteBarrier(&___textRect_5, value);
	}

	inline static int32_t get_offset_of_contentText_6() { return static_cast<int32_t>(offsetof(InputFieldController_t3567925036, ___contentText_6)); }
	inline Text_t3286458198 * get_contentText_6() const { return ___contentText_6; }
	inline Text_t3286458198 ** get_address_of_contentText_6() { return &___contentText_6; }
	inline void set_contentText_6(Text_t3286458198 * value)
	{
		___contentText_6 = value;
		Il2CppCodeGenWriteBarrier(&___contentText_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
