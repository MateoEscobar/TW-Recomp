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

// Function: sub_00330614
// Address: 0x330614 - 0x330640
void sub_00330614_0x330614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330614_0x330614");
#endif

    switch (ctx->pc) {
        case 0x330620u: goto label_330620;
        default: break;
    }

    ctx->pc = 0x330614u;

    // 0x330614: 0x1061026  xor         $v0, $t0, $a2
    ctx->pc = 0x330614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 6));
    // 0x330618: 0x3e00008  jr          $ra
    ctx->pc = 0x330618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330618u;
        // 0x33061c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330620u;
label_330620:
    // 0x330620: 0x24e3c531  addiu       $v1, $a3, -0x3ACF
    ctx->pc = 0x330620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952241));
    // 0x330624: 0x2cc20001  sltiu       $v0, $a2, 0x1
    ctx->pc = 0x330624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x330628: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x330628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x33062c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x33062cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330630: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x330630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x330634: 0x3e00008  jr          $ra
    ctx->pc = 0x330634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330634u;
        // 0x330638: 0xc4100b  movn        $v0, $a2, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33063Cu;
    // 0x33063c: 0x0  nop
    ctx->pc = 0x33063cu;
    // NOP
    ctx->pc = 0x330640u;
}
