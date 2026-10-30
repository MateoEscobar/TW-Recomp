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

// Function: sub_0044EB58
// Address: 0x44eb58 - 0x44eba8
void sub_0044EB58_0x44eb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EB58_0x44eb58");
#endif

    switch (ctx->pc) {
        case 0x44eb78u: goto label_44eb78;
        case 0x44eb90u: goto label_44eb90;
        default: break;
    }

    ctx->pc = 0x44eb58u;

    // 0x44eb58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44eb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44eb5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x44eb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x44eb60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44eb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44eb64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44eb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eb68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44eb6c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x44eb6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eb70: 0xc11390e  jal         func_44E438
    ctx->pc = 0x44EB70u;
    SET_GPR_U32(ctx, 31, 0x44EB78u);
    ctx->pc = 0x44EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44EB70u;
    // 0x44eb74: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E438u, 0x44EB70u, 0x44EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EB78u;
label_44eb78:
    // 0x44eb78: 0x3c070052  lui         $a3, 0x52
    ctx->pc = 0x44eb78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)82 << 16));
    // 0x44eb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44eb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eb80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x44eb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eb84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x44eb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44eb88: 0xc113962  jal         func_44E588
    ctx->pc = 0x44EB88u;
    SET_GPR_U32(ctx, 31, 0x44EB90u);
    ctx->pc = 0x44EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44EB88u;
    // 0x44eb8c: 0x24e7ad28  addiu       $a3, $a3, -0x52D8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44E588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E588u, 0x44EB88u, 0x44EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EB90u;
label_44eb90:
    // 0x44eb90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x44eb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44eb94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44eb94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44eb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44eb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44eb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x44EB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44EB9Cu;
        // 0x44eba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EBA4u;
    // 0x44eba4: 0x0  nop
    ctx->pc = 0x44eba4u;
    // NOP
    ctx->pc = 0x44eba8u;
}
