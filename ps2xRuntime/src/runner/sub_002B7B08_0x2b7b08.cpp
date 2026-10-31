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

// Function: sub_002B7B08
// Address: 0x2b7b08 - 0x2b7bc0
void sub_002B7B08_0x2b7b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7B08_0x2b7b08");
#endif

    switch (ctx->pc) {
        case 0x2b7b08u: goto label_2b7b08;
        case 0x2b7b0cu: goto label_2b7b0c;
        case 0x2b7b10u: goto label_2b7b10;
        case 0x2b7b14u: goto label_2b7b14;
        case 0x2b7b18u: goto label_2b7b18;
        case 0x2b7b1cu: goto label_2b7b1c;
        case 0x2b7b20u: goto label_2b7b20;
        case 0x2b7b24u: goto label_2b7b24;
        case 0x2b7b28u: goto label_2b7b28;
        case 0x2b7b2cu: goto label_2b7b2c;
        case 0x2b7b30u: goto label_2b7b30;
        case 0x2b7b34u: goto label_2b7b34;
        case 0x2b7b38u: goto label_2b7b38;
        case 0x2b7b3cu: goto label_2b7b3c;
        case 0x2b7b40u: goto label_2b7b40;
        case 0x2b7b44u: goto label_2b7b44;
        case 0x2b7b48u: goto label_2b7b48;
        case 0x2b7b4cu: goto label_2b7b4c;
        case 0x2b7b50u: goto label_2b7b50;
        case 0x2b7b54u: goto label_2b7b54;
        case 0x2b7b58u: goto label_2b7b58;
        case 0x2b7b5cu: goto label_2b7b5c;
        case 0x2b7b60u: goto label_2b7b60;
        case 0x2b7b64u: goto label_2b7b64;
        case 0x2b7b68u: goto label_2b7b68;
        case 0x2b7b6cu: goto label_2b7b6c;
        case 0x2b7b70u: goto label_2b7b70;
        case 0x2b7b74u: goto label_2b7b74;
        case 0x2b7b78u: goto label_2b7b78;
        case 0x2b7b7cu: goto label_2b7b7c;
        case 0x2b7b80u: goto label_2b7b80;
        case 0x2b7b84u: goto label_2b7b84;
        case 0x2b7b88u: goto label_2b7b88;
        case 0x2b7b8cu: goto label_2b7b8c;
        case 0x2b7b90u: goto label_2b7b90;
        case 0x2b7b94u: goto label_2b7b94;
        case 0x2b7b98u: goto label_2b7b98;
        case 0x2b7b9cu: goto label_2b7b9c;
        case 0x2b7ba0u: goto label_2b7ba0;
        case 0x2b7ba4u: goto label_2b7ba4;
        case 0x2b7ba8u: goto label_2b7ba8;
        case 0x2b7bacu: goto label_2b7bac;
        case 0x2b7bb0u: goto label_2b7bb0;
        case 0x2b7bb4u: goto label_2b7bb4;
        case 0x2b7bb8u: goto label_2b7bb8;
        case 0x2b7bbcu: goto label_2b7bbc;
        default: break;
    }

    ctx->pc = 0x2b7b08u;

label_2b7b08:
    // 0x2b7b08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b7b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2b7b0c:
    // 0x2b7b0c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b7b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2b7b10:
    // 0x2b7b10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b7b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2b7b14:
    // 0x2b7b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b18:
    // 0x2b7b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b7b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b7b1c:
    // 0x2b7b1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b7b20:
    // 0x2b7b20: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2b7b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2b7b24:
    // 0x2b7b24: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
label_2b7b28:
    if (ctx->pc == 0x2B7B28u) {
        ctx->pc = 0x2B7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B24u;
        // 0x2b7b28: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B2Cu;
        goto label_2b7b2c;
    }
    ctx->pc = 0x2B7B24u;
    {
        const bool branch_taken_0x2b7b24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B24u;
        // 0x2b7b28: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b24) {
            ctx->pc = 0x2B7BA8u;
            goto label_2b7ba8;
        }
    }
    ctx->pc = 0x2B7B2Cu;
label_2b7b2c:
    // 0x2b7b2c: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x2b7b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2b7b30:
    // 0x2b7b30: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b7b34:
    // 0x2b7b34: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2b7b34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2b7b38:
    // 0x2b7b38: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2b7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2b7b3c:
    // 0x2b7b3c: 0x40f809  jalr        $v0
label_2b7b40:
    if (ctx->pc == 0x2B7B40u) {
        ctx->pc = 0x2B7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B3Cu;
        // 0x2b7b40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B44u;
        goto label_2b7b44;
    }
    ctx->pc = 0x2B7B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B7B44u);
        ctx->pc = 0x2B7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B3Cu;
        // 0x2b7b40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7B3Cu, 0x2B7B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B7B44u;
label_2b7b44:
    // 0x2b7b44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b7b48:
    // 0x2b7b48: 0x8e502b04  lw          $s0, 0x2B04($s2)
    ctx->pc = 0x2b7b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2b7b4c:
    // 0x2b7b4c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2b7b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b7b50:
    // 0x2b7b50: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2b7b50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b7b54:
    // 0x2b7b54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b7b58:
    // 0x2b7b58: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x2b7b58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_2b7b5c:
    // 0x2b7b5c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b7b5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b7b60:
    // 0x2b7b60: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x2b7b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2b7b64:
    // 0x2b7b64: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b7b68:
    // 0x2b7b68: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2b7b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2b7b6c:
    // 0x2b7b6c: 0x40f809  jalr        $v0
label_2b7b70:
    if (ctx->pc == 0x2B7B70u) {
        ctx->pc = 0x2B7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B6Cu;
        // 0x2b7b70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B74u;
        goto label_2b7b74;
    }
    ctx->pc = 0x2B7B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B7B74u);
        ctx->pc = 0x2B7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B6Cu;
        // 0x2b7b70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7B6Cu, 0x2B7B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B7B74u;
label_2b7b74:
    // 0x2b7b74: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b7b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2b7b78:
    // 0x2b7b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b7c:
    // 0x2b7b7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b7b80:
    // 0x2b7b80: 0x40f809  jalr        $v0
label_2b7b84:
    if (ctx->pc == 0x2B7B84u) {
        ctx->pc = 0x2B7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B80u;
        // 0x2b7b84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7B88u;
        goto label_2b7b88;
    }
    ctx->pc = 0x2B7B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B7B88u);
        ctx->pc = 0x2B7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7B80u;
        // 0x2b7b84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7B80u, 0x2B7B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B7B88u;
label_2b7b88:
    // 0x2b7b88: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x2b7b88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2b7b8c:
    // 0x2b7b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b7b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7b90:
    // 0x2b7b90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b7b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b94:
    // 0x2b7b94: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2b7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2b7b98:
    // 0x2b7b98: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2b7b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2b7b9c:
    // 0x2b7b9c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2b7b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2b7ba0:
    // 0x2b7ba0: 0x60f809  jalr        $v1
label_2b7ba4:
    if (ctx->pc == 0x2B7BA4u) {
        ctx->pc = 0x2B7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BA0u;
        // 0x2b7ba4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7BA8u;
        goto label_2b7ba8;
    }
    ctx->pc = 0x2B7BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B7BA8u);
        ctx->pc = 0x2B7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BA0u;
        // 0x2b7ba4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7BA0u, 0x2B7BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B7BA8u;
label_2b7ba8:
    // 0x2b7ba8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b7ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b7bac:
    // 0x2b7bac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b7bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b7bb0:
    // 0x2b7bb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b7bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b7bb4:
    // 0x2b7bb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b7bb8:
    // 0x2b7bb8: 0x3e00008  jr          $ra
label_2b7bbc:
    if (ctx->pc == 0x2B7BBCu) {
        ctx->pc = 0x2B7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BB8u;
        // 0x2b7bbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7BC0u;
        goto label_fallthrough_0x2b7bb8;
    }
    ctx->pc = 0x2B7BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7BB8u;
        // 0x2b7bbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b7bb8:
    ctx->pc = 0x2B7BC0u;
}
