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

// Function: sub_001ACB90
// Address: 0x1acb90 - 0x1acc28
void sub_001ACB90_0x1acb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACB90_0x1acb90");
#endif

    switch (ctx->pc) {
        case 0x1acb90u: goto label_1acb90;
        case 0x1acb94u: goto label_1acb94;
        case 0x1acb98u: goto label_1acb98;
        case 0x1acb9cu: goto label_1acb9c;
        case 0x1acba0u: goto label_1acba0;
        case 0x1acba4u: goto label_1acba4;
        case 0x1acba8u: goto label_1acba8;
        case 0x1acbacu: goto label_1acbac;
        case 0x1acbb0u: goto label_1acbb0;
        case 0x1acbb4u: goto label_1acbb4;
        case 0x1acbb8u: goto label_1acbb8;
        case 0x1acbbcu: goto label_1acbbc;
        case 0x1acbc0u: goto label_1acbc0;
        case 0x1acbc4u: goto label_1acbc4;
        case 0x1acbc8u: goto label_1acbc8;
        case 0x1acbccu: goto label_1acbcc;
        case 0x1acbd0u: goto label_1acbd0;
        case 0x1acbd4u: goto label_1acbd4;
        case 0x1acbd8u: goto label_1acbd8;
        case 0x1acbdcu: goto label_1acbdc;
        case 0x1acbe0u: goto label_1acbe0;
        case 0x1acbe4u: goto label_1acbe4;
        case 0x1acbe8u: goto label_1acbe8;
        case 0x1acbecu: goto label_1acbec;
        case 0x1acbf0u: goto label_1acbf0;
        case 0x1acbf4u: goto label_1acbf4;
        case 0x1acbf8u: goto label_1acbf8;
        case 0x1acbfcu: goto label_1acbfc;
        case 0x1acc00u: goto label_1acc00;
        case 0x1acc04u: goto label_1acc04;
        case 0x1acc08u: goto label_1acc08;
        case 0x1acc0cu: goto label_1acc0c;
        case 0x1acc10u: goto label_1acc10;
        case 0x1acc14u: goto label_1acc14;
        case 0x1acc18u: goto label_1acc18;
        case 0x1acc1cu: goto label_1acc1c;
        case 0x1acc20u: goto label_1acc20;
        case 0x1acc24u: goto label_1acc24;
        default: break;
    }

    ctx->pc = 0x1acb90u;

label_1acb90:
    // 0x1acb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1acb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1acb94:
    // 0x1acb94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1acb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1acb98:
    // 0x1acb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1acb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1acb9c:
    // 0x1acb9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acba0:
    // 0x1acba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1acba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1acba4:
    // 0x1acba4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1acba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1acba8:
    // 0x1acba8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1acba8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1acbac:
    // 0x1acbac: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1acbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1acbb0:
    // 0x1acbb0: 0x40f809  jalr        $v0
label_1acbb4:
    if (ctx->pc == 0x1ACBB4u) {
        ctx->pc = 0x1ACBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBB0u;
        // 0x1acbb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBB8u;
        goto label_1acbb8;
    }
    ctx->pc = 0x1ACBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACBB8u);
        ctx->pc = 0x1ACBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBB0u;
        // 0x1acbb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACBB0u, 0x1ACBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACBB8u;
label_1acbb8:
    // 0x1acbb8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_1acbbc:
    if (ctx->pc == 0x1ACBBCu) {
        ctx->pc = 0x1ACBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBB8u;
        // 0x1acbbc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBC0u;
        goto label_1acbc0;
    }
    ctx->pc = 0x1ACBB8u;
    {
        const bool branch_taken_0x1acbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acbb8) {
            ctx->pc = 0x1ACBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACBB8u;
            // 0x1acbbc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACC18u;
            goto label_1acc18;
        }
    }
    ctx->pc = 0x1ACBC0u;
label_1acbc0:
    // 0x1acbc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1acbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1acbc4:
    // 0x1acbc4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1acbc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1acbc8:
    // 0x1acbc8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1acbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1acbcc:
    // 0x1acbcc: 0x40f809  jalr        $v0
label_1acbd0:
    if (ctx->pc == 0x1ACBD0u) {
        ctx->pc = 0x1ACBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBCCu;
        // 0x1acbd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBD4u;
        goto label_1acbd4;
    }
    ctx->pc = 0x1ACBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACBD4u);
        ctx->pc = 0x1ACBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBCCu;
        // 0x1acbd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACBCCu, 0x1ACBD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACBD4u;
label_1acbd4:
    // 0x1acbd4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1acbd8:
    if (ctx->pc == 0x1ACBD8u) {
        ctx->pc = 0x1ACBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBD4u;
        // 0x1acbd8: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBDCu;
        goto label_1acbdc;
    }
    ctx->pc = 0x1ACBD4u;
    {
        const bool branch_taken_0x1acbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBD4u;
        // 0x1acbd8: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbd4) {
            ctx->pc = 0x1ACC14u;
            goto label_1acc14;
        }
    }
    ctx->pc = 0x1ACBDCu;
label_1acbdc:
    // 0x1acbdc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1acbdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1acbe0:
    // 0x1acbe0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1acbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1acbe4:
    // 0x1acbe4: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
label_1acbe8:
    if (ctx->pc == 0x1ACBE8u) {
        ctx->pc = 0x1ACBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBE4u;
        // 0x1acbe8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBECu;
        goto label_1acbec;
    }
    ctx->pc = 0x1ACBE4u;
    {
        const bool branch_taken_0x1acbe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1ACBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBE4u;
        // 0x1acbe8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbe4) {
            ctx->pc = 0x1ACC14u;
            goto label_1acc14;
        }
    }
    ctx->pc = 0x1ACBECu;
label_1acbec:
    // 0x1acbec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1acbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1acbf0:
    // 0x1acbf0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1acbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1acbf4:
    // 0x1acbf4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1acbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1acbf8:
    // 0x1acbf8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1acbf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1acbfc:
    // 0x1acbfc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1acbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1acc00:
    // 0x1acc00: 0x60f809  jalr        $v1
label_1acc04:
    if (ctx->pc == 0x1ACC04u) {
        ctx->pc = 0x1ACC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC00u;
        // 0x1acc04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC08u;
        goto label_1acc08;
    }
    ctx->pc = 0x1ACC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ACC08u);
        ctx->pc = 0x1ACC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC00u;
        // 0x1acc04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACC00u, 0x1ACC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACC08u;
label_1acc08:
    // 0x1acc08: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1acc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1acc0c:
    // 0x1acc0c: 0x5602fff8  bnel        $s0, $v0, . + 4 + (-0x8 << 2)
label_1acc10:
    if (ctx->pc == 0x1ACC10u) {
        ctx->pc = 0x1ACC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC0Cu;
        // 0x1acc10: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC14u;
        goto label_1acc14;
    }
    ctx->pc = 0x1ACC0Cu;
    {
        const bool branch_taken_0x1acc0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acc0c) {
            ctx->pc = 0x1ACC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACC0Cu;
            // 0x1acc10: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acbf0;
        }
    }
    ctx->pc = 0x1ACC14u;
label_1acc14:
    // 0x1acc14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1acc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1acc18:
    // 0x1acc18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1acc18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1acc1c:
    // 0x1acc1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acc20:
    // 0x1acc20: 0x3e00008  jr          $ra
label_1acc24:
    if (ctx->pc == 0x1ACC24u) {
        ctx->pc = 0x1ACC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC20u;
        // 0x1acc24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC28u;
        goto label_fallthrough_0x1acc20;
    }
    ctx->pc = 0x1ACC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC20u;
        // 0x1acc24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1acc20:
    ctx->pc = 0x1ACC28u;
}
