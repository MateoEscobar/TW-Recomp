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

// Function: sub_002AD4E0
// Address: 0x2ad4e0 - 0x2ad508
void sub_002AD4E0_0x2ad4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD4E0_0x2ad4e0");
#endif

    switch (ctx->pc) {
        case 0x2ad4f8u: goto label_2ad4f8;
        default: break;
    }

    ctx->pc = 0x2ad4e0u;

    // 0x2ad4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad4e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ad4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad4ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ad4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad4f0: 0xc087612  jal         func_21D848
    ctx->pc = 0x2AD4F0u;
    SET_GPR_U32(ctx, 31, 0x2AD4F8u);
    ctx->pc = 0x2AD4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD4F0u;
    // 0x2ad4f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2AD4F0u, 0x2AD4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4F8u;
label_2ad4f8:
    // 0x2ad4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD4FCu;
        // 0x2ad500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD504u;
    // 0x2ad504: 0x0  nop
    ctx->pc = 0x2ad504u;
    // NOP
    ctx->pc = 0x2ad508u;
}
