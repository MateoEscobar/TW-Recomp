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

// Function: sub_001D0448
// Address: 0x1d0448 - 0x1d0480
void sub_001D0448_0x1d0448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0448_0x1d0448");
#endif

    switch (ctx->pc) {
        case 0x1d0460u: goto label_1d0460;
        case 0x1d0468u: goto label_1d0468;
        case 0x1d0470u: goto label_1d0470;
        default: break;
    }

    ctx->pc = 0x1d0448u;

    // 0x1d0448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d044c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0458: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1D0458u;
    SET_GPR_U32(ctx, 31, 0x1D0460u);
    ctx->pc = 0x1D045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0458u;
    // 0x1d045c: 0x26045930  addiu       $a0, $s0, 0x5930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1D0458u, 0x1D0460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0460u;
label_1d0460:
    // 0x1d0460: 0xc075000  jal         func_1D4000
    ctx->pc = 0x1D0460u;
    SET_GPR_U32(ctx, 31, 0x1D0468u);
    ctx->pc = 0x1D0464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0460u;
    // 0x1d0464: 0x26045a00  addiu       $a0, $s0, 0x5A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 23040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4000u, 0x1D0460u, 0x1D0468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0468u;
label_1d0468:
    // 0x1d0468: 0xc075a42  jal         func_1D6908
    ctx->pc = 0x1D0468u;
    SET_GPR_U32(ctx, 31, 0x1D0470u);
    ctx->pc = 0x1D046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0468u;
    // 0x1d046c: 0x26041bd0  addiu       $a0, $s0, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6908u, 0x1D0468u, 0x1D0470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0470u;
label_1d0470:
    // 0x1d0470: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0478: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0478u;
        // 0x1d047c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0480u;
}
