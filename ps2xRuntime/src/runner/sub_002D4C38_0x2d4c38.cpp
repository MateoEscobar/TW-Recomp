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

// Function: sub_002D4C38
// Address: 0x2d4c38 - 0x2d4cb8
void sub_002D4C38_0x2d4c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4C38_0x2d4c38");
#endif

    switch (ctx->pc) {
        case 0x2d4c5cu: goto label_2d4c5c;
        case 0x2d4c64u: goto label_2d4c64;
        case 0x2d4c74u: goto label_2d4c74;
        case 0x2d4c7cu: goto label_2d4c7c;
        case 0x2d4c94u: goto label_2d4c94;
        case 0x2d4ca0u: goto label_2d4ca0;
        default: break;
    }

    ctx->pc = 0x2d4c38u;

    // 0x2d4c38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d4c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d4c3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d4c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d4c40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d4c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d4c44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d4c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d4c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d4c4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d4c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d4c50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d4c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d4c54: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D4C54u;
    SET_GPR_U32(ctx, 31, 0x2D4C5Cu);
    ctx->pc = 0x2D4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C54u;
    // 0x2d4c58: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D4C54u, 0x2D4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C5Cu;
label_2d4c5c:
    // 0x2d4c5c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D4C5Cu;
    SET_GPR_U32(ctx, 31, 0x2D4C64u);
    ctx->pc = 0x2D4C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C5Cu;
    // 0x2d4c60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D4C5Cu, 0x2D4C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C64u;
label_2d4c64:
    // 0x2d4c64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D4C64u;
    {
        const bool branch_taken_0x2d4c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C64u;
        // 0x2d4c68: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c64) {
            ctx->pc = 0x2D4CA4u;
            goto label_2d4ca4;
        }
    }
    ctx->pc = 0x2D4C6Cu;
    // 0x2d4c6c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D4C6Cu;
    SET_GPR_U32(ctx, 31, 0x2D4C74u);
    ctx->pc = 0x2D4C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C6Cu;
    // 0x2d4c70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D4C6Cu, 0x2D4C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C74u;
label_2d4c74:
    // 0x2d4c74: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D4C74u;
    SET_GPR_U32(ctx, 31, 0x2D4C7Cu);
    ctx->pc = 0x2D4C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C74u;
    // 0x2d4c78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D4C74u, 0x2D4C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C7Cu;
label_2d4c7c:
    // 0x2d4c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d4c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c80: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4C80u;
    {
        const bool branch_taken_0x2d4c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C80u;
        // 0x2d4c84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c80) {
            ctx->pc = 0x2D4C94u;
            goto label_2d4c94;
        }
    }
    ctx->pc = 0x2D4C88u;
    // 0x2d4c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c8c: 0xc0b532e  jal         func_2D4CB8
    ctx->pc = 0x2D4C8Cu;
    SET_GPR_U32(ctx, 31, 0x2D4C94u);
    ctx->pc = 0x2D4C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C8Cu;
    // 0x2d4c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4CB8u, 0x2D4C8Cu, 0x2D4C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C94u;
label_2d4c94:
    // 0x2d4c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c98: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D4C98u;
    SET_GPR_U32(ctx, 31, 0x2D4CA0u);
    ctx->pc = 0x2D4C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4C98u;
    // 0x2d4c9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D4C98u, 0x2D4CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4CA0u;
label_2d4ca0:
    // 0x2d4ca0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d4ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d4ca4:
    // 0x2d4ca4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d4ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4ca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d4ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4cac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d4cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4CB0u;
        // 0x2d4cb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4CB8u;
}
