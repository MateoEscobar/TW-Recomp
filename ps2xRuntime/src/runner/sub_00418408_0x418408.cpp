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

// Function: sub_00418408
// Address: 0x418408 - 0x418428
void sub_00418408_0x418408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418408_0x418408");
#endif

    ctx->pc = 0x418408u;

    // 0x418408: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x418408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41840c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x41840cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x418410: 0xa082000b  sb          $v0, 0xB($a0)
    ctx->pc = 0x418410u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x418414: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x418414u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x418418: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x418418u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x41841c: 0x3e00008  jr          $ra
    ctx->pc = 0x41841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41841Cu;
        // 0x418420: 0xa080000a  sb          $zero, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41841Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418424u;
    // 0x418424: 0x0  nop
    ctx->pc = 0x418424u;
    // NOP
    ctx->pc = 0x418428u;
}
