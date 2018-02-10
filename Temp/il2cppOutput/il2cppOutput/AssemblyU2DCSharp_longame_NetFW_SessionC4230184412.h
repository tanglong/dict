#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3494006030;
// System.Net.EndPoint
struct EndPoint_t1294049535;
// System.Net.Sockets.Socket
struct Socket_t150013987;
// longame.NetFW.TimeOutSocket
struct TimeOutSocket_t2634392899;
// System.Net.IPEndPoint
struct IPEndPoint_t1265996582;
// longame.NetFW.CommandFactory
struct CommandFactory_t3552396462;
// longame.NetFW.OnProcessMsgHandler
struct OnProcessMsgHandler_t1743510888;
// longame.NetFW.OnParseMsgHandler
struct OnParseMsgHandler_t4119810284;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "AssemblyU2DCSharp_longame_NetFW_Session2115134405.h"
#include "AssemblyU2DCSharp_longame_NetFW_LINK_STATE1052687675.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// longame.NetFW.SessionC
struct  SessionC_t4230184412  : public Session_t2115134405
{
public:
	// System.String longame.NetFW.SessionC::m_connectIP
	String_t* ___m_connectIP_25;
	// System.Net.IPAddress[] longame.NetFW.SessionC::m_connectIpAddressArray
	IPAddressU5BU5D_t3494006030* ___m_connectIpAddressArray_26;
	// System.Net.EndPoint longame.NetFW.SessionC::m_connectOkEndPoint
	EndPoint_t1294049535 * ___m_connectOkEndPoint_27;
	// System.UInt16 longame.NetFW.SessionC::m_connectPort
	uint16_t ___m_connectPort_28;
	// System.Net.Sockets.Socket longame.NetFW.SessionC::m_connectSocket
	Socket_t150013987 * ___m_connectSocket_29;
	// longame.NetFW.TimeOutSocket longame.NetFW.SessionC::m_TimeOutSocket
	TimeOutSocket_t2634392899 * ___m_TimeOutSocket_30;
	// System.Int64 longame.NetFW.SessionC::m_connectTimeOut
	int64_t ___m_connectTimeOut_31;
	// System.Int64 longame.NetFW.SessionC::m_connectTime
	int64_t ___m_connectTime_32;
	// System.Net.IPEndPoint longame.NetFW.SessionC::m_serverEP
	IPEndPoint_t1265996582 * ___m_serverEP_33;
	// longame.NetFW.CommandFactory longame.NetFW.SessionC::m_commandFactory
	CommandFactory_t3552396462 * ___m_commandFactory_34;
	// longame.NetFW.OnProcessMsgHandler longame.NetFW.SessionC::m_defaultProcessFunc
	OnProcessMsgHandler_t1743510888 * ___m_defaultProcessFunc_35;
	// longame.NetFW.OnParseMsgHandler longame.NetFW.SessionC::m_defaultParseFunc
	OnParseMsgHandler_t4119810284 * ___m_defaultParseFunc_36;
	// System.AsyncCallback longame.NetFW.SessionC::m_asyncCallback
	AsyncCallback_t1363551830 * ___m_asyncCallback_37;
	// System.Net.IPAddress[] longame.NetFW.SessionC::addresses
	IPAddressU5BU5D_t3494006030* ___addresses_38;
	// longame.NetFW.LINK_STATE longame.NetFW.SessionC::m_linkState
	int32_t ___m_linkState_39;

public:
	inline static int32_t get_offset_of_m_connectIP_25() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_connectIP_25)); }
	inline String_t* get_m_connectIP_25() const { return ___m_connectIP_25; }
	inline String_t** get_address_of_m_connectIP_25() { return &___m_connectIP_25; }
	inline void set_m_connectIP_25(String_t* value)
	{
		___m_connectIP_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_connectIP_25, value);
	}

	inline static int32_t get_offset_of_m_connectIpAddressArray_26() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_connectIpAddressArray_26)); }
	inline IPAddressU5BU5D_t3494006030* get_m_connectIpAddressArray_26() const { return ___m_connectIpAddressArray_26; }
	inline IPAddressU5BU5D_t3494006030** get_address_of_m_connectIpAddressArray_26() { return &___m_connectIpAddressArray_26; }
	inline void set_m_connectIpAddressArray_26(IPAddressU5BU5D_t3494006030* value)
	{
		___m_connectIpAddressArray_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_connectIpAddressArray_26, value);
	}

	inline static int32_t get_offset_of_m_connectOkEndPoint_27() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_connectOkEndPoint_27)); }
	inline EndPoint_t1294049535 * get_m_connectOkEndPoint_27() const { return ___m_connectOkEndPoint_27; }
	inline EndPoint_t1294049535 ** get_address_of_m_connectOkEndPoint_27() { return &___m_connectOkEndPoint_27; }
	inline void set_m_connectOkEndPoint_27(EndPoint_t1294049535 * value)
	{
		___m_connectOkEndPoint_27 = value;
		Il2CppCodeGenWriteBarrier(&___m_connectOkEndPoint_27, value);
	}

	inline static int32_t get_offset_of_m_connectPort_28() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_connectPort_28)); }
	inline uint16_t get_m_connectPort_28() const { return ___m_connectPort_28; }
	inline uint16_t* get_address_of_m_connectPort_28() { return &___m_connectPort_28; }
	inline void set_m_connectPort_28(uint16_t value)
	{
		___m_connectPort_28 = value;
	}

	inline static int32_t get_offset_of_m_connectSocket_29() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_connectSocket_29)); }
	inline Socket_t150013987 * get_m_connectSocket_29() const { return ___m_connectSocket_29; }
	inline Socket_t150013987 ** get_address_of_m_connectSocket_29() { return &___m_connectSocket_29; }
	inline void set_m_connectSocket_29(Socket_t150013987 * value)
	{
		___m_connectSocket_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_connectSocket_29, value);
	}

	inline static int32_t get_offset_of_m_TimeOutSocket_30() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_TimeOutSocket_30)); }
	inline TimeOutSocket_t2634392899 * get_m_TimeOutSocket_30() const { return ___m_TimeOutSocket_30; }
	inline TimeOutSocket_t2634392899 ** get_address_of_m_TimeOutSocket_30() { return &___m_TimeOutSocket_30; }
	inline void set_m_TimeOutSocket_30(TimeOutSocket_t2634392899 * value)
	{
		___m_TimeOutSocket_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_TimeOutSocket_30, value);
	}

	inline static int32_t get_offset_of_m_connectTimeOut_31() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_connectTimeOut_31)); }
	inline int64_t get_m_connectTimeOut_31() const { return ___m_connectTimeOut_31; }
	inline int64_t* get_address_of_m_connectTimeOut_31() { return &___m_connectTimeOut_31; }
	inline void set_m_connectTimeOut_31(int64_t value)
	{
		___m_connectTimeOut_31 = value;
	}

	inline static int32_t get_offset_of_m_connectTime_32() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_connectTime_32)); }
	inline int64_t get_m_connectTime_32() const { return ___m_connectTime_32; }
	inline int64_t* get_address_of_m_connectTime_32() { return &___m_connectTime_32; }
	inline void set_m_connectTime_32(int64_t value)
	{
		___m_connectTime_32 = value;
	}

	inline static int32_t get_offset_of_m_serverEP_33() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_serverEP_33)); }
	inline IPEndPoint_t1265996582 * get_m_serverEP_33() const { return ___m_serverEP_33; }
	inline IPEndPoint_t1265996582 ** get_address_of_m_serverEP_33() { return &___m_serverEP_33; }
	inline void set_m_serverEP_33(IPEndPoint_t1265996582 * value)
	{
		___m_serverEP_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_serverEP_33, value);
	}

	inline static int32_t get_offset_of_m_commandFactory_34() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_commandFactory_34)); }
	inline CommandFactory_t3552396462 * get_m_commandFactory_34() const { return ___m_commandFactory_34; }
	inline CommandFactory_t3552396462 ** get_address_of_m_commandFactory_34() { return &___m_commandFactory_34; }
	inline void set_m_commandFactory_34(CommandFactory_t3552396462 * value)
	{
		___m_commandFactory_34 = value;
		Il2CppCodeGenWriteBarrier(&___m_commandFactory_34, value);
	}

	inline static int32_t get_offset_of_m_defaultProcessFunc_35() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_defaultProcessFunc_35)); }
	inline OnProcessMsgHandler_t1743510888 * get_m_defaultProcessFunc_35() const { return ___m_defaultProcessFunc_35; }
	inline OnProcessMsgHandler_t1743510888 ** get_address_of_m_defaultProcessFunc_35() { return &___m_defaultProcessFunc_35; }
	inline void set_m_defaultProcessFunc_35(OnProcessMsgHandler_t1743510888 * value)
	{
		___m_defaultProcessFunc_35 = value;
		Il2CppCodeGenWriteBarrier(&___m_defaultProcessFunc_35, value);
	}

	inline static int32_t get_offset_of_m_defaultParseFunc_36() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_defaultParseFunc_36)); }
	inline OnParseMsgHandler_t4119810284 * get_m_defaultParseFunc_36() const { return ___m_defaultParseFunc_36; }
	inline OnParseMsgHandler_t4119810284 ** get_address_of_m_defaultParseFunc_36() { return &___m_defaultParseFunc_36; }
	inline void set_m_defaultParseFunc_36(OnParseMsgHandler_t4119810284 * value)
	{
		___m_defaultParseFunc_36 = value;
		Il2CppCodeGenWriteBarrier(&___m_defaultParseFunc_36, value);
	}

	inline static int32_t get_offset_of_m_asyncCallback_37() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_asyncCallback_37)); }
	inline AsyncCallback_t1363551830 * get_m_asyncCallback_37() const { return ___m_asyncCallback_37; }
	inline AsyncCallback_t1363551830 ** get_address_of_m_asyncCallback_37() { return &___m_asyncCallback_37; }
	inline void set_m_asyncCallback_37(AsyncCallback_t1363551830 * value)
	{
		___m_asyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier(&___m_asyncCallback_37, value);
	}

	inline static int32_t get_offset_of_addresses_38() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___addresses_38)); }
	inline IPAddressU5BU5D_t3494006030* get_addresses_38() const { return ___addresses_38; }
	inline IPAddressU5BU5D_t3494006030** get_address_of_addresses_38() { return &___addresses_38; }
	inline void set_addresses_38(IPAddressU5BU5D_t3494006030* value)
	{
		___addresses_38 = value;
		Il2CppCodeGenWriteBarrier(&___addresses_38, value);
	}

	inline static int32_t get_offset_of_m_linkState_39() { return static_cast<int32_t>(offsetof(SessionC_t4230184412, ___m_linkState_39)); }
	inline int32_t get_m_linkState_39() const { return ___m_linkState_39; }
	inline int32_t* get_address_of_m_linkState_39() { return &___m_linkState_39; }
	inline void set_m_linkState_39(int32_t value)
	{
		___m_linkState_39 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
