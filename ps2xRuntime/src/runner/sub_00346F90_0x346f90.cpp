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

// Function: sub_00346F90
// Address: 0x346f90 - 0x346fb8
void sub_00346F90_0x346f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346F90_0x346f90");
#endif

    switch (ctx->pc) {
        case 0x346fa8u: goto label_346fa8;
        default: break;
    }

    ctx->pc = 0x346f90u;

    // 0x346f90: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x346f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346f98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x346f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x346f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x346fa0: 0xc0d1bb6  jal         func_346ED8
    ctx->pc = 0x346FA0u;
    SET_GPR_U32(ctx, 31, 0x346FA8u);
    ctx->pc = 0x346FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346FA0u;
    // 0x346fa4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346ED8u, 0x346FA0u, 0x346FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346FA8u;
label_346fa8:
    // 0x346fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x346fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346fac: 0x3e00008  jr          $ra
    ctx->pc = 0x346FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346FACu;
        // 0x346fb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346FB4u;
    // 0x346fb4: 0x0  nop
    ctx->pc = 0x346fb4u;
    // NOP
    ctx->pc = 0x346fb8u;
}
