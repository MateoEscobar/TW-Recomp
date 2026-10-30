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

// Function: sub_0041F6B0
// Address: 0x41f6b0 - 0x41f700
void sub_0041F6B0_0x41f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F6B0_0x41f6b0");
#endif

    switch (ctx->pc) {
        case 0x41f6c4u: goto label_41f6c4;
        case 0x41f6ecu: goto label_41f6ec;
        default: break;
    }

    ctx->pc = 0x41f6b0u;

    // 0x41f6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41f6b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41f6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41f6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41f6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41f6bc: 0xc1084b0  jal         func_4212C0
    ctx->pc = 0x41F6BCu;
    SET_GPR_U32(ctx, 31, 0x41F6C4u);
    ctx->pc = 0x41F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F6BCu;
    // 0x41f6c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4212C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4212C0u, 0x41F6BCu, 0x41F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F6C4u;
label_41f6c4:
    // 0x41f6c4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x41f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x41f6c8: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x41f6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x41f6cc: 0x24635fa0  addiu       $v1, $v1, 0x5FA0
    ctx->pc = 0x41f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24480));
    // 0x41f6d0: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x41f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x41f6d4: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x41f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x41f6d8: 0x26040148  addiu       $a0, $s0, 0x148
    ctx->pc = 0x41f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x41f6dc: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x41f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x41f6e0: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x41f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x41f6e4: 0xc052862  jal         func_14A188
    ctx->pc = 0x41F6E4u;
    SET_GPR_U32(ctx, 31, 0x41F6ECu);
    ctx->pc = 0x41F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F6E4u;
    // 0x41f6e8: 0xae030128  sw          $v1, 0x128($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A188u, 0x41F6E4u, 0x41F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F6ECu;
label_41f6ec:
    // 0x41f6ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41f6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41f6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41f6f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41f6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41f6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x41F6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F6F8u;
        // 0x41f6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F700u;
}
