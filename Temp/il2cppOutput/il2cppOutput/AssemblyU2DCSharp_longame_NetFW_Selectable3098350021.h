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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.Selectable
struct  Selectable_t3098350021  : public Il2CppObject
{
public:
	// System.Net.Sockets.Socket longame.NetFW.Selectable::m_socket
	Socket_t150013987 * ___m_socket_0;
	// System.Boolean longame.NetFW.Selectable::m_canRecvData
	bool ___m_canRecvData_1;
	// System.Boolean longame.NetFW.Selectable::m_canSendData
	bool ___m_canSendData_2;

public:
	inline static int32_t get_offset_of_m_socket_0() { return static_cast<int32_t>(offsetof(Selectable_t3098350021, ___m_socket_0)); }
	inline Socket_t150013987 * get_m_socket_0() const { return ___m_socket_0; }
	inline Socket_t150013987 ** get_address_of_m_socket_0() { return &___m_socket_0; }
	inline void set_m_socket_0(Socket_t150013987 * value)
	{
		___m_socket_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_socket_0, value);
	}

	inline static int32_t get_offset_of_m_canRecvData_1() { return static_cast<int32_t>(offsetof(Selectable_t3098350021, ___m_canRecvData_1)); }
	inline bool get_m_canRecvData_1() const { return ___m_canRecvData_1; }
	inline bool* get_address_of_m_canRecvData_1() { return &___m_canRecvData_1; }
	inline void set_m_canRecvData_1(bool value)
	{
		___m_canRecvData_1 = value;
	}

	inline static int32_t get_offset_of_m_canSendData_2() { return static_cast<int32_t>(offsetof(Selectable_t3098350021, ___m_canSendData_2)); }
	inline bool get_m_canSendData_2() const { return ___m_canSendData_2; }
	inline bool* get_address_of_m_canSendData_2() { return &___m_canSendData_2; }
	inline void set_m_canSendData_2(bool value)
	{
		___m_canSendData_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
