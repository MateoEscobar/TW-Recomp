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

// Function: sub_0019BA70
// Address: 0x19ba70 - 0x19bab8
void sub_0019BA70_0x19ba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BA70_0x19ba70");
#endif

    ctx->pc = 0x19ba70u;

    // 0x19ba70: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x19ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x19ba74: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x19ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x19ba78: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x19ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
    // 0x19ba7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ba7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ba80: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x19ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x19ba84: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19ba84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba88: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x19ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x19ba8c: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x19ba8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x19ba90: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x19ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x19ba94: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x19ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x19ba98: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x19ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x19ba9c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x19ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x19baa0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x19baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x19baa4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x19baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x19baa8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x19baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x19baac: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x19baacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x19bab0: 0x3e00008  jr          $ra
    ctx->pc = 0x19BAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAB0u;
        // 0x19bab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BAB8u;
}
