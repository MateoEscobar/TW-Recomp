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

// Function: sub_00209B20
// Address: 0x209b20 - 0x209bc0
void sub_00209B20_0x209b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209B20_0x209b20");
#endif

    switch (ctx->pc) {
        case 0x209b20u: goto label_209b20;
        case 0x209b24u: goto label_209b24;
        case 0x209b28u: goto label_209b28;
        case 0x209b2cu: goto label_209b2c;
        case 0x209b30u: goto label_209b30;
        case 0x209b34u: goto label_209b34;
        case 0x209b38u: goto label_209b38;
        case 0x209b3cu: goto label_209b3c;
        case 0x209b40u: goto label_209b40;
        case 0x209b44u: goto label_209b44;
        case 0x209b48u: goto label_209b48;
        case 0x209b4cu: goto label_209b4c;
        case 0x209b50u: goto label_209b50;
        case 0x209b54u: goto label_209b54;
        case 0x209b58u: goto label_209b58;
        case 0x209b5cu: goto label_209b5c;
        case 0x209b60u: goto label_209b60;
        case 0x209b64u: goto label_209b64;
        case 0x209b68u: goto label_209b68;
        case 0x209b6cu: goto label_209b6c;
        case 0x209b70u: goto label_209b70;
        case 0x209b74u: goto label_209b74;
        case 0x209b78u: goto label_209b78;
        case 0x209b7cu: goto label_209b7c;
        case 0x209b80u: goto label_209b80;
        case 0x209b84u: goto label_209b84;
        case 0x209b88u: goto label_209b88;
        case 0x209b8cu: goto label_209b8c;
        case 0x209b90u: goto label_209b90;
        case 0x209b94u: goto label_209b94;
        case 0x209b98u: goto label_209b98;
        case 0x209b9cu: goto label_209b9c;
        case 0x209ba0u: goto label_209ba0;
        case 0x209ba4u: goto label_209ba4;
        case 0x209ba8u: goto label_209ba8;
        case 0x209bacu: goto label_209bac;
        case 0x209bb0u: goto label_209bb0;
        case 0x209bb4u: goto label_209bb4;
        case 0x209bb8u: goto label_209bb8;
        case 0x209bbcu: goto label_209bbc;
        default: break;
    }

    ctx->pc = 0x209b20u;

label_209b20:
    // 0x209b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_209b24:
    // 0x209b24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x209b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_209b28:
    // 0x209b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_209b2c:
    // 0x209b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209b30:
    // 0x209b30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x209b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209b34:
    // 0x209b34: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x209b34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_209b38:
    // 0x209b38: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x209b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_209b3c:
    // 0x209b3c: 0x40f809  jalr        $v0
label_209b40:
    if (ctx->pc == 0x209B40u) {
        ctx->pc = 0x209B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B3Cu;
        // 0x209b40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B44u;
        goto label_209b44;
    }
    ctx->pc = 0x209B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209B44u);
        ctx->pc = 0x209B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B3Cu;
        // 0x209b40: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B3Cu, 0x209B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209B44u;
label_209b44:
    // 0x209b44: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_209b48:
    if (ctx->pc == 0x209B48u) {
        ctx->pc = 0x209B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B44u;
        // 0x209b48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B4Cu;
        goto label_209b4c;
    }
    ctx->pc = 0x209B44u;
    {
        const bool branch_taken_0x209b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209b44) {
            ctx->pc = 0x209B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209B44u;
            // 0x209b48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209BB4u;
            goto label_209bb4;
        }
    }
    ctx->pc = 0x209B4Cu;
label_209b4c:
    // 0x209b4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x209b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209b50:
    // 0x209b50: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x209b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_209b54:
    // 0x209b54: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x209b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_209b58:
    // 0x209b58: 0x40f809  jalr        $v0
label_209b5c:
    if (ctx->pc == 0x209B5Cu) {
        ctx->pc = 0x209B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B58u;
        // 0x209b5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B60u;
        goto label_209b60;
    }
    ctx->pc = 0x209B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209B60u);
        ctx->pc = 0x209B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B58u;
        // 0x209b5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B58u, 0x209B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209B60u;
label_209b60:
    // 0x209b60: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_209b64:
    if (ctx->pc == 0x209B64u) {
        ctx->pc = 0x209B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B60u;
        // 0x209b64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B68u;
        goto label_209b68;
    }
    ctx->pc = 0x209B60u;
    {
        const bool branch_taken_0x209b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209b60) {
            ctx->pc = 0x209B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209B60u;
            // 0x209b64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209BB4u;
            goto label_209bb4;
        }
    }
    ctx->pc = 0x209B68u;
label_209b68:
    // 0x209b68: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x209b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_209b6c:
    // 0x209b6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209b70:
    // 0x209b70: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x209b70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_209b74:
    // 0x209b74: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x209b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_209b78:
    // 0x209b78: 0x60f809  jalr        $v1
label_209b7c:
    if (ctx->pc == 0x209B7Cu) {
        ctx->pc = 0x209B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B78u;
        // 0x209b7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B80u;
        goto label_209b80;
    }
    ctx->pc = 0x209B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209B80u);
        ctx->pc = 0x209B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B78u;
        // 0x209b7c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B78u, 0x209B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209B80u;
label_209b80:
    // 0x209b80: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x209b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_209b84:
    // 0x209b84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209b88:
    // 0x209b88: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x209b88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_209b8c:
    // 0x209b8c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x209b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_209b90:
    // 0x209b90: 0x60f809  jalr        $v1
label_209b94:
    if (ctx->pc == 0x209B94u) {
        ctx->pc = 0x209B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B90u;
        // 0x209b94: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B98u;
        goto label_209b98;
    }
    ctx->pc = 0x209B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209B98u);
        ctx->pc = 0x209B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B90u;
        // 0x209b94: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B90u, 0x209B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209B98u;
label_209b98:
    // 0x209b98: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x209b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_209b9c:
    // 0x209b9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209ba0:
    // 0x209ba0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x209ba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_209ba4:
    // 0x209ba4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x209ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_209ba8:
    // 0x209ba8: 0x60f809  jalr        $v1
label_209bac:
    if (ctx->pc == 0x209BACu) {
        ctx->pc = 0x209BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BA8u;
        // 0x209bac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BB0u;
        goto label_209bb0;
    }
    ctx->pc = 0x209BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209BB0u);
        ctx->pc = 0x209BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BA8u;
        // 0x209bac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209BA8u, 0x209BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209BB0u;
label_209bb0:
    // 0x209bb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x209bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_209bb4:
    // 0x209bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209bb8:
    // 0x209bb8: 0x3e00008  jr          $ra
label_209bbc:
    if (ctx->pc == 0x209BBCu) {
        ctx->pc = 0x209BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BB8u;
        // 0x209bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BC0u;
        goto label_fallthrough_0x209bb8;
    }
    ctx->pc = 0x209BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BB8u;
        // 0x209bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x209bb8:
    ctx->pc = 0x209BC0u;
}
