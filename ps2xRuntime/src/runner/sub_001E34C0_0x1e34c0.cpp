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

// Function: sub_001E34C0
// Address: 0x1e34c0 - 0x1e3520
void sub_001E34C0_0x1e34c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E34C0_0x1e34c0");
#endif

    switch (ctx->pc) {
        case 0x1e34fcu: goto label_1e34fc;
        case 0x1e3508u: goto label_1e3508;
        default: break;
    }

    ctx->pc = 0x1e34c0u;

    // 0x1e34c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e34c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e34c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e34c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e34c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e34cc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e34ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1e34d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e34d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e34d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e34d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e34d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e34dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e34dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e34e0: 0x2442c630  addiu       $v0, $v0, -0x39D0
    ctx->pc = 0x1e34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952496));
    // 0x1e34e4: 0x2463c658  addiu       $v1, $v1, -0x39A8
    ctx->pc = 0x1e34e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952536));
    // 0x1e34e8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1e34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1e34ec: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e34ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1e34f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e34f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1e34f4: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x1E34F4u;
    SET_GPR_U32(ctx, 31, 0x1E34FCu);
    ctx->pc = 0x1E34F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E34F4u;
    // 0x1e34f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x1E34F4u, 0x1E34FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E34FCu;
label_1e34fc:
    // 0x1e34fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e34fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3500: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1E3500u;
    SET_GPR_U32(ctx, 31, 0x1E3508u);
    ctx->pc = 0x1E3504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3500u;
    // 0x1e3504: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1E3500u, 0x1E3508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3508u;
label_1e3508:
    // 0x1e3508: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e3508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e350c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e350cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3514: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3514u;
        // 0x1e3518: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E351Cu;
    // 0x1e351c: 0x0  nop
    ctx->pc = 0x1e351cu;
    // NOP
    ctx->pc = 0x1e3520u;
}
