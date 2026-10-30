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

// Function: sub_003977A8
// Address: 0x3977a8 - 0x3977d0
void sub_003977A8_0x3977a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003977A8_0x3977a8");
#endif

    switch (ctx->pc) {
        case 0x3977c4u: goto label_3977c4;
        default: break;
    }

    ctx->pc = 0x3977a8u;

    // 0x3977a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3977a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3977ac: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x3977acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x3977b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3977b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3977b4: 0x8c4471a0  lw          $a0, 0x71A0($v0)
    ctx->pc = 0x3977b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5971A0u));
    // 0x3977b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3977b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3977bc: 0xc05c0cc  jal         func_170330
    ctx->pc = 0x3977BCu;
    SET_GPR_U32(ctx, 31, 0x3977C4u);
    ctx->pc = 0x170330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170330u, 0x3977BCu, 0x3977C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3977C4u;
label_3977c4:
    // 0x3977c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3977c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3977c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3977C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3977CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977C8u;
        // 0x3977cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3977C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3977D0u;
}
