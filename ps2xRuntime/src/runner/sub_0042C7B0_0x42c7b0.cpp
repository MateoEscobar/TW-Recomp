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

// Function: sub_0042C7B0
// Address: 0x42c7b0 - 0x42c7e0
void sub_0042C7B0_0x42c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C7B0_0x42c7b0");
#endif

    switch (ctx->pc) {
        case 0x42c7d0u: goto label_42c7d0;
        default: break;
    }

    ctx->pc = 0x42c7b0u;

    // 0x42c7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42c7b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x42c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x42c7b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42c7bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42c7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c7c0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x42c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x42c7c4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x42c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x42c7c8: 0xc10b152  jal         func_42C548
    ctx->pc = 0x42C7C8u;
    SET_GPR_U32(ctx, 31, 0x42C7D0u);
    ctx->pc = 0x42C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C7C8u;
    // 0x42c7cc: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C548u, 0x42C7C8u, 0x42C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C7D0u;
label_42c7d0:
    // 0x42c7d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42c7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42c7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x42C7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C7D4u;
        // 0x42c7d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C7DCu;
    // 0x42c7dc: 0x0  nop
    ctx->pc = 0x42c7dcu;
    // NOP
    ctx->pc = 0x42c7e0u;
}
