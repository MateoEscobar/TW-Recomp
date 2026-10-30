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

// Function: sub_003CDAE8
// Address: 0x3cdae8 - 0x3cdb88
void sub_003CDAE8_0x3cdae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CDAE8_0x3cdae8");
#endif

    switch (ctx->pc) {
        case 0x3cdae8u: goto label_3cdae8;
        case 0x3cdaecu: goto label_3cdaec;
        case 0x3cdaf0u: goto label_3cdaf0;
        case 0x3cdaf4u: goto label_3cdaf4;
        case 0x3cdaf8u: goto label_3cdaf8;
        case 0x3cdafcu: goto label_3cdafc;
        case 0x3cdb00u: goto label_3cdb00;
        case 0x3cdb04u: goto label_3cdb04;
        case 0x3cdb08u: goto label_3cdb08;
        case 0x3cdb0cu: goto label_3cdb0c;
        case 0x3cdb10u: goto label_3cdb10;
        case 0x3cdb14u: goto label_3cdb14;
        case 0x3cdb18u: goto label_3cdb18;
        case 0x3cdb1cu: goto label_3cdb1c;
        case 0x3cdb20u: goto label_3cdb20;
        case 0x3cdb24u: goto label_3cdb24;
        case 0x3cdb28u: goto label_3cdb28;
        case 0x3cdb2cu: goto label_3cdb2c;
        case 0x3cdb30u: goto label_3cdb30;
        case 0x3cdb34u: goto label_3cdb34;
        case 0x3cdb38u: goto label_3cdb38;
        case 0x3cdb3cu: goto label_3cdb3c;
        case 0x3cdb40u: goto label_3cdb40;
        case 0x3cdb44u: goto label_3cdb44;
        case 0x3cdb48u: goto label_3cdb48;
        case 0x3cdb4cu: goto label_3cdb4c;
        case 0x3cdb50u: goto label_3cdb50;
        case 0x3cdb54u: goto label_3cdb54;
        case 0x3cdb58u: goto label_3cdb58;
        case 0x3cdb5cu: goto label_3cdb5c;
        case 0x3cdb60u: goto label_3cdb60;
        case 0x3cdb64u: goto label_3cdb64;
        case 0x3cdb68u: goto label_3cdb68;
        case 0x3cdb6cu: goto label_3cdb6c;
        case 0x3cdb70u: goto label_3cdb70;
        case 0x3cdb74u: goto label_3cdb74;
        case 0x3cdb78u: goto label_3cdb78;
        case 0x3cdb7cu: goto label_3cdb7c;
        case 0x3cdb80u: goto label_3cdb80;
        case 0x3cdb84u: goto label_3cdb84;
        default: break;
    }

    ctx->pc = 0x3cdae8u;

label_3cdae8:
    // 0x3cdae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cdae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3cdaec:
    // 0x3cdaec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3cdaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3cdaf0:
    // 0x3cdaf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cdaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3cdaf4:
    // 0x3cdaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cdaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3cdaf8:
    // 0x3cdaf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3cdaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cdafc:
    // 0x3cdafc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3cdafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cdb00:
    // 0x3cdb00: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3cdb00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cdb04:
    // 0x3cdb04: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cdb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cdb08:
    // 0x3cdb08: 0x40f809  jalr        $v0
label_3cdb0c:
    if (ctx->pc == 0x3CDB0Cu) {
        ctx->pc = 0x3CDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB08u;
        // 0x3cdb0c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDB10u;
        goto label_3cdb10;
    }
    ctx->pc = 0x3CDB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CDB10u);
        ctx->pc = 0x3CDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB08u;
        // 0x3cdb0c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDB08u, 0x3CDB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CDB10u;
label_3cdb10:
    // 0x3cdb10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cdb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cdb14:
    // 0x3cdb14: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3cdb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3cdb18:
    // 0x3cdb18: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_3cdb1c:
    if (ctx->pc == 0x3CDB1Cu) {
        ctx->pc = 0x3CDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB18u;
        // 0x3cdb1c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDB20u;
        goto label_3cdb20;
    }
    ctx->pc = 0x3CDB18u;
    {
        const bool branch_taken_0x3cdb18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3CDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB18u;
        // 0x3cdb1c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cdb18) {
            ctx->pc = 0x3CDB28u;
            goto label_3cdb28;
        }
    }
    ctx->pc = 0x3CDB20u;
label_3cdb20:
    // 0x3cdb20: 0x56220014  bnel        $s1, $v0, . + 4 + (0x14 << 2)
label_3cdb24:
    if (ctx->pc == 0x3CDB24u) {
        ctx->pc = 0x3CDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB20u;
        // 0x3cdb24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDB28u;
        goto label_3cdb28;
    }
    ctx->pc = 0x3CDB20u;
    {
        const bool branch_taken_0x3cdb20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cdb20) {
            ctx->pc = 0x3CDB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDB20u;
            // 0x3cdb24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDB74u;
            goto label_3cdb74;
        }
    }
    ctx->pc = 0x3CDB28u;
label_3cdb28:
    // 0x3cdb28: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3cdb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3cdb2c:
    // 0x3cdb2c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3cdb30:
    if (ctx->pc == 0x3CDB30u) {
        ctx->pc = 0x3CDB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB2Cu;
        // 0x3cdb30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDB34u;
        goto label_3cdb34;
    }
    ctx->pc = 0x3CDB2Cu;
    {
        const bool branch_taken_0x3cdb2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdb2c) {
            ctx->pc = 0x3CDB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDB2Cu;
            // 0x3cdb30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDB44u;
            goto label_3cdb44;
        }
    }
    ctx->pc = 0x3CDB34u;
label_3cdb34:
    // 0x3cdb34: 0xc0e95f6  jal         func_3A57D8
label_3cdb38:
    if (ctx->pc == 0x3CDB38u) {
        ctx->pc = 0x3CDB3Cu;
        goto label_3cdb3c;
    }
    ctx->pc = 0x3CDB34u;
    SET_GPR_U32(ctx, 31, 0x3CDB3Cu);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3CDB34u, 0x3CDB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDB3Cu;
label_3cdb3c:
    // 0x3cdb3c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3cdb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3cdb40:
    // 0x3cdb40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3cdb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cdb44:
    // 0x3cdb44: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3cdb48:
    if (ctx->pc == 0x3CDB48u) {
        ctx->pc = 0x3CDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB44u;
        // 0x3cdb48: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDB4Cu;
        goto label_3cdb4c;
    }
    ctx->pc = 0x3CDB44u;
    {
        const bool branch_taken_0x3cdb44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdb44) {
            ctx->pc = 0x3CDB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDB44u;
            // 0x3cdb48: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDB5Cu;
            goto label_3cdb5c;
        }
    }
    ctx->pc = 0x3CDB4Cu;
label_3cdb4c:
    // 0x3cdb4c: 0xc0e95f6  jal         func_3A57D8
label_3cdb50:
    if (ctx->pc == 0x3CDB50u) {
        ctx->pc = 0x3CDB54u;
        goto label_3cdb54;
    }
    ctx->pc = 0x3CDB4Cu;
    SET_GPR_U32(ctx, 31, 0x3CDB54u);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3CDB4Cu, 0x3CDB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDB54u;
label_3cdb54:
    // 0x3cdb54: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3cdb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3cdb58:
    // 0x3cdb58: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3cdb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3cdb5c:
    // 0x3cdb5c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3cdb60:
    if (ctx->pc == 0x3CDB60u) {
        ctx->pc = 0x3CDB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB5Cu;
        // 0x3cdb60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDB64u;
        goto label_3cdb64;
    }
    ctx->pc = 0x3CDB5Cu;
    {
        const bool branch_taken_0x3cdb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cdb5c) {
            ctx->pc = 0x3CDB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CDB5Cu;
            // 0x3cdb60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CDB74u;
            goto label_3cdb74;
        }
    }
    ctx->pc = 0x3CDB64u;
label_3cdb64:
    // 0x3cdb64: 0xc0e95f6  jal         func_3A57D8
label_3cdb68:
    if (ctx->pc == 0x3CDB68u) {
        ctx->pc = 0x3CDB6Cu;
        goto label_3cdb6c;
    }
    ctx->pc = 0x3CDB64u;
    SET_GPR_U32(ctx, 31, 0x3CDB6Cu);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3CDB64u, 0x3CDB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDB6Cu;
label_3cdb6c:
    // 0x3cdb6c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3cdb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3cdb70:
    // 0x3cdb70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3cdb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cdb74:
    // 0x3cdb74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cdb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cdb78:
    // 0x3cdb78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cdb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3cdb7c:
    // 0x3cdb7c: 0x3e00008  jr          $ra
label_3cdb80:
    if (ctx->pc == 0x3CDB80u) {
        ctx->pc = 0x3CDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB7Cu;
        // 0x3cdb80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDB84u;
        goto label_3cdb84;
    }
    ctx->pc = 0x3CDB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CDB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDB7Cu;
        // 0x3cdb80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CDB84u;
label_3cdb84:
    // 0x3cdb84: 0x0  nop
    ctx->pc = 0x3cdb84u;
    // NOP
    ctx->pc = 0x3cdb88u;
}
