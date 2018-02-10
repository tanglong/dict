#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Exception
struct Exception_t1967233988;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2399218676;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t970431102;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.TimeOutSocket
struct  TimeOutSocket_t2634392899  : public Il2CppObject
{
public:
	// System.Boolean longame.NetFW.TimeOutSocket::IsConnectionSuccessful
	bool ___IsConnectionSuccessful_0;
	// System.Exception longame.NetFW.TimeOutSocket::socketexception
	Exception_t1967233988 * ___socketexception_1;
	// System.Threading.ManualResetEvent longame.NetFW.TimeOutSocket::TimeoutObject
	ManualResetEvent_t2399218676 * ___TimeoutObject_2;
	// System.Net.Sockets.SocketAsyncEventArgs longame.NetFW.TimeOutSocket::socketAsyncEventArgs
	SocketAsyncEventArgs_t970431102 * ___socketAsyncEventArgs_3;

public:
	inline static int32_t get_offset_of_IsConnectionSuccessful_0() { return static_cast<int32_t>(offsetof(TimeOutSocket_t2634392899, ___IsConnectionSuccessful_0)); }
	inline bool get_IsConnectionSuccessful_0() const { return ___IsConnectionSuccessful_0; }
	inline bool* get_address_of_IsConnectionSuccessful_0() { return &___IsConnectionSuccessful_0; }
	inline void set_IsConnectionSuccessful_0(bool value)
	{
		___IsConnectionSuccessful_0 = value;
	}

	inline static int32_t get_offset_of_socketexception_1() { return static_cast<int32_t>(offsetof(TimeOutSocket_t2634392899, ___socketexception_1)); }
	inline Exception_t1967233988 * get_socketexception_1() const { return ___socketexception_1; }
	inline Exception_t1967233988 ** get_address_of_socketexception_1() { return &___socketexception_1; }
	inline void set_socketexception_1(Exception_t1967233988 * value)
	{
		___socketexception_1 = value;
		Il2CppCodeGenWriteBarrier(&___socketexception_1, value);
	}

	inline static int32_t get_offset_of_TimeoutObject_2() { return static_cast<int32_t>(offsetof(TimeOutSocket_t2634392899, ___TimeoutObject_2)); }
	inline ManualResetEvent_t2399218676 * get_TimeoutObject_2() const { return ___TimeoutObject_2; }
	inline ManualResetEvent_t2399218676 ** get_address_of_TimeoutObject_2() { return &___TimeoutObject_2; }
	inline void set_TimeoutObject_2(ManualResetEvent_t2399218676 * value)
	{
		___TimeoutObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___TimeoutObject_2, value);
	}

	inline static int32_t get_offset_of_socketAsyncEventArgs_3() { return static_cast<int32_t>(offsetof(TimeOutSocket_t2634392899, ___socketAsyncEventArgs_3)); }
	inline SocketAsyncEventArgs_t970431102 * get_socketAsyncEventArgs_3() const { return ___socketAsyncEventArgs_3; }
	inline SocketAsyncEventArgs_t970431102 ** get_address_of_socketAsyncEventArgs_3() { return &___socketAsyncEventArgs_3; }
	inline void set_socketAsyncEventArgs_3(SocketAsyncEventArgs_t970431102 * value)
	{
		___socketAsyncEventArgs_3 = value;
		Il2CppCodeGenWriteBarrier(&___socketAsyncEventArgs_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
