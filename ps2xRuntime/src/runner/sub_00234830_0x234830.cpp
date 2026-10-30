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

// Function: sub_00234830
// Address: 0x234830 - 0x2348f8
void sub_00234830_0x234830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234830_0x234830");
#endif

    switch (ctx->pc) {
        case 0x234830u: goto label_234830;
        case 0x234834u: goto label_234834;
        case 0x234838u: goto label_234838;
        case 0x23483cu: goto label_23483c;
        case 0x234840u: goto label_234840;
        case 0x234844u: goto label_234844;
        case 0x234848u: goto label_234848;
        case 0x23484cu: goto label_23484c;
        case 0x234850u: goto label_234850;
        case 0x234854u: goto label_234854;
        case 0x234858u: goto label_234858;
        case 0x23485cu: goto label_23485c;
        case 0x234860u: goto label_234860;
        case 0x234864u: goto label_234864;
        case 0x234868u: goto label_234868;
        case 0x23486cu: goto label_23486c;
        case 0x234870u: goto label_234870;
        case 0x234874u: goto label_234874;
        case 0x234878u: goto label_234878;
        case 0x23487cu: goto label_23487c;
        case 0x234880u: goto label_234880;
        case 0x234884u: goto label_234884;
        case 0x234888u: goto label_234888;
        case 0x23488cu: goto label_23488c;
        case 0x234890u: goto label_234890;
        case 0x234894u: goto label_234894;
        case 0x234898u: goto label_234898;
        case 0x23489cu: goto label_23489c;
        case 0x2348a0u: goto label_2348a0;
        case 0x2348a4u: goto label_2348a4;
        case 0x2348a8u: goto label_2348a8;
        case 0x2348acu: goto label_2348ac;
        case 0x2348b0u: goto label_2348b0;
        case 0x2348b4u: goto label_2348b4;
        case 0x2348b8u: goto label_2348b8;
        case 0x2348bcu: goto label_2348bc;
        case 0x2348c0u: goto label_2348c0;
        case 0x2348c4u: goto label_2348c4;
        case 0x2348c8u: goto label_2348c8;
        case 0x2348ccu: goto label_2348cc;
        case 0x2348d0u: goto label_2348d0;
        case 0x2348d4u: goto label_2348d4;
        case 0x2348d8u: goto label_2348d8;
        case 0x2348dcu: goto label_2348dc;
        case 0x2348e0u: goto label_2348e0;
        case 0x2348e4u: goto label_2348e4;
        case 0x2348e8u: goto label_2348e8;
        case 0x2348ecu: goto label_2348ec;
        case 0x2348f0u: goto label_2348f0;
        case 0x2348f4u: goto label_2348f4;
        default: break;
    }

    ctx->pc = 0x234830u;

label_234830:
    // 0x234830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x234830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_234834:
    // 0x234834: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x234834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_234838:
    // 0x234838: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x234838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_23483c:
    // 0x23483c: 0x8c450238  lw          $a1, 0x238($v0)
    ctx->pc = 0x23483cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
label_234840:
    // 0x234840: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x234840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234844:
    // 0x234844: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x234844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_234848:
    // 0x234848: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x234848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_23484c:
    // 0x23484c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x23484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_234850:
    // 0x234850: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_234854:
    if (ctx->pc == 0x234854u) {
        ctx->pc = 0x234854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234850u;
        // 0x234854: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234858u;
        goto label_234858;
    }
    ctx->pc = 0x234850u;
    {
        const bool branch_taken_0x234850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x234854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234850u;
        // 0x234854: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234850) {
            ctx->pc = 0x2348D8u;
            goto label_2348d8;
        }
    }
    ctx->pc = 0x234858u;
label_234858:
    // 0x234858: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_23485c:
    if (ctx->pc == 0x23485Cu) {
        ctx->pc = 0x23485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234858u;
        // 0x23485c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234860u;
        goto label_234860;
    }
    ctx->pc = 0x234858u;
    {
        const bool branch_taken_0x234858 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234858u;
        // 0x23485c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234858) {
            ctx->pc = 0x2348D8u;
            goto label_2348d8;
        }
    }
    ctx->pc = 0x234860u;
label_234860:
    // 0x234860: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x234860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_234864:
    // 0x234864: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x234864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_234868:
    // 0x234868: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x234868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_23486c:
    // 0x23486c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x23486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_234870:
    // 0x234870: 0x40f809  jalr        $v0
label_234874:
    if (ctx->pc == 0x234874u) {
        ctx->pc = 0x234874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234870u;
        // 0x234874: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234878u;
        goto label_234878;
    }
    ctx->pc = 0x234870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234878u);
        ctx->pc = 0x234874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234870u;
        // 0x234874: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234870u, 0x234878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234878u;
label_234878:
    // 0x234878: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_23487c:
    if (ctx->pc == 0x23487Cu) {
        ctx->pc = 0x23487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234878u;
        // 0x23487c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234880u;
        goto label_234880;
    }
    ctx->pc = 0x234878u;
    {
        const bool branch_taken_0x234878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234878u;
        // 0x23487c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234878) {
            ctx->pc = 0x2348D8u;
            goto label_2348d8;
        }
    }
    ctx->pc = 0x234880u;
label_234880:
    // 0x234880: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x234880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_234884:
    // 0x234884: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x234884u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234888:
    // 0x234888: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x234888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_23488c:
    // 0x23488c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x23488cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_234890:
    // 0x234890: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x234890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_234894:
    // 0x234894: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x234894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_234898:
    // 0x234898: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x234898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_23489c:
    // 0x23489c: 0x40f809  jalr        $v0
label_2348a0:
    if (ctx->pc == 0x2348A0u) {
        ctx->pc = 0x2348A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23489Cu;
        // 0x2348a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348A4u;
        goto label_2348a4;
    }
    ctx->pc = 0x23489Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2348A4u);
        ctx->pc = 0x2348A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23489Cu;
        // 0x2348a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23489Cu, 0x2348A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2348A4u;
label_2348a4:
    // 0x2348a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2348a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2348a8:
    // 0x2348a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2348a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2348ac:
    // 0x2348ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2348acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2348b0:
    // 0x2348b0: 0x40f809  jalr        $v0
label_2348b4:
    if (ctx->pc == 0x2348B4u) {
        ctx->pc = 0x2348B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348B0u;
        // 0x2348b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348B8u;
        goto label_2348b8;
    }
    ctx->pc = 0x2348B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2348B8u);
        ctx->pc = 0x2348B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348B0u;
        // 0x2348b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2348B0u, 0x2348B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2348B8u;
label_2348b8:
    // 0x2348b8: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x2348b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_2348bc:
    // 0x2348bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2348bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2348c0:
    // 0x2348c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2348c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2348c4:
    // 0x2348c4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2348c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2348c8:
    // 0x2348c8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2348c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2348cc:
    // 0x2348cc: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2348ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2348d0:
    // 0x2348d0: 0x60f809  jalr        $v1
label_2348d4:
    if (ctx->pc == 0x2348D4u) {
        ctx->pc = 0x2348D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348D0u;
        // 0x2348d4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348D8u;
        goto label_2348d8;
    }
    ctx->pc = 0x2348D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2348D8u);
        ctx->pc = 0x2348D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348D0u;
        // 0x2348d4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2348D0u, 0x2348D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2348D8u;
label_2348d8:
    // 0x2348d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2348d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2348dc:
    // 0x2348dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2348dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2348e0:
    // 0x2348e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2348e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2348e4:
    // 0x2348e4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2348e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2348e8:
    // 0x2348e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2348e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2348ec:
    // 0x2348ec: 0x3e00008  jr          $ra
label_2348f0:
    if (ctx->pc == 0x2348F0u) {
        ctx->pc = 0x2348F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348ECu;
        // 0x2348f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348F4u;
        goto label_2348f4;
    }
    ctx->pc = 0x2348ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2348F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348ECu;
        // 0x2348f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2348ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2348F4u;
label_2348f4:
    // 0x2348f4: 0x0  nop
    ctx->pc = 0x2348f4u;
    // NOP
    ctx->pc = 0x2348f8u;
}
