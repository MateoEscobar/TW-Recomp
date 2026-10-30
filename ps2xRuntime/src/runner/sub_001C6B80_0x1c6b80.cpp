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

// Function: sub_001C6B80
// Address: 0x1c6b80 - 0x1c6be8
void sub_001C6B80_0x1c6b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6B80_0x1c6b80");
#endif

    switch (ctx->pc) {
        case 0x1c6b80u: goto label_1c6b80;
        case 0x1c6b84u: goto label_1c6b84;
        case 0x1c6b88u: goto label_1c6b88;
        case 0x1c6b8cu: goto label_1c6b8c;
        case 0x1c6b90u: goto label_1c6b90;
        case 0x1c6b94u: goto label_1c6b94;
        case 0x1c6b98u: goto label_1c6b98;
        case 0x1c6b9cu: goto label_1c6b9c;
        case 0x1c6ba0u: goto label_1c6ba0;
        case 0x1c6ba4u: goto label_1c6ba4;
        case 0x1c6ba8u: goto label_1c6ba8;
        case 0x1c6bacu: goto label_1c6bac;
        case 0x1c6bb0u: goto label_1c6bb0;
        case 0x1c6bb4u: goto label_1c6bb4;
        case 0x1c6bb8u: goto label_1c6bb8;
        case 0x1c6bbcu: goto label_1c6bbc;
        case 0x1c6bc0u: goto label_1c6bc0;
        case 0x1c6bc4u: goto label_1c6bc4;
        case 0x1c6bc8u: goto label_1c6bc8;
        case 0x1c6bccu: goto label_1c6bcc;
        case 0x1c6bd0u: goto label_1c6bd0;
        case 0x1c6bd4u: goto label_1c6bd4;
        case 0x1c6bd8u: goto label_1c6bd8;
        case 0x1c6bdcu: goto label_1c6bdc;
        case 0x1c6be0u: goto label_1c6be0;
        case 0x1c6be4u: goto label_1c6be4;
        default: break;
    }

    ctx->pc = 0x1c6b80u;

label_1c6b80:
    // 0x1c6b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c6b84:
    // 0x1c6b84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c6b88:
    // 0x1c6b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c6b8c:
    // 0x1c6b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6b90:
    // 0x1c6b90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c6b94:
    // 0x1c6b94: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1c6b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1c6b98:
    // 0x1c6b98: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1c6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1c6b9c:
    // 0x1c6b9c: 0x40f809  jalr        $v0
label_1c6ba0:
    if (ctx->pc == 0x1C6BA0u) {
        ctx->pc = 0x1C6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B9Cu;
        // 0x1c6ba0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6BA4u;
        goto label_1c6ba4;
    }
    ctx->pc = 0x1C6B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C6BA4u);
        ctx->pc = 0x1C6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B9Cu;
        // 0x1c6ba0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B9Cu, 0x1C6BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6BA4u;
label_1c6ba4:
    // 0x1c6ba4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c6ba8:
    if (ctx->pc == 0x1C6BA8u) {
        ctx->pc = 0x1C6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BA4u;
        // 0x1c6ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6BACu;
        goto label_1c6bac;
    }
    ctx->pc = 0x1C6BA4u;
    {
        const bool branch_taken_0x1c6ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BA4u;
        // 0x1c6ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ba4) {
            ctx->pc = 0x1C6BD8u;
            goto label_1c6bd8;
        }
    }
    ctx->pc = 0x1C6BACu;
label_1c6bac:
    // 0x1c6bac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c6bb0:
    // 0x1c6bb0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c6bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1c6bb4:
    // 0x1c6bb4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1c6bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1c6bb8:
    // 0x1c6bb8: 0x60f809  jalr        $v1
label_1c6bbc:
    if (ctx->pc == 0x1C6BBCu) {
        ctx->pc = 0x1C6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BB8u;
        // 0x1c6bbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6BC0u;
        goto label_1c6bc0;
    }
    ctx->pc = 0x1C6BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C6BC0u);
        ctx->pc = 0x1C6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BB8u;
        // 0x1c6bbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BB8u, 0x1C6BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6BC0u;
label_1c6bc0:
    // 0x1c6bc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c6bc4:
    // 0x1c6bc4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1c6bc8:
    // 0x1c6bc8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1c6bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1c6bcc:
    // 0x1c6bcc: 0x60f809  jalr        $v1
label_1c6bd0:
    if (ctx->pc == 0x1C6BD0u) {
        ctx->pc = 0x1C6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BCCu;
        // 0x1c6bd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6BD4u;
        goto label_1c6bd4;
    }
    ctx->pc = 0x1C6BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C6BD4u);
        ctx->pc = 0x1C6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BCCu;
        // 0x1c6bd0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BCCu, 0x1C6BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6BD4u;
label_1c6bd4:
    // 0x1c6bd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6bd8:
    // 0x1c6bd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c6bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c6bdc:
    // 0x1c6bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6be0:
    // 0x1c6be0: 0x3e00008  jr          $ra
label_1c6be4:
    if (ctx->pc == 0x1C6BE4u) {
        ctx->pc = 0x1C6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BE0u;
        // 0x1c6be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6BE8u;
        goto label_fallthrough_0x1c6be0;
    }
    ctx->pc = 0x1C6BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BE0u;
        // 0x1c6be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c6be0:
    ctx->pc = 0x1C6BE8u;
}
