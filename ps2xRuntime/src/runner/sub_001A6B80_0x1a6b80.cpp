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

// Function: sub_001A6B80
// Address: 0x1a6b80 - 0x1a6c38
void sub_001A6B80_0x1a6b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6B80_0x1a6b80");
#endif

    switch (ctx->pc) {
        case 0x1a6b80u: goto label_1a6b80;
        case 0x1a6b84u: goto label_1a6b84;
        case 0x1a6b88u: goto label_1a6b88;
        case 0x1a6b8cu: goto label_1a6b8c;
        case 0x1a6b90u: goto label_1a6b90;
        case 0x1a6b94u: goto label_1a6b94;
        case 0x1a6b98u: goto label_1a6b98;
        case 0x1a6b9cu: goto label_1a6b9c;
        case 0x1a6ba0u: goto label_1a6ba0;
        case 0x1a6ba4u: goto label_1a6ba4;
        case 0x1a6ba8u: goto label_1a6ba8;
        case 0x1a6bacu: goto label_1a6bac;
        case 0x1a6bb0u: goto label_1a6bb0;
        case 0x1a6bb4u: goto label_1a6bb4;
        case 0x1a6bb8u: goto label_1a6bb8;
        case 0x1a6bbcu: goto label_1a6bbc;
        case 0x1a6bc0u: goto label_1a6bc0;
        case 0x1a6bc4u: goto label_1a6bc4;
        case 0x1a6bc8u: goto label_1a6bc8;
        case 0x1a6bccu: goto label_1a6bcc;
        case 0x1a6bd0u: goto label_1a6bd0;
        case 0x1a6bd4u: goto label_1a6bd4;
        case 0x1a6bd8u: goto label_1a6bd8;
        case 0x1a6bdcu: goto label_1a6bdc;
        case 0x1a6be0u: goto label_1a6be0;
        case 0x1a6be4u: goto label_1a6be4;
        case 0x1a6be8u: goto label_1a6be8;
        case 0x1a6becu: goto label_1a6bec;
        case 0x1a6bf0u: goto label_1a6bf0;
        case 0x1a6bf4u: goto label_1a6bf4;
        case 0x1a6bf8u: goto label_1a6bf8;
        case 0x1a6bfcu: goto label_1a6bfc;
        case 0x1a6c00u: goto label_1a6c00;
        case 0x1a6c04u: goto label_1a6c04;
        case 0x1a6c08u: goto label_1a6c08;
        case 0x1a6c0cu: goto label_1a6c0c;
        case 0x1a6c10u: goto label_1a6c10;
        case 0x1a6c14u: goto label_1a6c14;
        case 0x1a6c18u: goto label_1a6c18;
        case 0x1a6c1cu: goto label_1a6c1c;
        case 0x1a6c20u: goto label_1a6c20;
        case 0x1a6c24u: goto label_1a6c24;
        case 0x1a6c28u: goto label_1a6c28;
        case 0x1a6c2cu: goto label_1a6c2c;
        case 0x1a6c30u: goto label_1a6c30;
        case 0x1a6c34u: goto label_1a6c34;
        default: break;
    }

    ctx->pc = 0x1a6b80u;

label_1a6b80:
    // 0x1a6b80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a6b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a6b84:
    // 0x1a6b84: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a6b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1a6b88:
    // 0x1a6b88: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a6b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1a6b8c:
    // 0x1a6b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b90:
    // 0x1a6b90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a6b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a6b94:
    // 0x1a6b94: 0x24910940  addiu       $s1, $a0, 0x940
    ctx->pc = 0x1a6b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2368));
label_1a6b98:
    // 0x1a6b98: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a6b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1a6b9c:
    // 0x1a6b9c: 0x24920340  addiu       $s2, $a0, 0x340
    ctx->pc = 0x1a6b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
label_1a6ba0:
    // 0x1a6ba0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a6ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1a6ba4:
    // 0x1a6ba4: 0x24930f40  addiu       $s3, $a0, 0xF40
    ctx->pc = 0x1a6ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 3904));
label_1a6ba8:
    // 0x1a6ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6bac:
    // 0x1a6bac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a6bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6bb0:
    // 0x1a6bb0: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x1a6bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_1a6bb4:
    // 0x1a6bb4: 0xac800244  sw          $zero, 0x244($a0)
    ctx->pc = 0x1a6bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 0));
label_1a6bb8:
    // 0x1a6bb8: 0xac801554  sw          $zero, 0x1554($a0)
    ctx->pc = 0x1a6bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5460), GPR_U32(ctx, 0));
label_1a6bbc:
    // 0x1a6bbc: 0xac801558  sw          $zero, 0x1558($a0)
    ctx->pc = 0x1a6bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5464), GPR_U32(ctx, 0));
label_1a6bc0:
    // 0x1a6bc0: 0x8e020940  lw          $v0, 0x940($s0)
    ctx->pc = 0x1a6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2368)));
label_1a6bc4:
    // 0x1a6bc4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a6bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1a6bc8:
    // 0x1a6bc8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1a6bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1a6bcc:
    // 0x1a6bcc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1a6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1a6bd0:
    // 0x1a6bd0: 0x60f809  jalr        $v1
label_1a6bd4:
    if (ctx->pc == 0x1A6BD4u) {
        ctx->pc = 0x1A6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BD0u;
        // 0x1a6bd4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BD8u;
        goto label_1a6bd8;
    }
    ctx->pc = 0x1A6BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6BD8u);
        ctx->pc = 0x1A6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BD0u;
        // 0x1a6bd4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6BD0u, 0x1A6BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6BD8u;
label_1a6bd8:
    // 0x1a6bd8: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1a6bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1a6bdc:
    // 0x1a6bdc: 0x8e020340  lw          $v0, 0x340($s0)
    ctx->pc = 0x1a6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
label_1a6be0:
    // 0x1a6be0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1a6be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1a6be4:
    // 0x1a6be4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1a6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1a6be8:
    // 0x1a6be8: 0x60f809  jalr        $v1
label_1a6bec:
    if (ctx->pc == 0x1A6BECu) {
        ctx->pc = 0x1A6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BE8u;
        // 0x1a6bec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BF0u;
        goto label_1a6bf0;
    }
    ctx->pc = 0x1A6BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6BF0u);
        ctx->pc = 0x1A6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BE8u;
        // 0x1a6bec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6BE8u, 0x1A6BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6BF0u;
label_1a6bf0:
    // 0x1a6bf0: 0x26520100  addiu       $s2, $s2, 0x100
    ctx->pc = 0x1a6bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_1a6bf4:
    // 0x1a6bf4: 0x8e020f40  lw          $v0, 0xF40($s0)
    ctx->pc = 0x1a6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3904)));
label_1a6bf8:
    // 0x1a6bf8: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1a6bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1a6bfc:
    // 0x1a6bfc: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1a6bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1a6c00:
    // 0x1a6c00: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1a6c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1a6c04:
    // 0x1a6c04: 0x60f809  jalr        $v1
label_1a6c08:
    if (ctx->pc == 0x1A6C08u) {
        ctx->pc = 0x1A6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C04u;
        // 0x1a6c08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C0Cu;
        goto label_1a6c0c;
    }
    ctx->pc = 0x1A6C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A6C0Cu);
        ctx->pc = 0x1A6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C04u;
        // 0x1a6c08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C04u, 0x1A6C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6C0Cu;
label_1a6c0c:
    // 0x1a6c0c: 0x2e820006  sltiu       $v0, $s4, 0x6
    ctx->pc = 0x1a6c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1a6c10:
    // 0x1a6c10: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1a6c14:
    if (ctx->pc == 0x1A6C14u) {
        ctx->pc = 0x1A6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C10u;
        // 0x1a6c14: 0x26730100  addiu       $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C18u;
        goto label_1a6c18;
    }
    ctx->pc = 0x1A6C10u;
    {
        const bool branch_taken_0x1a6c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C10u;
        // 0x1a6c14: 0x26730100  addiu       $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c10) {
            ctx->pc = 0x1A6BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6bc0;
        }
    }
    ctx->pc = 0x1A6C18u;
label_1a6c18:
    // 0x1a6c18: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a6c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a6c1c:
    // 0x1a6c1c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a6c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6c20:
    // 0x1a6c20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a6c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6c24:
    // 0x1a6c24: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a6c24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6c28:
    // 0x1a6c28: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a6c28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6c2c:
    // 0x1a6c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6c30:
    // 0x1a6c30: 0x3e00008  jr          $ra
label_1a6c34:
    if (ctx->pc == 0x1A6C34u) {
        ctx->pc = 0x1A6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C30u;
        // 0x1a6c34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C38u;
        goto label_fallthrough_0x1a6c30;
    }
    ctx->pc = 0x1A6C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C30u;
        // 0x1a6c34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6c30:
    ctx->pc = 0x1A6C38u;
}
