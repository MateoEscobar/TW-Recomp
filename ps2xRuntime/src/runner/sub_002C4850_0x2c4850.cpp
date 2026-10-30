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

// Function: sub_002C4850
// Address: 0x2c4850 - 0x2c4890
void sub_002C4850_0x2c4850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4850_0x2c4850");
#endif

    ctx->pc = 0x2c4850u;

    // 0x2c4850: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c4850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c4854: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c4854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c4858: 0x246307b0  addiu       $v1, $v1, 0x7B0
    ctx->pc = 0x2c4858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1968));
    // 0x2c485c: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x2c485cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
    // 0x2c4860: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c4860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4864: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2c4864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2c4868: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x2c4868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2c486c: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x2c486cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x2c4870: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x2c4870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x2c4874: 0xac890024  sw          $t1, 0x24($a0)
    ctx->pc = 0x2c4874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 9));
    // 0x2c4878: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c4878u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c487c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2c487cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4880: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2c4880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2c4884: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4884u;
        // 0x2c4888: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C488Cu;
    // 0x2c488c: 0x0  nop
    ctx->pc = 0x2c488cu;
    // NOP
    ctx->pc = 0x2c4890u;
}
