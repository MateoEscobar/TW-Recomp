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

// Function: sub_002C0F58
// Address: 0x2c0f58 - 0x2c0fd8
void sub_002C0F58_0x2c0f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0F58_0x2c0f58");
#endif

    switch (ctx->pc) {
        case 0x2c0f7cu: goto label_2c0f7c;
        case 0x2c0f88u: goto label_2c0f88;
        case 0x2c0f94u: goto label_2c0f94;
        case 0x2c0f9cu: goto label_2c0f9c;
        case 0x2c0fb4u: goto label_2c0fb4;
        case 0x2c0fc0u: goto label_2c0fc0;
        default: break;
    }

    ctx->pc = 0x2c0f58u;

    // 0x2c0f58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c0f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c0f5c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c0f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c0f60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c0f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c0f64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c0f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c0f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c0f6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c0f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c0f70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c0f74: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C0F74u;
    SET_GPR_U32(ctx, 31, 0x2C0F7Cu);
    ctx->pc = 0x2C0F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0F74u;
    // 0x2c0f78: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C0F74u, 0x2C0F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0F7Cu;
label_2c0f7c:
    // 0x2c0f7c: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2c0f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2c0f80: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C0F80u;
    SET_GPR_U32(ctx, 31, 0x2C0F88u);
    ctx->pc = 0x2C0F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0F80u;
    // 0x2c0f84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C0F80u, 0x2C0F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0F88u;
label_2c0f88:
    // 0x2c0f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0f8c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C0F8Cu;
    SET_GPR_U32(ctx, 31, 0x2C0F94u);
    ctx->pc = 0x2C0F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0F8Cu;
    // 0x2c0f90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C0F8Cu, 0x2C0F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0F94u;
label_2c0f94:
    // 0x2c0f94: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C0F94u;
    SET_GPR_U32(ctx, 31, 0x2C0F9Cu);
    ctx->pc = 0x2C0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0F94u;
    // 0x2c0f98: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C0F94u, 0x2C0F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0F9Cu;
label_2c0f9c:
    // 0x2c0f9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0fa0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C0FA0u;
    {
        const bool branch_taken_0x2c0fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FA0u;
        // 0x2c0fa4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fa0) {
            ctx->pc = 0x2C0FB4u;
            goto label_2c0fb4;
        }
    }
    ctx->pc = 0x2C0FA8u;
    // 0x2c0fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0fac: 0xc0b03f6  jal         func_2C0FD8
    ctx->pc = 0x2C0FACu;
    SET_GPR_U32(ctx, 31, 0x2C0FB4u);
    ctx->pc = 0x2C0FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0FACu;
    // 0x2c0fb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0FD8u, 0x2C0FACu, 0x2C0FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0FB4u;
label_2c0fb4:
    // 0x2c0fb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0fb8: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C0FB8u;
    SET_GPR_U32(ctx, 31, 0x2C0FC0u);
    ctx->pc = 0x2C0FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0FB8u;
    // 0x2c0fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C0FB8u, 0x2C0FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0FC0u;
label_2c0fc0:
    // 0x2c0fc0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c0fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0fc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c0fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0fc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c0fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FD0u;
        // 0x2c0fd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0FD8u;
}
