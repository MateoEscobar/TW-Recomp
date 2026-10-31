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

// Function: sub_00292CF0
// Address: 0x292cf0 - 0x292d80
void sub_00292CF0_0x292cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292CF0_0x292cf0");
#endif

    switch (ctx->pc) {
        case 0x292cf0u: goto label_292cf0;
        case 0x292cf4u: goto label_292cf4;
        case 0x292cf8u: goto label_292cf8;
        case 0x292cfcu: goto label_292cfc;
        case 0x292d00u: goto label_292d00;
        case 0x292d04u: goto label_292d04;
        case 0x292d08u: goto label_292d08;
        case 0x292d0cu: goto label_292d0c;
        case 0x292d10u: goto label_292d10;
        case 0x292d14u: goto label_292d14;
        case 0x292d18u: goto label_292d18;
        case 0x292d1cu: goto label_292d1c;
        case 0x292d20u: goto label_292d20;
        case 0x292d24u: goto label_292d24;
        case 0x292d28u: goto label_292d28;
        case 0x292d2cu: goto label_292d2c;
        case 0x292d30u: goto label_292d30;
        case 0x292d34u: goto label_292d34;
        case 0x292d38u: goto label_292d38;
        case 0x292d3cu: goto label_292d3c;
        case 0x292d40u: goto label_292d40;
        case 0x292d44u: goto label_292d44;
        case 0x292d48u: goto label_292d48;
        case 0x292d4cu: goto label_292d4c;
        case 0x292d50u: goto label_292d50;
        case 0x292d54u: goto label_292d54;
        case 0x292d58u: goto label_292d58;
        case 0x292d5cu: goto label_292d5c;
        case 0x292d60u: goto label_292d60;
        case 0x292d64u: goto label_292d64;
        case 0x292d68u: goto label_292d68;
        case 0x292d6cu: goto label_292d6c;
        case 0x292d70u: goto label_292d70;
        case 0x292d74u: goto label_292d74;
        case 0x292d78u: goto label_292d78;
        case 0x292d7cu: goto label_292d7c;
        default: break;
    }

    ctx->pc = 0x292cf0u;

label_292cf0:
    // 0x292cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_292cf4:
    // 0x292cf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_292cf8:
    // 0x292cf8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_292cfc:
    // 0x292cfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_292d00:
    // 0x292d00: 0xc0e4060  jal         func_390180
label_292d04:
    if (ctx->pc == 0x292D04u) {
        ctx->pc = 0x292D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D00u;
        // 0x292d04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D08u;
        goto label_292d08;
    }
    ctx->pc = 0x292D00u;
    SET_GPR_U32(ctx, 31, 0x292D08u);
    ctx->pc = 0x292D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D00u;
    // 0x292d04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292D00u, 0x292D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D08u;
label_292d08:
    // 0x292d08: 0xc08a61a  jal         func_229868
label_292d0c:
    if (ctx->pc == 0x292D0Cu) {
        ctx->pc = 0x292D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D08u;
        // 0x292d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D10u;
        goto label_292d10;
    }
    ctx->pc = 0x292D08u;
    SET_GPR_U32(ctx, 31, 0x292D10u);
    ctx->pc = 0x292D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D08u;
    // 0x292d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292D08u, 0x292D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D10u;
label_292d10:
    // 0x292d10: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_292d14:
    if (ctx->pc == 0x292D14u) {
        ctx->pc = 0x292D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D10u;
        // 0x292d14: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D18u;
        goto label_292d18;
    }
    ctx->pc = 0x292D10u;
    {
        const bool branch_taken_0x292d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D10u;
        // 0x292d14: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d10) {
            ctx->pc = 0x292D74u;
            goto label_292d74;
        }
    }
    ctx->pc = 0x292D18u;
label_292d18:
    // 0x292d18: 0xc087502  jal         func_21D408
label_292d1c:
    if (ctx->pc == 0x292D1Cu) {
        ctx->pc = 0x292D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D18u;
        // 0x292d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D20u;
        goto label_292d20;
    }
    ctx->pc = 0x292D18u;
    SET_GPR_U32(ctx, 31, 0x292D20u);
    ctx->pc = 0x292D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D18u;
    // 0x292d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292D18u, 0x292D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D20u;
label_292d20:
    // 0x292d20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292d24:
    // 0x292d24: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x292d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_292d28:
    // 0x292d28: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_292d2c:
    if (ctx->pc == 0x292D2Cu) {
        ctx->pc = 0x292D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D28u;
        // 0x292d2c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D30u;
        goto label_292d30;
    }
    ctx->pc = 0x292D28u;
    {
        const bool branch_taken_0x292d28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x292D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D28u;
        // 0x292d2c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d28) {
            ctx->pc = 0x292D3Cu;
            goto label_292d3c;
        }
    }
    ctx->pc = 0x292D30u;
label_292d30:
    // 0x292d30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x292d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_292d34:
    // 0x292d34: 0x10000002  b           . + 4 + (0x2 << 2)
label_292d38:
    if (ctx->pc == 0x292D38u) {
        ctx->pc = 0x292D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D34u;
        // 0x292d38: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D3Cu;
        goto label_292d3c;
    }
    ctx->pc = 0x292D34u;
    {
        const bool branch_taken_0x292d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D34u;
        // 0x292d38: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d34) {
            ctx->pc = 0x292D40u;
            goto label_292d40;
        }
    }
    ctx->pc = 0x292D3Cu;
label_292d3c:
    // 0x292d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x292d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292d40:
    // 0x292d40: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_292d44:
    if (ctx->pc == 0x292D44u) {
        ctx->pc = 0x292D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D40u;
        // 0x292d44: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D48u;
        goto label_292d48;
    }
    ctx->pc = 0x292D40u;
    {
        const bool branch_taken_0x292d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x292d40) {
            ctx->pc = 0x292D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292D40u;
            // 0x292d44: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292D74u;
            goto label_292d74;
        }
    }
    ctx->pc = 0x292D48u;
label_292d48:
    // 0x292d48: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x292d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_292d4c:
    // 0x292d4c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x292d4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_292d50:
    // 0x292d50: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x292d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_292d54:
    // 0x292d54: 0x40f809  jalr        $v0
label_292d58:
    if (ctx->pc == 0x292D58u) {
        ctx->pc = 0x292D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D54u;
        // 0x292d58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D5Cu;
        goto label_292d5c;
    }
    ctx->pc = 0x292D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x292D5Cu);
        ctx->pc = 0x292D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D54u;
        // 0x292d58: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292D54u, 0x292D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x292D5Cu;
label_292d5c:
    // 0x292d5c: 0x2403009b  addiu       $v1, $zero, 0x9B
    ctx->pc = 0x292d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
label_292d60:
    // 0x292d60: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_292d64:
    if (ctx->pc == 0x292D64u) {
        ctx->pc = 0x292D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D60u;
        // 0x292d64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D68u;
        goto label_292d68;
    }
    ctx->pc = 0x292D60u;
    {
        const bool branch_taken_0x292d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x292d60) {
            ctx->pc = 0x292D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292D60u;
            // 0x292d64: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292D74u;
            goto label_292d74;
        }
    }
    ctx->pc = 0x292D68u;
label_292d68:
    // 0x292d68: 0xc0a35f6  jal         func_28D7D8
label_292d6c:
    if (ctx->pc == 0x292D6Cu) {
        ctx->pc = 0x292D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D68u;
        // 0x292d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D70u;
        goto label_292d70;
    }
    ctx->pc = 0x292D68u;
    SET_GPR_U32(ctx, 31, 0x292D70u);
    ctx->pc = 0x292D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D68u;
    // 0x292d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x292D68u, 0x292D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D70u;
label_292d70:
    // 0x292d70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292d74:
    // 0x292d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_292d78:
    // 0x292d78: 0x3e00008  jr          $ra
label_292d7c:
    if (ctx->pc == 0x292D7Cu) {
        ctx->pc = 0x292D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D78u;
        // 0x292d7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292D80u;
        goto label_fallthrough_0x292d78;
    }
    ctx->pc = 0x292D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D78u;
        // 0x292d7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x292d78:
    ctx->pc = 0x292D80u;
}
