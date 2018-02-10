#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t150013987;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_longame_NetFW_SocketConnectStateE794443370.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.AsyncSocket
struct  AsyncSocket_t4020777534  : public Il2CppObject
{
public:
	// System.Net.Sockets.Socket longame.NetFW.AsyncSocket::m_socket
	Socket_t150013987 * ___m_socket_0;
	// System.Int32 longame.NetFW.AsyncSocket::m_iTimeoutMSec
	int32_t ___m_iTimeoutMSec_1;
	// System.Int64 longame.NetFW.AsyncSocket::m_lConnectStartTime
	int64_t ___m_lConnectStartTime_2;
	// longame.NetFW.SocketConnectStateEnum longame.NetFW.AsyncSocket::connectState
	int32_t ___connectState_3;

public:
	inline static int32_t get_offset_of_m_socket_0() { return static_cast<int32_t>(offsetof(AsyncSocket_t4020777534, ___m_socket_0)); }
	inline Socket_t150013987 * get_m_socket_0() const { return ___m_socket_0; }
	inline Socket_t150013987 ** get_address_of_m_socket_0() { return &___m_socket_0; }
	inline void set_m_socket_0(Socket_t150013987 * value)
	{
		___m_socket_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_socket_0, value);
	}

	inline static int32_t get_offset_of_m_iTimeoutMSec_1() { return static_cast<int32_t>(offsetof(AsyncSocket_t4020777534, ___m_iTimeoutMSec_1)); }
	inline int32_t get_m_iTimeoutMSec_1() const { return ___m_iTimeoutMSec_1; }
	inline int32_t* get_address_of_m_iTimeoutMSec_1() { return &___m_iTimeoutMSec_1; }
	inline void set_m_iTimeoutMSec_1(int32_t value)
	{
		___m_iTimeoutMSec_1 = value;
	}

	inline static int32_t get_offset_of_m_lConnectStartTime_2() { return static_cast<int32_t>(offsetof(AsyncSocket_t4020777534, ___m_lConnectStartTime_2)); }
	inline int64_t get_m_lConnectStartTime_2() const { return ___m_lConnectStartTime_2; }
	inline int64_t* get_address_of_m_lConnectStartTime_2() { return &___m_lConnectStartTime_2; }
	inline void set_m_lConnectStartTime_2(int64_t value)
	{
		___m_lConnectStartTime_2 = value;
	}

	inline static int32_t get_offset_of_connectState_3() { return static_cast<int32_t>(offsetof(AsyncSocket_t4020777534, ___connectState_3)); }
	inline int32_t get_connectState_3() const { return ___connectState_3; }
	inline int32_t* get_address_of_connectState_3() { return &___connectState_3; }
	inline void set_connectState_3(int32_t value)
	{
		___connectState_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
