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

// Function: sub_0040CF40
// Address: 0x40cf40 - 0x40cf80
void sub_0040CF40_0x40cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CF40_0x40cf40");
#endif

    ctx->pc = 0x40cf40u;

    // 0x40cf40: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x40cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x40cf44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x40cf44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40cf48: 0x24635b88  addiu       $v1, $v1, 0x5B88
    ctx->pc = 0x40cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23432));
    // 0x40cf4c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x40cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x40cf50: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x40cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x40cf54: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x40cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x40cf58: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x40cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x40cf5c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x40cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x40cf60: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x40cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x40cf64: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x40cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x40cf68: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x40cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x40cf6c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x40cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x40cf70: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x40cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x40cf74: 0x3e00008  jr          $ra
    ctx->pc = 0x40CF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CF74u;
        // 0x40cf78: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CF7Cu;
    // 0x40cf7c: 0x0  nop
    ctx->pc = 0x40cf7cu;
    // NOP
    ctx->pc = 0x40cf80u;
}
