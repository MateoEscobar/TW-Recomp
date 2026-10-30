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

// Function: sub_0047C008
// Address: 0x47c008 - 0x47c038
void sub_0047C008_0x47c008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C008_0x47c008");
#endif

    ctx->pc = 0x47c008u;

    // 0x47c008: 0x8f828924  lw          $v0, -0x76DC($gp)
    ctx->pc = 0x47c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x47c00c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x47c010: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x47c010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x47c014: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x47c014u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x47c018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47c018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x47c01c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x47c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x47c020: 0xaf828924  sw          $v0, -0x76DC($gp)
    ctx->pc = 0x47c020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), GPR_U32(ctx, 2));
    // 0x47c024: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x47c024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x47c028: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47c028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c02c: 0xaf858920  sw          $a1, -0x76E0($gp)
    ctx->pc = 0x47c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 5));
    // 0x47c030: 0x3e00008  jr          $ra
    ctx->pc = 0x47C030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47C030u;
        // 0x47c034: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C038u;
}
