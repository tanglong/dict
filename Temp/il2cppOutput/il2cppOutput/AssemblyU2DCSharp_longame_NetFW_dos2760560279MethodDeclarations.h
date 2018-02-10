#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// longame.NetFW.dos
struct dos_t2760560279;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte2778693821.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void longame.NetFW.dos::.ctor(System.Object,System.IntPtr)
extern "C"  void dos__ctor_m1255053262 (dos_t2760560279 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.dos::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C"  void dos_Invoke_m995935553 (dos_t2760560279 * __this, ByteU5BU5D_t58506160* ___b, int32_t ___s, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_dos_t2760560279(Il2CppObject* delegate, ByteU5BU5D_t58506160* ___b, int32_t ___s, int32_t ___l);
// System.IAsyncResult longame.NetFW.dos::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * dos_BeginInvoke_m884487008 (dos_t2760560279 * __this, ByteU5BU5D_t58506160* ___b, int32_t ___s, int32_t ___l, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.dos::EndInvoke(System.IAsyncResult)
extern "C"  void dos_EndInvoke_m47325406 (dos_t2760560279 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
