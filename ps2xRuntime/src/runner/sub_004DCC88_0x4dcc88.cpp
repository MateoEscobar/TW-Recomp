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

// Function: sub_004DCC88
// Address: 0x4dcc88 - 0x4dcd50
void sub_004DCC88_0x4dcc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCC88_0x4dcc88");
#endif

    switch (ctx->pc) {
        case 0x4dcc88u: goto label_4dcc88;
        case 0x4dcc8cu: goto label_4dcc8c;
        case 0x4dcc90u: goto label_4dcc90;
        case 0x4dcc94u: goto label_4dcc94;
        case 0x4dcc98u: goto label_4dcc98;
        case 0x4dcc9cu: goto label_4dcc9c;
        case 0x4dcca0u: goto label_4dcca0;
        case 0x4dcca4u: goto label_4dcca4;
        case 0x4dcca8u: goto label_4dcca8;
        case 0x4dccacu: goto label_4dccac;
        case 0x4dccb0u: goto label_4dccb0;
        case 0x4dccb4u: goto label_4dccb4;
        case 0x4dccb8u: goto label_4dccb8;
        case 0x4dccbcu: goto label_4dccbc;
        case 0x4dccc0u: goto label_4dccc0;
        case 0x4dccc4u: goto label_4dccc4;
        case 0x4dccc8u: goto label_4dccc8;
        case 0x4dccccu: goto label_4dcccc;
        case 0x4dccd0u: goto label_4dccd0;
        case 0x4dccd4u: goto label_4dccd4;
        case 0x4dccd8u: goto label_4dccd8;
        case 0x4dccdcu: goto label_4dccdc;
        case 0x4dcce0u: goto label_4dcce0;
        case 0x4dcce4u: goto label_4dcce4;
        case 0x4dcce8u: goto label_4dcce8;
        case 0x4dccecu: goto label_4dccec;
        case 0x4dccf0u: goto label_4dccf0;
        case 0x4dccf4u: goto label_4dccf4;
        case 0x4dccf8u: goto label_4dccf8;
        case 0x4dccfcu: goto label_4dccfc;
        case 0x4dcd00u: goto label_4dcd00;
        case 0x4dcd04u: goto label_4dcd04;
        case 0x4dcd08u: goto label_4dcd08;
        case 0x4dcd0cu: goto label_4dcd0c;
        case 0x4dcd10u: goto label_4dcd10;
        case 0x4dcd14u: goto label_4dcd14;
        case 0x4dcd18u: goto label_4dcd18;
        case 0x4dcd1cu: goto label_4dcd1c;
        case 0x4dcd20u: goto label_4dcd20;
        case 0x4dcd24u: goto label_4dcd24;
        case 0x4dcd28u: goto label_4dcd28;
        case 0x4dcd2cu: goto label_4dcd2c;
        case 0x4dcd30u: goto label_4dcd30;
        case 0x4dcd34u: goto label_4dcd34;
        case 0x4dcd38u: goto label_4dcd38;
        case 0x4dcd3cu: goto label_4dcd3c;
        case 0x4dcd40u: goto label_4dcd40;
        case 0x4dcd44u: goto label_4dcd44;
        case 0x4dcd48u: goto label_4dcd48;
        case 0x4dcd4cu: goto label_4dcd4c;
        default: break;
    }

    ctx->pc = 0x4dcc88u;

label_4dcc88:
    // 0x4dcc88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4dcc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4dcc8c:
    // 0x4dcc8c: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x4dcc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_4dcc90:
    // 0x4dcc90: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4dcc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4dcc94:
    // 0x4dcc94: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x4dcc94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_4dcc98:
    // 0x4dcc98: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4dcc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4dcc9c:
    // 0x4dcc9c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4dcc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4dcca0:
    // 0x4dcca0: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x4dcca0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_4dcca4:
    // 0x4dcca4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4dcca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4dcca8:
    // 0x4dcca8: 0x2610a1e8  addiu       $s0, $s0, -0x5E18
    ctx->pc = 0x4dcca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943208));
label_4dccac:
    // 0x4dccac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4dccacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4dccb0:
    // 0x4dccb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4dccb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dccb4:
    // 0x4dccb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dccb8:
    // 0x4dccb8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4dccb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dccbc:
    // 0x4dccbc: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x4dccbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_4dccc0:
    // 0x4dccc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4dccc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dccc4:
    // 0x4dccc4: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x4dccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4dccc8:
    // 0x4dccc8: 0x26910004  addiu       $s1, $s4, 0x4
    ctx->pc = 0x4dccc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_4dcccc:
    // 0x4dcccc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4dccccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dccd0:
    // 0x4dccd0: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4dccd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4dccd4:
    // 0x4dccd4: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4dccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4dccd8:
    // 0x4dccd8: 0x40f809  jalr        $v0
label_4dccdc:
    if (ctx->pc == 0x4DCCDCu) {
        ctx->pc = 0x4DCCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCCD8u;
        // 0x4dccdc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCCE0u;
        goto label_4dcce0;
    }
    ctx->pc = 0x4DCCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DCCE0u);
        ctx->pc = 0x4DCCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCCD8u;
        // 0x4dccdc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCCD8u, 0x4DCCE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCCE0u;
label_4dcce0:
    // 0x4dcce0: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x4dcce0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_4dcce4:
    // 0x4dcce4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4dcce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dcce8:
    // 0x4dcce8: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x4dcce8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_4dccec:
    // 0x4dccec: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x4dccecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_4dccf0:
    // 0x4dccf0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dccf4:
    // 0x4dccf4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4dccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4dccf8:
    // 0x4dccf8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4dccf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4dccfc:
    // 0x4dccfc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4dccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4dcd00:
    // 0x4dcd00: 0x60f809  jalr        $v1
label_4dcd04:
    if (ctx->pc == 0x4DCD04u) {
        ctx->pc = 0x4DCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD00u;
        // 0x4dcd04: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCD08u;
        goto label_4dcd08;
    }
    ctx->pc = 0x4DCD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DCD08u);
        ctx->pc = 0x4DCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD00u;
        // 0x4dcd04: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCD00u, 0x4DCD08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCD08u;
label_4dcd08:
    // 0x4dcd08: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4dcd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4dcd0c:
    // 0x4dcd0c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x4dcd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_4dcd10:
    // 0x4dcd10: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x4dcd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
label_4dcd14:
    // 0x4dcd14: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4dcd14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4dcd18:
    // 0x4dcd18: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4dcd18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_4dcd1c:
    // 0x4dcd1c: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x4dcd1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_4dcd20:
    // 0x4dcd20: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_4dcd24:
    if (ctx->pc == 0x4DCD24u) {
        ctx->pc = 0x4DCD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD20u;
        // 0x4dcd24: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCD28u;
        goto label_4dcd28;
    }
    ctx->pc = 0x4DCD20u;
    {
        const bool branch_taken_0x4dcd20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DCD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD20u;
        // 0x4dcd24: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcd20) {
            ctx->pc = 0x4DCD30u;
            goto label_4dcd30;
        }
    }
    ctx->pc = 0x4DCD28u;
label_4dcd28:
    // 0x4dcd28: 0xc10b208  jal         func_42C820
label_4dcd2c:
    if (ctx->pc == 0x4DCD2Cu) {
        ctx->pc = 0x4DCD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD28u;
        // 0x4dcd2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCD30u;
        goto label_4dcd30;
    }
    ctx->pc = 0x4DCD28u;
    SET_GPR_U32(ctx, 31, 0x4DCD30u);
    ctx->pc = 0x4DCD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCD28u;
    // 0x4dcd2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4DCD28u, 0x4DCD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCD30u;
label_4dcd30:
    // 0x4dcd30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4dcd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4dcd34:
    // 0x4dcd34: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4dcd34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dcd38:
    // 0x4dcd38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4dcd38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dcd3c:
    // 0x4dcd3c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4dcd3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dcd40:
    // 0x4dcd40: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4dcd40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dcd44:
    // 0x4dcd44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dcd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dcd48:
    // 0x4dcd48: 0x3e00008  jr          $ra
label_4dcd4c:
    if (ctx->pc == 0x4DCD4Cu) {
        ctx->pc = 0x4DCD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD48u;
        // 0x4dcd4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCD50u;
        goto label_fallthrough_0x4dcd48;
    }
    ctx->pc = 0x4DCD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCD48u;
        // 0x4dcd4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dcd48:
    ctx->pc = 0x4DCD50u;
}
