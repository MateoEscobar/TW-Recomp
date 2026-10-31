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

// Function: sub_002E7B30
// Address: 0x2e7b30 - 0x2e7c18
void sub_002E7B30_0x2e7b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7B30_0x2e7b30");
#endif

    switch (ctx->pc) {
        case 0x2e7b30u: goto label_2e7b30;
        case 0x2e7b34u: goto label_2e7b34;
        case 0x2e7b38u: goto label_2e7b38;
        case 0x2e7b3cu: goto label_2e7b3c;
        case 0x2e7b40u: goto label_2e7b40;
        case 0x2e7b44u: goto label_2e7b44;
        case 0x2e7b48u: goto label_2e7b48;
        case 0x2e7b4cu: goto label_2e7b4c;
        case 0x2e7b50u: goto label_2e7b50;
        case 0x2e7b54u: goto label_2e7b54;
        case 0x2e7b58u: goto label_2e7b58;
        case 0x2e7b5cu: goto label_2e7b5c;
        case 0x2e7b60u: goto label_2e7b60;
        case 0x2e7b64u: goto label_2e7b64;
        case 0x2e7b68u: goto label_2e7b68;
        case 0x2e7b6cu: goto label_2e7b6c;
        case 0x2e7b70u: goto label_2e7b70;
        case 0x2e7b74u: goto label_2e7b74;
        case 0x2e7b78u: goto label_2e7b78;
        case 0x2e7b7cu: goto label_2e7b7c;
        case 0x2e7b80u: goto label_2e7b80;
        case 0x2e7b84u: goto label_2e7b84;
        case 0x2e7b88u: goto label_2e7b88;
        case 0x2e7b8cu: goto label_2e7b8c;
        case 0x2e7b90u: goto label_2e7b90;
        case 0x2e7b94u: goto label_2e7b94;
        case 0x2e7b98u: goto label_2e7b98;
        case 0x2e7b9cu: goto label_2e7b9c;
        case 0x2e7ba0u: goto label_2e7ba0;
        case 0x2e7ba4u: goto label_2e7ba4;
        case 0x2e7ba8u: goto label_2e7ba8;
        case 0x2e7bacu: goto label_2e7bac;
        case 0x2e7bb0u: goto label_2e7bb0;
        case 0x2e7bb4u: goto label_2e7bb4;
        case 0x2e7bb8u: goto label_2e7bb8;
        case 0x2e7bbcu: goto label_2e7bbc;
        case 0x2e7bc0u: goto label_2e7bc0;
        case 0x2e7bc4u: goto label_2e7bc4;
        case 0x2e7bc8u: goto label_2e7bc8;
        case 0x2e7bccu: goto label_2e7bcc;
        case 0x2e7bd0u: goto label_2e7bd0;
        case 0x2e7bd4u: goto label_2e7bd4;
        case 0x2e7bd8u: goto label_2e7bd8;
        case 0x2e7bdcu: goto label_2e7bdc;
        case 0x2e7be0u: goto label_2e7be0;
        case 0x2e7be4u: goto label_2e7be4;
        case 0x2e7be8u: goto label_2e7be8;
        case 0x2e7becu: goto label_2e7bec;
        case 0x2e7bf0u: goto label_2e7bf0;
        case 0x2e7bf4u: goto label_2e7bf4;
        case 0x2e7bf8u: goto label_2e7bf8;
        case 0x2e7bfcu: goto label_2e7bfc;
        case 0x2e7c00u: goto label_2e7c00;
        case 0x2e7c04u: goto label_2e7c04;
        case 0x2e7c08u: goto label_2e7c08;
        case 0x2e7c0cu: goto label_2e7c0c;
        case 0x2e7c10u: goto label_2e7c10;
        case 0x2e7c14u: goto label_2e7c14;
        default: break;
    }

    ctx->pc = 0x2e7b30u;

label_2e7b30:
    // 0x2e7b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e7b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e7b34:
    // 0x2e7b34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e7b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2e7b38:
    // 0x2e7b38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e7b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e7b3c:
    // 0x2e7b3c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e7b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2e7b40:
    // 0x2e7b40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e7b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b44:
    // 0x2e7b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e7b48:
    // 0x2e7b48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e7b4c:
    // 0x2e7b4c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2e7b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7b50:
    // 0x2e7b50: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e7b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e7b54:
    // 0x2e7b54: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e7b54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e7b58:
    // 0x2e7b58: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e7b5c:
    // 0x2e7b5c: 0x40f809  jalr        $v0
label_2e7b60:
    if (ctx->pc == 0x2E7B60u) {
        ctx->pc = 0x2E7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B5Cu;
        // 0x2e7b60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B64u;
        goto label_2e7b64;
    }
    ctx->pc = 0x2E7B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E7B64u);
        ctx->pc = 0x2E7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B5Cu;
        // 0x2e7b60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7B5Cu, 0x2E7B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7B64u;
label_2e7b64:
    // 0x2e7b64: 0x9225001d  lbu         $a1, 0x1D($s1)
    ctx->pc = 0x2e7b64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
label_2e7b68:
    // 0x2e7b68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b6c:
    // 0x2e7b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b70:
    // 0x2e7b70: 0xc08d68a  jal         func_235A28
label_2e7b74:
    if (ctx->pc == 0x2E7B74u) {
        ctx->pc = 0x2E7B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B70u;
        // 0x2e7b74: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B78u;
        goto label_2e7b78;
    }
    ctx->pc = 0x2E7B70u;
    SET_GPR_U32(ctx, 31, 0x2E7B78u);
    ctx->pc = 0x2E7B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B70u;
    // 0x2e7b74: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A28u, 0x2E7B70u, 0x2E7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B78u;
label_2e7b78:
    // 0x2e7b78: 0x9225001e  lbu         $a1, 0x1E($s1)
    ctx->pc = 0x2e7b78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30)));
label_2e7b7c:
    // 0x2e7b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b80:
    // 0x2e7b80: 0xc08d466  jal         func_235198
label_2e7b84:
    if (ctx->pc == 0x2E7B84u) {
        ctx->pc = 0x2E7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B80u;
        // 0x2e7b84: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B88u;
        goto label_2e7b88;
    }
    ctx->pc = 0x2E7B80u;
    SET_GPR_U32(ctx, 31, 0x2E7B88u);
    ctx->pc = 0x2E7B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B80u;
    // 0x2e7b84: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235198u, 0x2E7B80u, 0x2E7B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B88u;
label_2e7b88:
    // 0x2e7b88: 0x9225001f  lbu         $a1, 0x1F($s1)
    ctx->pc = 0x2e7b88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
label_2e7b8c:
    // 0x2e7b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7b90:
    // 0x2e7b90: 0xc08d722  jal         func_235C88
label_2e7b94:
    if (ctx->pc == 0x2E7B94u) {
        ctx->pc = 0x2E7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7B90u;
        // 0x2e7b94: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7B98u;
        goto label_2e7b98;
    }
    ctx->pc = 0x2E7B90u;
    SET_GPR_U32(ctx, 31, 0x2E7B98u);
    ctx->pc = 0x2E7B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7B90u;
    // 0x2e7b94: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235C88u, 0x2E7B90u, 0x2E7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7B98u;
label_2e7b98:
    // 0x2e7b98: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2e7b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
label_2e7b9c:
    // 0x2e7b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e7b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e7ba0:
    // 0x2e7ba0: 0xc089998  jal         func_226660
label_2e7ba4:
    if (ctx->pc == 0x2E7BA4u) {
        ctx->pc = 0x2E7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BA0u;
        // 0x2e7ba4: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BA8u;
        goto label_2e7ba8;
    }
    ctx->pc = 0x2E7BA0u;
    SET_GPR_U32(ctx, 31, 0x2E7BA8u);
    ctx->pc = 0x2E7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7BA0u;
    // 0x2e7ba4: 0x34a56a40  ori         $a1, $a1, 0x6A40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E7BA0u, 0x2E7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BA8u;
label_2e7ba8:
    // 0x2e7ba8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_2e7bac:
    if (ctx->pc == 0x2E7BACu) {
        ctx->pc = 0x2E7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BA8u;
        // 0x2e7bac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BB0u;
        goto label_2e7bb0;
    }
    ctx->pc = 0x2E7BA8u;
    {
        const bool branch_taken_0x2e7ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7ba8) {
            ctx->pc = 0x2E7BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7BA8u;
            // 0x2e7bac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7C00u;
            goto label_2e7c00;
        }
    }
    ctx->pc = 0x2E7BB0u;
label_2e7bb0:
    // 0x2e7bb0: 0xc089f98  jal         func_227E60
label_2e7bb4:
    if (ctx->pc == 0x2E7BB4u) {
        ctx->pc = 0x2E7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BB0u;
        // 0x2e7bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BB8u;
        goto label_2e7bb8;
    }
    ctx->pc = 0x2E7BB0u;
    SET_GPR_U32(ctx, 31, 0x2E7BB8u);
    ctx->pc = 0x2E7BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7BB0u;
    // 0x2e7bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2E7BB0u, 0x2E7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BB8u;
label_2e7bb8:
    // 0x2e7bb8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2e7bbc:
    if (ctx->pc == 0x2E7BBCu) {
        ctx->pc = 0x2E7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BB8u;
        // 0x2e7bbc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BC0u;
        goto label_2e7bc0;
    }
    ctx->pc = 0x2E7BB8u;
    {
        const bool branch_taken_0x2e7bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BB8u;
        // 0x2e7bbc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7bb8) {
            ctx->pc = 0x2E7C00u;
            goto label_2e7c00;
        }
    }
    ctx->pc = 0x2E7BC0u;
label_2e7bc0:
    // 0x2e7bc0: 0xc088ef0  jal         func_223BC0
label_2e7bc4:
    if (ctx->pc == 0x2E7BC4u) {
        ctx->pc = 0x2E7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BC0u;
        // 0x2e7bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BC8u;
        goto label_2e7bc8;
    }
    ctx->pc = 0x2E7BC0u;
    SET_GPR_U32(ctx, 31, 0x2E7BC8u);
    ctx->pc = 0x2E7BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7BC0u;
    // 0x2e7bc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2E7BC0u, 0x2E7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BC8u;
label_2e7bc8:
    // 0x2e7bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7bcc:
    // 0x2e7bcc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2e7bd0:
    if (ctx->pc == 0x2E7BD0u) {
        ctx->pc = 0x2E7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BCCu;
        // 0x2e7bd0: 0xde4200e0  ld          $v0, 0xE0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BD4u;
        goto label_2e7bd4;
    }
    ctx->pc = 0x2E7BCCu;
    {
        const bool branch_taken_0x2e7bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e7bcc) {
            ctx->pc = 0x2E7BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7BCCu;
            // 0x2e7bd0: 0xde4200e0  ld          $v0, 0xE0($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7BE0u;
            goto label_2e7be0;
        }
    }
    ctx->pc = 0x2E7BD4u;
label_2e7bd4:
    // 0x2e7bd4: 0xc08be36  jal         func_22F8D8
label_2e7bd8:
    if (ctx->pc == 0x2E7BD8u) {
        ctx->pc = 0x2E7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BD4u;
        // 0x2e7bd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BDCu;
        goto label_2e7bdc;
    }
    ctx->pc = 0x2E7BD4u;
    SET_GPR_U32(ctx, 31, 0x2E7BDCu);
    ctx->pc = 0x2E7BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7BD4u;
    // 0x2e7bd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2E7BD4u, 0x2E7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BDCu;
label_2e7bdc:
    // 0x2e7bdc: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2e7bdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2e7be0:
    // 0x2e7be0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2e7be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_2e7be4:
    // 0x2e7be4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e7be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2e7be8:
    // 0x2e7be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e7be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e7bec:
    // 0x2e7bec: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x2e7becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_2e7bf0:
    // 0x2e7bf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e7bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e7bf4:
    // 0x2e7bf4: 0xc089974  jal         func_2265D0
label_2e7bf8:
    if (ctx->pc == 0x2E7BF8u) {
        ctx->pc = 0x2E7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7BF4u;
        // 0x2e7bf8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7BFCu;
        goto label_2e7bfc;
    }
    ctx->pc = 0x2E7BF4u;
    SET_GPR_U32(ctx, 31, 0x2E7BFCu);
    ctx->pc = 0x2E7BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7BF4u;
    // 0x2e7bf8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x2E7BF4u, 0x2E7BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BFCu;
label_2e7bfc:
    // 0x2e7bfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e7bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e7c00:
    // 0x2e7c00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e7c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e7c04:
    // 0x2e7c04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e7c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7c08:
    // 0x2e7c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e7c0c:
    // 0x2e7c0c: 0x3e00008  jr          $ra
label_2e7c10:
    if (ctx->pc == 0x2E7C10u) {
        ctx->pc = 0x2E7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C0Cu;
        // 0x2e7c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7C14u;
        goto label_2e7c14;
    }
    ctx->pc = 0x2E7C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7C0Cu;
        // 0x2e7c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7C14u;
label_2e7c14:
    // 0x2e7c14: 0x0  nop
    ctx->pc = 0x2e7c14u;
    // NOP
    ctx->pc = 0x2e7c18u;
}
