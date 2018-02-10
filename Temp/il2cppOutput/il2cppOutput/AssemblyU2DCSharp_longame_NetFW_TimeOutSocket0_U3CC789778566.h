#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<System.Net.Sockets.Socket,System.Net.IPEndPoint>
struct Action_2_t18544181;
// System.Net.Sockets.Socket
struct Socket_t150013987;
// System.Net.IPEndPoint
struct IPEndPoint_t1265996582;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.TimeOutSocket0/<CallWithTimeout>c__AnonStorey0
struct  U3CCallWithTimeoutU3Ec__AnonStorey0_t789778566  : public Il2CppObject
{
public:
	// System.Action`2<System.Net.Sockets.Socket,System.Net.IPEndPoint> longame.NetFW.TimeOutSocket0/<CallWithTimeout>c__AnonStorey0::action
	Action_2_t18544181 * ___action_0;
	// System.Net.Sockets.Socket longame.NetFW.TimeOutSocket0/<CallWithTimeout>c__AnonStorey0::socket
	Socket_t150013987 * ___socket_1;
	// System.Net.IPEndPoint longame.NetFW.TimeOutSocket0/<CallWithTimeout>c__AnonStorey0::ipendPoint
	IPEndPoint_t1265996582 * ___ipendPoint_2;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CCallWithTimeoutU3Ec__AnonStorey0_t789778566, ___action_0)); }
	inline Action_2_t18544181 * get_action_0() const { return ___action_0; }
	inline Action_2_t18544181 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_2_t18544181 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_socket_1() { return static_cast<int32_t>(offsetof(U3CCallWithTimeoutU3Ec__AnonStorey0_t789778566, ___socket_1)); }
	inline Socket_t150013987 * get_socket_1() const { return ___socket_1; }
	inline Socket_t150013987 ** get_address_of_socket_1() { return &___socket_1; }
	inline void set_socket_1(Socket_t150013987 * value)
	{
		___socket_1 = value;
		Il2CppCodeGenWriteBarrier(&___socket_1, value);
	}

	inline static int32_t get_offset_of_ipendPoint_2() { return static_cast<int32_t>(offsetof(U3CCallWithTimeoutU3Ec__AnonStorey0_t789778566, ___ipendPoint_2)); }
	inline IPEndPoint_t1265996582 * get_ipendPoint_2() const { return ___ipendPoint_2; }
	inline IPEndPoint_t1265996582 ** get_address_of_ipendPoint_2() { return &___ipendPoint_2; }
	inline void set_ipendPoint_2(IPEndPoint_t1265996582 * value)
	{
		___ipendPoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___ipendPoint_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
