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

// Function: sub_003692B0
// Address: 0x3692b0 - 0x3692e8
void sub_003692B0_0x3692b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003692B0_0x3692b0");
#endif

    switch (ctx->pc) {
        case 0x3692c4u: goto label_3692c4;
        case 0x3692ccu: goto label_3692cc;
        case 0x3692d4u: goto label_3692d4;
        default: break;
    }

    ctx->pc = 0x3692b0u;

    // 0x3692b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3692b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3692b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3692b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3692b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3692b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3692bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3692BCu;
    SET_GPR_U32(ctx, 31, 0x3692C4u);
    ctx->pc = 0x3692C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3692BCu;
    // 0x3692c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3692BCu, 0x3692C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3692C4u;
label_3692c4:
    // 0x3692c4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3692C4u;
    SET_GPR_U32(ctx, 31, 0x3692CCu);
    ctx->pc = 0x3692C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3692C4u;
    // 0x3692c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3692C4u, 0x3692CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3692CCu;
label_3692cc:
    // 0x3692cc: 0xc0638bc  jal         func_18E2F0
    ctx->pc = 0x3692CCu;
    SET_GPR_U32(ctx, 31, 0x3692D4u);
    ctx->pc = 0x3692D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3692CCu;
    // 0x3692d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E2F0u, 0x3692CCu, 0x3692D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3692D4u;
label_3692d4:
    // 0x3692d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3692d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3692d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3692d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3692dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3692DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3692E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3692DCu;
        // 0x3692e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3692DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3692E4u;
    // 0x3692e4: 0x0  nop
    ctx->pc = 0x3692e4u;
    // NOP
    ctx->pc = 0x3692e8u;
}
