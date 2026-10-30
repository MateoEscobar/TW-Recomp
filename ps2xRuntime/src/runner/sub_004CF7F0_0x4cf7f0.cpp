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

// Function: sub_004CF7F0
// Address: 0x4cf7f0 - 0x4cfc20
void sub_004CF7F0_0x4cf7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF7F0_0x4cf7f0");
#endif

    switch (ctx->pc) {
        case 0x4cf8f8u: goto label_4cf8f8;
        default: break;
    }

    ctx->pc = 0x4cf7f0u;

    // 0x4cf7f0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4cf7f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf7f4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4cf7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4cf7f8: 0x2401fff0  addiu       $at, $zero, -0x10
    ctx->pc = 0x4cf7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x4cf7fc: 0x3a1e824  and         $sp, $sp, $at
    ctx->pc = 0x4cf7fcu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 29) & GPR_U64(ctx, 1));
    // 0x4cf800: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x4cf800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x4cf804: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4cf804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x4cf808: 0xffb60020  sd          $s6, 0x20($sp)
    ctx->pc = 0x4cf808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 22));
    // 0x4cf80c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cf80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4cf810: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4cf810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4cf814: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4cf814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4cf818: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4cf818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4cf81c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x4cf81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x4cf820: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x4cf820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x4cf824: 0xffa80058  sd          $t0, 0x58($sp)
    ctx->pc = 0x4cf824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 8));
    // 0x4cf828: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4cf828u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x4cf82c: 0x8e522870  lw          $s2, 0x2870($s2)
    ctx->pc = 0x4cf82cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x532870u));
    // 0x4cf830: 0x3c130053  lui         $s3, 0x53
    ctx->pc = 0x4cf830u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
    // 0x4cf834: 0x8e732874  lw          $s3, 0x2874($s3)
    ctx->pc = 0x4cf834u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x532874u));
    // 0x4cf838: 0xce400000  pref        0x00, 0x0($s2)
    ctx->pc = 0x4cf838u;
    // PREF instruction (ignored)
    // 0x4cf83c: 0xce600000  pref        0x00, 0x0($s3)
    ctx->pc = 0x4cf83cu;
    // PREF instruction (ignored)
    // 0x4cf840: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cf840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cf844: 0x8c422868  lw          $v0, 0x2868($v0)
    ctx->pc = 0x4cf844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532868u));
    // 0x4cf848: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4cf848u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
    // 0x4cf84c: 0x8e94286c  lw          $s4, 0x286C($s4)
    ctx->pc = 0x4cf84cu;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x53286Cu));
    // 0x4cf850: 0xcc400000  pref        0x00, 0x0($v0)
    ctx->pc = 0x4cf850u;
    // PREF instruction (ignored)
    // 0x4cf854: 0xce800000  pref        0x00, 0x0($s4)
    ctx->pc = 0x4cf854u;
    // PREF instruction (ignored)
    // 0x4cf858: 0x3c150053  lui         $s5, 0x53
    ctx->pc = 0x4cf858u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
    // 0x4cf85c: 0x8eb52878  lw          $s5, 0x2878($s5)
    ctx->pc = 0x4cf85cu;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x532878u));
    // 0x4cf860: 0x3c160053  lui         $s6, 0x53
    ctx->pc = 0x4cf860u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)83 << 16));
    // 0x4cf864: 0x8ed6287c  lw          $s6, 0x287C($s6)
    ctx->pc = 0x4cf864u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x53287Cu));
    // 0x4cf868: 0xcea00000  pref        0x00, 0x0($s5)
    ctx->pc = 0x4cf868u;
    // PREF instruction (ignored)
    // 0x4cf86c: 0xcec00000  pref        0x00, 0x0($s6)
    ctx->pc = 0x4cf86cu;
    // PREF instruction (ignored)
    // 0x4cf870: 0x3c0c0059  lui         $t4, 0x59
    ctx->pc = 0x4cf870u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)89 << 16));
    // 0x4cf874: 0xdd8c2158  ld          $t4, 0x2158($t4)
    ctx->pc = 0x4cf874u;
    SET_GPR_U64(ctx, 12, FAST_READ64(0x592158u));
    // 0x4cf878: 0x718c6488  pextlw      $t4, $t4, $t4
    ctx->pc = 0x4cf878u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x4cf87c: 0x3c0d0059  lui         $t5, 0x59
    ctx->pc = 0x4cf87cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)89 << 16));
    // 0x4cf880: 0xddad2160  ld          $t5, 0x2160($t5)
    ctx->pc = 0x4cf880u;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x592160u));
    // 0x4cf884: 0x71ad6b89  pcpyld      $t5, $t5, $t5
    ctx->pc = 0x4cf884u;
    SET_GPR_VEC(ctx, 13, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 13)));
    // 0x4cf888: 0x3c190059  lui         $t9, 0x59
    ctx->pc = 0x4cf888u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)89 << 16));
    // 0x4cf88c: 0xdf392140  ld          $t9, 0x2140($t9)
    ctx->pc = 0x4cf88cu;
    SET_GPR_U64(ctx, 25, FAST_READ64(0x592140u));
    // 0x4cf890: 0x7339cb89  pcpyld      $t9, $t9, $t9
    ctx->pc = 0x4cf890u;
    SET_GPR_VEC(ctx, 25, PS2_PCPYLD(GPR_VEC(ctx, 25), GPR_VEC(ctx, 25)));
    // 0x4cf894: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4cf894u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4cf898: 0xdcc62150  ld          $a2, 0x2150($a2)
    ctx->pc = 0x4cf898u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x592150u));
    // 0x4cf89c: 0x70c63389  pcpyld      $a2, $a2, $a2
    ctx->pc = 0x4cf89cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x4cf8a0: 0x3c180059  lui         $t8, 0x59
    ctx->pc = 0x4cf8a0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)89 << 16));
    // 0x4cf8a4: 0xdf182148  ld          $t8, 0x2148($t8)
    ctx->pc = 0x4cf8a4u;
    SET_GPR_U64(ctx, 24, FAST_READ64(0x592148u));
    // 0x4cf8a8: 0x7318c588  pextlh      $t8, $t8, $t8
    ctx->pc = 0x4cf8a8u;
    SET_GPR_VEC(ctx, 24, PS2_PEXTLH(GPR_VEC(ctx, 24), GPR_VEC(ctx, 24)));
    // 0x4cf8ac: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x4cf8acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x4cf8b0: 0x8e102860  lw          $s0, 0x2860($s0)
    ctx->pc = 0x4cf8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532860u));
    // 0x4cf8b4: 0x3c110053  lui         $s1, 0x53
    ctx->pc = 0x4cf8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)83 << 16));
    // 0x4cf8b8: 0x8e312864  lw          $s1, 0x2864($s1)
    ctx->pc = 0x4cf8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x532864u));
    // 0x4cf8bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4cf8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4cf8c0: 0x18800080  blez        $a0, . + 4 + (0x80 << 2)
    ctx->pc = 0x4CF8C0u;
    {
        const bool branch_taken_0x4cf8c0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x4cf8c0) {
            ctx->pc = 0x4CFAC4u;
            goto label_4cfac4;
        }
    }
    ctx->pc = 0x4CF8C8u;
    // 0x4cf8c8: 0x9e480000  lwu         $t0, 0x0($s2)
    ctx->pc = 0x4cf8c8u;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cf8cc: 0x9e690000  lwu         $t1, 0x0($s3)
    ctx->pc = 0x4cf8ccu;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cf8d0: 0x71284688  pextlb      $t0, $t1, $t0
    ctx->pc = 0x4cf8d0u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4cf8d4: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x4cf8d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cf8d8: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x4cf8d8u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x4cf8dc: 0xde8b0000  ld          $t3, 0x0($s4)
    ctx->pc = 0x4cf8dcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf8e0: 0x71087ba9  pcpyud      $t7, $t0, $t0
    ctx->pc = 0x4cf8e0u;
    SET_GPR_VEC(ctx, 15, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf8e4: 0x71084389  pcpyld      $t0, $t0, $t0
    ctx->pc = 0x4cf8e4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf8e8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4cf8e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4cf8ec: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4cf8ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4cf8f0: 0x8133e51  j           func_4CF944
    ctx->pc = 0x4CF8F0u;
    ctx->pc = 0x4CF8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF8F0u;
    // 0x4cf8f4: 0x710d4148  psubh       $t0, $t0, $t5 (Delay Slot)
    SET_GPR_VEC(ctx, 8, PS2_PSUBH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF944u;
    goto label_4cf944;
    ctx->pc = 0x4CF8F8u;
label_4cf8f8:
    // 0x4cf8f8: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cf8f8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cf8fc: 0x9e480000  lwu         $t0, 0x0($s2)
    ctx->pc = 0x4cf8fcu;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cf900: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cf900u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cf904: 0x9e690000  lwu         $t1, 0x0($s3)
    ctx->pc = 0x4cf904u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cf908: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4cf908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4cf90c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4cf90cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4cf910: 0x71284688  pextlb      $t0, $t1, $t0
    ctx->pc = 0x4cf910u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4cf914: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x4cf914u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cf918: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x4cf918u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x4cf91c: 0xde8b0000  ld          $t3, 0x0($s4)
    ctx->pc = 0x4cf91cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf920: 0x71087ba9  pcpyud      $t7, $t0, $t0
    ctx->pc = 0x4cf920u;
    SET_GPR_VEC(ctx, 15, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf924: 0x73c0f5a8  pextuh      $fp, $fp, $zero
    ctx->pc = 0x4cf924u;
    SET_GPR_VEC(ctx, 30, PS2_PEXTUH(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x4cf928: 0x72e0bda8  pextuh      $s7, $s7, $zero
    ctx->pc = 0x4cf928u;
    SET_GPR_VEC(ctx, 23, PS2_PEXTUH(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x4cf92c: 0x73c73ca9  por         $a3, $fp, $a3
    ctx->pc = 0x4cf92cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 30), GPR_VEC(ctx, 7)));
    // 0x4cf930: 0x72ee74a9  por         $t6, $s7, $t6
    ctx->pc = 0x4cf930u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 14)));
    // 0x4cf934: 0x71084389  pcpyld      $t0, $t0, $t0
    ctx->pc = 0x4cf934u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf938: 0x7e27fff0  sq          $a3, -0x10($s1)
    ctx->pc = 0x4cf938u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294967280), GPR_VEC(ctx, 7));
    // 0x4cf93c: 0x710d4148  psubh       $t0, $t0, $t5
    ctx->pc = 0x4cf93cu;
    SET_GPR_VEC(ctx, 8, PS2_PSUBH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x4cf940: 0x7e0efff0  sq          $t6, -0x10($s0)
    ctx->pc = 0x4cf940u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_VEC(ctx, 14));
label_4cf944:
    // 0x4cf944: 0x710c4709  pmulth      $t0, $t0, $t4
    ctx->pc = 0x4cf944u;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 8, result); }
    // 0x4cf948: 0x71652e88  pextlb      $a1, $t3, $a1
    ctx->pc = 0x4cf948u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 5)));
    // 0x4cf94c: 0xce800040  pref        0x00, 0x40($s4)
    ctx->pc = 0x4cf94cu;
    // PREF instruction (ignored)
    // 0x4cf950: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x4cf950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4cf954: 0x70004870  pmfhl.uw    $t1
    ctx->pc = 0x4cf954u;
    SET_GPR_VEC(ctx, 9, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cf958: 0xcc400040  pref        0x00, 0x40($v0)
    ctx->pc = 0x4cf958u;
    // PREF instruction (ignored)
    // 0x4cf95c: 0x7008437f  psraw       $t0, $t0, 13
    ctx->pc = 0x4cf95cu;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi32(GPR_VEC(ctx, 8), 13));
    // 0x4cf960: 0xdeb70000  ld          $s7, 0x0($s5)
    ctx->pc = 0x4cf960u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cf964: 0x70094b7f  psraw       $t1, $t1, 13
    ctx->pc = 0x4cf964u;
    SET_GPR_VEC(ctx, 9, _mm_srai_epi32(GPR_VEC(ctx, 9), 13));
    // 0x4cf968: 0xdede0000  ld          $fp, 0x0($s6)
    ctx->pc = 0x4cf968u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4cf96c: 0x710842a9  pinteh      $t0, $t0, $t0
    ctx->pc = 0x4cf96cu;
    SET_GPR_VEC(ctx, 8, PS2_PINTEH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf970: 0x71294aa9  pinteh      $t1, $t1, $t1
    ctx->pc = 0x4cf970u;
    SET_GPR_VEC(ctx, 9, PS2_PINTEH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf974: 0x70b92e68  psubub      $a1, $a1, $t9
    ctx->pc = 0x4cf974u;
    SET_GPR_VEC(ctx, 5, _mm_subs_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 25)));
    // 0x4cf978: 0x70051ea8  pextub      $v1, $zero, $a1
    ctx->pc = 0x4cf978u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x4cf97c: 0x70052e88  pextlb      $a1, $zero, $a1
    ctx->pc = 0x4cf97cu;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x4cf980: 0xce400020  pref        0x00, 0x20($s2)
    ctx->pc = 0x4cf980u;
    // PREF instruction (ignored)
    // 0x4cf984: 0x73052f09  pmulth      $a1, $t8, $a1
    ctx->pc = 0x4cf984u;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 24), GPR_VEC(ctx, 5)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 5, result); }
    // 0x4cf988: 0x712953a9  pcpyud      $t2, $t1, $t1
    ctx->pc = 0x4cf988u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf98c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x4cf98cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x4cf990: 0x71094908  paddh       $t1, $t0, $t1
    ctx->pc = 0x4cf990u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x4cf994: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x4cf994u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf998: 0x710843a9  pcpyud      $t0, $t0, $t0
    ctx->pc = 0x4cf998u;
    SET_GPR_VEC(ctx, 8, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf99c: 0x70007070  pmfhl.uw    $t6
    ctx->pc = 0x4cf99cu;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cf9a0: 0x70052bbe  psrlw       $a1, $a1, 14
    ctx->pc = 0x4cf9a0u;
    SET_GPR_VEC(ctx, 5, _mm_srli_epi32(GPR_VEC(ctx, 5), 14));
    // 0x4cf9a4: 0x700e73be  psrlw       $t6, $t6, 14
    ctx->pc = 0x4cf9a4u;
    SET_GPR_VEC(ctx, 14, _mm_srli_epi32(GPR_VEC(ctx, 14), 14));
    // 0x4cf9a8: 0x71c575c8  ppach       $t6, $t6, $a1
    ctx->pc = 0x4cf9a8u;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 5)));
    // 0x4cf9ac: 0x71c84108  paddh       $t0, $t6, $t0
    ctx->pc = 0x4cf9acu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 8)));
    // 0x4cf9b0: 0x71c94908  paddh       $t1, $t6, $t1
    ctx->pc = 0x4cf9b0u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 9)));
    // 0x4cf9b4: 0x71ca7108  paddh       $t6, $t6, $t2
    ctx->pc = 0x4cf9b4u;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 10)));
    // 0x4cf9b8: 0xce600020  pref        0x00, 0x20($s3)
    ctx->pc = 0x4cf9b8u;
    // PREF instruction (ignored)
    // 0x4cf9bc: 0x70c84508  paddsh      $t0, $a2, $t0
    ctx->pc = 0x4cf9bcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x4cf9c0: 0x70c94d08  paddsh      $t1, $a2, $t1
    ctx->pc = 0x4cf9c0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x4cf9c4: 0x70ce7508  paddsh      $t6, $a2, $t6
    ctx->pc = 0x4cf9c4u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 14)));
    // 0x4cf9c8: 0xcee00040  pref        0x00, 0x40($s7)
    ctx->pc = 0x4cf9c8u;
    // PREF instruction (ignored)
    // 0x4cf9cc: 0x71064568  psubuh      $t0, $t0, $a2
    ctx->pc = 0x4cf9ccu;
    SET_GPR_VEC(ctx, 8, _mm_sub_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x4cf9d0: 0x71264d68  psubuh      $t1, $t1, $a2
    ctx->pc = 0x4cf9d0u;
    SET_GPR_VEC(ctx, 9, _mm_sub_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x4cf9d4: 0x71c67568  psubuh      $t6, $t6, $a2
    ctx->pc = 0x4cf9d4u;
    SET_GPR_VEC(ctx, 14, _mm_sub_epi16(GPR_VEC(ctx, 14), GPR_VEC(ctx, 6)));
    // 0x4cf9d8: 0xcfc00040  pref        0x00, 0x40($fp)
    ctx->pc = 0x4cf9d8u;
    // PREF instruction (ignored)
    // 0x4cf9dc: 0x71203ea8  pextub      $a3, $t1, $zero
    ctx->pc = 0x4cf9dcu;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cf9e0: 0x710e55a8  pextuh      $t2, $t0, $t6
    ctx->pc = 0x4cf9e0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cf9e4: 0x71204e88  pextlb      $t1, $t1, $zero
    ctx->pc = 0x4cf9e4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cf9e8: 0x710e7588  pextlh      $t6, $t0, $t6
    ctx->pc = 0x4cf9e8u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cf9ec: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cf9ecu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cf9f0: 0x71ed7948  psubh       $t7, $t7, $t5
    ctx->pc = 0x4cf9f0u;
    SET_GPR_VEC(ctx, 15, PS2_PSUBH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x4cf9f4: 0x71ec7f09  pmulth      $t7, $t7, $t4
    ctx->pc = 0x4cf9f4u;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 15), GPR_VEC(ctx, 12)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 15, result); }
    // 0x4cf9f8: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cf9f8u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cf9fc: 0x73c0f688  pextlb      $fp, $fp, $zero
    ctx->pc = 0x4cf9fcu;
    SET_GPR_VEC(ctx, 30, PS2_PEXTLB(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x4cfa00: 0x72e0be88  pextlb      $s7, $s7, $zero
    ctx->pc = 0x4cfa00u;
    SET_GPR_VEC(ctx, 23, PS2_PEXTLB(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x4cfa04: 0x73c05588  pextlh      $t2, $fp, $zero
    ctx->pc = 0x4cfa04u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLH(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x4cfa08: 0x72e04d88  pextlh      $t1, $s7, $zero
    ctx->pc = 0x4cfa08u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLH(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x4cfa0c: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cfa0cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cfa10: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cfa10u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cfa14: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x4cfa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x4cfa18: 0x70004870  pmfhl.uw    $t1
    ctx->pc = 0x4cfa18u;
    SET_GPR_VEC(ctx, 9, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cfa1c: 0x700f7b7f  psraw       $t7, $t7, 13
    ctx->pc = 0x4cfa1cu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi32(GPR_VEC(ctx, 15), 13));
    // 0x4cfa20: 0x70094b7f  psraw       $t1, $t1, 13
    ctx->pc = 0x4cfa20u;
    SET_GPR_VEC(ctx, 9, _mm_srai_epi32(GPR_VEC(ctx, 9), 13));
    // 0x4cfa24: 0x71ef7aa9  pinteh      $t7, $t7, $t7
    ctx->pc = 0x4cfa24u;
    SET_GPR_VEC(ctx, 15, PS2_PINTEH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 15)));
    // 0x4cfa28: 0x71294aa9  pinteh      $t1, $t1, $t1
    ctx->pc = 0x4cfa28u;
    SET_GPR_VEC(ctx, 9, PS2_PINTEH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfa2c: 0x73031f09  pmulth      $v1, $t8, $v1
    ctx->pc = 0x4cfa2cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 24), GPR_VEC(ctx, 3)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 3, result); }
    // 0x4cfa30: 0x712953a9  pcpyud      $t2, $t1, $t1
    ctx->pc = 0x4cfa30u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfa34: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4cfa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4cfa38: 0x71e94908  paddh       $t1, $t7, $t1
    ctx->pc = 0x4cfa38u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 9)));
    // 0x4cfa3c: 0x7e27ffe0  sq          $a3, -0x20($s1)
    ctx->pc = 0x4cfa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294967264), GPR_VEC(ctx, 7));
    // 0x4cfa40: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x4cfa40u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfa44: 0x7e0effe0  sq          $t6, -0x20($s0)
    ctx->pc = 0x4cfa44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967264), GPR_VEC(ctx, 14));
    // 0x4cfa48: 0x71ef7ba9  pcpyud      $t7, $t7, $t7
    ctx->pc = 0x4cfa48u;
    SET_GPR_VEC(ctx, 15, _mm_unpackhi_epi64(GPR_VEC(ctx, 15), GPR_VEC(ctx, 15)));
    // 0x4cfa4c: 0x70007070  pmfhl.uw    $t6
    ctx->pc = 0x4cfa4cu;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cfa50: 0x70031bbe  psrlw       $v1, $v1, 14
    ctx->pc = 0x4cfa50u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi32(GPR_VEC(ctx, 3), 14));
    // 0x4cfa54: 0x700e73be  psrlw       $t6, $t6, 14
    ctx->pc = 0x4cfa54u;
    SET_GPR_VEC(ctx, 14, _mm_srli_epi32(GPR_VEC(ctx, 14), 14));
    // 0x4cfa58: 0x71c375c8  ppach       $t6, $t6, $v1
    ctx->pc = 0x4cfa58u;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x4cfa5c: 0x71cf7908  paddh       $t7, $t6, $t7
    ctx->pc = 0x4cfa5cu;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 15)));
    // 0x4cfa60: 0x71c94908  paddh       $t1, $t6, $t1
    ctx->pc = 0x4cfa60u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 9)));
    // 0x4cfa64: 0x71ca7108  paddh       $t6, $t6, $t2
    ctx->pc = 0x4cfa64u;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 10)));
    // 0x4cfa68: 0x70cf7d08  paddsh      $t7, $a2, $t7
    ctx->pc = 0x4cfa68u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 15)));
    // 0x4cfa6c: 0x70c94d08  paddsh      $t1, $a2, $t1
    ctx->pc = 0x4cfa6cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x4cfa70: 0x70ce7508  paddsh      $t6, $a2, $t6
    ctx->pc = 0x4cfa70u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 14)));
    // 0x4cfa74: 0x71e67d68  psubuh      $t7, $t7, $a2
    ctx->pc = 0x4cfa74u;
    SET_GPR_VEC(ctx, 15, _mm_sub_epi16(GPR_VEC(ctx, 15), GPR_VEC(ctx, 6)));
    // 0x4cfa78: 0x71264d68  psubuh      $t1, $t1, $a2
    ctx->pc = 0x4cfa78u;
    SET_GPR_VEC(ctx, 9, _mm_sub_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x4cfa7c: 0x71c67568  psubuh      $t6, $t6, $a2
    ctx->pc = 0x4cfa7cu;
    SET_GPR_VEC(ctx, 14, _mm_sub_epi16(GPR_VEC(ctx, 14), GPR_VEC(ctx, 6)));
    // 0x4cfa80: 0x71203ea8  pextub      $a3, $t1, $zero
    ctx->pc = 0x4cfa80u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cfa84: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x4cfa84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x4cfa88: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x4cfa88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x4cfa8c: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x4cfa8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x4cfa90: 0x71ee55a8  pextuh      $t2, $t7, $t6
    ctx->pc = 0x4cfa90u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x4cfa94: 0x71204e88  pextlb      $t1, $t1, $zero
    ctx->pc = 0x4cfa94u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cfa98: 0x1c80ff97  bgtz        $a0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x4CFA98u;
    {
        const bool branch_taken_0x4cfa98 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x4CFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFA98u;
        // 0x4cfa9c: 0x71ee7588  pextlh      $t6, $t7, $t6 (Delay Slot)
        SET_GPR_VEC(ctx, 14, PS2_PEXTLH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfa98) {
            ctx->pc = 0x4CF8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cf8f8;
        }
    }
    ctx->pc = 0x4CFAA0u;
    // 0x4cfaa0: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cfaa0u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cfaa4: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cfaa4u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cfaa8: 0x73c0f5a8  pextuh      $fp, $fp, $zero
    ctx->pc = 0x4cfaa8u;
    SET_GPR_VEC(ctx, 30, PS2_PEXTUH(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x4cfaac: 0x72e0bda8  pextuh      $s7, $s7, $zero
    ctx->pc = 0x4cfaacu;
    SET_GPR_VEC(ctx, 23, PS2_PEXTUH(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x4cfab0: 0x73c73ca9  por         $a3, $fp, $a3
    ctx->pc = 0x4cfab0u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 30), GPR_VEC(ctx, 7)));
    // 0x4cfab4: 0x72ee74a9  por         $t6, $s7, $t6
    ctx->pc = 0x4cfab4u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 14)));
    // 0x4cfab8: 0x7e27fff0  sq          $a3, -0x10($s1)
    ctx->pc = 0x4cfab8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294967280), GPR_VEC(ctx, 7));
    // 0x4cfabc: 0x1480003c  bnez        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x4CFABCu;
    {
        const bool branch_taken_0x4cfabc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFABCu;
        // 0x4cfac0: 0x7e0efff0  sq          $t6, -0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfabc) {
            ctx->pc = 0x4CFBB0u;
            goto label_4cfbb0;
        }
    }
    ctx->pc = 0x4CFAC4u;
label_4cfac4:
    // 0x4cfac4: 0x96480000  lhu         $t0, 0x0($s2)
    ctx->pc = 0x4cfac4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cfac8: 0x96690000  lhu         $t1, 0x0($s3)
    ctx->pc = 0x4cfac8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cfacc: 0x71284688  pextlb      $t0, $t1, $t0
    ctx->pc = 0x4cfaccu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4cfad0: 0x9c450000  lwu         $a1, 0x0($v0)
    ctx->pc = 0x4cfad0u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cfad4: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x4cfad4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x4cfad8: 0x9e8b0000  lwu         $t3, 0x0($s4)
    ctx->pc = 0x4cfad8u;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cfadc: 0x71084389  pcpyld      $t0, $t0, $t0
    ctx->pc = 0x4cfadcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cfae0: 0x710d4148  psubh       $t0, $t0, $t5
    ctx->pc = 0x4cfae0u;
    SET_GPR_VEC(ctx, 8, PS2_PSUBH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x4cfae4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x4cfae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x4cfae8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x4cfae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x4cfaec: 0x710c4709  pmulth      $t0, $t0, $t4
    ctx->pc = 0x4cfaecu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 8, result); }
    // 0x4cfaf0: 0x71652e88  pextlb      $a1, $t3, $a1
    ctx->pc = 0x4cfaf0u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 5)));
    // 0x4cfaf4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4cfaf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4cfaf8: 0x70004870  pmfhl.uw    $t1
    ctx->pc = 0x4cfaf8u;
    SET_GPR_VEC(ctx, 9, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cfafc: 0x7008437f  psraw       $t0, $t0, 13
    ctx->pc = 0x4cfafcu;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi32(GPR_VEC(ctx, 8), 13));
    // 0x4cfb00: 0x9eb70000  lwu         $s7, 0x0($s5)
    ctx->pc = 0x4cfb00u;
    SET_GPR_ZE32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cfb04: 0x70094b7f  psraw       $t1, $t1, 13
    ctx->pc = 0x4cfb04u;
    SET_GPR_VEC(ctx, 9, _mm_srai_epi32(GPR_VEC(ctx, 9), 13));
    // 0x4cfb08: 0x9ede0000  lwu         $fp, 0x0($s6)
    ctx->pc = 0x4cfb08u;
    SET_GPR_ZE32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4cfb0c: 0x710842a9  pinteh      $t0, $t0, $t0
    ctx->pc = 0x4cfb0cu;
    SET_GPR_VEC(ctx, 8, PS2_PINTEH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cfb10: 0x71294aa9  pinteh      $t1, $t1, $t1
    ctx->pc = 0x4cfb10u;
    SET_GPR_VEC(ctx, 9, PS2_PINTEH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfb14: 0x70b92e68  psubub      $a1, $a1, $t9
    ctx->pc = 0x4cfb14u;
    SET_GPR_VEC(ctx, 5, _mm_subs_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 25)));
    // 0x4cfb18: 0x70052e88  pextlb      $a1, $zero, $a1
    ctx->pc = 0x4cfb18u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x4cfb1c: 0x73052f09  pmulth      $a1, $t8, $a1
    ctx->pc = 0x4cfb1cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 24), GPR_VEC(ctx, 5)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 5, result); }
    // 0x4cfb20: 0x712953a9  pcpyud      $t2, $t1, $t1
    ctx->pc = 0x4cfb20u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfb24: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4cfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4cfb28: 0x71094908  paddh       $t1, $t0, $t1
    ctx->pc = 0x4cfb28u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x4cfb2c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x4cfb2cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cfb30: 0x710843a9  pcpyud      $t0, $t0, $t0
    ctx->pc = 0x4cfb30u;
    SET_GPR_VEC(ctx, 8, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cfb34: 0x70007070  pmfhl.uw    $t6
    ctx->pc = 0x4cfb34u;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cfb38: 0x70052bbe  psrlw       $a1, $a1, 14
    ctx->pc = 0x4cfb38u;
    SET_GPR_VEC(ctx, 5, _mm_srli_epi32(GPR_VEC(ctx, 5), 14));
    // 0x4cfb3c: 0x700e73be  psrlw       $t6, $t6, 14
    ctx->pc = 0x4cfb3cu;
    SET_GPR_VEC(ctx, 14, _mm_srli_epi32(GPR_VEC(ctx, 14), 14));
    // 0x4cfb40: 0x71c575c8  ppach       $t6, $t6, $a1
    ctx->pc = 0x4cfb40u;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 5)));
    // 0x4cfb44: 0x71c84108  paddh       $t0, $t6, $t0
    ctx->pc = 0x4cfb44u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 8)));
    // 0x4cfb48: 0x71c94908  paddh       $t1, $t6, $t1
    ctx->pc = 0x4cfb48u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 9)));
    // 0x4cfb4c: 0x71ca7108  paddh       $t6, $t6, $t2
    ctx->pc = 0x4cfb4cu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 10)));
    // 0x4cfb50: 0x70c84508  paddsh      $t0, $a2, $t0
    ctx->pc = 0x4cfb50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x4cfb54: 0x70c94d08  paddsh      $t1, $a2, $t1
    ctx->pc = 0x4cfb54u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x4cfb58: 0x70ce7508  paddsh      $t6, $a2, $t6
    ctx->pc = 0x4cfb58u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 14)));
    // 0x4cfb5c: 0x71064568  psubuh      $t0, $t0, $a2
    ctx->pc = 0x4cfb5cu;
    SET_GPR_VEC(ctx, 8, _mm_sub_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x4cfb60: 0x71264d68  psubuh      $t1, $t1, $a2
    ctx->pc = 0x4cfb60u;
    SET_GPR_VEC(ctx, 9, _mm_sub_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x4cfb64: 0x71c67568  psubuh      $t6, $t6, $a2
    ctx->pc = 0x4cfb64u;
    SET_GPR_VEC(ctx, 14, _mm_sub_epi16(GPR_VEC(ctx, 14), GPR_VEC(ctx, 6)));
    // 0x4cfb68: 0x71203ea8  pextub      $a3, $t1, $zero
    ctx->pc = 0x4cfb68u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cfb6c: 0x710e55a8  pextuh      $t2, $t0, $t6
    ctx->pc = 0x4cfb6cu;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cfb70: 0x71204e88  pextlb      $t1, $t1, $zero
    ctx->pc = 0x4cfb70u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cfb74: 0x710e7588  pextlh      $t6, $t0, $t6
    ctx->pc = 0x4cfb74u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cfb78: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x4cfb78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x4cfb7c: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x4cfb7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x4cfb80: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cfb80u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cfb84: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cfb84u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cfb88: 0x73c0f688  pextlb      $fp, $fp, $zero
    ctx->pc = 0x4cfb88u;
    SET_GPR_VEC(ctx, 30, PS2_PEXTLB(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x4cfb8c: 0x72e0be88  pextlb      $s7, $s7, $zero
    ctx->pc = 0x4cfb8cu;
    SET_GPR_VEC(ctx, 23, PS2_PEXTLB(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x4cfb90: 0x73c05588  pextlh      $t2, $fp, $zero
    ctx->pc = 0x4cfb90u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLH(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x4cfb94: 0x72e04d88  pextlh      $t1, $s7, $zero
    ctx->pc = 0x4cfb94u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLH(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x4cfb98: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cfb98u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cfb9c: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cfb9cu;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cfba0: 0x7e270000  sq          $a3, 0x0($s1)
    ctx->pc = 0x4cfba0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 7));
    // 0x4cfba4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x4cfba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4cfba8: 0x7e0e0000  sq          $t6, 0x0($s0)
    ctx->pc = 0x4cfba8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 14));
    // 0x4cfbac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4cfbacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4cfbb0:
    // 0x4cfbb0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cfbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cfbb4: 0xac302860  sw          $s0, 0x2860($at)
    ctx->pc = 0x4cfbb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x532860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532860u, _value); } while (0);
    // 0x4cfbb8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cfbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cfbbc: 0xac222868  sw          $v0, 0x2868($at)
    ctx->pc = 0x4cfbbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532868u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532868u, _value); } while (0);
    // 0x4cfbc0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cfbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cfbc4: 0xac312864  sw          $s1, 0x2864($at)
    ctx->pc = 0x4cfbc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x532864u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532864u, _value); } while (0);
    // 0x4cfbc8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cfbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cfbcc: 0xac34286c  sw          $s4, 0x286C($at)
    ctx->pc = 0x4cfbccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x53286Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53286Cu, _value); } while (0);
    // 0x4cfbd0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cfbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cfbd4: 0xac322870  sw          $s2, 0x2870($at)
    ctx->pc = 0x4cfbd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x532870u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532870u, _value); } while (0);
    // 0x4cfbd8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cfbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cfbdc: 0xac332874  sw          $s3, 0x2874($at)
    ctx->pc = 0x4cfbdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x532874u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532874u, _value); } while (0);
    // 0x4cfbe0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cfbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cfbe4: 0xac352878  sw          $s5, 0x2878($at)
    ctx->pc = 0x4cfbe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x532878u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532878u, _value); } while (0);
    // 0x4cfbe8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cfbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cfbec: 0xac36287c  sw          $s6, 0x287C($at)
    ctx->pc = 0x4cfbecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x53287Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53287Cu, _value); } while (0);
    // 0x4cfbf0: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x4cfbf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cfbf4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4cfbf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cfbf8: 0xdfb60020  ld          $s6, 0x20($sp)
    ctx->pc = 0x4cfbf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cfbfc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cfbfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cfc00: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4cfc00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cfc04: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4cfc04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cfc08: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4cfc08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cfc0c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x4cfc0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cfc10: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x4cfc10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cfc14: 0xdfbd0058  ld          $sp, 0x58($sp)
    ctx->pc = 0x4cfc14u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4cfc18: 0x3e00008  jr          $ra
    ctx->pc = 0x4CFC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CFC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CFC20u;
}
