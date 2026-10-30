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

// Function: sub_00313028
// Address: 0x313028 - 0x3131a8
void sub_00313028_0x313028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313028_0x313028");
#endif

    switch (ctx->pc) {
        case 0x313028u: goto label_313028;
        case 0x31302cu: goto label_31302c;
        case 0x313030u: goto label_313030;
        case 0x313034u: goto label_313034;
        case 0x313038u: goto label_313038;
        case 0x31303cu: goto label_31303c;
        case 0x313040u: goto label_313040;
        case 0x313044u: goto label_313044;
        case 0x313048u: goto label_313048;
        case 0x31304cu: goto label_31304c;
        case 0x313050u: goto label_313050;
        case 0x313054u: goto label_313054;
        case 0x313058u: goto label_313058;
        case 0x31305cu: goto label_31305c;
        case 0x313060u: goto label_313060;
        case 0x313064u: goto label_313064;
        case 0x313068u: goto label_313068;
        case 0x31306cu: goto label_31306c;
        case 0x313070u: goto label_313070;
        case 0x313074u: goto label_313074;
        case 0x313078u: goto label_313078;
        case 0x31307cu: goto label_31307c;
        case 0x313080u: goto label_313080;
        case 0x313084u: goto label_313084;
        case 0x313088u: goto label_313088;
        case 0x31308cu: goto label_31308c;
        case 0x313090u: goto label_313090;
        case 0x313094u: goto label_313094;
        case 0x313098u: goto label_313098;
        case 0x31309cu: goto label_31309c;
        case 0x3130a0u: goto label_3130a0;
        case 0x3130a4u: goto label_3130a4;
        case 0x3130a8u: goto label_3130a8;
        case 0x3130acu: goto label_3130ac;
        case 0x3130b0u: goto label_3130b0;
        case 0x3130b4u: goto label_3130b4;
        case 0x3130b8u: goto label_3130b8;
        case 0x3130bcu: goto label_3130bc;
        case 0x3130c0u: goto label_3130c0;
        case 0x3130c4u: goto label_3130c4;
        case 0x3130c8u: goto label_3130c8;
        case 0x3130ccu: goto label_3130cc;
        case 0x3130d0u: goto label_3130d0;
        case 0x3130d4u: goto label_3130d4;
        case 0x3130d8u: goto label_3130d8;
        case 0x3130dcu: goto label_3130dc;
        case 0x3130e0u: goto label_3130e0;
        case 0x3130e4u: goto label_3130e4;
        case 0x3130e8u: goto label_3130e8;
        case 0x3130ecu: goto label_3130ec;
        case 0x3130f0u: goto label_3130f0;
        case 0x3130f4u: goto label_3130f4;
        case 0x3130f8u: goto label_3130f8;
        case 0x3130fcu: goto label_3130fc;
        case 0x313100u: goto label_313100;
        case 0x313104u: goto label_313104;
        case 0x313108u: goto label_313108;
        case 0x31310cu: goto label_31310c;
        case 0x313110u: goto label_313110;
        case 0x313114u: goto label_313114;
        case 0x313118u: goto label_313118;
        case 0x31311cu: goto label_31311c;
        case 0x313120u: goto label_313120;
        case 0x313124u: goto label_313124;
        case 0x313128u: goto label_313128;
        case 0x31312cu: goto label_31312c;
        case 0x313130u: goto label_313130;
        case 0x313134u: goto label_313134;
        case 0x313138u: goto label_313138;
        case 0x31313cu: goto label_31313c;
        case 0x313140u: goto label_313140;
        case 0x313144u: goto label_313144;
        case 0x313148u: goto label_313148;
        case 0x31314cu: goto label_31314c;
        case 0x313150u: goto label_313150;
        case 0x313154u: goto label_313154;
        case 0x313158u: goto label_313158;
        case 0x31315cu: goto label_31315c;
        case 0x313160u: goto label_313160;
        case 0x313164u: goto label_313164;
        case 0x313168u: goto label_313168;
        case 0x31316cu: goto label_31316c;
        case 0x313170u: goto label_313170;
        case 0x313174u: goto label_313174;
        case 0x313178u: goto label_313178;
        case 0x31317cu: goto label_31317c;
        case 0x313180u: goto label_313180;
        case 0x313184u: goto label_313184;
        case 0x313188u: goto label_313188;
        case 0x31318cu: goto label_31318c;
        case 0x313190u: goto label_313190;
        case 0x313194u: goto label_313194;
        case 0x313198u: goto label_313198;
        case 0x31319cu: goto label_31319c;
        case 0x3131a0u: goto label_3131a0;
        case 0x3131a4u: goto label_3131a4;
        default: break;
    }

    ctx->pc = 0x313028u;

label_313028:
    // 0x313028: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x313028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_31302c:
    // 0x31302c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x31302cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_313030:
    // 0x313030: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x313030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_313034:
    // 0x313034: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x313034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_313038:
    // 0x313038: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x313038u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31303c:
    // 0x31303c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x31303cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_313040:
    // 0x313040: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x313040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_313044:
    // 0x313044: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x313044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_313048:
    // 0x313048: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x313048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_31304c:
    // 0x31304c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x31304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_313050:
    // 0x313050: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x313050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_313054:
    // 0x313054: 0xc087502  jal         func_21D408
label_313058:
    if (ctx->pc == 0x313058u) {
        ctx->pc = 0x313058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313054u;
        // 0x313058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31305Cu;
        goto label_31305c;
    }
    ctx->pc = 0x313054u;
    SET_GPR_U32(ctx, 31, 0x31305Cu);
    ctx->pc = 0x313058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313054u;
    // 0x313058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x313054u, 0x31305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31305Cu;
label_31305c:
    // 0x31305c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31305cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313060:
    // 0x313060: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x313060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_313064:
    // 0x313064: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x313064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_313068:
    // 0x313068: 0x14430045  bne         $v0, $v1, . + 4 + (0x45 << 2)
label_31306c:
    if (ctx->pc == 0x31306Cu) {
        ctx->pc = 0x31306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313068u;
        // 0x31306c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313070u;
        goto label_313070;
    }
    ctx->pc = 0x313068u;
    {
        const bool branch_taken_0x313068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313068u;
        // 0x31306c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313068) {
            ctx->pc = 0x313180u;
            goto label_313180;
        }
    }
    ctx->pc = 0x313070u;
label_313070:
    // 0x313070: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x313070u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_313074:
    // 0x313074: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x313074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_313078:
    // 0x313078: 0xc0e409a  jal         func_390268
label_31307c:
    if (ctx->pc == 0x31307Cu) {
        ctx->pc = 0x31307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313078u;
        // 0x31307c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313080u;
        goto label_313080;
    }
    ctx->pc = 0x313078u;
    SET_GPR_U32(ctx, 31, 0x313080u);
    ctx->pc = 0x31307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313078u;
    // 0x31307c: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x313078u, 0x313080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313080u;
label_313080:
    // 0x313080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313084:
    // 0x313084: 0x5200003e  beql        $s0, $zero, . + 4 + (0x3E << 2)
label_313088:
    if (ctx->pc == 0x313088u) {
        ctx->pc = 0x313088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313084u;
        // 0x313088: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31308Cu;
        goto label_31308c;
    }
    ctx->pc = 0x313084u;
    {
        const bool branch_taken_0x313084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x313084) {
            ctx->pc = 0x313088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313084u;
            // 0x313088: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313180u;
            goto label_313180;
        }
    }
    ctx->pc = 0x31308Cu;
label_31308c:
    // 0x31308c: 0xc087502  jal         func_21D408
label_313090:
    if (ctx->pc == 0x313090u) {
        ctx->pc = 0x313090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31308Cu;
        // 0x313090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313094u;
        goto label_313094;
    }
    ctx->pc = 0x31308Cu;
    SET_GPR_U32(ctx, 31, 0x313094u);
    ctx->pc = 0x313090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31308Cu;
    // 0x313090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31308Cu, 0x313094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313094u;
label_313094:
    // 0x313094: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x313094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_313098:
    // 0x313098: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x313098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
label_31309c:
    // 0x31309c: 0x54620038  bnel        $v1, $v0, . + 4 + (0x38 << 2)
label_3130a0:
    if (ctx->pc == 0x3130A0u) {
        ctx->pc = 0x3130A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31309Cu;
        // 0x3130a0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3130A4u;
        goto label_3130a4;
    }
    ctx->pc = 0x31309Cu;
    {
        const bool branch_taken_0x31309c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31309c) {
            ctx->pc = 0x3130A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31309Cu;
            // 0x3130a0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313180u;
            goto label_313180;
        }
    }
    ctx->pc = 0x3130A4u;
label_3130a4:
    // 0x3130a4: 0x26540090  addiu       $s4, $s2, 0x90
    ctx->pc = 0x3130a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_3130a8:
    // 0x3130a8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x3130a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_3130ac:
    // 0x3130ac: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x3130acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_3130b0:
    // 0x3130b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3130b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3130b4:
    // 0x3130b4: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x3130b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_3130b8:
    // 0x3130b8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x3130b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_3130bc:
    // 0x3130bc: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x3130bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_3130c0:
    // 0x3130c0: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x3130c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
label_3130c4:
    // 0x3130c4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3130c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3130c8:
    // 0x3130c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3130c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3130cc:
    // 0x3130cc: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3130ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_3130d0:
    // 0x3130d0: 0xc1067b8  jal         func_419EE0
label_3130d4:
    if (ctx->pc == 0x3130D4u) {
        ctx->pc = 0x3130D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130D0u;
        // 0x3130d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3130D8u;
        goto label_3130d8;
    }
    ctx->pc = 0x3130D0u;
    SET_GPR_U32(ctx, 31, 0x3130D8u);
    ctx->pc = 0x3130D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3130D0u;
    // 0x3130d4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x3130D0u, 0x3130D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3130D8u;
label_3130d8:
    // 0x3130d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3130d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3130dc:
    // 0x3130dc: 0x52500028  beql        $s2, $s0, . + 4 + (0x28 << 2)
label_3130e0:
    if (ctx->pc == 0x3130E0u) {
        ctx->pc = 0x3130E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130DCu;
        // 0x3130e0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3130E4u;
        goto label_3130e4;
    }
    ctx->pc = 0x3130DCu;
    {
        const bool branch_taken_0x3130dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x3130dc) {
            ctx->pc = 0x3130E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3130DCu;
            // 0x3130e0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313180u;
            goto label_313180;
        }
    }
    ctx->pc = 0x3130E4u;
label_3130e4:
    // 0x3130e4: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x3130e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_3130e8:
    // 0x3130e8: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x3130e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_3130ec:
    // 0x3130ec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3130ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3130f0:
    // 0x3130f0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x3130f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3130f4:
    // 0x3130f4: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x3130f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_3130f8:
    // 0x3130f8: 0xc0cdb38  jal         func_336CE0
label_3130fc:
    if (ctx->pc == 0x3130FCu) {
        ctx->pc = 0x3130FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130F8u;
        // 0x3130fc: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313100u;
        goto label_313100;
    }
    ctx->pc = 0x3130F8u;
    SET_GPR_U32(ctx, 31, 0x313100u);
    ctx->pc = 0x3130FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3130F8u;
    // 0x3130fc: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3130F8u, 0x313100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313100u;
label_313100:
    // 0x313100: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x313100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_313104:
    // 0x313104: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x313104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_313108:
    // 0x313108: 0x0  nop
    ctx->pc = 0x313108u;
    // NOP
label_31310c:
    // 0x31310c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31310cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313110:
    // 0x313110: 0x0  nop
    ctx->pc = 0x313110u;
    // NOP
label_313114:
    // 0x313114: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_313118:
    if (ctx->pc == 0x313118u) {
        ctx->pc = 0x313118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313114u;
        // 0x313118: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31311Cu;
        goto label_31311c;
    }
    ctx->pc = 0x313114u;
    {
        const bool branch_taken_0x313114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313114u;
        // 0x313118: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313114) {
            ctx->pc = 0x313180u;
            goto label_313180;
        }
    }
    ctx->pc = 0x31311Cu;
label_31311c:
    // 0x31311c: 0xc0a3630  jal         func_28D8C0
label_313120:
    if (ctx->pc == 0x313120u) {
        ctx->pc = 0x313120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31311Cu;
        // 0x313120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313124u;
        goto label_313124;
    }
    ctx->pc = 0x31311Cu;
    SET_GPR_U32(ctx, 31, 0x313124u);
    ctx->pc = 0x313120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31311Cu;
    // 0x313120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31311Cu, 0x313124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313124u;
label_313124:
    // 0x313124: 0xc0a3628  jal         func_28D8A0
label_313128:
    if (ctx->pc == 0x313128u) {
        ctx->pc = 0x313128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313124u;
        // 0x313128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31312Cu;
        goto label_31312c;
    }
    ctx->pc = 0x313124u;
    SET_GPR_U32(ctx, 31, 0x31312Cu);
    ctx->pc = 0x313128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313124u;
    // 0x313128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x313124u, 0x31312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31312Cu;
label_31312c:
    // 0x31312c: 0xc0a4e54  jal         func_293950
label_313130:
    if (ctx->pc == 0x313130u) {
        ctx->pc = 0x313134u;
        goto label_313134;
    }
    ctx->pc = 0x31312Cu;
    SET_GPR_U32(ctx, 31, 0x313134u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31312Cu, 0x313134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313134u;
label_313134:
    // 0x313134: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313138:
    // 0x313138: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_31313c:
    if (ctx->pc == 0x31313Cu) {
        ctx->pc = 0x31313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313138u;
        // 0x31313c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313140u;
        goto label_313140;
    }
    ctx->pc = 0x313138u;
    {
        const bool branch_taken_0x313138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x313138) {
            ctx->pc = 0x31313Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313138u;
            // 0x31313c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31316Cu;
            goto label_31316c;
        }
    }
    ctx->pc = 0x313140u;
label_313140:
    // 0x313140: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x313140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_313144:
    // 0x313144: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x313144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_313148:
    // 0x313148: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x313148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31314c:
    // 0x31314c: 0x40f809  jalr        $v0
label_313150:
    if (ctx->pc == 0x313150u) {
        ctx->pc = 0x313150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31314Cu;
        // 0x313150: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313154u;
        goto label_313154;
    }
    ctx->pc = 0x31314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x313154u);
        ctx->pc = 0x313150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31314Cu;
        // 0x313150: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31314Cu, 0x313154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x313154u;
label_313154:
    // 0x313154: 0xc62c013c  lwc1        $f12, 0x13C($s1)
    ctx->pc = 0x313154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_313158:
    // 0x313158: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x313158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31315c:
    // 0x31315c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31315cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313160:
    // 0x313160: 0xc0af288  jal         func_2BCA20
label_313164:
    if (ctx->pc == 0x313164u) {
        ctx->pc = 0x313164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313160u;
        // 0x313164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313168u;
        goto label_313168;
    }
    ctx->pc = 0x313160u;
    SET_GPR_U32(ctx, 31, 0x313168u);
    ctx->pc = 0x313164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313160u;
    // 0x313164: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCA20u, 0x313160u, 0x313168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313168u;
label_313168:
    // 0x313168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x313168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31316c:
    // 0x31316c: 0xc0a35d6  jal         func_28D758
label_313170:
    if (ctx->pc == 0x313170u) {
        ctx->pc = 0x313170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31316Cu;
        // 0x313170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313174u;
        goto label_313174;
    }
    ctx->pc = 0x31316Cu;
    SET_GPR_U32(ctx, 31, 0x313174u);
    ctx->pc = 0x313170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31316Cu;
    // 0x313170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31316Cu, 0x313174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313174u;
label_313174:
    // 0x313174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x313174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313178:
    // 0x313178: 0xa2c30018  sb          $v1, 0x18($s6)
    ctx->pc = 0x313178u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 24), (uint8_t)GPR_U32(ctx, 3));
label_31317c:
    // 0x31317c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x31317cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_313180:
    // 0x313180: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x313180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_313184:
    // 0x313184: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x313184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_313188:
    // 0x313188: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x313188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31318c:
    // 0x31318c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31318cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_313190:
    // 0x313190: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x313190u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_313194:
    // 0x313194: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x313194u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_313198:
    // 0x313198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x313198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31319c:
    // 0x31319c: 0x3e00008  jr          $ra
label_3131a0:
    if (ctx->pc == 0x3131A0u) {
        ctx->pc = 0x3131A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31319Cu;
        // 0x3131a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3131A4u;
        goto label_3131a4;
    }
    ctx->pc = 0x31319Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3131A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31319Cu;
        // 0x3131a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31319Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3131A4u;
label_3131a4:
    // 0x3131a4: 0x0  nop
    ctx->pc = 0x3131a4u;
    // NOP
    ctx->pc = 0x3131a8u;
}
