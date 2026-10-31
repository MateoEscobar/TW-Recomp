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

// Function: sub_002E9C60
// Address: 0x2e9c60 - 0x2e9cd0
void sub_002E9C60_0x2e9c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9C60_0x2e9c60");
#endif

    switch (ctx->pc) {
        case 0x2e9c7cu: goto label_2e9c7c;
        case 0x2e9c84u: goto label_2e9c84;
        case 0x2e9c94u: goto label_2e9c94;
        case 0x2e9c9cu: goto label_2e9c9c;
        case 0x2e9cb0u: goto label_2e9cb0;
        case 0x2e9cbcu: goto label_2e9cbc;
        default: break;
    }

    ctx->pc = 0x2e9c60u;

    // 0x2e9c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e9c64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e9c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e9c68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e9c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e9c6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e9c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e9c70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e9c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e9c74: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E9C74u;
    SET_GPR_U32(ctx, 31, 0x2E9C7Cu);
    ctx->pc = 0x2E9C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C74u;
    // 0x2e9c78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E9C74u, 0x2E9C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C7Cu;
label_2e9c7c:
    // 0x2e9c7c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E9C7Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C84u);
    ctx->pc = 0x2E9C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C7Cu;
    // 0x2e9c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E9C7Cu, 0x2E9C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C84u;
label_2e9c84:
    // 0x2e9c84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E9C84u;
    {
        const bool branch_taken_0x2e9c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9C84u;
        // 0x2e9c88: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9c84) {
            ctx->pc = 0x2E9CC0u;
            goto label_2e9cc0;
        }
    }
    ctx->pc = 0x2E9C8Cu;
    // 0x2e9c8c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E9C8Cu;
    SET_GPR_U32(ctx, 31, 0x2E9C94u);
    ctx->pc = 0x2E9C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C8Cu;
    // 0x2e9c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E9C8Cu, 0x2E9C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C94u;
label_2e9c94:
    // 0x2e9c94: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E9C94u;
    SET_GPR_U32(ctx, 31, 0x2E9C9Cu);
    ctx->pc = 0x2E9C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9C94u;
    // 0x2e9c98: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E9C94u, 0x2E9C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9C9Cu;
label_2e9c9c:
    // 0x2e9c9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ca0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9CA0u;
    {
        const bool branch_taken_0x2e9ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9CA0u;
        // 0x2e9ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ca0) {
            ctx->pc = 0x2E9CB0u;
            goto label_2e9cb0;
        }
    }
    ctx->pc = 0x2E9CA8u;
    // 0x2e9ca8: 0xc0ba734  jal         func_2E9CD0
    ctx->pc = 0x2E9CA8u;
    SET_GPR_U32(ctx, 31, 0x2E9CB0u);
    ctx->pc = 0x2E9CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9CA8u;
    // 0x2e9cac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9CD0u, 0x2E9CA8u, 0x2E9CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9CB0u;
label_2e9cb0:
    // 0x2e9cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9cb4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E9CB4u;
    SET_GPR_U32(ctx, 31, 0x2E9CBCu);
    ctx->pc = 0x2E9CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9CB4u;
    // 0x2e9cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E9CB4u, 0x2E9CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9CBCu;
label_2e9cbc:
    // 0x2e9cbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e9cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e9cc0:
    // 0x2e9cc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e9cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9cc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e9cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9CC8u;
        // 0x2e9ccc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9CD0u;
}
