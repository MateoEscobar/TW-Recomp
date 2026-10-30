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

// Function: sub_002C2FB0
// Address: 0x2c2fb0 - 0x2c2fd8
void sub_002C2FB0_0x2c2fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2FB0_0x2c2fb0");
#endif

    ctx->pc = 0x2c2fb0u;

    // 0x2c2fb0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2c2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c2fb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c2fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c2fb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2FB8u;
    {
        const bool branch_taken_0x2c2fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2FB8u;
        // 0x2c2fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2fb8) {
            ctx->pc = 0x2C2FC4u;
            goto label_2c2fc4;
        }
    }
    ctx->pc = 0x2C2FC0u;
    // 0x2c2fc0: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x2c2fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_2c2fc4:
    // 0x2c2fc4: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x2c2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2c2fc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2FCCu;
        // 0x2c2fd0: 0xac430144  sw          $v1, 0x144($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2FD4u;
    // 0x2c2fd4: 0x0  nop
    ctx->pc = 0x2c2fd4u;
    // NOP
    ctx->pc = 0x2c2fd8u;
}
