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

// Function: sub_001DCC00
// Address: 0x1dcc00 - 0x1dcc28
void sub_001DCC00_0x1dcc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCC00_0x1dcc00");
#endif

    switch (ctx->pc) {
        case 0x1dcc1cu: goto label_1dcc1c;
        default: break;
    }

    ctx->pc = 0x1dcc00u;

    // 0x1dcc00: 0x24020360  addiu       $v0, $zero, 0x360
    ctx->pc = 0x1dcc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x1dcc04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcc04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcc08: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1dcc08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1dcc0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcc10: 0x24a520d0  addiu       $a1, $a1, 0x20D0
    ctx->pc = 0x1dcc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8400));
    // 0x1dcc14: 0xc0694f0  jal         func_1A53C0
    ctx->pc = 0x1DCC14u;
    SET_GPR_U32(ctx, 31, 0x1DCC1Cu);
    ctx->pc = 0x1DCC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC14u;
    // 0x1dcc18: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A53C0u, 0x1DCC14u, 0x1DCC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC1Cu;
label_1dcc1c:
    // 0x1dcc1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcc20: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC20u;
        // 0x1dcc24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC28u;
}
