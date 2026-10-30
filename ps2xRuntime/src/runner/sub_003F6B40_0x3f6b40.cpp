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

// Function: sub_003F6B40
// Address: 0x3f6b40 - 0x3f6bf0
void sub_003F6B40_0x3f6b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6B40_0x3f6b40");
#endif

    switch (ctx->pc) {
        case 0x3f6b40u: goto label_3f6b40;
        case 0x3f6b44u: goto label_3f6b44;
        case 0x3f6b48u: goto label_3f6b48;
        case 0x3f6b4cu: goto label_3f6b4c;
        case 0x3f6b50u: goto label_3f6b50;
        case 0x3f6b54u: goto label_3f6b54;
        case 0x3f6b58u: goto label_3f6b58;
        case 0x3f6b5cu: goto label_3f6b5c;
        case 0x3f6b60u: goto label_3f6b60;
        case 0x3f6b64u: goto label_3f6b64;
        case 0x3f6b68u: goto label_3f6b68;
        case 0x3f6b6cu: goto label_3f6b6c;
        case 0x3f6b70u: goto label_3f6b70;
        case 0x3f6b74u: goto label_3f6b74;
        case 0x3f6b78u: goto label_3f6b78;
        case 0x3f6b7cu: goto label_3f6b7c;
        case 0x3f6b80u: goto label_3f6b80;
        case 0x3f6b84u: goto label_3f6b84;
        case 0x3f6b88u: goto label_3f6b88;
        case 0x3f6b8cu: goto label_3f6b8c;
        case 0x3f6b90u: goto label_3f6b90;
        case 0x3f6b94u: goto label_3f6b94;
        case 0x3f6b98u: goto label_3f6b98;
        case 0x3f6b9cu: goto label_3f6b9c;
        case 0x3f6ba0u: goto label_3f6ba0;
        case 0x3f6ba4u: goto label_3f6ba4;
        case 0x3f6ba8u: goto label_3f6ba8;
        case 0x3f6bacu: goto label_3f6bac;
        case 0x3f6bb0u: goto label_3f6bb0;
        case 0x3f6bb4u: goto label_3f6bb4;
        case 0x3f6bb8u: goto label_3f6bb8;
        case 0x3f6bbcu: goto label_3f6bbc;
        case 0x3f6bc0u: goto label_3f6bc0;
        case 0x3f6bc4u: goto label_3f6bc4;
        case 0x3f6bc8u: goto label_3f6bc8;
        case 0x3f6bccu: goto label_3f6bcc;
        case 0x3f6bd0u: goto label_3f6bd0;
        case 0x3f6bd4u: goto label_3f6bd4;
        case 0x3f6bd8u: goto label_3f6bd8;
        case 0x3f6bdcu: goto label_3f6bdc;
        case 0x3f6be0u: goto label_3f6be0;
        case 0x3f6be4u: goto label_3f6be4;
        case 0x3f6be8u: goto label_3f6be8;
        case 0x3f6becu: goto label_3f6bec;
        default: break;
    }

    ctx->pc = 0x3f6b40u;

label_3f6b40:
    // 0x3f6b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f6b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f6b44:
    // 0x3f6b44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f6b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3f6b48:
    // 0x3f6b48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f6b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f6b4c:
    // 0x3f6b4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f6b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f6b50:
    // 0x3f6b50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f6b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3f6b54:
    // 0x3f6b54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f6b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6b58:
    // 0x3f6b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f6b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f6b5c:
    // 0x3f6b5c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f6b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f6b60:
    // 0x3f6b60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f6b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f6b64:
    // 0x3f6b64: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f6b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f6b68:
    // 0x3f6b68: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f6b6c:
    // 0x3f6b6c: 0x40f809  jalr        $v0
label_3f6b70:
    if (ctx->pc == 0x3F6B70u) {
        ctx->pc = 0x3F6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B6Cu;
        // 0x3f6b70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6B74u;
        goto label_3f6b74;
    }
    ctx->pc = 0x3F6B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F6B74u);
        ctx->pc = 0x3F6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B6Cu;
        // 0x3f6b70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6B6Cu, 0x3F6B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F6B74u;
label_3f6b74:
    // 0x3f6b74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f6b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f6b78:
    // 0x3f6b78: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3f6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3f6b7c:
    // 0x3f6b7c: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_3f6b80:
    if (ctx->pc == 0x3F6B80u) {
        ctx->pc = 0x3F6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B7Cu;
        // 0x3f6b80: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6B84u;
        goto label_3f6b84;
    }
    ctx->pc = 0x3F6B7Cu;
    {
        const bool branch_taken_0x3f6b7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B7Cu;
        // 0x3f6b80: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6b7c) {
            ctx->pc = 0x3F6BBCu;
            goto label_3f6bbc;
        }
    }
    ctx->pc = 0x3F6B84u;
label_3f6b84:
    // 0x3f6b84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3f6b88:
    if (ctx->pc == 0x3F6B88u) {
        ctx->pc = 0x3F6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B84u;
        // 0x3f6b88: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6B8Cu;
        goto label_3f6b8c;
    }
    ctx->pc = 0x3F6B84u;
    {
        const bool branch_taken_0x3f6b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B84u;
        // 0x3f6b88: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6b84) {
            ctx->pc = 0x3F6B9Cu;
            goto label_3f6b9c;
        }
    }
    ctx->pc = 0x3F6B8Cu;
label_3f6b8c:
    // 0x3f6b8c: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_3f6b90:
    if (ctx->pc == 0x3F6B90u) {
        ctx->pc = 0x3F6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B8Cu;
        // 0x3f6b90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6B94u;
        goto label_3f6b94;
    }
    ctx->pc = 0x3F6B8Cu;
    {
        const bool branch_taken_0x3f6b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B8Cu;
        // 0x3f6b90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6b8c) {
            ctx->pc = 0x3F6BCCu;
            goto label_3f6bcc;
        }
    }
    ctx->pc = 0x3F6B94u;
label_3f6b94:
    // 0x3f6b94: 0x10000012  b           . + 4 + (0x12 << 2)
label_3f6b98:
    if (ctx->pc == 0x3F6B98u) {
        ctx->pc = 0x3F6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B94u;
        // 0x3f6b98: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6B9Cu;
        goto label_3f6b9c;
    }
    ctx->pc = 0x3F6B94u;
    {
        const bool branch_taken_0x3f6b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B94u;
        // 0x3f6b98: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6b94) {
            ctx->pc = 0x3F6BE0u;
            goto label_3f6be0;
        }
    }
    ctx->pc = 0x3F6B9Cu;
label_3f6b9c:
    // 0x3f6b9c: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x3f6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_3f6ba0:
    // 0x3f6ba0: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_3f6ba4:
    if (ctx->pc == 0x3F6BA4u) {
        ctx->pc = 0x3F6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BA0u;
        // 0x3f6ba4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6BA8u;
        goto label_3f6ba8;
    }
    ctx->pc = 0x3F6BA0u;
    {
        const bool branch_taken_0x3f6ba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BA0u;
        // 0x3f6ba4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ba0) {
            ctx->pc = 0x3F6BDCu;
            goto label_3f6bdc;
        }
    }
    ctx->pc = 0x3F6BA8u;
label_3f6ba8:
    // 0x3f6ba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f6ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f6bac:
    // 0x3f6bac: 0xc0fd9c8  jal         func_3F6720
label_3f6bb0:
    if (ctx->pc == 0x3F6BB0u) {
        ctx->pc = 0x3F6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BACu;
        // 0x3f6bb0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6BB4u;
        goto label_3f6bb4;
    }
    ctx->pc = 0x3F6BACu;
    SET_GPR_U32(ctx, 31, 0x3F6BB4u);
    ctx->pc = 0x3F6BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6BACu;
    // 0x3f6bb0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6720u, 0x3F6BACu, 0x3F6BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6BB4u;
label_3f6bb4:
    // 0x3f6bb4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3f6bb8:
    if (ctx->pc == 0x3F6BB8u) {
        ctx->pc = 0x3F6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BB4u;
        // 0x3f6bb8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6BBCu;
        goto label_3f6bbc;
    }
    ctx->pc = 0x3F6BB4u;
    {
        const bool branch_taken_0x3f6bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BB4u;
        // 0x3f6bb8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6bb4) {
            ctx->pc = 0x3F6BDCu;
            goto label_3f6bdc;
        }
    }
    ctx->pc = 0x3F6BBCu;
label_3f6bbc:
    // 0x3f6bbc: 0xc0fda4c  jal         func_3F6930
label_3f6bc0:
    if (ctx->pc == 0x3F6BC0u) {
        ctx->pc = 0x3F6BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BBCu;
        // 0x3f6bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6BC4u;
        goto label_3f6bc4;
    }
    ctx->pc = 0x3F6BBCu;
    SET_GPR_U32(ctx, 31, 0x3F6BC4u);
    ctx->pc = 0x3F6BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6BBCu;
    // 0x3f6bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6930u, 0x3F6BBCu, 0x3F6BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6BC4u;
label_3f6bc4:
    // 0x3f6bc4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3f6bc8:
    if (ctx->pc == 0x3F6BC8u) {
        ctx->pc = 0x3F6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BC4u;
        // 0x3f6bc8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6BCCu;
        goto label_3f6bcc;
    }
    ctx->pc = 0x3F6BC4u;
    {
        const bool branch_taken_0x3f6bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BC4u;
        // 0x3f6bc8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6bc4) {
            ctx->pc = 0x3F6BDCu;
            goto label_3f6bdc;
        }
    }
    ctx->pc = 0x3F6BCCu;
label_3f6bcc:
    // 0x3f6bcc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3f6bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f6bd0:
    // 0x3f6bd0: 0xc0fda38  jal         func_3F68E0
label_3f6bd4:
    if (ctx->pc == 0x3F6BD4u) {
        ctx->pc = 0x3F6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BD0u;
        // 0x3f6bd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6BD8u;
        goto label_3f6bd8;
    }
    ctx->pc = 0x3F6BD0u;
    SET_GPR_U32(ctx, 31, 0x3F6BD8u);
    ctx->pc = 0x3F6BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6BD0u;
    // 0x3f6bd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F68E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F68E0u, 0x3F6BD0u, 0x3F6BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6BD8u;
label_3f6bd8:
    // 0x3f6bd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f6bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f6bdc:
    // 0x3f6bdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f6bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f6be0:
    // 0x3f6be0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f6be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f6be4:
    // 0x3f6be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f6be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f6be8:
    // 0x3f6be8: 0x3e00008  jr          $ra
label_3f6bec:
    if (ctx->pc == 0x3F6BECu) {
        ctx->pc = 0x3F6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BE8u;
        // 0x3f6bec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6BF0u;
        goto label_fallthrough_0x3f6be8;
    }
    ctx->pc = 0x3F6BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BE8u;
        // 0x3f6bec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f6be8:
    ctx->pc = 0x3F6BF0u;
}
