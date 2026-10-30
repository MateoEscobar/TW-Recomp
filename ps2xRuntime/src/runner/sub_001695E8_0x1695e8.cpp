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

// Function: sub_001695E8
// Address: 0x1695e8 - 0x169608
void sub_001695E8_0x1695e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001695E8_0x1695e8");
#endif

    switch (ctx->pc) {
        case 0x1695fcu: goto label_1695fc;
        default: break;
    }

    ctx->pc = 0x1695e8u;

    // 0x1695e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1695e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1695ec: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x1695ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x1695f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1695f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1695f4: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x1695F4u;
    SET_GPR_U32(ctx, 31, 0x1695FCu);
    ctx->pc = 0x1695F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695F4u;
    // 0x1695f8: 0x24050256  addiu       $a1, $zero, 0x256 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x1695F4u, 0x1695FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695FCu;
label_1695fc:
    // 0x1695fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1695fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169600: 0x3e00008  jr          $ra
    ctx->pc = 0x169600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169600u;
        // 0x169604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169608u;
}
