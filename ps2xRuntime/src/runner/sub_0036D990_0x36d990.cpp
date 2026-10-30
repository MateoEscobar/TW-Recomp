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

// Function: sub_0036D990
// Address: 0x36d990 - 0x36d9c8
void sub_0036D990_0x36d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D990_0x36d990");
#endif

    switch (ctx->pc) {
        case 0x36d9a4u: goto label_36d9a4;
        case 0x36d9acu: goto label_36d9ac;
        case 0x36d9b4u: goto label_36d9b4;
        default: break;
    }

    ctx->pc = 0x36d990u;

    // 0x36d990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d99c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D99Cu;
    SET_GPR_U32(ctx, 31, 0x36D9A4u);
    ctx->pc = 0x36D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D99Cu;
    // 0x36d9a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D99Cu, 0x36D9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9A4u;
label_36d9a4:
    // 0x36d9a4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36D9A4u;
    SET_GPR_U32(ctx, 31, 0x36D9ACu);
    ctx->pc = 0x36D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D9A4u;
    // 0x36d9a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36D9A4u, 0x36D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9ACu;
label_36d9ac:
    // 0x36d9ac: 0xc05b570  jal         func_16D5C0
    ctx->pc = 0x36D9ACu;
    SET_GPR_U32(ctx, 31, 0x36D9B4u);
    ctx->pc = 0x36D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D9ACu;
    // 0x36d9b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5C0u, 0x36D9ACu, 0x36D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9B4u;
label_36d9b4:
    // 0x36d9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d9b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x36D9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D9BCu;
        // 0x36d9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D9C4u;
    // 0x36d9c4: 0x0  nop
    ctx->pc = 0x36d9c4u;
    // NOP
    ctx->pc = 0x36d9c8u;
}
