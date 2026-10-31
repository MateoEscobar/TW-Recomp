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

// Function: sub_00154F28
// Address: 0x154f28 - 0x155180
void sub_00154F28_0x154f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154F28_0x154f28");
#endif

    switch (ctx->pc) {
        case 0x154f28u: goto label_154f28;
        case 0x154f2cu: goto label_154f2c;
        case 0x154f30u: goto label_154f30;
        case 0x154f34u: goto label_154f34;
        case 0x154f38u: goto label_154f38;
        case 0x154f3cu: goto label_154f3c;
        case 0x154f40u: goto label_154f40;
        case 0x154f44u: goto label_154f44;
        case 0x154f48u: goto label_154f48;
        case 0x154f4cu: goto label_154f4c;
        case 0x154f50u: goto label_154f50;
        case 0x154f54u: goto label_154f54;
        case 0x154f58u: goto label_154f58;
        case 0x154f5cu: goto label_154f5c;
        case 0x154f60u: goto label_154f60;
        case 0x154f64u: goto label_154f64;
        case 0x154f68u: goto label_154f68;
        case 0x154f6cu: goto label_154f6c;
        case 0x154f70u: goto label_154f70;
        case 0x154f74u: goto label_154f74;
        case 0x154f78u: goto label_154f78;
        case 0x154f7cu: goto label_154f7c;
        case 0x154f80u: goto label_154f80;
        case 0x154f84u: goto label_154f84;
        case 0x154f88u: goto label_154f88;
        case 0x154f8cu: goto label_154f8c;
        case 0x154f90u: goto label_154f90;
        case 0x154f94u: goto label_154f94;
        case 0x154f98u: goto label_154f98;
        case 0x154f9cu: goto label_154f9c;
        case 0x154fa0u: goto label_154fa0;
        case 0x154fa4u: goto label_154fa4;
        case 0x154fa8u: goto label_154fa8;
        case 0x154facu: goto label_154fac;
        case 0x154fb0u: goto label_154fb0;
        case 0x154fb4u: goto label_154fb4;
        case 0x154fb8u: goto label_154fb8;
        case 0x154fbcu: goto label_154fbc;
        case 0x154fc0u: goto label_154fc0;
        case 0x154fc4u: goto label_154fc4;
        case 0x154fc8u: goto label_154fc8;
        case 0x154fccu: goto label_154fcc;
        case 0x154fd0u: goto label_154fd0;
        case 0x154fd4u: goto label_154fd4;
        case 0x154fd8u: goto label_154fd8;
        case 0x154fdcu: goto label_154fdc;
        case 0x154fe0u: goto label_154fe0;
        case 0x154fe4u: goto label_154fe4;
        case 0x154fe8u: goto label_154fe8;
        case 0x154fecu: goto label_154fec;
        case 0x154ff0u: goto label_154ff0;
        case 0x154ff4u: goto label_154ff4;
        case 0x154ff8u: goto label_154ff8;
        case 0x154ffcu: goto label_154ffc;
        case 0x155000u: goto label_155000;
        case 0x155004u: goto label_155004;
        case 0x155008u: goto label_155008;
        case 0x15500cu: goto label_15500c;
        case 0x155010u: goto label_155010;
        case 0x155014u: goto label_155014;
        case 0x155018u: goto label_155018;
        case 0x15501cu: goto label_15501c;
        case 0x155020u: goto label_155020;
        case 0x155024u: goto label_155024;
        case 0x155028u: goto label_155028;
        case 0x15502cu: goto label_15502c;
        case 0x155030u: goto label_155030;
        case 0x155034u: goto label_155034;
        case 0x155038u: goto label_155038;
        case 0x15503cu: goto label_15503c;
        case 0x155040u: goto label_155040;
        case 0x155044u: goto label_155044;
        case 0x155048u: goto label_155048;
        case 0x15504cu: goto label_15504c;
        case 0x155050u: goto label_155050;
        case 0x155054u: goto label_155054;
        case 0x155058u: goto label_155058;
        case 0x15505cu: goto label_15505c;
        case 0x155060u: goto label_155060;
        case 0x155064u: goto label_155064;
        case 0x155068u: goto label_155068;
        case 0x15506cu: goto label_15506c;
        case 0x155070u: goto label_155070;
        case 0x155074u: goto label_155074;
        case 0x155078u: goto label_155078;
        case 0x15507cu: goto label_15507c;
        case 0x155080u: goto label_155080;
        case 0x155084u: goto label_155084;
        case 0x155088u: goto label_155088;
        case 0x15508cu: goto label_15508c;
        case 0x155090u: goto label_155090;
        case 0x155094u: goto label_155094;
        case 0x155098u: goto label_155098;
        case 0x15509cu: goto label_15509c;
        case 0x1550a0u: goto label_1550a0;
        case 0x1550a4u: goto label_1550a4;
        case 0x1550a8u: goto label_1550a8;
        case 0x1550acu: goto label_1550ac;
        case 0x1550b0u: goto label_1550b0;
        case 0x1550b4u: goto label_1550b4;
        case 0x1550b8u: goto label_1550b8;
        case 0x1550bcu: goto label_1550bc;
        case 0x1550c0u: goto label_1550c0;
        case 0x1550c4u: goto label_1550c4;
        case 0x1550c8u: goto label_1550c8;
        case 0x1550ccu: goto label_1550cc;
        case 0x1550d0u: goto label_1550d0;
        case 0x1550d4u: goto label_1550d4;
        case 0x1550d8u: goto label_1550d8;
        case 0x1550dcu: goto label_1550dc;
        case 0x1550e0u: goto label_1550e0;
        case 0x1550e4u: goto label_1550e4;
        case 0x1550e8u: goto label_1550e8;
        case 0x1550ecu: goto label_1550ec;
        case 0x1550f0u: goto label_1550f0;
        case 0x1550f4u: goto label_1550f4;
        case 0x1550f8u: goto label_1550f8;
        case 0x1550fcu: goto label_1550fc;
        case 0x155100u: goto label_155100;
        case 0x155104u: goto label_155104;
        case 0x155108u: goto label_155108;
        case 0x15510cu: goto label_15510c;
        case 0x155110u: goto label_155110;
        case 0x155114u: goto label_155114;
        case 0x155118u: goto label_155118;
        case 0x15511cu: goto label_15511c;
        case 0x155120u: goto label_155120;
        case 0x155124u: goto label_155124;
        case 0x155128u: goto label_155128;
        case 0x15512cu: goto label_15512c;
        case 0x155130u: goto label_155130;
        case 0x155134u: goto label_155134;
        case 0x155138u: goto label_155138;
        case 0x15513cu: goto label_15513c;
        case 0x155140u: goto label_155140;
        case 0x155144u: goto label_155144;
        case 0x155148u: goto label_155148;
        case 0x15514cu: goto label_15514c;
        case 0x155150u: goto label_155150;
        case 0x155154u: goto label_155154;
        case 0x155158u: goto label_155158;
        case 0x15515cu: goto label_15515c;
        case 0x155160u: goto label_155160;
        case 0x155164u: goto label_155164;
        case 0x155168u: goto label_155168;
        case 0x15516cu: goto label_15516c;
        case 0x155170u: goto label_155170;
        case 0x155174u: goto label_155174;
        case 0x155178u: goto label_155178;
        case 0x15517cu: goto label_15517c;
        default: break;
    }

    ctx->pc = 0x154f28u;

label_154f28:
    // 0x154f28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_154f2c:
    // 0x154f2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x154f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_154f30:
    // 0x154f30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_154f34:
    // 0x154f34: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x154f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_154f38:
    // 0x154f38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x154f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_154f3c:
    // 0x154f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_154f40:
    // 0x154f40: 0xc107444  jal         func_41D110
label_154f44:
    if (ctx->pc == 0x154F44u) {
        ctx->pc = 0x154F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F40u;
        // 0x154f44: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F48u;
        goto label_154f48;
    }
    ctx->pc = 0x154F40u;
    SET_GPR_U32(ctx, 31, 0x154F48u);
    ctx->pc = 0x154F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F40u;
    // 0x154f44: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x154F40u, 0x154F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F48u;
label_154f48:
    // 0x154f48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_154f4c:
    if (ctx->pc == 0x154F4Cu) {
        ctx->pc = 0x154F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F48u;
        // 0x154f4c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F50u;
        goto label_154f50;
    }
    ctx->pc = 0x154F48u;
    {
        const bool branch_taken_0x154f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F48u;
        // 0x154f4c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f48) {
            ctx->pc = 0x154F58u;
            goto label_154f58;
        }
    }
    ctx->pc = 0x154F50u;
label_154f50:
    // 0x154f50: 0x10000003  b           . + 4 + (0x3 << 2)
label_154f54:
    if (ctx->pc == 0x154F54u) {
        ctx->pc = 0x154F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F50u;
        // 0x154f54: 0x8c50ec34  lw          $s0, -0x13CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F58u;
        goto label_154f58;
    }
    ctx->pc = 0x154F50u;
    {
        const bool branch_taken_0x154f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F50u;
        // 0x154f54: 0x8c50ec34  lw          $s0, -0x13CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f50) {
            ctx->pc = 0x154F60u;
            goto label_154f60;
        }
    }
    ctx->pc = 0x154F58u;
label_154f58:
    // 0x154f58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x154f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_154f5c:
    // 0x154f5c: 0x8c50eddc  lw          $s0, -0x1224($v0)
    ctx->pc = 0x154f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_154f60:
    // 0x154f60: 0x8e0220ac  lw          $v0, 0x20AC($s0)
    ctx->pc = 0x154f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8364)));
label_154f64:
    // 0x154f64: 0x54400082  bnel        $v0, $zero, . + 4 + (0x82 << 2)
label_154f68:
    if (ctx->pc == 0x154F68u) {
        ctx->pc = 0x154F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F64u;
        // 0x154f68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F6Cu;
        goto label_154f6c;
    }
    ctx->pc = 0x154F64u;
    {
        const bool branch_taken_0x154f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154f64) {
            ctx->pc = 0x154F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154F64u;
            // 0x154f68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155170u;
            goto label_155170;
        }
    }
    ctx->pc = 0x154F6Cu;
label_154f6c:
    // 0x154f6c: 0xc0579d2  jal         func_15E748
label_154f70:
    if (ctx->pc == 0x154F70u) {
        ctx->pc = 0x154F74u;
        goto label_154f74;
    }
    ctx->pc = 0x154F6Cu;
    SET_GPR_U32(ctx, 31, 0x154F74u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x154F6Cu, 0x154F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F74u;
label_154f74:
    // 0x154f74: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x154f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_154f78:
    // 0x154f78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154f7c:
    if (ctx->pc == 0x154F7Cu) {
        ctx->pc = 0x154F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F78u;
        // 0x154f7c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F80u;
        goto label_154f80;
    }
    ctx->pc = 0x154F78u;
    {
        const bool branch_taken_0x154f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F78u;
        // 0x154f7c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f78) {
            ctx->pc = 0x154F90u;
            goto label_154f90;
        }
    }
    ctx->pc = 0x154F80u;
label_154f80:
    // 0x154f80: 0xc05797a  jal         func_15E5E8
label_154f84:
    if (ctx->pc == 0x154F84u) {
        ctx->pc = 0x154F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F80u;
        // 0x154f84: 0x24846550  addiu       $a0, $a0, 0x6550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F88u;
        goto label_154f88;
    }
    ctx->pc = 0x154F80u;
    SET_GPR_U32(ctx, 31, 0x154F88u);
    ctx->pc = 0x154F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F80u;
    // 0x154f84: 0x24846550  addiu       $a0, $a0, 0x6550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x154F80u, 0x154F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F88u;
label_154f88:
    // 0x154f88: 0x10000079  b           . + 4 + (0x79 << 2)
label_154f8c:
    if (ctx->pc == 0x154F8Cu) {
        ctx->pc = 0x154F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F88u;
        // 0x154f8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154F90u;
        goto label_154f90;
    }
    ctx->pc = 0x154F88u;
    {
        const bool branch_taken_0x154f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F88u;
        // 0x154f8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f88) {
            ctx->pc = 0x155170u;
            goto label_155170;
        }
    }
    ctx->pc = 0x154F90u;
label_154f90:
    // 0x154f90: 0xc057994  jal         func_15E650
label_154f94:
    if (ctx->pc == 0x154F94u) {
        ctx->pc = 0x154F98u;
        goto label_154f98;
    }
    ctx->pc = 0x154F90u;
    SET_GPR_U32(ctx, 31, 0x154F98u);
    ctx->pc = 0x15E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E650u, 0x154F90u, 0x154F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F98u;
label_154f98:
    // 0x154f98: 0x8e0320b0  lw          $v1, 0x20B0($s0)
    ctx->pc = 0x154f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8368)));
label_154f9c:
    // 0x154f9c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_154fa0:
    if (ctx->pc == 0x154FA0u) {
        ctx->pc = 0x154FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F9Cu;
        // 0x154fa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FA4u;
        goto label_154fa4;
    }
    ctx->pc = 0x154F9Cu;
    {
        const bool branch_taken_0x154f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F9Cu;
        // 0x154fa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f9c) {
            ctx->pc = 0x154FB4u;
            goto label_154fb4;
        }
    }
    ctx->pc = 0x154FA4u;
label_154fa4:
    // 0x154fa4: 0xc0554c2  jal         func_155308
label_154fa8:
    if (ctx->pc == 0x154FA8u) {
        ctx->pc = 0x154FACu;
        goto label_154fac;
    }
    ctx->pc = 0x154FA4u;
    SET_GPR_U32(ctx, 31, 0x154FACu);
    ctx->pc = 0x155308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155308u, 0x154FA4u, 0x154FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FACu;
label_154fac:
    // 0x154fac: 0xae0020b0  sw          $zero, 0x20B0($s0)
    ctx->pc = 0x154facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8368), GPR_U32(ctx, 0));
label_154fb0:
    // 0x154fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154fb4:
    // 0x154fb4: 0x8e031b70  lw          $v1, 0x1B70($s0)
    ctx->pc = 0x154fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7024)));
label_154fb8:
    // 0x154fb8: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
label_154fbc:
    if (ctx->pc == 0x154FBCu) {
        ctx->pc = 0x154FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FB8u;
        // 0x154fbc: 0xae0220ac  sw          $v0, 0x20AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FC0u;
        goto label_154fc0;
    }
    ctx->pc = 0x154FB8u;
    {
        const bool branch_taken_0x154fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FB8u;
        // 0x154fbc: 0xae0220ac  sw          $v0, 0x20AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fb8) {
            ctx->pc = 0x155120u;
            goto label_155120;
        }
    }
    ctx->pc = 0x154FC0u;
label_154fc0:
    // 0x154fc0: 0x8e021b9c  lw          $v0, 0x1B9C($s0)
    ctx->pc = 0x154fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7068)));
label_154fc4:
    // 0x154fc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_154fc8:
    if (ctx->pc == 0x154FC8u) {
        ctx->pc = 0x154FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FC4u;
        // 0x154fc8: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FCCu;
        goto label_154fcc;
    }
    ctx->pc = 0x154FC4u;
    {
        const bool branch_taken_0x154fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FC4u;
        // 0x154fc8: 0x8e22489c  lw          $v0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fc4) {
            ctx->pc = 0x154FE0u;
            goto label_154fe0;
        }
    }
    ctx->pc = 0x154FCCu;
label_154fcc:
    // 0x154fcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x154fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_154fd0:
    // 0x154fd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x154fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154fd4:
    // 0x154fd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x154fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154fd8:
    // 0x154fd8: 0x10000048  b           . + 4 + (0x48 << 2)
label_154fdc:
    if (ctx->pc == 0x154FDCu) {
        ctx->pc = 0x154FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FD8u;
        // 0x154fdc: 0xac43014c  sw          $v1, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FE0u;
        goto label_154fe0;
    }
    ctx->pc = 0x154FD8u;
    {
        const bool branch_taken_0x154fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FD8u;
        // 0x154fdc: 0xac43014c  sw          $v1, 0x14C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fd8) {
            ctx->pc = 0x1550FCu;
            goto label_1550fc;
        }
    }
    ctx->pc = 0x154FE0u;
label_154fe0:
    // 0x154fe0: 0x8e021b94  lw          $v0, 0x1B94($s0)
    ctx->pc = 0x154fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7060)));
label_154fe4:
    // 0x154fe4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_154fe8:
    if (ctx->pc == 0x154FE8u) {
        ctx->pc = 0x154FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FE4u;
        // 0x154fe8: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154FECu;
        goto label_154fec;
    }
    ctx->pc = 0x154FE4u;
    {
        const bool branch_taken_0x154fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FE4u;
        // 0x154fe8: 0x8e23489c  lw          $v1, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fe4) {
            ctx->pc = 0x155068u;
            goto label_155068;
        }
    }
    ctx->pc = 0x154FECu;
label_154fec:
    // 0x154fec: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x154fecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_154ff0:
    // 0x154ff0: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x154ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_154ff4:
    // 0x154ff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x154ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_154ff8:
    // 0x154ff8: 0xac62014c  sw          $v0, 0x14C($v1)
    ctx->pc = 0x154ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 2));
label_154ffc:
    // 0x154ffc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x154ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_155000:
    // 0x155000: 0x24a5e798  addiu       $a1, $a1, -0x1868
    ctx->pc = 0x155000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961048));
label_155004:
    // 0x155004: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x155004u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_155008:
    // 0x155008: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x155008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15500c:
    // 0x15500c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15500cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_155010:
    // 0x155010: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x155010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_155014:
    // 0x155014: 0x40f809  jalr        $v0
label_155018:
    if (ctx->pc == 0x155018u) {
        ctx->pc = 0x155018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155014u;
        // 0x155018: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15501Cu;
        goto label_15501c;
    }
    ctx->pc = 0x155014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15501Cu);
        ctx->pc = 0x155018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155014u;
        // 0x155018: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155014u, 0x15501Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15501Cu;
label_15501c:
    // 0x15501c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x15501cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_155020:
    // 0x155020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155024:
    // 0x155024: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x155024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_155028:
    // 0x155028: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x155028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_15502c:
    // 0x15502c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x15502cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_155030:
    // 0x155030: 0x60f809  jalr        $v1
label_155034:
    if (ctx->pc == 0x155034u) {
        ctx->pc = 0x155034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155030u;
        // 0x155034: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155038u;
        goto label_155038;
    }
    ctx->pc = 0x155030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155038u);
        ctx->pc = 0x155034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155030u;
        // 0x155034: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155030u, 0x155038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155038u;
label_155038:
    // 0x155038: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x155038u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15503c:
    // 0x15503c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15503cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155040:
    // 0x155040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155044:
    // 0x155044: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x155044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_155048:
    // 0x155048: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x155048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_15504c:
    // 0x15504c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x15504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_155050:
    // 0x155050: 0x60f809  jalr        $v1
label_155054:
    if (ctx->pc == 0x155054u) {
        ctx->pc = 0x155054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155050u;
        // 0x155054: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155058u;
        goto label_155058;
    }
    ctx->pc = 0x155050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x155058u);
        ctx->pc = 0x155054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155050u;
        // 0x155054: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155050u, 0x155058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155058u;
label_155058:
    // 0x155058: 0xc043eea  jal         func_10FBA8
label_15505c:
    if (ctx->pc == 0x15505Cu) {
        ctx->pc = 0x15505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155058u;
        // 0x15505c: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155060u;
        goto label_155060;
    }
    ctx->pc = 0x155058u;
    SET_GPR_U32(ctx, 31, 0x155060u);
    ctx->pc = 0x15505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155058u;
    // 0x15505c: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FBA8u, 0x155058u, 0x155060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155060u;
label_155060:
    // 0x155060: 0x1000002b  b           . + 4 + (0x2B << 2)
label_155064:
    if (ctx->pc == 0x155064u) {
        ctx->pc = 0x155068u;
        goto label_155068;
    }
    ctx->pc = 0x155060u;
    {
        const bool branch_taken_0x155060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155060) {
            ctx->pc = 0x155110u;
            goto label_155110;
        }
    }
    ctx->pc = 0x155068u;
label_155068:
    // 0x155068: 0x8e021b98  lw          $v0, 0x1B98($s0)
    ctx->pc = 0x155068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7064)));
label_15506c:
    // 0x15506c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_155070:
    if (ctx->pc == 0x155070u) {
        ctx->pc = 0x155070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15506Cu;
        // 0x155070: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155074u;
        goto label_155074;
    }
    ctx->pc = 0x15506Cu;
    {
        const bool branch_taken_0x15506c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15506Cu;
        // 0x155070: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15506c) {
            ctx->pc = 0x1550F4u;
            goto label_1550f4;
        }
    }
    ctx->pc = 0x155074u;
label_155074:
    // 0x155074: 0xc07f86a  jal         func_1FE1A8
label_155078:
    if (ctx->pc == 0x155078u) {
        ctx->pc = 0x155078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155074u;
        // 0x155078: 0xac62014c  sw          $v0, 0x14C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15507Cu;
        goto label_15507c;
    }
    ctx->pc = 0x155074u;
    SET_GPR_U32(ctx, 31, 0x15507Cu);
    ctx->pc = 0x155078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155074u;
    // 0x155078: 0xac62014c  sw          $v0, 0x14C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1A8u, 0x155074u, 0x15507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15507Cu;
label_15507c:
    // 0x15507c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_155080:
    if (ctx->pc == 0x155080u) {
        ctx->pc = 0x155080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15507Cu;
        // 0x155080: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155084u;
        goto label_155084;
    }
    ctx->pc = 0x15507Cu;
    {
        const bool branch_taken_0x15507c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15507Cu;
        // 0x155080: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15507c) {
            ctx->pc = 0x1550ACu;
            goto label_1550ac;
        }
    }
    ctx->pc = 0x155084u;
label_155084:
    // 0x155084: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x155084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_155088:
    // 0x155088: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x155088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15508c:
    // 0x15508c: 0x24a5e7a8  addiu       $a1, $a1, -0x1858
    ctx->pc = 0x15508cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961064));
label_155090:
    // 0x155090: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x155090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_155094:
    // 0x155094: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x155094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_155098:
    // 0x155098: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x155098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15509c:
    // 0x15509c: 0x40f809  jalr        $v0
label_1550a0:
    if (ctx->pc == 0x1550A0u) {
        ctx->pc = 0x1550A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15509Cu;
        // 0x1550a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550A4u;
        goto label_1550a4;
    }
    ctx->pc = 0x15509Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1550A4u);
        ctx->pc = 0x1550A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15509Cu;
        // 0x1550a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15509Cu, 0x1550A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1550A4u;
label_1550a4:
    // 0x1550a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1550a8:
    if (ctx->pc == 0x1550A8u) {
        ctx->pc = 0x1550A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550A4u;
        // 0x1550a8: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550ACu;
        goto label_1550ac;
    }
    ctx->pc = 0x1550A4u;
    {
        const bool branch_taken_0x1550a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550A4u;
        // 0x1550a8: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550a4) {
            ctx->pc = 0x1550D0u;
            goto label_1550d0;
        }
    }
    ctx->pc = 0x1550ACu;
label_1550ac:
    // 0x1550ac: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1550acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1550b0:
    // 0x1550b0: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1550b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1550b4:
    // 0x1550b4: 0x24a5e7c0  addiu       $a1, $a1, -0x1840
    ctx->pc = 0x1550b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961088));
label_1550b8:
    // 0x1550b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1550b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1550bc:
    // 0x1550bc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1550bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1550c0:
    // 0x1550c0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1550c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1550c4:
    // 0x1550c4: 0x40f809  jalr        $v0
label_1550c8:
    if (ctx->pc == 0x1550C8u) {
        ctx->pc = 0x1550C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550C4u;
        // 0x1550c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550CCu;
        goto label_1550cc;
    }
    ctx->pc = 0x1550C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1550CCu);
        ctx->pc = 0x1550C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550C4u;
        // 0x1550c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1550C4u, 0x1550CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1550CCu;
label_1550cc:
    // 0x1550cc: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x1550ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1550d0:
    // 0x1550d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1550d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1550d4:
    // 0x1550d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1550d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1550d8:
    // 0x1550d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1550d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1550dc:
    // 0x1550dc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1550dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_1550e0:
    // 0x1550e0: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x1550e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_1550e4:
    // 0x1550e4: 0x60f809  jalr        $v1
label_1550e8:
    if (ctx->pc == 0x1550E8u) {
        ctx->pc = 0x1550E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550E4u;
        // 0x1550e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550ECu;
        goto label_1550ec;
    }
    ctx->pc = 0x1550E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1550ECu);
        ctx->pc = 0x1550E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550E4u;
        // 0x1550e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1550E4u, 0x1550ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1550ECu;
label_1550ec:
    // 0x1550ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_1550f0:
    if (ctx->pc == 0x1550F0u) {
        ctx->pc = 0x1550F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550ECu;
        // 0x1550f0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1550F4u;
        goto label_1550f4;
    }
    ctx->pc = 0x1550ECu;
    {
        const bool branch_taken_0x1550ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550ECu;
        // 0x1550f0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550ec) {
            ctx->pc = 0x155110u;
            goto label_155110;
        }
    }
    ctx->pc = 0x1550F4u;
label_1550f4:
    // 0x1550f4: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x1550f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_1550f8:
    // 0x1550f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1550f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1550fc:
    // 0x1550fc: 0xc1073bc  jal         func_41CEF0
label_155100:
    if (ctx->pc == 0x155100u) {
        ctx->pc = 0x155100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550FCu;
        // 0x155100: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155104u;
        goto label_155104;
    }
    ctx->pc = 0x1550FCu;
    SET_GPR_U32(ctx, 31, 0x155104u);
    ctx->pc = 0x155100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1550FCu;
    // 0x155100: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x1550FCu, 0x155104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155104u;
label_155104:
    // 0x155104: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x155104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_155108:
    // 0x155108: 0xc05835e  jal         func_160D78
label_15510c:
    if (ctx->pc == 0x15510Cu) {
        ctx->pc = 0x15510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155108u;
        // 0x15510c: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155110u;
        goto label_155110;
    }
    ctx->pc = 0x155108u;
    SET_GPR_U32(ctx, 31, 0x155110u);
    ctx->pc = 0x15510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155108u;
    // 0x15510c: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D78u, 0x155108u, 0x155110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155110u;
label_155110:
    // 0x155110: 0xc043eea  jal         func_10FBA8
label_155114:
    if (ctx->pc == 0x155114u) {
        ctx->pc = 0x155114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155110u;
        // 0x155114: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155118u;
        goto label_155118;
    }
    ctx->pc = 0x155110u;
    SET_GPR_U32(ctx, 31, 0x155118u);
    ctx->pc = 0x155114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155110u;
    // 0x155114: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FBA8u, 0x155110u, 0x155118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155118u;
label_155118:
    // 0x155118: 0x10000015  b           . + 4 + (0x15 << 2)
label_15511c:
    if (ctx->pc == 0x15511Cu) {
        ctx->pc = 0x15511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155118u;
        // 0x15511c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155120u;
        goto label_155120;
    }
    ctx->pc = 0x155118u;
    {
        const bool branch_taken_0x155118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155118u;
        // 0x15511c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155118) {
            ctx->pc = 0x155170u;
            goto label_155170;
        }
    }
    ctx->pc = 0x155120u;
label_155120:
    // 0x155120: 0x8e021b74  lw          $v0, 0x1B74($s0)
    ctx->pc = 0x155120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7028)));
label_155124:
    // 0x155124: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_155128:
    if (ctx->pc == 0x155128u) {
        ctx->pc = 0x155128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155124u;
        // 0x155128: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15512Cu;
        goto label_15512c;
    }
    ctx->pc = 0x155124u;
    {
        const bool branch_taken_0x155124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155124u;
        // 0x155128: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155124) {
            ctx->pc = 0x155148u;
            goto label_155148;
        }
    }
    ctx->pc = 0x15512Cu;
label_15512c:
    // 0x15512c: 0xc1073bc  jal         func_41CEF0
label_155130:
    if (ctx->pc == 0x155130u) {
        ctx->pc = 0x155130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15512Cu;
        // 0x155130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155134u;
        goto label_155134;
    }
    ctx->pc = 0x15512Cu;
    SET_GPR_U32(ctx, 31, 0x155134u);
    ctx->pc = 0x155130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15512Cu;
    // 0x155130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x15512Cu, 0x155134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155134u;
label_155134:
    // 0x155134: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x155134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_155138:
    // 0x155138: 0xc05835e  jal         func_160D78
label_15513c:
    if (ctx->pc == 0x15513Cu) {
        ctx->pc = 0x15513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155138u;
        // 0x15513c: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155140u;
        goto label_155140;
    }
    ctx->pc = 0x155138u;
    SET_GPR_U32(ctx, 31, 0x155140u);
    ctx->pc = 0x15513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155138u;
    // 0x15513c: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D78u, 0x155138u, 0x155140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155140u;
label_155140:
    // 0x155140: 0x1000000b  b           . + 4 + (0xB << 2)
label_155144:
    if (ctx->pc == 0x155144u) {
        ctx->pc = 0x155144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155140u;
        // 0x155144: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155148u;
        goto label_155148;
    }
    ctx->pc = 0x155140u;
    {
        const bool branch_taken_0x155140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155140u;
        // 0x155144: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155140) {
            ctx->pc = 0x155170u;
            goto label_155170;
        }
    }
    ctx->pc = 0x155148u;
label_155148:
    // 0x155148: 0x8e021b78  lw          $v0, 0x1B78($s0)
    ctx->pc = 0x155148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7032)));
label_15514c:
    // 0x15514c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_155150:
    if (ctx->pc == 0x155150u) {
        ctx->pc = 0x155150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15514Cu;
        // 0x155150: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155154u;
        goto label_155154;
    }
    ctx->pc = 0x15514Cu;
    {
        const bool branch_taken_0x15514c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15514Cu;
        // 0x155150: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15514c) {
            ctx->pc = 0x155170u;
            goto label_155170;
        }
    }
    ctx->pc = 0x155154u;
label_155154:
    // 0x155154: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x155154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_155158:
    // 0x155158: 0xc1073bc  jal         func_41CEF0
label_15515c:
    if (ctx->pc == 0x15515Cu) {
        ctx->pc = 0x15515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155158u;
        // 0x15515c: 0x8485033a  lh          $a1, 0x33A($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 826)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155160u;
        goto label_155160;
    }
    ctx->pc = 0x155158u;
    SET_GPR_U32(ctx, 31, 0x155160u);
    ctx->pc = 0x15515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155158u;
    // 0x15515c: 0x8485033a  lh          $a1, 0x33A($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 826)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x155158u, 0x155160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155160u;
label_155160:
    // 0x155160: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x155160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_155164:
    // 0x155164: 0xc05835e  jal         func_160D78
label_155168:
    if (ctx->pc == 0x155168u) {
        ctx->pc = 0x155168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155164u;
        // 0x155168: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15516Cu;
        goto label_15516c;
    }
    ctx->pc = 0x155164u;
    SET_GPR_U32(ctx, 31, 0x15516Cu);
    ctx->pc = 0x155168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155164u;
    // 0x155168: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D78u, 0x155164u, 0x15516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15516Cu;
label_15516c:
    // 0x15516c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15516cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_155170:
    // 0x155170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155174:
    // 0x155174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155178:
    // 0x155178: 0x3e00008  jr          $ra
label_15517c:
    if (ctx->pc == 0x15517Cu) {
        ctx->pc = 0x15517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155178u;
        // 0x15517c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155180u;
        goto label_fallthrough_0x155178;
    }
    ctx->pc = 0x155178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155178u;
        // 0x15517c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x155178:
    ctx->pc = 0x155180u;
}
