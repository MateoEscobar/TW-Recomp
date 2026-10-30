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

// Function: sub_004C4BC8
// Address: 0x4c4bc8 - 0x4c4bf0
void sub_004C4BC8_0x4c4bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4BC8_0x4c4bc8");
#endif

    switch (ctx->pc) {
        case 0x4c4be4u: goto label_4c4be4;
        default: break;
    }

    ctx->pc = 0x4c4bc8u;

    // 0x4c4bc8: 0x248500fc  addiu       $a1, $a0, 0xFC
    ctx->pc = 0x4c4bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x4c4bcc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4c4bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4c4bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4c4bd4: 0x8c44278c  lw          $a0, 0x278C($v0)
    ctx->pc = 0x4c4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53278Cu));
    // 0x4c4bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c4bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4c4bdc: 0xc132380  jal         func_4C8E00
    ctx->pc = 0x4C4BDCu;
    SET_GPR_U32(ctx, 31, 0x4C4BE4u);
    ctx->pc = 0x4C8E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8E00u, 0x4C4BDCu, 0x4C4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4BE4u;
label_4c4be4:
    // 0x4c4be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c4be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c4be8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4BE8u;
        // 0x4c4bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4BF0u;
}
