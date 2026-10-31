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

// Function: sub_00292A60
// Address: 0x292a60 - 0x292ac0
void sub_00292A60_0x292a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292A60_0x292a60");
#endif

    switch (ctx->pc) {
        case 0x292a84u: goto label_292a84;
        case 0x292a8cu: goto label_292a8c;
        case 0x292a9cu: goto label_292a9c;
        case 0x292aacu: goto label_292aac;
        default: break;
    }

    ctx->pc = 0x292a60u;

    // 0x292a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x292a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x292a64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292a68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x292a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x292a6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x292a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x292a74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x292a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292a7c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292A7Cu;
    SET_GPR_U32(ctx, 31, 0x292A84u);
    ctx->pc = 0x292A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A7Cu;
    // 0x292a80: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292A7Cu, 0x292A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A84u;
label_292a84:
    // 0x292a84: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292A84u;
    SET_GPR_U32(ctx, 31, 0x292A8Cu);
    ctx->pc = 0x292A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A84u;
    // 0x292a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292A84u, 0x292A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A8Cu;
label_292a8c:
    // 0x292a8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x292A8Cu;
    {
        const bool branch_taken_0x292a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292A8Cu;
        // 0x292a90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292a8c) {
            ctx->pc = 0x292AACu;
            goto label_292aac;
        }
    }
    ctx->pc = 0x292A94u;
    // 0x292a94: 0xc08750a  jal         func_21D428
    ctx->pc = 0x292A94u;
    SET_GPR_U32(ctx, 31, 0x292A9Cu);
    ctx->pc = 0x292A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292A94u;
    // 0x292a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x292A94u, 0x292A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292A9Cu;
label_292a9c:
    // 0x292a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x292a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292aa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292aa4: 0xc0a5776  jal         func_295DD8
    ctx->pc = 0x292AA4u;
    SET_GPR_U32(ctx, 31, 0x292AACu);
    ctx->pc = 0x292AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292AA4u;
    // 0x292aa8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x292AA4u, 0x292AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292AACu;
label_292aac:
    // 0x292aac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x292aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292ab0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x292ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292ab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x292AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292AB8u;
        // 0x292abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292AC0u;
}
