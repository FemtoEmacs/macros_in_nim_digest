/* Generated by Nim Compiler v1.0.2 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w -O3  -I/usr/local/lib/nim -I/Users/ed/nim/nimacros/src -o /Users/ed/nim/nimacros/src/lixo/@mrdwrt.nim.c.o /Users/ed/nim/nimacros/src/lixo/@mrdwrt.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <math.h>
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg;
typedef struct RootObj RootObj;
typedef struct Exception Exception;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct TSafePoint TSafePoint;
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg {
  RootObj Sup;
NF car;
tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* cdr;
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
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc__NT9bSe2DDkjdtx7j9aov2Z6g;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc__NT9bSe2DDkjdtx7j9aov2Z6g raiseAction;
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
typedef NimStringDesc* tyArray__nHXaesL0DJZHyVS07ARPRA[1];
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM__wPKAWGtAWrqQnBPQNPm9a0w_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_NIMCALL(void, Marker_tyRef__qjTQYXUZFS9cixpS6xTktdQ)(void* p, NI op);
static N_NIMCALL(void, TM__wPKAWGtAWrqQnBPQNPm9a0w_4)(void);
static N_NIMCALL(void, TM__wPKAWGtAWrqQnBPQNPm9a0w_5)(void);
N_LIB_PRIVATE N_NIMCALL(void, write__PArlm09bKklm2BLsCg6YtaA)(FILE* f, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__FbqDHP9bu7nqCh9c04dnSOxw)(FILE* f, NimStringDesc** line);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
static N_NIMCALL(void, TM__wPKAWGtAWrqQnBPQNPm9a0w_8)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__2yh9cer0ymNRHlOOg8P7IuA)(NimStringDesc* s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(void, eval__H9a0iJ2gNUDNbCuLaRMzjFg)(NimStringDesc* x, tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg** s);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NF, nsuParseFloat)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, popSafePoint)(void);
N_LIB_PRIVATE N_NIMCALL(void, quit__q8QKbUwWyOe9b9a1QNJQr71A)(NimStringDesc* errormsg, NI errorcode) __attribute__((noreturn));
static N_INLINE(void, popCurrentException)(void);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF f);
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, nimGC_setStackBottom)(void* theStackBottom);
N_LIB_PRIVATE N_NIMCALL(void, systemDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, systemInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_posixInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_osDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_osInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, rdwrtDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void);
NimStringDesc* s__qSCM8aqP40kH4LuU7R60zQ;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* stk__QYIAznlg6OBQ9cngj2iKIKg;
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI__2EuCh56MftNTce0T9cBYhSg_;
extern TNimType NTI__w9bl9a1ul9ctRJWiMl9cNnIMvg_;
TNimType NTI__qjTQYXUZFS9cixpS6xTktdQ_;
tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* stack__WUzu4OqLF0ucQmLm6SAU1Q;
NimStringDesc* x__09c8FG3TrXEwdZgDRXfLyxQ;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern TSafePoint* excHandler__rqLlY5bs9atDw2OXYqJEn5g;
extern Exception* currException__9bVPeDJlYTi9bQApZpfH8wjg;
extern Exception* currException__9bVPeDJlYTi9bQApZpfH8wjg;
STRING_LITERAL(TM__wPKAWGtAWrqQnBPQNPm9a0w_6, "> ", 2);
STRING_LITERAL(TM__wPKAWGtAWrqQnBPQNPm9a0w_7, "quit", 4);
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__wPKAWGtAWrqQnBPQNPm9a0w_10 = {
0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM__wPKAWGtAWrqQnBPQNPm9a0w_11, "+", 1);
STRING_LITERAL(TM__wPKAWGtAWrqQnBPQNPm9a0w_12, "x", 1);
STRING_LITERAL(TM__wPKAWGtAWrqQnBPQNPm9a0w_13, "/", 1);
STRING_LITERAL(TM__wPKAWGtAWrqQnBPQNPm9a0w_14, "-", 1);
STRING_LITERAL(TM__wPKAWGtAWrqQnBPQNPm9a0w_15, "expt", 4);
STRING_LITERAL(TM__wPKAWGtAWrqQnBPQNPm9a0w_16, "fv", 2);
STRING_LITERAL(TM__wPKAWGtAWrqQnBPQNPm9a0w_17, "neg", 3);
STRING_LITERAL(TM__wPKAWGtAWrqQnBPQNPm9a0w_18, "Empty stack", 11);
STRING_LITERAL(TM__wPKAWGtAWrqQnBPQNPm9a0w_19, "Error in eval", 13);
static N_NIMCALL(void, TM__wPKAWGtAWrqQnBPQNPm9a0w_2)(void) {
	nimGCvisit((void*)s__qSCM8aqP40kH4LuU7R60zQ, 0);
}
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
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
static N_NIMCALL(void, Marker_tyRef__qjTQYXUZFS9cixpS6xTktdQ)(void* p, NI op) {
	tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* a;
	a = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*)p;
	nimGCvisit((void*)(*a).cdr, op);
}
static N_NIMCALL(void, TM__wPKAWGtAWrqQnBPQNPm9a0w_4)(void) {
	nimGCvisit((void*)stk__QYIAznlg6OBQ9cngj2iKIKg, 0);
}
static N_NIMCALL(void, TM__wPKAWGtAWrqQnBPQNPm9a0w_5)(void) {
	nimGCvisit((void*)stack__WUzu4OqLF0ucQmLm6SAU1Q, 0);
}
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size) {	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = (a ? a->Sup.len : 0);
	blen = (b ? b->Sup.len : 0);
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
static N_NIMCALL(void, TM__wPKAWGtAWrqQnBPQNPm9a0w_8)(void) {
	nimGCvisit((void*)x__09c8FG3TrXEwdZgDRXfLyxQ, 0);
}
static N_INLINE(void, pushSafePoint)(TSafePoint* s) {	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler__rqLlY5bs9atDw2OXYqJEn5g;
	excHandler__rqLlY5bs9atDw2OXYqJEn5g = s;
}
static N_INLINE(void, popSafePoint)(void) {	excHandler__rqLlY5bs9atDw2OXYqJEn5g = (*excHandler__rqLlY5bs9atDw2OXYqJEn5g).prev;
}
static N_INLINE(void, popCurrentException)(void) {	asgnRef((void**) (&currException__9bVPeDJlYTi9bQApZpfH8wjg), (*currException__9bVPeDJlYTi9bQApZpfH8wjg).up);
}
N_LIB_PRIVATE N_NIMCALL(void, eval__H9a0iJ2gNUDNbCuLaRMzjFg)(NimStringDesc* x, tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg** s) {	TSafePoint TM__wPKAWGtAWrqQnBPQNPm9a0w_9;
	pushSafePoint(&TM__wPKAWGtAWrqQnBPQNPm9a0w_9);
	TM__wPKAWGtAWrqQnBPQNPm9a0w_9.status = _setjmp(TM__wPKAWGtAWrqQnBPQNPm9a0w_9.context);
	if (TM__wPKAWGtAWrqQnBPQNPm9a0w_9.status == 0) {
		tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* T2_;
		NimStringDesc* T3_;
		T2_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*)0;
		T2_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*) newObj((&NTI__qjTQYXUZFS9cixpS6xTktdQ_), sizeof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg));
		(*T2_).Sup.m_type = (&NTI__2EuCh56MftNTce0T9cBYhSg_);
		T3_ = (NimStringDesc*)0;
		T3_ = nsuStrip(x, NIM_TRUE, NIM_TRUE, TM__wPKAWGtAWrqQnBPQNPm9a0w_10);
		(*T2_).car = nsuParseFloat(T3_);
		asgnRef((void**) (&(*T2_).cdr), (*s));
		unsureAsgnRef((void**) (&(*s)), T2_);
		popSafePoint();
	}
	else {
		popSafePoint();
		{
			TM__wPKAWGtAWrqQnBPQNPm9a0w_9.status = 0;
			if (eqStrings(x, ((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_11))) goto LA6_;
			if (eqStrings(x, ((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_12))) goto LA7_;
			if (eqStrings(x, ((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_13))) goto LA8_;
			if (eqStrings(x, ((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_14))) goto LA9_;
			if (eqStrings(x, ((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_15))) goto LA10_;
			if (eqStrings(x, ((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_16))) goto LA11_;
			if (eqStrings(x, ((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_17))) goto LA12_;
			goto LA13_;
			LA6_: ;
			{
				tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* T16_;
				NF T17_;
				NF T23_;
				T16_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*)0;
				T16_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*) newObj((&NTI__qjTQYXUZFS9cixpS6xTktdQ_), sizeof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg));
				(*T16_).Sup.m_type = (&NTI__2EuCh56MftNTce0T9cBYhSg_);
				T17_ = (NF)0;
				{
					if (!((*s) == NIM_NIL)) goto LA20_;
					quit__q8QKbUwWyOe9b9a1QNJQr71A(((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_18), ((NI) 1));
				}
				goto LA18_;
				LA20_: ;
				{
					T17_ = (*(*s)).car;
				}
				LA18_: ;
				T23_ = (NF)0;
				{
					if (!((*(*s)).cdr == NIM_NIL)) goto LA26_;
					quit__q8QKbUwWyOe9b9a1QNJQr71A(((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_18), ((NI) 1));
				}
				goto LA24_;
				LA26_: ;
				{
					T23_ = (*(*(*s)).cdr).car;
				}
				LA24_: ;
				(*T16_).car = ((NF)(T17_) + (NF)(T23_));
				asgnRef((void**) (&(*T16_).cdr), (*(*(*s)).cdr).cdr);
				unsureAsgnRef((void**) (&(*s)), T16_);
			}
			goto LA14_;
			LA7_: ;
			{
				tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* T30_;
				NF T31_;
				NF T37_;
				T30_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*)0;
				T30_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*) newObj((&NTI__qjTQYXUZFS9cixpS6xTktdQ_), sizeof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg));
				(*T30_).Sup.m_type = (&NTI__2EuCh56MftNTce0T9cBYhSg_);
				T31_ = (NF)0;
				{
					if (!((*s) == NIM_NIL)) goto LA34_;
					quit__q8QKbUwWyOe9b9a1QNJQr71A(((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_18), ((NI) 1));
				}
				goto LA32_;
				LA34_: ;
				{
					T31_ = (*(*s)).car;
				}
				LA32_: ;
				T37_ = (NF)0;
				{
					if (!((*(*s)).cdr == NIM_NIL)) goto LA40_;
					quit__q8QKbUwWyOe9b9a1QNJQr71A(((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_18), ((NI) 1));
				}
				goto LA38_;
				LA40_: ;
				{
					T37_ = (*(*(*s)).cdr).car;
				}
				LA38_: ;
				(*T30_).car = ((NF)(T31_) * (NF)(T37_));
				asgnRef((void**) (&(*T30_).cdr), (*(*(*s)).cdr).cdr);
				unsureAsgnRef((void**) (&(*s)), T30_);
			}
			goto LA14_;
			LA8_: ;
			{
				tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* T44_;
				NF T45_;
				NF T51_;
				T44_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*)0;
				T44_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*) newObj((&NTI__qjTQYXUZFS9cixpS6xTktdQ_), sizeof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg));
				(*T44_).Sup.m_type = (&NTI__2EuCh56MftNTce0T9cBYhSg_);
				T45_ = (NF)0;
				{
					if (!((*(*s)).cdr == NIM_NIL)) goto LA48_;
					quit__q8QKbUwWyOe9b9a1QNJQr71A(((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_18), ((NI) 1));
				}
				goto LA46_;
				LA48_: ;
				{
					T45_ = (*(*(*s)).cdr).car;
				}
				LA46_: ;
				T51_ = (NF)0;
				{
					if (!((*s) == NIM_NIL)) goto LA54_;
					quit__q8QKbUwWyOe9b9a1QNJQr71A(((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_18), ((NI) 1));
				}
				goto LA52_;
				LA54_: ;
				{
					T51_ = (*(*s)).car;
				}
				LA52_: ;
				(*T44_).car = ((NF)(T45_) / (NF)(T51_));
				asgnRef((void**) (&(*T44_).cdr), (*(*(*s)).cdr).cdr);
				unsureAsgnRef((void**) (&(*s)), T44_);
			}
			goto LA14_;
			LA9_: ;
			{
				tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* T58_;
				NF T59_;
				NF T65_;
				T58_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*)0;
				T58_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*) newObj((&NTI__qjTQYXUZFS9cixpS6xTktdQ_), sizeof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg));
				(*T58_).Sup.m_type = (&NTI__2EuCh56MftNTce0T9cBYhSg_);
				T59_ = (NF)0;
				{
					if (!((*(*s)).cdr == NIM_NIL)) goto LA62_;
					quit__q8QKbUwWyOe9b9a1QNJQr71A(((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_18), ((NI) 1));
				}
				goto LA60_;
				LA62_: ;
				{
					T59_ = (*(*(*s)).cdr).car;
				}
				LA60_: ;
				T65_ = (NF)0;
				{
					if (!((*s) == NIM_NIL)) goto LA68_;
					quit__q8QKbUwWyOe9b9a1QNJQr71A(((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_18), ((NI) 1));
				}
				goto LA66_;
				LA68_: ;
				{
					T65_ = (*(*s)).car;
				}
				LA66_: ;
				(*T58_).car = ((NF)(T59_) - (NF)(T65_));
				asgnRef((void**) (&(*T58_).cdr), (*(*(*s)).cdr).cdr);
				unsureAsgnRef((void**) (&(*s)), T58_);
			}
			goto LA14_;
			LA10_: ;
			{
				tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* T72_;
				T72_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*)0;
				T72_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*) newObj((&NTI__qjTQYXUZFS9cixpS6xTktdQ_), sizeof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg));
				(*T72_).Sup.m_type = (&NTI__2EuCh56MftNTce0T9cBYhSg_);
				(*T72_).car = pow((*(*(*s)).cdr).car, (*(*s)).car);
				asgnRef((void**) (&(*T72_).cdr), (*(*(*s)).cdr).cdr);
				unsureAsgnRef((void**) (&(*s)), T72_);
			}
			goto LA14_;
			LA11_: ;
			{
				tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* T74_;
				NF T75_;
				T74_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*)0;
				T74_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*) newObj((&NTI__qjTQYXUZFS9cixpS6xTktdQ_), sizeof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg));
				(*T74_).Sup.m_type = (&NTI__2EuCh56MftNTce0T9cBYhSg_);
				T75_ = (NF)0;
				T75_ = pow(((NF)(1.0000000000000000e+00) + (NF)(((NF)((*(*(*s)).cdr).car) / (NF)(1.0000000000000000e+02)))), (*(*s)).car);
				(*T74_).car = ((NF)(T75_) * (NF)((*(*(*(*s)).cdr).cdr).car));
				asgnRef((void**) (&(*T74_).cdr), (*(*(*(*s)).cdr).cdr).cdr);
				unsureAsgnRef((void**) (&(*s)), T74_);
			}
			goto LA14_;
			LA12_: ;
			{
				tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg* T77_;
				NF T78_;
				T77_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*)0;
				T77_ = (tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*) newObj((&NTI__qjTQYXUZFS9cixpS6xTktdQ_), sizeof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg));
				(*T77_).Sup.m_type = (&NTI__2EuCh56MftNTce0T9cBYhSg_);
				T78_ = (NF)0;
				{
					if (!((*s) == NIM_NIL)) goto LA81_;
					quit__q8QKbUwWyOe9b9a1QNJQr71A(((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_18), ((NI) 1));
				}
				goto LA79_;
				LA81_: ;
				{
					T78_ = (*(*s)).car;
				}
				LA79_: ;
				(*T77_).car = -(T78_);
				asgnRef((void**) (&(*T77_).cdr), (*(*s)).cdr);
				unsureAsgnRef((void**) (&(*s)), T77_);
			}
			goto LA14_;
			LA13_: ;
			{
				quit__q8QKbUwWyOe9b9a1QNJQr71A(((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_19), ((NI) 1));
			}
			LA14_: ;
			popCurrentException();
		}
	}
	if (TM__wPKAWGtAWrqQnBPQNPm9a0w_9.status != 0) reraiseException();
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
static N_INLINE(void, initStackBottomWith)(void* locals) {	nimGC_setStackBottom(locals);
}

void PreMainInner(void) {
	stdlib_posixInit000();
	stdlib_timesInit000();
	stdlib_osInit000();
}

int cmdCount;
char** cmdLine;
char** gEnv;
void PreMain(void) {
	void (*volatile inner)(void);
	inner = PreMainInner;
	systemDatInit000();
	initStackBottomWith((void *)&inner);
	systemInit000();
	stdlib_timesDatInit000();
	stdlib_osDatInit000();
	rdwrtDatInit000();
	(*inner)();
}

N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void) {
{

	nimRegisterGlobalMarker(TM__wPKAWGtAWrqQnBPQNPm9a0w_2);


	nimRegisterGlobalMarker(TM__wPKAWGtAWrqQnBPQNPm9a0w_4);


	nimRegisterGlobalMarker(TM__wPKAWGtAWrqQnBPQNPm9a0w_5);


	nimRegisterGlobalMarker(TM__wPKAWGtAWrqQnBPQNPm9a0w_8);

	asgnRef((void**) (&s__qSCM8aqP40kH4LuU7R60zQ), ((NimStringDesc*) NIM_NIL));
	asgnRef((void**) (&stk__QYIAznlg6OBQ9cngj2iKIKg), NIM_NIL);
	asgnRef((void**) (&stack__WUzu4OqLF0ucQmLm6SAU1Q), NIM_NIL);
	write__PArlm09bKklm2BLsCg6YtaA(stdout, ((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_6));
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = readLine__FbqDHP9bu7nqCh9c04dnSOxw(stdin, (&s__qSCM8aqP40kH4LuU7R60zQ));
			if (!(T3_)) goto LA4_;
			T3_ = !(eqStrings(s__qSCM8aqP40kH4LuU7R60zQ, ((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_7)));
			LA4_: ;
			if (!T3_) goto LA2;
			{
				NI lastX60gensym239202_;
				NI splitsX60gensym239203_;
				asgnRef((void**) (&x__09c8FG3TrXEwdZgDRXfLyxQ), NIM_NIL);
				lastX60gensym239202_ = ((NI) 0);
				splitsX60gensym239203_ = ((NI) -1);
				{
					while (1) {
						NI firstX60gensym239204_;
						if (!(lastX60gensym239202_ < (s__qSCM8aqP40kH4LuU7R60zQ ? s__qSCM8aqP40kH4LuU7R60zQ->Sup.len : 0))) goto LA7;
						{
							while (1) {
								NIM_BOOL T10_;
								T10_ = (NIM_BOOL)0;
								T10_ = (lastX60gensym239202_ < (s__qSCM8aqP40kH4LuU7R60zQ ? s__qSCM8aqP40kH4LuU7R60zQ->Sup.len : 0));
								if (!(T10_)) goto LA11_;
								T10_ = (((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(32)) || ((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(9)) || ((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(11)) || ((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(13)) || ((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(10)) || ((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(12)));
								LA11_: ;
								if (!T10_) goto LA9;
								lastX60gensym239202_ += ((NI) 1);
							} LA9: ;
						}
						firstX60gensym239204_ = lastX60gensym239202_;
						{
							while (1) {
								NIM_BOOL T14_;
								T14_ = (NIM_BOOL)0;
								T14_ = (lastX60gensym239202_ < (s__qSCM8aqP40kH4LuU7R60zQ ? s__qSCM8aqP40kH4LuU7R60zQ->Sup.len : 0));
								if (!(T14_)) goto LA15_;
								T14_ = !((((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(32)) || ((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(9)) || ((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(11)) || ((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(13)) || ((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(10)) || ((NU8)(s__qSCM8aqP40kH4LuU7R60zQ->data[lastX60gensym239202_])) == ((NU8)(12))));
								LA15_: ;
								if (!T14_) goto LA13;
								lastX60gensym239202_ += ((NI) 1);
							} LA13: ;
						}
						{
							if (!(firstX60gensym239204_ <= (NI)(lastX60gensym239202_ - ((NI) 1)))) goto LA18_;
							{
								if (!(splitsX60gensym239203_ == ((NI) 0))) goto LA22_;
								lastX60gensym239202_ = (s__qSCM8aqP40kH4LuU7R60zQ ? s__qSCM8aqP40kH4LuU7R60zQ->Sup.len : 0);
							}
							LA22_: ;
							asgnRef((void**) (&x__09c8FG3TrXEwdZgDRXfLyxQ), substr__2yh9cer0ymNRHlOOg8P7IuA(s__qSCM8aqP40kH4LuU7R60zQ, firstX60gensym239204_, (NI)(lastX60gensym239202_ - ((NI) 1))));
							eval__H9a0iJ2gNUDNbCuLaRMzjFg(x__09c8FG3TrXEwdZgDRXfLyxQ, &stk__QYIAznlg6OBQ9cngj2iKIKg);
							{
								if (!(splitsX60gensym239203_ == ((NI) 0))) goto LA26_;
								goto LA6;
							}
							LA26_: ;
							splitsX60gensym239203_ -= ((NI) 1);
						}
						LA18_: ;
					} LA7: ;
				} LA6: ;
			}
			asgnRef((void**) (&stack__WUzu4OqLF0ucQmLm6SAU1Q), stk__QYIAznlg6OBQ9cngj2iKIKg);
			{
				while (1) {
					tyArray__nHXaesL0DJZHyVS07ARPRA T30_;
					if (!!((stack__WUzu4OqLF0ucQmLm6SAU1Q == NIM_NIL))) goto LA29;
					nimZeroMem((void*)T30_, sizeof(tyArray__nHXaesL0DJZHyVS07ARPRA));
					T30_[0] = nimFloatToStr((*stack__WUzu4OqLF0ucQmLm6SAU1Q).car);
					echoBinSafe(T30_, 1);
					asgnRef((void**) (&stack__WUzu4OqLF0ucQmLm6SAU1Q), (*stack__WUzu4OqLF0ucQmLm6SAU1Q).cdr);
				} LA29: ;
			}
			write__PArlm09bKklm2BLsCg6YtaA(stdout, ((NimStringDesc*) &TM__wPKAWGtAWrqQnBPQNPm9a0w_6));
		} LA2: ;
	}
}
}

N_LIB_PRIVATE N_NIMCALL(void, rdwrtDatInit000)(void) {
static TNimNode* TM__wPKAWGtAWrqQnBPQNPm9a0w_3_2[2];
static TNimNode TM__wPKAWGtAWrqQnBPQNPm9a0w_0[3];
NTI__2EuCh56MftNTce0T9cBYhSg_.size = sizeof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg);
NTI__2EuCh56MftNTce0T9cBYhSg_.kind = 17;
NTI__2EuCh56MftNTce0T9cBYhSg_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
TM__wPKAWGtAWrqQnBPQNPm9a0w_3_2[0] = &TM__wPKAWGtAWrqQnBPQNPm9a0w_0[1];
TM__wPKAWGtAWrqQnBPQNPm9a0w_0[1].kind = 1;
TM__wPKAWGtAWrqQnBPQNPm9a0w_0[1].offset = offsetof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg, car);
TM__wPKAWGtAWrqQnBPQNPm9a0w_0[1].typ = (&NTI__w9bl9a1ul9ctRJWiMl9cNnIMvg_);
TM__wPKAWGtAWrqQnBPQNPm9a0w_0[1].name = "car";
TM__wPKAWGtAWrqQnBPQNPm9a0w_3_2[1] = &TM__wPKAWGtAWrqQnBPQNPm9a0w_0[2];
TM__wPKAWGtAWrqQnBPQNPm9a0w_0[2].kind = 1;
TM__wPKAWGtAWrqQnBPQNPm9a0w_0[2].offset = offsetof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg, cdr);
TM__wPKAWGtAWrqQnBPQNPm9a0w_0[2].typ = (&NTI__qjTQYXUZFS9cixpS6xTktdQ_);
TM__wPKAWGtAWrqQnBPQNPm9a0w_0[2].name = "cdr";
TM__wPKAWGtAWrqQnBPQNPm9a0w_0[0].len = 2; TM__wPKAWGtAWrqQnBPQNPm9a0w_0[0].kind = 2; TM__wPKAWGtAWrqQnBPQNPm9a0w_0[0].sons = &TM__wPKAWGtAWrqQnBPQNPm9a0w_3_2[0];
NTI__2EuCh56MftNTce0T9cBYhSg_.node = &TM__wPKAWGtAWrqQnBPQNPm9a0w_0[0];
NTI__qjTQYXUZFS9cixpS6xTktdQ_.size = sizeof(tyObject_LLcolonObjectType___2EuCh56MftNTce0T9cBYhSg*);
NTI__qjTQYXUZFS9cixpS6xTktdQ_.kind = 22;
NTI__qjTQYXUZFS9cixpS6xTktdQ_.base = (&NTI__2EuCh56MftNTce0T9cBYhSg_);
NTI__qjTQYXUZFS9cixpS6xTktdQ_.marker = Marker_tyRef__qjTQYXUZFS9cixpS6xTktdQ;
}

