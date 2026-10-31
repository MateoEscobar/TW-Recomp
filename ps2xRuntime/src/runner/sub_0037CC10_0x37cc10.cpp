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

// Function: sub_0037CC10
// Address: 0x37cc10 - 0x37cc30
void sub_0037CC10_0x37cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CC10_0x37cc10");
#endif

    switch (ctx->pc) {
        case 0x37cc20u: goto label_37cc20;
        default: break;
    }

    ctx->pc = 0x37cc10u;

    // 0x37cc10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37cc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cc18: 0xc1089be  jal         func_4226F8
    ctx->pc = 0x37CC18u;
    SET_GPR_U32(ctx, 31, 0x37CC20u);
    ctx->pc = 0x4226F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4226F8u, 0x37CC18u, 0x37CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CC20u;
label_37cc20:
    // 0x37cc20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37cc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cc24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37cc24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc28: 0x3e00008  jr          $ra
    ctx->pc = 0x37CC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC28u;
        // 0x37cc2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CC30u;
}
