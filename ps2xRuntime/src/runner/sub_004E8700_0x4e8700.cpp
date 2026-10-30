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

// Function: sub_004E8700
// Address: 0x4e8700 - 0x4e8718
void sub_004E8700_0x4e8700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8700_0x4e8700");
#endif

    ctx->pc = 0x4e8700u;

    // 0x4e8700: 0x3e00008  jr          $ra
    ctx->pc = 0x4E8700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8700u;
        // 0x4e8704: 0xac8556f0  sw          $a1, 0x56F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E8708u;
    // 0x4e8708: 0x8c820a44  lw          $v0, 0xA44($a0)
    ctx->pc = 0x4e8708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2628)));
    // 0x4e870c: 0x0  nop
    ctx->pc = 0x4e870cu;
    // NOP
    // 0x4e8710: 0x8c820a48  lw          $v0, 0xA48($a0)
    ctx->pc = 0x4e8710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2632)));
    // 0x4e8714: 0x0  nop
    ctx->pc = 0x4e8714u;
    // NOP
    ctx->pc = 0x4e8718u;
}
