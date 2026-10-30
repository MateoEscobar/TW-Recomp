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

// Function: sub_002FB360
// Address: 0x2fb360 - 0x2fb390
void sub_002FB360_0x2fb360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB360_0x2fb360");
#endif

    switch (ctx->pc) {
        case 0x2fb374u: goto label_2fb374;
        case 0x2fb380u: goto label_2fb380;
        default: break;
    }

    ctx->pc = 0x2fb360u;

    // 0x2fb360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fb360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fb364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb368: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fb368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb36c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2FB36Cu;
    SET_GPR_U32(ctx, 31, 0x2FB374u);
    ctx->pc = 0x2FB370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB36Cu;
    // 0x2fb370: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2FB36Cu, 0x2FB374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB374u;
label_2fb374:
    // 0x2fb374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb378: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2FB378u;
    SET_GPR_U32(ctx, 31, 0x2FB380u);
    ctx->pc = 0x2FB37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB378u;
    // 0x2fb37c: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2FB378u, 0x2FB380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB380u;
label_2fb380:
    // 0x2fb380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb384: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb388: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB388u;
        // 0x2fb38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB390u;
}
