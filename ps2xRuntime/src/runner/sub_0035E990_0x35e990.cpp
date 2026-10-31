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

// Function: sub_0035E990
// Address: 0x35e990 - 0x35e9c8
void sub_0035E990_0x35e990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E990_0x35e990");
#endif

    switch (ctx->pc) {
        case 0x35e9a4u: goto label_35e9a4;
        case 0x35e9acu: goto label_35e9ac;
        case 0x35e9b4u: goto label_35e9b4;
        default: break;
    }

    ctx->pc = 0x35e990u;

    // 0x35e990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e99c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E99Cu;
    SET_GPR_U32(ctx, 31, 0x35E9A4u);
    ctx->pc = 0x35E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E99Cu;
    // 0x35e9a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E99Cu, 0x35E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E9A4u;
label_35e9a4:
    // 0x35e9a4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35E9A4u;
    SET_GPR_U32(ctx, 31, 0x35E9ACu);
    ctx->pc = 0x35E9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E9A4u;
    // 0x35e9a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35E9A4u, 0x35E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E9ACu;
label_35e9ac:
    // 0x35e9ac: 0xc0a5228  jal         func_2948A0
    ctx->pc = 0x35E9ACu;
    SET_GPR_U32(ctx, 31, 0x35E9B4u);
    ctx->pc = 0x35E9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E9ACu;
    // 0x35e9b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948A0u, 0x35E9ACu, 0x35E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E9B4u;
label_35e9b4:
    // 0x35e9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e9b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x35E9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9BCu;
        // 0x35e9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E9C4u;
    // 0x35e9c4: 0x0  nop
    ctx->pc = 0x35e9c4u;
    // NOP
    ctx->pc = 0x35e9c8u;
}
