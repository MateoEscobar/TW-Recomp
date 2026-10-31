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

// Function: sub_0029EED8
// Address: 0x29eed8 - 0x29ef80
void sub_0029EED8_0x29eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EED8_0x29eed8");
#endif

    switch (ctx->pc) {
        case 0x29eed8u: goto label_29eed8;
        case 0x29eedcu: goto label_29eedc;
        case 0x29eee0u: goto label_29eee0;
        case 0x29eee4u: goto label_29eee4;
        case 0x29eee8u: goto label_29eee8;
        case 0x29eeecu: goto label_29eeec;
        case 0x29eef0u: goto label_29eef0;
        case 0x29eef4u: goto label_29eef4;
        case 0x29eef8u: goto label_29eef8;
        case 0x29eefcu: goto label_29eefc;
        case 0x29ef00u: goto label_29ef00;
        case 0x29ef04u: goto label_29ef04;
        case 0x29ef08u: goto label_29ef08;
        case 0x29ef0cu: goto label_29ef0c;
        case 0x29ef10u: goto label_29ef10;
        case 0x29ef14u: goto label_29ef14;
        case 0x29ef18u: goto label_29ef18;
        case 0x29ef1cu: goto label_29ef1c;
        case 0x29ef20u: goto label_29ef20;
        case 0x29ef24u: goto label_29ef24;
        case 0x29ef28u: goto label_29ef28;
        case 0x29ef2cu: goto label_29ef2c;
        case 0x29ef30u: goto label_29ef30;
        case 0x29ef34u: goto label_29ef34;
        case 0x29ef38u: goto label_29ef38;
        case 0x29ef3cu: goto label_29ef3c;
        case 0x29ef40u: goto label_29ef40;
        case 0x29ef44u: goto label_29ef44;
        case 0x29ef48u: goto label_29ef48;
        case 0x29ef4cu: goto label_29ef4c;
        case 0x29ef50u: goto label_29ef50;
        case 0x29ef54u: goto label_29ef54;
        case 0x29ef58u: goto label_29ef58;
        case 0x29ef5cu: goto label_29ef5c;
        case 0x29ef60u: goto label_29ef60;
        case 0x29ef64u: goto label_29ef64;
        case 0x29ef68u: goto label_29ef68;
        case 0x29ef6cu: goto label_29ef6c;
        case 0x29ef70u: goto label_29ef70;
        case 0x29ef74u: goto label_29ef74;
        case 0x29ef78u: goto label_29ef78;
        case 0x29ef7cu: goto label_29ef7c;
        default: break;
    }

    ctx->pc = 0x29eed8u;

label_29eed8:
    // 0x29eed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29eed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29eedc:
    // 0x29eedc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29eedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_29eee0:
    // 0x29eee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29eee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29eee4:
    // 0x29eee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29eee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29eee8:
    // 0x29eee8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x29eee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_29eeec:
    // 0x29eeec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_29eef0:
    if (ctx->pc == 0x29EEF0u) {
        ctx->pc = 0x29EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEECu;
        // 0x29eef0: 0x92030005  lbu         $v1, 0x5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EEF4u;
        goto label_29eef4;
    }
    ctx->pc = 0x29EEECu;
    {
        const bool branch_taken_0x29eeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29eeec) {
            ctx->pc = 0x29EEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29EEECu;
            // 0x29eef0: 0x92030005  lbu         $v1, 0x5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29EF08u;
            goto label_29ef08;
        }
    }
    ctx->pc = 0x29EEF4u;
label_29eef4:
    // 0x29eef4: 0xc0a7b56  jal         func_29ED58
label_29eef8:
    if (ctx->pc == 0x29EEF8u) {
        ctx->pc = 0x29EEFCu;
        goto label_29eefc;
    }
    ctx->pc = 0x29EEF4u;
    SET_GPR_U32(ctx, 31, 0x29EEFCu);
    ctx->pc = 0x29ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ED58u, 0x29EEF4u, 0x29EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EEFCu;
label_29eefc:
    // 0x29eefc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_29ef00:
    if (ctx->pc == 0x29EF00u) {
        ctx->pc = 0x29EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEFCu;
        // 0x29ef00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF04u;
        goto label_29ef04;
    }
    ctx->pc = 0x29EEFCu;
    {
        const bool branch_taken_0x29eefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEFCu;
        // 0x29ef00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eefc) {
            ctx->pc = 0x29EF70u;
            goto label_29ef70;
        }
    }
    ctx->pc = 0x29EF04u;
label_29ef04:
    // 0x29ef04: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x29ef04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_29ef08:
    // 0x29ef08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ef0c:
    // 0x29ef0c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_29ef10:
    if (ctx->pc == 0x29EF10u) {
        ctx->pc = 0x29EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF0Cu;
        // 0x29ef10: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF14u;
        goto label_29ef14;
    }
    ctx->pc = 0x29EF0Cu;
    {
        const bool branch_taken_0x29ef0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF0Cu;
        // 0x29ef10: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef0c) {
            ctx->pc = 0x29EF24u;
            goto label_29ef24;
        }
    }
    ctx->pc = 0x29EF14u;
label_29ef14:
    // 0x29ef14: 0xc0a7b8c  jal         func_29EE30
label_29ef18:
    if (ctx->pc == 0x29EF18u) {
        ctx->pc = 0x29EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF14u;
        // 0x29ef18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF1Cu;
        goto label_29ef1c;
    }
    ctx->pc = 0x29EF14u;
    SET_GPR_U32(ctx, 31, 0x29EF1Cu);
    ctx->pc = 0x29EF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF14u;
    // 0x29ef18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EE30u, 0x29EF14u, 0x29EF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF1Cu;
label_29ef1c:
    // 0x29ef1c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_29ef20:
    if (ctx->pc == 0x29EF20u) {
        ctx->pc = 0x29EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF1Cu;
        // 0x29ef20: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF24u;
        goto label_29ef24;
    }
    ctx->pc = 0x29EF1Cu;
    {
        const bool branch_taken_0x29ef1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF1Cu;
        // 0x29ef20: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef1c) {
            ctx->pc = 0x29EF6Cu;
            goto label_29ef6c;
        }
    }
    ctx->pc = 0x29EF24u;
label_29ef24:
    // 0x29ef24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29ef28:
    // 0x29ef28: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x29ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_29ef2c:
    // 0x29ef2c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x29ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_29ef30:
    // 0x29ef30: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x29ef30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_29ef34:
    // 0x29ef34: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_29ef38:
    if (ctx->pc == 0x29EF38u) {
        ctx->pc = 0x29EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF34u;
        // 0x29ef38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF3Cu;
        goto label_29ef3c;
    }
    ctx->pc = 0x29EF34u;
    {
        const bool branch_taken_0x29ef34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF34u;
        // 0x29ef38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef34) {
            ctx->pc = 0x29EF70u;
            goto label_29ef70;
        }
    }
    ctx->pc = 0x29EF3Cu;
label_29ef3c:
    // 0x29ef3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29ef40:
    // 0x29ef40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29ef44:
    // 0x29ef44: 0x8c6400d8  lw          $a0, 0xD8($v1)
    ctx->pc = 0x29ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
label_29ef48:
    // 0x29ef48: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_29ef4c:
    if (ctx->pc == 0x29EF4Cu) {
        ctx->pc = 0x29EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF48u;
        // 0x29ef4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF50u;
        goto label_29ef50;
    }
    ctx->pc = 0x29EF48u;
    {
        const bool branch_taken_0x29ef48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF48u;
        // 0x29ef4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef48) {
            ctx->pc = 0x29EF70u;
            goto label_29ef70;
        }
    }
    ctx->pc = 0x29EF50u;
label_29ef50:
    // 0x29ef50: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x29ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29ef54:
    // 0x29ef54: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x29ef54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_29ef58:
    // 0x29ef58: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x29ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_29ef5c:
    // 0x29ef5c: 0x40f809  jalr        $v0
label_29ef60:
    if (ctx->pc == 0x29EF60u) {
        ctx->pc = 0x29EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF5Cu;
        // 0x29ef60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF64u;
        goto label_29ef64;
    }
    ctx->pc = 0x29EF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EF64u);
        ctx->pc = 0x29EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF5Cu;
        // 0x29ef60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EF5Cu, 0x29EF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EF64u;
label_29ef64:
    // 0x29ef64: 0x10000003  b           . + 4 + (0x3 << 2)
label_29ef68:
    if (ctx->pc == 0x29EF68u) {
        ctx->pc = 0x29EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF64u;
        // 0x29ef68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF6Cu;
        goto label_29ef6c;
    }
    ctx->pc = 0x29EF64u;
    {
        const bool branch_taken_0x29ef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF64u;
        // 0x29ef68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef64) {
            ctx->pc = 0x29EF74u;
            goto label_29ef74;
        }
    }
    ctx->pc = 0x29EF6Cu;
label_29ef6c:
    // 0x29ef6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29ef6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29ef70:
    // 0x29ef70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29ef70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29ef74:
    // 0x29ef74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ef74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ef78:
    // 0x29ef78: 0x3e00008  jr          $ra
label_29ef7c:
    if (ctx->pc == 0x29EF7Cu) {
        ctx->pc = 0x29EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF78u;
        // 0x29ef7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF80u;
        goto label_fallthrough_0x29ef78;
    }
    ctx->pc = 0x29EF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF78u;
        // 0x29ef7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29ef78:
    ctx->pc = 0x29EF80u;
}
