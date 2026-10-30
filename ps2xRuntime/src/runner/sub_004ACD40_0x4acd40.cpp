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

// Function: sub_004ACD40
// Address: 0x4acd40 - 0x4ad0e0
void sub_004ACD40_0x4acd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACD40_0x4acd40");
#endif

    switch (ctx->pc) {
        case 0x4acd40u: goto label_4acd40;
        case 0x4acd44u: goto label_4acd44;
        case 0x4acd48u: goto label_4acd48;
        case 0x4acd4cu: goto label_4acd4c;
        case 0x4acd50u: goto label_4acd50;
        case 0x4acd54u: goto label_4acd54;
        case 0x4acd58u: goto label_4acd58;
        case 0x4acd5cu: goto label_4acd5c;
        case 0x4acd60u: goto label_4acd60;
        case 0x4acd64u: goto label_4acd64;
        case 0x4acd68u: goto label_4acd68;
        case 0x4acd6cu: goto label_4acd6c;
        case 0x4acd70u: goto label_4acd70;
        case 0x4acd74u: goto label_4acd74;
        case 0x4acd78u: goto label_4acd78;
        case 0x4acd7cu: goto label_4acd7c;
        case 0x4acd80u: goto label_4acd80;
        case 0x4acd84u: goto label_4acd84;
        case 0x4acd88u: goto label_4acd88;
        case 0x4acd8cu: goto label_4acd8c;
        case 0x4acd90u: goto label_4acd90;
        case 0x4acd94u: goto label_4acd94;
        case 0x4acd98u: goto label_4acd98;
        case 0x4acd9cu: goto label_4acd9c;
        case 0x4acda0u: goto label_4acda0;
        case 0x4acda4u: goto label_4acda4;
        case 0x4acda8u: goto label_4acda8;
        case 0x4acdacu: goto label_4acdac;
        case 0x4acdb0u: goto label_4acdb0;
        case 0x4acdb4u: goto label_4acdb4;
        case 0x4acdb8u: goto label_4acdb8;
        case 0x4acdbcu: goto label_4acdbc;
        case 0x4acdc0u: goto label_4acdc0;
        case 0x4acdc4u: goto label_4acdc4;
        case 0x4acdc8u: goto label_4acdc8;
        case 0x4acdccu: goto label_4acdcc;
        case 0x4acdd0u: goto label_4acdd0;
        case 0x4acdd4u: goto label_4acdd4;
        case 0x4acdd8u: goto label_4acdd8;
        case 0x4acddcu: goto label_4acddc;
        case 0x4acde0u: goto label_4acde0;
        case 0x4acde4u: goto label_4acde4;
        case 0x4acde8u: goto label_4acde8;
        case 0x4acdecu: goto label_4acdec;
        case 0x4acdf0u: goto label_4acdf0;
        case 0x4acdf4u: goto label_4acdf4;
        case 0x4acdf8u: goto label_4acdf8;
        case 0x4acdfcu: goto label_4acdfc;
        case 0x4ace00u: goto label_4ace00;
        case 0x4ace04u: goto label_4ace04;
        case 0x4ace08u: goto label_4ace08;
        case 0x4ace0cu: goto label_4ace0c;
        case 0x4ace10u: goto label_4ace10;
        case 0x4ace14u: goto label_4ace14;
        case 0x4ace18u: goto label_4ace18;
        case 0x4ace1cu: goto label_4ace1c;
        case 0x4ace20u: goto label_4ace20;
        case 0x4ace24u: goto label_4ace24;
        case 0x4ace28u: goto label_4ace28;
        case 0x4ace2cu: goto label_4ace2c;
        case 0x4ace30u: goto label_4ace30;
        case 0x4ace34u: goto label_4ace34;
        case 0x4ace38u: goto label_4ace38;
        case 0x4ace3cu: goto label_4ace3c;
        case 0x4ace40u: goto label_4ace40;
        case 0x4ace44u: goto label_4ace44;
        case 0x4ace48u: goto label_4ace48;
        case 0x4ace4cu: goto label_4ace4c;
        case 0x4ace50u: goto label_4ace50;
        case 0x4ace54u: goto label_4ace54;
        case 0x4ace58u: goto label_4ace58;
        case 0x4ace5cu: goto label_4ace5c;
        case 0x4ace60u: goto label_4ace60;
        case 0x4ace64u: goto label_4ace64;
        case 0x4ace68u: goto label_4ace68;
        case 0x4ace6cu: goto label_4ace6c;
        case 0x4ace70u: goto label_4ace70;
        case 0x4ace74u: goto label_4ace74;
        case 0x4ace78u: goto label_4ace78;
        case 0x4ace7cu: goto label_4ace7c;
        case 0x4ace80u: goto label_4ace80;
        case 0x4ace84u: goto label_4ace84;
        case 0x4ace88u: goto label_4ace88;
        case 0x4ace8cu: goto label_4ace8c;
        case 0x4ace90u: goto label_4ace90;
        case 0x4ace94u: goto label_4ace94;
        case 0x4ace98u: goto label_4ace98;
        case 0x4ace9cu: goto label_4ace9c;
        case 0x4acea0u: goto label_4acea0;
        case 0x4acea4u: goto label_4acea4;
        case 0x4acea8u: goto label_4acea8;
        case 0x4aceacu: goto label_4aceac;
        case 0x4aceb0u: goto label_4aceb0;
        case 0x4aceb4u: goto label_4aceb4;
        case 0x4aceb8u: goto label_4aceb8;
        case 0x4acebcu: goto label_4acebc;
        case 0x4acec0u: goto label_4acec0;
        case 0x4acec4u: goto label_4acec4;
        case 0x4acec8u: goto label_4acec8;
        case 0x4aceccu: goto label_4acecc;
        case 0x4aced0u: goto label_4aced0;
        case 0x4aced4u: goto label_4aced4;
        case 0x4aced8u: goto label_4aced8;
        case 0x4acedcu: goto label_4acedc;
        case 0x4acee0u: goto label_4acee0;
        case 0x4acee4u: goto label_4acee4;
        case 0x4acee8u: goto label_4acee8;
        case 0x4aceecu: goto label_4aceec;
        case 0x4acef0u: goto label_4acef0;
        case 0x4acef4u: goto label_4acef4;
        case 0x4acef8u: goto label_4acef8;
        case 0x4acefcu: goto label_4acefc;
        case 0x4acf00u: goto label_4acf00;
        case 0x4acf04u: goto label_4acf04;
        case 0x4acf08u: goto label_4acf08;
        case 0x4acf0cu: goto label_4acf0c;
        case 0x4acf10u: goto label_4acf10;
        case 0x4acf14u: goto label_4acf14;
        case 0x4acf18u: goto label_4acf18;
        case 0x4acf1cu: goto label_4acf1c;
        case 0x4acf20u: goto label_4acf20;
        case 0x4acf24u: goto label_4acf24;
        case 0x4acf28u: goto label_4acf28;
        case 0x4acf2cu: goto label_4acf2c;
        case 0x4acf30u: goto label_4acf30;
        case 0x4acf34u: goto label_4acf34;
        case 0x4acf38u: goto label_4acf38;
        case 0x4acf3cu: goto label_4acf3c;
        case 0x4acf40u: goto label_4acf40;
        case 0x4acf44u: goto label_4acf44;
        case 0x4acf48u: goto label_4acf48;
        case 0x4acf4cu: goto label_4acf4c;
        case 0x4acf50u: goto label_4acf50;
        case 0x4acf54u: goto label_4acf54;
        case 0x4acf58u: goto label_4acf58;
        case 0x4acf5cu: goto label_4acf5c;
        case 0x4acf60u: goto label_4acf60;
        case 0x4acf64u: goto label_4acf64;
        case 0x4acf68u: goto label_4acf68;
        case 0x4acf6cu: goto label_4acf6c;
        case 0x4acf70u: goto label_4acf70;
        case 0x4acf74u: goto label_4acf74;
        case 0x4acf78u: goto label_4acf78;
        case 0x4acf7cu: goto label_4acf7c;
        case 0x4acf80u: goto label_4acf80;
        case 0x4acf84u: goto label_4acf84;
        case 0x4acf88u: goto label_4acf88;
        case 0x4acf8cu: goto label_4acf8c;
        case 0x4acf90u: goto label_4acf90;
        case 0x4acf94u: goto label_4acf94;
        case 0x4acf98u: goto label_4acf98;
        case 0x4acf9cu: goto label_4acf9c;
        case 0x4acfa0u: goto label_4acfa0;
        case 0x4acfa4u: goto label_4acfa4;
        case 0x4acfa8u: goto label_4acfa8;
        case 0x4acfacu: goto label_4acfac;
        case 0x4acfb0u: goto label_4acfb0;
        case 0x4acfb4u: goto label_4acfb4;
        case 0x4acfb8u: goto label_4acfb8;
        case 0x4acfbcu: goto label_4acfbc;
        case 0x4acfc0u: goto label_4acfc0;
        case 0x4acfc4u: goto label_4acfc4;
        case 0x4acfc8u: goto label_4acfc8;
        case 0x4acfccu: goto label_4acfcc;
        case 0x4acfd0u: goto label_4acfd0;
        case 0x4acfd4u: goto label_4acfd4;
        case 0x4acfd8u: goto label_4acfd8;
        case 0x4acfdcu: goto label_4acfdc;
        case 0x4acfe0u: goto label_4acfe0;
        case 0x4acfe4u: goto label_4acfe4;
        case 0x4acfe8u: goto label_4acfe8;
        case 0x4acfecu: goto label_4acfec;
        case 0x4acff0u: goto label_4acff0;
        case 0x4acff4u: goto label_4acff4;
        case 0x4acff8u: goto label_4acff8;
        case 0x4acffcu: goto label_4acffc;
        case 0x4ad000u: goto label_4ad000;
        case 0x4ad004u: goto label_4ad004;
        case 0x4ad008u: goto label_4ad008;
        case 0x4ad00cu: goto label_4ad00c;
        case 0x4ad010u: goto label_4ad010;
        case 0x4ad014u: goto label_4ad014;
        case 0x4ad018u: goto label_4ad018;
        case 0x4ad01cu: goto label_4ad01c;
        case 0x4ad020u: goto label_4ad020;
        case 0x4ad024u: goto label_4ad024;
        case 0x4ad028u: goto label_4ad028;
        case 0x4ad02cu: goto label_4ad02c;
        case 0x4ad030u: goto label_4ad030;
        case 0x4ad034u: goto label_4ad034;
        case 0x4ad038u: goto label_4ad038;
        case 0x4ad03cu: goto label_4ad03c;
        case 0x4ad040u: goto label_4ad040;
        case 0x4ad044u: goto label_4ad044;
        case 0x4ad048u: goto label_4ad048;
        case 0x4ad04cu: goto label_4ad04c;
        case 0x4ad050u: goto label_4ad050;
        case 0x4ad054u: goto label_4ad054;
        case 0x4ad058u: goto label_4ad058;
        case 0x4ad05cu: goto label_4ad05c;
        case 0x4ad060u: goto label_4ad060;
        case 0x4ad064u: goto label_4ad064;
        case 0x4ad068u: goto label_4ad068;
        case 0x4ad06cu: goto label_4ad06c;
        case 0x4ad070u: goto label_4ad070;
        case 0x4ad074u: goto label_4ad074;
        case 0x4ad078u: goto label_4ad078;
        case 0x4ad07cu: goto label_4ad07c;
        case 0x4ad080u: goto label_4ad080;
        case 0x4ad084u: goto label_4ad084;
        case 0x4ad088u: goto label_4ad088;
        case 0x4ad08cu: goto label_4ad08c;
        case 0x4ad090u: goto label_4ad090;
        case 0x4ad094u: goto label_4ad094;
        case 0x4ad098u: goto label_4ad098;
        case 0x4ad09cu: goto label_4ad09c;
        case 0x4ad0a0u: goto label_4ad0a0;
        case 0x4ad0a4u: goto label_4ad0a4;
        case 0x4ad0a8u: goto label_4ad0a8;
        case 0x4ad0acu: goto label_4ad0ac;
        case 0x4ad0b0u: goto label_4ad0b0;
        case 0x4ad0b4u: goto label_4ad0b4;
        case 0x4ad0b8u: goto label_4ad0b8;
        case 0x4ad0bcu: goto label_4ad0bc;
        case 0x4ad0c0u: goto label_4ad0c0;
        case 0x4ad0c4u: goto label_4ad0c4;
        case 0x4ad0c8u: goto label_4ad0c8;
        case 0x4ad0ccu: goto label_4ad0cc;
        case 0x4ad0d0u: goto label_4ad0d0;
        case 0x4ad0d4u: goto label_4ad0d4;
        case 0x4ad0d8u: goto label_4ad0d8;
        case 0x4ad0dcu: goto label_4ad0dc;
        default: break;
    }

    ctx->pc = 0x4acd40u;

label_4acd40:
    // 0x4acd40: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4acd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4acd44:
    // 0x4acd44: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4acd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4acd48:
    // 0x4acd48: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x4acd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_4acd4c:
    // 0x4acd4c: 0x24420420  addiu       $v0, $v0, 0x420
    ctx->pc = 0x4acd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
label_4acd50:
    // 0x4acd50: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x4acd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_4acd54:
    // 0x4acd54: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4acd54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4acd58:
    // 0x4acd58: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x4acd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_4acd5c:
    // 0x4acd5c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x4acd5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4acd60:
    // 0x4acd60: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x4acd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_4acd64:
    // 0x4acd64: 0x27b10022  addiu       $s1, $sp, 0x22
    ctx->pc = 0x4acd64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
label_4acd68:
    // 0x4acd68: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x4acd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_4acd6c:
    // 0x4acd6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4acd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4acd70:
    // 0x4acd70: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x4acd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_4acd74:
    // 0x4acd74: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x4acd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_4acd78:
    // 0x4acd78: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x4acd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_4acd7c:
    // 0x4acd7c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x4acd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_4acd80:
    // 0x4acd80: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x4acd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_4acd84:
    // 0x4acd84: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x4acd84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4acd88:
    // 0x4acd88: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x4acd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_4acd8c:
    // 0x4acd8c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4acd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4acd90:
    // 0x4acd90: 0xde440010  ld          $a0, 0x10($s2)
    ctx->pc = 0x4acd90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_4acd94:
    // 0x4acd94: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x4acd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_4acd98:
    // 0x4acd98: 0x30830070  andi        $v1, $a0, 0x70
    ctx->pc = 0x4acd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
label_4acd9c:
    // 0x4acd9c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_4acda0:
    if (ctx->pc == 0x4ACDA0u) {
        ctx->pc = 0x4ACDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACD9Cu;
        // 0x4acda0: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACDA4u;
        goto label_4acda4;
    }
    ctx->pc = 0x4ACD9Cu;
    {
        const bool branch_taken_0x4acd9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4ACDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACD9Cu;
        // 0x4acda0: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acd9c) {
            ctx->pc = 0x4ACDECu;
            goto label_4acdec;
        }
    }
    ctx->pc = 0x4ACDA4u;
label_4acda4:
    // 0x4acda4: 0x0  nop
    ctx->pc = 0x4acda4u;
    // NOP
label_4acda8:
    // 0x4acda8: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x4acda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_4acdac:
    // 0x4acdac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4acdacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4acdb0:
    // 0x4acdb0: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x4acdb0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_4acdb4:
    // 0x4acdb4: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x4acdb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_4acdb8:
    // 0x4acdb8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x4acdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4acdbc:
    // 0x4acdbc: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x4acdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_4acdc0:
    // 0x4acdc0: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_4acdc4:
    if (ctx->pc == 0x4ACDC4u) {
        ctx->pc = 0x4ACDC8u;
        goto label_4acdc8;
    }
    ctx->pc = 0x4ACDC0u;
    {
        const bool branch_taken_0x4acdc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4acdc0) {
            ctx->pc = 0x4ACDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4acda8;
        }
    }
    ctx->pc = 0x4ACDC8u;
label_4acdc8:
    // 0x4acdc8: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x4acdc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_4acdcc:
    // 0x4acdcc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x4acdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_4acdd0:
    // 0x4acdd0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_4acdd4:
    if (ctx->pc == 0x4ACDD4u) {
        ctx->pc = 0x4ACDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDD0u;
        // 0x4acdd4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACDD8u;
        goto label_4acdd8;
    }
    ctx->pc = 0x4ACDD0u;
    {
        const bool branch_taken_0x4acdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDD0u;
        // 0x4acdd4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acdd0) {
            ctx->pc = 0x4ACF00u;
            goto label_4acf00;
        }
    }
    ctx->pc = 0x4ACDD8u;
label_4acdd8:
    // 0x4acdd8: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
label_4acddc:
    if (ctx->pc == 0x4ACDDCu) {
        ctx->pc = 0x4ACDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDD8u;
        // 0x4acddc: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACDE0u;
        goto label_4acde0;
    }
    ctx->pc = 0x4ACDD8u;
    {
        const bool branch_taken_0x4acdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4ACDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDD8u;
        // 0x4acddc: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acdd8) {
            ctx->pc = 0x4ACF04u;
            goto label_4acf04;
        }
    }
    ctx->pc = 0x4ACDE0u;
label_4acde0:
    // 0x4acde0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4acde0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4acde4:
    // 0x4acde4: 0x10000046  b           . + 4 + (0x46 << 2)
label_4acde8:
    if (ctx->pc == 0x4ACDE8u) {
        ctx->pc = 0x4ACDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDE4u;
        // 0x4acde8: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACDECu;
        goto label_4acdec;
    }
    ctx->pc = 0x4ACDE4u;
    {
        const bool branch_taken_0x4acde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDE4u;
        // 0x4acde8: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acde4) {
            ctx->pc = 0x4ACF00u;
            goto label_4acf00;
        }
    }
    ctx->pc = 0x4ACDECu;
label_4acdec:
    // 0x4acdec: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x4acdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4acdf0:
    // 0x4acdf0: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_4acdf4:
    if (ctx->pc == 0x4ACDF4u) {
        ctx->pc = 0x4ACDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDF0u;
        // 0x4acdf4: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACDF8u;
        goto label_4acdf8;
    }
    ctx->pc = 0x4ACDF0u;
    {
        const bool branch_taken_0x4acdf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4ACDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDF0u;
        // 0x4acdf4: 0x30820200  andi        $v0, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acdf0) {
            ctx->pc = 0x4ACE54u;
            goto label_4ace54;
        }
    }
    ctx->pc = 0x4ACDF8u;
label_4acdf8:
    // 0x4acdf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4acdfc:
    if (ctx->pc == 0x4ACDFCu) {
        ctx->pc = 0x4ACDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDF8u;
        // 0x4acdfc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACE00u;
        goto label_4ace00;
    }
    ctx->pc = 0x4ACDF8u;
    {
        const bool branch_taken_0x4acdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACDF8u;
        // 0x4acdfc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acdf8) {
            ctx->pc = 0x4ACE08u;
            goto label_4ace08;
        }
    }
    ctx->pc = 0x4ACE00u;
label_4ace00:
    // 0x4ace00: 0x10000003  b           . + 4 + (0x3 << 2)
label_4ace04:
    if (ctx->pc == 0x4ACE04u) {
        ctx->pc = 0x4ACE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE00u;
        // 0x4ace04: 0x24440428  addiu       $a0, $v0, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACE08u;
        goto label_4ace08;
    }
    ctx->pc = 0x4ACE00u;
    {
        const bool branch_taken_0x4ace00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE00u;
        // 0x4ace04: 0x24440428  addiu       $a0, $v0, 0x428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ace00) {
            ctx->pc = 0x4ACE10u;
            goto label_4ace10;
        }
    }
    ctx->pc = 0x4ACE08u;
label_4ace08:
    // 0x4ace08: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4ace08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4ace0c:
    // 0x4ace0c: 0x24440440  addiu       $a0, $v0, 0x440
    ctx->pc = 0x4ace0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
label_4ace10:
    // 0x4ace10: 0x3203000f  andi        $v1, $s0, 0xF
    ctx->pc = 0x4ace10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_4ace14:
    // 0x4ace14: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4ace14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4ace18:
    // 0x4ace18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4ace18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4ace1c:
    // 0x4ace1c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4ace1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4ace20:
    // 0x4ace20: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x4ace20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_4ace24:
    // 0x4ace24: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4ace24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4ace28:
    // 0x4ace28: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4ace28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4ace2c:
    // 0x4ace2c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_4ace30:
    if (ctx->pc == 0x4ACE30u) {
        ctx->pc = 0x4ACE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE2Cu;
        // 0x4ace30: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACE34u;
        goto label_4ace34;
    }
    ctx->pc = 0x4ACE2Cu;
    {
        const bool branch_taken_0x4ace2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ACE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE2Cu;
        // 0x4ace30: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ace2c) {
            ctx->pc = 0x4ACE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ace10;
        }
    }
    ctx->pc = 0x4ACE34u;
label_4ace34:
    // 0x4ace34: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x4ace34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_4ace38:
    // 0x4ace38: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x4ace38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_4ace3c:
    // 0x4ace3c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_4ace40:
    if (ctx->pc == 0x4ACE40u) {
        ctx->pc = 0x4ACE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE3Cu;
        // 0x4ace40: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACE44u;
        goto label_4ace44;
    }
    ctx->pc = 0x4ACE3Cu;
    {
        const bool branch_taken_0x4ace3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE3Cu;
        // 0x4ace40: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ace3c) {
            ctx->pc = 0x4ACF00u;
            goto label_4acf00;
        }
    }
    ctx->pc = 0x4ACE44u;
label_4ace44:
    // 0x4ace44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ace44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ace48:
    // 0x4ace48: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x4ace48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_4ace4c:
    // 0x4ace4c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_4ace50:
    if (ctx->pc == 0x4ACE50u) {
        ctx->pc = 0x4ACE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE4Cu;
        // 0x4ace50: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACE54u;
        goto label_4ace54;
    }
    ctx->pc = 0x4ACE4Cu;
    {
        const bool branch_taken_0x4ace4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE4Cu;
        // 0x4ace50: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ace4c) {
            ctx->pc = 0x4ACF00u;
            goto label_4acf00;
        }
    }
    ctx->pc = 0x4ACE54u;
label_4ace54:
    // 0x4ace54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ace54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4ace58:
    // 0x4ace58: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4ace58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4ace5c:
    // 0x4ace5c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x4ace5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4ace60:
    // 0x4ace60: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_4ace64:
    if (ctx->pc == 0x4ACE64u) {
        ctx->pc = 0x4ACE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE60u;
        // 0x4ace64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACE68u;
        goto label_4ace68;
    }
    ctx->pc = 0x4ACE60u;
    {
        const bool branch_taken_0x4ace60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE60u;
        // 0x4ace64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ace60) {
            ctx->pc = 0x4ACEA4u;
            goto label_4acea4;
        }
    }
    ctx->pc = 0x4ACE68u;
label_4ace68:
    // 0x4ace68: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4ace68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_4ace6c:
    // 0x4ace6c: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x4ace6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
label_4ace70:
    // 0x4ace70: 0xc10f1c0  jal         func_43C700
label_4ace74:
    if (ctx->pc == 0x4ACE74u) {
        ctx->pc = 0x4ACE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE70u;
        // 0x4ace74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACE78u;
        goto label_4ace78;
    }
    ctx->pc = 0x4ACE70u;
    SET_GPR_U32(ctx, 31, 0x4ACE78u);
    ctx->pc = 0x4ACE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACE70u;
    // 0x4ace74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C700u, 0x4ACE70u, 0x4ACE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACE78u;
label_4ace78:
    // 0x4ace78: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4ace78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4ace7c:
    // 0x4ace7c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x4ace7cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_4ace80:
    // 0x4ace80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ace80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ace84:
    // 0x4ace84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4ace84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4ace88:
    // 0x4ace88: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4ace88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4ace8c:
    // 0x4ace8c: 0xc10acae  jal         func_42B2B8
label_4ace90:
    if (ctx->pc == 0x4ACE90u) {
        ctx->pc = 0x4ACE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE8Cu;
        // 0x4ace90: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACE94u;
        goto label_4ace94;
    }
    ctx->pc = 0x4ACE8Cu;
    SET_GPR_U32(ctx, 31, 0x4ACE94u);
    ctx->pc = 0x4ACE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACE8Cu;
    // 0x4ace90: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4ACE8Cu, 0x4ACE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACE94u;
label_4ace94:
    // 0x4ace94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ace94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ace98:
    // 0x4ace98: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x4ace98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4ace9c:
    // 0x4ace9c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4acea0:
    if (ctx->pc == 0x4ACEA0u) {
        ctx->pc = 0x4ACEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE9Cu;
        // 0x4acea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACEA4u;
        goto label_4acea4;
    }
    ctx->pc = 0x4ACE9Cu;
    {
        const bool branch_taken_0x4ace9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ACEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACE9Cu;
        // 0x4acea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ace9c) {
            ctx->pc = 0x4ACE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ace70;
        }
    }
    ctx->pc = 0x4ACEA4u;
label_4acea4:
    // 0x4acea4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x4acea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_4acea8:
    // 0x4acea8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4acea8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_4aceac:
    // 0x4aceac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4aceacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4aceb0:
    // 0x4aceb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4aceb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4aceb4:
    // 0x4aceb4: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x4aceb4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4aceb8:
    // 0x4aceb8: 0x50850001  beql        $a0, $a1, . + 4 + (0x1 << 2)
label_4acebc:
    if (ctx->pc == 0x4ACEBCu) {
        ctx->pc = 0x4ACEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACEB8u;
        // 0x4acebc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACEC0u;
        goto label_4acec0;
    }
    ctx->pc = 0x4ACEB8u;
    {
        const bool branch_taken_0x4aceb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x4aceb8) {
            ctx->pc = 0x4ACEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACEB8u;
            // 0x4acebc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ACEC0u;
            goto label_4acec0;
        }
    }
    ctx->pc = 0x4ACEC0u;
label_4acec0:
    // 0x4acec0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4acec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4acec4:
    // 0x4acec4: 0x1010  mfhi        $v0
    ctx->pc = 0x4acec4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4acec8:
    // 0x4acec8: 0x1812  mflo        $v1
    ctx->pc = 0x4acec8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4acecc:
    // 0x4acecc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x4aceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_4aced0:
    // 0x4aced0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x4aced0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_4aced4:
    // 0x4aced4: 0x50850001  beql        $a0, $a1, . + 4 + (0x1 << 2)
label_4aced8:
    if (ctx->pc == 0x4ACED8u) {
        ctx->pc = 0x4ACED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACED4u;
        // 0x4aced8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACEDCu;
        goto label_4acedc;
    }
    ctx->pc = 0x4ACED4u;
    {
        const bool branch_taken_0x4aced4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x4aced4) {
            ctx->pc = 0x4ACED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACED4u;
            // 0x4aced8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ACEDCu;
            goto label_4acedc;
        }
    }
    ctx->pc = 0x4ACEDCu;
label_4acedc:
    // 0x4acedc: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
label_4acee0:
    if (ctx->pc == 0x4ACEE0u) {
        ctx->pc = 0x4ACEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACEDCu;
        // 0x4acee0: 0x64001b  divu        $zero, $v1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACEE4u;
        goto label_4acee4;
    }
    ctx->pc = 0x4ACEDCu;
    {
        const bool branch_taken_0x4acedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4acedc) {
            ctx->pc = 0x4ACEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACEDCu;
            // 0x4acee0: 0x64001b  divu        $zero, $v1, $a0 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ACEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aceb8;
        }
    }
    ctx->pc = 0x4ACEE4u;
label_4acee4:
    // 0x4acee4: 0x1ae00006  blez        $s7, . + 4 + (0x6 << 2)
label_4acee8:
    if (ctx->pc == 0x4ACEE8u) {
        ctx->pc = 0x4ACEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACEE4u;
        // 0x4acee8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACEECu;
        goto label_4aceec;
    }
    ctx->pc = 0x4ACEE4u;
    {
        const bool branch_taken_0x4acee4 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x4ACEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACEE4u;
        // 0x4acee8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acee4) {
            ctx->pc = 0x4ACF00u;
            goto label_4acf00;
        }
    }
    ctx->pc = 0x4ACEECu;
label_4aceec:
    // 0x4aceec: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x4aceecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_4acef0:
    // 0x4acef0: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x4acef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_4acef4:
    // 0x4acef4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x4acef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_4acef8:
    // 0x4acef8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x4acef8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_4acefc:
    // 0x4acefc: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x4acefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_4acf00:
    // 0x4acf00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x4acf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_4acf04:
    // 0x4acf04: 0x2622ffde  addiu       $v0, $s1, -0x22
    ctx->pc = 0x4acf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967262));
label_4acf08:
    // 0x4acf08: 0x3a2b023  subu        $s6, $sp, $v0
    ctx->pc = 0x4acf08u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_4acf0c:
    // 0x4acf0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4acf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4acf10:
    // 0x4acf10: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x4acf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_4acf14:
    // 0x4acf14: 0x77182a  slt         $v1, $v1, $s7
    ctx->pc = 0x4acf14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_4acf18:
    // 0x4acf18: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x4acf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4acf1c:
    // 0x4acf1c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4acf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4acf20:
    // 0x4acf20: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x4acf20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_4acf24:
    // 0x4acf24: 0xde460010  ld          $a2, 0x10($s2)
    ctx->pc = 0x4acf24u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 16)));
label_4acf28:
    // 0x4acf28: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x4acf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_4acf2c:
    // 0x4acf2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4acf2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4acf30:
    // 0x4acf30: 0x82550018  lb          $s5, 0x18($s2)
    ctx->pc = 0x4acf30u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
label_4acf34:
    // 0x4acf34: 0x30d4000e  andi        $s4, $a2, 0xE
    ctx->pc = 0x4acf34u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)14);
label_4acf38:
    // 0x4acf38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4acf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4acf3c:
    // 0x4acf3c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x4acf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_4acf40:
    // 0x4acf40: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x4acf40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4acf44:
    // 0x4acf44: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x4acf44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4acf48:
    // 0x4acf48: 0x64980a  movz        $s3, $v1, $a0
    ctx->pc = 0x4acf48u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_4acf4c:
    // 0x4acf4c: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
label_4acf50:
    if (ctx->pc == 0x4ACF50u) {
        ctx->pc = 0x4ACF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF4Cu;
        // 0x4acf50: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACF54u;
        goto label_4acf54;
    }
    ctx->pc = 0x4ACF4Cu;
    {
        const bool branch_taken_0x4acf4c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x4ACF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF4Cu;
        // 0x4acf50: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf4c) {
            ctx->pc = 0x4ACF84u;
            goto label_4acf84;
        }
    }
    ctx->pc = 0x4ACF54u;
label_4acf54:
    // 0x4acf54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4acf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4acf58:
    // 0x4acf58: 0x1282000a  beq         $s4, $v0, . + 4 + (0xA << 2)
label_4acf5c:
    if (ctx->pc == 0x4ACF5Cu) {
        ctx->pc = 0x4ACF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF58u;
        // 0x4acf5c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACF60u;
        goto label_4acf60;
    }
    ctx->pc = 0x4ACF58u;
    {
        const bool branch_taken_0x4acf58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x4ACF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF58u;
        // 0x4acf5c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf58) {
            ctx->pc = 0x4ACF84u;
            goto label_4acf84;
        }
    }
    ctx->pc = 0x4ACF60u;
label_4acf60:
    // 0x4acf60: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
label_4acf64:
    if (ctx->pc == 0x4ACF64u) {
        ctx->pc = 0x4ACF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF60u;
        // 0x4acf64: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACF68u;
        goto label_4acf68;
    }
    ctx->pc = 0x4ACF60u;
    {
        const bool branch_taken_0x4acf60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x4ACF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF60u;
        // 0x4acf64: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf60) {
            ctx->pc = 0x4ACF84u;
            goto label_4acf84;
        }
    }
    ctx->pc = 0x4ACF68u;
label_4acf68:
    // 0x4acf68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4acf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4acf6c:
    // 0x4acf6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4acf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4acf70:
    // 0x4acf70: 0xc12ca06  jal         func_4B2818
label_4acf74:
    if (ctx->pc == 0x4ACF74u) {
        ctx->pc = 0x4ACF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF70u;
        // 0x4acf74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACF78u;
        goto label_4acf78;
    }
    ctx->pc = 0x4ACF70u;
    SET_GPR_U32(ctx, 31, 0x4ACF78u);
    ctx->pc = 0x4ACF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACF70u;
    // 0x4acf74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4ACF70u, 0x4ACF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACF78u;
label_4acf78:
    // 0x4acf78: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4acf78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_4acf7c:
    // 0x4acf7c: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
label_4acf80:
    if (ctx->pc == 0x4ACF80u) {
        ctx->pc = 0x4ACF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF7Cu;
        // 0x4acf80: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACF84u;
        goto label_4acf84;
    }
    ctx->pc = 0x4ACF7Cu;
    {
        const bool branch_taken_0x4acf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4acf7c) {
            ctx->pc = 0x4ACF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACF7Cu;
            // 0x4acf80: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD084u;
            goto label_4ad084;
        }
    }
    ctx->pc = 0x4ACF84u;
label_4acf84:
    // 0x4acf84: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
label_4acf88:
    if (ctx->pc == 0x4ACF88u) {
        ctx->pc = 0x4ACF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF84u;
        // 0x4acf88: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACF8Cu;
        goto label_4acf8c;
    }
    ctx->pc = 0x4ACF84u;
    {
        const bool branch_taken_0x4acf84 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x4ACF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF84u;
        // 0x4acf88: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf84) {
            ctx->pc = 0x4ACF94u;
            goto label_4acf94;
        }
    }
    ctx->pc = 0x4ACF8Cu;
label_4acf8c:
    // 0x4acf8c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4acf90:
    if (ctx->pc == 0x4ACF90u) {
        ctx->pc = 0x4ACF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF8Cu;
        // 0x4acf90: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACF94u;
        goto label_4acf94;
    }
    ctx->pc = 0x4ACF8Cu;
    {
        const bool branch_taken_0x4acf8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF8Cu;
        // 0x4acf90: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf8c) {
            ctx->pc = 0x4ACFB8u;
            goto label_4acfb8;
        }
    }
    ctx->pc = 0x4ACF94u;
label_4acf94:
    // 0x4acf94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4acf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4acf98:
    // 0x4acf98: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x4acf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4acf9c:
    // 0x4acf9c: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x4acf9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_4acfa0:
    // 0x4acfa0: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x4acfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_4acfa4:
    // 0x4acfa4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x4acfa4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_4acfa8:
    // 0x4acfa8: 0xc12cc82  jal         func_4B3208
label_4acfac:
    if (ctx->pc == 0x4ACFACu) {
        ctx->pc = 0x4ACFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFA8u;
        // 0x4acfac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACFB0u;
        goto label_4acfb0;
    }
    ctx->pc = 0x4ACFA8u;
    SET_GPR_U32(ctx, 31, 0x4ACFB0u);
    ctx->pc = 0x4ACFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACFA8u;
    // 0x4acfac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4ACFA8u, 0x4ACFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACFB0u;
label_4acfb0:
    // 0x4acfb0: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
label_4acfb4:
    if (ctx->pc == 0x4ACFB4u) {
        ctx->pc = 0x4ACFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFB0u;
        // 0x4acfb4: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACFB8u;
        goto label_4acfb8;
    }
    ctx->pc = 0x4ACFB0u;
    {
        const bool branch_taken_0x4acfb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4ACFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFB0u;
        // 0x4acfb4: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acfb0) {
            ctx->pc = 0x4AD080u;
            goto label_4ad080;
        }
    }
    ctx->pc = 0x4ACFB8u;
label_4acfb8:
    // 0x4acfb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4acfbc:
    if (ctx->pc == 0x4ACFBCu) {
        ctx->pc = 0x4ACFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFB8u;
        // 0x4acfbc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACFC0u;
        goto label_4acfc0;
    }
    ctx->pc = 0x4ACFB8u;
    {
        const bool branch_taken_0x4acfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFB8u;
        // 0x4acfbc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acfb8) {
            ctx->pc = 0x4ACFDCu;
            goto label_4acfdc;
        }
    }
    ctx->pc = 0x4ACFC0u;
label_4acfc0:
    // 0x4acfc0: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x4acfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4acfc4:
    // 0x4acfc4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4acfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4acfc8:
    // 0x4acfc8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4acfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4acfcc:
    // 0x4acfcc: 0x40f809  jalr        $v0
label_4acfd0:
    if (ctx->pc == 0x4ACFD0u) {
        ctx->pc = 0x4ACFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFCCu;
        // 0x4acfd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACFD4u;
        goto label_4acfd4;
    }
    ctx->pc = 0x4ACFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4ACFD4u);
        ctx->pc = 0x4ACFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFCCu;
        // 0x4acfd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACFCCu, 0x4ACFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4ACFD4u;
label_4acfd4:
    // 0x4acfd4: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_4acfd8:
    if (ctx->pc == 0x4ACFD8u) {
        ctx->pc = 0x4ACFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFD4u;
        // 0x4acfd8: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACFDCu;
        goto label_4acfdc;
    }
    ctx->pc = 0x4ACFD4u;
    {
        const bool branch_taken_0x4acfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acfd4) {
            ctx->pc = 0x4ACFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACFD4u;
            // 0x4acfd8: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD084u;
            goto label_4ad084;
        }
    }
    ctx->pc = 0x4ACFDCu;
label_4acfdc:
    // 0x4acfdc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4acfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4acfe0:
    // 0x4acfe0: 0x5682000b  bnel        $s4, $v0, . + 4 + (0xB << 2)
label_4acfe4:
    if (ctx->pc == 0x4ACFE4u) {
        ctx->pc = 0x4ACFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFE0u;
        // 0x4acfe4: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACFE8u;
        goto label_4acfe8;
    }
    ctx->pc = 0x4ACFE0u;
    {
        const bool branch_taken_0x4acfe0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x4acfe0) {
            ctx->pc = 0x4ACFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACFE0u;
            // 0x4acfe4: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD010u;
            goto label_4ad010;
        }
    }
    ctx->pc = 0x4ACFE8u;
label_4acfe8:
    // 0x4acfe8: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
label_4acfec:
    if (ctx->pc == 0x4ACFECu) {
        ctx->pc = 0x4ACFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFE8u;
        // 0x4acfec: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ACFF0u;
        goto label_4acff0;
    }
    ctx->pc = 0x4ACFE8u;
    {
        const bool branch_taken_0x4acfe8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x4ACFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFE8u;
        // 0x4acfec: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acfe8) {
            ctx->pc = 0x4AD00Cu;
            goto label_4ad00c;
        }
    }
    ctx->pc = 0x4ACFF0u;
label_4acff0:
    // 0x4acff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4acff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4acff4:
    // 0x4acff4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4acff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4acff8:
    // 0x4acff8: 0xc12ca06  jal         func_4B2818
label_4acffc:
    if (ctx->pc == 0x4ACFFCu) {
        ctx->pc = 0x4ACFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACFF8u;
        // 0x4acffc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD000u;
        goto label_4ad000;
    }
    ctx->pc = 0x4ACFF8u;
    SET_GPR_U32(ctx, 31, 0x4AD000u);
    ctx->pc = 0x4ACFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACFF8u;
    // 0x4acffc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4ACFF8u, 0x4AD000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD000u;
label_4ad000:
    // 0x4ad000: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4ad000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_4ad004:
    // 0x4ad004: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_4ad008:
    if (ctx->pc == 0x4AD008u) {
        ctx->pc = 0x4AD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD004u;
        // 0x4ad008: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD00Cu;
        goto label_4ad00c;
    }
    ctx->pc = 0x4AD004u;
    {
        const bool branch_taken_0x4ad004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad004) {
            ctx->pc = 0x4AD008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD004u;
            // 0x4ad008: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD084u;
            goto label_4ad084;
        }
    }
    ctx->pc = 0x4AD00Cu;
label_4ad00c:
    // 0x4ad00c: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x4ad00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4ad010:
    // 0x4ad010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ad010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ad014:
    // 0x4ad014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ad014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ad018:
    // 0x4ad018: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ad018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ad01c:
    // 0x4ad01c: 0x40f809  jalr        $v0
label_4ad020:
    if (ctx->pc == 0x4AD020u) {
        ctx->pc = 0x4AD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD01Cu;
        // 0x4ad020: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD024u;
        goto label_4ad024;
    }
    ctx->pc = 0x4AD01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4AD024u);
        ctx->pc = 0x4AD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD01Cu;
        // 0x4ad020: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD01Cu, 0x4AD024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4AD024u;
label_4ad024:
    // 0x4ad024: 0x54560017  bnel        $v0, $s6, . + 4 + (0x17 << 2)
label_4ad028:
    if (ctx->pc == 0x4AD028u) {
        ctx->pc = 0x4AD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD024u;
        // 0x4ad028: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD02Cu;
        goto label_4ad02c;
    }
    ctx->pc = 0x4AD024u;
    {
        const bool branch_taken_0x4ad024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x4ad024) {
            ctx->pc = 0x4AD028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD024u;
            // 0x4ad028: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD084u;
            goto label_4ad084;
        }
    }
    ctx->pc = 0x4AD02Cu;
label_4ad02c:
    // 0x4ad02c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ad02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ad030:
    // 0x4ad030: 0x5682000b  bnel        $s4, $v0, . + 4 + (0xB << 2)
label_4ad034:
    if (ctx->pc == 0x4AD034u) {
        ctx->pc = 0x4AD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD030u;
        // 0x4ad034: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD038u;
        goto label_4ad038;
    }
    ctx->pc = 0x4AD030u;
    {
        const bool branch_taken_0x4ad030 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ad030) {
            ctx->pc = 0x4AD034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD030u;
            // 0x4ad034: 0x8fc30000  lw          $v1, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD060u;
            goto label_4ad060;
        }
    }
    ctx->pc = 0x4AD038u;
label_4ad038:
    // 0x4ad038: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
label_4ad03c:
    if (ctx->pc == 0x4AD03Cu) {
        ctx->pc = 0x4AD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD038u;
        // 0x4ad03c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD040u;
        goto label_4ad040;
    }
    ctx->pc = 0x4AD038u;
    {
        const bool branch_taken_0x4ad038 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x4AD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD038u;
        // 0x4ad03c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad038) {
            ctx->pc = 0x4AD05Cu;
            goto label_4ad05c;
        }
    }
    ctx->pc = 0x4AD040u;
label_4ad040:
    // 0x4ad040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ad040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ad044:
    // 0x4ad044: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4ad044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ad048:
    // 0x4ad048: 0xc12ca06  jal         func_4B2818
label_4ad04c:
    if (ctx->pc == 0x4AD04Cu) {
        ctx->pc = 0x4AD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD048u;
        // 0x4ad04c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD050u;
        goto label_4ad050;
    }
    ctx->pc = 0x4AD048u;
    SET_GPR_U32(ctx, 31, 0x4AD050u);
    ctx->pc = 0x4AD04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD048u;
    // 0x4ad04c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2818u, 0x4AD048u, 0x4AD050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD050u;
label_4ad050:
    // 0x4ad050: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4ad050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_4ad054:
    // 0x4ad054: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_4ad058:
    if (ctx->pc == 0x4AD058u) {
        ctx->pc = 0x4AD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD054u;
        // 0x4ad058: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD05Cu;
        goto label_4ad05c;
    }
    ctx->pc = 0x4AD054u;
    {
        const bool branch_taken_0x4ad054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad054) {
            ctx->pc = 0x4AD058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD054u;
            // 0x4ad058: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD084u;
            goto label_4ad084;
        }
    }
    ctx->pc = 0x4AD05Cu;
label_4ad05c:
    // 0x4ad05c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4ad05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4ad060:
    // 0x4ad060: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ad060u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4ad064:
    // 0x4ad064: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x4ad064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_4ad068:
    // 0x4ad068: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_4ad06c:
    if (ctx->pc == 0x4AD06Cu) {
        ctx->pc = 0x4AD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD068u;
        // 0x4ad06c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD070u;
        goto label_4ad070;
    }
    ctx->pc = 0x4AD068u;
    {
        const bool branch_taken_0x4ad068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD068u;
        // 0x4ad06c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad068) {
            ctx->pc = 0x4AD0B0u;
            goto label_4ad0b0;
        }
    }
    ctx->pc = 0x4AD070u;
label_4ad070:
    // 0x4ad070: 0xc12b70a  jal         func_4ADC28
label_4ad074:
    if (ctx->pc == 0x4AD074u) {
        ctx->pc = 0x4AD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD070u;
        // 0x4ad074: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD078u;
        goto label_4ad078;
    }
    ctx->pc = 0x4AD070u;
    SET_GPR_U32(ctx, 31, 0x4AD078u);
    ctx->pc = 0x4AD074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD070u;
    // 0x4ad074: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADC28u, 0x4AD070u, 0x4AD078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD078u;
label_4ad078:
    // 0x4ad078: 0x1000000d  b           . + 4 + (0xD << 2)
label_4ad07c:
    if (ctx->pc == 0x4AD07Cu) {
        ctx->pc = 0x4AD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD078u;
        // 0x4ad07c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD080u;
        goto label_4ad080;
    }
    ctx->pc = 0x4AD078u;
    {
        const bool branch_taken_0x4ad078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD078u;
        // 0x4ad07c: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad078) {
            ctx->pc = 0x4AD0B0u;
            goto label_4ad0b0;
        }
    }
    ctx->pc = 0x4AD080u;
label_4ad080:
    // 0x4ad080: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x4ad080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4ad084:
    // 0x4ad084: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ad084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_4ad088:
    // 0x4ad088: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4ad088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4ad08c:
    // 0x4ad08c: 0xa082001a  sb          $v0, 0x1A($a0)
    ctx->pc = 0x4ad08cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ad090:
    // 0x4ad090: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4ad090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4ad094:
    // 0x4ad094: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ad094u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4ad098:
    // 0x4ad098: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x4ad098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_4ad09c:
    // 0x4ad09c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4ad0a0:
    if (ctx->pc == 0x4AD0A0u) {
        ctx->pc = 0x4AD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD09Cu;
        // 0x4ad0a0: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD0A4u;
        goto label_4ad0a4;
    }
    ctx->pc = 0x4AD09Cu;
    {
        const bool branch_taken_0x4ad09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD09Cu;
        // 0x4ad0a0: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad09c) {
            ctx->pc = 0x4AD0B0u;
            goto label_4ad0b0;
        }
    }
    ctx->pc = 0x4AD0A4u;
label_4ad0a4:
    // 0x4ad0a4: 0xc12b70a  jal         func_4ADC28
label_4ad0a8:
    if (ctx->pc == 0x4AD0A8u) {
        ctx->pc = 0x4AD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD0A4u;
        // 0x4ad0a8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD0ACu;
        goto label_4ad0ac;
    }
    ctx->pc = 0x4AD0A4u;
    SET_GPR_U32(ctx, 31, 0x4AD0ACu);
    ctx->pc = 0x4AD0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD0A4u;
    // 0x4ad0a8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADC28u, 0x4AD0A4u, 0x4AD0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD0ACu;
label_4ad0ac:
    // 0x4ad0ac: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x4ad0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_4ad0b0:
    // 0x4ad0b0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x4ad0b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_4ad0b4:
    // 0x4ad0b4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x4ad0b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_4ad0b8:
    // 0x4ad0b8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x4ad0b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4ad0bc:
    // 0x4ad0bc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x4ad0bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4ad0c0:
    // 0x4ad0c0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x4ad0c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4ad0c4:
    // 0x4ad0c4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x4ad0c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4ad0c8:
    // 0x4ad0c8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x4ad0c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4ad0cc:
    // 0x4ad0cc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x4ad0ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4ad0d0:
    // 0x4ad0d0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x4ad0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ad0d4:
    // 0x4ad0d4: 0x3e00008  jr          $ra
label_4ad0d8:
    if (ctx->pc == 0x4AD0D8u) {
        ctx->pc = 0x4AD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD0D4u;
        // 0x4ad0d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4AD0DCu;
        goto label_4ad0dc;
    }
    ctx->pc = 0x4AD0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD0D4u;
        // 0x4ad0d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD0DCu;
label_4ad0dc:
    // 0x4ad0dc: 0x0  nop
    ctx->pc = 0x4ad0dcu;
    // NOP
    ctx->pc = 0x4ad0e0u;
}
