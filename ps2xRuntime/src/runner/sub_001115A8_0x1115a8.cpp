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

// Function: sub_001115A8
// Address: 0x1115a8 - 0x1115e0
void sub_001115A8_0x1115a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001115A8_0x1115a8");
#endif

    switch (ctx->pc) {
        case 0x1115d0u: goto label_1115d0;
        default: break;
    }

    ctx->pc = 0x1115a8u;

    // 0x1115a8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1115a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1115ac: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1115acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1115b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1115b4: 0x3442fa38  ori         $v0, $v0, 0xFA38
    ctx->pc = 0x1115b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64056);
    // 0x1115b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1115b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1115bc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1115bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1115c0: 0xa060000f  sb          $zero, 0xF($v1)
    ctx->pc = 0x1115c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x1115c4: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1115c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1115c8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1115C8u;
    SET_GPR_U32(ctx, 31, 0x1115D0u);
    ctx->pc = 0x1115CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1115C8u;
    // 0x1115cc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1115C8u, 0x1115D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115D0u;
label_1115d0:
    // 0x1115d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1115d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1115d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1115D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1115D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115D4u;
        // 0x1115d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1115D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1115DCu;
    // 0x1115dc: 0x0  nop
    ctx->pc = 0x1115dcu;
    // NOP
    ctx->pc = 0x1115e0u;
}
