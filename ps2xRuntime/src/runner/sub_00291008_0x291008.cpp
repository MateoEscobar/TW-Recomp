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

// Function: sub_00291008
// Address: 0x291008 - 0x291178
void sub_00291008_0x291008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291008_0x291008");
#endif

    switch (ctx->pc) {
        case 0x291008u: goto label_291008;
        case 0x29100cu: goto label_29100c;
        case 0x291010u: goto label_291010;
        case 0x291014u: goto label_291014;
        case 0x291018u: goto label_291018;
        case 0x29101cu: goto label_29101c;
        case 0x291020u: goto label_291020;
        case 0x291024u: goto label_291024;
        case 0x291028u: goto label_291028;
        case 0x29102cu: goto label_29102c;
        case 0x291030u: goto label_291030;
        case 0x291034u: goto label_291034;
        case 0x291038u: goto label_291038;
        case 0x29103cu: goto label_29103c;
        case 0x291040u: goto label_291040;
        case 0x291044u: goto label_291044;
        case 0x291048u: goto label_291048;
        case 0x29104cu: goto label_29104c;
        case 0x291050u: goto label_291050;
        case 0x291054u: goto label_291054;
        case 0x291058u: goto label_291058;
        case 0x29105cu: goto label_29105c;
        case 0x291060u: goto label_291060;
        case 0x291064u: goto label_291064;
        case 0x291068u: goto label_291068;
        case 0x29106cu: goto label_29106c;
        case 0x291070u: goto label_291070;
        case 0x291074u: goto label_291074;
        case 0x291078u: goto label_291078;
        case 0x29107cu: goto label_29107c;
        case 0x291080u: goto label_291080;
        case 0x291084u: goto label_291084;
        case 0x291088u: goto label_291088;
        case 0x29108cu: goto label_29108c;
        case 0x291090u: goto label_291090;
        case 0x291094u: goto label_291094;
        case 0x291098u: goto label_291098;
        case 0x29109cu: goto label_29109c;
        case 0x2910a0u: goto label_2910a0;
        case 0x2910a4u: goto label_2910a4;
        case 0x2910a8u: goto label_2910a8;
        case 0x2910acu: goto label_2910ac;
        case 0x2910b0u: goto label_2910b0;
        case 0x2910b4u: goto label_2910b4;
        case 0x2910b8u: goto label_2910b8;
        case 0x2910bcu: goto label_2910bc;
        case 0x2910c0u: goto label_2910c0;
        case 0x2910c4u: goto label_2910c4;
        case 0x2910c8u: goto label_2910c8;
        case 0x2910ccu: goto label_2910cc;
        case 0x2910d0u: goto label_2910d0;
        case 0x2910d4u: goto label_2910d4;
        case 0x2910d8u: goto label_2910d8;
        case 0x2910dcu: goto label_2910dc;
        case 0x2910e0u: goto label_2910e0;
        case 0x2910e4u: goto label_2910e4;
        case 0x2910e8u: goto label_2910e8;
        case 0x2910ecu: goto label_2910ec;
        case 0x2910f0u: goto label_2910f0;
        case 0x2910f4u: goto label_2910f4;
        case 0x2910f8u: goto label_2910f8;
        case 0x2910fcu: goto label_2910fc;
        case 0x291100u: goto label_291100;
        case 0x291104u: goto label_291104;
        case 0x291108u: goto label_291108;
        case 0x29110cu: goto label_29110c;
        case 0x291110u: goto label_291110;
        case 0x291114u: goto label_291114;
        case 0x291118u: goto label_291118;
        case 0x29111cu: goto label_29111c;
        case 0x291120u: goto label_291120;
        case 0x291124u: goto label_291124;
        case 0x291128u: goto label_291128;
        case 0x29112cu: goto label_29112c;
        case 0x291130u: goto label_291130;
        case 0x291134u: goto label_291134;
        case 0x291138u: goto label_291138;
        case 0x29113cu: goto label_29113c;
        case 0x291140u: goto label_291140;
        case 0x291144u: goto label_291144;
        case 0x291148u: goto label_291148;
        case 0x29114cu: goto label_29114c;
        case 0x291150u: goto label_291150;
        case 0x291154u: goto label_291154;
        case 0x291158u: goto label_291158;
        case 0x29115cu: goto label_29115c;
        case 0x291160u: goto label_291160;
        case 0x291164u: goto label_291164;
        case 0x291168u: goto label_291168;
        case 0x29116cu: goto label_29116c;
        case 0x291170u: goto label_291170;
        case 0x291174u: goto label_291174;
        default: break;
    }

    ctx->pc = 0x291008u;

label_291008:
    // 0x291008: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x291008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_29100c:
    // 0x29100c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x29100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_291010:
    // 0x291010: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x291010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_291014:
    // 0x291014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_291018:
    // 0x291018: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x291018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29101c:
    // 0x29101c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x29101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_291020:
    // 0x291020: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x291020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_291024:
    // 0x291024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_291028:
    // 0x291028: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x291028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29102c:
    // 0x29102c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29102cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_291030:
    // 0x291030: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x291030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_291034:
    // 0x291034: 0x261101f0  addiu       $s1, $s0, 0x1F0
    ctx->pc = 0x291034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_291038:
    // 0x291038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29103c:
    // 0x29103c: 0xc087502  jal         func_21D408
label_291040:
    if (ctx->pc == 0x291040u) {
        ctx->pc = 0x291040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29103Cu;
        // 0x291040: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291044u;
        goto label_291044;
    }
    ctx->pc = 0x29103Cu;
    SET_GPR_U32(ctx, 31, 0x291044u);
    ctx->pc = 0x291040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29103Cu;
    // 0x291040: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29103Cu, 0x291044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291044u;
label_291044:
    // 0x291044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291048:
    // 0x291048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29104c:
    // 0x29104c: 0x0  nop
    ctx->pc = 0x29104cu;
    // NOP
label_291050:
    // 0x291050: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x291050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_291054:
    // 0x291054: 0x10720039  beq         $v1, $s2, . + 4 + (0x39 << 2)
label_291058:
    if (ctx->pc == 0x291058u) {
        ctx->pc = 0x291058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291054u;
        // 0x291058: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29105Cu;
        goto label_29105c;
    }
    ctx->pc = 0x291054u;
    {
        const bool branch_taken_0x291054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x291058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291054u;
        // 0x291058: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291054) {
            ctx->pc = 0x29113Cu;
            goto label_29113c;
        }
    }
    ctx->pc = 0x29105Cu;
label_29105c:
    // 0x29105c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29105cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_291060:
    // 0x291060: 0x43980b  movn        $s3, $v0, $v1
    ctx->pc = 0x291060u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_291064:
    // 0x291064: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x291064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_291068:
    // 0x291068: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_29106c:
    if (ctx->pc == 0x29106Cu) {
        ctx->pc = 0x29106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291068u;
        // 0x29106c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291070u;
        goto label_291070;
    }
    ctx->pc = 0x291068u;
    {
        const bool branch_taken_0x291068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291068u;
        // 0x29106c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291068) {
            ctx->pc = 0x291050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291050;
        }
    }
    ctx->pc = 0x291070u;
label_291070:
    // 0x291070: 0xc088ed2  jal         func_223B48
label_291074:
    if (ctx->pc == 0x291074u) {
        ctx->pc = 0x291074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291070u;
        // 0x291074: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291078u;
        goto label_291078;
    }
    ctx->pc = 0x291070u;
    SET_GPR_U32(ctx, 31, 0x291078u);
    ctx->pc = 0x291074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291070u;
    // 0x291074: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x291070u, 0x291078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291078u;
label_291078:
    // 0x291078: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x291078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29107c:
    // 0x29107c: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
label_291080:
    if (ctx->pc == 0x291080u) {
        ctx->pc = 0x291080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29107Cu;
        // 0x291080: 0x9207014a  lbu         $a3, 0x14A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 330)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291084u;
        goto label_291084;
    }
    ctx->pc = 0x29107Cu;
    {
        const bool branch_taken_0x29107c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29107c) {
            ctx->pc = 0x291080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29107Cu;
            // 0x291080: 0x9207014a  lbu         $a3, 0x14A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 330)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291088u;
            goto label_291088;
        }
    }
    ctx->pc = 0x291084u;
label_291084:
    // 0x291084: 0x9207014b  lbu         $a3, 0x14B($s0)
    ctx->pc = 0x291084u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 331)));
label_291088:
    // 0x291088: 0x10e00031  beqz        $a3, . + 4 + (0x31 << 2)
label_29108c:
    if (ctx->pc == 0x29108Cu) {
        ctx->pc = 0x29108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291088u;
        // 0x29108c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291090u;
        goto label_291090;
    }
    ctx->pc = 0x291088u;
    {
        const bool branch_taken_0x291088 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x29108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291088u;
        // 0x29108c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291088) {
            ctx->pc = 0x291150u;
            goto label_291150;
        }
    }
    ctx->pc = 0x291090u;
label_291090:
    // 0x291090: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x291090u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_291094:
    // 0x291094: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x291094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_291098:
    // 0x291098: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x291098u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29109c:
    // 0x29109c: 0x0  nop
    ctx->pc = 0x29109cu;
    // NOP
label_2910a0:
    // 0x2910a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2910a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2910a4:
    // 0x2910a4: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
label_2910a8:
    if (ctx->pc == 0x2910A8u) {
        ctx->pc = 0x2910A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910A4u;
        // 0x2910a8: 0x8d02b734  lw          $v0, -0x48CC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2910ACu;
        goto label_2910ac;
    }
    ctx->pc = 0x2910A4u;
    {
        const bool branch_taken_0x2910a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2910A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910A4u;
        // 0x2910a8: 0x8d02b734  lw          $v0, -0x48CC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910a4) {
            ctx->pc = 0x2910D0u;
            goto label_2910d0;
        }
    }
    ctx->pc = 0x2910ACu;
label_2910ac:
    // 0x2910ac: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x2910acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_2910b0:
    // 0x2910b0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2910b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2910b4:
    // 0x2910b4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2910b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2910b8:
    // 0x2910b8: 0x54600020  bnel        $v1, $zero, . + 4 + (0x20 << 2)
label_2910bc:
    if (ctx->pc == 0x2910BCu) {
        ctx->pc = 0x2910BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910B8u;
        // 0x2910bc: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2910C0u;
        goto label_2910c0;
    }
    ctx->pc = 0x2910B8u;
    {
        const bool branch_taken_0x2910b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2910b8) {
            ctx->pc = 0x2910BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2910B8u;
            // 0x2910bc: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29113Cu;
            goto label_29113c;
        }
    }
    ctx->pc = 0x2910C0u;
label_2910c0:
    // 0x2910c0: 0x5660001e  bnel        $s3, $zero, . + 4 + (0x1E << 2)
label_2910c4:
    if (ctx->pc == 0x2910C4u) {
        ctx->pc = 0x2910C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910C0u;
        // 0x2910c4: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2910C8u;
        goto label_2910c8;
    }
    ctx->pc = 0x2910C0u;
    {
        const bool branch_taken_0x2910c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2910c0) {
            ctx->pc = 0x2910C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2910C0u;
            // 0x2910c4: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29113Cu;
            goto label_29113c;
        }
    }
    ctx->pc = 0x2910C8u;
label_2910c8:
    // 0x2910c8: 0x10000022  b           . + 4 + (0x22 << 2)
label_2910cc:
    if (ctx->pc == 0x2910CCu) {
        ctx->pc = 0x2910CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910C8u;
        // 0x2910cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2910D0u;
        goto label_2910d0;
    }
    ctx->pc = 0x2910C8u;
    {
        const bool branch_taken_0x2910c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2910CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910C8u;
        // 0x2910cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910c8) {
            ctx->pc = 0x291154u;
            goto label_291154;
        }
    }
    ctx->pc = 0x2910D0u;
label_2910d0:
    // 0x2910d0: 0x1689001c  bne         $s4, $t1, . + 4 + (0x1C << 2)
label_2910d4:
    if (ctx->pc == 0x2910D4u) {
        ctx->pc = 0x2910D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910D0u;
        // 0x2910d4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2910D8u;
        goto label_2910d8;
    }
    ctx->pc = 0x2910D0u;
    {
        const bool branch_taken_0x2910d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 9));
        ctx->pc = 0x2910D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910D0u;
        // 0x2910d4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910d0) {
            ctx->pc = 0x291144u;
            goto label_291144;
        }
    }
    ctx->pc = 0x2910D8u;
label_2910d8:
    // 0x2910d8: 0x8d02b734  lw          $v0, -0x48CC($t0)
    ctx->pc = 0x2910d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948660)));
label_2910dc:
    // 0x2910dc: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x2910dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_2910e0:
    // 0x2910e0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2910e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2910e4:
    // 0x2910e4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2910e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2910e8:
    // 0x2910e8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2910ec:
    if (ctx->pc == 0x2910ECu) {
        ctx->pc = 0x2910ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910E8u;
        // 0x2910ec: 0xc7102b  sltu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2910F0u;
        goto label_2910f0;
    }
    ctx->pc = 0x2910E8u;
    {
        const bool branch_taken_0x2910e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2910ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910E8u;
        // 0x2910ec: 0xc7102b  sltu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2910e8) {
            ctx->pc = 0x291148u;
            goto label_291148;
        }
    }
    ctx->pc = 0x2910F0u;
label_2910f0:
    // 0x2910f0: 0xc087502  jal         func_21D408
label_2910f4:
    if (ctx->pc == 0x2910F4u) {
        ctx->pc = 0x2910F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2910F0u;
        // 0x2910f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2910F8u;
        goto label_2910f8;
    }
    ctx->pc = 0x2910F0u;
    SET_GPR_U32(ctx, 31, 0x2910F8u);
    ctx->pc = 0x2910F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2910F0u;
    // 0x2910f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2910F0u, 0x2910F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2910F8u;
label_2910f8:
    // 0x2910f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2910f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2910fc:
    // 0x2910fc: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x2910fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_291100:
    // 0x291100: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x291100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_291104:
    // 0x291104: 0x5454000d  bnel        $v0, $s4, . + 4 + (0xD << 2)
label_291108:
    if (ctx->pc == 0x291108u) {
        ctx->pc = 0x291108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291104u;
        // 0x291108: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29110Cu;
        goto label_29110c;
    }
    ctx->pc = 0x291104u;
    {
        const bool branch_taken_0x291104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x291104) {
            ctx->pc = 0x291108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291104u;
            // 0x291108: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29113Cu;
            goto label_29113c;
        }
    }
    ctx->pc = 0x29110Cu;
label_29110c:
    // 0x29110c: 0xc0a36c2  jal         func_28DB08
label_291110:
    if (ctx->pc == 0x291110u) {
        ctx->pc = 0x291110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29110Cu;
        // 0x291110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291114u;
        goto label_291114;
    }
    ctx->pc = 0x29110Cu;
    SET_GPR_U32(ctx, 31, 0x291114u);
    ctx->pc = 0x291110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29110Cu;
    // 0x291110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x29110Cu, 0x291114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291114u;
label_291114:
    // 0x291114: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x291114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_291118:
    // 0x291118: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x291118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_29111c:
    // 0x29111c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x29111cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_291120:
    // 0x291120: 0xa0f809  jalr        $a1
label_291124:
    if (ctx->pc == 0x291124u) {
        ctx->pc = 0x291124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291120u;
        // 0x291124: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291128u;
        goto label_291128;
    }
    ctx->pc = 0x291120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x291128u);
        ctx->pc = 0x291124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291120u;
        // 0x291124: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291120u, 0x291128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291128u;
label_291128:
    // 0x291128: 0x54550004  bnel        $v0, $s5, . + 4 + (0x4 << 2)
label_29112c:
    if (ctx->pc == 0x29112Cu) {
        ctx->pc = 0x29112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291128u;
        // 0x29112c: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291130u;
        goto label_291130;
    }
    ctx->pc = 0x291128u;
    {
        const bool branch_taken_0x291128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x291128) {
            ctx->pc = 0x29112Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291128u;
            // 0x29112c: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29113Cu;
            goto label_29113c;
        }
    }
    ctx->pc = 0x291130u;
label_291130:
    // 0x291130: 0xc0a36c8  jal         func_28DB20
label_291134:
    if (ctx->pc == 0x291134u) {
        ctx->pc = 0x291134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291130u;
        // 0x291134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291138u;
        goto label_291138;
    }
    ctx->pc = 0x291130u;
    SET_GPR_U32(ctx, 31, 0x291138u);
    ctx->pc = 0x291134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291130u;
    // 0x291134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x291130u, 0x291138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291138u;
label_291138:
    // 0x291138: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x291138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_29113c:
    // 0x29113c: 0x10000005  b           . + 4 + (0x5 << 2)
label_291140:
    if (ctx->pc == 0x291140u) {
        ctx->pc = 0x291140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29113Cu;
        // 0x291140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291144u;
        goto label_291144;
    }
    ctx->pc = 0x29113Cu;
    {
        const bool branch_taken_0x29113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29113Cu;
        // 0x291140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29113c) {
            ctx->pc = 0x291154u;
            goto label_291154;
        }
    }
    ctx->pc = 0x291144u;
label_291144:
    // 0x291144: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x291144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_291148:
    // 0x291148: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_29114c:
    if (ctx->pc == 0x29114Cu) {
        ctx->pc = 0x29114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291148u;
        // 0x29114c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291150u;
        goto label_291150;
    }
    ctx->pc = 0x291148u;
    {
        const bool branch_taken_0x291148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291148u;
        // 0x29114c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291148) {
            ctx->pc = 0x2910A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2910a0;
        }
    }
    ctx->pc = 0x291150u;
label_291150:
    // 0x291150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x291150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291154:
    // 0x291154: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x291154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_291158:
    // 0x291158: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x291158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29115c:
    // 0x29115c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x29115cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_291160:
    // 0x291160: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x291160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_291164:
    // 0x291164: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x291164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_291168:
    // 0x291168: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x291168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29116c:
    // 0x29116c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29116cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291170:
    // 0x291170: 0x3e00008  jr          $ra
label_291174:
    if (ctx->pc == 0x291174u) {
        ctx->pc = 0x291174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291170u;
        // 0x291174: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291178u;
        goto label_fallthrough_0x291170;
    }
    ctx->pc = 0x291170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291170u;
        // 0x291174: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291170:
    ctx->pc = 0x291178u;
}
