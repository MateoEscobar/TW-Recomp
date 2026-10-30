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

// Function: sub_001D0C68
// Address: 0x1d0c68 - 0x1d0d18
void sub_001D0C68_0x1d0c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0C68_0x1d0c68");
#endif

    switch (ctx->pc) {
        case 0x1d0c68u: goto label_1d0c68;
        case 0x1d0c6cu: goto label_1d0c6c;
        case 0x1d0c70u: goto label_1d0c70;
        case 0x1d0c74u: goto label_1d0c74;
        case 0x1d0c78u: goto label_1d0c78;
        case 0x1d0c7cu: goto label_1d0c7c;
        case 0x1d0c80u: goto label_1d0c80;
        case 0x1d0c84u: goto label_1d0c84;
        case 0x1d0c88u: goto label_1d0c88;
        case 0x1d0c8cu: goto label_1d0c8c;
        case 0x1d0c90u: goto label_1d0c90;
        case 0x1d0c94u: goto label_1d0c94;
        case 0x1d0c98u: goto label_1d0c98;
        case 0x1d0c9cu: goto label_1d0c9c;
        case 0x1d0ca0u: goto label_1d0ca0;
        case 0x1d0ca4u: goto label_1d0ca4;
        case 0x1d0ca8u: goto label_1d0ca8;
        case 0x1d0cacu: goto label_1d0cac;
        case 0x1d0cb0u: goto label_1d0cb0;
        case 0x1d0cb4u: goto label_1d0cb4;
        case 0x1d0cb8u: goto label_1d0cb8;
        case 0x1d0cbcu: goto label_1d0cbc;
        case 0x1d0cc0u: goto label_1d0cc0;
        case 0x1d0cc4u: goto label_1d0cc4;
        case 0x1d0cc8u: goto label_1d0cc8;
        case 0x1d0cccu: goto label_1d0ccc;
        case 0x1d0cd0u: goto label_1d0cd0;
        case 0x1d0cd4u: goto label_1d0cd4;
        case 0x1d0cd8u: goto label_1d0cd8;
        case 0x1d0cdcu: goto label_1d0cdc;
        case 0x1d0ce0u: goto label_1d0ce0;
        case 0x1d0ce4u: goto label_1d0ce4;
        case 0x1d0ce8u: goto label_1d0ce8;
        case 0x1d0cecu: goto label_1d0cec;
        case 0x1d0cf0u: goto label_1d0cf0;
        case 0x1d0cf4u: goto label_1d0cf4;
        case 0x1d0cf8u: goto label_1d0cf8;
        case 0x1d0cfcu: goto label_1d0cfc;
        case 0x1d0d00u: goto label_1d0d00;
        case 0x1d0d04u: goto label_1d0d04;
        case 0x1d0d08u: goto label_1d0d08;
        case 0x1d0d0cu: goto label_1d0d0c;
        case 0x1d0d10u: goto label_1d0d10;
        case 0x1d0d14u: goto label_1d0d14;
        default: break;
    }

    ctx->pc = 0x1d0c68u;

label_1d0c68:
    // 0x1d0c68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d0c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d0c6c:
    // 0x1d0c6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d0c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d0c70:
    // 0x1d0c70: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d0c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1d0c74:
    // 0x1d0c74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d0c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0c78:
    // 0x1d0c78: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d0c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1d0c7c:
    // 0x1d0c7c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1d0c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1d0c80:
    // 0x1d0c80: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1d0c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1d0c84:
    // 0x1d0c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d0c88:
    // 0x1d0c88: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1d0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d0c8c:
    // 0x1d0c8c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1d0c90:
    if (ctx->pc == 0x1D0C90u) {
        ctx->pc = 0x1D0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C8Cu;
        // 0x1d0c90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C94u;
        goto label_1d0c94;
    }
    ctx->pc = 0x1D0C8Cu;
    {
        const bool branch_taken_0x1d0c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C8Cu;
        // 0x1d0c90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c8c) {
            ctx->pc = 0x1D0CF8u;
            goto label_1d0cf8;
        }
    }
    ctx->pc = 0x1D0C94u;
label_1d0c94:
    // 0x1d0c94: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x1d0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_1d0c98:
    // 0x1d0c98: 0xc073462  jal         func_1CD188
label_1d0c9c:
    if (ctx->pc == 0x1D0C9Cu) {
        ctx->pc = 0x1D0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C98u;
        // 0x1d0c9c: 0x26500250  addiu       $s0, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0CA0u;
        goto label_1d0ca0;
    }
    ctx->pc = 0x1D0C98u;
    SET_GPR_U32(ctx, 31, 0x1D0CA0u);
    ctx->pc = 0x1D0C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C98u;
    // 0x1d0c9c: 0x26500250  addiu       $s0, $s2, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1D0C98u, 0x1D0CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CA0u;
label_1d0ca0:
    // 0x1d0ca0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d0ca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ca4:
    // 0x1d0ca4: 0x26440140  addiu       $a0, $s2, 0x140
    ctx->pc = 0x1d0ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_1d0ca8:
    // 0x1d0ca8: 0xc0687c4  jal         func_1A1F10
label_1d0cac:
    if (ctx->pc == 0x1D0CACu) {
        ctx->pc = 0x1D0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CA8u;
        // 0x1d0cac: 0x26530450  addiu       $s3, $s2, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0CB0u;
        goto label_1d0cb0;
    }
    ctx->pc = 0x1D0CA8u;
    SET_GPR_U32(ctx, 31, 0x1D0CB0u);
    ctx->pc = 0x1D0CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CA8u;
    // 0x1d0cac: 0x26530450  addiu       $s3, $s2, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1D0CA8u, 0x1D0CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CB0u;
label_1d0cb0:
    // 0x1d0cb0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1d0cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0cb4:
    // 0x1d0cb4: 0x0  nop
    ctx->pc = 0x1d0cb4u;
    // NOP
label_1d0cb8:
    // 0x1d0cb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0cbc:
    // 0x1d0cbc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d0cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d0cc0:
    // 0x1d0cc0: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1d0cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1d0cc4:
    // 0x1d0cc4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1d0cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1d0cc8:
    // 0x1d0cc8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1d0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1d0ccc:
    // 0x1d0ccc: 0x40f809  jalr        $v0
label_1d0cd0:
    if (ctx->pc == 0x1D0CD0u) {
        ctx->pc = 0x1D0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CCCu;
        // 0x1d0cd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0CD4u;
        goto label_1d0cd4;
    }
    ctx->pc = 0x1D0CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0CD4u);
        ctx->pc = 0x1D0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CCCu;
        // 0x1d0cd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0CCCu, 0x1D0CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0CD4u;
label_1d0cd4:
    // 0x1d0cd4: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1d0cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1d0cd8:
    // 0x1d0cd8: 0xc073462  jal         func_1CD188
label_1d0cdc:
    if (ctx->pc == 0x1D0CDCu) {
        ctx->pc = 0x1D0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CD8u;
        // 0x1d0cdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0CE0u;
        goto label_1d0ce0;
    }
    ctx->pc = 0x1D0CD8u;
    SET_GPR_U32(ctx, 31, 0x1D0CE0u);
    ctx->pc = 0x1D0CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CD8u;
    // 0x1d0cdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1D0CD8u, 0x1D0CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CE0u;
label_1d0ce0:
    // 0x1d0ce0: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x1d0ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d0ce4:
    // 0x1d0ce4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1d0ce8:
    if (ctx->pc == 0x1D0CE8u) {
        ctx->pc = 0x1D0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CE4u;
        // 0x1d0ce8: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0CECu;
        goto label_1d0cec;
    }
    ctx->pc = 0x1D0CE4u;
    {
        const bool branch_taken_0x1d0ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CE4u;
        // 0x1d0ce8: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ce4) {
            ctx->pc = 0x1D0CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0cb8;
        }
    }
    ctx->pc = 0x1D0CECu;
label_1d0cec:
    // 0x1d0cec: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1d0cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1d0cf0:
    // 0x1d0cf0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1d0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1d0cf4:
    // 0x1d0cf4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d0cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d0cf8:
    // 0x1d0cf8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d0cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d0cfc:
    // 0x1d0cfc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d0cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d0d00:
    // 0x1d0d00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1d0d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0d04:
    // 0x1d0d04: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1d0d04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0d08:
    // 0x1d0d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0d0c:
    // 0x1d0d0c: 0x3e00008  jr          $ra
label_1d0d10:
    if (ctx->pc == 0x1D0D10u) {
        ctx->pc = 0x1D0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D0Cu;
        // 0x1d0d10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0D14u;
        goto label_1d0d14;
    }
    ctx->pc = 0x1D0D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D0Cu;
        // 0x1d0d10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0D14u;
label_1d0d14:
    // 0x1d0d14: 0x0  nop
    ctx->pc = 0x1d0d14u;
    // NOP
    ctx->pc = 0x1d0d18u;
}
