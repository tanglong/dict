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

// longame.NetFW.NetMsg
struct NetMsg_t795376147;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void longame.NetFW.NetMsg::.ctor()
extern "C"  void NetMsg__ctor_m1296225798 (NetMsg_t795376147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::.ctor(System.UInt32)
extern "C"  void NetMsg__ctor_m1985287348 (NetMsg_t795376147 * __this, uint32_t ___bufSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::.ctor(System.Byte[],System.UInt32,System.UInt32)
extern "C"  void NetMsg__ctor_m3221953131 (NetMsg_t795376147 * __this, ByteU5BU5D_t58506160* ___data, uint32_t ___index, uint32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::.cctor()
extern "C"  void NetMsg__cctor_m1046197863 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::UpdateNetMsg(System.Byte[],System.UInt32,System.UInt32)
extern "C"  void NetMsg_UpdateNetMsg_m77904134 (NetMsg_t795376147 * __this, ByteU5BU5D_t58506160* ___data, uint32_t ___index, uint32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 longame.NetFW.NetMsg::GetID()
extern "C"  uint16_t NetMsg_GetID_m3816623328 (NetMsg_t795376147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::SetID(System.UInt16)
extern "C"  void NetMsg_SetID_m178322099 (NetMsg_t795376147 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 longame.NetFW.NetMsg::getSize()
extern "C"  uint16_t NetMsg_getSize_m2486910342 (NetMsg_t795376147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] longame.NetFW.NetMsg::getData()
extern "C"  ByteU5BU5D_t58506160* NetMsg_getData_m3596678778 (NetMsg_t795376147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::writeData(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetMsg_writeData_m3125349276 (NetMsg_t795376147 * __this, ByteU5BU5D_t58506160* ___data, int32_t ___index, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::writeData(System.Byte[])
extern "C"  void NetMsg_writeData_m757107004 (NetMsg_t795376147 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::readData(System.Byte[],System.UInt16)
extern "C"  void NetMsg_readData_m1871913529 (NetMsg_t795376147 * __this, ByteU5BU5D_t58506160* ___data, uint16_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.Byte)
extern "C"  void NetMsg_Write_m342702152 (NetMsg_t795376147 * __this, uint8_t ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.Byte&)
extern "C"  void NetMsg_Read_m61248085 (NetMsg_t795376147 * __this, uint8_t* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.SByte)
extern "C"  void NetMsg_Write_m2469899303 (NetMsg_t795376147 * __this, int8_t ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.SByte&)
extern "C"  void NetMsg_Read_m2531872980 (NetMsg_t795376147 * __this, int8_t* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.UInt16)
extern "C"  void NetMsg_Write_m1222670225 (NetMsg_t795376147 * __this, uint16_t ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.UInt16&)
extern "C"  void NetMsg_Read_m1970408428 (NetMsg_t795376147 * __this, uint16_t* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.Int16)
extern "C"  void NetMsg_Write_m2224027918 (NetMsg_t795376147 * __this, int16_t ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.Int16&)
extern "C"  void NetMsg_Read_m3499794637 (NetMsg_t795376147 * __this, int16_t* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.UInt32)
extern "C"  void NetMsg_Write_m1222672023 (NetMsg_t795376147 * __this, uint32_t ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.UInt32&)
extern "C"  void NetMsg_Read_m1970464166 (NetMsg_t795376147 * __this, uint32_t* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.Int32)
extern "C"  void NetMsg_Write_m2224029716 (NetMsg_t795376147 * __this, int32_t ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.Int32&)
extern "C"  void NetMsg_Read_m3499850375 (NetMsg_t795376147 * __this, int32_t* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.UInt64)
extern "C"  void NetMsg_Write_m1222674968 (NetMsg_t795376147 * __this, uint64_t ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.UInt64&)
extern "C"  void NetMsg_Read_m1970555461 (NetMsg_t795376147 * __this, uint64_t* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.Int64)
extern "C"  void NetMsg_Write_m2224032661 (NetMsg_t795376147 * __this, int64_t ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.Int64&)
extern "C"  void NetMsg_Read_m3499941670 (NetMsg_t795376147 * __this, int64_t* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.Single)
extern "C"  void NetMsg_Write_m363466568 (NetMsg_t795376147 * __this, float ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.Single&)
extern "C"  void NetMsg_Read_m1104898837 (NetMsg_t795376147 * __this, float* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.Double)
extern "C"  void NetMsg_Write_m113903839 (NetMsg_t795376147 * __this, double ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.Double&)
extern "C"  void NetMsg_Read_m1958388830 (NetMsg_t795376147 * __this, double* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.Boolean)
extern "C"  void NetMsg_Write_m4177615738 (NetMsg_t795376147 * __this, bool ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.Boolean&)
extern "C"  void NetMsg_Read_m3445142561 (NetMsg_t795376147 * __this, bool* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Write(System.String)
extern "C"  void NetMsg_Write_m682142879 (NetMsg_t795376147 * __this, String_t* ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.NetMsg::Read(System.String&)
extern "C"  void NetMsg_Read_m2393929886 (NetMsg_t795376147 * __this, String_t** ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.NetMsg::getReadPtr()
extern "C"  int32_t NetMsg_getReadPtr_m3936050158 (NetMsg_t795376147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.NetMsg::getWritePrt()
extern "C"  int32_t NetMsg_getWritePrt_m1694607807 (NetMsg_t795376147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
