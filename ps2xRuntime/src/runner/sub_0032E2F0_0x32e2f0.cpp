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

// Function: sub_0032E2F0
// Address: 0x32e2f0 - 0x32e328
void sub_0032E2F0_0x32e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E2F0_0x32e2f0");
#endif

    switch (ctx->pc) {
        case 0x32e308u: goto label_32e308;
        case 0x32e318u: goto label_32e318;
        default: break;
    }

    ctx->pc = 0x32e2f0u;

    // 0x32e2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32e2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32e2f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32e2f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32e2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e2fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32e2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32e300: 0xc0cb980  jal         func_32E600
    ctx->pc = 0x32E300u;
    SET_GPR_U32(ctx, 31, 0x32E308u);
    ctx->pc = 0x32E304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E300u;
    // 0x32e304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E600u, 0x32E300u, 0x32E308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E308u;
label_32e308:
    // 0x32e308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e30c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32e30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e310: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x32E310u;
    SET_GPR_U32(ctx, 31, 0x32E318u);
    ctx->pc = 0x32E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E310u;
    // 0x32e314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x32E310u, 0x32E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E318u;
label_32e318:
    // 0x32e318: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32e318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e31c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32e31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e320: 0x3e00008  jr          $ra
    ctx->pc = 0x32E320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E320u;
        // 0x32e324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E328u;
}
