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

// Function: sub_001B3DF8
// Address: 0x1b3df8 - 0x1b3e20
void sub_001B3DF8_0x1b3df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3DF8_0x1b3df8");
#endif

    switch (ctx->pc) {
        case 0x1b3e14u: goto label_1b3e14;
        default: break;
    }

    ctx->pc = 0x1b3df8u;

    // 0x1b3df8: 0x24020590  addiu       $v0, $zero, 0x590
    ctx->pc = 0x1b3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
    // 0x1b3dfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3e00: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1b3e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b3e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3e08: 0x24a56b40  addiu       $a1, $a1, 0x6B40
    ctx->pc = 0x1b3e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27456));
    // 0x1b3e0c: 0xc067cc8  jal         func_19F320
    ctx->pc = 0x1B3E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B3E14u);
    ctx->pc = 0x1B3E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3E0Cu;
    // 0x1b3e10: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F320u, 0x1B3E0Cu, 0x1B3E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E14u;
label_1b3e14:
    // 0x1b3e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E18u;
        // 0x1b3e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3E20u;
}
