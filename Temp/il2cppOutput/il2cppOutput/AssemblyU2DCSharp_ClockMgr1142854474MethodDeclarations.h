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

// ClockMgr
struct ClockMgr_t1142854474;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"

// System.Void ClockMgr::.ctor()
extern "C"  void ClockMgr__ctor_m1330790033 (ClockMgr_t1142854474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ClockMgr::Init(System.UInt32)
extern "C"  bool ClockMgr_Init_m1993979395 (ClockMgr_t1142854474 * __this, uint32_t ___serverTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ClockMgr::GetCurServerTime()
extern "C"  uint32_t ClockMgr_GetCurServerTime_m3735956488 (ClockMgr_t1142854474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ClockMgr::GetCurClientTime()
extern "C"  uint32_t ClockMgr_GetCurClientTime_m392915600 (ClockMgr_t1142854474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ClockMgr::ConvertStampToDateTime(System.UInt32)
extern "C"  DateTime_t339033936  ClockMgr_ConvertStampToDateTime_m2734679016 (ClockMgr_t1142854474 * __this, uint32_t ___stamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ClockMgr::ConvertDateTimeToStamp(System.DateTime)
extern "C"  uint32_t ClockMgr_ConvertDateTimeToStamp_m4014083728 (ClockMgr_t1142854474 * __this, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 ClockMgr::GetNowSecond()
extern "C"  uint32_t ClockMgr_GetNowSecond_m1569974498 (ClockMgr_t1142854474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ClockMgr::ConvertStampToString(System.UInt32)
extern "C"  String_t* ClockMgr_ConvertStampToString_m1519136296 (ClockMgr_t1142854474 * __this, uint32_t ___stamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
