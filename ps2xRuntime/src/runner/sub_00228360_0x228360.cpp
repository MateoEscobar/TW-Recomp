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

// Function: sub_00228360
// Address: 0x228360 - 0x228388
void sub_00228360_0x228360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228360_0x228360");
#endif

    switch (ctx->pc) {
        case 0x228370u: goto label_228370;
        default: break;
    }

    ctx->pc = 0x228360u;

    // 0x228360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228368: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228368u;
    SET_GPR_U32(ctx, 31, 0x228370u);
    ctx->pc = 0x22836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228368u;
    // 0x22836c: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228368u, 0x228370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228370u;
label_228370:
    // 0x228370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228374: 0x3e00008  jr          $ra
    ctx->pc = 0x228374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228374u;
        // 0x228378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22837Cu;
    // 0x22837c: 0x0  nop
    ctx->pc = 0x22837cu;
    // NOP
    // 0x228380: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x228380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x228384: 0x0  nop
    ctx->pc = 0x228384u;
    // NOP
    ctx->pc = 0x228388u;
}
