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

// Function: sub_00399B20
// Address: 0x399b20 - 0x399bf0
void sub_00399B20_0x399b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399B20_0x399b20");
#endif

    switch (ctx->pc) {
        case 0x399b20u: goto label_399b20;
        case 0x399b24u: goto label_399b24;
        case 0x399b28u: goto label_399b28;
        case 0x399b2cu: goto label_399b2c;
        case 0x399b30u: goto label_399b30;
        case 0x399b34u: goto label_399b34;
        case 0x399b38u: goto label_399b38;
        case 0x399b3cu: goto label_399b3c;
        case 0x399b40u: goto label_399b40;
        case 0x399b44u: goto label_399b44;
        case 0x399b48u: goto label_399b48;
        case 0x399b4cu: goto label_399b4c;
        case 0x399b50u: goto label_399b50;
        case 0x399b54u: goto label_399b54;
        case 0x399b58u: goto label_399b58;
        case 0x399b5cu: goto label_399b5c;
        case 0x399b60u: goto label_399b60;
        case 0x399b64u: goto label_399b64;
        case 0x399b68u: goto label_399b68;
        case 0x399b6cu: goto label_399b6c;
        case 0x399b70u: goto label_399b70;
        case 0x399b74u: goto label_399b74;
        case 0x399b78u: goto label_399b78;
        case 0x399b7cu: goto label_399b7c;
        case 0x399b80u: goto label_399b80;
        case 0x399b84u: goto label_399b84;
        case 0x399b88u: goto label_399b88;
        case 0x399b8cu: goto label_399b8c;
        case 0x399b90u: goto label_399b90;
        case 0x399b94u: goto label_399b94;
        case 0x399b98u: goto label_399b98;
        case 0x399b9cu: goto label_399b9c;
        case 0x399ba0u: goto label_399ba0;
        case 0x399ba4u: goto label_399ba4;
        case 0x399ba8u: goto label_399ba8;
        case 0x399bacu: goto label_399bac;
        case 0x399bb0u: goto label_399bb0;
        case 0x399bb4u: goto label_399bb4;
        case 0x399bb8u: goto label_399bb8;
        case 0x399bbcu: goto label_399bbc;
        case 0x399bc0u: goto label_399bc0;
        case 0x399bc4u: goto label_399bc4;
        case 0x399bc8u: goto label_399bc8;
        case 0x399bccu: goto label_399bcc;
        case 0x399bd0u: goto label_399bd0;
        case 0x399bd4u: goto label_399bd4;
        case 0x399bd8u: goto label_399bd8;
        case 0x399bdcu: goto label_399bdc;
        case 0x399be0u: goto label_399be0;
        case 0x399be4u: goto label_399be4;
        case 0x399be8u: goto label_399be8;
        case 0x399becu: goto label_399bec;
        default: break;
    }

    ctx->pc = 0x399b20u;

label_399b20:
    // 0x399b20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x399b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_399b24:
    // 0x399b24: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x399b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_399b28:
    // 0x399b28: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x399b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_399b2c:
    // 0x399b2c: 0x3c13fffb  lui         $s3, 0xFFFB
    ctx->pc = 0x399b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65531 << 16));
label_399b30:
    // 0x399b30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x399b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_399b34:
    // 0x399b34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x399b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399b38:
    // 0x399b38: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x399b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_399b3c:
    // 0x399b3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x399b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399b40:
    // 0x399b40: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x399b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_399b44:
    // 0x399b44: 0x3c140004  lui         $s4, 0x4
    ctx->pc = 0x399b44u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4 << 16));
label_399b48:
    // 0x399b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_399b4c:
    // 0x399b4c: 0x10000016  b           . + 4 + (0x16 << 2)
label_399b50:
    if (ctx->pc == 0x399B50u) {
        ctx->pc = 0x399B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B4Cu;
        // 0x399b50: 0x3673ffff  ori         $s3, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x399B54u;
        goto label_399b54;
    }
    ctx->pc = 0x399B4Cu;
    {
        const bool branch_taken_0x399b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B4Cu;
        // 0x399b50: 0x3673ffff  ori         $s3, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b4c) {
            ctx->pc = 0x399BA8u;
            goto label_399ba8;
        }
    }
    ctx->pc = 0x399B54u;
label_399b54:
    // 0x399b54: 0x0  nop
    ctx->pc = 0x399b54u;
    // NOP
label_399b58:
    // 0x399b58: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x399b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_399b5c:
    // 0x399b5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x399b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_399b60:
    // 0x399b60: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x399b60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_399b64:
    // 0x399b64: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x399b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_399b68:
    // 0x399b68: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_399b6c:
    if (ctx->pc == 0x399B6Cu) {
        ctx->pc = 0x399B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B68u;
        // 0x399b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399B70u;
        goto label_399b70;
    }
    ctx->pc = 0x399B68u;
    {
        const bool branch_taken_0x399b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x399B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B68u;
        // 0x399b6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b68) {
            ctx->pc = 0x399BA8u;
            goto label_399ba8;
        }
    }
    ctx->pc = 0x399B70u;
label_399b70:
    // 0x399b70: 0xc0e6734  jal         func_399CD0
label_399b74:
    if (ctx->pc == 0x399B74u) {
        ctx->pc = 0x399B78u;
        goto label_399b78;
    }
    ctx->pc = 0x399B70u;
    SET_GPR_U32(ctx, 31, 0x399B78u);
    ctx->pc = 0x399CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399CD0u, 0x399B70u, 0x399B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B78u;
label_399b78:
    // 0x399b78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x399b78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399b7c:
    // 0x399b7c: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_399b80:
    if (ctx->pc == 0x399B80u) {
        ctx->pc = 0x399B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B7Cu;
        // 0x399b80: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399B84u;
        goto label_399b84;
    }
    ctx->pc = 0x399B7Cu;
    {
        const bool branch_taken_0x399b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x399b7c) {
            ctx->pc = 0x399B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399B7Cu;
            // 0x399b80: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399BACu;
            goto label_399bac;
        }
    }
    ctx->pc = 0x399B84u;
label_399b84:
    // 0x399b84: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x399b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_399b88:
    // 0x399b88: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x399b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_399b8c:
    // 0x399b8c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x399b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_399b90:
    // 0x399b90: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x399b90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_399b94:
    // 0x399b94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x399b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_399b98:
    // 0x399b98: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x399b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_399b9c:
    // 0x399b9c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x399b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_399ba0:
    // 0x399ba0: 0x40f809  jalr        $v0
label_399ba4:
    if (ctx->pc == 0x399BA4u) {
        ctx->pc = 0x399BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BA0u;
        // 0x399ba4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399BA8u;
        goto label_399ba8;
    }
    ctx->pc = 0x399BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399BA8u);
        ctx->pc = 0x399BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BA0u;
        // 0x399ba4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399BA0u, 0x399BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399BA8u;
label_399ba8:
    // 0x399ba8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x399ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_399bac:
    // 0x399bac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x399bacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_399bb0:
    // 0x399bb0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x399bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_399bb4:
    // 0x399bb4: 0x40f809  jalr        $v0
label_399bb8:
    if (ctx->pc == 0x399BB8u) {
        ctx->pc = 0x399BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BB4u;
        // 0x399bb8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399BBCu;
        goto label_399bbc;
    }
    ctx->pc = 0x399BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399BBCu);
        ctx->pc = 0x399BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BB4u;
        // 0x399bb8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399BB4u, 0x399BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399BBCu;
label_399bbc:
    // 0x399bbc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x399bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_399bc0:
    // 0x399bc0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x399bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_399bc4:
    // 0x399bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x399bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_399bc8:
    // 0x399bc8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_399bcc:
    if (ctx->pc == 0x399BCCu) {
        ctx->pc = 0x399BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BC8u;
        // 0x399bcc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399BD0u;
        goto label_399bd0;
    }
    ctx->pc = 0x399BC8u;
    {
        const bool branch_taken_0x399bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BC8u;
        // 0x399bcc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399bc8) {
            ctx->pc = 0x399B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399b58;
        }
    }
    ctx->pc = 0x399BD0u;
label_399bd0:
    // 0x399bd0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x399bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_399bd4:
    // 0x399bd4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x399bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_399bd8:
    // 0x399bd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x399bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_399bdc:
    // 0x399bdc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x399bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_399be0:
    // 0x399be0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x399be0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399be4:
    // 0x399be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_399be8:
    // 0x399be8: 0x3e00008  jr          $ra
label_399bec:
    if (ctx->pc == 0x399BECu) {
        ctx->pc = 0x399BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BE8u;
        // 0x399bec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399BF0u;
        goto label_fallthrough_0x399be8;
    }
    ctx->pc = 0x399BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399BE8u;
        // 0x399bec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x399be8:
    ctx->pc = 0x399BF0u;
}
