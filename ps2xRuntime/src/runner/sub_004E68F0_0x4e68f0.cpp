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

// Function: sub_004E68F0
// Address: 0x4e68f0 - 0x4e6918
void sub_004E68F0_0x4e68f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E68F0_0x4e68f0");
#endif

    ctx->pc = 0x4e68f0u;

    // 0x4e68f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E68F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E68F0u;
        // 0x4e68f4: 0xac850044  sw          $a1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E68F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E68F8u;
    // 0x4e68f8: 0x7c8203c0  sq          $v0, 0x3C0($a0)
    ctx->pc = 0x4e68f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 960), GPR_VEC(ctx, 2));
    // 0x4e68fc: 0x0  nop
    ctx->pc = 0x4e68fcu;
    // NOP
    // 0x4e6900: 0xac820068  sw          $v0, 0x68($a0)
    ctx->pc = 0x4e6900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x4e6904: 0x0  nop
    ctx->pc = 0x4e6904u;
    // NOP
    // 0x4e6908: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4e6908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4e690c: 0x0  nop
    ctx->pc = 0x4e690cu;
    // NOP
    // 0x4e6910: 0x7c8203d0  sq          $v0, 0x3D0($a0)
    ctx->pc = 0x4e6910u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 976), GPR_VEC(ctx, 2));
    // 0x4e6914: 0x0  nop
    ctx->pc = 0x4e6914u;
    // NOP
    ctx->pc = 0x4e6918u;
}
