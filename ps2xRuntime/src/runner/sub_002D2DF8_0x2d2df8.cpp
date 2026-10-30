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

// Function: sub_002D2DF8
// Address: 0x2d2df8 - 0x2d2eb0
void sub_002D2DF8_0x2d2df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2DF8_0x2d2df8");
#endif

    switch (ctx->pc) {
        case 0x2d2e2cu: goto label_2d2e2c;
        case 0x2d2e34u: goto label_2d2e34;
        case 0x2d2e44u: goto label_2d2e44;
        case 0x2d2e60u: goto label_2d2e60;
        case 0x2d2e80u: goto label_2d2e80;
        case 0x2d2e8cu: goto label_2d2e8c;
        default: break;
    }

    ctx->pc = 0x2d2df8u;

    // 0x2d2df8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d2df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d2dfc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d2dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d2e00: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d2e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d2e04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d2e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d2e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d2e0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d2e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d2e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2d2e14: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d2e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e18: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d2e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d2e1c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d2e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d2e20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d2e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d2e24: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D2E24u;
    SET_GPR_U32(ctx, 31, 0x2D2E2Cu);
    ctx->pc = 0x2D2E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E24u;
    // 0x2d2e28: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D2E24u, 0x2D2E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E2Cu;
label_2d2e2c:
    // 0x2d2e2c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D2E2Cu;
    SET_GPR_U32(ctx, 31, 0x2D2E34u);
    ctx->pc = 0x2D2E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E2Cu;
    // 0x2d2e30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D2E2Cu, 0x2D2E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E34u;
label_2d2e34:
    // 0x2d2e34: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D2E34u;
    {
        const bool branch_taken_0x2d2e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E34u;
        // 0x2d2e38: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e34) {
            ctx->pc = 0x2D2E90u;
            goto label_2d2e90;
        }
    }
    ctx->pc = 0x2D2E3Cu;
    // 0x2d2e3c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D2E3Cu;
    SET_GPR_U32(ctx, 31, 0x2D2E44u);
    ctx->pc = 0x2D2E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E3Cu;
    // 0x2d2e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D2E3Cu, 0x2D2E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E44u;
label_2d2e44:
    // 0x2d2e44: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D2E44u;
    {
        const bool branch_taken_0x2d2e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E44u;
        // 0x2d2e48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e44) {
            ctx->pc = 0x2D2E8Cu;
            goto label_2d2e8c;
        }
    }
    ctx->pc = 0x2D2E4Cu;
    // 0x2d2e4c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2d2e4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2e50: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D2E50u;
    {
        const bool branch_taken_0x2d2e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E50u;
        // 0x2d2e54: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e50) {
            ctx->pc = 0x2D2E90u;
            goto label_2d2e90;
        }
    }
    ctx->pc = 0x2D2E58u;
    // 0x2d2e58: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D2E58u;
    SET_GPR_U32(ctx, 31, 0x2D2E60u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D2E58u, 0x2D2E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E60u;
label_2d2e60:
    // 0x2d2e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e64: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2E64u;
    {
        const bool branch_taken_0x2d2e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E64u;
        // 0x2d2e68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e64) {
            ctx->pc = 0x2D2E80u;
            goto label_2d2e80;
        }
    }
    ctx->pc = 0x2D2E6Cu;
    // 0x2d2e6c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d2e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e70: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d2e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e78: 0xc0b4bac  jal         func_2D2EB0
    ctx->pc = 0x2D2E78u;
    SET_GPR_U32(ctx, 31, 0x2D2E80u);
    ctx->pc = 0x2D2E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E78u;
    // 0x2d2e7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2EB0u, 0x2D2E78u, 0x2D2E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E80u;
label_2d2e80:
    // 0x2d2e80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d2e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e84: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D2E84u;
    SET_GPR_U32(ctx, 31, 0x2D2E8Cu);
    ctx->pc = 0x2D2E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E84u;
    // 0x2d2e88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D2E84u, 0x2D2E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E8Cu;
label_2d2e8c:
    // 0x2d2e8c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d2e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d2e90:
    // 0x2d2e90: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d2e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2e94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d2e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2e98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d2e98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2e9c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d2e9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d2ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2EA4u;
        // 0x2d2ea8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2EACu;
    // 0x2d2eac: 0x0  nop
    ctx->pc = 0x2d2eacu;
    // NOP
    ctx->pc = 0x2d2eb0u;
}
