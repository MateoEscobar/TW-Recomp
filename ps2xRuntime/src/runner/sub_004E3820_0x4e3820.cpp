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

// Function: sub_004E3820
// Address: 0x4e3820 - 0x4e3928
void sub_004E3820_0x4e3820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3820_0x4e3820");
#endif

    switch (ctx->pc) {
        case 0x4e3820u: goto label_4e3820;
        case 0x4e3824u: goto label_4e3824;
        case 0x4e3828u: goto label_4e3828;
        case 0x4e382cu: goto label_4e382c;
        case 0x4e3830u: goto label_4e3830;
        case 0x4e3834u: goto label_4e3834;
        case 0x4e3838u: goto label_4e3838;
        case 0x4e383cu: goto label_4e383c;
        case 0x4e3840u: goto label_4e3840;
        case 0x4e3844u: goto label_4e3844;
        case 0x4e3848u: goto label_4e3848;
        case 0x4e384cu: goto label_4e384c;
        case 0x4e3850u: goto label_4e3850;
        case 0x4e3854u: goto label_4e3854;
        case 0x4e3858u: goto label_4e3858;
        case 0x4e385cu: goto label_4e385c;
        case 0x4e3860u: goto label_4e3860;
        case 0x4e3864u: goto label_4e3864;
        case 0x4e3868u: goto label_4e3868;
        case 0x4e386cu: goto label_4e386c;
        case 0x4e3870u: goto label_4e3870;
        case 0x4e3874u: goto label_4e3874;
        case 0x4e3878u: goto label_4e3878;
        case 0x4e387cu: goto label_4e387c;
        case 0x4e3880u: goto label_4e3880;
        case 0x4e3884u: goto label_4e3884;
        case 0x4e3888u: goto label_4e3888;
        case 0x4e388cu: goto label_4e388c;
        case 0x4e3890u: goto label_4e3890;
        case 0x4e3894u: goto label_4e3894;
        case 0x4e3898u: goto label_4e3898;
        case 0x4e389cu: goto label_4e389c;
        case 0x4e38a0u: goto label_4e38a0;
        case 0x4e38a4u: goto label_4e38a4;
        case 0x4e38a8u: goto label_4e38a8;
        case 0x4e38acu: goto label_4e38ac;
        case 0x4e38b0u: goto label_4e38b0;
        case 0x4e38b4u: goto label_4e38b4;
        case 0x4e38b8u: goto label_4e38b8;
        case 0x4e38bcu: goto label_4e38bc;
        case 0x4e38c0u: goto label_4e38c0;
        case 0x4e38c4u: goto label_4e38c4;
        case 0x4e38c8u: goto label_4e38c8;
        case 0x4e38ccu: goto label_4e38cc;
        case 0x4e38d0u: goto label_4e38d0;
        case 0x4e38d4u: goto label_4e38d4;
        case 0x4e38d8u: goto label_4e38d8;
        case 0x4e38dcu: goto label_4e38dc;
        case 0x4e38e0u: goto label_4e38e0;
        case 0x4e38e4u: goto label_4e38e4;
        case 0x4e38e8u: goto label_4e38e8;
        case 0x4e38ecu: goto label_4e38ec;
        case 0x4e38f0u: goto label_4e38f0;
        case 0x4e38f4u: goto label_4e38f4;
        case 0x4e38f8u: goto label_4e38f8;
        case 0x4e38fcu: goto label_4e38fc;
        case 0x4e3900u: goto label_4e3900;
        case 0x4e3904u: goto label_4e3904;
        case 0x4e3908u: goto label_4e3908;
        case 0x4e390cu: goto label_4e390c;
        case 0x4e3910u: goto label_4e3910;
        case 0x4e3914u: goto label_4e3914;
        case 0x4e3918u: goto label_4e3918;
        case 0x4e391cu: goto label_4e391c;
        case 0x4e3920u: goto label_4e3920;
        case 0x4e3924u: goto label_4e3924;
        default: break;
    }

    ctx->pc = 0x4e3820u;

label_4e3820:
    // 0x4e3820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e3820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e3824:
    // 0x4e3824: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e3824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4e3828:
    // 0x4e3828: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e3828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e382c:
    // 0x4e382c: 0x24428d78  addiu       $v0, $v0, -0x7288
    ctx->pc = 0x4e382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937976));
label_4e3830:
    // 0x4e3830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e3830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3834:
    // 0x4e3834: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4e3834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4e3838:
    // 0x4e3838: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4e3838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4e383c:
    // 0x4e383c: 0x265003d0  addiu       $s0, $s2, 0x3D0
    ctx->pc = 0x4e383cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
label_4e3840:
    // 0x4e3840: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4e3840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4e3844:
    // 0x4e3844: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e3844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3848:
    // 0x4e3848: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4e3848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4e384c:
    // 0x4e384c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3850:
    // 0x4e3850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e3854:
    // 0x4e3854: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e3854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e3858:
    // 0x4e3858: 0xc0661ba  jal         func_1986E8
label_4e385c:
    if (ctx->pc == 0x4E385Cu) {
        ctx->pc = 0x4E385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3858u;
        // 0x4e385c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3860u;
        goto label_4e3860;
    }
    ctx->pc = 0x4E3858u;
    SET_GPR_U32(ctx, 31, 0x4E3860u);
    ctx->pc = 0x4E385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3858u;
    // 0x4e385c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1986E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986E8u, 0x4E3858u, 0x4E3860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3860u;
label_4e3860:
    // 0x4e3860: 0x26420250  addiu       $v0, $s2, 0x250
    ctx->pc = 0x4e3860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
label_4e3864:
    // 0x4e3864: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_4e3868:
    if (ctx->pc == 0x4E3868u) {
        ctx->pc = 0x4E3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3864u;
        // 0x4e3868: 0x265001f0  addiu       $s0, $s2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E386Cu;
        goto label_4e386c;
    }
    ctx->pc = 0x4E3864u;
    {
        const bool branch_taken_0x4e3864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3864) {
            ctx->pc = 0x4E3868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3864u;
            // 0x4e3868: 0x265001f0  addiu       $s0, $s2, 0x1F0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E389Cu;
            goto label_4e389c;
        }
    }
    ctx->pc = 0x4E386Cu;
label_4e386c:
    // 0x4e386c: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
label_4e3870:
    if (ctx->pc == 0x4E3870u) {
        ctx->pc = 0x4E3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E386Cu;
        // 0x4e3870: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3874u;
        goto label_4e3874;
    }
    ctx->pc = 0x4E386Cu;
    {
        const bool branch_taken_0x4e386c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x4E3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E386Cu;
        // 0x4e3870: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e386c) {
            ctx->pc = 0x4E3898u;
            goto label_4e3898;
        }
    }
    ctx->pc = 0x4E3874u;
label_4e3874:
    // 0x4e3874: 0x2610ffa0  addiu       $s0, $s0, -0x60
    ctx->pc = 0x4e3874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967200));
label_4e3878:
    // 0x4e3878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e3878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e387c:
    // 0x4e387c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e3880:
    // 0x4e3880: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x4e3880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_4e3884:
    // 0x4e3884: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x4e3884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_4e3888:
    // 0x4e3888: 0x60f809  jalr        $v1
label_4e388c:
    if (ctx->pc == 0x4E388Cu) {
        ctx->pc = 0x4E388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3888u;
        // 0x4e388c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3890u;
        goto label_4e3890;
    }
    ctx->pc = 0x4E3888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3890u);
        ctx->pc = 0x4E388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3888u;
        // 0x4e388c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3888u, 0x4E3890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3890u;
label_4e3890:
    // 0x4e3890: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_4e3894:
    if (ctx->pc == 0x4E3894u) {
        ctx->pc = 0x4E3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3890u;
        // 0x4e3894: 0x2610ffa0  addiu       $s0, $s0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3898u;
        goto label_4e3898;
    }
    ctx->pc = 0x4E3890u;
    {
        const bool branch_taken_0x4e3890 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x4E3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3890u;
        // 0x4e3894: 0x2610ffa0  addiu       $s0, $s0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3890) {
            ctx->pc = 0x4E3878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e3878;
        }
    }
    ctx->pc = 0x4E3898u;
label_4e3898:
    // 0x4e3898: 0x265001f0  addiu       $s0, $s2, 0x1F0
    ctx->pc = 0x4e3898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_4e389c:
    // 0x4e389c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e389cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e38a0:
    // 0x4e38a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e38a4:
    // 0x4e38a4: 0xc0661ba  jal         func_1986E8
label_4e38a8:
    if (ctx->pc == 0x4E38A8u) {
        ctx->pc = 0x4E38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38A4u;
        // 0x4e38a8: 0x32740001  andi        $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E38ACu;
        goto label_4e38ac;
    }
    ctx->pc = 0x4E38A4u;
    SET_GPR_U32(ctx, 31, 0x4E38ACu);
    ctx->pc = 0x4E38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E38A4u;
    // 0x4e38a8: 0x32740001  andi        $s4, $s3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1986E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986E8u, 0x4E38A4u, 0x4E38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E38ACu;
label_4e38ac:
    // 0x4e38ac: 0x26510070  addiu       $s1, $s2, 0x70
    ctx->pc = 0x4e38acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_4e38b0:
    // 0x4e38b0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_4e38b4:
    if (ctx->pc == 0x4E38B4u) {
        ctx->pc = 0x4E38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38B0u;
        // 0x4e38b4: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E38B8u;
        goto label_4e38b8;
    }
    ctx->pc = 0x4E38B0u;
    {
        const bool branch_taken_0x4e38b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38B0u;
        // 0x4e38b4: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e38b0) {
            ctx->pc = 0x4E38E8u;
            goto label_4e38e8;
        }
    }
    ctx->pc = 0x4E38B8u;
label_4e38b8:
    // 0x4e38b8: 0x5230000c  beql        $s1, $s0, . + 4 + (0xC << 2)
label_4e38bc:
    if (ctx->pc == 0x4E38BCu) {
        ctx->pc = 0x4E38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38B8u;
        // 0x4e38bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E38C0u;
        goto label_4e38c0;
    }
    ctx->pc = 0x4E38B8u;
    {
        const bool branch_taken_0x4e38b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x4e38b8) {
            ctx->pc = 0x4E38BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E38B8u;
            // 0x4e38bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E38ECu;
            goto label_4e38ec;
        }
    }
    ctx->pc = 0x4E38C0u;
label_4e38c0:
    // 0x4e38c0: 0x2610ffa0  addiu       $s0, $s0, -0x60
    ctx->pc = 0x4e38c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967200));
label_4e38c4:
    // 0x4e38c4: 0x0  nop
    ctx->pc = 0x4e38c4u;
    // NOP
label_4e38c8:
    // 0x4e38c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e38c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e38cc:
    // 0x4e38cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e38d0:
    // 0x4e38d0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x4e38d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_4e38d4:
    // 0x4e38d4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x4e38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_4e38d8:
    // 0x4e38d8: 0x60f809  jalr        $v1
label_4e38dc:
    if (ctx->pc == 0x4E38DCu) {
        ctx->pc = 0x4E38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38D8u;
        // 0x4e38dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E38E0u;
        goto label_4e38e0;
    }
    ctx->pc = 0x4E38D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E38E0u);
        ctx->pc = 0x4E38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38D8u;
        // 0x4e38dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E38D8u, 0x4E38E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E38E0u;
label_4e38e0:
    // 0x4e38e0: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_4e38e4:
    if (ctx->pc == 0x4E38E4u) {
        ctx->pc = 0x4E38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38E0u;
        // 0x4e38e4: 0x2610ffa0  addiu       $s0, $s0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E38E8u;
        goto label_4e38e8;
    }
    ctx->pc = 0x4E38E0u;
    {
        const bool branch_taken_0x4e38e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x4E38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38E0u;
        // 0x4e38e4: 0x2610ffa0  addiu       $s0, $s0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e38e0) {
            ctx->pc = 0x4E38C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e38c8;
        }
    }
    ctx->pc = 0x4E38E8u;
label_4e38e8:
    // 0x4e38e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e38e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e38ec:
    // 0x4e38ec: 0xc0661ba  jal         func_1986E8
label_4e38f0:
    if (ctx->pc == 0x4E38F0u) {
        ctx->pc = 0x4E38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38ECu;
        // 0x4e38f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E38F4u;
        goto label_4e38f4;
    }
    ctx->pc = 0x4E38ECu;
    SET_GPR_U32(ctx, 31, 0x4E38F4u);
    ctx->pc = 0x4E38F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E38ECu;
    // 0x4e38f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1986E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986E8u, 0x4E38ECu, 0x4E38F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E38F4u;
label_4e38f4:
    // 0x4e38f4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_4e38f8:
    if (ctx->pc == 0x4E38F8u) {
        ctx->pc = 0x4E38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38F4u;
        // 0x4e38f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E38FCu;
        goto label_4e38fc;
    }
    ctx->pc = 0x4E38F4u;
    {
        const bool branch_taken_0x4e38f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38F4u;
        // 0x4e38f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e38f4) {
            ctx->pc = 0x4E3908u;
            goto label_4e3908;
        }
    }
    ctx->pc = 0x4E38FCu;
label_4e38fc:
    // 0x4e38fc: 0xc10b208  jal         func_42C820
label_4e3900:
    if (ctx->pc == 0x4E3900u) {
        ctx->pc = 0x4E3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E38FCu;
        // 0x4e3900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3904u;
        goto label_4e3904;
    }
    ctx->pc = 0x4E38FCu;
    SET_GPR_U32(ctx, 31, 0x4E3904u);
    ctx->pc = 0x4E3900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E38FCu;
    // 0x4e3900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4E38FCu, 0x4E3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3904u;
label_4e3904:
    // 0x4e3904: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4e3904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e3908:
    // 0x4e3908: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4e3908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e390c:
    // 0x4e390c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e390cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e3910:
    // 0x4e3910: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4e3910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3914:
    // 0x4e3914: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4e3914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3918:
    // 0x4e3918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e391c:
    // 0x4e391c: 0x3e00008  jr          $ra
label_4e3920:
    if (ctx->pc == 0x4E3920u) {
        ctx->pc = 0x4E3920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E391Cu;
        // 0x4e3920: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3924u;
        goto label_4e3924;
    }
    ctx->pc = 0x4E391Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E391Cu;
        // 0x4e3920: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E391Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3924u;
label_4e3924:
    // 0x4e3924: 0x0  nop
    ctx->pc = 0x4e3924u;
    // NOP
    ctx->pc = 0x4e3928u;
}
