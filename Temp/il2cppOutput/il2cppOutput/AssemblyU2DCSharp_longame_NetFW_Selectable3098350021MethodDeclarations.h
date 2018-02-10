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

// longame.NetFW.Selectable
struct Selectable_t3098350021;
// System.Net.Sockets.Socket
struct Socket_t150013987;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket150013987.h"

// System.Void longame.NetFW.Selectable::.ctor()
extern "C"  void Selectable__ctor_m3890514708 (Selectable_t3098350021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Selectable::get_CanRecvData()
extern "C"  bool Selectable_get_CanRecvData_m3778926901 (Selectable_t3098350021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Selectable::set_CanRecvData(System.Boolean)
extern "C"  void Selectable_set_CanRecvData_m3014204716 (Selectable_t3098350021 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Selectable::get_CanSendData()
extern "C"  bool Selectable_get_CanSendData_m2483293527 (Selectable_t3098350021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Selectable::set_CanSendData(System.Boolean)
extern "C"  void Selectable_set_CanSendData_m2494066126 (Selectable_t3098350021 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket longame.NetFW.Selectable::getSocket()
extern "C"  Socket_t150013987 * Selectable_getSocket_m3750199129 (Selectable_t3098350021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void longame.NetFW.Selectable::Dispose()
extern "C"  void Selectable_Dispose_m2061369937 (Selectable_t3098350021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Selectable::joinSelector(System.Net.Sockets.Socket)
extern "C"  bool Selectable_joinSelector_m688951860 (Selectable_t3098350021 * __this, Socket_t150013987 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Selectable::quitSelector()
extern "C"  bool Selectable_quitSelector_m2477182738 (Selectable_t3098350021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
