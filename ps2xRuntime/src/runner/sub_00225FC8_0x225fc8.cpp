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

// Function: sub_00225FC8
// Address: 0x225fc8 - 0x225ff0
void sub_00225FC8_0x225fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225FC8_0x225fc8");
#endif

    switch (ctx->pc) {
        case 0x225fe4u: goto label_225fe4;
        default: break;
    }

    ctx->pc = 0x225fc8u;

    // 0x225fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225fcc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x225fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225fd4: 0x24440257  addiu       $a0, $v0, 0x257
    ctx->pc = 0x225fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 599));
    // 0x225fd8: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x225fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x225fdc: 0xc10c4de  jal         func_431378
    ctx->pc = 0x225FDCu;
    SET_GPR_U32(ctx, 31, 0x225FE4u);
    ctx->pc = 0x225FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FDCu;
    // 0x225fe0: 0xa0400276  sb          $zero, 0x276($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 630), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x225FDCu, 0x225FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FE4u;
label_225fe4:
    // 0x225fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x225FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FE8u;
        // 0x225fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225FF0u;
}
