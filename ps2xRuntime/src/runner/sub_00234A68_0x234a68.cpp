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

// Function: sub_00234A68
// Address: 0x234a68 - 0x234b30
void sub_00234A68_0x234a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234A68_0x234a68");
#endif

    switch (ctx->pc) {
        case 0x234a68u: goto label_234a68;
        case 0x234a6cu: goto label_234a6c;
        case 0x234a70u: goto label_234a70;
        case 0x234a74u: goto label_234a74;
        case 0x234a78u: goto label_234a78;
        case 0x234a7cu: goto label_234a7c;
        case 0x234a80u: goto label_234a80;
        case 0x234a84u: goto label_234a84;
        case 0x234a88u: goto label_234a88;
        case 0x234a8cu: goto label_234a8c;
        case 0x234a90u: goto label_234a90;
        case 0x234a94u: goto label_234a94;
        case 0x234a98u: goto label_234a98;
        case 0x234a9cu: goto label_234a9c;
        case 0x234aa0u: goto label_234aa0;
        case 0x234aa4u: goto label_234aa4;
        case 0x234aa8u: goto label_234aa8;
        case 0x234aacu: goto label_234aac;
        case 0x234ab0u: goto label_234ab0;
        case 0x234ab4u: goto label_234ab4;
        case 0x234ab8u: goto label_234ab8;
        case 0x234abcu: goto label_234abc;
        case 0x234ac0u: goto label_234ac0;
        case 0x234ac4u: goto label_234ac4;
        case 0x234ac8u: goto label_234ac8;
        case 0x234accu: goto label_234acc;
        case 0x234ad0u: goto label_234ad0;
        case 0x234ad4u: goto label_234ad4;
        case 0x234ad8u: goto label_234ad8;
        case 0x234adcu: goto label_234adc;
        case 0x234ae0u: goto label_234ae0;
        case 0x234ae4u: goto label_234ae4;
        case 0x234ae8u: goto label_234ae8;
        case 0x234aecu: goto label_234aec;
        case 0x234af0u: goto label_234af0;
        case 0x234af4u: goto label_234af4;
        case 0x234af8u: goto label_234af8;
        case 0x234afcu: goto label_234afc;
        case 0x234b00u: goto label_234b00;
        case 0x234b04u: goto label_234b04;
        case 0x234b08u: goto label_234b08;
        case 0x234b0cu: goto label_234b0c;
        case 0x234b10u: goto label_234b10;
        case 0x234b14u: goto label_234b14;
        case 0x234b18u: goto label_234b18;
        case 0x234b1cu: goto label_234b1c;
        case 0x234b20u: goto label_234b20;
        case 0x234b24u: goto label_234b24;
        case 0x234b28u: goto label_234b28;
        case 0x234b2cu: goto label_234b2c;
        default: break;
    }

    ctx->pc = 0x234a68u;

label_234a68:
    // 0x234a68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x234a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_234a6c:
    // 0x234a6c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x234a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_234a70:
    // 0x234a70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x234a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_234a74:
    // 0x234a74: 0x8c450240  lw          $a1, 0x240($v0)
    ctx->pc = 0x234a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
label_234a78:
    // 0x234a78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x234a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234a7c:
    // 0x234a7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x234a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_234a80:
    // 0x234a80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x234a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_234a84:
    // 0x234a84: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x234a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_234a88:
    // 0x234a88: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_234a8c:
    if (ctx->pc == 0x234A8Cu) {
        ctx->pc = 0x234A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A88u;
        // 0x234a8c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A90u;
        goto label_234a90;
    }
    ctx->pc = 0x234A88u;
    {
        const bool branch_taken_0x234a88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A88u;
        // 0x234a8c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a88) {
            ctx->pc = 0x234B10u;
            goto label_234b10;
        }
    }
    ctx->pc = 0x234A90u;
label_234a90:
    // 0x234a90: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_234a94:
    if (ctx->pc == 0x234A94u) {
        ctx->pc = 0x234A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A90u;
        // 0x234a94: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A98u;
        goto label_234a98;
    }
    ctx->pc = 0x234A90u;
    {
        const bool branch_taken_0x234a90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x234A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A90u;
        // 0x234a94: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a90) {
            ctx->pc = 0x234B10u;
            goto label_234b10;
        }
    }
    ctx->pc = 0x234A98u;
label_234a98:
    // 0x234a98: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x234a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_234a9c:
    // 0x234a9c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x234a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_234aa0:
    // 0x234aa0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x234aa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_234aa4:
    // 0x234aa4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x234aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_234aa8:
    // 0x234aa8: 0x40f809  jalr        $v0
label_234aac:
    if (ctx->pc == 0x234AACu) {
        ctx->pc = 0x234AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AA8u;
        // 0x234aac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AB0u;
        goto label_234ab0;
    }
    ctx->pc = 0x234AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234AB0u);
        ctx->pc = 0x234AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AA8u;
        // 0x234aac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234AA8u, 0x234AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234AB0u;
label_234ab0:
    // 0x234ab0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_234ab4:
    if (ctx->pc == 0x234AB4u) {
        ctx->pc = 0x234AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AB0u;
        // 0x234ab4: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AB8u;
        goto label_234ab8;
    }
    ctx->pc = 0x234AB0u;
    {
        const bool branch_taken_0x234ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AB0u;
        // 0x234ab4: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ab0) {
            ctx->pc = 0x234B10u;
            goto label_234b10;
        }
    }
    ctx->pc = 0x234AB8u;
label_234ab8:
    // 0x234ab8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x234ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_234abc:
    // 0x234abc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x234abcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234ac0:
    // 0x234ac0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x234ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_234ac4:
    // 0x234ac4: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x234ac4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_234ac8:
    // 0x234ac8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x234ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_234acc:
    // 0x234acc: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x234accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_234ad0:
    // 0x234ad0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x234ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_234ad4:
    // 0x234ad4: 0x40f809  jalr        $v0
label_234ad8:
    if (ctx->pc == 0x234AD8u) {
        ctx->pc = 0x234AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AD4u;
        // 0x234ad8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234ADCu;
        goto label_234adc;
    }
    ctx->pc = 0x234AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234ADCu);
        ctx->pc = 0x234AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AD4u;
        // 0x234ad8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234AD4u, 0x234ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234ADCu;
label_234adc:
    // 0x234adc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x234adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_234ae0:
    // 0x234ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234ae4:
    // 0x234ae4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x234ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_234ae8:
    // 0x234ae8: 0x40f809  jalr        $v0
label_234aec:
    if (ctx->pc == 0x234AECu) {
        ctx->pc = 0x234AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AE8u;
        // 0x234aec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AF0u;
        goto label_234af0;
    }
    ctx->pc = 0x234AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234AF0u);
        ctx->pc = 0x234AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AE8u;
        // 0x234aec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234AE8u, 0x234AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234AF0u;
label_234af0:
    // 0x234af0: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x234af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_234af4:
    // 0x234af4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x234af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234af8:
    // 0x234af8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234afc:
    // 0x234afc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x234afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_234b00:
    // 0x234b00: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x234b00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_234b04:
    // 0x234b04: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x234b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_234b08:
    // 0x234b08: 0x60f809  jalr        $v1
label_234b0c:
    if (ctx->pc == 0x234B0Cu) {
        ctx->pc = 0x234B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B08u;
        // 0x234b0c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B10u;
        goto label_234b10;
    }
    ctx->pc = 0x234B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x234B10u);
        ctx->pc = 0x234B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B08u;
        // 0x234b0c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234B08u, 0x234B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234B10u;
label_234b10:
    // 0x234b10: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x234b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_234b14:
    // 0x234b14: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x234b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_234b18:
    // 0x234b18: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x234b18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_234b1c:
    // 0x234b1c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x234b1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234b20:
    // 0x234b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234b24:
    // 0x234b24: 0x3e00008  jr          $ra
label_234b28:
    if (ctx->pc == 0x234B28u) {
        ctx->pc = 0x234B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B24u;
        // 0x234b28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B2Cu;
        goto label_234b2c;
    }
    ctx->pc = 0x234B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B24u;
        // 0x234b28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234B2Cu;
label_234b2c:
    // 0x234b2c: 0x0  nop
    ctx->pc = 0x234b2cu;
    // NOP
    ctx->pc = 0x234b30u;
}
