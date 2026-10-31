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

// Function: sub_00234B30
// Address: 0x234b30 - 0x234bf8
void sub_00234B30_0x234b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234B30_0x234b30");
#endif

    switch (ctx->pc) {
        case 0x234b30u: goto label_234b30;
        case 0x234b34u: goto label_234b34;
        case 0x234b38u: goto label_234b38;
        case 0x234b3cu: goto label_234b3c;
        case 0x234b40u: goto label_234b40;
        case 0x234b44u: goto label_234b44;
        case 0x234b48u: goto label_234b48;
        case 0x234b4cu: goto label_234b4c;
        case 0x234b50u: goto label_234b50;
        case 0x234b54u: goto label_234b54;
        case 0x234b58u: goto label_234b58;
        case 0x234b5cu: goto label_234b5c;
        case 0x234b60u: goto label_234b60;
        case 0x234b64u: goto label_234b64;
        case 0x234b68u: goto label_234b68;
        case 0x234b6cu: goto label_234b6c;
        case 0x234b70u: goto label_234b70;
        case 0x234b74u: goto label_234b74;
        case 0x234b78u: goto label_234b78;
        case 0x234b7cu: goto label_234b7c;
        case 0x234b80u: goto label_234b80;
        case 0x234b84u: goto label_234b84;
        case 0x234b88u: goto label_234b88;
        case 0x234b8cu: goto label_234b8c;
        case 0x234b90u: goto label_234b90;
        case 0x234b94u: goto label_234b94;
        case 0x234b98u: goto label_234b98;
        case 0x234b9cu: goto label_234b9c;
        case 0x234ba0u: goto label_234ba0;
        case 0x234ba4u: goto label_234ba4;
        case 0x234ba8u: goto label_234ba8;
        case 0x234bacu: goto label_234bac;
        case 0x234bb0u: goto label_234bb0;
        case 0x234bb4u: goto label_234bb4;
        case 0x234bb8u: goto label_234bb8;
        case 0x234bbcu: goto label_234bbc;
        case 0x234bc0u: goto label_234bc0;
        case 0x234bc4u: goto label_234bc4;
        case 0x234bc8u: goto label_234bc8;
        case 0x234bccu: goto label_234bcc;
        case 0x234bd0u: goto label_234bd0;
        case 0x234bd4u: goto label_234bd4;
        case 0x234bd8u: goto label_234bd8;
        case 0x234bdcu: goto label_234bdc;
        case 0x234be0u: goto label_234be0;
        case 0x234be4u: goto label_234be4;
        case 0x234be8u: goto label_234be8;
        case 0x234becu: goto label_234bec;
        case 0x234bf0u: goto label_234bf0;
        case 0x234bf4u: goto label_234bf4;
        default: break;
    }

    ctx->pc = 0x234b30u;

label_234b30:
    // 0x234b30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x234b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_234b34:
    // 0x234b34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x234b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_234b38:
    // 0x234b38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x234b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_234b3c:
    // 0x234b3c: 0x8c450244  lw          $a1, 0x244($v0)
    ctx->pc = 0x234b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
label_234b40:
    // 0x234b40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x234b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234b44:
    // 0x234b44: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x234b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_234b48:
    // 0x234b48: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x234b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_234b4c:
    // 0x234b4c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x234b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_234b50:
    // 0x234b50: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_234b54:
    if (ctx->pc == 0x234B54u) {
        ctx->pc = 0x234B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B50u;
        // 0x234b54: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B58u;
        goto label_234b58;
    }
    ctx->pc = 0x234B50u;
    {
        const bool branch_taken_0x234b50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B50u;
        // 0x234b54: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b50) {
            ctx->pc = 0x234BD8u;
            goto label_234bd8;
        }
    }
    ctx->pc = 0x234B58u;
label_234b58:
    // 0x234b58: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_234b5c:
    if (ctx->pc == 0x234B5Cu) {
        ctx->pc = 0x234B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B58u;
        // 0x234b5c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B60u;
        goto label_234b60;
    }
    ctx->pc = 0x234B58u;
    {
        const bool branch_taken_0x234b58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B58u;
        // 0x234b5c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b58) {
            ctx->pc = 0x234BD8u;
            goto label_234bd8;
        }
    }
    ctx->pc = 0x234B60u;
label_234b60:
    // 0x234b60: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x234b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_234b64:
    // 0x234b64: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x234b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_234b68:
    // 0x234b68: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x234b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_234b6c:
    // 0x234b6c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x234b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_234b70:
    // 0x234b70: 0x40f809  jalr        $v0
label_234b74:
    if (ctx->pc == 0x234B74u) {
        ctx->pc = 0x234B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B70u;
        // 0x234b74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B78u;
        goto label_234b78;
    }
    ctx->pc = 0x234B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234B78u);
        ctx->pc = 0x234B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B70u;
        // 0x234b74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234B70u, 0x234B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234B78u;
label_234b78:
    // 0x234b78: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_234b7c:
    if (ctx->pc == 0x234B7Cu) {
        ctx->pc = 0x234B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B78u;
        // 0x234b7c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B80u;
        goto label_234b80;
    }
    ctx->pc = 0x234B78u;
    {
        const bool branch_taken_0x234b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B78u;
        // 0x234b7c: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b78) {
            ctx->pc = 0x234BD8u;
            goto label_234bd8;
        }
    }
    ctx->pc = 0x234B80u;
label_234b80:
    // 0x234b80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x234b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_234b84:
    // 0x234b84: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x234b84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234b88:
    // 0x234b88: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x234b88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_234b8c:
    // 0x234b8c: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x234b8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_234b90:
    // 0x234b90: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x234b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_234b94:
    // 0x234b94: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x234b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_234b98:
    // 0x234b98: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x234b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_234b9c:
    // 0x234b9c: 0x40f809  jalr        $v0
label_234ba0:
    if (ctx->pc == 0x234BA0u) {
        ctx->pc = 0x234BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B9Cu;
        // 0x234ba0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BA4u;
        goto label_234ba4;
    }
    ctx->pc = 0x234B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234BA4u);
        ctx->pc = 0x234BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B9Cu;
        // 0x234ba0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234B9Cu, 0x234BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234BA4u;
label_234ba4:
    // 0x234ba4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x234ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_234ba8:
    // 0x234ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234bac:
    // 0x234bac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x234bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_234bb0:
    // 0x234bb0: 0x40f809  jalr        $v0
label_234bb4:
    if (ctx->pc == 0x234BB4u) {
        ctx->pc = 0x234BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BB0u;
        // 0x234bb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BB8u;
        goto label_234bb8;
    }
    ctx->pc = 0x234BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234BB8u);
        ctx->pc = 0x234BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BB0u;
        // 0x234bb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234BB0u, 0x234BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234BB8u;
label_234bb8:
    // 0x234bb8: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x234bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_234bbc:
    // 0x234bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x234bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234bc0:
    // 0x234bc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x234bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234bc4:
    // 0x234bc4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x234bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_234bc8:
    // 0x234bc8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x234bc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_234bcc:
    // 0x234bcc: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x234bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_234bd0:
    // 0x234bd0: 0x60f809  jalr        $v1
label_234bd4:
    if (ctx->pc == 0x234BD4u) {
        ctx->pc = 0x234BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BD0u;
        // 0x234bd4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BD8u;
        goto label_234bd8;
    }
    ctx->pc = 0x234BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x234BD8u);
        ctx->pc = 0x234BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BD0u;
        // 0x234bd4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234BD0u, 0x234BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234BD8u;
label_234bd8:
    // 0x234bd8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x234bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_234bdc:
    // 0x234bdc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x234bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_234be0:
    // 0x234be0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x234be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_234be4:
    // 0x234be4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x234be4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234be8:
    // 0x234be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234bec:
    // 0x234bec: 0x3e00008  jr          $ra
label_234bf0:
    if (ctx->pc == 0x234BF0u) {
        ctx->pc = 0x234BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BECu;
        // 0x234bf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BF4u;
        goto label_234bf4;
    }
    ctx->pc = 0x234BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BECu;
        // 0x234bf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234BF4u;
label_234bf4:
    // 0x234bf4: 0x0  nop
    ctx->pc = 0x234bf4u;
    // NOP
    ctx->pc = 0x234bf8u;
}
