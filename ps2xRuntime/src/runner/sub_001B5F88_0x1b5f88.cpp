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

// Function: sub_001B5F88
// Address: 0x1b5f88 - 0x1b5fb0
void sub_001B5F88_0x1b5f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5F88_0x1b5f88");
#endif

    switch (ctx->pc) {
        case 0x1b5fa4u: goto label_1b5fa4;
        default: break;
    }

    ctx->pc = 0x1b5f88u;

    // 0x1b5f88: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b5f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5f90: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b5f94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b5f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5f9c: 0xc06ce20  jal         func_1B3880
    ctx->pc = 0x1B5F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B5FA4u);
    ctx->pc = 0x1B5FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5F9Cu;
    // 0x1b5fa0: 0x24440840  addiu       $a0, $v0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3880u, 0x1B5F9Cu, 0x1B5FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FA4u;
label_1b5fa4:
    // 0x1b5fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FA8u;
        // 0x1b5fac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5FB0u;
}
