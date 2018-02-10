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

// ConfigReaderClass`1<System.Object>
struct ConfigReaderClass_1_t2472077213;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1327917203;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ConfigReaderClass`1<System.Object>::.ctor()
extern "C"  void ConfigReaderClass_1__ctor_m2829831555_gshared (ConfigReaderClass_1_t2472077213 * __this, const MethodInfo* method);
#define ConfigReaderClass_1__ctor_m2829831555(__this, method) ((  void (*) (ConfigReaderClass_1_t2472077213 *, const MethodInfo*))ConfigReaderClass_1__ctor_m2829831555_gshared)(__this, method)
// CLASS ConfigReaderClass`1<System.Object>::getInfo(System.Int32)
extern "C"  Il2CppObject * ConfigReaderClass_1_getInfo_m4182469531_gshared (ConfigReaderClass_1_t2472077213 * __this, int32_t ___key, const MethodInfo* method);
#define ConfigReaderClass_1_getInfo_m4182469531(__this, ___key, method) ((  Il2CppObject * (*) (ConfigReaderClass_1_t2472077213 *, int32_t, const MethodInfo*))ConfigReaderClass_1_getInfo_m4182469531_gshared)(__this, ___key, method)
// CLASS ConfigReaderClass`1<System.Object>::getName(System.String)
extern "C"  Il2CppObject * ConfigReaderClass_1_getName_m3107489403_gshared (ConfigReaderClass_1_t2472077213 * __this, String_t* ___name, const MethodInfo* method);
#define ConfigReaderClass_1_getName_m3107489403(__this, ___name, method) ((  Il2CppObject * (*) (ConfigReaderClass_1_t2472077213 *, String_t*, const MethodInfo*))ConfigReaderClass_1_getName_m3107489403_gshared)(__this, ___name, method)
// System.Collections.Generic.Dictionary`2<System.Int32,CLASS> ConfigReaderClass`1<System.Object>::getData()
extern "C"  Dictionary_2_t1327917203 * ConfigReaderClass_1_getData_m3258260748_gshared (ConfigReaderClass_1_t2472077213 * __this, const MethodInfo* method);
#define ConfigReaderClass_1_getData_m3258260748(__this, method) ((  Dictionary_2_t1327917203 * (*) (ConfigReaderClass_1_t2472077213 *, const MethodInfo*))ConfigReaderClass_1_getData_m3258260748_gshared)(__this, method)
// System.Int32 ConfigReaderClass`1<System.Object>::getCount()
extern "C"  int32_t ConfigReaderClass_1_getCount_m1576457704_gshared (ConfigReaderClass_1_t2472077213 * __this, const MethodInfo* method);
#define ConfigReaderClass_1_getCount_m1576457704(__this, method) ((  int32_t (*) (ConfigReaderClass_1_t2472077213 *, const MethodInfo*))ConfigReaderClass_1_getCount_m1576457704_gshared)(__this, method)
// System.Void ConfigReaderClass`1<System.Object>::reset(System.Int32)
extern "C"  void ConfigReaderClass_1_reset_m3451542945_gshared (ConfigReaderClass_1_t2472077213 * __this, int32_t ___size, const MethodInfo* method);
#define ConfigReaderClass_1_reset_m3451542945(__this, ___size, method) ((  void (*) (ConfigReaderClass_1_t2472077213 *, int32_t, const MethodInfo*))ConfigReaderClass_1_reset_m3451542945_gshared)(__this, ___size, method)
// System.Void ConfigReaderClass`1<System.Object>::reloadMessage()
extern "C"  void ConfigReaderClass_1_reloadMessage_m1747799919_gshared (ConfigReaderClass_1_t2472077213 * __this, const MethodInfo* method);
#define ConfigReaderClass_1_reloadMessage_m1747799919(__this, method) ((  void (*) (ConfigReaderClass_1_t2472077213 *, const MethodInfo*))ConfigReaderClass_1_reloadMessage_m1747799919_gshared)(__this, method)
// CLASS ConfigReaderClass`1<System.Object>::tryLoad()
extern "C"  Il2CppObject * ConfigReaderClass_1_tryLoad_m1925683751_gshared (ConfigReaderClass_1_t2472077213 * __this, const MethodInfo* method);
#define ConfigReaderClass_1_tryLoad_m1925683751(__this, method) ((  Il2CppObject * (*) (ConfigReaderClass_1_t2472077213 *, const MethodInfo*))ConfigReaderClass_1_tryLoad_m1925683751_gshared)(__this, method)
// System.String ConfigReaderClass`1<System.Object>::GetConfigFilePath(System.String,System.Boolean)
extern "C"  String_t* ConfigReaderClass_1_GetConfigFilePath_m1908147378_gshared (Il2CppObject * __this /* static, unused */, String_t* ___FileName, bool ___isStreamingPath, const MethodInfo* method);
#define ConfigReaderClass_1_GetConfigFilePath_m1908147378(__this /* static, unused */, ___FileName, ___isStreamingPath, method) ((  String_t* (*) (Il2CppObject * /* static, unused */, String_t*, bool, const MethodInfo*))ConfigReaderClass_1_GetConfigFilePath_m1908147378_gshared)(__this /* static, unused */, ___FileName, ___isStreamingPath, method)
// System.Void ConfigReaderClass`1<System.Object>::LoadConfigFile(System.String)
extern "C"  void ConfigReaderClass_1_LoadConfigFile_m104271709_gshared (ConfigReaderClass_1_t2472077213 * __this, String_t* ___FileName, const MethodInfo* method);
#define ConfigReaderClass_1_LoadConfigFile_m104271709(__this, ___FileName, method) ((  void (*) (ConfigReaderClass_1_t2472077213 *, String_t*, const MethodInfo*))ConfigReaderClass_1_LoadConfigFile_m104271709_gshared)(__this, ___FileName, method)
// System.Int32 ConfigReaderClass`1<System.Object>::LoadFromStreamingAssets(System.String)
extern "C"  int32_t ConfigReaderClass_1_LoadFromStreamingAssets_m3124617018_gshared (ConfigReaderClass_1_t2472077213 * __this, String_t* ___FileName, const MethodInfo* method);
#define ConfigReaderClass_1_LoadFromStreamingAssets_m3124617018(__this, ___FileName, method) ((  int32_t (*) (ConfigReaderClass_1_t2472077213 *, String_t*, const MethodInfo*))ConfigReaderClass_1_LoadFromStreamingAssets_m3124617018_gshared)(__this, ___FileName, method)
// System.Int32 ConfigReaderClass`1<System.Object>::LoadFromPersistentData(System.String)
extern "C"  int32_t ConfigReaderClass_1_LoadFromPersistentData_m3014289954_gshared (ConfigReaderClass_1_t2472077213 * __this, String_t* ___FileName, const MethodInfo* method);
#define ConfigReaderClass_1_LoadFromPersistentData_m3014289954(__this, ___FileName, method) ((  int32_t (*) (ConfigReaderClass_1_t2472077213 *, String_t*, const MethodInfo*))ConfigReaderClass_1_LoadFromPersistentData_m3014289954_gshared)(__this, ___FileName, method)
// System.Collections.Generic.List`1<System.Int32> ConfigReaderClass`1<System.Object>::PartialMatch(System.String,System.Int32)
extern "C"  List_1_t3644373756 * ConfigReaderClass_1_PartialMatch_m1090774684_gshared (ConfigReaderClass_1_t2472077213 * __this, String_t* ___partialKey, int32_t ___num, const MethodInfo* method);
#define ConfigReaderClass_1_PartialMatch_m1090774684(__this, ___partialKey, ___num, method) ((  List_1_t3644373756 * (*) (ConfigReaderClass_1_t2472077213 *, String_t*, int32_t, const MethodInfo*))ConfigReaderClass_1_PartialMatch_m1090774684_gshared)(__this, ___partialKey, ___num, method)
