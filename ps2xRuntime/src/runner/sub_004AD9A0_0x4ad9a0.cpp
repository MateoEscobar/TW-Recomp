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

// Function: sub_004AD9A0
// Address: 0x4ad9a0 - 0x4ad9c0
void sub_004AD9A0_0x4ad9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD9A0_0x4ad9a0");
#endif

    switch (ctx->pc) {
        case 0x4ad9b0u: goto label_4ad9b0;
        default: break;
    }

    ctx->pc = 0x4ad9a0u;

    // 0x4ad9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad9a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad9a8: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AD9A8u;
    SET_GPR_U32(ctx, 31, 0x4AD9B0u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AD9A8u, 0x4AD9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD9B0u;
label_4ad9b0:
    // 0x4ad9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD9B4u;
        // 0x4ad9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD9BCu;
    // 0x4ad9bc: 0x0  nop
    ctx->pc = 0x4ad9bcu;
    // NOP
    ctx->pc = 0x4ad9c0u;
}
