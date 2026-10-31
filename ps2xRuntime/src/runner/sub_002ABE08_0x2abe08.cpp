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

// Function: sub_002ABE08
// Address: 0x2abe08 - 0x2abe98
void sub_002ABE08_0x2abe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABE08_0x2abe08");
#endif

    switch (ctx->pc) {
        case 0x2abe08u: goto label_2abe08;
        case 0x2abe0cu: goto label_2abe0c;
        case 0x2abe10u: goto label_2abe10;
        case 0x2abe14u: goto label_2abe14;
        case 0x2abe18u: goto label_2abe18;
        case 0x2abe1cu: goto label_2abe1c;
        case 0x2abe20u: goto label_2abe20;
        case 0x2abe24u: goto label_2abe24;
        case 0x2abe28u: goto label_2abe28;
        case 0x2abe2cu: goto label_2abe2c;
        case 0x2abe30u: goto label_2abe30;
        case 0x2abe34u: goto label_2abe34;
        case 0x2abe38u: goto label_2abe38;
        case 0x2abe3cu: goto label_2abe3c;
        case 0x2abe40u: goto label_2abe40;
        case 0x2abe44u: goto label_2abe44;
        case 0x2abe48u: goto label_2abe48;
        case 0x2abe4cu: goto label_2abe4c;
        case 0x2abe50u: goto label_2abe50;
        case 0x2abe54u: goto label_2abe54;
        case 0x2abe58u: goto label_2abe58;
        case 0x2abe5cu: goto label_2abe5c;
        case 0x2abe60u: goto label_2abe60;
        case 0x2abe64u: goto label_2abe64;
        case 0x2abe68u: goto label_2abe68;
        case 0x2abe6cu: goto label_2abe6c;
        case 0x2abe70u: goto label_2abe70;
        case 0x2abe74u: goto label_2abe74;
        case 0x2abe78u: goto label_2abe78;
        case 0x2abe7cu: goto label_2abe7c;
        case 0x2abe80u: goto label_2abe80;
        case 0x2abe84u: goto label_2abe84;
        case 0x2abe88u: goto label_2abe88;
        case 0x2abe8cu: goto label_2abe8c;
        case 0x2abe90u: goto label_2abe90;
        case 0x2abe94u: goto label_2abe94;
        default: break;
    }

    ctx->pc = 0x2abe08u;

label_2abe08:
    // 0x2abe08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2abe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2abe0c:
    // 0x2abe0c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2abe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2abe10:
    // 0x2abe10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2abe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2abe14:
    // 0x2abe14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2abe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2abe18:
    // 0x2abe18: 0xc0e4060  jal         func_390180
label_2abe1c:
    if (ctx->pc == 0x2ABE1Cu) {
        ctx->pc = 0x2ABE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE18u;
        // 0x2abe1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE20u;
        goto label_2abe20;
    }
    ctx->pc = 0x2ABE18u;
    SET_GPR_U32(ctx, 31, 0x2ABE20u);
    ctx->pc = 0x2ABE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE18u;
    // 0x2abe1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2ABE18u, 0x2ABE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE20u;
label_2abe20:
    // 0x2abe20: 0xc08a61a  jal         func_229868
label_2abe24:
    if (ctx->pc == 0x2ABE24u) {
        ctx->pc = 0x2ABE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE20u;
        // 0x2abe24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE28u;
        goto label_2abe28;
    }
    ctx->pc = 0x2ABE20u;
    SET_GPR_U32(ctx, 31, 0x2ABE28u);
    ctx->pc = 0x2ABE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE20u;
    // 0x2abe24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2ABE20u, 0x2ABE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE28u;
label_2abe28:
    // 0x2abe28: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2abe2c:
    if (ctx->pc == 0x2ABE2Cu) {
        ctx->pc = 0x2ABE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE28u;
        // 0x2abe2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE30u;
        goto label_2abe30;
    }
    ctx->pc = 0x2ABE28u;
    {
        const bool branch_taken_0x2abe28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE28u;
        // 0x2abe2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe28) {
            ctx->pc = 0x2ABE8Cu;
            goto label_2abe8c;
        }
    }
    ctx->pc = 0x2ABE30u;
label_2abe30:
    // 0x2abe30: 0xc087502  jal         func_21D408
label_2abe34:
    if (ctx->pc == 0x2ABE34u) {
        ctx->pc = 0x2ABE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE30u;
        // 0x2abe34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE38u;
        goto label_2abe38;
    }
    ctx->pc = 0x2ABE30u;
    SET_GPR_U32(ctx, 31, 0x2ABE38u);
    ctx->pc = 0x2ABE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE30u;
    // 0x2abe34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2ABE30u, 0x2ABE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE38u;
label_2abe38:
    // 0x2abe38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2abe38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2abe3c:
    // 0x2abe3c: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2abe3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2abe40:
    // 0x2abe40: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2abe44:
    if (ctx->pc == 0x2ABE44u) {
        ctx->pc = 0x2ABE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE40u;
        // 0x2abe44: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE48u;
        goto label_2abe48;
    }
    ctx->pc = 0x2ABE40u;
    {
        const bool branch_taken_0x2abe40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2ABE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE40u;
        // 0x2abe44: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe40) {
            ctx->pc = 0x2ABE54u;
            goto label_2abe54;
        }
    }
    ctx->pc = 0x2ABE48u;
label_2abe48:
    // 0x2abe48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2abe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2abe4c:
    // 0x2abe4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2abe50:
    if (ctx->pc == 0x2ABE50u) {
        ctx->pc = 0x2ABE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE4Cu;
        // 0x2abe50: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE54u;
        goto label_2abe54;
    }
    ctx->pc = 0x2ABE4Cu;
    {
        const bool branch_taken_0x2abe4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE4Cu;
        // 0x2abe50: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe4c) {
            ctx->pc = 0x2ABE58u;
            goto label_2abe58;
        }
    }
    ctx->pc = 0x2ABE54u;
label_2abe54:
    // 0x2abe54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2abe54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abe58:
    // 0x2abe58: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_2abe5c:
    if (ctx->pc == 0x2ABE5Cu) {
        ctx->pc = 0x2ABE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE58u;
        // 0x2abe5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE60u;
        goto label_2abe60;
    }
    ctx->pc = 0x2ABE58u;
    {
        const bool branch_taken_0x2abe58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abe58) {
            ctx->pc = 0x2ABE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABE58u;
            // 0x2abe5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABE8Cu;
            goto label_2abe8c;
        }
    }
    ctx->pc = 0x2ABE60u;
label_2abe60:
    // 0x2abe60: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2abe60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2abe64:
    // 0x2abe64: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2abe64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2abe68:
    // 0x2abe68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2abe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2abe6c:
    // 0x2abe6c: 0x40f809  jalr        $v0
label_2abe70:
    if (ctx->pc == 0x2ABE70u) {
        ctx->pc = 0x2ABE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE6Cu;
        // 0x2abe70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE74u;
        goto label_2abe74;
    }
    ctx->pc = 0x2ABE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ABE74u);
        ctx->pc = 0x2ABE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE6Cu;
        // 0x2abe70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABE6Cu, 0x2ABE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ABE74u;
label_2abe74:
    // 0x2abe74: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x2abe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_2abe78:
    // 0x2abe78: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2abe7c:
    if (ctx->pc == 0x2ABE7Cu) {
        ctx->pc = 0x2ABE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE78u;
        // 0x2abe7c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE80u;
        goto label_2abe80;
    }
    ctx->pc = 0x2ABE78u;
    {
        const bool branch_taken_0x2abe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2abe78) {
            ctx->pc = 0x2ABE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABE78u;
            // 0x2abe7c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABE8Cu;
            goto label_2abe8c;
        }
    }
    ctx->pc = 0x2ABE80u;
label_2abe80:
    // 0x2abe80: 0xc0ab104  jal         func_2AC410
label_2abe84:
    if (ctx->pc == 0x2ABE84u) {
        ctx->pc = 0x2ABE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE80u;
        // 0x2abe84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE88u;
        goto label_2abe88;
    }
    ctx->pc = 0x2ABE80u;
    SET_GPR_U32(ctx, 31, 0x2ABE88u);
    ctx->pc = 0x2ABE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE80u;
    // 0x2abe84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC410u, 0x2ABE80u, 0x2ABE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE88u;
label_2abe88:
    // 0x2abe88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2abe88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2abe8c:
    // 0x2abe8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2abe8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2abe90:
    // 0x2abe90: 0x3e00008  jr          $ra
label_2abe94:
    if (ctx->pc == 0x2ABE94u) {
        ctx->pc = 0x2ABE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE90u;
        // 0x2abe94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ABE98u;
        goto label_fallthrough_0x2abe90;
    }
    ctx->pc = 0x2ABE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE90u;
        // 0x2abe94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2abe90:
    ctx->pc = 0x2ABE98u;
}
