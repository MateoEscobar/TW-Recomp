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

// Function: sub_0039C290
// Address: 0x39c290 - 0x39c2e0
void sub_0039C290_0x39c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C290_0x39c290");
#endif

    switch (ctx->pc) {
        case 0x39c2ccu: goto label_39c2cc;
        default: break;
    }

    ctx->pc = 0x39c290u;

    // 0x39c290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39c294: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x39c294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x39c298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39c29c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x39c29cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2a0: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x39c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x39c2a4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x39c2a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x39c2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2ac: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x39c2acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2b0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x39c2b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2b4: 0x8c64084c  lw          $a0, 0x84C($v1)
    ctx->pc = 0x39c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2124)));
    // 0x39c2b8: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x39c2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2bc: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x39c2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x39c2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2c4: 0xc0e3eae  jal         func_38FAB8
    ctx->pc = 0x39C2C4u;
    SET_GPR_U32(ctx, 31, 0x39C2CCu);
    ctx->pc = 0x39C2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C2C4u;
    // 0x39c2c8: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FAB8u, 0x39C2C4u, 0x39C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C2CCu;
label_39c2cc:
    // 0x39c2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x39C2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2D0u;
        // 0x39c2d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C2D8u;
    // 0x39c2d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x39c2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x39c2dc: 0x0  nop
    ctx->pc = 0x39c2dcu;
    // NOP
    ctx->pc = 0x39c2e0u;
}
