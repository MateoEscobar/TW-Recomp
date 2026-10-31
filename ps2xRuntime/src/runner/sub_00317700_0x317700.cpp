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

// Function: sub_00317700
// Address: 0x317700 - 0x317720
void sub_00317700_0x317700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317700_0x317700");
#endif

    switch (ctx->pc) {
        case 0x317710u: goto label_317710;
        default: break;
    }

    ctx->pc = 0x317700u;

    // 0x317700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x317700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x317704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x317708: 0xc0c5d3a  jal         func_3174E8
    ctx->pc = 0x317708u;
    SET_GPR_U32(ctx, 31, 0x317710u);
    ctx->pc = 0x3174E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3174E8u, 0x317708u, 0x317710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317710u;
label_317710:
    // 0x317710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317714: 0x3e00008  jr          $ra
    ctx->pc = 0x317714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317714u;
        // 0x317718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31771Cu;
    // 0x31771c: 0x0  nop
    ctx->pc = 0x31771cu;
    // NOP
    ctx->pc = 0x317720u;
}
