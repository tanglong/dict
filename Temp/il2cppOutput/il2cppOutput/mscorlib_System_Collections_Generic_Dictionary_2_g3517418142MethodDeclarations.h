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

// System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>
struct Dictionary_2_t3517418142;
// System.Collections.Generic.IEqualityComparer`1<System.UInt16>
struct IEqualityComparer_1_t3310191919;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.UInt16,System.Object>[]
struct KeyValuePair_2U5BU5D_t2952102401;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt16,System.Object>>
struct IEnumerator_1_t194088592;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt16,System.Object>
struct ValueCollection_t1144587940;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23005949440.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3284446083.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2622194143_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m2622194143(__this, method) ((  void (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2__ctor_m2622194143_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m194033366_gshared (Dictionary_2_t3517418142 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m194033366(__this, ___comparer, method) ((  void (*) (Dictionary_2_t3517418142 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m194033366_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1690460336_gshared (Dictionary_2_t3517418142 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1690460336(__this, ___capacity, method) ((  void (*) (Dictionary_2_t3517418142 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1690460336_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m95770272_gshared (Dictionary_2_t3517418142 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m95770272(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3517418142 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m95770272_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3656782537_gshared (Dictionary_2_t3517418142 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3656782537(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3517418142 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3656782537_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1627861934_gshared (Dictionary_2_t3517418142 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1627861934(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3517418142 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1627861934_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1316812259_gshared (Dictionary_2_t3517418142 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1316812259(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3517418142 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1316812259_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3888895923_gshared (Dictionary_2_t3517418142 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3888895923(__this, ___key, method) ((  bool (*) (Dictionary_2_t3517418142 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3888895923_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3200436716_gshared (Dictionary_2_t3517418142 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3200436716(__this, ___key, method) ((  void (*) (Dictionary_2_t3517418142 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3200436716_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1719479425_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1719479425(__this, method) ((  bool (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1719479425_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1000701613_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1000701613(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1000701613_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1374572933_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1374572933(__this, method) ((  bool (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1374572933_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m511676546_gshared (Dictionary_2_t3517418142 * __this, KeyValuePair_2_t3005949440  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m511676546(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t3517418142 *, KeyValuePair_2_t3005949440 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m511676546_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2378191872_gshared (Dictionary_2_t3517418142 * __this, KeyValuePair_2_t3005949440  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2378191872(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3517418142 *, KeyValuePair_2_t3005949440 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2378191872_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m828253158_gshared (Dictionary_2_t3517418142 * __this, KeyValuePair_2U5BU5D_t2952102401* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m828253158(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3517418142 *, KeyValuePair_2U5BU5D_t2952102401*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m828253158_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3713235749_gshared (Dictionary_2_t3517418142 * __this, KeyValuePair_2_t3005949440  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3713235749(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3517418142 *, KeyValuePair_2_t3005949440 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3713235749_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2962219077_gshared (Dictionary_2_t3517418142 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2962219077(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3517418142 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2962219077_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m862389632_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m862389632(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m862389632_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1435845245_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1435845245(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1435845245_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2437376280_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2437376280(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2437376280_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2775695815_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2775695815(__this, method) ((  int32_t (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2_get_Count_m2775695815_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m1147636036_gshared (Dictionary_2_t3517418142 * __this, uint16_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1147636036(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3517418142 *, uint16_t, const MethodInfo*))Dictionary_2_get_Item_m1147636036_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1940620639_gshared (Dictionary_2_t3517418142 * __this, uint16_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1940620639(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3517418142 *, uint16_t, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m1940620639_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1572987223_gshared (Dictionary_2_t3517418142 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1572987223(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t3517418142 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m1572987223_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m1737798464_gshared (Dictionary_2_t3517418142 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1737798464(__this, ___size, method) ((  void (*) (Dictionary_2_t3517418142 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1737798464_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1111285564_gshared (Dictionary_2_t3517418142 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1111285564(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3517418142 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1111285564_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3005949440  Dictionary_2_make_pair_m2252842632_gshared (Il2CppObject * __this /* static, unused */, uint16_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m2252842632(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t3005949440  (*) (Il2CppObject * /* static, unused */, uint16_t, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m2252842632_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m140151726_gshared (Il2CppObject * __this /* static, unused */, uint16_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m140151726(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, uint16_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m140151726_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m1811187987_gshared (Dictionary_2_t3517418142 * __this, KeyValuePair_2U5BU5D_t2952102401* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1811187987(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3517418142 *, KeyValuePair_2U5BU5D_t2952102401*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1811187987_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m4036403769_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m4036403769(__this, method) ((  void (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2_Resize_m4036403769_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1108762038_gshared (Dictionary_2_t3517418142 * __this, uint16_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1108762038(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3517418142 *, uint16_t, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m1108762038_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m28327434_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m28327434(__this, method) ((  void (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2_Clear_m28327434_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m740224624_gshared (Dictionary_2_t3517418142 * __this, uint16_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m740224624(__this, ___key, method) ((  bool (*) (Dictionary_2_t3517418142 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsKey_m740224624_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m25004656_gshared (Dictionary_2_t3517418142 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25004656(__this, ___value, method) ((  bool (*) (Dictionary_2_t3517418142 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m25004656_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2835742205_gshared (Dictionary_2_t3517418142 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2835742205(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3517418142 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m2835742205_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m4182435975_gshared (Dictionary_2_t3517418142 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m4182435975(__this, ___sender, method) ((  void (*) (Dictionary_2_t3517418142 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m4182435975_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2757887104_gshared (Dictionary_2_t3517418142 * __this, uint16_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m2757887104(__this, ___key, method) ((  bool (*) (Dictionary_2_t3517418142 *, uint16_t, const MethodInfo*))Dictionary_2_Remove_m2757887104_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3134052041_gshared (Dictionary_2_t3517418142 * __this, uint16_t ___key, Il2CppObject ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3134052041(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t3517418142 *, uint16_t, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m3134052041_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::get_Values()
extern "C"  ValueCollection_t1144587940 * Dictionary_2_get_Values_m2672769494_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2672769494(__this, method) ((  ValueCollection_t1144587940 * (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2_get_Values_m2672769494_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::ToTKey(System.Object)
extern "C"  uint16_t Dictionary_2_ToTKey_m2671681481_gshared (Dictionary_2_t3517418142 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2671681481(__this, ___key, method) ((  uint16_t (*) (Dictionary_2_t3517418142 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2671681481_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m2747433161_gshared (Dictionary_2_t3517418142 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2747433161(__this, ___value, method) ((  Il2CppObject * (*) (Dictionary_2_t3517418142 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2747433161_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3021943395_gshared (Dictionary_2_t3517418142 * __this, KeyValuePair_2_t3005949440  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3021943395(__this, ___pair, method) ((  bool (*) (Dictionary_2_t3517418142 *, KeyValuePair_2_t3005949440 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3021943395_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::GetEnumerator()
extern "C"  Enumerator_t3284446084  Dictionary_2_GetEnumerator_m3451022052_gshared (Dictionary_2_t3517418142 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3451022052(__this, method) ((  Enumerator_t3284446084  (*) (Dictionary_2_t3517418142 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3451022052_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt16,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m582186547_gshared (Il2CppObject * __this /* static, unused */, uint16_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m582186547(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, uint16_t, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m582186547_gshared)(__this /* static, unused */, ___key, ___value, method)
