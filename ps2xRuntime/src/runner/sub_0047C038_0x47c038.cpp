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

// Function: sub_0047C038
// Address: 0x47c038 - 0x47c050
void sub_0047C038_0x47c038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C038_0x47c038");
#endif

    ctx->pc = 0x47c038u;

    // 0x47c038: 0x8f838924  lw          $v1, -0x76DC($gp)
    ctx->pc = 0x47c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x47c03c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x47c03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x47c040: 0xaf838924  sw          $v1, -0x76DC($gp)
    ctx->pc = 0x47c040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), GPR_U32(ctx, 3));
    // 0x47c044: 0x3e00008  jr          $ra
    ctx->pc = 0x47C044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C044u;
        // 0x47c048: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C04Cu;
    // 0x47c04c: 0x0  nop
    ctx->pc = 0x47c04cu;
    // NOP
    ctx->pc = 0x47c050u;
}
