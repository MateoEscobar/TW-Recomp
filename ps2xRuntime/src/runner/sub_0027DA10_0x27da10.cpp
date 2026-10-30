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

// Function: sub_0027DA10
// Address: 0x27da10 - 0x27dc00
void sub_0027DA10_0x27da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DA10_0x27da10");
#endif

    switch (ctx->pc) {
        case 0x27da28u: goto label_27da28;
        case 0x27da30u: goto label_27da30;
        case 0x27da3cu: goto label_27da3c;
        case 0x27da50u: goto label_27da50;
        case 0x27da60u: goto label_27da60;
        case 0x27da78u: goto label_27da78;
        case 0x27dad8u: goto label_27dad8;
        case 0x27db18u: goto label_27db18;
        case 0x27db20u: goto label_27db20;
        case 0x27db30u: goto label_27db30;
        case 0x27db3cu: goto label_27db3c;
        case 0x27db4cu: goto label_27db4c;
        case 0x27db64u: goto label_27db64;
        case 0x27db6cu: goto label_27db6c;
        case 0x27db78u: goto label_27db78;
        case 0x27db80u: goto label_27db80;
        case 0x27db94u: goto label_27db94;
        case 0x27db9cu: goto label_27db9c;
        case 0x27dbc8u: goto label_27dbc8;
        case 0x27dbd0u: goto label_27dbd0;
        case 0x27dbe0u: goto label_27dbe0;
        default: break;
    }

    ctx->pc = 0x27da10u;

    // 0x27da10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27da14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27da14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27da18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27da18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27da1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27da20: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x27DA20u;
    SET_GPR_U32(ctx, 31, 0x27DA28u);
    ctx->pc = 0x27DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA20u;
    // 0x27da24: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x27DA20u, 0x27DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA28u;
label_27da28:
    // 0x27da28: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x27DA28u;
    SET_GPR_U32(ctx, 31, 0x27DA30u);
    ctx->pc = 0x27DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA28u;
    // 0x27da2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x27DA28u, 0x27DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA30u;
label_27da30:
    // 0x27da30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27da30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da34: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27DA34u;
    SET_GPR_U32(ctx, 31, 0x27DA3Cu);
    ctx->pc = 0x27DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA34u;
    // 0x27da38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27DA34u, 0x27DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA3Cu;
label_27da3c:
    // 0x27da3c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x27da3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x27da40: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x27DA40u;
    {
        const bool branch_taken_0x27da40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA40u;
        // 0x27da44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da40) {
            ctx->pc = 0x27DBE8u;
            goto label_27dbe8;
        }
    }
    ctx->pc = 0x27DA48u;
    // 0x27da48: 0xc089998  jal         func_226660
    ctx->pc = 0x27DA48u;
    SET_GPR_U32(ctx, 31, 0x27DA50u);
    ctx->pc = 0x27DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA48u;
    // 0x27da4c: 0x3c050280  lui         $a1, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)640 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27DA48u, 0x27DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA50u;
label_27da50:
    // 0x27da50: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x27DA50u;
    {
        const bool branch_taken_0x27da50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA50u;
        // 0x27da54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da50) {
            ctx->pc = 0x27DBECu;
            goto label_27dbec;
        }
    }
    ctx->pc = 0x27DA58u;
    // 0x27da58: 0xc0a03cc  jal         func_280F30
    ctx->pc = 0x27DA58u;
    SET_GPR_U32(ctx, 31, 0x27DA60u);
    ctx->pc = 0x27DA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA58u;
    // 0x27da5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F30u, 0x27DA58u, 0x27DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA60u;
label_27da60:
    // 0x27da60: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x27da60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x27da64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27da64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27da68: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DA68u;
    {
        const bool branch_taken_0x27da68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA68u;
        // 0x27da6c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da68) {
            ctx->pc = 0x27DA7Cu;
            goto label_27da7c;
        }
    }
    ctx->pc = 0x27DA70u;
    // 0x27da70: 0xc0a03e8  jal         func_280FA0
    ctx->pc = 0x27DA70u;
    SET_GPR_U32(ctx, 31, 0x27DA78u);
    ctx->pc = 0x27DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DA70u;
    // 0x27da74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FA0u, 0x27DA70u, 0x27DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DA78u;
label_27da78:
    // 0x27da78: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x27da78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_27da7c:
    // 0x27da7c: 0x862301be  lh          $v1, 0x1BE($s1)
    ctx->pc = 0x27da7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 446)));
    // 0x27da80: 0x2444e880  addiu       $a0, $v0, -0x1780
    ctx->pc = 0x27da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x27da84: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x27da84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x27da88: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27DA88u;
    {
        const bool branch_taken_0x27da88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA88u;
        // 0x27da8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da88) {
            ctx->pc = 0x27DAC0u;
            goto label_27dac0;
        }
    }
    ctx->pc = 0x27DA90u;
    // 0x27da90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27da90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27da94: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DA94u;
    {
        const bool branch_taken_0x27da94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DA94u;
        // 0x27da98: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da94) {
            ctx->pc = 0x27DAACu;
            goto label_27daac;
        }
    }
    ctx->pc = 0x27DA9Cu;
    // 0x27da9c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x27da9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27daa0: 0x862201c0  lh          $v0, 0x1C0($s1)
    ctx->pc = 0x27daa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x27daa4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DAA4u;
    {
        const bool branch_taken_0x27daa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAA4u;
        // 0x27daa8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27daa4) {
            ctx->pc = 0x27DABCu;
            goto label_27dabc;
        }
    }
    ctx->pc = 0x27DAACu;
label_27daac:
    // 0x27daac: 0x8e2301c0  lw          $v1, 0x1C0($s1)
    ctx->pc = 0x27daacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x27dab0: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x27dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x27dab4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27DAB4u;
    {
        const bool branch_taken_0x27dab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27dab4) {
            ctx->pc = 0x27DAC0u;
            goto label_27dac0;
        }
    }
    ctx->pc = 0x27DABCu;
label_27dabc:
    // 0x27dabc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27dac0:
    // 0x27dac0: 0x14a00045  bnez        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x27DAC0u;
    {
        const bool branch_taken_0x27dac0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x27dac0) {
            ctx->pc = 0x27DBD8u;
            goto label_27dbd8;
        }
    }
    ctx->pc = 0x27DAC8u;
    // 0x27dac8: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x27DAC8u;
    {
        const bool branch_taken_0x27dac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DAC8u;
        // 0x27dacc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dac8) {
            ctx->pc = 0x27DBA4u;
            goto label_27dba4;
        }
    }
    ctx->pc = 0x27DAD0u;
    // 0x27dad0: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x27DAD0u;
    SET_GPR_U32(ctx, 31, 0x27DAD8u);
    ctx->pc = 0x27DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DAD0u;
    // 0x27dad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x27DAD0u, 0x27DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DAD8u;
label_27dad8:
    // 0x27dad8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27dadc: 0x14430031  bne         $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x27DADCu;
    {
        const bool branch_taken_0x27dadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DADCu;
        // 0x27dae0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dadc) {
            ctx->pc = 0x27DBA4u;
            goto label_27dba4;
        }
    }
    ctx->pc = 0x27DAE4u;
    // 0x27dae4: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x27dae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27dae8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x27dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x27daec: 0x8ca300f4  lw          $v1, 0xF4($a1)
    ctx->pc = 0x27daecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x27daf0: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x27daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27daf4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x27daf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27daf8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DAF8u;
    {
        const bool branch_taken_0x27daf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27daf8) {
            ctx->pc = 0x27DB10u;
            goto label_27db10;
        }
    }
    ctx->pc = 0x27DB00u;
    // 0x27db00: 0x8ca200f8  lw          $v0, 0xF8($a1)
    ctx->pc = 0x27db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x27db04: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x27db04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27db08: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x27DB08u;
    {
        const bool branch_taken_0x27db08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db08) {
            ctx->pc = 0x27DB8Cu;
            goto label_27db8c;
        }
    }
    ctx->pc = 0x27DB10u;
label_27db10:
    // 0x27db10: 0xc09ed52  jal         func_27B548
    ctx->pc = 0x27DB10u;
    SET_GPR_U32(ctx, 31, 0x27DB18u);
    ctx->pc = 0x27DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB10u;
    // 0x27db14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B548u, 0x27DB10u, 0x27DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB18u;
label_27db18:
    // 0x27db18: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27DB18u;
    SET_GPR_U32(ctx, 31, 0x27DB20u);
    ctx->pc = 0x27DB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB18u;
    // 0x27db1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27DB18u, 0x27DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB20u;
label_27db20:
    // 0x27db20: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27DB20u;
    {
        const bool branch_taken_0x27db20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db20) {
            ctx->pc = 0x27DB8Cu;
            goto label_27db8c;
        }
    }
    ctx->pc = 0x27DB28u;
    // 0x27db28: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27DB28u;
    SET_GPR_U32(ctx, 31, 0x27DB30u);
    ctx->pc = 0x27DB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB28u;
    // 0x27db2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27DB28u, 0x27DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB30u;
label_27db30:
    // 0x27db30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27db30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db34: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x27DB34u;
    SET_GPR_U32(ctx, 31, 0x27DB3Cu);
    ctx->pc = 0x27DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB34u;
    // 0x27db38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x27DB34u, 0x27DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB3Cu;
label_27db3c:
    // 0x27db3c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27DB3Cu;
    {
        const bool branch_taken_0x27db3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27db3c) {
            ctx->pc = 0x27DB8Cu;
            goto label_27db8c;
        }
    }
    ctx->pc = 0x27DB44u;
    // 0x27db44: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27DB44u;
    SET_GPR_U32(ctx, 31, 0x27DB4Cu);
    ctx->pc = 0x27DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB44u;
    // 0x27db48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27DB44u, 0x27DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB4Cu;
label_27db4c:
    // 0x27db4c: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x27db4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x27db50: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x27db50u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x27db54: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x27DB54u;
    {
        const bool branch_taken_0x27db54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27db54) {
            ctx->pc = 0x27DBC8u;
            goto label_27dbc8;
        }
    }
    ctx->pc = 0x27DB5Cu;
    // 0x27db5c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27DB5Cu;
    SET_GPR_U32(ctx, 31, 0x27DB64u);
    ctx->pc = 0x27DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB5Cu;
    // 0x27db60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27DB5Cu, 0x27DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB64u;
label_27db64:
    // 0x27db64: 0xc087502  jal         func_21D408
    ctx->pc = 0x27DB64u;
    SET_GPR_U32(ctx, 31, 0x27DB6Cu);
    ctx->pc = 0x27DB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB64u;
    // 0x27db68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x27DB64u, 0x27DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB6Cu;
label_27db6c:
    // 0x27db6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27db6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db70: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27DB70u;
    SET_GPR_U32(ctx, 31, 0x27DB78u);
    ctx->pc = 0x27DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB70u;
    // 0x27db74: 0x8c50020c  lw          $s0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27DB70u, 0x27DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB78u;
label_27db78:
    // 0x27db78: 0xc087502  jal         func_21D408
    ctx->pc = 0x27DB78u;
    SET_GPR_U32(ctx, 31, 0x27DB80u);
    ctx->pc = 0x27DB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB78u;
    // 0x27db7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x27DB78u, 0x27DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB80u;
label_27db80:
    // 0x27db80: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x27db80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x27db84: 0x16030010  bne         $s0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x27DB84u;
    {
        const bool branch_taken_0x27db84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x27db84) {
            ctx->pc = 0x27DBC8u;
            goto label_27dbc8;
        }
    }
    ctx->pc = 0x27DB8Cu;
label_27db8c:
    // 0x27db8c: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x27DB8Cu;
    SET_GPR_U32(ctx, 31, 0x27DB94u);
    ctx->pc = 0x27DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB8Cu;
    // 0x27db90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x27DB8Cu, 0x27DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB94u;
label_27db94:
    // 0x27db94: 0xc089ecc  jal         func_227B30
    ctx->pc = 0x27DB94u;
    SET_GPR_U32(ctx, 31, 0x27DB9Cu);
    ctx->pc = 0x27DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DB94u;
    // 0x27db98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B30u, 0x27DB94u, 0x27DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DB9Cu;
label_27db9c:
    // 0x27db9c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27DB9Cu;
    {
        const bool branch_taken_0x27db9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB9Cu;
        // 0x27dba0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db9c) {
            ctx->pc = 0x27DBECu;
            goto label_27dbec;
        }
    }
    ctx->pc = 0x27DBA4u;
label_27dba4:
    // 0x27dba4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x27dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x27dba8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x27dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x27dbac: 0x8c6500f4  lw          $a1, 0xF4($v1)
    ctx->pc = 0x27dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x27dbb0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x27dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x27dbb4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x27dbb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x27dbb8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27DBB8u;
    {
        const bool branch_taken_0x27dbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBB8u;
        // 0x27dbbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbb8) {
            ctx->pc = 0x27DBECu;
            goto label_27dbec;
        }
    }
    ctx->pc = 0x27DBC0u;
    // 0x27dbc0: 0xc09ed52  jal         func_27B548
    ctx->pc = 0x27DBC0u;
    SET_GPR_U32(ctx, 31, 0x27DBC8u);
    ctx->pc = 0x27DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DBC0u;
    // 0x27dbc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B548u, 0x27DBC0u, 0x27DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBC8u;
label_27dbc8:
    // 0x27dbc8: 0xc09f700  jal         func_27DC00
    ctx->pc = 0x27DBC8u;
    SET_GPR_U32(ctx, 31, 0x27DBD0u);
    ctx->pc = 0x27DBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DBC8u;
    // 0x27dbcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DC00u, 0x27DBC8u, 0x27DBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBD0u;
label_27dbd0:
    // 0x27dbd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27DBD0u;
    {
        const bool branch_taken_0x27dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBD0u;
        // 0x27dbd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbd0) {
            ctx->pc = 0x27DBF0u;
            goto label_27dbf0;
        }
    }
    ctx->pc = 0x27DBD8u;
label_27dbd8:
    // 0x27dbd8: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x27DBD8u;
    SET_GPR_U32(ctx, 31, 0x27DBE0u);
    ctx->pc = 0x27DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DBD8u;
    // 0x27dbdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x27DBD8u, 0x27DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBE0u;
label_27dbe0:
    // 0x27dbe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27DBE0u;
    {
        const bool branch_taken_0x27dbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBE0u;
        // 0x27dbe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dbe0) {
            ctx->pc = 0x27DBECu;
            goto label_27dbec;
        }
    }
    ctx->pc = 0x27DBE8u;
label_27dbe8:
    // 0x27dbe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27dbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27dbec:
    // 0x27dbec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27dbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27dbf0:
    // 0x27dbf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27dbf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dbf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27dbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x27DBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DBF8u;
        // 0x27dbfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DC00u;
}
