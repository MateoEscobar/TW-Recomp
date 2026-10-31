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

// Function: sub_00204E70
// Address: 0x204e70 - 0x204ea8
void sub_00204E70_0x204e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204E70_0x204e70");
#endif

    switch (ctx->pc) {
        case 0x204e94u: goto label_204e94;
        default: break;
    }

    ctx->pc = 0x204e70u;

    // 0x204e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204e74: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x204e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x204e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204e7c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x204e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x204e80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204E80u;
    {
        const bool branch_taken_0x204e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204E80u;
        // 0x204e84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204e80) {
            ctx->pc = 0x204E98u;
            goto label_204e98;
        }
    }
    ctx->pc = 0x204E88u;
    // 0x204e88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x204e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x204e8c: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x204E8Cu;
    SET_GPR_U32(ctx, 31, 0x204E94u);
    ctx->pc = 0x204E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E8Cu;
    // 0x204e90: 0x8c45f588  lw          $a1, -0xA78($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x204E8Cu, 0x204E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E94u;
label_204e94:
    // 0x204e94: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x204e94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_204e98:
    // 0x204e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204e9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x204e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x204EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EA0u;
        // 0x204ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204EA8u;
}
