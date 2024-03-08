#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000004 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000005 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000009 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000B TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000013 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000014 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000015 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000016 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000017 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000018 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001B System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001C System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001D System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001F System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000020 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000021 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000022 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000025 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000026 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000027 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000002F System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000030 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000031 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000033 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000034 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003E System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000003F System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000040 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000041 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000042 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000043 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000044 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000045 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000046 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000047 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x00000048 System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x00000049 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000004A System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004B System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000004C System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000004D System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000004E System.Void System.Linq.Set`1::Resize()
// 0x0000004F System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000050 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000051 TElement[] System.Linq.Buffer`1::ToArray()
static Il2CppMethodPointer s_methodPointers[81] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[81] = 
{
	1641,
	1709,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[33] = 
{
	{ 0x02000004, { 58, 4 } },
	{ 0x02000005, { 62, 9 } },
	{ 0x02000006, { 73, 7 } },
	{ 0x02000007, { 82, 10 } },
	{ 0x02000008, { 94, 11 } },
	{ 0x02000009, { 108, 9 } },
	{ 0x0200000A, { 120, 12 } },
	{ 0x0200000B, { 135, 1 } },
	{ 0x0200000C, { 136, 2 } },
	{ 0x0200000D, { 138, 12 } },
	{ 0x0200000E, { 150, 8 } },
	{ 0x02000010, { 158, 4 } },
	{ 0x06000003, { 0, 10 } },
	{ 0x06000004, { 10, 10 } },
	{ 0x06000005, { 20, 5 } },
	{ 0x06000006, { 25, 5 } },
	{ 0x06000007, { 30, 1 } },
	{ 0x06000008, { 31, 2 } },
	{ 0x06000009, { 33, 1 } },
	{ 0x0600000A, { 34, 5 } },
	{ 0x0600000B, { 39, 3 } },
	{ 0x0600000C, { 42, 2 } },
	{ 0x0600000D, { 44, 3 } },
	{ 0x0600000E, { 47, 1 } },
	{ 0x0600000F, { 48, 3 } },
	{ 0x06000010, { 51, 2 } },
	{ 0x06000011, { 53, 5 } },
	{ 0x06000021, { 71, 2 } },
	{ 0x06000026, { 80, 2 } },
	{ 0x0600002B, { 92, 2 } },
	{ 0x06000031, { 105, 3 } },
	{ 0x06000036, { 117, 3 } },
	{ 0x0600003B, { 132, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[162] = 
{
	{ (Il2CppRGCTXDataType)2, 1095 },
	{ (Il2CppRGCTXDataType)3, 2431 },
	{ (Il2CppRGCTXDataType)2, 1648 },
	{ (Il2CppRGCTXDataType)2, 1383 },
	{ (Il2CppRGCTXDataType)3, 3994 },
	{ (Il2CppRGCTXDataType)2, 1143 },
	{ (Il2CppRGCTXDataType)2, 1390 },
	{ (Il2CppRGCTXDataType)3, 4012 },
	{ (Il2CppRGCTXDataType)2, 1385 },
	{ (Il2CppRGCTXDataType)3, 4001 },
	{ (Il2CppRGCTXDataType)2, 1096 },
	{ (Il2CppRGCTXDataType)3, 2432 },
	{ (Il2CppRGCTXDataType)2, 1655 },
	{ (Il2CppRGCTXDataType)2, 1392 },
	{ (Il2CppRGCTXDataType)3, 4019 },
	{ (Il2CppRGCTXDataType)2, 1146 },
	{ (Il2CppRGCTXDataType)2, 1400 },
	{ (Il2CppRGCTXDataType)3, 4049 },
	{ (Il2CppRGCTXDataType)2, 1396 },
	{ (Il2CppRGCTXDataType)3, 4033 },
	{ (Il2CppRGCTXDataType)2, 446 },
	{ (Il2CppRGCTXDataType)3, 122 },
	{ (Il2CppRGCTXDataType)3, 123 },
	{ (Il2CppRGCTXDataType)2, 776 },
	{ (Il2CppRGCTXDataType)3, 1883 },
	{ (Il2CppRGCTXDataType)2, 447 },
	{ (Il2CppRGCTXDataType)3, 126 },
	{ (Il2CppRGCTXDataType)3, 127 },
	{ (Il2CppRGCTXDataType)2, 780 },
	{ (Il2CppRGCTXDataType)3, 1885 },
	{ (Il2CppRGCTXDataType)3, 4987 },
	{ (Il2CppRGCTXDataType)2, 453 },
	{ (Il2CppRGCTXDataType)3, 157 },
	{ (Il2CppRGCTXDataType)3, 4977 },
	{ (Il2CppRGCTXDataType)3, 1705 },
	{ (Il2CppRGCTXDataType)2, 738 },
	{ (Il2CppRGCTXDataType)2, 894 },
	{ (Il2CppRGCTXDataType)2, 951 },
	{ (Il2CppRGCTXDataType)2, 992 },
	{ (Il2CppRGCTXDataType)2, 608 },
	{ (Il2CppRGCTXDataType)3, 512 },
	{ (Il2CppRGCTXDataType)3, 513 },
	{ (Il2CppRGCTXDataType)2, 1144 },
	{ (Il2CppRGCTXDataType)3, 2660 },
	{ (Il2CppRGCTXDataType)2, 899 },
	{ (Il2CppRGCTXDataType)2, 952 },
	{ (Il2CppRGCTXDataType)3, 1884 },
	{ (Il2CppRGCTXDataType)2, 889 },
	{ (Il2CppRGCTXDataType)2, 890 },
	{ (Il2CppRGCTXDataType)2, 949 },
	{ (Il2CppRGCTXDataType)3, 1882 },
	{ (Il2CppRGCTXDataType)2, 834 },
	{ (Il2CppRGCTXDataType)3, 4970 },
	{ (Il2CppRGCTXDataType)3, 1704 },
	{ (Il2CppRGCTXDataType)2, 737 },
	{ (Il2CppRGCTXDataType)2, 892 },
	{ (Il2CppRGCTXDataType)2, 950 },
	{ (Il2CppRGCTXDataType)2, 991 },
	{ (Il2CppRGCTXDataType)3, 2433 },
	{ (Il2CppRGCTXDataType)3, 2435 },
	{ (Il2CppRGCTXDataType)2, 284 },
	{ (Il2CppRGCTXDataType)3, 2434 },
	{ (Il2CppRGCTXDataType)3, 2443 },
	{ (Il2CppRGCTXDataType)2, 1099 },
	{ (Il2CppRGCTXDataType)2, 1386 },
	{ (Il2CppRGCTXDataType)3, 4002 },
	{ (Il2CppRGCTXDataType)3, 2444 },
	{ (Il2CppRGCTXDataType)2, 925 },
	{ (Il2CppRGCTXDataType)2, 967 },
	{ (Il2CppRGCTXDataType)3, 1890 },
	{ (Il2CppRGCTXDataType)3, 4960 },
	{ (Il2CppRGCTXDataType)2, 1397 },
	{ (Il2CppRGCTXDataType)3, 4034 },
	{ (Il2CppRGCTXDataType)3, 2436 },
	{ (Il2CppRGCTXDataType)2, 1098 },
	{ (Il2CppRGCTXDataType)2, 1384 },
	{ (Il2CppRGCTXDataType)3, 3995 },
	{ (Il2CppRGCTXDataType)3, 1889 },
	{ (Il2CppRGCTXDataType)3, 2437 },
	{ (Il2CppRGCTXDataType)3, 4959 },
	{ (Il2CppRGCTXDataType)2, 1393 },
	{ (Il2CppRGCTXDataType)3, 4020 },
	{ (Il2CppRGCTXDataType)3, 2450 },
	{ (Il2CppRGCTXDataType)2, 1100 },
	{ (Il2CppRGCTXDataType)2, 1391 },
	{ (Il2CppRGCTXDataType)3, 4013 },
	{ (Il2CppRGCTXDataType)3, 2677 },
	{ (Il2CppRGCTXDataType)3, 1470 },
	{ (Il2CppRGCTXDataType)3, 1891 },
	{ (Il2CppRGCTXDataType)3, 1469 },
	{ (Il2CppRGCTXDataType)3, 2451 },
	{ (Il2CppRGCTXDataType)3, 4961 },
	{ (Il2CppRGCTXDataType)2, 1401 },
	{ (Il2CppRGCTXDataType)3, 4050 },
	{ (Il2CppRGCTXDataType)3, 2464 },
	{ (Il2CppRGCTXDataType)2, 1102 },
	{ (Il2CppRGCTXDataType)2, 1399 },
	{ (Il2CppRGCTXDataType)3, 4036 },
	{ (Il2CppRGCTXDataType)3, 2465 },
	{ (Il2CppRGCTXDataType)2, 928 },
	{ (Il2CppRGCTXDataType)2, 970 },
	{ (Il2CppRGCTXDataType)3, 1895 },
	{ (Il2CppRGCTXDataType)3, 1894 },
	{ (Il2CppRGCTXDataType)2, 1388 },
	{ (Il2CppRGCTXDataType)3, 4004 },
	{ (Il2CppRGCTXDataType)3, 4964 },
	{ (Il2CppRGCTXDataType)2, 1398 },
	{ (Il2CppRGCTXDataType)3, 4035 },
	{ (Il2CppRGCTXDataType)3, 2457 },
	{ (Il2CppRGCTXDataType)2, 1101 },
	{ (Il2CppRGCTXDataType)2, 1395 },
	{ (Il2CppRGCTXDataType)3, 4022 },
	{ (Il2CppRGCTXDataType)3, 1893 },
	{ (Il2CppRGCTXDataType)3, 1892 },
	{ (Il2CppRGCTXDataType)3, 2458 },
	{ (Il2CppRGCTXDataType)2, 1387 },
	{ (Il2CppRGCTXDataType)3, 4003 },
	{ (Il2CppRGCTXDataType)3, 4963 },
	{ (Il2CppRGCTXDataType)2, 1394 },
	{ (Il2CppRGCTXDataType)3, 4021 },
	{ (Il2CppRGCTXDataType)3, 2471 },
	{ (Il2CppRGCTXDataType)2, 1103 },
	{ (Il2CppRGCTXDataType)2, 1403 },
	{ (Il2CppRGCTXDataType)3, 4052 },
	{ (Il2CppRGCTXDataType)3, 2678 },
	{ (Il2CppRGCTXDataType)3, 1472 },
	{ (Il2CppRGCTXDataType)3, 1897 },
	{ (Il2CppRGCTXDataType)3, 1896 },
	{ (Il2CppRGCTXDataType)3, 1471 },
	{ (Il2CppRGCTXDataType)3, 2472 },
	{ (Il2CppRGCTXDataType)2, 1389 },
	{ (Il2CppRGCTXDataType)3, 4005 },
	{ (Il2CppRGCTXDataType)3, 4965 },
	{ (Il2CppRGCTXDataType)2, 1402 },
	{ (Il2CppRGCTXDataType)3, 4051 },
	{ (Il2CppRGCTXDataType)3, 1887 },
	{ (Il2CppRGCTXDataType)3, 1888 },
	{ (Il2CppRGCTXDataType)3, 1898 },
	{ (Il2CppRGCTXDataType)3, 159 },
	{ (Il2CppRGCTXDataType)3, 160 },
	{ (Il2CppRGCTXDataType)2, 1307 },
	{ (Il2CppRGCTXDataType)3, 3629 },
	{ (Il2CppRGCTXDataType)2, 920 },
	{ (Il2CppRGCTXDataType)2, 963 },
	{ (Il2CppRGCTXDataType)3, 3630 },
	{ (Il2CppRGCTXDataType)3, 162 },
	{ (Il2CppRGCTXDataType)2, 282 },
	{ (Il2CppRGCTXDataType)2, 454 },
	{ (Il2CppRGCTXDataType)3, 158 },
	{ (Il2CppRGCTXDataType)3, 161 },
	{ (Il2CppRGCTXDataType)3, 1735 },
	{ (Il2CppRGCTXDataType)2, 750 },
	{ (Il2CppRGCTXDataType)2, 1701 },
	{ (Il2CppRGCTXDataType)3, 3626 },
	{ (Il2CppRGCTXDataType)3, 3627 },
	{ (Il2CppRGCTXDataType)2, 1004 },
	{ (Il2CppRGCTXDataType)3, 3628 },
	{ (Il2CppRGCTXDataType)2, 216 },
	{ (Il2CppRGCTXDataType)2, 835 },
	{ (Il2CppRGCTXDataType)2, 1658 },
	{ (Il2CppRGCTXDataType)2, 909 },
	{ (Il2CppRGCTXDataType)2, 953 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	81,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	33,
	s_rgctxIndices,
	162,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
