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

// Function: sub_002B7670
// Address: 0x2b7670 - 0x2b76a0
void sub_002B7670_0x2b7670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7670_0x2b7670");
#endif

    ctx->pc = 0x2b7670u;

    // 0x2b7670: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b7670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b7674: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b7674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b7678: 0x2463fd90  addiu       $v1, $v1, -0x270
    ctx->pc = 0x2b7678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966672));
    // 0x2b767c: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x2b767cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x2b7680: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b7680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7684: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b7684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b7688: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2b7688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2b768c: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x2b768cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x2b7690: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b7690u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7694: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7694u;
        // 0x2b7698: 0xa0800005  sb          $zero, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B769Cu;
    // 0x2b769c: 0x0  nop
    ctx->pc = 0x2b769cu;
    // NOP
    ctx->pc = 0x2b76a0u;
}
