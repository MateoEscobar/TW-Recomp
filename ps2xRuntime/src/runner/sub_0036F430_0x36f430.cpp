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

// Function: sub_0036F430
// Address: 0x36f430 - 0x36f468
void sub_0036F430_0x36f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F430_0x36f430");
#endif

    switch (ctx->pc) {
        case 0x36f448u: goto label_36f448;
        case 0x36f450u: goto label_36f450;
        case 0x36f458u: goto label_36f458;
        default: break;
    }

    ctx->pc = 0x36f430u;

    // 0x36f430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f434: 0x34068020  ori         $a2, $zero, 0x8020
    ctx->pc = 0x36f434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x36f438: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x36f438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x36f43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f440: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36F440u;
    SET_GPR_U32(ctx, 31, 0x36F448u);
    ctx->pc = 0x36F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F440u;
    // 0x36f444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36F440u, 0x36F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F448u;
label_36f448:
    // 0x36f448: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36F448u;
    SET_GPR_U32(ctx, 31, 0x36F450u);
    ctx->pc = 0x36F44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F448u;
    // 0x36f44c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36F448u, 0x36F450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F450u;
label_36f450:
    // 0x36f450: 0xc06d274  jal         func_1B49D0
    ctx->pc = 0x36F450u;
    SET_GPR_U32(ctx, 31, 0x36F458u);
    ctx->pc = 0x36F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F450u;
    // 0x36f454: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B49D0u, 0x36F450u, 0x36F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F458u;
label_36f458:
    // 0x36f458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f45c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f460: 0x3e00008  jr          $ra
    ctx->pc = 0x36F460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F460u;
        // 0x36f464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F468u;
}
