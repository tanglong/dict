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
// System.Net.IPEndPoint
struct IPEndPoint_t1265996582;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1189026461;
// System.Threading.AutoResetEvent[]
struct AutoResetEventU5BU5D_t4177862224;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocketAsyncClient.SocketClient
struct  SocketClient_t3318664090  : public Il2CppObject
{
public:
	// System.Net.Sockets.Socket SocketAsyncClient.SocketClient::clientSocket
	Socket_t150013987 * ___clientSocket_2;
	// System.Boolean SocketAsyncClient.SocketClient::connected
	bool ___connected_3;
	// System.Net.IPEndPoint SocketAsyncClient.SocketClient::hostEndPoint
	IPEndPoint_t1265996582 * ___hostEndPoint_4;

public:
	inline static int32_t get_offset_of_clientSocket_2() { return static_cast<int32_t>(offsetof(SocketClient_t3318664090, ___clientSocket_2)); }
	inline Socket_t150013987 * get_clientSocket_2() const { return ___clientSocket_2; }
	inline Socket_t150013987 ** get_address_of_clientSocket_2() { return &___clientSocket_2; }
	inline void set_clientSocket_2(Socket_t150013987 * value)
	{
		___clientSocket_2 = value;
		Il2CppCodeGenWriteBarrier(&___clientSocket_2, value);
	}

	inline static int32_t get_offset_of_connected_3() { return static_cast<int32_t>(offsetof(SocketClient_t3318664090, ___connected_3)); }
	inline bool get_connected_3() const { return ___connected_3; }
	inline bool* get_address_of_connected_3() { return &___connected_3; }
	inline void set_connected_3(bool value)
	{
		___connected_3 = value;
	}

	inline static int32_t get_offset_of_hostEndPoint_4() { return static_cast<int32_t>(offsetof(SocketClient_t3318664090, ___hostEndPoint_4)); }
	inline IPEndPoint_t1265996582 * get_hostEndPoint_4() const { return ___hostEndPoint_4; }
	inline IPEndPoint_t1265996582 ** get_address_of_hostEndPoint_4() { return &___hostEndPoint_4; }
	inline void set_hostEndPoint_4(IPEndPoint_t1265996582 * value)
	{
		___hostEndPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___hostEndPoint_4, value);
	}
};

struct SocketClient_t3318664090_StaticFields
{
public:
	// System.Threading.AutoResetEvent SocketAsyncClient.SocketClient::autoConnectEvent
	AutoResetEvent_t1189026461 * ___autoConnectEvent_5;
	// System.Threading.AutoResetEvent[] SocketAsyncClient.SocketClient::autoSendReceiveEvents
	AutoResetEventU5BU5D_t4177862224* ___autoSendReceiveEvents_6;

public:
	inline static int32_t get_offset_of_autoConnectEvent_5() { return static_cast<int32_t>(offsetof(SocketClient_t3318664090_StaticFields, ___autoConnectEvent_5)); }
	inline AutoResetEvent_t1189026461 * get_autoConnectEvent_5() const { return ___autoConnectEvent_5; }
	inline AutoResetEvent_t1189026461 ** get_address_of_autoConnectEvent_5() { return &___autoConnectEvent_5; }
	inline void set_autoConnectEvent_5(AutoResetEvent_t1189026461 * value)
	{
		___autoConnectEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___autoConnectEvent_5, value);
	}

	inline static int32_t get_offset_of_autoSendReceiveEvents_6() { return static_cast<int32_t>(offsetof(SocketClient_t3318664090_StaticFields, ___autoSendReceiveEvents_6)); }
	inline AutoResetEventU5BU5D_t4177862224* get_autoSendReceiveEvents_6() const { return ___autoSendReceiveEvents_6; }
	inline AutoResetEventU5BU5D_t4177862224** get_address_of_autoSendReceiveEvents_6() { return &___autoSendReceiveEvents_6; }
	inline void set_autoSendReceiveEvents_6(AutoResetEventU5BU5D_t4177862224* value)
	{
		___autoSendReceiveEvents_6 = value;
		Il2CppCodeGenWriteBarrier(&___autoSendReceiveEvents_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
