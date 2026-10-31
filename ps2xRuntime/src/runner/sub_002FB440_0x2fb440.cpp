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

// Function: sub_002FB440
// Address: 0x2fb440 - 0x2fb470
void sub_002FB440_0x2fb440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB440_0x2fb440");
#endif

    switch (ctx->pc) {
        case 0x2fb454u: goto label_2fb454;
        case 0x2fb460u: goto label_2fb460;
        default: break;
    }

    ctx->pc = 0x2fb440u;

    // 0x2fb440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fb440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fb444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb448: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fb448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb44c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2FB44Cu;
    SET_GPR_U32(ctx, 31, 0x2FB454u);
    ctx->pc = 0x2FB450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB44Cu;
    // 0x2fb450: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2FB44Cu, 0x2FB454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB454u;
label_2fb454:
    // 0x2fb454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb458: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2FB458u;
    SET_GPR_U32(ctx, 31, 0x2FB460u);
    ctx->pc = 0x2FB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB458u;
    // 0x2fb45c: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2FB458u, 0x2FB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB460u;
label_2fb460:
    // 0x2fb460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb468: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB468u;
        // 0x2fb46c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB470u;
}
