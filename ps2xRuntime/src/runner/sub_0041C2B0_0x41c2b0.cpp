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

// Function: sub_0041C2B0
// Address: 0x41c2b0 - 0x41c2d0
void sub_0041C2B0_0x41c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C2B0_0x41c2b0");
#endif

    switch (ctx->pc) {
        case 0x41c2c4u: goto label_41c2c4;
        default: break;
    }

    ctx->pc = 0x41c2b0u;

    // 0x41c2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41c2b4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x41c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x41c2b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41c2bc: 0xc1076c2  jal         func_41DB08
    ctx->pc = 0x41C2BCu;
    SET_GPR_U32(ctx, 31, 0x41C2C4u);
    ctx->pc = 0x41C2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C2BCu;
    // 0x41c2c0: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DB08u, 0x41C2BCu, 0x41C2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C2C4u;
label_41c2c4:
    // 0x41c2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41c2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41c2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x41C2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C2C8u;
        // 0x41c2cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C2D0u;
}
