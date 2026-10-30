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

// Function: sub_00155B98
// Address: 0x155b98 - 0x155bc0
void sub_00155B98_0x155b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155B98_0x155b98");
#endif

    switch (ctx->pc) {
        case 0x155bb0u: goto label_155bb0;
        default: break;
    }

    ctx->pc = 0x155b98u;

    // 0x155b98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x155b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x155b9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155ba0: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x155ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x155ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155ba8: 0xc0e8b20  jal         func_3A2C80
    ctx->pc = 0x155BA8u;
    SET_GPR_U32(ctx, 31, 0x155BB0u);
    ctx->pc = 0x155BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BA8u;
    // 0x155bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x155BA8u, 0x155BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BB0u;
label_155bb0:
    // 0x155bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x155BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155BB4u;
        // 0x155bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155BBCu;
    // 0x155bbc: 0x0  nop
    ctx->pc = 0x155bbcu;
    // NOP
    ctx->pc = 0x155bc0u;
}
