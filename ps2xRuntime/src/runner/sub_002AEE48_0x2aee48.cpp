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

// Function: sub_002AEE48
// Address: 0x2aee48 - 0x2aef30
void sub_002AEE48_0x2aee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEE48_0x2aee48");
#endif

    switch (ctx->pc) {
        case 0x2aee80u: goto label_2aee80;
        case 0x2aeebcu: goto label_2aeebc;
        case 0x2aeeccu: goto label_2aeecc;
        case 0x2aef00u: goto label_2aef00;
        default: break;
    }

    ctx->pc = 0x2aee48u;

    // 0x2aee48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2aee48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2aee4c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2aee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2aee50: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2aee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2aee54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2aee54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee58: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2aee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2aee5c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2aee5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2aee60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee64: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2aee64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2aee68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2aee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2aee6c: 0x24070fa0  addiu       $a3, $zero, 0xFA0
    ctx->pc = 0x2aee6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x2aee70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aee74: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2aee74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2aee78: 0xc0ab784  jal         func_2ADE10
    ctx->pc = 0x2AEE78u;
    SET_GPR_U32(ctx, 31, 0x2AEE80u);
    ctx->pc = 0x2AEE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE78u;
    // 0x2aee7c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADE10u, 0x2AEE78u, 0x2AEE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE80u;
label_2aee80:
    // 0x2aee80: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2aee80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2aee84: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2aee84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2aee88: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x2aee88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x2aee8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aee90: 0xae700020  sw          $s0, 0x20($s3)
    ctx->pc = 0x2aee90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 16));
    // 0x2aee94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2aee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee98: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2aee98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2aee9c: 0xa2630029  sb          $v1, 0x29($s3)
    ctx->pc = 0x2aee9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aeea0: 0xae710024  sw          $s1, 0x24($s3)
    ctx->pc = 0x2aeea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 17));
    // 0x2aeea4: 0xa2600028  sb          $zero, 0x28($s3)
    ctx->pc = 0x2aeea4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aeea8: 0xa0b202e5  sb          $s2, 0x2E5($a1)
    ctx->pc = 0x2aeea8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 741), (uint8_t)GPR_U32(ctx, 18));
    // 0x2aeeac: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2aeeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2aeeb0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2aeeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2aeeb4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2AEEB4u;
    SET_GPR_U32(ctx, 31, 0x2AEEBCu);
    ctx->pc = 0x2AEEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEEB4u;
    // 0x2aeeb8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2AEEB4u, 0x2AEEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEEBCu;
label_2aeebc:
    // 0x2aeebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aeebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aeec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeec4: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2AEEC4u;
    SET_GPR_U32(ctx, 31, 0x2AEECCu);
    ctx->pc = 0x2AEEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEEC4u;
    // 0x2aeec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2AEEC4u, 0x2AEECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEECCu;
label_2aeecc:
    // 0x2aeecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aeeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeed0: 0x80a201b0  lb          $v0, 0x1B0($a1)
    ctx->pc = 0x2aeed0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x2aeed4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2aeed4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2aeed8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2aeed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2aeedc: 0x1452000c  bne         $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2AEEDCu;
    {
        const bool branch_taken_0x2aeedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2AEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEDCu;
        // 0x2aeee0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeedc) {
            ctx->pc = 0x2AEF10u;
            goto label_2aef10;
        }
    }
    ctx->pc = 0x2AEEE4u;
    // 0x2aeee4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2aeee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2aeee8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2aeee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aeeec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2aeeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2aeef0: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AEEF0u;
    {
        const bool branch_taken_0x2aeef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEEF0u;
        // 0x2aeef4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeef0) {
            ctx->pc = 0x2AEF10u;
            goto label_2aef10;
        }
    }
    ctx->pc = 0x2AEEF8u;
    // 0x2aeef8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AEEF8u;
    SET_GPR_U32(ctx, 31, 0x2AEF00u);
    ctx->pc = 0x2AEEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEEF8u;
    // 0x2aeefc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AEEF8u, 0x2AEF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEF00u;
label_2aef00:
    // 0x2aef00: 0x904302e4  lbu         $v1, 0x2E4($v0)
    ctx->pc = 0x2aef00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 740)));
    // 0x2aef04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2aef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2aef08: 0xa04302e4  sb          $v1, 0x2E4($v0)
    ctx->pc = 0x2aef08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 740), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aef0c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2aef0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2aef10:
    // 0x2aef10: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2aef10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aef14: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2aef14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aef18: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2aef18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aef1c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2aef1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aef20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aef20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aef24: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEF24u;
        // 0x2aef28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEF2Cu;
    // 0x2aef2c: 0x0  nop
    ctx->pc = 0x2aef2cu;
    // NOP
    ctx->pc = 0x2aef30u;
}
