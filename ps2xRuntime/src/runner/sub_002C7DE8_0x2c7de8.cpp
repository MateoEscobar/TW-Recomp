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

// Function: sub_002C7DE8
// Address: 0x2c7de8 - 0x2c7ee0
void sub_002C7DE8_0x2c7de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7DE8_0x2c7de8");
#endif

    switch (ctx->pc) {
        case 0x2c7e28u: goto label_2c7e28;
        case 0x2c7e50u: goto label_2c7e50;
        case 0x2c7e68u: goto label_2c7e68;
        case 0x2c7e7cu: goto label_2c7e7c;
        default: break;
    }

    ctx->pc = 0x2c7de8u;

    // 0x2c7de8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c7de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c7dec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2c7decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2c7df0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2c7df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2c7df4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7df8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2c7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2c7dfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c7dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c7e00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2c7e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2c7e04: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2c7e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2c7e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c7e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c7e0c: 0x9222003f  lbu         $v0, 0x3F($s1)
    ctx->pc = 0x2c7e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 63)));
    // 0x2c7e10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7E10u;
    {
        const bool branch_taken_0x2c7e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E10u;
        // 0x2c7e14: 0x2405029c  addiu       $a1, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e10) {
            ctx->pc = 0x2C7E28u;
            goto label_2c7e28;
        }
    }
    ctx->pc = 0x2C7E18u;
    // 0x2c7e18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c7e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e20: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x2C7E20u;
    SET_GPR_U32(ctx, 31, 0x2C7E28u);
    ctx->pc = 0x2C7E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E20u;
    // 0x2c7e24: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2C7E20u, 0x2C7E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E28u;
label_2c7e28:
    // 0x2c7e28: 0xa220003e  sb          $zero, 0x3E($s1)
    ctx->pc = 0x2c7e28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 62), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7e2c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c7e2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7e30: 0xa220003f  sb          $zero, 0x3F($s1)
    ctx->pc = 0x2c7e30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7e34: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x2c7e34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x2c7e38: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x2c7e38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7e3c: 0x26300043  addiu       $s0, $s1, 0x43
    ctx->pc = 0x2c7e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 67));
    // 0x2c7e40: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x2c7e40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7e44: 0x24130228  addiu       $s3, $zero, 0x228
    ctx->pc = 0x2c7e44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x2c7e48: 0xa2200045  sb          $zero, 0x45($s1)
    ctx->pc = 0x2c7e48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7e4c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2c7e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7e50:
    // 0x2c7e50: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2c7e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c7e54: 0x5455000a  bnel        $v0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x2C7E54u;
    {
        const bool branch_taken_0x2c7e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2c7e54) {
            ctx->pc = 0x2C7E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7E54u;
            // 0x2c7e58: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7E80u;
            goto label_2c7e80;
        }
    }
    ctx->pc = 0x2C7E5Cu;
    // 0x2c7e5c: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x2c7e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x2c7e60: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C7E60u;
    SET_GPR_U32(ctx, 31, 0x2C7E68u);
    ctx->pc = 0x2C7E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E60u;
    // 0x2c7e64: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C7E60u, 0x2C7E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E68u;
label_2c7e68:
    // 0x2c7e68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7E68u;
    {
        const bool branch_taken_0x2c7e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E68u;
        // 0x2c7e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e68) {
            ctx->pc = 0x2C7E7Cu;
            goto label_2c7e7c;
        }
    }
    ctx->pc = 0x2C7E70u;
    // 0x2c7e70: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2c7e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2c7e74: 0xc0886a8  jal         func_221AA0
    ctx->pc = 0x2C7E74u;
    SET_GPR_U32(ctx, 31, 0x2C7E7Cu);
    ctx->pc = 0x2C7E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7E74u;
    // 0x2c7e78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AA0u, 0x2C7E74u, 0x2C7E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7E7Cu;
label_2c7e7c:
    // 0x2c7e7c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2c7e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2c7e80:
    // 0x2c7e80: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2c7e80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c7e84: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2c7e84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2c7e88: 0x641fff1  bgez        $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C7E88u;
    {
        const bool branch_taken_0x2c7e88 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2C7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E88u;
        // 0x2c7e8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e88) {
            ctx->pc = 0x2C7E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7e50;
        }
    }
    ctx->pc = 0x2C7E90u;
    // 0x2c7e90: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2c7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2c7e94: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2c7e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2c7e98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7E98u;
    {
        const bool branch_taken_0x2c7e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E98u;
        // 0x2c7e9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e98) {
            ctx->pc = 0x2C7EA8u;
            goto label_2c7ea8;
        }
    }
    ctx->pc = 0x2C7EA0u;
    // 0x2c7ea0: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x2c7ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x2c7ea4: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2c7ea4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c7ea8:
    // 0x2c7ea8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7EA8u;
    {
        const bool branch_taken_0x2c7ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EA8u;
        // 0x2c7eac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ea8) {
            ctx->pc = 0x2C7EB4u;
            goto label_2c7eb4;
        }
    }
    ctx->pc = 0x2C7EB0u;
    // 0x2c7eb0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x2c7eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_2c7eb4:
    // 0x2c7eb4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2c7eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x2c7eb8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2c7eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c7ebc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2c7ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c7ec0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2c7ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7ec4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c7ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7ec8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2c7ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7ecc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2c7eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c7ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7ED4u;
        // 0x2c7ed8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7EDCu;
    // 0x2c7edc: 0x0  nop
    ctx->pc = 0x2c7edcu;
    // NOP
    ctx->pc = 0x2c7ee0u;
}
