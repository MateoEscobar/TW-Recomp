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

// Function: sub_00109018
// Address: 0x109018 - 0x109158
void sub_00109018_0x109018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109018_0x109018");
#endif

    switch (ctx->pc) {
        case 0x109018u: goto label_109018;
        case 0x10901cu: goto label_10901c;
        case 0x109020u: goto label_109020;
        case 0x109024u: goto label_109024;
        case 0x109028u: goto label_109028;
        case 0x10902cu: goto label_10902c;
        case 0x109030u: goto label_109030;
        case 0x109034u: goto label_109034;
        case 0x109038u: goto label_109038;
        case 0x10903cu: goto label_10903c;
        case 0x109040u: goto label_109040;
        case 0x109044u: goto label_109044;
        case 0x109048u: goto label_109048;
        case 0x10904cu: goto label_10904c;
        case 0x109050u: goto label_109050;
        case 0x109054u: goto label_109054;
        case 0x109058u: goto label_109058;
        case 0x10905cu: goto label_10905c;
        case 0x109060u: goto label_109060;
        case 0x109064u: goto label_109064;
        case 0x109068u: goto label_109068;
        case 0x10906cu: goto label_10906c;
        case 0x109070u: goto label_109070;
        case 0x109074u: goto label_109074;
        case 0x109078u: goto label_109078;
        case 0x10907cu: goto label_10907c;
        case 0x109080u: goto label_109080;
        case 0x109084u: goto label_109084;
        case 0x109088u: goto label_109088;
        case 0x10908cu: goto label_10908c;
        case 0x109090u: goto label_109090;
        case 0x109094u: goto label_109094;
        case 0x109098u: goto label_109098;
        case 0x10909cu: goto label_10909c;
        case 0x1090a0u: goto label_1090a0;
        case 0x1090a4u: goto label_1090a4;
        case 0x1090a8u: goto label_1090a8;
        case 0x1090acu: goto label_1090ac;
        case 0x1090b0u: goto label_1090b0;
        case 0x1090b4u: goto label_1090b4;
        case 0x1090b8u: goto label_1090b8;
        case 0x1090bcu: goto label_1090bc;
        case 0x1090c0u: goto label_1090c0;
        case 0x1090c4u: goto label_1090c4;
        case 0x1090c8u: goto label_1090c8;
        case 0x1090ccu: goto label_1090cc;
        case 0x1090d0u: goto label_1090d0;
        case 0x1090d4u: goto label_1090d4;
        case 0x1090d8u: goto label_1090d8;
        case 0x1090dcu: goto label_1090dc;
        case 0x1090e0u: goto label_1090e0;
        case 0x1090e4u: goto label_1090e4;
        case 0x1090e8u: goto label_1090e8;
        case 0x1090ecu: goto label_1090ec;
        case 0x1090f0u: goto label_1090f0;
        case 0x1090f4u: goto label_1090f4;
        case 0x1090f8u: goto label_1090f8;
        case 0x1090fcu: goto label_1090fc;
        case 0x109100u: goto label_109100;
        case 0x109104u: goto label_109104;
        case 0x109108u: goto label_109108;
        case 0x10910cu: goto label_10910c;
        case 0x109110u: goto label_109110;
        case 0x109114u: goto label_109114;
        case 0x109118u: goto label_109118;
        case 0x10911cu: goto label_10911c;
        case 0x109120u: goto label_109120;
        case 0x109124u: goto label_109124;
        case 0x109128u: goto label_109128;
        case 0x10912cu: goto label_10912c;
        case 0x109130u: goto label_109130;
        case 0x109134u: goto label_109134;
        case 0x109138u: goto label_109138;
        case 0x10913cu: goto label_10913c;
        case 0x109140u: goto label_109140;
        case 0x109144u: goto label_109144;
        case 0x109148u: goto label_109148;
        case 0x10914cu: goto label_10914c;
        case 0x109150u: goto label_109150;
        case 0x109154u: goto label_109154;
        default: break;
    }

    ctx->pc = 0x109018u;

label_109018:
    // 0x109018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10901c:
    // 0x10901c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_109020:
    // 0x109020: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x109020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_109024:
    // 0x109024: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_109028:
    // 0x109028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10902c:
    // 0x10902c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x10902cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_109030:
    // 0x109030: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_109034:
    if (ctx->pc == 0x109034u) {
        ctx->pc = 0x109034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109030u;
        // 0x109034: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109038u;
        goto label_109038;
    }
    ctx->pc = 0x109030u;
    {
        const bool branch_taken_0x109030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x109030) {
            ctx->pc = 0x109034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109030u;
            // 0x109034: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109044u;
            goto label_109044;
        }
    }
    ctx->pc = 0x109038u;
label_109038:
    // 0x109038: 0xc041544  jal         func_105510
label_10903c:
    if (ctx->pc == 0x10903Cu) {
        ctx->pc = 0x109040u;
        goto label_109040;
    }
    ctx->pc = 0x109038u;
    SET_GPR_U32(ctx, 31, 0x109040u);
    ctx->pc = 0x105510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105510u, 0x109038u, 0x109040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109040u;
label_109040:
    // 0x109040: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x109040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_109044:
    // 0x109044: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x109044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_109048:
    // 0x109048: 0xc0e409a  jal         func_390268
label_10904c:
    if (ctx->pc == 0x10904Cu) {
        ctx->pc = 0x10904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109048u;
        // 0x10904c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109050u;
        goto label_109050;
    }
    ctx->pc = 0x109048u;
    SET_GPR_U32(ctx, 31, 0x109050u);
    ctx->pc = 0x10904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109048u;
    // 0x10904c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x109048u, 0x109050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109050u;
label_109050:
    // 0x109050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109054:
    // 0x109054: 0x52000034  beql        $s0, $zero, . + 4 + (0x34 << 2)
label_109058:
    if (ctx->pc == 0x109058u) {
        ctx->pc = 0x109058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109054u;
        // 0x109058: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10905Cu;
        goto label_10905c;
    }
    ctx->pc = 0x109054u;
    {
        const bool branch_taken_0x109054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x109054) {
            ctx->pc = 0x109058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109054u;
            // 0x109058: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109128u;
            goto label_109128;
        }
    }
    ctx->pc = 0x10905Cu;
label_10905c:
    // 0x10905c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x10905cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_109060:
    // 0x109060: 0x52df8  dsll        $a1, $a1, 23
    ctx->pc = 0x109060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 23);
label_109064:
    // 0x109064: 0xc089988  jal         func_226620
label_109068:
    if (ctx->pc == 0x109068u) {
        ctx->pc = 0x109068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109064u;
        // 0x109068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10906Cu;
        goto label_10906c;
    }
    ctx->pc = 0x109064u;
    SET_GPR_U32(ctx, 31, 0x10906Cu);
    ctx->pc = 0x109068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109064u;
    // 0x109068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x109064u, 0x10906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10906Cu;
label_10906c:
    // 0x10906c: 0xc0874fa  jal         func_21D3E8
label_109070:
    if (ctx->pc == 0x109070u) {
        ctx->pc = 0x109070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10906Cu;
        // 0x109070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109074u;
        goto label_109074;
    }
    ctx->pc = 0x10906Cu;
    SET_GPR_U32(ctx, 31, 0x109074u);
    ctx->pc = 0x109070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10906Cu;
    // 0x109070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x10906Cu, 0x109074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109074u;
label_109074:
    // 0x109074: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x109074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_109078:
    // 0x109078: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_10907c:
    if (ctx->pc == 0x10907Cu) {
        ctx->pc = 0x10907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109078u;
        // 0x10907c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109080u;
        goto label_109080;
    }
    ctx->pc = 0x109078u;
    {
        const bool branch_taken_0x109078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109078u;
        // 0x10907c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109078) {
            ctx->pc = 0x10908Cu;
            goto label_10908c;
        }
    }
    ctx->pc = 0x109080u;
label_109080:
    // 0x109080: 0x820501b0  lb          $a1, 0x1B0($s0)
    ctx->pc = 0x109080u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_109084:
    // 0x109084: 0xc106ad8  jal         func_41AB60
label_109088:
    if (ctx->pc == 0x109088u) {
        ctx->pc = 0x109088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109084u;
        // 0x109088: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10908Cu;
        goto label_10908c;
    }
    ctx->pc = 0x109084u;
    SET_GPR_U32(ctx, 31, 0x10908Cu);
    ctx->pc = 0x109088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109084u;
    // 0x109088: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AB60u, 0x109084u, 0x10908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10908Cu;
label_10908c:
    // 0x10908c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x10908cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_109090:
    // 0x109090: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_109094:
    if (ctx->pc == 0x109094u) {
        ctx->pc = 0x109094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109090u;
        // 0x109094: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109098u;
        goto label_109098;
    }
    ctx->pc = 0x109090u;
    {
        const bool branch_taken_0x109090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x109090) {
            ctx->pc = 0x109094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109090u;
            // 0x109094: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1090ACu;
            goto label_1090ac;
        }
    }
    ctx->pc = 0x109098u;
label_109098:
    // 0x109098: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x109098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_10909c:
    // 0x10909c: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_1090a0:
    if (ctx->pc == 0x1090A0u) {
        ctx->pc = 0x1090A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10909Cu;
        // 0x1090a0: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1090A4u;
        goto label_1090a4;
    }
    ctx->pc = 0x10909Cu;
    {
        const bool branch_taken_0x10909c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10909c) {
            ctx->pc = 0x1090A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10909Cu;
            // 0x1090a0: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109128u;
            goto label_109128;
        }
    }
    ctx->pc = 0x1090A4u;
label_1090a4:
    // 0x1090a4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1090a8:
    if (ctx->pc == 0x1090A8u) {
        ctx->pc = 0x1090ACu;
        goto label_1090ac;
    }
    ctx->pc = 0x1090A4u;
    {
        const bool branch_taken_0x1090a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1090a4) {
            ctx->pc = 0x109114u;
            goto label_109114;
        }
    }
    ctx->pc = 0x1090ACu;
label_1090ac:
    // 0x1090ac: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1090acu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_1090b0:
    // 0x1090b0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1090b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_1090b4:
    // 0x1090b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1090b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1090b8:
    // 0x1090b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1090b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1090bc:
    // 0x1090bc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1090bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1090c0:
    // 0x1090c0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1090c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1090c4:
    // 0x1090c4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1090c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1090c8:
    // 0x1090c8: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_1090cc:
    if (ctx->pc == 0x1090CCu) {
        ctx->pc = 0x1090CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090C8u;
        // 0x1090cc: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1090D0u;
        goto label_1090d0;
    }
    ctx->pc = 0x1090C8u;
    {
        const bool branch_taken_0x1090c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1090c8) {
            ctx->pc = 0x1090CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1090C8u;
            // 0x1090cc: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109114u;
            goto label_109114;
        }
    }
    ctx->pc = 0x1090D0u;
label_1090d0:
    // 0x1090d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1090d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1090d4:
    // 0x1090d4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x1090d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_1090d8:
    // 0x1090d8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x1090d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_1090dc:
    // 0x1090dc: 0x40f809  jalr        $v0
label_1090e0:
    if (ctx->pc == 0x1090E0u) {
        ctx->pc = 0x1090E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090DCu;
        // 0x1090e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1090E4u;
        goto label_1090e4;
    }
    ctx->pc = 0x1090DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1090E4u);
        ctx->pc = 0x1090E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090DCu;
        // 0x1090e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1090DCu, 0x1090E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1090E4u;
label_1090e4:
    // 0x1090e4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1090e8:
    if (ctx->pc == 0x1090E8u) {
        ctx->pc = 0x1090E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090E4u;
        // 0x1090e8: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1090ECu;
        goto label_1090ec;
    }
    ctx->pc = 0x1090E4u;
    {
        const bool branch_taken_0x1090e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1090e4) {
            ctx->pc = 0x1090E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1090E4u;
            // 0x1090e8: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109114u;
            goto label_109114;
        }
    }
    ctx->pc = 0x1090ECu;
label_1090ec:
    // 0x1090ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1090ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1090f0:
    // 0x1090f0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x1090f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_1090f4:
    // 0x1090f4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x1090f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_1090f8:
    // 0x1090f8: 0x40f809  jalr        $v0
label_1090fc:
    if (ctx->pc == 0x1090FCu) {
        ctx->pc = 0x1090FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090F8u;
        // 0x1090fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109100u;
        goto label_109100;
    }
    ctx->pc = 0x1090F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x109100u);
        ctx->pc = 0x1090FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090F8u;
        // 0x1090fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1090F8u, 0x109100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109100u;
label_109100:
    // 0x109100: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x109100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_109104:
    // 0x109104: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x109104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_109108:
    // 0x109108: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x109108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10910c:
    // 0x10910c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x10910cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_109110:
    // 0x109110: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x109110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_109114:
    // 0x109114: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_109118:
    if (ctx->pc == 0x109118u) {
        ctx->pc = 0x109118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109114u;
        // 0x109118: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10911Cu;
        goto label_10911c;
    }
    ctx->pc = 0x109114u;
    {
        const bool branch_taken_0x109114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109114) {
            ctx->pc = 0x109118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109114u;
            // 0x109118: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109128u;
            goto label_109128;
        }
    }
    ctx->pc = 0x10911Cu;
label_10911c:
    // 0x10911c: 0x40f809  jalr        $v0
label_109120:
    if (ctx->pc == 0x109120u) {
        ctx->pc = 0x109120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10911Cu;
        // 0x109120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109124u;
        goto label_109124;
    }
    ctx->pc = 0x10911Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x109124u);
        ctx->pc = 0x109120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10911Cu;
        // 0x109120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10911Cu, 0x109124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109124u;
label_109124:
    // 0x109124: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x109124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_109128:
    // 0x109128: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x109128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10912c:
    // 0x10912c: 0xc05d448  jal         func_175120
label_109130:
    if (ctx->pc == 0x109130u) {
        ctx->pc = 0x109130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10912Cu;
        // 0x109130: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109134u;
        goto label_109134;
    }
    ctx->pc = 0x10912Cu;
    SET_GPR_U32(ctx, 31, 0x109134u);
    ctx->pc = 0x109130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10912Cu;
    // 0x109130: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x10912Cu, 0x109134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109134u;
label_109134:
    // 0x109134: 0xc042ef4  jal         func_10BBD0
label_109138:
    if (ctx->pc == 0x109138u) {
        ctx->pc = 0x109138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109134u;
        // 0x109138: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10913Cu;
        goto label_10913c;
    }
    ctx->pc = 0x109134u;
    SET_GPR_U32(ctx, 31, 0x10913Cu);
    ctx->pc = 0x109138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109134u;
    // 0x109138: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x109134u, 0x10913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10913Cu;
label_10913c:
    // 0x10913c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x10913cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_109140:
    // 0x109140: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x109140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_109144:
    // 0x109144: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x109144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_109148:
    // 0x109148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10914c:
    // 0x10914c: 0x3e00008  jr          $ra
label_109150:
    if (ctx->pc == 0x109150u) {
        ctx->pc = 0x109150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10914Cu;
        // 0x109150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109154u;
        goto label_109154;
    }
    ctx->pc = 0x10914Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10914Cu;
        // 0x109150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10914Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109154u;
label_109154:
    // 0x109154: 0x0  nop
    ctx->pc = 0x109154u;
    // NOP
    ctx->pc = 0x109158u;
}
