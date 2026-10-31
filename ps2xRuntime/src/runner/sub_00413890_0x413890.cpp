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

// Function: sub_00413890
// Address: 0x413890 - 0x4138a8
void sub_00413890_0x413890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413890_0x413890");
#endif

    ctx->pc = 0x413890u;

    // 0x413890: 0xa0800149  sb          $zero, 0x149($a0)
    ctx->pc = 0x413890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 329), (uint8_t)GPR_U32(ctx, 0));
    // 0x413894: 0xac800140  sw          $zero, 0x140($a0)
    ctx->pc = 0x413894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 0));
    // 0x413898: 0xac800144  sw          $zero, 0x144($a0)
    ctx->pc = 0x413898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 0));
    // 0x41389c: 0x3e00008  jr          $ra
    ctx->pc = 0x41389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4138A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41389Cu;
        // 0x4138a0: 0xa0800148  sb          $zero, 0x148($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 328), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41389Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4138A4u;
    // 0x4138a4: 0x0  nop
    ctx->pc = 0x4138a4u;
    // NOP
    ctx->pc = 0x4138a8u;
}
