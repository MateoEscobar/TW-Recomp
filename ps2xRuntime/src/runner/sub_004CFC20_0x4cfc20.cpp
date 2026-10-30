#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CFC20
// Address: 0x4cfc20 - 0x4cffd0
void sub_004CFC20_0x4cfc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CFC20_0x4cfc20");
#endif

    switch (ctx->pc) {
        case 0x4cfd00u: goto label_4cfd00;
        default: break;
    }

    ctx->pc = 0x4cfc20u;

    // 0x4cfc20: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4cfc20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cfc24: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cfc24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cfc28: 0x2401fff8  addiu       $at, $zero, -0x8
    ctx->pc = 0x4cfc28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x4cfc2c: 0x3a1e824  and         $sp, $sp, $at
    ctx->pc = 0x4cfc2cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 29) & GPR_U64(ctx, 1));
    // 0x4cfc30: 0xffb40000  sd          $s4, 0x0($sp)
    ctx->pc = 0x4cfc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 20));
    // 0x4cfc34: 0xffb30008  sd          $s3, 0x8($sp)
    ctx->pc = 0x4cfc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 19));
    // 0x4cfc38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cfc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cfc3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4cfc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4cfc40: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4cfc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4cfc44: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x4cfc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x4cfc48: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cfc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cfc4c: 0x8c422868  lw          $v0, 0x2868($v0)
    ctx->pc = 0x4cfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532868u));
    // 0x4cfc50: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4cfc50u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
    // 0x4cfc54: 0x8e94286c  lw          $s4, 0x286C($s4)
    ctx->pc = 0x4cfc54u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x53286Cu));
    // 0x4cfc58: 0xcc400000  pref        0x00, 0x0($v0)
    ctx->pc = 0x4cfc58u;
    // PREF instruction (ignored)
    // 0x4cfc5c: 0xce800000  pref        0x00, 0x0($s4)
    ctx->pc = 0x4cfc5cu;
    // PREF instruction (ignored)
    // 0x4cfc60: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4cfc60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x4cfc64: 0x8e522870  lw          $s2, 0x2870($s2)
    ctx->pc = 0x4cfc64u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x532870u));
    // 0x4cfc68: 0x3c130053  lui         $s3, 0x53
    ctx->pc = 0x4cfc68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
    // 0x4cfc6c: 0x8e732874  lw          $s3, 0x2874($s3)
    ctx->pc = 0x4cfc6cu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x532874u));
    // 0x4cfc70: 0xce400000  pref        0x00, 0x0($s2)
    ctx->pc = 0x4cfc70u;
    // PREF instruction (ignored)
    // 0x4cfc74: 0xce600000  pref        0x00, 0x0($s3)
    ctx->pc = 0x4cfc74u;
    // PREF instruction (ignored)
    // 0x4cfc78: 0x3c0c0059  lui         $t4, 0x59
    ctx->pc = 0x4cfc78u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)89 << 16));
    // 0x4cfc7c: 0xdd8c2158  ld          $t4, 0x2158($t4)
    ctx->pc = 0x4cfc7cu;
    SET_GPR_U64(ctx, 12, FAST_READ64(0x592158u));
    // 0x4cfc80: 0x718c6488  pextlw      $t4, $t4, $t4
    ctx->pc = 0x4cfc80u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x4cfc84: 0x3c0d0059  lui         $t5, 0x59
    ctx->pc = 0x4cfc84u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)89 << 16));
    // 0x4cfc88: 0xddad2160  ld          $t5, 0x2160($t5)
    ctx->pc = 0x4cfc88u;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x592160u));
    // 0x4cfc8c: 0x71ad6b89  pcpyld      $t5, $t5, $t5
    ctx->pc = 0x4cfc8cu;
    SET_GPR_VEC(ctx, 13, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 13)));
    // 0x4cfc90: 0x3c190059  lui         $t9, 0x59
    ctx->pc = 0x4cfc90u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)89 << 16));
    // 0x4cfc94: 0xdf392140  ld          $t9, 0x2140($t9)
    ctx->pc = 0x4cfc94u;
    SET_GPR_U64(ctx, 25, FAST_READ64(0x592140u));
    // 0x4cfc98: 0x7339cb89  pcpyld      $t9, $t9, $t9
    ctx->pc = 0x4cfc98u;
    SET_GPR_VEC(ctx, 25, PS2_PCPYLD(GPR_VEC(ctx, 25), GPR_VEC(ctx, 25)));
    // 0x4cfc9c: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4cfc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4cfca0: 0xdcc62150  ld          $a2, 0x2150($a2)
    ctx->pc = 0x4cfca0u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x592150u));
    // 0x4cfca4: 0x70c63389  pcpyld      $a2, $a2, $a2
    ctx->pc = 0x4cfca4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x4cfca8: 0x3c180059  lui         $t8, 0x59
    ctx->pc = 0x4cfca8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)89 << 16));
    // 0x4cfcac: 0xdf182148  ld          $t8, 0x2148($t8)
    ctx->pc = 0x4cfcacu;
    SET_GPR_U64(ctx, 24, FAST_READ64(0x592148u));
    // 0x4cfcb0: 0x7318c588  pextlh      $t8, $t8, $t8
    ctx->pc = 0x4cfcb0u;
    SET_GPR_VEC(ctx, 24, PS2_PEXTLH(GPR_VEC(ctx, 24), GPR_VEC(ctx, 24)));
    // 0x4cfcb4: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x4cfcb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x4cfcb8: 0x8e102860  lw          $s0, 0x2860($s0)
    ctx->pc = 0x4cfcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532860u));
    // 0x4cfcbc: 0x3c110053  lui         $s1, 0x53
    ctx->pc = 0x4cfcbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)83 << 16));
    // 0x4cfcc0: 0x8e312864  lw          $s1, 0x2864($s1)
    ctx->pc = 0x4cfcc0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x532864u));
    // 0x4cfcc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4cfcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4cfcc8: 0x18800078  blez        $a0, . + 4 + (0x78 << 2)
    ctx->pc = 0x4CFCC8u;
    {
        const bool branch_taken_0x4cfcc8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x4cfcc8) {
            ctx->pc = 0x4CFEACu;
            goto label_4cfeac;
        }
    }
    ctx->pc = 0x4CFCD0u;
    // 0x4cfcd0: 0x9e480000  lwu         $t0, 0x0($s2)
    ctx->pc = 0x4cfcd0u;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cfcd4: 0x9e690000  lwu         $t1, 0x0($s3)
    ctx->pc = 0x4cfcd4u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cfcd8: 0x71284688  pextlb      $t0, $t1, $t0
    ctx->pc = 0x4cfcd8u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4cfcdc: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x4cfcdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cfce0: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x4cfce0u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x4cfce4: 0xde8b0000  ld          $t3, 0x0($s4)
    ctx->pc = 0x4cfce4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cfce8: 0x71087ba9  pcpyud      $t7, $t0, $t0
    ctx->pc = 0x4cfce8u;
    SET_GPR_VEC(ctx, 15, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cfcec: 0x71084389  pcpyld      $t0, $t0, $t0
    ctx->pc = 0x4cfcecu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cfcf0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4cfcf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4cfcf4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4cfcf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4cfcf8: 0x8133f53  j           func_4CFD4C
    ctx->pc = 0x4CFCF8u;
    ctx->pc = 0x4CFCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFCF8u;
    // 0x4cfcfc: 0x710d4148  psubh       $t0, $t0, $t5 (Delay Slot)
    SET_GPR_VEC(ctx, 8, PS2_PSUBH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CFD4Cu;
    goto label_4cfd4c;
    ctx->pc = 0x4CFD00u;
label_4cfd00:
    // 0x4cfd00: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cfd00u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cfd04: 0x9e480000  lwu         $t0, 0x0($s2)
    ctx->pc = 0x4cfd04u;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cfd08: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cfd08u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cfd0c: 0x9e690000  lwu         $t1, 0x0($s3)
    ctx->pc = 0x4cfd0cu;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cfd10: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4cfd10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4cfd14: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4cfd14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4cfd18: 0x71284688  pextlb      $t0, $t1, $t0
    ctx->pc = 0x4cfd18u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4cfd1c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x4cfd1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cfd20: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x4cfd20u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x4cfd24: 0xde8b0000  ld          $t3, 0x0($s4)
    ctx->pc = 0x4cfd24u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cfd28: 0x71087ba9  pcpyud      $t7, $t0, $t0
    ctx->pc = 0x4cfd28u;
    SET_GPR_VEC(ctx, 15, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cfd2c: 0x70073fc8  ppac5       $a3, $a3
    ctx->pc = 0x4cfd2cu;
    { __m128i rt = GPR_VEC(ctx, 7); 
   __m128i m1 = _mm_set1_epi32(0x0000001F); 
   __m128i m2 = _mm_set1_epi32(0x000003E0); 
   __m128i m3 = _mm_set1_epi32(0x00007C00); 
   __m128i m4 = _mm_set1_epi32(0x00008000); 
   __m128i a1 = _mm_and_si128(_mm_srli_epi32(rt, 3), m1); 
   __m128i a2 = _mm_and_si128(_mm_srli_epi32(rt, 6), m2); 
   __m128i a3 = _mm_and_si128(_mm_srli_epi32(rt, 9), m3); 
   __m128i a4 = _mm_and_si128(_mm_srli_epi32(rt, 16), m4); 
   SET_GPR_VEC(ctx, 7, _mm_or_si128(_mm_or_si128(a1, a2), _mm_or_si128(a3, a4))); }
    // 0x4cfd30: 0x700e77c8  ppac5       $t6, $t6
    ctx->pc = 0x4cfd30u;
    { __m128i rt = GPR_VEC(ctx, 14); 
   __m128i m1 = _mm_set1_epi32(0x0000001F); 
   __m128i m2 = _mm_set1_epi32(0x000003E0); 
   __m128i m3 = _mm_set1_epi32(0x00007C00); 
   __m128i m4 = _mm_set1_epi32(0x00008000); 
   __m128i a1 = _mm_and_si128(_mm_srli_epi32(rt, 3), m1); 
   __m128i a2 = _mm_and_si128(_mm_srli_epi32(rt, 6), m2); 
   __m128i a3 = _mm_and_si128(_mm_srli_epi32(rt, 9), m3); 
   __m128i a4 = _mm_and_si128(_mm_srli_epi32(rt, 16), m4); 
   SET_GPR_VEC(ctx, 14, _mm_or_si128(_mm_or_si128(a1, a2), _mm_or_si128(a3, a4))); }
    // 0x4cfd34: 0x70073dc8  ppach       $a3, $zero, $a3
    ctx->pc = 0x4cfd34u;
    SET_GPR_VEC(ctx, 7, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x4cfd38: 0x700e75c8  ppach       $t6, $zero, $t6
    ctx->pc = 0x4cfd38u;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 14)));
    // 0x4cfd3c: 0x71084389  pcpyld      $t0, $t0, $t0
    ctx->pc = 0x4cfd3cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cfd40: 0xfe27fff8  sd          $a3, -0x8($s1)
    ctx->pc = 0x4cfd40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U64(ctx, 7));
    // 0x4cfd44: 0x710d4148  psubh       $t0, $t0, $t5
    ctx->pc = 0x4cfd44u;
    SET_GPR_VEC(ctx, 8, PS2_PSUBH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x4cfd48: 0xfe0efff8  sd          $t6, -0x8($s0)
    ctx->pc = 0x4cfd48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U64(ctx, 14));
label_4cfd4c:
    // 0x4cfd4c: 0x710c4709  pmulth      $t0, $t0, $t4
    ctx->pc = 0x4cfd4cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 8, result); }
    // 0x4cfd50: 0x71652e88  pextlb      $a1, $t3, $a1
    ctx->pc = 0x4cfd50u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 5)));
    // 0x4cfd54: 0xce800040  pref        0x00, 0x40($s4)
    ctx->pc = 0x4cfd54u;
    // PREF instruction (ignored)
    // 0x4cfd58: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x4cfd58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4cfd5c: 0x70004870  pmfhl.uw    $t1
    ctx->pc = 0x4cfd5cu;
    SET_GPR_VEC(ctx, 9, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cfd60: 0xcc400040  pref        0x00, 0x40($v0)
    ctx->pc = 0x4cfd60u;
    // PREF instruction (ignored)
    // 0x4cfd64: 0x7008437f  psraw       $t0, $t0, 13
    ctx->pc = 0x4cfd64u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi32(GPR_VEC(ctx, 8), 13));
    // 0x4cfd68: 0x70094b7f  psraw       $t1, $t1, 13
    ctx->pc = 0x4cfd68u;
    SET_GPR_VEC(ctx, 9, _mm_srai_epi32(GPR_VEC(ctx, 9), 13));
    // 0x4cfd6c: 0x710842a9  pinteh      $t0, $t0, $t0
    ctx->pc = 0x4cfd6cu;
    SET_GPR_VEC(ctx, 8, PS2_PINTEH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cfd70: 0x71294aa9  pinteh      $t1, $t1, $t1
    ctx->pc = 0x4cfd70u;
    SET_GPR_VEC(ctx, 9, PS2_PINTEH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfd74: 0x70b92e68  psubub      $a1, $a1, $t9
    ctx->pc = 0x4cfd74u;
    SET_GPR_VEC(ctx, 5, _mm_subs_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 25)));
    // 0x4cfd78: 0x70051ea8  pextub      $v1, $zero, $a1
    ctx->pc = 0x4cfd78u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x4cfd7c: 0x70052e88  pextlb      $a1, $zero, $a1
    ctx->pc = 0x4cfd7cu;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x4cfd80: 0xce400020  pref        0x00, 0x20($s2)
    ctx->pc = 0x4cfd80u;
    // PREF instruction (ignored)
    // 0x4cfd84: 0x73052f09  pmulth      $a1, $t8, $a1
    ctx->pc = 0x4cfd84u;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 24), GPR_VEC(ctx, 5)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 5, result); }
    // 0x4cfd88: 0x712953a9  pcpyud      $t2, $t1, $t1
    ctx->pc = 0x4cfd88u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfd8c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4cfd8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4cfd90: 0x71094908  paddh       $t1, $t0, $t1
    ctx->pc = 0x4cfd90u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x4cfd94: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x4cfd94u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfd98: 0x710843a9  pcpyud      $t0, $t0, $t0
    ctx->pc = 0x4cfd98u;
    SET_GPR_VEC(ctx, 8, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cfd9c: 0x70007070  pmfhl.uw    $t6
    ctx->pc = 0x4cfd9cu;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cfda0: 0x70052bbe  psrlw       $a1, $a1, 14
    ctx->pc = 0x4cfda0u;
    SET_GPR_VEC(ctx, 5, _mm_srli_epi32(GPR_VEC(ctx, 5), 14));
    // 0x4cfda4: 0x700e73be  psrlw       $t6, $t6, 14
    ctx->pc = 0x4cfda4u;
    SET_GPR_VEC(ctx, 14, _mm_srli_epi32(GPR_VEC(ctx, 14), 14));
    // 0x4cfda8: 0x71c575c8  ppach       $t6, $t6, $a1
    ctx->pc = 0x4cfda8u;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 5)));
    // 0x4cfdac: 0x71c84108  paddh       $t0, $t6, $t0
    ctx->pc = 0x4cfdacu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 8)));
    // 0x4cfdb0: 0x71c94908  paddh       $t1, $t6, $t1
    ctx->pc = 0x4cfdb0u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 9)));
    // 0x4cfdb4: 0x71ca7108  paddh       $t6, $t6, $t2
    ctx->pc = 0x4cfdb4u;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 10)));
    // 0x4cfdb8: 0xce600020  pref        0x00, 0x20($s3)
    ctx->pc = 0x4cfdb8u;
    // PREF instruction (ignored)
    // 0x4cfdbc: 0x70c84508  paddsh      $t0, $a2, $t0
    ctx->pc = 0x4cfdbcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x4cfdc0: 0x70c94d08  paddsh      $t1, $a2, $t1
    ctx->pc = 0x4cfdc0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x4cfdc4: 0x70ce7508  paddsh      $t6, $a2, $t6
    ctx->pc = 0x4cfdc4u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 14)));
    // 0x4cfdc8: 0x71064568  psubuh      $t0, $t0, $a2
    ctx->pc = 0x4cfdc8u;
    SET_GPR_VEC(ctx, 8, _mm_sub_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x4cfdcc: 0x71264d68  psubuh      $t1, $t1, $a2
    ctx->pc = 0x4cfdccu;
    SET_GPR_VEC(ctx, 9, _mm_sub_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x4cfdd0: 0x71c67568  psubuh      $t6, $t6, $a2
    ctx->pc = 0x4cfdd0u;
    SET_GPR_VEC(ctx, 14, _mm_sub_epi16(GPR_VEC(ctx, 14), GPR_VEC(ctx, 6)));
    // 0x4cfdd4: 0x71203ea8  pextub      $a3, $t1, $zero
    ctx->pc = 0x4cfdd4u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cfdd8: 0x710e55a8  pextuh      $t2, $t0, $t6
    ctx->pc = 0x4cfdd8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cfddc: 0x71204e88  pextlb      $t1, $t1, $zero
    ctx->pc = 0x4cfddcu;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cfde0: 0x710e7588  pextlh      $t6, $t0, $t6
    ctx->pc = 0x4cfde0u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cfde4: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cfde4u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cfde8: 0x71ed7948  psubh       $t7, $t7, $t5
    ctx->pc = 0x4cfde8u;
    SET_GPR_VEC(ctx, 15, PS2_PSUBH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x4cfdec: 0x71ec7f09  pmulth      $t7, $t7, $t4
    ctx->pc = 0x4cfdecu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 15), GPR_VEC(ctx, 12)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 15, result); }
    // 0x4cfdf0: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cfdf0u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cfdf4: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x4cfdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x4cfdf8: 0x70004870  pmfhl.uw    $t1
    ctx->pc = 0x4cfdf8u;
    SET_GPR_VEC(ctx, 9, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cfdfc: 0x700f7b7f  psraw       $t7, $t7, 13
    ctx->pc = 0x4cfdfcu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi32(GPR_VEC(ctx, 15), 13));
    // 0x4cfe00: 0x70094b7f  psraw       $t1, $t1, 13
    ctx->pc = 0x4cfe00u;
    SET_GPR_VEC(ctx, 9, _mm_srai_epi32(GPR_VEC(ctx, 9), 13));
    // 0x4cfe04: 0x71ef7aa9  pinteh      $t7, $t7, $t7
    ctx->pc = 0x4cfe04u;
    SET_GPR_VEC(ctx, 15, PS2_PINTEH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 15)));
    // 0x4cfe08: 0x71294aa9  pinteh      $t1, $t1, $t1
    ctx->pc = 0x4cfe08u;
    SET_GPR_VEC(ctx, 9, PS2_PINTEH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfe0c: 0x73031f09  pmulth      $v1, $t8, $v1
    ctx->pc = 0x4cfe0cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 24), GPR_VEC(ctx, 3)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 3, result); }
    // 0x4cfe10: 0x712953a9  pcpyud      $t2, $t1, $t1
    ctx->pc = 0x4cfe10u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfe14: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4cfe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4cfe18: 0x70073fc8  ppac5       $a3, $a3
    ctx->pc = 0x4cfe18u;
    { __m128i rt = GPR_VEC(ctx, 7); 
   __m128i m1 = _mm_set1_epi32(0x0000001F); 
   __m128i m2 = _mm_set1_epi32(0x000003E0); 
   __m128i m3 = _mm_set1_epi32(0x00007C00); 
   __m128i m4 = _mm_set1_epi32(0x00008000); 
   __m128i a1 = _mm_and_si128(_mm_srli_epi32(rt, 3), m1); 
   __m128i a2 = _mm_and_si128(_mm_srli_epi32(rt, 6), m2); 
   __m128i a3 = _mm_and_si128(_mm_srli_epi32(rt, 9), m3); 
   __m128i a4 = _mm_and_si128(_mm_srli_epi32(rt, 16), m4); 
   SET_GPR_VEC(ctx, 7, _mm_or_si128(_mm_or_si128(a1, a2), _mm_or_si128(a3, a4))); }
    // 0x4cfe1c: 0x700e77c8  ppac5       $t6, $t6
    ctx->pc = 0x4cfe1cu;
    { __m128i rt = GPR_VEC(ctx, 14); 
   __m128i m1 = _mm_set1_epi32(0x0000001F); 
   __m128i m2 = _mm_set1_epi32(0x000003E0); 
   __m128i m3 = _mm_set1_epi32(0x00007C00); 
   __m128i m4 = _mm_set1_epi32(0x00008000); 
   __m128i a1 = _mm_and_si128(_mm_srli_epi32(rt, 3), m1); 
   __m128i a2 = _mm_and_si128(_mm_srli_epi32(rt, 6), m2); 
   __m128i a3 = _mm_and_si128(_mm_srli_epi32(rt, 9), m3); 
   __m128i a4 = _mm_and_si128(_mm_srli_epi32(rt, 16), m4); 
   SET_GPR_VEC(ctx, 14, _mm_or_si128(_mm_or_si128(a1, a2), _mm_or_si128(a3, a4))); }
    // 0x4cfe20: 0x70073dc8  ppach       $a3, $zero, $a3
    ctx->pc = 0x4cfe20u;
    SET_GPR_VEC(ctx, 7, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x4cfe24: 0x700e75c8  ppach       $t6, $zero, $t6
    ctx->pc = 0x4cfe24u;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 14)));
    // 0x4cfe28: 0x71e94908  paddh       $t1, $t7, $t1
    ctx->pc = 0x4cfe28u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 9)));
    // 0x4cfe2c: 0xfe27fff0  sd          $a3, -0x10($s1)
    ctx->pc = 0x4cfe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4294967280), GPR_U64(ctx, 7));
    // 0x4cfe30: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x4cfe30u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfe34: 0xfe0efff0  sd          $t6, -0x10($s0)
    ctx->pc = 0x4cfe34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_U64(ctx, 14));
    // 0x4cfe38: 0x71ef7ba9  pcpyud      $t7, $t7, $t7
    ctx->pc = 0x4cfe38u;
    SET_GPR_VEC(ctx, 15, _mm_unpackhi_epi64(GPR_VEC(ctx, 15), GPR_VEC(ctx, 15)));
    // 0x4cfe3c: 0x70007070  pmfhl.uw    $t6
    ctx->pc = 0x4cfe3cu;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cfe40: 0x70031bbe  psrlw       $v1, $v1, 14
    ctx->pc = 0x4cfe40u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi32(GPR_VEC(ctx, 3), 14));
    // 0x4cfe44: 0x700e73be  psrlw       $t6, $t6, 14
    ctx->pc = 0x4cfe44u;
    SET_GPR_VEC(ctx, 14, _mm_srli_epi32(GPR_VEC(ctx, 14), 14));
    // 0x4cfe48: 0x71c375c8  ppach       $t6, $t6, $v1
    ctx->pc = 0x4cfe48u;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x4cfe4c: 0x71cf7908  paddh       $t7, $t6, $t7
    ctx->pc = 0x4cfe4cu;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 15)));
    // 0x4cfe50: 0x71c94908  paddh       $t1, $t6, $t1
    ctx->pc = 0x4cfe50u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 9)));
    // 0x4cfe54: 0x71ca7108  paddh       $t6, $t6, $t2
    ctx->pc = 0x4cfe54u;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 10)));
    // 0x4cfe58: 0x70cf7d08  paddsh      $t7, $a2, $t7
    ctx->pc = 0x4cfe58u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 15)));
    // 0x4cfe5c: 0x70c94d08  paddsh      $t1, $a2, $t1
    ctx->pc = 0x4cfe5cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x4cfe60: 0x70ce7508  paddsh      $t6, $a2, $t6
    ctx->pc = 0x4cfe60u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 14)));
    // 0x4cfe64: 0x71e67d68  psubuh      $t7, $t7, $a2
    ctx->pc = 0x4cfe64u;
    SET_GPR_VEC(ctx, 15, _mm_sub_epi16(GPR_VEC(ctx, 15), GPR_VEC(ctx, 6)));
    // 0x4cfe68: 0x71264d68  psubuh      $t1, $t1, $a2
    ctx->pc = 0x4cfe68u;
    SET_GPR_VEC(ctx, 9, _mm_sub_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x4cfe6c: 0x71c67568  psubuh      $t6, $t6, $a2
    ctx->pc = 0x4cfe6cu;
    SET_GPR_VEC(ctx, 14, _mm_sub_epi16(GPR_VEC(ctx, 14), GPR_VEC(ctx, 6)));
    // 0x4cfe70: 0x71203ea8  pextub      $a3, $t1, $zero
    ctx->pc = 0x4cfe70u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cfe74: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x4cfe74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x4cfe78: 0x71ee55a8  pextuh      $t2, $t7, $t6
    ctx->pc = 0x4cfe78u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x4cfe7c: 0x71204e88  pextlb      $t1, $t1, $zero
    ctx->pc = 0x4cfe7cu;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cfe80: 0x1c80ff9f  bgtz        $a0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x4CFE80u;
    {
        const bool branch_taken_0x4cfe80 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x4CFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFE80u;
        // 0x4cfe84: 0x71ee7588  pextlh      $t6, $t7, $t6 (Delay Slot)
        SET_GPR_VEC(ctx, 14, PS2_PEXTLH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfe80) {
            ctx->pc = 0x4CFD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cfd00;
        }
    }
    ctx->pc = 0x4CFE88u;
    // 0x4cfe88: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cfe88u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cfe8c: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cfe8cu;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cfe90: 0x70073fc8  ppac5       $a3, $a3
    ctx->pc = 0x4cfe90u;
    { __m128i rt = GPR_VEC(ctx, 7); 
   __m128i m1 = _mm_set1_epi32(0x0000001F); 
   __m128i m2 = _mm_set1_epi32(0x000003E0); 
   __m128i m3 = _mm_set1_epi32(0x00007C00); 
   __m128i m4 = _mm_set1_epi32(0x00008000); 
   __m128i a1 = _mm_and_si128(_mm_srli_epi32(rt, 3), m1); 
   __m128i a2 = _mm_and_si128(_mm_srli_epi32(rt, 6), m2); 
   __m128i a3 = _mm_and_si128(_mm_srli_epi32(rt, 9), m3); 
   __m128i a4 = _mm_and_si128(_mm_srli_epi32(rt, 16), m4); 
   SET_GPR_VEC(ctx, 7, _mm_or_si128(_mm_or_si128(a1, a2), _mm_or_si128(a3, a4))); }
    // 0x4cfe94: 0x700e77c8  ppac5       $t6, $t6
    ctx->pc = 0x4cfe94u;
    { __m128i rt = GPR_VEC(ctx, 14); 
   __m128i m1 = _mm_set1_epi32(0x0000001F); 
   __m128i m2 = _mm_set1_epi32(0x000003E0); 
   __m128i m3 = _mm_set1_epi32(0x00007C00); 
   __m128i m4 = _mm_set1_epi32(0x00008000); 
   __m128i a1 = _mm_and_si128(_mm_srli_epi32(rt, 3), m1); 
   __m128i a2 = _mm_and_si128(_mm_srli_epi32(rt, 6), m2); 
   __m128i a3 = _mm_and_si128(_mm_srli_epi32(rt, 9), m3); 
   __m128i a4 = _mm_and_si128(_mm_srli_epi32(rt, 16), m4); 
   SET_GPR_VEC(ctx, 14, _mm_or_si128(_mm_or_si128(a1, a2), _mm_or_si128(a3, a4))); }
    // 0x4cfe98: 0x70073dc8  ppach       $a3, $zero, $a3
    ctx->pc = 0x4cfe98u;
    SET_GPR_VEC(ctx, 7, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x4cfe9c: 0x700e75c8  ppach       $t6, $zero, $t6
    ctx->pc = 0x4cfe9cu;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 14)));
    // 0x4cfea0: 0xfe27fff8  sd          $a3, -0x8($s1)
    ctx->pc = 0x4cfea0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U64(ctx, 7));
    // 0x4cfea4: 0x14800036  bnez        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x4CFEA4u;
    {
        const bool branch_taken_0x4cfea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFEA4u;
        // 0x4cfea8: 0xfe0efff8  sd          $t6, -0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfea4) {
            ctx->pc = 0x4CFF80u;
            goto label_4cff80;
        }
    }
    ctx->pc = 0x4CFEACu;
label_4cfeac:
    // 0x4cfeac: 0x96480000  lhu         $t0, 0x0($s2)
    ctx->pc = 0x4cfeacu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cfeb0: 0x96690000  lhu         $t1, 0x0($s3)
    ctx->pc = 0x4cfeb0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cfeb4: 0x71284688  pextlb      $t0, $t1, $t0
    ctx->pc = 0x4cfeb4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4cfeb8: 0x9c450000  lwu         $a1, 0x0($v0)
    ctx->pc = 0x4cfeb8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cfebc: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x4cfebcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x4cfec0: 0x9e8b0000  lwu         $t3, 0x0($s4)
    ctx->pc = 0x4cfec0u;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cfec4: 0x71084389  pcpyld      $t0, $t0, $t0
    ctx->pc = 0x4cfec4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cfec8: 0x710d4148  psubh       $t0, $t0, $t5
    ctx->pc = 0x4cfec8u;
    SET_GPR_VEC(ctx, 8, PS2_PSUBH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x4cfecc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x4cfeccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x4cfed0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x4cfed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x4cfed4: 0x710c4709  pmulth      $t0, $t0, $t4
    ctx->pc = 0x4cfed4u;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 8, result); }
    // 0x4cfed8: 0x71652e88  pextlb      $a1, $t3, $a1
    ctx->pc = 0x4cfed8u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 5)));
    // 0x4cfedc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4cfedcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4cfee0: 0x70004870  pmfhl.uw    $t1
    ctx->pc = 0x4cfee0u;
    SET_GPR_VEC(ctx, 9, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cfee4: 0x7008437f  psraw       $t0, $t0, 13
    ctx->pc = 0x4cfee4u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi32(GPR_VEC(ctx, 8), 13));
    // 0x4cfee8: 0x70094b7f  psraw       $t1, $t1, 13
    ctx->pc = 0x4cfee8u;
    SET_GPR_VEC(ctx, 9, _mm_srai_epi32(GPR_VEC(ctx, 9), 13));
    // 0x4cfeec: 0x710842a9  pinteh      $t0, $t0, $t0
    ctx->pc = 0x4cfeecu;
    SET_GPR_VEC(ctx, 8, PS2_PINTEH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cfef0: 0x71294aa9  pinteh      $t1, $t1, $t1
    ctx->pc = 0x4cfef0u;
    SET_GPR_VEC(ctx, 9, PS2_PINTEH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfef4: 0x70b92e68  psubub      $a1, $a1, $t9
    ctx->pc = 0x4cfef4u;
    SET_GPR_VEC(ctx, 5, _mm_subs_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 25)));
    // 0x4cfef8: 0x70052e88  pextlb      $a1, $zero, $a1
    ctx->pc = 0x4cfef8u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x4cfefc: 0x73052f09  pmulth      $a1, $t8, $a1
    ctx->pc = 0x4cfefcu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 24), GPR_VEC(ctx, 5)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 5, result); }
    // 0x4cff00: 0x712953a9  pcpyud      $t2, $t1, $t1
    ctx->pc = 0x4cff00u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cff04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4cff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4cff08: 0x71094908  paddh       $t1, $t0, $t1
    ctx->pc = 0x4cff08u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x4cff0c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x4cff0cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cff10: 0x710843a9  pcpyud      $t0, $t0, $t0
    ctx->pc = 0x4cff10u;
    SET_GPR_VEC(ctx, 8, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cff14: 0x70007070  pmfhl.uw    $t6
    ctx->pc = 0x4cff14u;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cff18: 0x70052bbe  psrlw       $a1, $a1, 14
    ctx->pc = 0x4cff18u;
    SET_GPR_VEC(ctx, 5, _mm_srli_epi32(GPR_VEC(ctx, 5), 14));
    // 0x4cff1c: 0x700e73be  psrlw       $t6, $t6, 14
    ctx->pc = 0x4cff1cu;
    SET_GPR_VEC(ctx, 14, _mm_srli_epi32(GPR_VEC(ctx, 14), 14));
    // 0x4cff20: 0x71c575c8  ppach       $t6, $t6, $a1
    ctx->pc = 0x4cff20u;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 5)));
    // 0x4cff24: 0x71c84108  paddh       $t0, $t6, $t0
    ctx->pc = 0x4cff24u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 8)));
    // 0x4cff28: 0x71c94908  paddh       $t1, $t6, $t1
    ctx->pc = 0x4cff28u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 9)));
    // 0x4cff2c: 0x71ca7108  paddh       $t6, $t6, $t2
    ctx->pc = 0x4cff2cu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 10)));
    // 0x4cff30: 0x70c84508  paddsh      $t0, $a2, $t0
    ctx->pc = 0x4cff30u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x4cff34: 0x70c94d08  paddsh      $t1, $a2, $t1
    ctx->pc = 0x4cff34u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x4cff38: 0x70ce7508  paddsh      $t6, $a2, $t6
    ctx->pc = 0x4cff38u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 14)));
    // 0x4cff3c: 0x71064568  psubuh      $t0, $t0, $a2
    ctx->pc = 0x4cff3cu;
    SET_GPR_VEC(ctx, 8, _mm_sub_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x4cff40: 0x71264d68  psubuh      $t1, $t1, $a2
    ctx->pc = 0x4cff40u;
    SET_GPR_VEC(ctx, 9, _mm_sub_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x4cff44: 0x71c67568  psubuh      $t6, $t6, $a2
    ctx->pc = 0x4cff44u;
    SET_GPR_VEC(ctx, 14, _mm_sub_epi16(GPR_VEC(ctx, 14), GPR_VEC(ctx, 6)));
    // 0x4cff48: 0x71203ea8  pextub      $a3, $t1, $zero
    ctx->pc = 0x4cff48u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cff4c: 0x710e55a8  pextuh      $t2, $t0, $t6
    ctx->pc = 0x4cff4cu;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cff50: 0x71204e88  pextlb      $t1, $t1, $zero
    ctx->pc = 0x4cff50u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cff54: 0x710e7588  pextlh      $t6, $t0, $t6
    ctx->pc = 0x4cff54u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cff58: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cff58u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cff5c: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cff5cu;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cff60: 0x70073fc8  ppac5       $a3, $a3
    ctx->pc = 0x4cff60u;
    { __m128i rt = GPR_VEC(ctx, 7); 
   __m128i m1 = _mm_set1_epi32(0x0000001F); 
   __m128i m2 = _mm_set1_epi32(0x000003E0); 
   __m128i m3 = _mm_set1_epi32(0x00007C00); 
   __m128i m4 = _mm_set1_epi32(0x00008000); 
   __m128i a1 = _mm_and_si128(_mm_srli_epi32(rt, 3), m1); 
   __m128i a2 = _mm_and_si128(_mm_srli_epi32(rt, 6), m2); 
   __m128i a3 = _mm_and_si128(_mm_srli_epi32(rt, 9), m3); 
   __m128i a4 = _mm_and_si128(_mm_srli_epi32(rt, 16), m4); 
   SET_GPR_VEC(ctx, 7, _mm_or_si128(_mm_or_si128(a1, a2), _mm_or_si128(a3, a4))); }
    // 0x4cff64: 0x700e77c8  ppac5       $t6, $t6
    ctx->pc = 0x4cff64u;
    { __m128i rt = GPR_VEC(ctx, 14); 
   __m128i m1 = _mm_set1_epi32(0x0000001F); 
   __m128i m2 = _mm_set1_epi32(0x000003E0); 
   __m128i m3 = _mm_set1_epi32(0x00007C00); 
   __m128i m4 = _mm_set1_epi32(0x00008000); 
   __m128i a1 = _mm_and_si128(_mm_srli_epi32(rt, 3), m1); 
   __m128i a2 = _mm_and_si128(_mm_srli_epi32(rt, 6), m2); 
   __m128i a3 = _mm_and_si128(_mm_srli_epi32(rt, 9), m3); 
   __m128i a4 = _mm_and_si128(_mm_srli_epi32(rt, 16), m4); 
   SET_GPR_VEC(ctx, 14, _mm_or_si128(_mm_or_si128(a1, a2), _mm_or_si128(a3, a4))); }
    // 0x4cff68: 0x70073dc8  ppach       $a3, $zero, $a3
    ctx->pc = 0x4cff68u;
    SET_GPR_VEC(ctx, 7, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x4cff6c: 0x700e75c8  ppach       $t6, $zero, $t6
    ctx->pc = 0x4cff6cu;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 14)));
    // 0x4cff70: 0xfe270000  sd          $a3, 0x0($s1)
    ctx->pc = 0x4cff70u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 7));
    // 0x4cff74: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x4cff74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4cff78: 0xfe0e0000  sd          $t6, 0x0($s0)
    ctx->pc = 0x4cff78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 14));
    // 0x4cff7c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4cff7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4cff80:
    // 0x4cff80: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cff80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cff84: 0xac302860  sw          $s0, 0x2860($at)
    ctx->pc = 0x4cff84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x532860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532860u, _value); } while (0);
    // 0x4cff88: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cff88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cff8c: 0xac222868  sw          $v0, 0x2868($at)
    ctx->pc = 0x4cff8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532868u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532868u, _value); } while (0);
    // 0x4cff90: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cff90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cff94: 0xac312864  sw          $s1, 0x2864($at)
    ctx->pc = 0x4cff94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x532864u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532864u, _value); } while (0);
    // 0x4cff98: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cff98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cff9c: 0xac34286c  sw          $s4, 0x286C($at)
    ctx->pc = 0x4cff9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x53286Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53286Cu, _value); } while (0);
    // 0x4cffa0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cffa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cffa4: 0xac322870  sw          $s2, 0x2870($at)
    ctx->pc = 0x4cffa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x532870u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532870u, _value); } while (0);
    // 0x4cffa8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cffac: 0xac332874  sw          $s3, 0x2874($at)
    ctx->pc = 0x4cffacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x532874u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532874u, _value); } while (0);
    // 0x4cffb0: 0xdfb40000  ld          $s4, 0x0($sp)
    ctx->pc = 0x4cffb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cffb4: 0xdfb30008  ld          $s3, 0x8($sp)
    ctx->pc = 0x4cffb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cffb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cffb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cffbc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4cffbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cffc0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4cffc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cffc4: 0xdfbd0028  ld          $sp, 0x28($sp)
    ctx->pc = 0x4cffc4u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cffc8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CFFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CFFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CFFD0u;
}
