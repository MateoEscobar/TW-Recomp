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

// Function: sub_00306EC0
// Address: 0x306ec0 - 0x307038
void sub_00306EC0_0x306ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306EC0_0x306ec0");
#endif

    switch (ctx->pc) {
        case 0x306ec0u: goto label_306ec0;
        case 0x306ec4u: goto label_306ec4;
        case 0x306ec8u: goto label_306ec8;
        case 0x306eccu: goto label_306ecc;
        case 0x306ed0u: goto label_306ed0;
        case 0x306ed4u: goto label_306ed4;
        case 0x306ed8u: goto label_306ed8;
        case 0x306edcu: goto label_306edc;
        case 0x306ee0u: goto label_306ee0;
        case 0x306ee4u: goto label_306ee4;
        case 0x306ee8u: goto label_306ee8;
        case 0x306eecu: goto label_306eec;
        case 0x306ef0u: goto label_306ef0;
        case 0x306ef4u: goto label_306ef4;
        case 0x306ef8u: goto label_306ef8;
        case 0x306efcu: goto label_306efc;
        case 0x306f00u: goto label_306f00;
        case 0x306f04u: goto label_306f04;
        case 0x306f08u: goto label_306f08;
        case 0x306f0cu: goto label_306f0c;
        case 0x306f10u: goto label_306f10;
        case 0x306f14u: goto label_306f14;
        case 0x306f18u: goto label_306f18;
        case 0x306f1cu: goto label_306f1c;
        case 0x306f20u: goto label_306f20;
        case 0x306f24u: goto label_306f24;
        case 0x306f28u: goto label_306f28;
        case 0x306f2cu: goto label_306f2c;
        case 0x306f30u: goto label_306f30;
        case 0x306f34u: goto label_306f34;
        case 0x306f38u: goto label_306f38;
        case 0x306f3cu: goto label_306f3c;
        case 0x306f40u: goto label_306f40;
        case 0x306f44u: goto label_306f44;
        case 0x306f48u: goto label_306f48;
        case 0x306f4cu: goto label_306f4c;
        case 0x306f50u: goto label_306f50;
        case 0x306f54u: goto label_306f54;
        case 0x306f58u: goto label_306f58;
        case 0x306f5cu: goto label_306f5c;
        case 0x306f60u: goto label_306f60;
        case 0x306f64u: goto label_306f64;
        case 0x306f68u: goto label_306f68;
        case 0x306f6cu: goto label_306f6c;
        case 0x306f70u: goto label_306f70;
        case 0x306f74u: goto label_306f74;
        case 0x306f78u: goto label_306f78;
        case 0x306f7cu: goto label_306f7c;
        case 0x306f80u: goto label_306f80;
        case 0x306f84u: goto label_306f84;
        case 0x306f88u: goto label_306f88;
        case 0x306f8cu: goto label_306f8c;
        case 0x306f90u: goto label_306f90;
        case 0x306f94u: goto label_306f94;
        case 0x306f98u: goto label_306f98;
        case 0x306f9cu: goto label_306f9c;
        case 0x306fa0u: goto label_306fa0;
        case 0x306fa4u: goto label_306fa4;
        case 0x306fa8u: goto label_306fa8;
        case 0x306facu: goto label_306fac;
        case 0x306fb0u: goto label_306fb0;
        case 0x306fb4u: goto label_306fb4;
        case 0x306fb8u: goto label_306fb8;
        case 0x306fbcu: goto label_306fbc;
        case 0x306fc0u: goto label_306fc0;
        case 0x306fc4u: goto label_306fc4;
        case 0x306fc8u: goto label_306fc8;
        case 0x306fccu: goto label_306fcc;
        case 0x306fd0u: goto label_306fd0;
        case 0x306fd4u: goto label_306fd4;
        case 0x306fd8u: goto label_306fd8;
        case 0x306fdcu: goto label_306fdc;
        case 0x306fe0u: goto label_306fe0;
        case 0x306fe4u: goto label_306fe4;
        case 0x306fe8u: goto label_306fe8;
        case 0x306fecu: goto label_306fec;
        case 0x306ff0u: goto label_306ff0;
        case 0x306ff4u: goto label_306ff4;
        case 0x306ff8u: goto label_306ff8;
        case 0x306ffcu: goto label_306ffc;
        case 0x307000u: goto label_307000;
        case 0x307004u: goto label_307004;
        case 0x307008u: goto label_307008;
        case 0x30700cu: goto label_30700c;
        case 0x307010u: goto label_307010;
        case 0x307014u: goto label_307014;
        case 0x307018u: goto label_307018;
        case 0x30701cu: goto label_30701c;
        case 0x307020u: goto label_307020;
        case 0x307024u: goto label_307024;
        case 0x307028u: goto label_307028;
        case 0x30702cu: goto label_30702c;
        case 0x307030u: goto label_307030;
        case 0x307034u: goto label_307034;
        default: break;
    }

    ctx->pc = 0x306ec0u;

label_306ec0:
    // 0x306ec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x306ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_306ec4:
    // 0x306ec4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x306ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_306ec8:
    // 0x306ec8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x306ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_306ecc:
    // 0x306ecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306ed0:
    // 0x306ed0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x306ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_306ed4:
    // 0x306ed4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x306ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_306ed8:
    // 0x306ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_306edc:
    // 0x306edc: 0xc0d4ede  jal         func_353B78
label_306ee0:
    if (ctx->pc == 0x306EE0u) {
        ctx->pc = 0x306EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EDCu;
        // 0x306ee0: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306EE4u;
        goto label_306ee4;
    }
    ctx->pc = 0x306EDCu;
    SET_GPR_U32(ctx, 31, 0x306EE4u);
    ctx->pc = 0x306EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306EDCu;
    // 0x306ee0: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353B78u, 0x306EDCu, 0x306EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EE4u;
label_306ee4:
    // 0x306ee4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x306ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306ee8:
    // 0x306ee8: 0x1443004d  bne         $v0, $v1, . + 4 + (0x4D << 2)
label_306eec:
    if (ctx->pc == 0x306EECu) {
        ctx->pc = 0x306EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EE8u;
        // 0x306eec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306EF0u;
        goto label_306ef0;
    }
    ctx->pc = 0x306EE8u;
    {
        const bool branch_taken_0x306ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x306EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EE8u;
        // 0x306eec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ee8) {
            ctx->pc = 0x307020u;
            goto label_307020;
        }
    }
    ctx->pc = 0x306EF0u;
label_306ef0:
    // 0x306ef0: 0xc05959e  jal         func_165678
label_306ef4:
    if (ctx->pc == 0x306EF4u) {
        ctx->pc = 0x306EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EF0u;
        // 0x306ef4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306EF8u;
        goto label_306ef8;
    }
    ctx->pc = 0x306EF0u;
    SET_GPR_U32(ctx, 31, 0x306EF8u);
    ctx->pc = 0x306EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306EF0u;
    // 0x306ef4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x306EF0u, 0x306EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EF8u;
label_306ef8:
    // 0x306ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x306ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306efc:
    // 0x306efc: 0x52000048  beql        $s0, $zero, . + 4 + (0x48 << 2)
label_306f00:
    if (ctx->pc == 0x306F00u) {
        ctx->pc = 0x306F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EFCu;
        // 0x306f00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F04u;
        goto label_306f04;
    }
    ctx->pc = 0x306EFCu;
    {
        const bool branch_taken_0x306efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x306efc) {
            ctx->pc = 0x306F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306EFCu;
            // 0x306f00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307020u;
            goto label_307020;
        }
    }
    ctx->pc = 0x306F04u;
label_306f04:
    // 0x306f04: 0xc05959e  jal         func_165678
label_306f08:
    if (ctx->pc == 0x306F08u) {
        ctx->pc = 0x306F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F04u;
        // 0x306f08: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F0Cu;
        goto label_306f0c;
    }
    ctx->pc = 0x306F04u;
    SET_GPR_U32(ctx, 31, 0x306F0Cu);
    ctx->pc = 0x306F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F04u;
    // 0x306f08: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x306F04u, 0x306F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F0Cu;
label_306f0c:
    // 0x306f0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x306f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306f10:
    // 0x306f10: 0x12400042  beqz        $s2, . + 4 + (0x42 << 2)
label_306f14:
    if (ctx->pc == 0x306F14u) {
        ctx->pc = 0x306F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F10u;
        // 0x306f14: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F18u;
        goto label_306f18;
    }
    ctx->pc = 0x306F10u;
    {
        const bool branch_taken_0x306f10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x306F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F10u;
        // 0x306f14: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f10) {
            ctx->pc = 0x30701Cu;
            goto label_30701c;
        }
    }
    ctx->pc = 0x306F18u;
label_306f18:
    // 0x306f18: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x306f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_306f1c:
    // 0x306f1c: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
label_306f20:
    if (ctx->pc == 0x306F20u) {
        ctx->pc = 0x306F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F1Cu;
        // 0x306f20: 0xa20001b2  sb          $zero, 0x1B2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F24u;
        goto label_306f24;
    }
    ctx->pc = 0x306F1Cu;
    {
        const bool branch_taken_0x306f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x306f1c) {
            ctx->pc = 0x306F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306F1Cu;
            // 0x306f20: 0xa20001b2  sb          $zero, 0x1B2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306F24u;
            goto label_306f24;
        }
    }
    ctx->pc = 0x306F24u;
label_306f24:
    // 0x306f24: 0xc087502  jal         func_21D408
label_306f28:
    if (ctx->pc == 0x306F28u) {
        ctx->pc = 0x306F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F24u;
        // 0x306f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F2Cu;
        goto label_306f2c;
    }
    ctx->pc = 0x306F24u;
    SET_GPR_U32(ctx, 31, 0x306F2Cu);
    ctx->pc = 0x306F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F24u;
    // 0x306f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x306F24u, 0x306F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F2Cu;
label_306f2c:
    // 0x306f2c: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x306f2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
label_306f30:
    // 0x306f30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_306f34:
    // 0x306f34: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x306f34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_306f38:
    // 0x306f38: 0xc087502  jal         func_21D408
label_306f3c:
    if (ctx->pc == 0x306F3Cu) {
        ctx->pc = 0x306F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F38u;
        // 0x306f3c: 0xa2230044  sb          $v1, 0x44($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F40u;
        goto label_306f40;
    }
    ctx->pc = 0x306F38u;
    SET_GPR_U32(ctx, 31, 0x306F40u);
    ctx->pc = 0x306F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F38u;
    // 0x306f3c: 0xa2230044  sb          $v1, 0x44($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x306F38u, 0x306F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F40u;
label_306f40:
    // 0x306f40: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x306f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
label_306f44:
    // 0x306f44: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x306f44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_306f48:
    // 0x306f48: 0xa2230045  sb          $v1, 0x45($s1)
    ctx->pc = 0x306f48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 3));
label_306f4c:
    // 0x306f4c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x306f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_306f50:
    // 0x306f50: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x306f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_306f54:
    // 0x306f54: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x306f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_306f58:
    // 0x306f58: 0x40f809  jalr        $v0
label_306f5c:
    if (ctx->pc == 0x306F5Cu) {
        ctx->pc = 0x306F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F58u;
        // 0x306f5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F60u;
        goto label_306f60;
    }
    ctx->pc = 0x306F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306F60u);
        ctx->pc = 0x306F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F58u;
        // 0x306f5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306F58u, 0x306F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306F60u;
label_306f60:
    // 0x306f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306f64:
    // 0x306f64: 0xc0a48cc  jal         func_292330
label_306f68:
    if (ctx->pc == 0x306F68u) {
        ctx->pc = 0x306F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F64u;
        // 0x306f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F6Cu;
        goto label_306f6c;
    }
    ctx->pc = 0x306F64u;
    SET_GPR_U32(ctx, 31, 0x306F6Cu);
    ctx->pc = 0x306F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F64u;
    // 0x306f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x306F64u, 0x306F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F6Cu;
label_306f6c:
    // 0x306f6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x306f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306f70:
    // 0x306f70: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x306f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_306f74:
    // 0x306f74: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x306f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_306f78:
    // 0x306f78: 0x40f809  jalr        $v0
label_306f7c:
    if (ctx->pc == 0x306F7Cu) {
        ctx->pc = 0x306F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F78u;
        // 0x306f7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F80u;
        goto label_306f80;
    }
    ctx->pc = 0x306F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306F80u);
        ctx->pc = 0x306F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F78u;
        // 0x306f7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306F78u, 0x306F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306F80u;
label_306f80:
    // 0x306f80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306f84:
    // 0x306f84: 0xc0a48cc  jal         func_292330
label_306f88:
    if (ctx->pc == 0x306F88u) {
        ctx->pc = 0x306F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F84u;
        // 0x306f88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F8Cu;
        goto label_306f8c;
    }
    ctx->pc = 0x306F84u;
    SET_GPR_U32(ctx, 31, 0x306F8Cu);
    ctx->pc = 0x306F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F84u;
    // 0x306f88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x306F84u, 0x306F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F8Cu;
label_306f8c:
    // 0x306f8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x306f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_306f90:
    // 0x306f90: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x306f90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_306f94:
    // 0x306f94: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x306f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_306f98:
    // 0x306f98: 0x40f809  jalr        $v0
label_306f9c:
    if (ctx->pc == 0x306F9Cu) {
        ctx->pc = 0x306F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F98u;
        // 0x306f9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FA0u;
        goto label_306fa0;
    }
    ctx->pc = 0x306F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306FA0u);
        ctx->pc = 0x306F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F98u;
        // 0x306f9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306F98u, 0x306FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306FA0u;
label_306fa0:
    // 0x306fa0: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x306fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_306fa4:
    // 0x306fa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306fa8:
    // 0x306fa8: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x306fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_306fac:
    // 0x306fac: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x306facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306fb0:
    // 0x306fb0: 0xc0b9594  jal         func_2E5650
label_306fb4:
    if (ctx->pc == 0x306FB4u) {
        ctx->pc = 0x306FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FB0u;
        // 0x306fb4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FB8u;
        goto label_306fb8;
    }
    ctx->pc = 0x306FB0u;
    SET_GPR_U32(ctx, 31, 0x306FB8u);
    ctx->pc = 0x306FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306FB0u;
    // 0x306fb4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5650u, 0x306FB0u, 0x306FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306FB8u;
label_306fb8:
    // 0x306fb8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x306fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_306fbc:
    // 0x306fbc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x306fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_306fc0:
    // 0x306fc0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x306fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_306fc4:
    // 0x306fc4: 0x40f809  jalr        $v0
label_306fc8:
    if (ctx->pc == 0x306FC8u) {
        ctx->pc = 0x306FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FC4u;
        // 0x306fc8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FCCu;
        goto label_306fcc;
    }
    ctx->pc = 0x306FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306FCCu);
        ctx->pc = 0x306FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FC4u;
        // 0x306fc8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306FC4u, 0x306FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306FCCu;
label_306fcc:
    // 0x306fcc: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x306fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_306fd0:
    // 0x306fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306fd4:
    // 0x306fd4: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x306fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_306fd8:
    // 0x306fd8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x306fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306fdc:
    // 0x306fdc: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x306fdcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_306fe0:
    // 0x306fe0: 0xc0b9594  jal         func_2E5650
label_306fe4:
    if (ctx->pc == 0x306FE4u) {
        ctx->pc = 0x306FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FE0u;
        // 0x306fe4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FE8u;
        goto label_306fe8;
    }
    ctx->pc = 0x306FE0u;
    SET_GPR_U32(ctx, 31, 0x306FE8u);
    ctx->pc = 0x306FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306FE0u;
    // 0x306fe4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5650u, 0x306FE0u, 0x306FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306FE8u;
label_306fe8:
    // 0x306fe8: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x306fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_306fec:
    // 0x306fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306ff0:
    // 0x306ff0: 0x8e2a0030  lw          $t2, 0x30($s1)
    ctx->pc = 0x306ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_306ff4:
    // 0x306ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306ff8:
    // 0x306ff8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x306ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306ffc:
    // 0x306ffc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x306ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307000:
    // 0x307000: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x307000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_307004:
    // 0x307004: 0xc0d4fd0  jal         func_353F40
label_307008:
    if (ctx->pc == 0x307008u) {
        ctx->pc = 0x307008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307004u;
        // 0x307008: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30700Cu;
        goto label_30700c;
    }
    ctx->pc = 0x307004u;
    SET_GPR_U32(ctx, 31, 0x30700Cu);
    ctx->pc = 0x307008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307004u;
    // 0x307008: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F40u, 0x307004u, 0x30700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30700Cu;
label_30700c:
    // 0x30700c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x30700cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_307010:
    // 0x307010: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x307010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_307014:
    // 0x307014: 0xa0530411  sb          $s3, 0x411($v0)
    ctx->pc = 0x307014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1041), (uint8_t)GPR_U32(ctx, 19));
label_307018:
    // 0x307018: 0xae330034  sw          $s3, 0x34($s1)
    ctx->pc = 0x307018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 19));
label_30701c:
    // 0x30701c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30701cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_307020:
    // 0x307020: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x307020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_307024:
    // 0x307024: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x307024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_307028:
    // 0x307028: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x307028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30702c:
    // 0x30702c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30702cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307030:
    // 0x307030: 0x3e00008  jr          $ra
label_307034:
    if (ctx->pc == 0x307034u) {
        ctx->pc = 0x307034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307030u;
        // 0x307034: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307038u;
        goto label_fallthrough_0x307030;
    }
    ctx->pc = 0x307030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307030u;
        // 0x307034: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x307030:
    ctx->pc = 0x307038u;
}
