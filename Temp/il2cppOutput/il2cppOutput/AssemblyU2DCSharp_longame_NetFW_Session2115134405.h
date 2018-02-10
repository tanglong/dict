#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// longame.NetFW.SysPingTime
struct SysPingTime_t3866637947;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// longame.NetFW.NetMsg
struct NetMsg_t795376147;
// System.Net.Sockets.Socket
struct Socket_t150013987;

#include "AssemblyU2DCSharp_longame_NetFW_Selectable3098350021.h"
#include "AssemblyU2DCSharp_longame_NetFW_SessionError2214472321.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.Session
struct  Session_t2115134405  : public Selectable_t3098350021
{
public:
	// longame.NetFW.SysPingTime longame.NetFW.Session::m_SysPingTimes
	SysPingTime_t3866637947 * ___m_SysPingTimes_3;
	// System.String longame.NetFW.Session::m_strIP
	String_t* ___m_strIP_4;
	// System.UInt16 longame.NetFW.Session::m_uiPort
	uint16_t ___m_uiPort_5;
	// System.String longame.NetFW.Session::m_strLocalIp
	String_t* ___m_strLocalIp_6;
	// System.UInt16 longame.NetFW.Session::m_local_port
	uint16_t ___m_local_port_7;
	// System.Boolean longame.NetFW.Session::m_IsUseS
	bool ___m_IsUseS_8;
	// System.Byte[] longame.NetFW.Session::m_bysSendBuf
	ByteU5BU5D_t58506160* ___m_bysSendBuf_9;
	// System.Byte[] longame.NetFW.Session::m_bysRecvBuf
	ByteU5BU5D_t58506160* ___m_bysRecvBuf_10;
	// System.UInt32 longame.NetFW.Session::m_uiSendSize
	uint32_t ___m_uiSendSize_11;
	// System.UInt32 longame.NetFW.Session::m_uiRecvSize
	uint32_t ___m_uiRecvSize_12;
	// System.UInt16 longame.NetFW.Session::m_sPacketLen
	uint16_t ___m_sPacketLen_13;
	// longame.NetFW.SessionError longame.NetFW.Session::m_ErrorCode
	int32_t ___m_ErrorCode_14;
	// System.Byte longame.NetFW.Session::m_bySysPingCount
	uint8_t ___m_bySysPingCount_15;
	// longame.NetFW.NetMsg longame.NetFW.Session::m_Msg
	NetMsg_t795376147 * ___m_Msg_16;
	// System.Net.Sockets.Socket longame.NetFW.Session::m_socket
	Socket_t150013987 * ___m_socket_17;
	// System.UInt32 longame.NetFW.Session::m_uiInitSendBufSize
	uint32_t ___m_uiInitSendBufSize_18;
	// System.UInt32 longame.NetFW.Session::m_uiInitRecvBufSize
	uint32_t ___m_uiInitRecvBufSize_19;
	// System.Boolean longame.NetFW.Session::m_sendbuf_dynamic
	bool ___m_sendbuf_dynamic_20;
	// System.Boolean longame.NetFW.Session::m_bReleaseDynamicSendBuf
	bool ___m_bReleaseDynamicSendBuf_21;
	// System.UInt32 longame.NetFW.Session::m_uiMaxDynamicSendBufSize
	uint32_t ___m_uiMaxDynamicSendBufSize_22;
	// System.Int64 longame.NetFW.Session::m_lastReceivedTick
	int64_t ___m_lastReceivedTick_23;
	// System.Int32 longame.NetFW.Session::m_systemError
	int32_t ___m_systemError_24;

public:
	inline static int32_t get_offset_of_m_SysPingTimes_3() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_SysPingTimes_3)); }
	inline SysPingTime_t3866637947 * get_m_SysPingTimes_3() const { return ___m_SysPingTimes_3; }
	inline SysPingTime_t3866637947 ** get_address_of_m_SysPingTimes_3() { return &___m_SysPingTimes_3; }
	inline void set_m_SysPingTimes_3(SysPingTime_t3866637947 * value)
	{
		___m_SysPingTimes_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_SysPingTimes_3, value);
	}

	inline static int32_t get_offset_of_m_strIP_4() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_strIP_4)); }
	inline String_t* get_m_strIP_4() const { return ___m_strIP_4; }
	inline String_t** get_address_of_m_strIP_4() { return &___m_strIP_4; }
	inline void set_m_strIP_4(String_t* value)
	{
		___m_strIP_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_strIP_4, value);
	}

	inline static int32_t get_offset_of_m_uiPort_5() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_uiPort_5)); }
	inline uint16_t get_m_uiPort_5() const { return ___m_uiPort_5; }
	inline uint16_t* get_address_of_m_uiPort_5() { return &___m_uiPort_5; }
	inline void set_m_uiPort_5(uint16_t value)
	{
		___m_uiPort_5 = value;
	}

	inline static int32_t get_offset_of_m_strLocalIp_6() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_strLocalIp_6)); }
	inline String_t* get_m_strLocalIp_6() const { return ___m_strLocalIp_6; }
	inline String_t** get_address_of_m_strLocalIp_6() { return &___m_strLocalIp_6; }
	inline void set_m_strLocalIp_6(String_t* value)
	{
		___m_strLocalIp_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_strLocalIp_6, value);
	}

	inline static int32_t get_offset_of_m_local_port_7() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_local_port_7)); }
	inline uint16_t get_m_local_port_7() const { return ___m_local_port_7; }
	inline uint16_t* get_address_of_m_local_port_7() { return &___m_local_port_7; }
	inline void set_m_local_port_7(uint16_t value)
	{
		___m_local_port_7 = value;
	}

	inline static int32_t get_offset_of_m_IsUseS_8() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_IsUseS_8)); }
	inline bool get_m_IsUseS_8() const { return ___m_IsUseS_8; }
	inline bool* get_address_of_m_IsUseS_8() { return &___m_IsUseS_8; }
	inline void set_m_IsUseS_8(bool value)
	{
		___m_IsUseS_8 = value;
	}

	inline static int32_t get_offset_of_m_bysSendBuf_9() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_bysSendBuf_9)); }
	inline ByteU5BU5D_t58506160* get_m_bysSendBuf_9() const { return ___m_bysSendBuf_9; }
	inline ByteU5BU5D_t58506160** get_address_of_m_bysSendBuf_9() { return &___m_bysSendBuf_9; }
	inline void set_m_bysSendBuf_9(ByteU5BU5D_t58506160* value)
	{
		___m_bysSendBuf_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_bysSendBuf_9, value);
	}

	inline static int32_t get_offset_of_m_bysRecvBuf_10() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_bysRecvBuf_10)); }
	inline ByteU5BU5D_t58506160* get_m_bysRecvBuf_10() const { return ___m_bysRecvBuf_10; }
	inline ByteU5BU5D_t58506160** get_address_of_m_bysRecvBuf_10() { return &___m_bysRecvBuf_10; }
	inline void set_m_bysRecvBuf_10(ByteU5BU5D_t58506160* value)
	{
		___m_bysRecvBuf_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_bysRecvBuf_10, value);
	}

	inline static int32_t get_offset_of_m_uiSendSize_11() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_uiSendSize_11)); }
	inline uint32_t get_m_uiSendSize_11() const { return ___m_uiSendSize_11; }
	inline uint32_t* get_address_of_m_uiSendSize_11() { return &___m_uiSendSize_11; }
	inline void set_m_uiSendSize_11(uint32_t value)
	{
		___m_uiSendSize_11 = value;
	}

	inline static int32_t get_offset_of_m_uiRecvSize_12() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_uiRecvSize_12)); }
	inline uint32_t get_m_uiRecvSize_12() const { return ___m_uiRecvSize_12; }
	inline uint32_t* get_address_of_m_uiRecvSize_12() { return &___m_uiRecvSize_12; }
	inline void set_m_uiRecvSize_12(uint32_t value)
	{
		___m_uiRecvSize_12 = value;
	}

	inline static int32_t get_offset_of_m_sPacketLen_13() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_sPacketLen_13)); }
	inline uint16_t get_m_sPacketLen_13() const { return ___m_sPacketLen_13; }
	inline uint16_t* get_address_of_m_sPacketLen_13() { return &___m_sPacketLen_13; }
	inline void set_m_sPacketLen_13(uint16_t value)
	{
		___m_sPacketLen_13 = value;
	}

	inline static int32_t get_offset_of_m_ErrorCode_14() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_ErrorCode_14)); }
	inline int32_t get_m_ErrorCode_14() const { return ___m_ErrorCode_14; }
	inline int32_t* get_address_of_m_ErrorCode_14() { return &___m_ErrorCode_14; }
	inline void set_m_ErrorCode_14(int32_t value)
	{
		___m_ErrorCode_14 = value;
	}

	inline static int32_t get_offset_of_m_bySysPingCount_15() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_bySysPingCount_15)); }
	inline uint8_t get_m_bySysPingCount_15() const { return ___m_bySysPingCount_15; }
	inline uint8_t* get_address_of_m_bySysPingCount_15() { return &___m_bySysPingCount_15; }
	inline void set_m_bySysPingCount_15(uint8_t value)
	{
		___m_bySysPingCount_15 = value;
	}

	inline static int32_t get_offset_of_m_Msg_16() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_Msg_16)); }
	inline NetMsg_t795376147 * get_m_Msg_16() const { return ___m_Msg_16; }
	inline NetMsg_t795376147 ** get_address_of_m_Msg_16() { return &___m_Msg_16; }
	inline void set_m_Msg_16(NetMsg_t795376147 * value)
	{
		___m_Msg_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_Msg_16, value);
	}

	inline static int32_t get_offset_of_m_socket_17() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_socket_17)); }
	inline Socket_t150013987 * get_m_socket_17() const { return ___m_socket_17; }
	inline Socket_t150013987 ** get_address_of_m_socket_17() { return &___m_socket_17; }
	inline void set_m_socket_17(Socket_t150013987 * value)
	{
		___m_socket_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_socket_17, value);
	}

	inline static int32_t get_offset_of_m_uiInitSendBufSize_18() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_uiInitSendBufSize_18)); }
	inline uint32_t get_m_uiInitSendBufSize_18() const { return ___m_uiInitSendBufSize_18; }
	inline uint32_t* get_address_of_m_uiInitSendBufSize_18() { return &___m_uiInitSendBufSize_18; }
	inline void set_m_uiInitSendBufSize_18(uint32_t value)
	{
		___m_uiInitSendBufSize_18 = value;
	}

	inline static int32_t get_offset_of_m_uiInitRecvBufSize_19() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_uiInitRecvBufSize_19)); }
	inline uint32_t get_m_uiInitRecvBufSize_19() const { return ___m_uiInitRecvBufSize_19; }
	inline uint32_t* get_address_of_m_uiInitRecvBufSize_19() { return &___m_uiInitRecvBufSize_19; }
	inline void set_m_uiInitRecvBufSize_19(uint32_t value)
	{
		___m_uiInitRecvBufSize_19 = value;
	}

	inline static int32_t get_offset_of_m_sendbuf_dynamic_20() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_sendbuf_dynamic_20)); }
	inline bool get_m_sendbuf_dynamic_20() const { return ___m_sendbuf_dynamic_20; }
	inline bool* get_address_of_m_sendbuf_dynamic_20() { return &___m_sendbuf_dynamic_20; }
	inline void set_m_sendbuf_dynamic_20(bool value)
	{
		___m_sendbuf_dynamic_20 = value;
	}

	inline static int32_t get_offset_of_m_bReleaseDynamicSendBuf_21() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_bReleaseDynamicSendBuf_21)); }
	inline bool get_m_bReleaseDynamicSendBuf_21() const { return ___m_bReleaseDynamicSendBuf_21; }
	inline bool* get_address_of_m_bReleaseDynamicSendBuf_21() { return &___m_bReleaseDynamicSendBuf_21; }
	inline void set_m_bReleaseDynamicSendBuf_21(bool value)
	{
		___m_bReleaseDynamicSendBuf_21 = value;
	}

	inline static int32_t get_offset_of_m_uiMaxDynamicSendBufSize_22() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_uiMaxDynamicSendBufSize_22)); }
	inline uint32_t get_m_uiMaxDynamicSendBufSize_22() const { return ___m_uiMaxDynamicSendBufSize_22; }
	inline uint32_t* get_address_of_m_uiMaxDynamicSendBufSize_22() { return &___m_uiMaxDynamicSendBufSize_22; }
	inline void set_m_uiMaxDynamicSendBufSize_22(uint32_t value)
	{
		___m_uiMaxDynamicSendBufSize_22 = value;
	}

	inline static int32_t get_offset_of_m_lastReceivedTick_23() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_lastReceivedTick_23)); }
	inline int64_t get_m_lastReceivedTick_23() const { return ___m_lastReceivedTick_23; }
	inline int64_t* get_address_of_m_lastReceivedTick_23() { return &___m_lastReceivedTick_23; }
	inline void set_m_lastReceivedTick_23(int64_t value)
	{
		___m_lastReceivedTick_23 = value;
	}

	inline static int32_t get_offset_of_m_systemError_24() { return static_cast<int32_t>(offsetof(Session_t2115134405, ___m_systemError_24)); }
	inline int32_t get_m_systemError_24() const { return ___m_systemError_24; }
	inline int32_t* get_address_of_m_systemError_24() { return &___m_systemError_24; }
	inline void set_m_systemError_24(int32_t value)
	{
		___m_systemError_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
