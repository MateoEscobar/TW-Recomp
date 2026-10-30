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

// Function: sub_001F1AC8
// Address: 0x1f1ac8 - 0x1f1b60
void sub_001F1AC8_0x1f1ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1AC8_0x1f1ac8");
#endif

    switch (ctx->pc) {
        case 0x1f1ac8u: goto label_1f1ac8;
        case 0x1f1accu: goto label_1f1acc;
        case 0x1f1ad0u: goto label_1f1ad0;
        case 0x1f1ad4u: goto label_1f1ad4;
        case 0x1f1ad8u: goto label_1f1ad8;
        case 0x1f1adcu: goto label_1f1adc;
        case 0x1f1ae0u: goto label_1f1ae0;
        case 0x1f1ae4u: goto label_1f1ae4;
        case 0x1f1ae8u: goto label_1f1ae8;
        case 0x1f1aecu: goto label_1f1aec;
        case 0x1f1af0u: goto label_1f1af0;
        case 0x1f1af4u: goto label_1f1af4;
        case 0x1f1af8u: goto label_1f1af8;
        case 0x1f1afcu: goto label_1f1afc;
        case 0x1f1b00u: goto label_1f1b00;
        case 0x1f1b04u: goto label_1f1b04;
        case 0x1f1b08u: goto label_1f1b08;
        case 0x1f1b0cu: goto label_1f1b0c;
        case 0x1f1b10u: goto label_1f1b10;
        case 0x1f1b14u: goto label_1f1b14;
        case 0x1f1b18u: goto label_1f1b18;
        case 0x1f1b1cu: goto label_1f1b1c;
        case 0x1f1b20u: goto label_1f1b20;
        case 0x1f1b24u: goto label_1f1b24;
        case 0x1f1b28u: goto label_1f1b28;
        case 0x1f1b2cu: goto label_1f1b2c;
        case 0x1f1b30u: goto label_1f1b30;
        case 0x1f1b34u: goto label_1f1b34;
        case 0x1f1b38u: goto label_1f1b38;
        case 0x1f1b3cu: goto label_1f1b3c;
        case 0x1f1b40u: goto label_1f1b40;
        case 0x1f1b44u: goto label_1f1b44;
        case 0x1f1b48u: goto label_1f1b48;
        case 0x1f1b4cu: goto label_1f1b4c;
        case 0x1f1b50u: goto label_1f1b50;
        case 0x1f1b54u: goto label_1f1b54;
        case 0x1f1b58u: goto label_1f1b58;
        case 0x1f1b5cu: goto label_1f1b5c;
        default: break;
    }

    ctx->pc = 0x1f1ac8u;

label_1f1ac8:
    // 0x1f1ac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f1acc:
    // 0x1f1acc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f1accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f1ad0:
    // 0x1f1ad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f1ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f1ad4:
    // 0x1f1ad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ad8:
    // 0x1f1ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f1adc:
    // 0x1f1adc: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1f1adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1f1ae0:
    // 0x1f1ae0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f1ae4:
    // 0x1f1ae4: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f1ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f1ae8:
    // 0x1f1ae8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f1aec:
    // 0x1f1aec: 0x40f809  jalr        $v0
label_1f1af0:
    if (ctx->pc == 0x1F1AF0u) {
        ctx->pc = 0x1F1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AECu;
        // 0x1f1af0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AF4u;
        goto label_1f1af4;
    }
    ctx->pc = 0x1F1AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1AF4u);
        ctx->pc = 0x1F1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AECu;
        // 0x1f1af0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1AECu, 0x1F1AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1AF4u;
label_1f1af4:
    // 0x1f1af4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1f1af8:
    if (ctx->pc == 0x1F1AF8u) {
        ctx->pc = 0x1F1AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AF4u;
        // 0x1f1af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1AFCu;
        goto label_1f1afc;
    }
    ctx->pc = 0x1F1AF4u;
    {
        const bool branch_taken_0x1f1af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1AF4u;
        // 0x1f1af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1af4) {
            ctx->pc = 0x1F1B4Cu;
            goto label_1f1b4c;
        }
    }
    ctx->pc = 0x1F1AFCu;
label_1f1afc:
    // 0x1f1afc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f1b00:
    // 0x1f1b00: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f1b00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f1b04:
    // 0x1f1b04: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f1b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f1b08:
    // 0x1f1b08: 0x60f809  jalr        $v1
label_1f1b0c:
    if (ctx->pc == 0x1F1B0Cu) {
        ctx->pc = 0x1F1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B08u;
        // 0x1f1b0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B10u;
        goto label_1f1b10;
    }
    ctx->pc = 0x1F1B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F1B10u);
        ctx->pc = 0x1F1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B08u;
        // 0x1f1b0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B08u, 0x1F1B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1B10u;
label_1f1b10:
    // 0x1f1b10: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1f1b14:
    // 0x1f1b14: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f1b14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f1b18:
    // 0x1f1b18: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f1b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f1b1c:
    // 0x1f1b1c: 0x60f809  jalr        $v1
label_1f1b20:
    if (ctx->pc == 0x1F1B20u) {
        ctx->pc = 0x1F1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B1Cu;
        // 0x1f1b20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B24u;
        goto label_1f1b24;
    }
    ctx->pc = 0x1F1B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F1B24u);
        ctx->pc = 0x1F1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B1Cu;
        // 0x1f1b20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B1Cu, 0x1F1B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1B24u;
label_1f1b24:
    // 0x1f1b24: 0xc0720f2  jal         func_1C83C8
label_1f1b28:
    if (ctx->pc == 0x1F1B28u) {
        ctx->pc = 0x1F1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B24u;
        // 0x1f1b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B2Cu;
        goto label_1f1b2c;
    }
    ctx->pc = 0x1F1B24u;
    SET_GPR_U32(ctx, 31, 0x1F1B2Cu);
    ctx->pc = 0x1F1B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1B24u;
    // 0x1f1b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C83C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C83C8u, 0x1F1B24u, 0x1F1B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B2Cu;
label_1f1b2c:
    // 0x1f1b2c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f1b30:
    // 0x1f1b30: 0x8c65cdb4  lw          $a1, -0x324C($v1)
    ctx->pc = 0x1f1b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_1f1b34:
    // 0x1f1b34: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1f1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f1b38:
    // 0x1f1b38: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1f1b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f1b3c:
    // 0x1f1b3c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1f1b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f1b40:
    // 0x1f1b40: 0x60f809  jalr        $v1
label_1f1b44:
    if (ctx->pc == 0x1F1B44u) {
        ctx->pc = 0x1F1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B40u;
        // 0x1f1b44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B48u;
        goto label_1f1b48;
    }
    ctx->pc = 0x1F1B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F1B48u);
        ctx->pc = 0x1F1B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B40u;
        // 0x1f1b44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B40u, 0x1F1B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1B48u;
label_1f1b48:
    // 0x1f1b48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b4c:
    // 0x1f1b4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f1b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1b50:
    // 0x1f1b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1b54:
    // 0x1f1b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1b58:
    // 0x1f1b58: 0x3e00008  jr          $ra
label_1f1b5c:
    if (ctx->pc == 0x1F1B5Cu) {
        ctx->pc = 0x1F1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B58u;
        // 0x1f1b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1B60u;
        goto label_fallthrough_0x1f1b58;
    }
    ctx->pc = 0x1F1B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B58u;
        // 0x1f1b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f1b58:
    ctx->pc = 0x1F1B60u;
}
