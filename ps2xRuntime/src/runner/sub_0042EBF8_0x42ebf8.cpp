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

// Function: sub_0042EBF8
// Address: 0x42ebf8 - 0x42edd0
void sub_0042EBF8_0x42ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EBF8_0x42ebf8");
#endif

    switch (ctx->pc) {
        case 0x42ec2cu: goto label_42ec2c;
        case 0x42ec40u: goto label_42ec40;
        case 0x42ec64u: goto label_42ec64;
        case 0x42eca0u: goto label_42eca0;
        case 0x42ecb0u: goto label_42ecb0;
        case 0x42ecf0u: goto label_42ecf0;
        case 0x42ed28u: goto label_42ed28;
        case 0x42ed38u: goto label_42ed38;
        case 0x42ed5cu: goto label_42ed5c;
        default: break;
    }

    ctx->pc = 0x42ebf8u;

    // 0x42ebf8: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x42ebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    // 0x42ebfc: 0xffb60390  sd          $s6, 0x390($sp)
    ctx->pc = 0x42ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 22));
    // 0x42ec00: 0xffb703a0  sd          $s7, 0x3A0($sp)
    ctx->pc = 0x42ec00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 23));
    // 0x42ec04: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x42ec04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ec08: 0xffb20350  sd          $s2, 0x350($sp)
    ctx->pc = 0x42ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 18));
    // 0x42ec0c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x42ec0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ec10: 0xffbf03b0  sd          $ra, 0x3B0($sp)
    ctx->pc = 0x42ec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 31));
    // 0x42ec14: 0xffb50380  sd          $s5, 0x380($sp)
    ctx->pc = 0x42ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 21));
    // 0x42ec18: 0xffb40370  sd          $s4, 0x370($sp)
    ctx->pc = 0x42ec18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 20));
    // 0x42ec1c: 0xffb30360  sd          $s3, 0x360($sp)
    ctx->pc = 0x42ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 19));
    // 0x42ec20: 0xffb10340  sd          $s1, 0x340($sp)
    ctx->pc = 0x42ec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 17));
    // 0x42ec24: 0xc10b974  jal         func_42E5D0
    ctx->pc = 0x42EC24u;
    SET_GPR_U32(ctx, 31, 0x42EC2Cu);
    ctx->pc = 0x42EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42EC24u;
    // 0x42ec28: 0xffb00330  sd          $s0, 0x330($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E5D0u, 0x42EC24u, 0x42EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42EC2Cu;
label_42ec2c:
    // 0x42ec2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x42ec2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ec30: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x42EC30u;
    {
        const bool branch_taken_0x42ec30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EC30u;
        // 0x42ec34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ec30) {
            ctx->pc = 0x42EC4Cu;
            goto label_42ec4c;
        }
    }
    ctx->pc = 0x42EC38u;
    // 0x42ec38: 0xc10b9ae  jal         func_42E6B8
    ctx->pc = 0x42EC38u;
    SET_GPR_U32(ctx, 31, 0x42EC40u);
    ctx->pc = 0x42EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42EC38u;
    // 0x42ec3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E6B8u, 0x42EC38u, 0x42EC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42EC40u;
label_42ec40:
    // 0x42ec40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42ec40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ec44: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42EC44u;
    {
        const bool branch_taken_0x42ec44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x42EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EC44u;
        // 0x42ec48: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ec44) {
            ctx->pc = 0x42EC54u;
            goto label_42ec54;
        }
    }
    ctx->pc = 0x42EC4Cu;
label_42ec4c:
    // 0x42ec4c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x42EC4Cu;
    {
        const bool branch_taken_0x42ec4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EC4Cu;
        // 0x42ec50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ec4c) {
            ctx->pc = 0x42EDA4u;
            goto label_42eda4;
        }
    }
    ctx->pc = 0x42EC54u;
label_42ec54:
    // 0x42ec54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42ec54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ec58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x42ec58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ec5c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x42EC5Cu;
    SET_GPR_U32(ctx, 31, 0x42EC64u);
    ctx->pc = 0x42EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42EC5Cu;
    // 0x42ec60: 0x240602f8  addiu       $a2, $zero, 0x2F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x42EC5Cu, 0x42EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42EC64u;
label_42ec64:
    // 0x42ec64: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x42ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x42ec68: 0x97a40010  lhu         $a0, 0x10($sp)
    ctx->pc = 0x42ec68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42ec6c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x42ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x42ec70: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x42ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42ec74: 0xa7a402ba  sh          $a0, 0x2BA($sp)
    ctx->pc = 0x42ec74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 698), (uint16_t)GPR_U32(ctx, 4));
    // 0x42ec78: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x42ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x42ec7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42ec80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42ec84: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x42ec84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x42ec88: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x42ec88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x42ec8c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x42EC8Cu;
    {
        const bool branch_taken_0x42ec8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EC8Cu;
        // 0x42ec90: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ec8c) {
            ctx->pc = 0x42ECC8u;
            goto label_42ecc8;
        }
    }
    ctx->pc = 0x42EC94u;
    // 0x42ec94: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x42ec94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x42ec98: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x42ec98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x42ec9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42ec9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42eca0:
    // 0x42eca0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x42eca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42eca4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x42eca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42eca8: 0xc10b9f0  jal         func_42E7C0
    ctx->pc = 0x42ECA8u;
    SET_GPR_U32(ctx, 31, 0x42ECB0u);
    ctx->pc = 0x42ECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ECA8u;
    // 0x42ecac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E7C0u, 0x42ECA8u, 0x42ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ECB0u;
label_42ecb0:
    // 0x42ecb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42ecb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ecb4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x42ecb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x42ecb8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x42ECB8u;
    {
        const bool branch_taken_0x42ecb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ECB8u;
        // 0x42ecbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ecb8) {
            ctx->pc = 0x42ECA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42eca0;
        }
    }
    ctx->pc = 0x42ECC0u;
    // 0x42ecc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x42ECC0u;
    {
        const bool branch_taken_0x42ecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ECC0u;
        // 0x42ecc4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ecc0) {
            ctx->pc = 0x42ECD4u;
            goto label_42ecd4;
        }
    }
    ctx->pc = 0x42ECC8u;
label_42ecc8:
    // 0x42ecc8: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x42ecc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x42eccc: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x42ecccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x42ecd0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x42ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_42ecd4:
    // 0x42ecd4: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x42ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x42ecd8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x42ecd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42ecdc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42ECDCu;
    {
        const bool branch_taken_0x42ecdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x42ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ECDCu;
        // 0x42ece0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ecdc) {
            ctx->pc = 0x42ECF8u;
            goto label_42ecf8;
        }
    }
    ctx->pc = 0x42ECE4u;
    // 0x42ece4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42ece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ece8: 0xc10b7f0  jal         func_42DFC0
    ctx->pc = 0x42ECE8u;
    SET_GPR_U32(ctx, 31, 0x42ECF0u);
    ctx->pc = 0x42ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ECE8u;
    // 0x42ecec: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DFC0u, 0x42ECE8u, 0x42ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ECF0u;
label_42ecf0:
    // 0x42ecf0: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x42ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x42ecf4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x42ecf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42ecf8:
    // 0x42ecf8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x42ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x42ecfc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x42ecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x42ed00: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x42ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x42ed04: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x42ed04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x42ed08: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x42ed08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x42ed0c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x42ED0Cu;
    {
        const bool branch_taken_0x42ed0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ED0Cu;
        // 0x42ed10: 0xafa50324  sw          $a1, 0x324($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ed0c) {
            ctx->pc = 0x42ED54u;
            goto label_42ed54;
        }
    }
    ctx->pc = 0x42ED14u;
    // 0x42ed14: 0x2c5102b  sltu        $v0, $s6, $a1
    ctx->pc = 0x42ed14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x42ed18: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x42ED18u;
    {
        const bool branch_taken_0x42ed18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ED18u;
        // 0x42ed1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ed18) {
            ctx->pc = 0x42ED58u;
            goto label_42ed58;
        }
    }
    ctx->pc = 0x42ED20u;
    // 0x42ed20: 0x27b20324  addiu       $s2, $sp, 0x324
    ctx->pc = 0x42ed20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
    // 0x42ed24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42ed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42ed28:
    // 0x42ed28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x42ed28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ed2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x42ed2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ed30: 0xc10b9f0  jal         func_42E7C0
    ctx->pc = 0x42ED30u;
    SET_GPR_U32(ctx, 31, 0x42ED38u);
    ctx->pc = 0x42ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ED30u;
    // 0x42ed34: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42E7C0u, 0x42ED30u, 0x42ED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ED38u;
label_42ed38:
    // 0x42ed38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42ed38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ed3c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x42ed3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x42ed40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42ED40u;
    {
        const bool branch_taken_0x42ed40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ED40u;
        // 0x42ed44: 0x8fa20324  lw          $v0, 0x324($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ed40) {
            ctx->pc = 0x42ED54u;
            goto label_42ed54;
        }
    }
    ctx->pc = 0x42ED48u;
    // 0x42ed48: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x42ed48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x42ed4c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x42ED4Cu;
    {
        const bool branch_taken_0x42ed4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ED4Cu;
        // 0x42ed50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ed4c) {
            ctx->pc = 0x42ED28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ed28;
        }
    }
    ctx->pc = 0x42ED54u;
label_42ed54:
    // 0x42ed54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x42ed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42ed58:
    // 0x42ed58: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x42ed58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_42ed5c:
    // 0x42ed5c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x42ed5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42ed60: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x42ed60u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x42ed64: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x42ed64u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x42ed68: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x42ed68u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x42ed6c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x42ed6cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x42ed70: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x42ed70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x42ed74: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x42ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x42ed78: 0xfc470018  sd          $a3, 0x18($v0)
    ctx->pc = 0x42ed78u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 7));
    // 0x42ed7c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x42ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x42ed80: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x42ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x42ed84: 0x0  nop
    ctx->pc = 0x42ed84u;
    // NOP
    // 0x42ed88: 0x1495fff4  bne         $a0, $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x42ED88u;
    {
        const bool branch_taken_0x42ed88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        if (branch_taken_0x42ed88) {
            ctx->pc = 0x42ED5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ed5c;
        }
    }
    ctx->pc = 0x42ED90u;
    // 0x42ed90: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x42ed90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42ed94: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x42ed94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x42ed98: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x42ed98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x42ed9c: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x42ed9cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x42eda0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x42eda0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_42eda4:
    // 0x42eda4: 0xdfbf03b0  ld          $ra, 0x3B0($sp)
    ctx->pc = 0x42eda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x42eda8: 0xdfb703a0  ld          $s7, 0x3A0($sp)
    ctx->pc = 0x42eda8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x42edac: 0xdfb60390  ld          $s6, 0x390($sp)
    ctx->pc = 0x42edacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x42edb0: 0xdfb50380  ld          $s5, 0x380($sp)
    ctx->pc = 0x42edb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x42edb4: 0xdfb40370  ld          $s4, 0x370($sp)
    ctx->pc = 0x42edb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x42edb8: 0xdfb30360  ld          $s3, 0x360($sp)
    ctx->pc = 0x42edb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x42edbc: 0xdfb20350  ld          $s2, 0x350($sp)
    ctx->pc = 0x42edbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x42edc0: 0xdfb10340  ld          $s1, 0x340($sp)
    ctx->pc = 0x42edc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x42edc4: 0xdfb00330  ld          $s0, 0x330($sp)
    ctx->pc = 0x42edc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x42edc8: 0x3e00008  jr          $ra
    ctx->pc = 0x42EDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42EDC8u;
        // 0x42edcc: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42EDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42EDD0u;
}
