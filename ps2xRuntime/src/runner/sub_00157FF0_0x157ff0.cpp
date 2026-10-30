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

// Function: sub_00157FF0
// Address: 0x157ff0 - 0x1581e8
void sub_00157FF0_0x157ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157FF0_0x157ff0");
#endif

    switch (ctx->pc) {
        case 0x157ff0u: goto label_157ff0;
        case 0x157ff4u: goto label_157ff4;
        case 0x157ff8u: goto label_157ff8;
        case 0x157ffcu: goto label_157ffc;
        case 0x158000u: goto label_158000;
        case 0x158004u: goto label_158004;
        case 0x158008u: goto label_158008;
        case 0x15800cu: goto label_15800c;
        case 0x158010u: goto label_158010;
        case 0x158014u: goto label_158014;
        case 0x158018u: goto label_158018;
        case 0x15801cu: goto label_15801c;
        case 0x158020u: goto label_158020;
        case 0x158024u: goto label_158024;
        case 0x158028u: goto label_158028;
        case 0x15802cu: goto label_15802c;
        case 0x158030u: goto label_158030;
        case 0x158034u: goto label_158034;
        case 0x158038u: goto label_158038;
        case 0x15803cu: goto label_15803c;
        case 0x158040u: goto label_158040;
        case 0x158044u: goto label_158044;
        case 0x158048u: goto label_158048;
        case 0x15804cu: goto label_15804c;
        case 0x158050u: goto label_158050;
        case 0x158054u: goto label_158054;
        case 0x158058u: goto label_158058;
        case 0x15805cu: goto label_15805c;
        case 0x158060u: goto label_158060;
        case 0x158064u: goto label_158064;
        case 0x158068u: goto label_158068;
        case 0x15806cu: goto label_15806c;
        case 0x158070u: goto label_158070;
        case 0x158074u: goto label_158074;
        case 0x158078u: goto label_158078;
        case 0x15807cu: goto label_15807c;
        case 0x158080u: goto label_158080;
        case 0x158084u: goto label_158084;
        case 0x158088u: goto label_158088;
        case 0x15808cu: goto label_15808c;
        case 0x158090u: goto label_158090;
        case 0x158094u: goto label_158094;
        case 0x158098u: goto label_158098;
        case 0x15809cu: goto label_15809c;
        case 0x1580a0u: goto label_1580a0;
        case 0x1580a4u: goto label_1580a4;
        case 0x1580a8u: goto label_1580a8;
        case 0x1580acu: goto label_1580ac;
        case 0x1580b0u: goto label_1580b0;
        case 0x1580b4u: goto label_1580b4;
        case 0x1580b8u: goto label_1580b8;
        case 0x1580bcu: goto label_1580bc;
        case 0x1580c0u: goto label_1580c0;
        case 0x1580c4u: goto label_1580c4;
        case 0x1580c8u: goto label_1580c8;
        case 0x1580ccu: goto label_1580cc;
        case 0x1580d0u: goto label_1580d0;
        case 0x1580d4u: goto label_1580d4;
        case 0x1580d8u: goto label_1580d8;
        case 0x1580dcu: goto label_1580dc;
        case 0x1580e0u: goto label_1580e0;
        case 0x1580e4u: goto label_1580e4;
        case 0x1580e8u: goto label_1580e8;
        case 0x1580ecu: goto label_1580ec;
        case 0x1580f0u: goto label_1580f0;
        case 0x1580f4u: goto label_1580f4;
        case 0x1580f8u: goto label_1580f8;
        case 0x1580fcu: goto label_1580fc;
        case 0x158100u: goto label_158100;
        case 0x158104u: goto label_158104;
        case 0x158108u: goto label_158108;
        case 0x15810cu: goto label_15810c;
        case 0x158110u: goto label_158110;
        case 0x158114u: goto label_158114;
        case 0x158118u: goto label_158118;
        case 0x15811cu: goto label_15811c;
        case 0x158120u: goto label_158120;
        case 0x158124u: goto label_158124;
        case 0x158128u: goto label_158128;
        case 0x15812cu: goto label_15812c;
        case 0x158130u: goto label_158130;
        case 0x158134u: goto label_158134;
        case 0x158138u: goto label_158138;
        case 0x15813cu: goto label_15813c;
        case 0x158140u: goto label_158140;
        case 0x158144u: goto label_158144;
        case 0x158148u: goto label_158148;
        case 0x15814cu: goto label_15814c;
        case 0x158150u: goto label_158150;
        case 0x158154u: goto label_158154;
        case 0x158158u: goto label_158158;
        case 0x15815cu: goto label_15815c;
        case 0x158160u: goto label_158160;
        case 0x158164u: goto label_158164;
        case 0x158168u: goto label_158168;
        case 0x15816cu: goto label_15816c;
        case 0x158170u: goto label_158170;
        case 0x158174u: goto label_158174;
        case 0x158178u: goto label_158178;
        case 0x15817cu: goto label_15817c;
        case 0x158180u: goto label_158180;
        case 0x158184u: goto label_158184;
        case 0x158188u: goto label_158188;
        case 0x15818cu: goto label_15818c;
        case 0x158190u: goto label_158190;
        case 0x158194u: goto label_158194;
        case 0x158198u: goto label_158198;
        case 0x15819cu: goto label_15819c;
        case 0x1581a0u: goto label_1581a0;
        case 0x1581a4u: goto label_1581a4;
        case 0x1581a8u: goto label_1581a8;
        case 0x1581acu: goto label_1581ac;
        case 0x1581b0u: goto label_1581b0;
        case 0x1581b4u: goto label_1581b4;
        case 0x1581b8u: goto label_1581b8;
        case 0x1581bcu: goto label_1581bc;
        case 0x1581c0u: goto label_1581c0;
        case 0x1581c4u: goto label_1581c4;
        case 0x1581c8u: goto label_1581c8;
        case 0x1581ccu: goto label_1581cc;
        case 0x1581d0u: goto label_1581d0;
        case 0x1581d4u: goto label_1581d4;
        case 0x1581d8u: goto label_1581d8;
        case 0x1581dcu: goto label_1581dc;
        case 0x1581e0u: goto label_1581e0;
        case 0x1581e4u: goto label_1581e4;
        default: break;
    }

    ctx->pc = 0x157ff0u;

label_157ff0:
    // 0x157ff0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x157ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_157ff4:
    // 0x157ff4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x157ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_157ff8:
    // 0x157ff8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x157ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_157ffc:
    // 0x157ffc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158000:
    // 0x158000: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x158000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_158004:
    // 0x158004: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x158004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_158008:
    // 0x158008: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x158008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_15800c:
    // 0x15800c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x15800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_158010:
    // 0x158010: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x158010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_158014:
    // 0x158014: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x158014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_158018:
    // 0x158018: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x158018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_15801c:
    // 0x15801c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_158020:
    // 0x158020: 0xc0517d8  jal         func_145F60
label_158024:
    if (ctx->pc == 0x158024u) {
        ctx->pc = 0x158024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158020u;
        // 0x158024: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x158028u;
        goto label_158028;
    }
    ctx->pc = 0x158020u;
    SET_GPR_U32(ctx, 31, 0x158028u);
    ctx->pc = 0x158024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158020u;
    // 0x158024: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x158020u, 0x158028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158028u;
label_158028:
    // 0x158028: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x158028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15802c:
    // 0x15802c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15802cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_158030:
    // 0x158030: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x158030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_158034:
    // 0x158034: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x158034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_158038:
    // 0x158038: 0x40f809  jalr        $v0
label_15803c:
    if (ctx->pc == 0x15803Cu) {
        ctx->pc = 0x15803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158038u;
        // 0x15803c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158040u;
        goto label_158040;
    }
    ctx->pc = 0x158038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158040u);
        ctx->pc = 0x15803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158038u;
        // 0x15803c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158038u, 0x158040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158040u;
label_158040:
    // 0x158040: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x158040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_158044:
    // 0x158044: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x158044u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_158048:
    // 0x158048: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
label_15804c:
    if (ctx->pc == 0x15804Cu) {
        ctx->pc = 0x15804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158048u;
        // 0x15804c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158050u;
        goto label_158050;
    }
    ctx->pc = 0x158048u;
    {
        const bool branch_taken_0x158048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158048u;
        // 0x15804c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158048) {
            ctx->pc = 0x1581C0u;
            goto label_1581c0;
        }
    }
    ctx->pc = 0x158050u;
label_158050:
    // 0x158050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158054:
    // 0x158054: 0xc05587e  jal         func_1561F8
label_158058:
    if (ctx->pc == 0x158058u) {
        ctx->pc = 0x158058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158054u;
        // 0x158058: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15805Cu;
        goto label_15805c;
    }
    ctx->pc = 0x158054u;
    SET_GPR_U32(ctx, 31, 0x15805Cu);
    ctx->pc = 0x158058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158054u;
    // 0x158058: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x158054u, 0x15805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15805Cu;
label_15805c:
    // 0x15805c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x15805cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_158060:
    // 0x158060: 0xc055888  jal         func_156220
label_158064:
    if (ctx->pc == 0x158064u) {
        ctx->pc = 0x158064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158060u;
        // 0x158064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158068u;
        goto label_158068;
    }
    ctx->pc = 0x158060u;
    SET_GPR_U32(ctx, 31, 0x158068u);
    ctx->pc = 0x158064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158060u;
    // 0x158064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x158060u, 0x158068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158068u;
label_158068:
    // 0x158068: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x158068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15806c:
    // 0x15806c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15806cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_158070:
    // 0x158070: 0xc0e8c52  jal         func_3A3148
label_158074:
    if (ctx->pc == 0x158074u) {
        ctx->pc = 0x158074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158070u;
        // 0x158074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158078u;
        goto label_158078;
    }
    ctx->pc = 0x158070u;
    SET_GPR_U32(ctx, 31, 0x158078u);
    ctx->pc = 0x158074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158070u;
    // 0x158074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x158070u, 0x158078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158078u;
label_158078:
    // 0x158078: 0xc0558b2  jal         func_1562C8
label_15807c:
    if (ctx->pc == 0x15807Cu) {
        ctx->pc = 0x15807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158078u;
        // 0x15807c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158080u;
        goto label_158080;
    }
    ctx->pc = 0x158078u;
    SET_GPR_U32(ctx, 31, 0x158080u);
    ctx->pc = 0x15807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158078u;
    // 0x15807c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x158078u, 0x158080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158080u;
label_158080:
    // 0x158080: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x158080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_158084:
    // 0x158084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x158084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158088:
    // 0x158088: 0x8c43536c  lw          $v1, 0x536C($v0)
    ctx->pc = 0x158088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21356)));
label_15808c:
    // 0x15808c: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
label_158090:
    if (ctx->pc == 0x158090u) {
        ctx->pc = 0x158090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15808Cu;
        // 0x158090: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158094u;
        goto label_158094;
    }
    ctx->pc = 0x15808Cu;
    {
        const bool branch_taken_0x15808c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x158090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15808Cu;
        // 0x158090: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15808c) {
            ctx->pc = 0x1580C4u;
            goto label_1580c4;
        }
    }
    ctx->pc = 0x158094u;
label_158094:
    // 0x158094: 0x8e8347c4  lw          $v1, 0x47C4($s4)
    ctx->pc = 0x158094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
label_158098:
    // 0x158098: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x158098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_15809c:
    // 0x15809c: 0xc0d4456  jal         func_351158
label_1580a0:
    if (ctx->pc == 0x1580A0u) {
        ctx->pc = 0x1580A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15809Cu;
        // 0x1580a0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1580A4u;
        goto label_1580a4;
    }
    ctx->pc = 0x15809Cu;
    SET_GPR_U32(ctx, 31, 0x1580A4u);
    ctx->pc = 0x1580A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15809Cu;
    // 0x1580a0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351158u, 0x15809Cu, 0x1580A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580A4u;
label_1580a4:
    // 0x1580a4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1580a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1580a8:
    // 0x1580a8: 0xc0e8c6a  jal         func_3A31A8
label_1580ac:
    if (ctx->pc == 0x1580ACu) {
        ctx->pc = 0x1580ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580A8u;
        // 0x1580ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1580B0u;
        goto label_1580b0;
    }
    ctx->pc = 0x1580A8u;
    SET_GPR_U32(ctx, 31, 0x1580B0u);
    ctx->pc = 0x1580ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580A8u;
    // 0x1580ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x1580A8u, 0x1580B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580B0u;
label_1580b0:
    // 0x1580b0: 0xc0926e6  jal         func_249B98
label_1580b4:
    if (ctx->pc == 0x1580B4u) {
        ctx->pc = 0x1580B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580B0u;
        // 0x1580b4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1580B8u;
        goto label_1580b8;
    }
    ctx->pc = 0x1580B0u;
    SET_GPR_U32(ctx, 31, 0x1580B8u);
    ctx->pc = 0x1580B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580B0u;
    // 0x1580b4: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B98u, 0x1580B0u, 0x1580B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580B8u;
label_1580b8:
    // 0x1580b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1580b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1580bc:
    // 0x1580bc: 0xc0e8c6a  jal         func_3A31A8
label_1580c0:
    if (ctx->pc == 0x1580C0u) {
        ctx->pc = 0x1580C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580BCu;
        // 0x1580c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1580C4u;
        goto label_1580c4;
    }
    ctx->pc = 0x1580BCu;
    SET_GPR_U32(ctx, 31, 0x1580C4u);
    ctx->pc = 0x1580C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580BCu;
    // 0x1580c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x1580BCu, 0x1580C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580C4u;
label_1580c4:
    // 0x1580c4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1580c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1580c8:
    // 0x1580c8: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x1580c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
label_1580cc:
    // 0x1580cc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1580ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1580d0:
    // 0x1580d0: 0xc062a60  jal         func_18A980
label_1580d4:
    if (ctx->pc == 0x1580D4u) {
        ctx->pc = 0x1580D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580D0u;
        // 0x1580d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1580D8u;
        goto label_1580d8;
    }
    ctx->pc = 0x1580D0u;
    SET_GPR_U32(ctx, 31, 0x1580D8u);
    ctx->pc = 0x1580D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580D0u;
    // 0x1580d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x1580D0u, 0x1580D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580D8u;
label_1580d8:
    // 0x1580d8: 0x8e05cdb4  lw          $a1, -0x324C($s0)
    ctx->pc = 0x1580d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_1580dc:
    // 0x1580dc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1580dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1580e0:
    // 0x1580e0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1580e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1580e4:
    // 0x1580e4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1580e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1580e8:
    // 0x1580e8: 0x60f809  jalr        $v1
label_1580ec:
    if (ctx->pc == 0x1580ECu) {
        ctx->pc = 0x1580ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580E8u;
        // 0x1580ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1580F0u;
        goto label_1580f0;
    }
    ctx->pc = 0x1580E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1580F0u);
        ctx->pc = 0x1580ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580E8u;
        // 0x1580ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1580E8u, 0x1580F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1580F0u;
label_1580f0:
    // 0x1580f0: 0xc103e28  jal         func_40F8A0
label_1580f4:
    if (ctx->pc == 0x1580F4u) {
        ctx->pc = 0x1580F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580F0u;
        // 0x1580f4: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1580F8u;
        goto label_1580f8;
    }
    ctx->pc = 0x1580F0u;
    SET_GPR_U32(ctx, 31, 0x1580F8u);
    ctx->pc = 0x1580F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580F0u;
    // 0x1580f4: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x1580F0u, 0x1580F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1580F8u;
label_1580f8:
    // 0x1580f8: 0xc06181a  jal         func_186068
label_1580fc:
    if (ctx->pc == 0x1580FCu) {
        ctx->pc = 0x1580FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580F8u;
        // 0x1580fc: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158100u;
        goto label_158100;
    }
    ctx->pc = 0x1580F8u;
    SET_GPR_U32(ctx, 31, 0x158100u);
    ctx->pc = 0x1580FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580F8u;
    // 0x1580fc: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x1580F8u, 0x158100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158100u;
label_158100:
    // 0x158100: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x158100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_158104:
    // 0x158104: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x158104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_158108:
    // 0x158108: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x158108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15810c:
    // 0x15810c: 0xc047e6c  jal         func_11F9B0
label_158110:
    if (ctx->pc == 0x158110u) {
        ctx->pc = 0x158110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15810Cu;
        // 0x158110: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158114u;
        goto label_158114;
    }
    ctx->pc = 0x15810Cu;
    SET_GPR_U32(ctx, 31, 0x158114u);
    ctx->pc = 0x158110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15810Cu;
    // 0x158110: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15810Cu, 0x158114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158114u;
label_158114:
    // 0x158114: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x158114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_158118:
    // 0x158118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15811c:
    // 0x15811c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x15811cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_158120:
    // 0x158120: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x158120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_158124:
    // 0x158124: 0xc0f809  jalr        $a2
label_158128:
    if (ctx->pc == 0x158128u) {
        ctx->pc = 0x158128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158124u;
        // 0x158128: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15812Cu;
        goto label_15812c;
    }
    ctx->pc = 0x158124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15812Cu);
        ctx->pc = 0x158128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158124u;
        // 0x158128: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158124u, 0x15812Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15812Cu;
label_15812c:
    // 0x15812c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x15812cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_158130:
    // 0x158130: 0x2e640002  sltiu       $a0, $s3, 0x2
    ctx->pc = 0x158130u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_158134:
    // 0x158134: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x158134u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_158138:
    // 0x158138: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x158138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15813c:
    // 0x15813c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x15813cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_158140:
    // 0x158140: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_158144:
    if (ctx->pc == 0x158144u) {
        ctx->pc = 0x158144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158140u;
        // 0x158144: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158148u;
        goto label_158148;
    }
    ctx->pc = 0x158140u;
    {
        const bool branch_taken_0x158140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x158144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158140u;
        // 0x158144: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158140) {
            ctx->pc = 0x158108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158108;
        }
    }
    ctx->pc = 0x158148u;
label_158148:
    // 0x158148: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x158148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15814c:
    // 0x15814c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15814cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_158150:
    // 0x158150: 0xc043e04  jal         func_10F810
label_158154:
    if (ctx->pc == 0x158154u) {
        ctx->pc = 0x158154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158150u;
        // 0x158154: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158158u;
        goto label_158158;
    }
    ctx->pc = 0x158150u;
    SET_GPR_U32(ctx, 31, 0x158158u);
    ctx->pc = 0x158154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158150u;
    // 0x158154: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x158150u, 0x158158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158158u;
label_158158:
    // 0x158158: 0xc055902  jal         func_156408
label_15815c:
    if (ctx->pc == 0x15815Cu) {
        ctx->pc = 0x15815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158158u;
        // 0x15815c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158160u;
        goto label_158160;
    }
    ctx->pc = 0x158158u;
    SET_GPR_U32(ctx, 31, 0x158160u);
    ctx->pc = 0x15815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158158u;
    // 0x15815c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156408u, 0x158158u, 0x158160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158160u;
label_158160:
    // 0x158160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158164:
    // 0x158164: 0xc055996  jal         func_156658
label_158168:
    if (ctx->pc == 0x158168u) {
        ctx->pc = 0x158168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158164u;
        // 0x158168: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15816Cu;
        goto label_15816c;
    }
    ctx->pc = 0x158164u;
    SET_GPR_U32(ctx, 31, 0x15816Cu);
    ctx->pc = 0x158168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158164u;
    // 0x158168: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156658u, 0x158164u, 0x15816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15816Cu;
label_15816c:
    // 0x15816c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_158170:
    // 0x158170: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x158170u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_158174:
    // 0x158174: 0x8c452b04  lw          $a1, 0x2B04($v0)
    ctx->pc = 0x158174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_158178:
    // 0x158178: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x158178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15817c:
    // 0x15817c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x15817cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_158180:
    // 0x158180: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x158180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_158184:
    // 0x158184: 0x60f809  jalr        $v1
label_158188:
    if (ctx->pc == 0x158188u) {
        ctx->pc = 0x158188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158184u;
        // 0x158188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15818Cu;
        goto label_15818c;
    }
    ctx->pc = 0x158184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15818Cu);
        ctx->pc = 0x158188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158184u;
        // 0x158188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158184u, 0x15818Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15818Cu;
label_15818c:
    // 0x15818c: 0x8ea5cdb4  lw          $a1, -0x324C($s5)
    ctx->pc = 0x15818cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_158190:
    // 0x158190: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x158190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_158194:
    // 0x158194: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x158194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_158198:
    // 0x158198: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x158198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15819c:
    // 0x15819c: 0x60f809  jalr        $v1
label_1581a0:
    if (ctx->pc == 0x1581A0u) {
        ctx->pc = 0x1581A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15819Cu;
        // 0x1581a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1581A4u;
        goto label_1581a4;
    }
    ctx->pc = 0x15819Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1581A4u);
        ctx->pc = 0x1581A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15819Cu;
        // 0x1581a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15819Cu, 0x1581A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1581A4u;
label_1581a4:
    // 0x1581a4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1581a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1581a8:
    // 0x1581a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1581a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1581ac:
    // 0x1581ac: 0xc0552b8  jal         func_154AE0
label_1581b0:
    if (ctx->pc == 0x1581B0u) {
        ctx->pc = 0x1581B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581ACu;
        // 0x1581b0: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1581B4u;
        goto label_1581b4;
    }
    ctx->pc = 0x1581ACu;
    SET_GPR_U32(ctx, 31, 0x1581B4u);
    ctx->pc = 0x1581B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581ACu;
    // 0x1581b0: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x1581ACu, 0x1581B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581B4u;
label_1581b4:
    // 0x1581b4: 0xc055880  jal         func_156200
label_1581b8:
    if (ctx->pc == 0x1581B8u) {
        ctx->pc = 0x1581B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581B4u;
        // 0x1581b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1581BCu;
        goto label_1581bc;
    }
    ctx->pc = 0x1581B4u;
    SET_GPR_U32(ctx, 31, 0x1581BCu);
    ctx->pc = 0x1581B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581B4u;
    // 0x1581b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x1581B4u, 0x1581BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581BCu;
label_1581bc:
    // 0x1581bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1581bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1581c0:
    // 0x1581c0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1581c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1581c4:
    // 0x1581c4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1581c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1581c8:
    // 0x1581c8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1581c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1581cc:
    // 0x1581cc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1581ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1581d0:
    // 0x1581d0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1581d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1581d4:
    // 0x1581d4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1581d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1581d8:
    // 0x1581d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1581d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1581dc:
    // 0x1581dc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1581dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1581e0:
    // 0x1581e0: 0x3e00008  jr          $ra
label_1581e4:
    if (ctx->pc == 0x1581E4u) {
        ctx->pc = 0x1581E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581E0u;
        // 0x1581e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1581E8u;
        goto label_fallthrough_0x1581e0;
    }
    ctx->pc = 0x1581E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1581E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581E0u;
        // 0x1581e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1581E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1581e0:
    ctx->pc = 0x1581E8u;
}
