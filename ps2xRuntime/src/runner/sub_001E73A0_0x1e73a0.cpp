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

// Function: sub_001E73A0
// Address: 0x1e73a0 - 0x1e7408
void sub_001E73A0_0x1e73a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E73A0_0x1e73a0");
#endif

    switch (ctx->pc) {
        case 0x1e73ccu: goto label_1e73cc;
        case 0x1e73dcu: goto label_1e73dc;
        case 0x1e73ecu: goto label_1e73ec;
        default: break;
    }

    ctx->pc = 0x1e73a0u;

    // 0x1e73a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e73a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e73a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e73a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e73a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e73a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e73ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e73acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e73b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e73b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e73b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e73b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e73bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e73bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73c0: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1e73c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e73c4: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1E73C4u;
    SET_GPR_U32(ctx, 31, 0x1E73CCu);
    ctx->pc = 0x1E73C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E73C4u;
    // 0x1e73c8: 0x7e0201f0  sq          $v0, 0x1F0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1E73C4u, 0x1E73CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E73CCu;
label_1e73cc:
    // 0x1e73cc: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x1e73ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x1e73d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e73d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73d4: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1E73D4u;
    SET_GPR_U32(ctx, 31, 0x1E73DCu);
    ctx->pc = 0x1E73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E73D4u;
    // 0x1e73d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E73D4u, 0x1E73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E73DCu;
label_1e73dc:
    // 0x1e73dc: 0x26040310  addiu       $a0, $s0, 0x310
    ctx->pc = 0x1e73dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x1e73e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e73e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73e4: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1E73E4u;
    SET_GPR_U32(ctx, 31, 0x1E73ECu);
    ctx->pc = 0x1E73E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E73E4u;
    // 0x1e73e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E73E4u, 0x1E73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E73ECu;
label_1e73ec:
    // 0x1e73ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e73ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e73f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e73f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e73f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e73f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e73f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e73f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e73fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E73FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73FCu;
        // 0x1e7400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E73FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7404u;
    // 0x1e7404: 0x0  nop
    ctx->pc = 0x1e7404u;
    // NOP
    ctx->pc = 0x1e7408u;
}
