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

// Function: sub_003A45A8
// Address: 0x3a45a8 - 0x3a45d8
void sub_003A45A8_0x3a45a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A45A8_0x3a45a8");
#endif

    switch (ctx->pc) {
        case 0x3a45c4u: goto label_3a45c4;
        default: break;
    }

    ctx->pc = 0x3a45a8u;

    // 0x3a45a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a45a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a45ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a45acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a45b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a45b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a45b4: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x3a45b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3a45b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a45b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a45bc: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3A45BCu;
    SET_GPR_U32(ctx, 31, 0x3A45C4u);
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3A45BCu, 0x3A45C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A45C4u;
label_3a45c4:
    // 0x3a45c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a45c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a45c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a45c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a45cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A45CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45CCu;
        // 0x3a45d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A45CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A45D4u;
    // 0x3a45d4: 0x0  nop
    ctx->pc = 0x3a45d4u;
    // NOP
    ctx->pc = 0x3a45d8u;
}
