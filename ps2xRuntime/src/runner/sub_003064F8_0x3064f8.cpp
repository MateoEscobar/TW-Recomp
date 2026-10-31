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

// Function: sub_003064F8
// Address: 0x3064f8 - 0x306520
void sub_003064F8_0x3064f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003064F8_0x3064f8");
#endif

    switch (ctx->pc) {
        case 0x3064fcu: goto label_3064fc;
        case 0x306504u: goto label_306504;
        default: break;
    }

    ctx->pc = 0x3064f8u;

    // 0x3064f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3064f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3064fc:
    // 0x3064fc: 0xc0a4b60  jal         func_292D80
    ctx->pc = 0x3064FCu;
    SET_GPR_U32(ctx, 31, 0x306504u);
    ctx->pc = 0x306500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064FCu;
    // 0x306500: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D80u, 0x3064FCu, 0x306504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306504u;
label_306504:
    // 0x306504: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x306504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306508: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x306508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30650c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30650cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306514: 0x3e00008  jr          $ra
    ctx->pc = 0x306514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306514u;
        // 0x306518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30651Cu;
    // 0x30651c: 0x0  nop
    ctx->pc = 0x30651cu;
    // NOP
    ctx->pc = 0x306520u;
}
