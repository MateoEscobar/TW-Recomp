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

// Function: sub_0047FDF0
// Address: 0x47fdf0 - 0x47fe08
void sub_0047FDF0_0x47fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FDF0_0x47fdf0");
#endif

    ctx->pc = 0x47fdf0u;

    // 0x47fdf0: 0xaf848604  sw          $a0, -0x79FC($gp)
    ctx->pc = 0x47fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 4));
    // 0x47fdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x47FDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FDF4u;
        // 0x47fdf8: 0xaf858608  sw          $a1, -0x79F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936072), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47FDFCu;
    // 0x47fdfc: 0x0  nop
    ctx->pc = 0x47fdfcu;
    // NOP
    // 0x47fe00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47fe00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47fe04: 0x0  nop
    ctx->pc = 0x47fe04u;
    // NOP
    ctx->pc = 0x47fe08u;
}
