#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
struct GenericEqualityComparer_1_t4063070029;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t3989826501;
// System.Collections.Generic.GenericEqualityComparer`1<System.UInt16>
struct GenericEqualityComparer_1_t4211888877;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit4063070029.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit4063070029MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Collections_Generic_EqualityCompare271497070MethodDeclarations.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit3989826501.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit3989826501MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_EqualityCompare198253542MethodDeclarations.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_TimeSpan763862892MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit4211888877.h"
#include "mscorlib_System_Collections_Generic_GenericEqualit4211888877MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_EqualityCompare420315918MethodDeclarations.h"
#include "mscorlib_System_UInt16985925268.h"
#include "mscorlib_System_UInt16985925268MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m1097371640_gshared (GenericEqualityComparer_1_t4063070029 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t271497070 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t271497070 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t271497070 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m4022924795_gshared (GenericEqualityComparer_1_t4063070029 * __this, Il2CppObject * ___obj, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		NullCheck((Il2CppObject *)(*(&___obj)));
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Il2CppObject *)(*(&___obj)));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m2036593421_gshared (GenericEqualityComparer_1_t4063070029 * __this, Il2CppObject * ___x, Il2CppObject * ___y, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___x;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Il2CppObject * L_1 = ___y;
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_1) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		Il2CppObject * L_2 = ___y;
		NullCheck((Il2CppObject*)(*(&___x)));
		bool L_3 = InterfaceFuncInvoker1< bool, Il2CppObject * >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Il2CppObject*)(*(&___x)), (Il2CppObject *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m1135065456_gshared (GenericEqualityComparer_1_t3989826501 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t198253542 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t198253542 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t198253542 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m1043508355_gshared (GenericEqualityComparer_1_t3989826501 * __this, TimeSpan_t763862892  ___obj, const MethodInfo* method)
{
	{
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = TimeSpan_GetHashCode_m3188156777((TimeSpan_t763862892 *)(&___obj), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m275441669_gshared (GenericEqualityComparer_1_t3989826501 * __this, TimeSpan_t763862892  ___x, TimeSpan_t763862892  ___y, const MethodInfo* method)
{
	{
		goto IL_0015;
	}
	{
		TimeSpan_t763862892  L_1 = ___y;
		TimeSpan_t763862892  L_2 = L_1;
		Il2CppObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		TimeSpan_t763862892  L_4 = ___y;
		bool L_5 = TimeSpan_Equals_m3271948249((TimeSpan_t763862892 *)(&___x), (TimeSpan_t763862892 )L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.UInt16>::.ctor()
extern "C"  void GenericEqualityComparer_1__ctor_m3044365208_gshared (GenericEqualityComparer_1_t4211888877 * __this, const MethodInfo* method)
{
	{
		NullCheck((EqualityComparer_1_t420315918 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		((  void (*) (EqualityComparer_1_t420315918 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t420315918 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.UInt16>::GetHashCode(T)
extern "C"  int32_t GenericEqualityComparer_1_GetHashCode_m2284248667_gshared (GenericEqualityComparer_1_t4211888877 * __this, uint16_t ___obj, const MethodInfo* method)
{
	{
		goto IL_000d;
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_1 = UInt16_GetHashCode_m592888001((uint16_t*)(&___obj), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.UInt16>::Equals(T,T)
extern "C"  bool GenericEqualityComparer_1_Equals_m3425035949_gshared (GenericEqualityComparer_1_t4211888877 * __this, uint16_t ___x, uint16_t ___y, const MethodInfo* method)
{
	{
		goto IL_0015;
	}
	{
		uint16_t L_1 = ___y;
		uint16_t L_2 = L_1;
		Il2CppObject * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return (bool)((((Il2CppObject*)(Il2CppObject *)L_3) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0);
	}

IL_0015:
	{
		uint16_t L_4 = ___y;
		bool L_5 = UInt16_Equals_m1176065097((uint16_t*)(&___x), (uint16_t)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
