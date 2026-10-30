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

// Function: sub_004F37E8
// Address: 0x4f37e8 - 0x4f39e8
void sub_004F37E8_0x4f37e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F37E8_0x4f37e8");
#endif

    switch (ctx->pc) {
        case 0x4f37e8u: goto label_4f37e8;
        case 0x4f37ecu: goto label_4f37ec;
        case 0x4f37f0u: goto label_4f37f0;
        case 0x4f37f4u: goto label_4f37f4;
        case 0x4f37f8u: goto label_4f37f8;
        case 0x4f37fcu: goto label_4f37fc;
        case 0x4f3800u: goto label_4f3800;
        case 0x4f3804u: goto label_4f3804;
        case 0x4f3808u: goto label_4f3808;
        case 0x4f380cu: goto label_4f380c;
        case 0x4f3810u: goto label_4f3810;
        case 0x4f3814u: goto label_4f3814;
        case 0x4f3818u: goto label_4f3818;
        case 0x4f381cu: goto label_4f381c;
        case 0x4f3820u: goto label_4f3820;
        case 0x4f3824u: goto label_4f3824;
        case 0x4f3828u: goto label_4f3828;
        case 0x4f382cu: goto label_4f382c;
        case 0x4f3830u: goto label_4f3830;
        case 0x4f3834u: goto label_4f3834;
        case 0x4f3838u: goto label_4f3838;
        case 0x4f383cu: goto label_4f383c;
        case 0x4f3840u: goto label_4f3840;
        case 0x4f3844u: goto label_4f3844;
        case 0x4f3848u: goto label_4f3848;
        case 0x4f384cu: goto label_4f384c;
        case 0x4f3850u: goto label_4f3850;
        case 0x4f3854u: goto label_4f3854;
        case 0x4f3858u: goto label_4f3858;
        case 0x4f385cu: goto label_4f385c;
        case 0x4f3860u: goto label_4f3860;
        case 0x4f3864u: goto label_4f3864;
        case 0x4f3868u: goto label_4f3868;
        case 0x4f386cu: goto label_4f386c;
        case 0x4f3870u: goto label_4f3870;
        case 0x4f3874u: goto label_4f3874;
        case 0x4f3878u: goto label_4f3878;
        case 0x4f387cu: goto label_4f387c;
        case 0x4f3880u: goto label_4f3880;
        case 0x4f3884u: goto label_4f3884;
        case 0x4f3888u: goto label_4f3888;
        case 0x4f388cu: goto label_4f388c;
        case 0x4f3890u: goto label_4f3890;
        case 0x4f3894u: goto label_4f3894;
        case 0x4f3898u: goto label_4f3898;
        case 0x4f389cu: goto label_4f389c;
        case 0x4f38a0u: goto label_4f38a0;
        case 0x4f38a4u: goto label_4f38a4;
        case 0x4f38a8u: goto label_4f38a8;
        case 0x4f38acu: goto label_4f38ac;
        case 0x4f38b0u: goto label_4f38b0;
        case 0x4f38b4u: goto label_4f38b4;
        case 0x4f38b8u: goto label_4f38b8;
        case 0x4f38bcu: goto label_4f38bc;
        case 0x4f38c0u: goto label_4f38c0;
        case 0x4f38c4u: goto label_4f38c4;
        case 0x4f38c8u: goto label_4f38c8;
        case 0x4f38ccu: goto label_4f38cc;
        case 0x4f38d0u: goto label_4f38d0;
        case 0x4f38d4u: goto label_4f38d4;
        case 0x4f38d8u: goto label_4f38d8;
        case 0x4f38dcu: goto label_4f38dc;
        case 0x4f38e0u: goto label_4f38e0;
        case 0x4f38e4u: goto label_4f38e4;
        case 0x4f38e8u: goto label_4f38e8;
        case 0x4f38ecu: goto label_4f38ec;
        case 0x4f38f0u: goto label_4f38f0;
        case 0x4f38f4u: goto label_4f38f4;
        case 0x4f38f8u: goto label_4f38f8;
        case 0x4f38fcu: goto label_4f38fc;
        case 0x4f3900u: goto label_4f3900;
        case 0x4f3904u: goto label_4f3904;
        case 0x4f3908u: goto label_4f3908;
        case 0x4f390cu: goto label_4f390c;
        case 0x4f3910u: goto label_4f3910;
        case 0x4f3914u: goto label_4f3914;
        case 0x4f3918u: goto label_4f3918;
        case 0x4f391cu: goto label_4f391c;
        case 0x4f3920u: goto label_4f3920;
        case 0x4f3924u: goto label_4f3924;
        case 0x4f3928u: goto label_4f3928;
        case 0x4f392cu: goto label_4f392c;
        case 0x4f3930u: goto label_4f3930;
        case 0x4f3934u: goto label_4f3934;
        case 0x4f3938u: goto label_4f3938;
        case 0x4f393cu: goto label_4f393c;
        case 0x4f3940u: goto label_4f3940;
        case 0x4f3944u: goto label_4f3944;
        case 0x4f3948u: goto label_4f3948;
        case 0x4f394cu: goto label_4f394c;
        case 0x4f3950u: goto label_4f3950;
        case 0x4f3954u: goto label_4f3954;
        case 0x4f3958u: goto label_4f3958;
        case 0x4f395cu: goto label_4f395c;
        case 0x4f3960u: goto label_4f3960;
        case 0x4f3964u: goto label_4f3964;
        case 0x4f3968u: goto label_4f3968;
        case 0x4f396cu: goto label_4f396c;
        case 0x4f3970u: goto label_4f3970;
        case 0x4f3974u: goto label_4f3974;
        case 0x4f3978u: goto label_4f3978;
        case 0x4f397cu: goto label_4f397c;
        case 0x4f3980u: goto label_4f3980;
        case 0x4f3984u: goto label_4f3984;
        case 0x4f3988u: goto label_4f3988;
        case 0x4f398cu: goto label_4f398c;
        case 0x4f3990u: goto label_4f3990;
        case 0x4f3994u: goto label_4f3994;
        case 0x4f3998u: goto label_4f3998;
        case 0x4f399cu: goto label_4f399c;
        case 0x4f39a0u: goto label_4f39a0;
        case 0x4f39a4u: goto label_4f39a4;
        case 0x4f39a8u: goto label_4f39a8;
        case 0x4f39acu: goto label_4f39ac;
        case 0x4f39b0u: goto label_4f39b0;
        case 0x4f39b4u: goto label_4f39b4;
        case 0x4f39b8u: goto label_4f39b8;
        case 0x4f39bcu: goto label_4f39bc;
        case 0x4f39c0u: goto label_4f39c0;
        case 0x4f39c4u: goto label_4f39c4;
        case 0x4f39c8u: goto label_4f39c8;
        case 0x4f39ccu: goto label_4f39cc;
        case 0x4f39d0u: goto label_4f39d0;
        case 0x4f39d4u: goto label_4f39d4;
        case 0x4f39d8u: goto label_4f39d8;
        case 0x4f39dcu: goto label_4f39dc;
        case 0x4f39e0u: goto label_4f39e0;
        case 0x4f39e4u: goto label_4f39e4;
        default: break;
    }

    ctx->pc = 0x4f37e8u;

label_4f37e8:
    // 0x4f37e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4f37e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4f37ec:
    // 0x4f37ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f37ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f37f0:
    // 0x4f37f0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4f37f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4f37f4:
    // 0x4f37f4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4f37f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4f37f8:
    // 0x4f37f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f37f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f37fc:
    // 0x4f37fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f37fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4f3800:
    // 0x4f3800: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x4f3800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4f3804:
    // 0x4f3804: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4f3804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4f3808:
    // 0x4f3808: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4f3808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f380c:
    // 0x4f380c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4f380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4f3810:
    // 0x4f3810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f3810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3814:
    // 0x4f3814: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4f3814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4f3818:
    // 0x4f3818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f3818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f381c:
    // 0x4f381c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4f381cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4f3820:
    // 0x4f3820: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4f3820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4f3824:
    // 0x4f3824: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4f3824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4f3828:
    // 0x4f3828: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x4f3828u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4f382c:
    // 0x4f382c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4f382cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4f3830:
    // 0x4f3830: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x4f3830u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4f3834:
    // 0x4f3834: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_4f3838:
    if (ctx->pc == 0x4F3838u) {
        ctx->pc = 0x4F3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3834u;
        // 0x4f3838: 0x24083  sra         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F383Cu;
        goto label_4f383c;
    }
    ctx->pc = 0x4F3834u;
    {
        const bool branch_taken_0x4f3834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3834u;
        // 0x4f3838: 0x24083  sra         $t0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3834) {
            ctx->pc = 0x4F3864u;
            goto label_4f3864;
        }
    }
    ctx->pc = 0x4F383Cu;
label_4f383c:
    // 0x4f383c: 0x0  nop
    ctx->pc = 0x4f383cu;
    // NOP
label_4f3840:
    // 0x4f3840: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x4f3840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_4f3844:
    // 0x4f3844: 0x718b8  dsll        $v1, $a3, 2
    ctx->pc = 0x4f3844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 2);
label_4f3848:
    // 0x4f3848: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4f3848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4f384c:
    // 0x4f384c: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x4f384cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
label_4f3850:
    // 0x4f3850: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4f3850u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4f3854:
    // 0x4f3854: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x4f3854u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_4f3858:
    // 0x4f3858: 0x62382d  daddu       $a3, $v1, $v0
    ctx->pc = 0x4f3858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_4f385c:
    // 0x4f385c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_4f3860:
    if (ctx->pc == 0x4F3860u) {
        ctx->pc = 0x4F3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F385Cu;
        // 0x4f3860: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3864u;
        goto label_4f3864;
    }
    ctx->pc = 0x4F385Cu;
    {
        const bool branch_taken_0x4f385c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F385Cu;
        // 0x4f3860: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f385c) {
            ctx->pc = 0x4F3840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f3840;
        }
    }
    ctx->pc = 0x4F3864u;
label_4f3864:
    // 0x4f3864: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x4f3864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_4f3868:
    // 0x4f3868: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4f3868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4f386c:
    // 0x4f386c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_4f3870:
    if (ctx->pc == 0x4F3870u) {
        ctx->pc = 0x4F3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F386Cu;
        // 0x4f3870: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3874u;
        goto label_4f3874;
    }
    ctx->pc = 0x4F386Cu;
    {
        const bool branch_taken_0x4f386c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f386c) {
            ctx->pc = 0x4F3870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F386Cu;
            // 0x4f3870: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3874u;
            goto label_4f3874;
        }
    }
    ctx->pc = 0x4F3874u;
label_4f3874:
    // 0x4f3874: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x4f3874u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_4f3878:
    // 0x4f3878: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4f3878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4f387c:
    // 0x4f387c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4f387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4f3880:
    // 0x4f3880: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4f3880u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3884:
    // 0x4f3884: 0xa010  mfhi        $s4
    ctx->pc = 0x4f3884u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_4f3888:
    // 0x4f3888: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x4f3888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4f388c:
    // 0x4f388c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f3890:
    // 0x4f3890: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4f3890u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f3894:
    // 0x4f3894: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
label_4f3898:
    if (ctx->pc == 0x4F3898u) {
        ctx->pc = 0x4F3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3894u;
        // 0x4f3898: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F389Cu;
        goto label_4f389c;
    }
    ctx->pc = 0x4F3894u;
    {
        const bool branch_taken_0x4f3894 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3894u;
        // 0x4f3898: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3894) {
            ctx->pc = 0x4F391Cu;
            goto label_4f391c;
        }
    }
    ctx->pc = 0x4F389Cu;
label_4f389c:
    // 0x4f389c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4f389cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f38a0:
    // 0x4f38a0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x4f38a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4f38a4:
    // 0x4f38a4: 0x0  nop
    ctx->pc = 0x4f38a4u;
    // NOP
label_4f38a8:
    // 0x4f38a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_4f38ac:
    if (ctx->pc == 0x4F38ACu) {
        ctx->pc = 0x4F38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F38A8u;
        // 0x4f38ac: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F38B0u;
        goto label_4f38b0;
    }
    ctx->pc = 0x4F38A8u;
    {
        const bool branch_taken_0x4f38a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F38A8u;
        // 0x4f38ac: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f38a8) {
            ctx->pc = 0x4F38BCu;
            goto label_4f38bc;
        }
    }
    ctx->pc = 0x4F38B0u;
label_4f38b0:
    // 0x4f38b0: 0x14c30016  bne         $a2, $v1, . + 4 + (0x16 << 2)
label_4f38b4:
    if (ctx->pc == 0x4F38B4u) {
        ctx->pc = 0x4F38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F38B0u;
        // 0x4f38b4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F38B8u;
        goto label_4f38b8;
    }
    ctx->pc = 0x4F38B0u;
    {
        const bool branch_taken_0x4f38b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x4F38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F38B0u;
        // 0x4f38b4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f38b0) {
            ctx->pc = 0x4F390Cu;
            goto label_4f390c;
        }
    }
    ctx->pc = 0x4F38B8u;
label_4f38b8:
    // 0x4f38b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f38b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4f38bc:
    // 0x4f38bc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4f38bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4f38c0:
    // 0x4f38c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4f38c4:
    if (ctx->pc == 0x4F38C4u) {
        ctx->pc = 0x4F38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F38C0u;
        // 0x4f38c4: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F38C8u;
        goto label_4f38c8;
    }
    ctx->pc = 0x4F38C0u;
    {
        const bool branch_taken_0x4f38c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F38C0u;
        // 0x4f38c4: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f38c0) {
            ctx->pc = 0x4F38D8u;
            goto label_4f38d8;
        }
    }
    ctx->pc = 0x4F38C8u;
label_4f38c8:
    // 0x4f38c8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x4f38c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4f38cc:
    // 0x4f38cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_4f38d0:
    if (ctx->pc == 0x4F38D0u) {
        ctx->pc = 0x4F38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F38CCu;
        // 0x4f38d0: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F38D4u;
        goto label_4f38d4;
    }
    ctx->pc = 0x4F38CCu;
    {
        const bool branch_taken_0x4f38cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F38CCu;
        // 0x4f38d0: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f38cc) {
            ctx->pc = 0x4F38B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f38b0;
        }
    }
    ctx->pc = 0x4F38D4u;
label_4f38d4:
    // 0x4f38d4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4f38d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4f38d8:
    // 0x4f38d8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x4f38d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4f38dc:
    // 0x4f38dc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x4f38dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_4f38e0:
    // 0x4f38e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4f38e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f38e4:
    // 0x4f38e4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4f38e8:
    if (ctx->pc == 0x4F38E8u) {
        ctx->pc = 0x4F38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F38E4u;
        // 0x4f38e8: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F38ECu;
        goto label_4f38ec;
    }
    ctx->pc = 0x4F38E4u;
    {
        const bool branch_taken_0x4f38e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f38e4) {
            ctx->pc = 0x4F38E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F38E4u;
            // 0x4f38e8: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3914u;
            goto label_4f3914;
        }
    }
    ctx->pc = 0x4F38ECu;
label_4f38ec:
    // 0x4f38ec: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4f38ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_4f38f0:
    // 0x4f38f0: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x4f38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_4f38f4:
    // 0x4f38f4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4f38f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4f38f8:
    // 0x4f38f8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4f38f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4f38fc:
    // 0x4f38fc: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x4f38fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f3900:
    // 0x4f3900: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x4f3900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f3904:
    // 0x4f3904: 0x1000002e  b           . + 4 + (0x2E << 2)
label_4f3908:
    if (ctx->pc == 0x4F3908u) {
        ctx->pc = 0x4F3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3904u;
        // 0x4f3908: 0xae280008  sw          $t0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F390Cu;
        goto label_4f390c;
    }
    ctx->pc = 0x4F3904u;
    {
        const bool branch_taken_0x4f3904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3904u;
        // 0x4f3908: 0xae280008  sw          $t0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3904) {
            ctx->pc = 0x4F39C0u;
            goto label_4f39c0;
        }
    }
    ctx->pc = 0x4F390Cu;
label_4f390c:
    // 0x4f390c: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_4f3910:
    if (ctx->pc == 0x4F3910u) {
        ctx->pc = 0x4F3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F390Cu;
        // 0x4f3910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3914u;
        goto label_4f3914;
    }
    ctx->pc = 0x4F390Cu;
    {
        const bool branch_taken_0x4f390c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F390Cu;
        // 0x4f3910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f390c) {
            ctx->pc = 0x4F38E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f38e4;
        }
    }
    ctx->pc = 0x4F3914u;
label_4f3914:
    // 0x4f3914: 0x54e0ffe4  bnel        $a3, $zero, . + 4 + (-0x1C << 2)
label_4f3918:
    if (ctx->pc == 0x4F3918u) {
        ctx->pc = 0x4F3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3914u;
        // 0x4f3918: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F391Cu;
        goto label_4f391c;
    }
    ctx->pc = 0x4F3914u;
    {
        const bool branch_taken_0x4f3914 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f3914) {
            ctx->pc = 0x4F3918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3914u;
            // 0x4f3918: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F38A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f38a8;
        }
    }
    ctx->pc = 0x4F391Cu;
label_4f391c:
    // 0x4f391c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f391cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f3920:
    // 0x4f3920: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4f3920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_4f3924:
    // 0x4f3924: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4f3924u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4f3928:
    // 0x4f3928: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x4f3928u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_4f392c:
    // 0x4f392c: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x4f392cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_4f3930:
    // 0x4f3930: 0x24a50cd8  addiu       $a1, $a1, 0xCD8
    ctx->pc = 0x4f3930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3288));
label_4f3934:
    // 0x4f3934: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4f3934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4f3938:
    // 0x4f3938: 0x25080cb0  addiu       $t0, $t0, 0xCB0
    ctx->pc = 0x4f3938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3248));
label_4f393c:
    // 0x4f393c: 0x254a0ce0  addiu       $t2, $t2, 0xCE0
    ctx->pc = 0x4f393cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3296));
label_4f3940:
    // 0x4f3940: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4f3940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4f3944:
    // 0x4f3944: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f3944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f3948:
    // 0x4f3948: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f3948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f394c:
    // 0x4f394c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f3950:
    // 0x4f3950: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f3950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f3954:
    // 0x4f3954: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4f3954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4f3958:
    // 0x4f3958: 0x40f809  jalr        $v0
label_4f395c:
    if (ctx->pc == 0x4F395Cu) {
        ctx->pc = 0x4F395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3958u;
        // 0x4f395c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3960u;
        goto label_4f3960;
    }
    ctx->pc = 0x4F3958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F3960u);
        ctx->pc = 0x4F395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3958u;
        // 0x4f395c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3958u, 0x4F3960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3960u;
label_4f3960:
    // 0x4f3960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f3960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f3964:
    // 0x4f3964: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x4f3964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4f3968:
    // 0x4f3968: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4f396c:
    if (ctx->pc == 0x4F396Cu) {
        ctx->pc = 0x4F396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3968u;
        // 0x4f396c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3970u;
        goto label_4f3970;
    }
    ctx->pc = 0x4F3968u;
    {
        const bool branch_taken_0x4f3968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3968u;
        // 0x4f396c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3968) {
            ctx->pc = 0x4F3980u;
            goto label_4f3980;
        }
    }
    ctx->pc = 0x4F3970u;
label_4f3970:
    // 0x4f3970: 0x6a660007  ldl         $a2, 0x7($s3)
    ctx->pc = 0x4f3970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4f3974:
    // 0x4f3974: 0x6e660000  ldr         $a2, 0x0($s3)
    ctx->pc = 0x4f3974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4f3978:
    // 0x4f3978: 0xb0a6000b  sdl         $a2, 0xB($a1)
    ctx->pc = 0x4f3978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f397c:
    // 0x4f397c: 0xb4a60004  sdr         $a2, 0x4($a1)
    ctx->pc = 0x4f397cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f3980:
    // 0x4f3980: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x4f3980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
label_4f3984:
    // 0x4f3984: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x4f3984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4f3988:
    // 0x4f3988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f3988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f398c:
    // 0x4f398c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4f398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4f3990:
    // 0x4f3990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f3990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f3994:
    // 0x4f3994: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4f3994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_4f3998:
    // 0x4f3998: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4f3998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_4f399c:
    // 0x4f399c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4f399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4f39a0:
    // 0x4f39a0: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x4f39a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_4f39a4:
    // 0x4f39a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f39a8:
    // 0x4f39a8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4f39a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_4f39ac:
    // 0x4f39ac: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x4f39acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4f39b0:
    // 0x4f39b0: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x4f39b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4f39b4:
    // 0x4f39b4: 0xb2250007  sdl         $a1, 0x7($s1)
    ctx->pc = 0x4f39b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f39b8:
    // 0x4f39b8: 0xb6250000  sdr         $a1, 0x0($s1)
    ctx->pc = 0x4f39b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f39bc:
    // 0x4f39bc: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x4f39bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_4f39c0:
    // 0x4f39c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f39c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f39c4:
    // 0x4f39c4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4f39c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f39c8:
    // 0x4f39c8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4f39c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f39cc:
    // 0x4f39cc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4f39ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f39d0:
    // 0x4f39d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4f39d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f39d4:
    // 0x4f39d4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4f39d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f39d8:
    // 0x4f39d8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4f39d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f39dc:
    // 0x4f39dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f39dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f39e0:
    // 0x4f39e0: 0x3e00008  jr          $ra
label_4f39e4:
    if (ctx->pc == 0x4F39E4u) {
        ctx->pc = 0x4F39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F39E0u;
        // 0x4f39e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F39E8u;
        goto label_fallthrough_0x4f39e0;
    }
    ctx->pc = 0x4F39E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F39E0u;
        // 0x4f39e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F39E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f39e0:
    ctx->pc = 0x4F39E8u;
}
