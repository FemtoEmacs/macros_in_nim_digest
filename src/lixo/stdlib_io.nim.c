/* Generated by Nim Compiler v1.0.2 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -O3  -I/usr/local/lib/nim -I/Users/ed/nim/nimacros/src -o /Users/ed/nim/nimacros/src/lixo/stdlib_io.nim.c.o /Users/ed/nim/nimacros/src/lixo/stdlib_io.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
#include <errno.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
NU raiseId;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__Y9atVWUcVyKHG9aBP4D0P9czA)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(void, checkErr__fU6ZlJAtQ9bre04EDZLdGsA)(FILE* f);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ)(NimStringDesc* msg) __attribute__((noreturn));
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NIM_BOOL, eqeq___aqip9cmQIuefPKdd25wuEEwsystem)(NCSTRING x, NCSTRING y);
extern TNimType NTI__HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTI__iLZrPn9anoh9ad1MmO0RczFw_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_2, "errno: ", 7);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_3, " `", 2);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_4, "`", 1);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_5, "cannot write string to file", 27);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	addZCT__Y66tOYFjgwJ0k4aLz4bc0Q((&gch__IcYaEuuWivYAS86vFMTS3Q.zct), c);
}
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA3_: ;
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(p);
	decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T1_);
}
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(src);
		incRef__AT1eRuflKWyTTBdLjEDZbg_3system(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem((*dest));
		decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ)(NimStringDesc* msg) {	tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* eX60gensym125224_;
	NimStringDesc* T1_;
	eX60gensym125224_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
	eX60gensym125224_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
	(*eX60gensym125224_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
	(*eX60gensym125224_).Sup.Sup.name = "IOError";
	T1_ = (NimStringDesc*)0;
	T1_ = (*eX60gensym125224_).Sup.Sup.message; (*eX60gensym125224_).Sup.Sup.message = copyStringRC1(msg);
	if (T1_) nimGCunrefNoCycle(T1_);
	asgnRef((void**) (&(*eX60gensym125224_).Sup.Sup.parent), NIM_NIL);
	raiseExceptionEx((Exception*)eX60gensym125224_, "IOError", "raiseEIO", "io.nim", 129);
}
N_LIB_PRIVATE N_NIMCALL(void, checkErr__fU6ZlJAtQ9bre04EDZLdGsA)(FILE* f) {	{
		int T3_;
		NimStringDesc* msg;
		NimStringDesc* T6_;
		NimStringDesc* T7_;
		NCSTRING T8_;
		NimStringDesc* T9_;
		T3_ = (int)0;
		T3_ = ferror(f);
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		T6_ = (NimStringDesc*)0;
		T7_ = (NimStringDesc*)0;
		T7_ = nimIntToStr(((NI) (errno)));
		T8_ = (NCSTRING)0;
		T8_ = strerror(errno);
		T9_ = (NimStringDesc*)0;
		T9_ = cstrToNimstr(T8_);
		T6_ = rawNewString((T7_ ? T7_->Sup.len : 0) + (T9_ ? T9_->Sup.len : 0) + 10);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_2));
appendString(T6_, T7_);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_3));
appendString(T6_, T9_);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_4));
		msg = T6_;
		clearerr(f);
		raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(msg);
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__Y9atVWUcVyKHG9aBP4D0P9czA)(FILE* f, void* buffer, NI len) {	NI result;
	int T1_;
	result = (NI)0;
	T1_ = (int)0;
	T1_ = fwrite(buffer, ((NI) 1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	checkErr__fU6ZlJAtQ9bre04EDZLdGsA(f);
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, write__PArlm09bKklm2BLsCg6YtaA)(FILE* f, NimStringDesc* s) {	{
		NI T3_;
		T3_ = (NI)0;
		T3_ = writeBuffer__Y9atVWUcVyKHG9aBP4D0P9czA(f, ((void*) (nimToCStringConv(s))), ((NI) ((s ? s->Sup.len : 0))));
		if (!!((T3_ == (s ? s->Sup.len : 0)))) goto LA4_;
		raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_5));
	}
	LA4_: ;
}
static N_INLINE(NIM_BOOL, eqeq___aqip9cmQIuefPKdd25wuEEwsystem)(NCSTRING x, NCSTRING y) {	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__FbqDHP9bu7nqCh9c04dnSOxw)(FILE* f, NimStringDesc** line) {	NIM_BOOL result;
	NI pos;
	NI sp;
{	result = (NIM_BOOL)0;
	pos = ((NI) 0);
	sp = ((((*line) ? (*line)->Sup.len : 0) >= ((NI) 80)) ? ((*line) ? (*line)->Sup.len : 0) : ((NI) 80));
	unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) (sp))));
	{
		while (1) {
			NIM_BOOL fgetsSuccess;
			NCSTRING T6_;
			NIM_BOOL T7_;
			void* m;
			{
				NI i;
				NI i_2;
				i = (NI)0;
				i_2 = ((NI) 0);
				{
					while (1) {
						if (!(i_2 < sp)) goto LA5;
						i = i_2;
						(*line)->data[(NI)(pos + i)] = 10;
						i_2 += ((NI) 1);
					} LA5: ;
				}
			}
			T6_ = (NCSTRING)0;
			T6_ = fgets(((NCSTRING) ((&(*line)->data[pos]))), ((int) (sp)), f);
			T7_ = (NIM_BOOL)0;
			T7_ = eqeq___aqip9cmQIuefPKdd25wuEEwsystem(T6_, NIM_NIL);
			fgetsSuccess = !(T7_);
			{
				if (!!(fgetsSuccess)) goto LA10_;
				checkErr__fU6ZlJAtQ9bre04EDZLdGsA(f);
			}
			LA10_: ;
			m = memchr(((void*) ((&(*line)->data[pos]))), ((int) 10), sp);
			{
				NI last;
				NIM_BOOL T35_;
				if (!!((m == NIM_NIL))) goto LA14_;
				last = (NI)(((NI) (ptrdiff_t) (m)) - ((NI) (ptrdiff_t) ((&(*line)->data[((NI) 0)]))));
				{
					NIM_BOOL T18_;
					NIM_BOOL T22_;
					T18_ = (NIM_BOOL)0;
					T18_ = (((NI) 0) < last);
					if (!(T18_)) goto LA19_;
					T18_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(13));
					LA19_: ;
					if (!T18_) goto LA20_;
					unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) ((NI)(last - ((NI) 1))))));
					T22_ = (NIM_BOOL)0;
					T22_ = (((NI) 1) < last);
					if (T22_) goto LA23_;
					T22_ = fgetsSuccess;
					LA23_: ;
					result = T22_;
					goto BeforeRet_;
				}
				goto LA16_;
				LA20_: ;
				{
					NIM_BOOL T25_;
					T25_ = (NIM_BOOL)0;
					T25_ = (((NI) 0) < last);
					if (!(T25_)) goto LA26_;
					T25_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(0));
					LA26_: ;
					if (!T25_) goto LA27_;
					{
						NIM_BOOL T31_;
						T31_ = (NIM_BOOL)0;
						T31_ = (last < (NI)((NI)(pos + sp) - ((NI) 1)));
						if (!(T31_)) goto LA32_;
						T31_ = !(((NU8)((*line)->data[(NI)(last + ((NI) 1))]) == (NU8)(0)));
						LA32_: ;
						if (!T31_) goto LA33_;
						last -= ((NI) 1);
					}
					LA33_: ;
				}
				goto LA16_;
				LA27_: ;
				LA16_: ;
				unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) (last))));
				T35_ = (NIM_BOOL)0;
				T35_ = (((NI) 0) < last);
				if (T35_) goto LA36_;
				T35_ = fgetsSuccess;
				LA36_: ;
				result = T35_;
				goto BeforeRet_;
			}
			goto LA12_;
			LA14_: ;
			{
				sp -= ((NI) 1);
			}
			LA12_: ;
			pos += sp;
			sp = ((NI) 128);
			unsureAsgnRef((void**) (&(*line)), setLengthStr((*line), ((NI) ((NI)(pos + sp)))));
		}
	}
	}BeforeRet_: ;
	return result;
}
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0) {	int T5_;
	int T6_;
	flockfile(stdout);
	{
		NimStringDesc* s;
		NI i;
		s = (NimStringDesc*)0;
		i = ((NI) 0);
		{
			while (1) {
				int T4_;
				if (!(i < argsLen_0)) goto LA3;
				s = args[i];
				T4_ = (int)0;
				T4_ = fwrite(((void*) (nimToCStringConv(s))), (s ? s->Sup.len : 0), ((NI) 1), stdout);
				(void)(T4_);
				i += ((NI) 1);
			} LA3: ;
		}
	}
	T5_ = (int)0;
	T5_ = fwrite(((void*) ("\012")), ((NI) 1), ((NI) 1), stdout);
	(void)(T5_);
	T6_ = (int)0;
	T6_ = fflush(stdout);
	(void)(T6_);
	funlockfile(stdout);
}