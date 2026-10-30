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

// Function: sub_00168F58
// Address: 0x168f58 - 0x168fe0
void sub_00168F58_0x168f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168F58_0x168f58");
#endif

    switch (ctx->pc) {
        case 0x168f64u: goto label_168f64;
        default: break;
    }

    ctx->pc = 0x168f58u;

    // 0x168f58: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x168f58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f5c: 0x54a70003  bnel        $a1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x168F5Cu;
    {
        const bool branch_taken_0x168f5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x168f5c) {
            ctx->pc = 0x168F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168F5Cu;
            // 0x168f60: 0x8ce3002c  lw          $v1, 0x2C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168F6Cu;
            goto label_168f6c;
        }
    }
    ctx->pc = 0x168F64u;
label_168f64:
    // 0x168f64: 0x3e00008  jr          $ra
    ctx->pc = 0x168F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F64u;
        // 0x168f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168F6Cu;
label_168f6c:
    // 0x168f6c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x168f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x168f70: 0x0  nop
    ctx->pc = 0x168f70u;
    // NOP
    // 0x168f74: 0x1064fffb  beq         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x168F74u;
    {
        const bool branch_taken_0x168f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x168F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F74u;
        // 0x168f78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f74) {
            ctx->pc = 0x168F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168f64;
        }
    }
    ctx->pc = 0x168F7Cu;
    // 0x168f7c: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x168F7Cu;
    {
        const bool branch_taken_0x168f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x168F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F7Cu;
        // 0x168f80: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f7c) {
            ctx->pc = 0x168F8Cu;
            goto label_168f8c;
        }
    }
    ctx->pc = 0x168F84u;
    // 0x168f84: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x168F84u;
    {
        const bool branch_taken_0x168f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x168F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F84u;
        // 0x168f88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f84) {
            ctx->pc = 0x168F9Cu;
            goto label_168f9c;
        }
    }
    ctx->pc = 0x168F8Cu;
label_168f8c:
    // 0x168f8c: 0x1086fff5  beq         $a0, $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x168F8Cu;
    {
        const bool branch_taken_0x168f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x168F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F8Cu;
        // 0x168f90: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f8c) {
            ctx->pc = 0x168F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168f64;
        }
    }
    ctx->pc = 0x168F94u;
    // 0x168f94: 0x1082fff3  beq         $a0, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x168F94u;
    {
        const bool branch_taken_0x168f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x168F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F94u;
        // 0x168f98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f94) {
            ctx->pc = 0x168F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168f64;
        }
    }
    ctx->pc = 0x168F9Cu;
label_168f9c:
    // 0x168f9c: 0x8c46cb7c  lw          $a2, -0x3484($v0)
    ctx->pc = 0x168f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953852)));
    // 0x168fa0: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x168FA0u;
    {
        const bool branch_taken_0x168fa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x168fa0) {
            ctx->pc = 0x168FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168FA0u;
            // 0x168fa4: 0x84a30030  lh          $v1, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168FC4u;
            goto label_168fc4;
        }
    }
    ctx->pc = 0x168FA8u;
    // 0x168fa8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x168fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x168fac: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x168facu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x168fb0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x168fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x168fb4: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x168fb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x168fb8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x168FB8u;
    {
        const bool branch_taken_0x168fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168fb8) {
            ctx->pc = 0x168F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168f64;
        }
    }
    ctx->pc = 0x168FC0u;
    // 0x168fc0: 0x84a30030  lh          $v1, 0x30($a1)
    ctx->pc = 0x168fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_168fc4:
    // 0x168fc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168fc8: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x168fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x168fcc: 0x642004  sllv        $a0, $a0, $v1
    ctx->pc = 0x168fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x168fd0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x168fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x168fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x168FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FD4u;
        // 0x168fd8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168FDCu;
    // 0x168fdc: 0x0  nop
    ctx->pc = 0x168fdcu;
    // NOP
    ctx->pc = 0x168fe0u;
}
