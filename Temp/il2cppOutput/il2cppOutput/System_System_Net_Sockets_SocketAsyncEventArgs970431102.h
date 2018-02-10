#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t673269884;
// System.Net.Sockets.Socket
struct Socket_t150013987;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t1813008745;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Net.EndPoint
struct EndPoint_t1294049535;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_EventArgs516466188.h"
#include "System_System_Net_Sockets_SocketAsyncOperation2602276174.h"
#include "System_System_Net_Sockets_SocketError291509957.h"
#include "System_System_Net_Sockets_SocketFlags292238148.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketAsyncEventArgs
struct  SocketAsyncEventArgs_t970431102  : public EventArgs_t516466188
{
public:
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncEventArgs::_bufferList
	Il2CppObject* ____bufferList_1;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::curSocket
	Socket_t150013987 * ___curSocket_2;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.SocketAsyncEventArgs::Completed
	EventHandler_1_t1813008745 * ___Completed_3;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::<AcceptSocket>k__BackingField
	Socket_t150013987 * ___U3CAcceptSocketU3Ek__BackingField_4;
	// System.Byte[] System.Net.Sockets.SocketAsyncEventArgs::<Buffer>k__BackingField
	ByteU5BU5D_t58506160* ___U3CBufferU3Ek__BackingField_5;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<BytesTransferred>k__BackingField
	int32_t ___U3CBytesTransferredU3Ek__BackingField_6;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::<DisconnectReuseSocket>k__BackingField
	bool ___U3CDisconnectReuseSocketU3Ek__BackingField_8;
	// System.Net.Sockets.SocketAsyncOperation System.Net.Sockets.SocketAsyncEventArgs::<LastOperation>k__BackingField
	int32_t ___U3CLastOperationU3Ek__BackingField_9;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_10;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::<RemoteEndPoint>k__BackingField
	EndPoint_t1294049535 * ___U3CRemoteEndPointU3Ek__BackingField_11;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<SendPacketsSendSize>k__BackingField
	int32_t ___U3CSendPacketsSendSizeU3Ek__BackingField_12;
	// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::<SocketError>k__BackingField
	int32_t ___U3CSocketErrorU3Ek__BackingField_13;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncEventArgs::<SocketFlags>k__BackingField
	int32_t ___U3CSocketFlagsU3Ek__BackingField_14;
	// System.Object System.Net.Sockets.SocketAsyncEventArgs::<UserToken>k__BackingField
	Il2CppObject * ___U3CUserTokenU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of__bufferList_1() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ____bufferList_1)); }
	inline Il2CppObject* get__bufferList_1() const { return ____bufferList_1; }
	inline Il2CppObject** get_address_of__bufferList_1() { return &____bufferList_1; }
	inline void set__bufferList_1(Il2CppObject* value)
	{
		____bufferList_1 = value;
		Il2CppCodeGenWriteBarrier(&____bufferList_1, value);
	}

	inline static int32_t get_offset_of_curSocket_2() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___curSocket_2)); }
	inline Socket_t150013987 * get_curSocket_2() const { return ___curSocket_2; }
	inline Socket_t150013987 ** get_address_of_curSocket_2() { return &___curSocket_2; }
	inline void set_curSocket_2(Socket_t150013987 * value)
	{
		___curSocket_2 = value;
		Il2CppCodeGenWriteBarrier(&___curSocket_2, value);
	}

	inline static int32_t get_offset_of_Completed_3() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___Completed_3)); }
	inline EventHandler_1_t1813008745 * get_Completed_3() const { return ___Completed_3; }
	inline EventHandler_1_t1813008745 ** get_address_of_Completed_3() { return &___Completed_3; }
	inline void set_Completed_3(EventHandler_1_t1813008745 * value)
	{
		___Completed_3 = value;
		Il2CppCodeGenWriteBarrier(&___Completed_3, value);
	}

	inline static int32_t get_offset_of_U3CAcceptSocketU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3CAcceptSocketU3Ek__BackingField_4)); }
	inline Socket_t150013987 * get_U3CAcceptSocketU3Ek__BackingField_4() const { return ___U3CAcceptSocketU3Ek__BackingField_4; }
	inline Socket_t150013987 ** get_address_of_U3CAcceptSocketU3Ek__BackingField_4() { return &___U3CAcceptSocketU3Ek__BackingField_4; }
	inline void set_U3CAcceptSocketU3Ek__BackingField_4(Socket_t150013987 * value)
	{
		___U3CAcceptSocketU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAcceptSocketU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CBufferU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3CBufferU3Ek__BackingField_5)); }
	inline ByteU5BU5D_t58506160* get_U3CBufferU3Ek__BackingField_5() const { return ___U3CBufferU3Ek__BackingField_5; }
	inline ByteU5BU5D_t58506160** get_address_of_U3CBufferU3Ek__BackingField_5() { return &___U3CBufferU3Ek__BackingField_5; }
	inline void set_U3CBufferU3Ek__BackingField_5(ByteU5BU5D_t58506160* value)
	{
		___U3CBufferU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBufferU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CBytesTransferredU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3CBytesTransferredU3Ek__BackingField_6)); }
	inline int32_t get_U3CBytesTransferredU3Ek__BackingField_6() const { return ___U3CBytesTransferredU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CBytesTransferredU3Ek__BackingField_6() { return &___U3CBytesTransferredU3Ek__BackingField_6; }
	inline void set_U3CBytesTransferredU3Ek__BackingField_6(int32_t value)
	{
		___U3CBytesTransferredU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CDisconnectReuseSocketU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3CDisconnectReuseSocketU3Ek__BackingField_8)); }
	inline bool get_U3CDisconnectReuseSocketU3Ek__BackingField_8() const { return ___U3CDisconnectReuseSocketU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CDisconnectReuseSocketU3Ek__BackingField_8() { return &___U3CDisconnectReuseSocketU3Ek__BackingField_8; }
	inline void set_U3CDisconnectReuseSocketU3Ek__BackingField_8(bool value)
	{
		___U3CDisconnectReuseSocketU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CLastOperationU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3CLastOperationU3Ek__BackingField_9)); }
	inline int32_t get_U3CLastOperationU3Ek__BackingField_9() const { return ___U3CLastOperationU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CLastOperationU3Ek__BackingField_9() { return &___U3CLastOperationU3Ek__BackingField_9; }
	inline void set_U3CLastOperationU3Ek__BackingField_9(int32_t value)
	{
		___U3CLastOperationU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3COffsetU3Ek__BackingField_10)); }
	inline int32_t get_U3COffsetU3Ek__BackingField_10() const { return ___U3COffsetU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3COffsetU3Ek__BackingField_10() { return &___U3COffsetU3Ek__BackingField_10; }
	inline void set_U3COffsetU3Ek__BackingField_10(int32_t value)
	{
		___U3COffsetU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CRemoteEndPointU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3CRemoteEndPointU3Ek__BackingField_11)); }
	inline EndPoint_t1294049535 * get_U3CRemoteEndPointU3Ek__BackingField_11() const { return ___U3CRemoteEndPointU3Ek__BackingField_11; }
	inline EndPoint_t1294049535 ** get_address_of_U3CRemoteEndPointU3Ek__BackingField_11() { return &___U3CRemoteEndPointU3Ek__BackingField_11; }
	inline void set_U3CRemoteEndPointU3Ek__BackingField_11(EndPoint_t1294049535 * value)
	{
		___U3CRemoteEndPointU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRemoteEndPointU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CSendPacketsSendSizeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3CSendPacketsSendSizeU3Ek__BackingField_12)); }
	inline int32_t get_U3CSendPacketsSendSizeU3Ek__BackingField_12() const { return ___U3CSendPacketsSendSizeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CSendPacketsSendSizeU3Ek__BackingField_12() { return &___U3CSendPacketsSendSizeU3Ek__BackingField_12; }
	inline void set_U3CSendPacketsSendSizeU3Ek__BackingField_12(int32_t value)
	{
		___U3CSendPacketsSendSizeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CSocketErrorU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3CSocketErrorU3Ek__BackingField_13)); }
	inline int32_t get_U3CSocketErrorU3Ek__BackingField_13() const { return ___U3CSocketErrorU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CSocketErrorU3Ek__BackingField_13() { return &___U3CSocketErrorU3Ek__BackingField_13; }
	inline void set_U3CSocketErrorU3Ek__BackingField_13(int32_t value)
	{
		___U3CSocketErrorU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSocketFlagsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3CSocketFlagsU3Ek__BackingField_14)); }
	inline int32_t get_U3CSocketFlagsU3Ek__BackingField_14() const { return ___U3CSocketFlagsU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CSocketFlagsU3Ek__BackingField_14() { return &___U3CSocketFlagsU3Ek__BackingField_14; }
	inline void set_U3CSocketFlagsU3Ek__BackingField_14(int32_t value)
	{
		___U3CSocketFlagsU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CUserTokenU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t970431102, ___U3CUserTokenU3Ek__BackingField_15)); }
	inline Il2CppObject * get_U3CUserTokenU3Ek__BackingField_15() const { return ___U3CUserTokenU3Ek__BackingField_15; }
	inline Il2CppObject ** get_address_of_U3CUserTokenU3Ek__BackingField_15() { return &___U3CUserTokenU3Ek__BackingField_15; }
	inline void set_U3CUserTokenU3Ek__BackingField_15(Il2CppObject * value)
	{
		___U3CUserTokenU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserTokenU3Ek__BackingField_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
