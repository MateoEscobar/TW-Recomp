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

// Function: sub_00417DF8
// Address: 0x417df8 - 0x417ed0
void sub_00417DF8_0x417df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417DF8_0x417df8");
#endif

    switch (ctx->pc) {
        case 0x417e44u: goto label_417e44;
        case 0x417e60u: goto label_417e60;
        case 0x417e6cu: goto label_417e6c;
        case 0x417e78u: goto label_417e78;
        case 0x417e8cu: goto label_417e8c;
        default: break;
    }

    ctx->pc = 0x417df8u;

    // 0x417df8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x417df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x417dfc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x417dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x417e00: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x417e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x417e04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x417e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417e08: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x417e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x417e0c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x417e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x417e10: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x417e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x417e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x417e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x417e18: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x417e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x417e1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x417e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x417e20: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x417e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x417e24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x417e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x417e28: 0x54720004  bnel        $v1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x417E28u;
    {
        const bool branch_taken_0x417e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x417e28) {
            ctx->pc = 0x417E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417E28u;
            // 0x417e2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417E3Cu;
            goto label_417e3c;
        }
    }
    ctx->pc = 0x417E30u;
    // 0x417e30: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x417e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x417e34: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x417e34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x417e38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x417e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_417e3c:
    // 0x417e3c: 0xc105f16  jal         func_417C58
    ctx->pc = 0x417E3Cu;
    SET_GPR_U32(ctx, 31, 0x417E44u);
    ctx->pc = 0x417E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417E3Cu;
    // 0x417e40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417C58u, 0x417E3Cu, 0x417E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417E44u;
label_417e44:
    // 0x417e44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x417e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x417e48: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x417e48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x417e4c: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x417e4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x417e50: 0x18800014  blez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x417E50u;
    {
        const bool branch_taken_0x417e50 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x417E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417E50u;
        // 0x417e54: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417e50) {
            ctx->pc = 0x417EA4u;
            goto label_417ea4;
        }
    }
    ctx->pc = 0x417E58u;
    // 0x417e58: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x417e58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x417e5c: 0x0  nop
    ctx->pc = 0x417e5cu;
    // NOP
label_417e60:
    // 0x417e60: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x417e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x417e64: 0xc0e409a  jal         func_390268
    ctx->pc = 0x417E64u;
    SET_GPR_U32(ctx, 31, 0x417E6Cu);
    ctx->pc = 0x417E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417E64u;
    // 0x417e68: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x417E64u, 0x417E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417E6Cu;
label_417e6c:
    // 0x417e6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x417e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417e70: 0xc090222  jal         func_240888
    ctx->pc = 0x417E70u;
    SET_GPR_U32(ctx, 31, 0x417E78u);
    ctx->pc = 0x417E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417E70u;
    // 0x417e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240888u, 0x417E70u, 0x417E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417E78u;
label_417e78:
    // 0x417e78: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x417E78u;
    {
        const bool branch_taken_0x417e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x417E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417E78u;
        // 0x417e7c: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417e78) {
            ctx->pc = 0x417E90u;
            goto label_417e90;
        }
    }
    ctx->pc = 0x417E80u;
    // 0x417e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x417e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417e84: 0xc090224  jal         func_240890
    ctx->pc = 0x417E84u;
    SET_GPR_U32(ctx, 31, 0x417E8Cu);
    ctx->pc = 0x417E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417E84u;
    // 0x417e88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240890u, 0x417E84u, 0x417E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417E8Cu;
label_417e8c:
    // 0x417e8c: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x417e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_417e90:
    // 0x417e90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x417e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x417e94: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x417e94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x417e98: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x417e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x417e9c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x417E9Cu;
    {
        const bool branch_taken_0x417e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x417EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417E9Cu;
        // 0x417ea0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417e9c) {
            ctx->pc = 0x417E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_417e60;
        }
    }
    ctx->pc = 0x417EA4u;
label_417ea4:
    // 0x417ea4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x417ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x417ea8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x417ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x417eac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x417eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x417eb0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x417eb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x417eb4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x417eb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x417ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x417EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417EBCu;
        // 0x417ec0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417EC4u;
    // 0x417ec4: 0x0  nop
    ctx->pc = 0x417ec4u;
    // NOP
    // 0x417ec8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x417ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x417ecc: 0x0  nop
    ctx->pc = 0x417eccu;
    // NOP
    ctx->pc = 0x417ed0u;
}
