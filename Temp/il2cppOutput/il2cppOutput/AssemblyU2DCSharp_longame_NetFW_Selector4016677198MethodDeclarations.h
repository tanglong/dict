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

// longame.NetFW.Selector
struct Selector_t4016677198;
// longame.NetFW.Selectable
struct Selectable_t3098350021;
// System.Net.Sockets.Socket
struct Socket_t150013987;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_longame_NetFW_Selectable3098350021.h"
#include "System_System_Net_Sockets_Socket150013987.h"

// System.Void longame.NetFW.Selector::.ctor()
extern "C"  void Selector__ctor_m2103004011 (Selector_t4016677198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.Selector longame.NetFW.Selector::getInstance()
extern "C"  Selector_t4016677198 * Selector_getInstance_m2748963655 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Selector::insert(longame.NetFW.Selectable)
extern "C"  bool Selector_insert_m3427269631 (Selector_t4016677198 * __this, Selectable_t3098350021 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean longame.NetFW.Selector::remove(longame.NetFW.Selectable)
extern "C"  bool Selector_remove_m3663870474 (Selector_t4016677198 * __this, Selectable_t3098350021 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 longame.NetFW.Selector::Update()
extern "C"  int32_t Selector_Update_m2978307856 (Selector_t4016677198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// longame.NetFW.Selectable longame.NetFW.Selector::getSelectable(System.Net.Sockets.Socket)
extern "C"  Selectable_t3098350021 * Selector_getSelectable_m2887335330 (Selector_t4016677198 * __this, Socket_t150013987 * ___socket, const MethodInfo* method) IL2CPP_METHOD_ATTR;
