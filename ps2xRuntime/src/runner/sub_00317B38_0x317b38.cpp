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

// Function: sub_00317B38
// Address: 0x317b38 - 0x317c24
void sub_00317B38_0x317b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317B38_0x317b38");
#endif

    switch (ctx->pc) {
        case 0x317b38u: goto label_317b38;
        case 0x317b3cu: goto label_317b3c;
        case 0x317b40u: goto label_317b40;
        case 0x317b44u: goto label_317b44;
        case 0x317b48u: goto label_317b48;
        case 0x317b4cu: goto label_317b4c;
        case 0x317b50u: goto label_317b50;
        case 0x317b54u: goto label_317b54;
        case 0x317b58u: goto label_317b58;
        case 0x317b5cu: goto label_317b5c;
        case 0x317b60u: goto label_317b60;
        case 0x317b64u: goto label_317b64;
        case 0x317b68u: goto label_317b68;
        case 0x317b6cu: goto label_317b6c;
        case 0x317b70u: goto label_317b70;
        case 0x317b74u: goto label_317b74;
        case 0x317b78u: goto label_317b78;
        case 0x317b7cu: goto label_317b7c;
        case 0x317b80u: goto label_317b80;
        case 0x317b84u: goto label_317b84;
        case 0x317b88u: goto label_317b88;
        case 0x317b8cu: goto label_317b8c;
        case 0x317b90u: goto label_317b90;
        case 0x317b94u: goto label_317b94;
        case 0x317b98u: goto label_317b98;
        case 0x317b9cu: goto label_317b9c;
        case 0x317ba0u: goto label_317ba0;
        case 0x317ba4u: goto label_317ba4;
        case 0x317ba8u: goto label_317ba8;
        case 0x317bacu: goto label_317bac;
        case 0x317bb0u: goto label_317bb0;
        case 0x317bb4u: goto label_317bb4;
        case 0x317bb8u: goto label_317bb8;
        case 0x317bbcu: goto label_317bbc;
        case 0x317bc0u: goto label_317bc0;
        case 0x317bc4u: goto label_317bc4;
        case 0x317bc8u: goto label_317bc8;
        case 0x317bccu: goto label_317bcc;
        case 0x317bd0u: goto label_317bd0;
        case 0x317bd4u: goto label_317bd4;
        case 0x317bd8u: goto label_317bd8;
        case 0x317bdcu: goto label_317bdc;
        case 0x317be0u: goto label_317be0;
        case 0x317be4u: goto label_317be4;
        case 0x317be8u: goto label_317be8;
        case 0x317becu: goto label_317bec;
        case 0x317bf0u: goto label_317bf0;
        case 0x317bf4u: goto label_317bf4;
        case 0x317bf8u: goto label_317bf8;
        case 0x317bfcu: goto label_317bfc;
        case 0x317c00u: goto label_317c00;
        case 0x317c04u: goto label_317c04;
        case 0x317c08u: goto label_317c08;
        case 0x317c0cu: goto label_317c0c;
        case 0x317c10u: goto label_317c10;
        case 0x317c14u: goto label_317c14;
        case 0x317c18u: goto label_317c18;
        case 0x317c1cu: goto label_317c1c;
        case 0x317c20u: goto label_317c20;
        default: break;
    }

    ctx->pc = 0x317b38u;

label_317b38:
    // 0x317b38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x317b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_317b3c:
    // 0x317b3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x317b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_317b40:
    // 0x317b40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x317b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_317b44:
    // 0x317b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x317b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_317b48:
    // 0x317b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_317b4c:
    // 0x317b4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x317b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_317b50:
    // 0x317b50: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x317b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_317b54:
    // 0x317b54: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x317b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_317b58:
    // 0x317b58: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x317b58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_317b5c:
    // 0x317b5c: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_317b60:
    if (ctx->pc == 0x317B60u) {
        ctx->pc = 0x317B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B5Cu;
        // 0x317b60: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317B64u;
        goto label_317b64;
    }
    ctx->pc = 0x317B5Cu;
    {
        const bool branch_taken_0x317b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B5Cu;
        // 0x317b60: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b5c) {
            ctx->pc = 0x317C24u;
            return;
        }
    }
    ctx->pc = 0x317B64u;
label_317b64:
    // 0x317b64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x317b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_317b68:
    // 0x317b68: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x317b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
label_317b6c:
    // 0x317b6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x317b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317b70:
    // 0x317b70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x317b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_317b74:
    // 0x317b74: 0x800008  jr          $a0
label_317b78:
    if (ctx->pc == 0x317B78u) {
        ctx->pc = 0x317B7Cu;
        goto label_317b7c;
    }
    ctx->pc = 0x317B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x317B7Cu: goto label_317b7c;
            case 0x317B88u: goto label_317b88;
            case 0x317B94u: goto label_317b94;
            case 0x317BA0u: goto label_317ba0;
            case 0x317BB0u: goto label_317bb0;
            case 0x317BB8u: goto label_317bb8;
            case 0x317C0Cu: goto label_317c0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317B74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x317B7Cu;
label_317b7c:
    // 0x317b7c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x317b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_317b80:
    // 0x317b80: 0x1000001c  b           . + 4 + (0x1C << 2)
label_317b84:
    if (ctx->pc == 0x317B84u) {
        ctx->pc = 0x317B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B80u;
        // 0x317b84: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317B88u;
        goto label_317b88;
    }
    ctx->pc = 0x317B80u;
    {
        const bool branch_taken_0x317b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B80u;
        // 0x317b84: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b80) {
            ctx->pc = 0x317BF4u;
            goto label_317bf4;
        }
    }
    ctx->pc = 0x317B88u;
label_317b88:
    // 0x317b88: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x317b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_317b8c:
    // 0x317b8c: 0x10000019  b           . + 4 + (0x19 << 2)
label_317b90:
    if (ctx->pc == 0x317B90u) {
        ctx->pc = 0x317B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B8Cu;
        // 0x317b90: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317B94u;
        goto label_317b94;
    }
    ctx->pc = 0x317B8Cu;
    {
        const bool branch_taken_0x317b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B8Cu;
        // 0x317b90: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b8c) {
            ctx->pc = 0x317BF4u;
            goto label_317bf4;
        }
    }
    ctx->pc = 0x317B94u;
label_317b94:
    // 0x317b94: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x317b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_317b98:
    // 0x317b98: 0x10000016  b           . + 4 + (0x16 << 2)
label_317b9c:
    if (ctx->pc == 0x317B9Cu) {
        ctx->pc = 0x317B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B98u;
        // 0x317b9c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BA0u;
        goto label_317ba0;
    }
    ctx->pc = 0x317B98u;
    {
        const bool branch_taken_0x317b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B98u;
        // 0x317b9c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b98) {
            ctx->pc = 0x317BF4u;
            goto label_317bf4;
        }
    }
    ctx->pc = 0x317BA0u;
label_317ba0:
    // 0x317ba0: 0xc0c5d3a  jal         func_3174E8
label_317ba4:
    if (ctx->pc == 0x317BA4u) {
        ctx->pc = 0x317BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BA0u;
        // 0x317ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BA8u;
        goto label_317ba8;
    }
    ctx->pc = 0x317BA0u;
    SET_GPR_U32(ctx, 31, 0x317BA8u);
    ctx->pc = 0x317BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317BA0u;
    // 0x317ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3174E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3174E8u, 0x317BA0u, 0x317BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317BA8u;
label_317ba8:
    // 0x317ba8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_317bac:
    if (ctx->pc == 0x317BACu) {
        ctx->pc = 0x317BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BA8u;
        // 0x317bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BB0u;
        goto label_317bb0;
    }
    ctx->pc = 0x317BA8u;
    {
        const bool branch_taken_0x317ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BA8u;
        // 0x317bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ba8) {
            ctx->pc = 0x317C28u;
            return;
        }
    }
    ctx->pc = 0x317BB0u;
label_317bb0:
    // 0x317bb0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_317bb4:
    if (ctx->pc == 0x317BB4u) {
        ctx->pc = 0x317BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BB0u;
        // 0x317bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BB8u;
        goto label_317bb8;
    }
    ctx->pc = 0x317BB0u;
    {
        const bool branch_taken_0x317bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BB0u;
        // 0x317bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bb0) {
            ctx->pc = 0x317C28u;
            return;
        }
    }
    ctx->pc = 0x317BB8u;
label_317bb8:
    // 0x317bb8: 0xc08a61a  jal         func_229868
label_317bbc:
    if (ctx->pc == 0x317BBCu) {
        ctx->pc = 0x317BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BB8u;
        // 0x317bbc: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BC0u;
        goto label_317bc0;
    }
    ctx->pc = 0x317BB8u;
    SET_GPR_U32(ctx, 31, 0x317BC0u);
    ctx->pc = 0x317BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317BB8u;
    // 0x317bbc: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x317BB8u, 0x317BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317BC0u;
label_317bc0:
    // 0x317bc0: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_317bc4:
    if (ctx->pc == 0x317BC4u) {
        ctx->pc = 0x317BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BC0u;
        // 0x317bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BC8u;
        goto label_317bc8;
    }
    ctx->pc = 0x317BC0u;
    {
        const bool branch_taken_0x317bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317bc0) {
            ctx->pc = 0x317BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317BC0u;
            // 0x317bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317C28u;
            return;
        }
    }
    ctx->pc = 0x317BC8u;
label_317bc8:
    // 0x317bc8: 0xc087502  jal         func_21D408
label_317bcc:
    if (ctx->pc == 0x317BCCu) {
        ctx->pc = 0x317BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BC8u;
        // 0x317bcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BD0u;
        goto label_317bd0;
    }
    ctx->pc = 0x317BC8u;
    SET_GPR_U32(ctx, 31, 0x317BD0u);
    ctx->pc = 0x317BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317BC8u;
    // 0x317bcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x317BC8u, 0x317BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317BD0u;
label_317bd0:
    // 0x317bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317bd4:
    // 0x317bd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x317bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_317bd8:
    // 0x317bd8: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x317bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_317bdc:
    // 0x317bdc: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_317be0:
    if (ctx->pc == 0x317BE0u) {
        ctx->pc = 0x317BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BDCu;
        // 0x317be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BE4u;
        goto label_317be4;
    }
    ctx->pc = 0x317BDCu;
    {
        const bool branch_taken_0x317bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x317BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BDCu;
        // 0x317be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317bdc) {
            ctx->pc = 0x317C28u;
            return;
        }
    }
    ctx->pc = 0x317BE4u;
label_317be4:
    // 0x317be4: 0xc0a3032  jal         func_28C0C8
label_317be8:
    if (ctx->pc == 0x317BE8u) {
        ctx->pc = 0x317BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BE4u;
        // 0x317be8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317BECu;
        goto label_317bec;
    }
    ctx->pc = 0x317BE4u;
    SET_GPR_U32(ctx, 31, 0x317BECu);
    ctx->pc = 0x317BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317BE4u;
    // 0x317be8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x317BE4u, 0x317BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317BECu;
label_317bec:
    // 0x317bec: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x317becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_317bf0:
    // 0x317bf0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x317bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_317bf4:
    // 0x317bf4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x317bf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_317bf8:
    // 0x317bf8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x317bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_317bfc:
    // 0x317bfc: 0x60f809  jalr        $v1
label_317c00:
    if (ctx->pc == 0x317C00u) {
        ctx->pc = 0x317C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BFCu;
        // 0x317c00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C04u;
        goto label_317c04;
    }
    ctx->pc = 0x317BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x317C04u);
        ctx->pc = 0x317C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317BFCu;
        // 0x317c00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317BFCu, 0x317C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317C04u;
label_317c04:
    // 0x317c04: 0x10000008  b           . + 4 + (0x8 << 2)
label_317c08:
    if (ctx->pc == 0x317C08u) {
        ctx->pc = 0x317C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C04u;
        // 0x317c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C0Cu;
        goto label_317c0c;
    }
    ctx->pc = 0x317C04u;
    {
        const bool branch_taken_0x317c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C04u;
        // 0x317c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c04) {
            ctx->pc = 0x317C28u;
            return;
        }
    }
    ctx->pc = 0x317C0Cu;
label_317c0c:
    // 0x317c0c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x317c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_317c10:
    // 0x317c10: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x317c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_317c14:
    // 0x317c14: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x317c14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_317c18:
    // 0x317c18: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x317c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_317c1c:
    // 0x317c1c: 0x60f809  jalr        $v1
label_317c20:
    if (ctx->pc == 0x317C20u) {
        ctx->pc = 0x317C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C1Cu;
        // 0x317c20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317C24u;
        goto label_fallthrough_0x317c1c;
    }
    ctx->pc = 0x317C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x317C24u);
        ctx->pc = 0x317C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C1Cu;
        // 0x317c20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317C1Cu, 0x317C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x317c1c:
    ctx->pc = 0x317C24u;
}
