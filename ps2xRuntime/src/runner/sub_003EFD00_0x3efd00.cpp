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

// Function: sub_003EFD00
// Address: 0x3efd00 - 0x3efda8
void sub_003EFD00_0x3efd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFD00_0x3efd00");
#endif

    switch (ctx->pc) {
        case 0x3efd00u: goto label_3efd00;
        case 0x3efd04u: goto label_3efd04;
        case 0x3efd08u: goto label_3efd08;
        case 0x3efd0cu: goto label_3efd0c;
        case 0x3efd10u: goto label_3efd10;
        case 0x3efd14u: goto label_3efd14;
        case 0x3efd18u: goto label_3efd18;
        case 0x3efd1cu: goto label_3efd1c;
        case 0x3efd20u: goto label_3efd20;
        case 0x3efd24u: goto label_3efd24;
        case 0x3efd28u: goto label_3efd28;
        case 0x3efd2cu: goto label_3efd2c;
        case 0x3efd30u: goto label_3efd30;
        case 0x3efd34u: goto label_3efd34;
        case 0x3efd38u: goto label_3efd38;
        case 0x3efd3cu: goto label_3efd3c;
        case 0x3efd40u: goto label_3efd40;
        case 0x3efd44u: goto label_3efd44;
        case 0x3efd48u: goto label_3efd48;
        case 0x3efd4cu: goto label_3efd4c;
        case 0x3efd50u: goto label_3efd50;
        case 0x3efd54u: goto label_3efd54;
        case 0x3efd58u: goto label_3efd58;
        case 0x3efd5cu: goto label_3efd5c;
        case 0x3efd60u: goto label_3efd60;
        case 0x3efd64u: goto label_3efd64;
        case 0x3efd68u: goto label_3efd68;
        case 0x3efd6cu: goto label_3efd6c;
        case 0x3efd70u: goto label_3efd70;
        case 0x3efd74u: goto label_3efd74;
        case 0x3efd78u: goto label_3efd78;
        case 0x3efd7cu: goto label_3efd7c;
        case 0x3efd80u: goto label_3efd80;
        case 0x3efd84u: goto label_3efd84;
        case 0x3efd88u: goto label_3efd88;
        case 0x3efd8cu: goto label_3efd8c;
        case 0x3efd90u: goto label_3efd90;
        case 0x3efd94u: goto label_3efd94;
        case 0x3efd98u: goto label_3efd98;
        case 0x3efd9cu: goto label_3efd9c;
        case 0x3efda0u: goto label_3efda0;
        case 0x3efda4u: goto label_3efda4;
        default: break;
    }

    ctx->pc = 0x3efd00u;

label_3efd00:
    // 0x3efd00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3efd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3efd04:
    // 0x3efd04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3efd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3efd08:
    // 0x3efd08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3efd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3efd0c:
    // 0x3efd0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3efd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3efd10:
    // 0x3efd10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3efd10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3efd14:
    // 0x3efd14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3efd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3efd18:
    // 0x3efd18: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3efd18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3efd1c:
    // 0x3efd1c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3efd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3efd20:
    // 0x3efd20: 0x40f809  jalr        $v0
label_3efd24:
    if (ctx->pc == 0x3EFD24u) {
        ctx->pc = 0x3EFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD20u;
        // 0x3efd24: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFD28u;
        goto label_3efd28;
    }
    ctx->pc = 0x3EFD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EFD28u);
        ctx->pc = 0x3EFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD20u;
        // 0x3efd24: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFD20u, 0x3EFD28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EFD28u;
label_3efd28:
    // 0x3efd28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3efd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3efd2c:
    // 0x3efd2c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3efd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3efd30:
    // 0x3efd30: 0x12220016  beq         $s1, $v0, . + 4 + (0x16 << 2)
label_3efd34:
    if (ctx->pc == 0x3EFD34u) {
        ctx->pc = 0x3EFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD30u;
        // 0x3efd34: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFD38u;
        goto label_3efd38;
    }
    ctx->pc = 0x3EFD30u;
    {
        const bool branch_taken_0x3efd30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD30u;
        // 0x3efd34: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd30) {
            ctx->pc = 0x3EFD8Cu;
            goto label_3efd8c;
        }
    }
    ctx->pc = 0x3EFD38u;
label_3efd38:
    // 0x3efd38: 0x56220017  bnel        $s1, $v0, . + 4 + (0x17 << 2)
label_3efd3c:
    if (ctx->pc == 0x3EFD3Cu) {
        ctx->pc = 0x3EFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD38u;
        // 0x3efd3c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFD40u;
        goto label_3efd40;
    }
    ctx->pc = 0x3EFD38u;
    {
        const bool branch_taken_0x3efd38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3efd38) {
            ctx->pc = 0x3EFD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EFD38u;
            // 0x3efd3c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EFD98u;
            goto label_3efd98;
        }
    }
    ctx->pc = 0x3EFD40u;
label_3efd40:
    // 0x3efd40: 0xc043d5e  jal         func_10F578
label_3efd44:
    if (ctx->pc == 0x3EFD44u) {
        ctx->pc = 0x3EFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD40u;
        // 0x3efd44: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFD48u;
        goto label_3efd48;
    }
    ctx->pc = 0x3EFD40u;
    SET_GPR_U32(ctx, 31, 0x3EFD48u);
    ctx->pc = 0x3EFD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFD40u;
    // 0x3efd44: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3EFD40u, 0x3EFD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFD48u;
label_3efd48:
    // 0x3efd48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3efd4c:
    if (ctx->pc == 0x3EFD4Cu) {
        ctx->pc = 0x3EFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD48u;
        // 0x3efd4c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFD50u;
        goto label_3efd50;
    }
    ctx->pc = 0x3EFD48u;
    {
        const bool branch_taken_0x3efd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD48u;
        // 0x3efd4c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd48) {
            ctx->pc = 0x3EFD60u;
            goto label_3efd60;
        }
    }
    ctx->pc = 0x3EFD50u;
label_3efd50:
    // 0x3efd50: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x3efd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3efd54:
    // 0x3efd54: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3efd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3efd58:
    // 0x3efd58: 0xc0440c6  jal         func_110318
label_3efd5c:
    if (ctx->pc == 0x3EFD5Cu) {
        ctx->pc = 0x3EFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD58u;
        // 0x3efd5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFD60u;
        goto label_3efd60;
    }
    ctx->pc = 0x3EFD58u;
    SET_GPR_U32(ctx, 31, 0x3EFD60u);
    ctx->pc = 0x3EFD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFD58u;
    // 0x3efd5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3EFD58u, 0x3EFD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFD60u;
label_3efd60:
    // 0x3efd60: 0xc043d5e  jal         func_10F578
label_3efd64:
    if (ctx->pc == 0x3EFD64u) {
        ctx->pc = 0x3EFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD60u;
        // 0x3efd64: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFD68u;
        goto label_3efd68;
    }
    ctx->pc = 0x3EFD60u;
    SET_GPR_U32(ctx, 31, 0x3EFD68u);
    ctx->pc = 0x3EFD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFD60u;
    // 0x3efd64: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x3EFD60u, 0x3EFD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFD68u;
label_3efd68:
    // 0x3efd68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3efd6c:
    if (ctx->pc == 0x3EFD6Cu) {
        ctx->pc = 0x3EFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD68u;
        // 0x3efd6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFD70u;
        goto label_3efd70;
    }
    ctx->pc = 0x3EFD68u;
    {
        const bool branch_taken_0x3efd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD68u;
        // 0x3efd6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd68) {
            ctx->pc = 0x3EFD80u;
            goto label_3efd80;
        }
    }
    ctx->pc = 0x3EFD70u;
label_3efd70:
    // 0x3efd70: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x3efd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3efd74:
    // 0x3efd74: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3efd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3efd78:
    // 0x3efd78: 0xc0440c6  jal         func_110318
label_3efd7c:
    if (ctx->pc == 0x3EFD7Cu) {
        ctx->pc = 0x3EFD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD78u;
        // 0x3efd7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFD80u;
        goto label_3efd80;
    }
    ctx->pc = 0x3EFD78u;
    SET_GPR_U32(ctx, 31, 0x3EFD80u);
    ctx->pc = 0x3EFD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFD78u;
    // 0x3efd7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x3EFD78u, 0x3EFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFD80u;
label_3efd80:
    // 0x3efd80: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x3efd80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
label_3efd84:
    // 0x3efd84: 0x10000003  b           . + 4 + (0x3 << 2)
label_3efd88:
    if (ctx->pc == 0x3EFD88u) {
        ctx->pc = 0x3EFD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD84u;
        // 0x3efd88: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFD8Cu;
        goto label_3efd8c;
    }
    ctx->pc = 0x3EFD84u;
    {
        const bool branch_taken_0x3efd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFD84u;
        // 0x3efd88: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efd84) {
            ctx->pc = 0x3EFD94u;
            goto label_3efd94;
        }
    }
    ctx->pc = 0x3EFD8Cu;
label_3efd8c:
    // 0x3efd8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3efd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3efd90:
    // 0x3efd90: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3efd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3efd94:
    // 0x3efd94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3efd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3efd98:
    // 0x3efd98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3efd98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3efd9c:
    // 0x3efd9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3efd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3efda0:
    // 0x3efda0: 0x3e00008  jr          $ra
label_3efda4:
    if (ctx->pc == 0x3EFDA4u) {
        ctx->pc = 0x3EFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFDA0u;
        // 0x3efda4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFDA8u;
        goto label_fallthrough_0x3efda0;
    }
    ctx->pc = 0x3EFDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFDA0u;
        // 0x3efda4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3efda0:
    ctx->pc = 0x3EFDA8u;
}
