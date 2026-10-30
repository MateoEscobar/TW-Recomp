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

// Function: sub_00354B38
// Address: 0x354b38 - 0x354bb8
void sub_00354B38_0x354b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354B38_0x354b38");
#endif

    switch (ctx->pc) {
        case 0x354b48u: goto label_354b48;
        case 0x354b60u: goto label_354b60;
        default: break;
    }

    ctx->pc = 0x354b38u;

    // 0x354b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x354b3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354b40: 0xc0d4da6  jal         func_353698
    ctx->pc = 0x354B40u;
    SET_GPR_U32(ctx, 31, 0x354B48u);
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x354B40u, 0x354B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354B48u;
label_354b48:
    // 0x354b48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x354b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x354b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354b50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x354b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x354b54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x354b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b58: 0x2443ba18  addiu       $v1, $v0, -0x45E8
    ctx->pc = 0x354b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949400));
    // 0x354b5c: 0x0  nop
    ctx->pc = 0x354b5cu;
    // NOP
label_354b60:
    // 0x354b60: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x354b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x354b64: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x354B64u;
    {
        const bool branch_taken_0x354b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b64) {
            ctx->pc = 0x354B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354B64u;
            // 0x354b68: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354B98u;
            goto label_354b98;
        }
    }
    ctx->pc = 0x354B6Cu;
    // 0x354b6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x354b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354b70: 0x54450009  bnel        $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x354B70u;
    {
        const bool branch_taken_0x354b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x354b70) {
            ctx->pc = 0x354B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354B70u;
            // 0x354b74: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354B98u;
            goto label_354b98;
        }
    }
    ctx->pc = 0x354B78u;
    // 0x354b78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x354b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354b7c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x354B7Cu;
    {
        const bool branch_taken_0x354b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b7c) {
            ctx->pc = 0x354B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354B7Cu;
            // 0x354b80: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354B98u;
            goto label_354b98;
        }
    }
    ctx->pc = 0x354B84u;
    // 0x354b84: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x354b84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x354b88: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x354B88u;
    {
        const bool branch_taken_0x354b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x354b88) {
            ctx->pc = 0x354B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354B88u;
            // 0x354b8c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354B98u;
            goto label_354b98;
        }
    }
    ctx->pc = 0x354B90u;
    // 0x354b90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x354B90u;
    {
        const bool branch_taken_0x354b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B90u;
        // 0x354b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b90) {
            ctx->pc = 0x354BA8u;
            goto label_354ba8;
        }
    }
    ctx->pc = 0x354B98u;
label_354b98:
    // 0x354b98: 0x2c82000c  sltiu       $v0, $a0, 0xC
    ctx->pc = 0x354b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x354b9c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x354B9Cu;
    {
        const bool branch_taken_0x354b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B9Cu;
        // 0x354ba0: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b9c) {
            ctx->pc = 0x354B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354b60;
        }
    }
    ctx->pc = 0x354BA4u;
    // 0x354ba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354ba8:
    // 0x354ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354bac: 0x3e00008  jr          $ra
    ctx->pc = 0x354BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354BACu;
        // 0x354bb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354BB4u;
    // 0x354bb4: 0x0  nop
    ctx->pc = 0x354bb4u;
    // NOP
    ctx->pc = 0x354bb8u;
}
