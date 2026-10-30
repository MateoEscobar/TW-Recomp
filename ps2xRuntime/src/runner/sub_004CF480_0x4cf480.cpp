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

// Function: sub_004CF480
// Address: 0x4cf480 - 0x4cf7f0
void sub_004CF480_0x4cf480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF480_0x4cf480");
#endif

    switch (ctx->pc) {
        case 0x4cf560u: goto label_4cf560;
        default: break;
    }

    ctx->pc = 0x4cf480u;

    // 0x4cf480: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4cf480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf484: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cf484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cf488: 0x2401fff8  addiu       $at, $zero, -0x8
    ctx->pc = 0x4cf488u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x4cf48c: 0x3a1e824  and         $sp, $sp, $at
    ctx->pc = 0x4cf48cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 29) & GPR_U64(ctx, 1));
    // 0x4cf490: 0xffb40000  sd          $s4, 0x0($sp)
    ctx->pc = 0x4cf490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 20));
    // 0x4cf494: 0xffb30008  sd          $s3, 0x8($sp)
    ctx->pc = 0x4cf494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 19));
    // 0x4cf498: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cf498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cf49c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4cf49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4cf4a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4cf4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4cf4a4: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x4cf4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x4cf4a8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cf4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cf4ac: 0x8c422868  lw          $v0, 0x2868($v0)
    ctx->pc = 0x4cf4acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532868u));
    // 0x4cf4b0: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4cf4b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
    // 0x4cf4b4: 0x8e94286c  lw          $s4, 0x286C($s4)
    ctx->pc = 0x4cf4b4u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x53286Cu));
    // 0x4cf4b8: 0xcc400000  pref        0x00, 0x0($v0)
    ctx->pc = 0x4cf4b8u;
    // PREF instruction (ignored)
    // 0x4cf4bc: 0xce800000  pref        0x00, 0x0($s4)
    ctx->pc = 0x4cf4bcu;
    // PREF instruction (ignored)
    // 0x4cf4c0: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4cf4c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x4cf4c4: 0x8e522870  lw          $s2, 0x2870($s2)
    ctx->pc = 0x4cf4c4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x532870u));
    // 0x4cf4c8: 0x3c130053  lui         $s3, 0x53
    ctx->pc = 0x4cf4c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)83 << 16));
    // 0x4cf4cc: 0x8e732874  lw          $s3, 0x2874($s3)
    ctx->pc = 0x4cf4ccu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x532874u));
    // 0x4cf4d0: 0xce400000  pref        0x00, 0x0($s2)
    ctx->pc = 0x4cf4d0u;
    // PREF instruction (ignored)
    // 0x4cf4d4: 0xce600000  pref        0x00, 0x0($s3)
    ctx->pc = 0x4cf4d4u;
    // PREF instruction (ignored)
    // 0x4cf4d8: 0x3c0c0059  lui         $t4, 0x59
    ctx->pc = 0x4cf4d8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)89 << 16));
    // 0x4cf4dc: 0xdd8c2158  ld          $t4, 0x2158($t4)
    ctx->pc = 0x4cf4dcu;
    SET_GPR_U64(ctx, 12, FAST_READ64(0x592158u));
    // 0x4cf4e0: 0x718c6488  pextlw      $t4, $t4, $t4
    ctx->pc = 0x4cf4e0u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 12), GPR_VEC(ctx, 12)));
    // 0x4cf4e4: 0x3c0d0059  lui         $t5, 0x59
    ctx->pc = 0x4cf4e4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)89 << 16));
    // 0x4cf4e8: 0xddad2160  ld          $t5, 0x2160($t5)
    ctx->pc = 0x4cf4e8u;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x592160u));
    // 0x4cf4ec: 0x71ad6b89  pcpyld      $t5, $t5, $t5
    ctx->pc = 0x4cf4ecu;
    SET_GPR_VEC(ctx, 13, PS2_PCPYLD(GPR_VEC(ctx, 13), GPR_VEC(ctx, 13)));
    // 0x4cf4f0: 0x3c190059  lui         $t9, 0x59
    ctx->pc = 0x4cf4f0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)89 << 16));
    // 0x4cf4f4: 0xdf392140  ld          $t9, 0x2140($t9)
    ctx->pc = 0x4cf4f4u;
    SET_GPR_U64(ctx, 25, FAST_READ64(0x592140u));
    // 0x4cf4f8: 0x7339cb89  pcpyld      $t9, $t9, $t9
    ctx->pc = 0x4cf4f8u;
    SET_GPR_VEC(ctx, 25, PS2_PCPYLD(GPR_VEC(ctx, 25), GPR_VEC(ctx, 25)));
    // 0x4cf4fc: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4cf4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4cf500: 0xdcc62150  ld          $a2, 0x2150($a2)
    ctx->pc = 0x4cf500u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x592150u));
    // 0x4cf504: 0x70c63389  pcpyld      $a2, $a2, $a2
    ctx->pc = 0x4cf504u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x4cf508: 0x3c180059  lui         $t8, 0x59
    ctx->pc = 0x4cf508u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)89 << 16));
    // 0x4cf50c: 0xdf182148  ld          $t8, 0x2148($t8)
    ctx->pc = 0x4cf50cu;
    SET_GPR_U64(ctx, 24, FAST_READ64(0x592148u));
    // 0x4cf510: 0x7318c588  pextlh      $t8, $t8, $t8
    ctx->pc = 0x4cf510u;
    SET_GPR_VEC(ctx, 24, PS2_PEXTLH(GPR_VEC(ctx, 24), GPR_VEC(ctx, 24)));
    // 0x4cf514: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x4cf514u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x4cf518: 0x8e102860  lw          $s0, 0x2860($s0)
    ctx->pc = 0x4cf518u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532860u));
    // 0x4cf51c: 0x3c110053  lui         $s1, 0x53
    ctx->pc = 0x4cf51cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)83 << 16));
    // 0x4cf520: 0x8e312864  lw          $s1, 0x2864($s1)
    ctx->pc = 0x4cf520u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x532864u));
    // 0x4cf524: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4cf524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4cf528: 0x1880006c  blez        $a0, . + 4 + (0x6C << 2)
    ctx->pc = 0x4CF528u;
    {
        const bool branch_taken_0x4cf528 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x4cf528) {
            ctx->pc = 0x4CF6DCu;
            goto label_4cf6dc;
        }
    }
    ctx->pc = 0x4CF530u;
    // 0x4cf530: 0x9e480000  lwu         $t0, 0x0($s2)
    ctx->pc = 0x4cf530u;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cf534: 0x9e690000  lwu         $t1, 0x0($s3)
    ctx->pc = 0x4cf534u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cf538: 0x71284688  pextlb      $t0, $t1, $t0
    ctx->pc = 0x4cf538u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4cf53c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x4cf53cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cf540: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x4cf540u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x4cf544: 0xde8b0000  ld          $t3, 0x0($s4)
    ctx->pc = 0x4cf544u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf548: 0x71087ba9  pcpyud      $t7, $t0, $t0
    ctx->pc = 0x4cf548u;
    SET_GPR_VEC(ctx, 15, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf54c: 0x71084389  pcpyld      $t0, $t0, $t0
    ctx->pc = 0x4cf54cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf550: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4cf550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4cf554: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4cf554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4cf558: 0x8133d67  j           func_4CF59C
    ctx->pc = 0x4CF558u;
    ctx->pc = 0x4CF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF558u;
    // 0x4cf55c: 0x710d4148  psubh       $t0, $t0, $t5 (Delay Slot)
    SET_GPR_VEC(ctx, 8, PS2_PSUBH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF59Cu;
    goto label_4cf59c;
    ctx->pc = 0x4CF560u;
label_4cf560:
    // 0x4cf560: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cf560u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cf564: 0x9e480000  lwu         $t0, 0x0($s2)
    ctx->pc = 0x4cf564u;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cf568: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cf568u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cf56c: 0x9e690000  lwu         $t1, 0x0($s3)
    ctx->pc = 0x4cf56cu;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cf570: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4cf570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4cf574: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4cf574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4cf578: 0x71284688  pextlb      $t0, $t1, $t0
    ctx->pc = 0x4cf578u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4cf57c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x4cf57cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cf580: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x4cf580u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x4cf584: 0xde8b0000  ld          $t3, 0x0($s4)
    ctx->pc = 0x4cf584u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf588: 0x71087ba9  pcpyud      $t7, $t0, $t0
    ctx->pc = 0x4cf588u;
    SET_GPR_VEC(ctx, 15, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf58c: 0x71084389  pcpyld      $t0, $t0, $t0
    ctx->pc = 0x4cf58cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf590: 0x7e27fff0  sq          $a3, -0x10($s1)
    ctx->pc = 0x4cf590u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294967280), GPR_VEC(ctx, 7));
    // 0x4cf594: 0x710d4148  psubh       $t0, $t0, $t5
    ctx->pc = 0x4cf594u;
    SET_GPR_VEC(ctx, 8, PS2_PSUBH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x4cf598: 0x7e0efff0  sq          $t6, -0x10($s0)
    ctx->pc = 0x4cf598u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_VEC(ctx, 14));
label_4cf59c:
    // 0x4cf59c: 0x710c4709  pmulth      $t0, $t0, $t4
    ctx->pc = 0x4cf59cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 8, result); }
    // 0x4cf5a0: 0x71652e88  pextlb      $a1, $t3, $a1
    ctx->pc = 0x4cf5a0u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 5)));
    // 0x4cf5a4: 0xce800040  pref        0x00, 0x40($s4)
    ctx->pc = 0x4cf5a4u;
    // PREF instruction (ignored)
    // 0x4cf5a8: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x4cf5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4cf5ac: 0x70004870  pmfhl.uw    $t1
    ctx->pc = 0x4cf5acu;
    SET_GPR_VEC(ctx, 9, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cf5b0: 0xcc400040  pref        0x00, 0x40($v0)
    ctx->pc = 0x4cf5b0u;
    // PREF instruction (ignored)
    // 0x4cf5b4: 0x7008437f  psraw       $t0, $t0, 13
    ctx->pc = 0x4cf5b4u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi32(GPR_VEC(ctx, 8), 13));
    // 0x4cf5b8: 0x70094b7f  psraw       $t1, $t1, 13
    ctx->pc = 0x4cf5b8u;
    SET_GPR_VEC(ctx, 9, _mm_srai_epi32(GPR_VEC(ctx, 9), 13));
    // 0x4cf5bc: 0x710842a9  pinteh      $t0, $t0, $t0
    ctx->pc = 0x4cf5bcu;
    SET_GPR_VEC(ctx, 8, PS2_PINTEH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf5c0: 0x71294aa9  pinteh      $t1, $t1, $t1
    ctx->pc = 0x4cf5c0u;
    SET_GPR_VEC(ctx, 9, PS2_PINTEH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf5c4: 0x70b92e68  psubub      $a1, $a1, $t9
    ctx->pc = 0x4cf5c4u;
    SET_GPR_VEC(ctx, 5, _mm_subs_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 25)));
    // 0x4cf5c8: 0x70051ea8  pextub      $v1, $zero, $a1
    ctx->pc = 0x4cf5c8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x4cf5cc: 0x70052e88  pextlb      $a1, $zero, $a1
    ctx->pc = 0x4cf5ccu;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x4cf5d0: 0xce400020  pref        0x00, 0x20($s2)
    ctx->pc = 0x4cf5d0u;
    // PREF instruction (ignored)
    // 0x4cf5d4: 0x73052f09  pmulth      $a1, $t8, $a1
    ctx->pc = 0x4cf5d4u;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 24), GPR_VEC(ctx, 5)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 5, result); }
    // 0x4cf5d8: 0x712953a9  pcpyud      $t2, $t1, $t1
    ctx->pc = 0x4cf5d8u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf5dc: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x4cf5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x4cf5e0: 0x71094908  paddh       $t1, $t0, $t1
    ctx->pc = 0x4cf5e0u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x4cf5e4: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x4cf5e4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf5e8: 0x710843a9  pcpyud      $t0, $t0, $t0
    ctx->pc = 0x4cf5e8u;
    SET_GPR_VEC(ctx, 8, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf5ec: 0x70007070  pmfhl.uw    $t6
    ctx->pc = 0x4cf5ecu;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cf5f0: 0x70052bbe  psrlw       $a1, $a1, 14
    ctx->pc = 0x4cf5f0u;
    SET_GPR_VEC(ctx, 5, _mm_srli_epi32(GPR_VEC(ctx, 5), 14));
    // 0x4cf5f4: 0x700e73be  psrlw       $t6, $t6, 14
    ctx->pc = 0x4cf5f4u;
    SET_GPR_VEC(ctx, 14, _mm_srli_epi32(GPR_VEC(ctx, 14), 14));
    // 0x4cf5f8: 0x71c575c8  ppach       $t6, $t6, $a1
    ctx->pc = 0x4cf5f8u;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 5)));
    // 0x4cf5fc: 0x71c84108  paddh       $t0, $t6, $t0
    ctx->pc = 0x4cf5fcu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 8)));
    // 0x4cf600: 0x71c94908  paddh       $t1, $t6, $t1
    ctx->pc = 0x4cf600u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 9)));
    // 0x4cf604: 0x71ca7108  paddh       $t6, $t6, $t2
    ctx->pc = 0x4cf604u;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 10)));
    // 0x4cf608: 0xce600020  pref        0x00, 0x20($s3)
    ctx->pc = 0x4cf608u;
    // PREF instruction (ignored)
    // 0x4cf60c: 0x70c84508  paddsh      $t0, $a2, $t0
    ctx->pc = 0x4cf60cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x4cf610: 0x70c94d08  paddsh      $t1, $a2, $t1
    ctx->pc = 0x4cf610u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x4cf614: 0x70ce7508  paddsh      $t6, $a2, $t6
    ctx->pc = 0x4cf614u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 14)));
    // 0x4cf618: 0x71064568  psubuh      $t0, $t0, $a2
    ctx->pc = 0x4cf618u;
    SET_GPR_VEC(ctx, 8, _mm_sub_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x4cf61c: 0x71264d68  psubuh      $t1, $t1, $a2
    ctx->pc = 0x4cf61cu;
    SET_GPR_VEC(ctx, 9, _mm_sub_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x4cf620: 0x71c67568  psubuh      $t6, $t6, $a2
    ctx->pc = 0x4cf620u;
    SET_GPR_VEC(ctx, 14, _mm_sub_epi16(GPR_VEC(ctx, 14), GPR_VEC(ctx, 6)));
    // 0x4cf624: 0x71203ea8  pextub      $a3, $t1, $zero
    ctx->pc = 0x4cf624u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cf628: 0x710e55a8  pextuh      $t2, $t0, $t6
    ctx->pc = 0x4cf628u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cf62c: 0x71204e88  pextlb      $t1, $t1, $zero
    ctx->pc = 0x4cf62cu;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cf630: 0x710e7588  pextlh      $t6, $t0, $t6
    ctx->pc = 0x4cf630u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cf634: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cf634u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cf638: 0x71ed7948  psubh       $t7, $t7, $t5
    ctx->pc = 0x4cf638u;
    SET_GPR_VEC(ctx, 15, PS2_PSUBH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x4cf63c: 0x71ec7f09  pmulth      $t7, $t7, $t4
    ctx->pc = 0x4cf63cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 15), GPR_VEC(ctx, 12)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 15, result); }
    // 0x4cf640: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cf640u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cf644: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x4cf644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x4cf648: 0x70004870  pmfhl.uw    $t1
    ctx->pc = 0x4cf648u;
    SET_GPR_VEC(ctx, 9, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cf64c: 0x700f7b7f  psraw       $t7, $t7, 13
    ctx->pc = 0x4cf64cu;
    SET_GPR_VEC(ctx, 15, _mm_srai_epi32(GPR_VEC(ctx, 15), 13));
    // 0x4cf650: 0x70094b7f  psraw       $t1, $t1, 13
    ctx->pc = 0x4cf650u;
    SET_GPR_VEC(ctx, 9, _mm_srai_epi32(GPR_VEC(ctx, 9), 13));
    // 0x4cf654: 0x71ef7aa9  pinteh      $t7, $t7, $t7
    ctx->pc = 0x4cf654u;
    SET_GPR_VEC(ctx, 15, PS2_PINTEH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 15)));
    // 0x4cf658: 0x71294aa9  pinteh      $t1, $t1, $t1
    ctx->pc = 0x4cf658u;
    SET_GPR_VEC(ctx, 9, PS2_PINTEH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf65c: 0x73031f09  pmulth      $v1, $t8, $v1
    ctx->pc = 0x4cf65cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 24), GPR_VEC(ctx, 3)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 3, result); }
    // 0x4cf660: 0x712953a9  pcpyud      $t2, $t1, $t1
    ctx->pc = 0x4cf660u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf664: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4cf664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4cf668: 0x71e94908  paddh       $t1, $t7, $t1
    ctx->pc = 0x4cf668u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 9)));
    // 0x4cf66c: 0x7e27ffe0  sq          $a3, -0x20($s1)
    ctx->pc = 0x4cf66cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294967264), GPR_VEC(ctx, 7));
    // 0x4cf670: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x4cf670u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf674: 0x7e0effe0  sq          $t6, -0x20($s0)
    ctx->pc = 0x4cf674u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967264), GPR_VEC(ctx, 14));
    // 0x4cf678: 0x71ef7ba9  pcpyud      $t7, $t7, $t7
    ctx->pc = 0x4cf678u;
    SET_GPR_VEC(ctx, 15, _mm_unpackhi_epi64(GPR_VEC(ctx, 15), GPR_VEC(ctx, 15)));
    // 0x4cf67c: 0x70007070  pmfhl.uw    $t6
    ctx->pc = 0x4cf67cu;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cf680: 0x70031bbe  psrlw       $v1, $v1, 14
    ctx->pc = 0x4cf680u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi32(GPR_VEC(ctx, 3), 14));
    // 0x4cf684: 0x700e73be  psrlw       $t6, $t6, 14
    ctx->pc = 0x4cf684u;
    SET_GPR_VEC(ctx, 14, _mm_srli_epi32(GPR_VEC(ctx, 14), 14));
    // 0x4cf688: 0x71c375c8  ppach       $t6, $t6, $v1
    ctx->pc = 0x4cf688u;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x4cf68c: 0x71cf7908  paddh       $t7, $t6, $t7
    ctx->pc = 0x4cf68cu;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 15)));
    // 0x4cf690: 0x71c94908  paddh       $t1, $t6, $t1
    ctx->pc = 0x4cf690u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 9)));
    // 0x4cf694: 0x71ca7108  paddh       $t6, $t6, $t2
    ctx->pc = 0x4cf694u;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 10)));
    // 0x4cf698: 0x70cf7d08  paddsh      $t7, $a2, $t7
    ctx->pc = 0x4cf698u;
    SET_GPR_VEC(ctx, 15, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 15)));
    // 0x4cf69c: 0x70c94d08  paddsh      $t1, $a2, $t1
    ctx->pc = 0x4cf69cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x4cf6a0: 0x70ce7508  paddsh      $t6, $a2, $t6
    ctx->pc = 0x4cf6a0u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 14)));
    // 0x4cf6a4: 0x71e67d68  psubuh      $t7, $t7, $a2
    ctx->pc = 0x4cf6a4u;
    SET_GPR_VEC(ctx, 15, _mm_sub_epi16(GPR_VEC(ctx, 15), GPR_VEC(ctx, 6)));
    // 0x4cf6a8: 0x71264d68  psubuh      $t1, $t1, $a2
    ctx->pc = 0x4cf6a8u;
    SET_GPR_VEC(ctx, 9, _mm_sub_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x4cf6ac: 0x71c67568  psubuh      $t6, $t6, $a2
    ctx->pc = 0x4cf6acu;
    SET_GPR_VEC(ctx, 14, _mm_sub_epi16(GPR_VEC(ctx, 14), GPR_VEC(ctx, 6)));
    // 0x4cf6b0: 0x71203ea8  pextub      $a3, $t1, $zero
    ctx->pc = 0x4cf6b0u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cf6b4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x4cf6b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x4cf6b8: 0x71ee55a8  pextuh      $t2, $t7, $t6
    ctx->pc = 0x4cf6b8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x4cf6bc: 0x71204e88  pextlb      $t1, $t1, $zero
    ctx->pc = 0x4cf6bcu;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cf6c0: 0x1c80ffa7  bgtz        $a0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x4CF6C0u;
    {
        const bool branch_taken_0x4cf6c0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x4CF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF6C0u;
        // 0x4cf6c4: 0x71ee7588  pextlh      $t6, $t7, $t6 (Delay Slot)
        SET_GPR_VEC(ctx, 14, PS2_PEXTLH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf6c0) {
            ctx->pc = 0x4CF560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cf560;
        }
    }
    ctx->pc = 0x4CF6C8u;
    // 0x4cf6c8: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cf6c8u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cf6cc: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cf6ccu;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cf6d0: 0x7e27fff0  sq          $a3, -0x10($s1)
    ctx->pc = 0x4cf6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294967280), GPR_VEC(ctx, 7));
    // 0x4cf6d4: 0x14800032  bnez        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4CF6D4u;
    {
        const bool branch_taken_0x4cf6d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF6D4u;
        // 0x4cf6d8: 0x7e0efff0  sq          $t6, -0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf6d4) {
            ctx->pc = 0x4CF7A0u;
            goto label_4cf7a0;
        }
    }
    ctx->pc = 0x4CF6DCu;
label_4cf6dc:
    // 0x4cf6dc: 0x96480000  lhu         $t0, 0x0($s2)
    ctx->pc = 0x4cf6dcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cf6e0: 0x96690000  lhu         $t1, 0x0($s3)
    ctx->pc = 0x4cf6e0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cf6e4: 0x71284688  pextlb      $t0, $t1, $t0
    ctx->pc = 0x4cf6e4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x4cf6e8: 0x9c450000  lwu         $a1, 0x0($v0)
    ctx->pc = 0x4cf6e8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cf6ec: 0x70084688  pextlb      $t0, $zero, $t0
    ctx->pc = 0x4cf6ecu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x4cf6f0: 0x9e8b0000  lwu         $t3, 0x0($s4)
    ctx->pc = 0x4cf6f0u;
    SET_GPR_ZE32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf6f4: 0x71084389  pcpyld      $t0, $t0, $t0
    ctx->pc = 0x4cf6f4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf6f8: 0x710d4148  psubh       $t0, $t0, $t5
    ctx->pc = 0x4cf6f8u;
    SET_GPR_VEC(ctx, 8, PS2_PSUBH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x4cf6fc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x4cf6fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x4cf700: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x4cf700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x4cf704: 0x710c4709  pmulth      $t0, $t0, $t4
    ctx->pc = 0x4cf704u;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 12)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 8, result); }
    // 0x4cf708: 0x71652e88  pextlb      $a1, $t3, $a1
    ctx->pc = 0x4cf708u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 5)));
    // 0x4cf70c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4cf70cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4cf710: 0x70004870  pmfhl.uw    $t1
    ctx->pc = 0x4cf710u;
    SET_GPR_VEC(ctx, 9, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cf714: 0x7008437f  psraw       $t0, $t0, 13
    ctx->pc = 0x4cf714u;
    SET_GPR_VEC(ctx, 8, _mm_srai_epi32(GPR_VEC(ctx, 8), 13));
    // 0x4cf718: 0x70094b7f  psraw       $t1, $t1, 13
    ctx->pc = 0x4cf718u;
    SET_GPR_VEC(ctx, 9, _mm_srai_epi32(GPR_VEC(ctx, 9), 13));
    // 0x4cf71c: 0x710842a9  pinteh      $t0, $t0, $t0
    ctx->pc = 0x4cf71cu;
    SET_GPR_VEC(ctx, 8, PS2_PINTEH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf720: 0x71294aa9  pinteh      $t1, $t1, $t1
    ctx->pc = 0x4cf720u;
    SET_GPR_VEC(ctx, 9, PS2_PINTEH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf724: 0x70b92e68  psubub      $a1, $a1, $t9
    ctx->pc = 0x4cf724u;
    SET_GPR_VEC(ctx, 5, _mm_subs_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 25)));
    // 0x4cf728: 0x70052e88  pextlb      $a1, $zero, $a1
    ctx->pc = 0x4cf728u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x4cf72c: 0x73052f09  pmulth      $a1, $t8, $a1
    ctx->pc = 0x4cf72cu;
    { __m128i prod = _mm_madd_epi16(GPR_VEC(ctx, 24), GPR_VEC(ctx, 5)); 
   int32_t p0 = _mm_cvtsi128_si32(prod); 
   int32_t p1 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 4)); 
   int32_t p2 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 8)); 
   int32_t p3 = _mm_cvtsi128_si32(_mm_srli_si128(prod, 12)); 
   int64_t result = (int64_t)p0 + (int64_t)p1 + (int64_t)p2 + (int64_t)p3; 
   ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); 
   SET_GPR_U64(ctx, 5, result); }
    // 0x4cf730: 0x712953a9  pcpyud      $t2, $t1, $t1
    ctx->pc = 0x4cf730u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf734: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4cf734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4cf738: 0x71094908  paddh       $t1, $t0, $t1
    ctx->pc = 0x4cf738u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x4cf73c: 0x71294b89  pcpyld      $t1, $t1, $t1
    ctx->pc = 0x4cf73cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x4cf740: 0x710843a9  pcpyud      $t0, $t0, $t0
    ctx->pc = 0x4cf740u;
    SET_GPR_VEC(ctx, 8, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x4cf744: 0x70007070  pmfhl.uw    $t6
    ctx->pc = 0x4cf744u;
    SET_GPR_VEC(ctx, 14, PS2_PMFHL_UW(ctx->hi, ctx->lo));
    // 0x4cf748: 0x70052bbe  psrlw       $a1, $a1, 14
    ctx->pc = 0x4cf748u;
    SET_GPR_VEC(ctx, 5, _mm_srli_epi32(GPR_VEC(ctx, 5), 14));
    // 0x4cf74c: 0x700e73be  psrlw       $t6, $t6, 14
    ctx->pc = 0x4cf74cu;
    SET_GPR_VEC(ctx, 14, _mm_srli_epi32(GPR_VEC(ctx, 14), 14));
    // 0x4cf750: 0x71c575c8  ppach       $t6, $t6, $a1
    ctx->pc = 0x4cf750u;
    SET_GPR_VEC(ctx, 14, PS2_PPACH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 5)));
    // 0x4cf754: 0x71c84108  paddh       $t0, $t6, $t0
    ctx->pc = 0x4cf754u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 8)));
    // 0x4cf758: 0x71c94908  paddh       $t1, $t6, $t1
    ctx->pc = 0x4cf758u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 9)));
    // 0x4cf75c: 0x71ca7108  paddh       $t6, $t6, $t2
    ctx->pc = 0x4cf75cu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 10)));
    // 0x4cf760: 0x70c84508  paddsh      $t0, $a2, $t0
    ctx->pc = 0x4cf760u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x4cf764: 0x70c94d08  paddsh      $t1, $a2, $t1
    ctx->pc = 0x4cf764u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x4cf768: 0x70ce7508  paddsh      $t6, $a2, $t6
    ctx->pc = 0x4cf768u;
    SET_GPR_VEC(ctx, 14, _mm_adds_epi16(GPR_VEC(ctx, 6), GPR_VEC(ctx, 14)));
    // 0x4cf76c: 0x71064568  psubuh      $t0, $t0, $a2
    ctx->pc = 0x4cf76cu;
    SET_GPR_VEC(ctx, 8, _mm_sub_epi16(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x4cf770: 0x71264d68  psubuh      $t1, $t1, $a2
    ctx->pc = 0x4cf770u;
    SET_GPR_VEC(ctx, 9, _mm_sub_epi16(GPR_VEC(ctx, 9), GPR_VEC(ctx, 6)));
    // 0x4cf774: 0x71c67568  psubuh      $t6, $t6, $a2
    ctx->pc = 0x4cf774u;
    SET_GPR_VEC(ctx, 14, _mm_sub_epi16(GPR_VEC(ctx, 14), GPR_VEC(ctx, 6)));
    // 0x4cf778: 0x71203ea8  pextub      $a3, $t1, $zero
    ctx->pc = 0x4cf778u;
    SET_GPR_VEC(ctx, 7, PS2_PEXTUB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cf77c: 0x710e55a8  pextuh      $t2, $t0, $t6
    ctx->pc = 0x4cf77cu;
    SET_GPR_VEC(ctx, 10, PS2_PEXTUH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cf780: 0x71204e88  pextlb      $t1, $t1, $zero
    ctx->pc = 0x4cf780u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x4cf784: 0x710e7588  pextlh      $t6, $t0, $t6
    ctx->pc = 0x4cf784u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 14)));
    // 0x4cf788: 0x71473ca9  por         $a3, $t2, $a3
    ctx->pc = 0x4cf788u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
    // 0x4cf78c: 0x712e74a9  por         $t6, $t1, $t6
    ctx->pc = 0x4cf78cu;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 14)));
    // 0x4cf790: 0x7e270000  sq          $a3, 0x0($s1)
    ctx->pc = 0x4cf790u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 7));
    // 0x4cf794: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x4cf794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4cf798: 0x7e0e0000  sq          $t6, 0x0($s0)
    ctx->pc = 0x4cf798u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 14));
    // 0x4cf79c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4cf79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4cf7a0:
    // 0x4cf7a0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cf7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cf7a4: 0xac302860  sw          $s0, 0x2860($at)
    ctx->pc = 0x4cf7a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x532860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532860u, _value); } while (0);
    // 0x4cf7a8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cf7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cf7ac: 0xac222868  sw          $v0, 0x2868($at)
    ctx->pc = 0x4cf7acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532868u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532868u, _value); } while (0);
    // 0x4cf7b0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cf7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cf7b4: 0xac312864  sw          $s1, 0x2864($at)
    ctx->pc = 0x4cf7b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x532864u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532864u, _value); } while (0);
    // 0x4cf7b8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cf7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cf7bc: 0xac34286c  sw          $s4, 0x286C($at)
    ctx->pc = 0x4cf7bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x53286Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53286Cu, _value); } while (0);
    // 0x4cf7c0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cf7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cf7c4: 0xac322870  sw          $s2, 0x2870($at)
    ctx->pc = 0x4cf7c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x532870u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532870u, _value); } while (0);
    // 0x4cf7c8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x4cf7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x4cf7cc: 0xac332874  sw          $s3, 0x2874($at)
    ctx->pc = 0x4cf7ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x532874u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532874u, _value); } while (0);
    // 0x4cf7d0: 0xdfb40000  ld          $s4, 0x0($sp)
    ctx->pc = 0x4cf7d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf7d4: 0xdfb30008  ld          $s3, 0x8($sp)
    ctx->pc = 0x4cf7d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cf7d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cf7d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cf7dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4cf7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cf7e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4cf7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cf7e4: 0xdfbd0028  ld          $sp, 0x28($sp)
    ctx->pc = 0x4cf7e4u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cf7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CF7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CF7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CF7F0u;
}
