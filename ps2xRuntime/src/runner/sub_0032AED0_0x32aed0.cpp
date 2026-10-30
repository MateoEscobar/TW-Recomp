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

// Function: sub_0032AED0
// Address: 0x32aed0 - 0x32b340
void sub_0032AED0_0x32aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AED0_0x32aed0");
#endif

    switch (ctx->pc) {
        case 0x32aed0u: goto label_32aed0;
        case 0x32aed4u: goto label_32aed4;
        case 0x32aed8u: goto label_32aed8;
        case 0x32aedcu: goto label_32aedc;
        case 0x32aee0u: goto label_32aee0;
        case 0x32aee4u: goto label_32aee4;
        case 0x32aee8u: goto label_32aee8;
        case 0x32aeecu: goto label_32aeec;
        case 0x32aef0u: goto label_32aef0;
        case 0x32aef4u: goto label_32aef4;
        case 0x32aef8u: goto label_32aef8;
        case 0x32aefcu: goto label_32aefc;
        case 0x32af00u: goto label_32af00;
        case 0x32af04u: goto label_32af04;
        case 0x32af08u: goto label_32af08;
        case 0x32af0cu: goto label_32af0c;
        case 0x32af10u: goto label_32af10;
        case 0x32af14u: goto label_32af14;
        case 0x32af18u: goto label_32af18;
        case 0x32af1cu: goto label_32af1c;
        case 0x32af20u: goto label_32af20;
        case 0x32af24u: goto label_32af24;
        case 0x32af28u: goto label_32af28;
        case 0x32af2cu: goto label_32af2c;
        case 0x32af30u: goto label_32af30;
        case 0x32af34u: goto label_32af34;
        case 0x32af38u: goto label_32af38;
        case 0x32af3cu: goto label_32af3c;
        case 0x32af40u: goto label_32af40;
        case 0x32af44u: goto label_32af44;
        case 0x32af48u: goto label_32af48;
        case 0x32af4cu: goto label_32af4c;
        case 0x32af50u: goto label_32af50;
        case 0x32af54u: goto label_32af54;
        case 0x32af58u: goto label_32af58;
        case 0x32af5cu: goto label_32af5c;
        case 0x32af60u: goto label_32af60;
        case 0x32af64u: goto label_32af64;
        case 0x32af68u: goto label_32af68;
        case 0x32af6cu: goto label_32af6c;
        case 0x32af70u: goto label_32af70;
        case 0x32af74u: goto label_32af74;
        case 0x32af78u: goto label_32af78;
        case 0x32af7cu: goto label_32af7c;
        case 0x32af80u: goto label_32af80;
        case 0x32af84u: goto label_32af84;
        case 0x32af88u: goto label_32af88;
        case 0x32af8cu: goto label_32af8c;
        case 0x32af90u: goto label_32af90;
        case 0x32af94u: goto label_32af94;
        case 0x32af98u: goto label_32af98;
        case 0x32af9cu: goto label_32af9c;
        case 0x32afa0u: goto label_32afa0;
        case 0x32afa4u: goto label_32afa4;
        case 0x32afa8u: goto label_32afa8;
        case 0x32afacu: goto label_32afac;
        case 0x32afb0u: goto label_32afb0;
        case 0x32afb4u: goto label_32afb4;
        case 0x32afb8u: goto label_32afb8;
        case 0x32afbcu: goto label_32afbc;
        case 0x32afc0u: goto label_32afc0;
        case 0x32afc4u: goto label_32afc4;
        case 0x32afc8u: goto label_32afc8;
        case 0x32afccu: goto label_32afcc;
        case 0x32afd0u: goto label_32afd0;
        case 0x32afd4u: goto label_32afd4;
        case 0x32afd8u: goto label_32afd8;
        case 0x32afdcu: goto label_32afdc;
        case 0x32afe0u: goto label_32afe0;
        case 0x32afe4u: goto label_32afe4;
        case 0x32afe8u: goto label_32afe8;
        case 0x32afecu: goto label_32afec;
        case 0x32aff0u: goto label_32aff0;
        case 0x32aff4u: goto label_32aff4;
        case 0x32aff8u: goto label_32aff8;
        case 0x32affcu: goto label_32affc;
        case 0x32b000u: goto label_32b000;
        case 0x32b004u: goto label_32b004;
        case 0x32b008u: goto label_32b008;
        case 0x32b00cu: goto label_32b00c;
        case 0x32b010u: goto label_32b010;
        case 0x32b014u: goto label_32b014;
        case 0x32b018u: goto label_32b018;
        case 0x32b01cu: goto label_32b01c;
        case 0x32b020u: goto label_32b020;
        case 0x32b024u: goto label_32b024;
        case 0x32b028u: goto label_32b028;
        case 0x32b02cu: goto label_32b02c;
        case 0x32b030u: goto label_32b030;
        case 0x32b034u: goto label_32b034;
        case 0x32b038u: goto label_32b038;
        case 0x32b03cu: goto label_32b03c;
        case 0x32b040u: goto label_32b040;
        case 0x32b044u: goto label_32b044;
        case 0x32b048u: goto label_32b048;
        case 0x32b04cu: goto label_32b04c;
        case 0x32b050u: goto label_32b050;
        case 0x32b054u: goto label_32b054;
        case 0x32b058u: goto label_32b058;
        case 0x32b05cu: goto label_32b05c;
        case 0x32b060u: goto label_32b060;
        case 0x32b064u: goto label_32b064;
        case 0x32b068u: goto label_32b068;
        case 0x32b06cu: goto label_32b06c;
        case 0x32b070u: goto label_32b070;
        case 0x32b074u: goto label_32b074;
        case 0x32b078u: goto label_32b078;
        case 0x32b07cu: goto label_32b07c;
        case 0x32b080u: goto label_32b080;
        case 0x32b084u: goto label_32b084;
        case 0x32b088u: goto label_32b088;
        case 0x32b08cu: goto label_32b08c;
        case 0x32b090u: goto label_32b090;
        case 0x32b094u: goto label_32b094;
        case 0x32b098u: goto label_32b098;
        case 0x32b09cu: goto label_32b09c;
        case 0x32b0a0u: goto label_32b0a0;
        case 0x32b0a4u: goto label_32b0a4;
        case 0x32b0a8u: goto label_32b0a8;
        case 0x32b0acu: goto label_32b0ac;
        case 0x32b0b0u: goto label_32b0b0;
        case 0x32b0b4u: goto label_32b0b4;
        case 0x32b0b8u: goto label_32b0b8;
        case 0x32b0bcu: goto label_32b0bc;
        case 0x32b0c0u: goto label_32b0c0;
        case 0x32b0c4u: goto label_32b0c4;
        case 0x32b0c8u: goto label_32b0c8;
        case 0x32b0ccu: goto label_32b0cc;
        case 0x32b0d0u: goto label_32b0d0;
        case 0x32b0d4u: goto label_32b0d4;
        case 0x32b0d8u: goto label_32b0d8;
        case 0x32b0dcu: goto label_32b0dc;
        case 0x32b0e0u: goto label_32b0e0;
        case 0x32b0e4u: goto label_32b0e4;
        case 0x32b0e8u: goto label_32b0e8;
        case 0x32b0ecu: goto label_32b0ec;
        case 0x32b0f0u: goto label_32b0f0;
        case 0x32b0f4u: goto label_32b0f4;
        case 0x32b0f8u: goto label_32b0f8;
        case 0x32b0fcu: goto label_32b0fc;
        case 0x32b100u: goto label_32b100;
        case 0x32b104u: goto label_32b104;
        case 0x32b108u: goto label_32b108;
        case 0x32b10cu: goto label_32b10c;
        case 0x32b110u: goto label_32b110;
        case 0x32b114u: goto label_32b114;
        case 0x32b118u: goto label_32b118;
        case 0x32b11cu: goto label_32b11c;
        case 0x32b120u: goto label_32b120;
        case 0x32b124u: goto label_32b124;
        case 0x32b128u: goto label_32b128;
        case 0x32b12cu: goto label_32b12c;
        case 0x32b130u: goto label_32b130;
        case 0x32b134u: goto label_32b134;
        case 0x32b138u: goto label_32b138;
        case 0x32b13cu: goto label_32b13c;
        case 0x32b140u: goto label_32b140;
        case 0x32b144u: goto label_32b144;
        case 0x32b148u: goto label_32b148;
        case 0x32b14cu: goto label_32b14c;
        case 0x32b150u: goto label_32b150;
        case 0x32b154u: goto label_32b154;
        case 0x32b158u: goto label_32b158;
        case 0x32b15cu: goto label_32b15c;
        case 0x32b160u: goto label_32b160;
        case 0x32b164u: goto label_32b164;
        case 0x32b168u: goto label_32b168;
        case 0x32b16cu: goto label_32b16c;
        case 0x32b170u: goto label_32b170;
        case 0x32b174u: goto label_32b174;
        case 0x32b178u: goto label_32b178;
        case 0x32b17cu: goto label_32b17c;
        case 0x32b180u: goto label_32b180;
        case 0x32b184u: goto label_32b184;
        case 0x32b188u: goto label_32b188;
        case 0x32b18cu: goto label_32b18c;
        case 0x32b190u: goto label_32b190;
        case 0x32b194u: goto label_32b194;
        case 0x32b198u: goto label_32b198;
        case 0x32b19cu: goto label_32b19c;
        case 0x32b1a0u: goto label_32b1a0;
        case 0x32b1a4u: goto label_32b1a4;
        case 0x32b1a8u: goto label_32b1a8;
        case 0x32b1acu: goto label_32b1ac;
        case 0x32b1b0u: goto label_32b1b0;
        case 0x32b1b4u: goto label_32b1b4;
        case 0x32b1b8u: goto label_32b1b8;
        case 0x32b1bcu: goto label_32b1bc;
        case 0x32b1c0u: goto label_32b1c0;
        case 0x32b1c4u: goto label_32b1c4;
        case 0x32b1c8u: goto label_32b1c8;
        case 0x32b1ccu: goto label_32b1cc;
        case 0x32b1d0u: goto label_32b1d0;
        case 0x32b1d4u: goto label_32b1d4;
        case 0x32b1d8u: goto label_32b1d8;
        case 0x32b1dcu: goto label_32b1dc;
        case 0x32b1e0u: goto label_32b1e0;
        case 0x32b1e4u: goto label_32b1e4;
        case 0x32b1e8u: goto label_32b1e8;
        case 0x32b1ecu: goto label_32b1ec;
        case 0x32b1f0u: goto label_32b1f0;
        case 0x32b1f4u: goto label_32b1f4;
        case 0x32b1f8u: goto label_32b1f8;
        case 0x32b1fcu: goto label_32b1fc;
        case 0x32b200u: goto label_32b200;
        case 0x32b204u: goto label_32b204;
        case 0x32b208u: goto label_32b208;
        case 0x32b20cu: goto label_32b20c;
        case 0x32b210u: goto label_32b210;
        case 0x32b214u: goto label_32b214;
        case 0x32b218u: goto label_32b218;
        case 0x32b21cu: goto label_32b21c;
        case 0x32b220u: goto label_32b220;
        case 0x32b224u: goto label_32b224;
        case 0x32b228u: goto label_32b228;
        case 0x32b22cu: goto label_32b22c;
        case 0x32b230u: goto label_32b230;
        case 0x32b234u: goto label_32b234;
        case 0x32b238u: goto label_32b238;
        case 0x32b23cu: goto label_32b23c;
        case 0x32b240u: goto label_32b240;
        case 0x32b244u: goto label_32b244;
        case 0x32b248u: goto label_32b248;
        case 0x32b24cu: goto label_32b24c;
        case 0x32b250u: goto label_32b250;
        case 0x32b254u: goto label_32b254;
        case 0x32b258u: goto label_32b258;
        case 0x32b25cu: goto label_32b25c;
        case 0x32b260u: goto label_32b260;
        case 0x32b264u: goto label_32b264;
        case 0x32b268u: goto label_32b268;
        case 0x32b26cu: goto label_32b26c;
        case 0x32b270u: goto label_32b270;
        case 0x32b274u: goto label_32b274;
        case 0x32b278u: goto label_32b278;
        case 0x32b27cu: goto label_32b27c;
        case 0x32b280u: goto label_32b280;
        case 0x32b284u: goto label_32b284;
        case 0x32b288u: goto label_32b288;
        case 0x32b28cu: goto label_32b28c;
        case 0x32b290u: goto label_32b290;
        case 0x32b294u: goto label_32b294;
        case 0x32b298u: goto label_32b298;
        case 0x32b29cu: goto label_32b29c;
        case 0x32b2a0u: goto label_32b2a0;
        case 0x32b2a4u: goto label_32b2a4;
        case 0x32b2a8u: goto label_32b2a8;
        case 0x32b2acu: goto label_32b2ac;
        case 0x32b2b0u: goto label_32b2b0;
        case 0x32b2b4u: goto label_32b2b4;
        case 0x32b2b8u: goto label_32b2b8;
        case 0x32b2bcu: goto label_32b2bc;
        case 0x32b2c0u: goto label_32b2c0;
        case 0x32b2c4u: goto label_32b2c4;
        case 0x32b2c8u: goto label_32b2c8;
        case 0x32b2ccu: goto label_32b2cc;
        case 0x32b2d0u: goto label_32b2d0;
        case 0x32b2d4u: goto label_32b2d4;
        case 0x32b2d8u: goto label_32b2d8;
        case 0x32b2dcu: goto label_32b2dc;
        case 0x32b2e0u: goto label_32b2e0;
        case 0x32b2e4u: goto label_32b2e4;
        case 0x32b2e8u: goto label_32b2e8;
        case 0x32b2ecu: goto label_32b2ec;
        case 0x32b2f0u: goto label_32b2f0;
        case 0x32b2f4u: goto label_32b2f4;
        case 0x32b2f8u: goto label_32b2f8;
        case 0x32b2fcu: goto label_32b2fc;
        case 0x32b300u: goto label_32b300;
        case 0x32b304u: goto label_32b304;
        case 0x32b308u: goto label_32b308;
        case 0x32b30cu: goto label_32b30c;
        case 0x32b310u: goto label_32b310;
        case 0x32b314u: goto label_32b314;
        case 0x32b318u: goto label_32b318;
        case 0x32b31cu: goto label_32b31c;
        case 0x32b320u: goto label_32b320;
        case 0x32b324u: goto label_32b324;
        case 0x32b328u: goto label_32b328;
        case 0x32b32cu: goto label_32b32c;
        case 0x32b330u: goto label_32b330;
        case 0x32b334u: goto label_32b334;
        case 0x32b338u: goto label_32b338;
        case 0x32b33cu: goto label_32b33c;
        default: break;
    }

    ctx->pc = 0x32aed0u;

label_32aed0:
    // 0x32aed0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x32aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_32aed4:
    // 0x32aed4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x32aed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_32aed8:
    // 0x32aed8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x32aed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_32aedc:
    // 0x32aedc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32aedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32aee0:
    // 0x32aee0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x32aee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_32aee4:
    // 0x32aee4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x32aee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_32aee8:
    // 0x32aee8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x32aee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_32aeec:
    // 0x32aeec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32aeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_32aef0:
    // 0x32aef0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x32aef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_32aef4:
    // 0x32aef4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x32aef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_32aef8:
    // 0x32aef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32aef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_32aefc:
    // 0x32aefc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x32aefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_32af00:
    // 0x32af00: 0x8e14002c  lw          $s4, 0x2C($s0)
    ctx->pc = 0x32af00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_32af04:
    // 0x32af04: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x32af04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_32af08:
    // 0x32af08: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x32af08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_32af0c:
    // 0x32af0c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x32af0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_32af10:
    // 0x32af10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32af14:
    if (ctx->pc == 0x32AF14u) {
        ctx->pc = 0x32AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF10u;
        // 0x32af14: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF18u;
        goto label_32af18;
    }
    ctx->pc = 0x32AF10u;
    {
        const bool branch_taken_0x32af10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF10u;
        // 0x32af14: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af10) {
            ctx->pc = 0x32AF24u;
            goto label_32af24;
        }
    }
    ctx->pc = 0x32AF18u;
label_32af18:
    // 0x32af18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32af18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32af1c:
    // 0x32af1c: 0xc0cb244  jal         func_32C910
label_32af20:
    if (ctx->pc == 0x32AF20u) {
        ctx->pc = 0x32AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF1Cu;
        // 0x32af20: 0x2405008a  addiu       $a1, $zero, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF24u;
        goto label_32af24;
    }
    ctx->pc = 0x32AF1Cu;
    SET_GPR_U32(ctx, 31, 0x32AF24u);
    ctx->pc = 0x32AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF1Cu;
    // 0x32af20: 0x2405008a  addiu       $a1, $zero, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x32AF1Cu, 0x32AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AF24u;
label_32af24:
    // 0x32af24: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x32af24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_32af28:
    // 0x32af28: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x32af28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32af2c:
    // 0x32af2c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x32af2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32af30:
    // 0x32af30: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x32af30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_32af34:
    // 0x32af34: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32af34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32af38:
    // 0x32af38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32af38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32af3c:
    // 0x32af3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32af3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32af40:
    // 0x32af40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32af44:
    // 0x32af44: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32af48:
    if (ctx->pc == 0x32AF48u) {
        ctx->pc = 0x32AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF44u;
        // 0x32af48: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF4Cu;
        goto label_32af4c;
    }
    ctx->pc = 0x32AF44u;
    {
        const bool branch_taken_0x32af44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF44u;
        // 0x32af48: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af44) {
            ctx->pc = 0x32AF64u;
            goto label_32af64;
        }
    }
    ctx->pc = 0x32AF4Cu;
label_32af4c:
    // 0x32af4c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32af50:
    // 0x32af50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32af50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32af54:
    // 0x32af54: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32af54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32af58:
    // 0x32af58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32af58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32af5c:
    // 0x32af5c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32af60:
    if (ctx->pc == 0x32AF60u) {
        ctx->pc = 0x32AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF5Cu;
        // 0x32af60: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF64u;
        goto label_32af64;
    }
    ctx->pc = 0x32AF5Cu;
    {
        const bool branch_taken_0x32af5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF5Cu;
        // 0x32af60: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af5c) {
            ctx->pc = 0x32AF78u;
            goto label_32af78;
        }
    }
    ctx->pc = 0x32AF64u;
label_32af64:
    // 0x32af64: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32af68:
    // 0x32af68: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32af6c:
    // 0x32af6c: 0x40f809  jalr        $v0
label_32af70:
    if (ctx->pc == 0x32AF70u) {
        ctx->pc = 0x32AF74u;
        goto label_32af74;
    }
    ctx->pc = 0x32AF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AF74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF6Cu, 0x32AF74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AF74u;
label_32af74:
    // 0x32af74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32af74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32af78:
    // 0x32af78: 0x109700c3  beq         $a0, $s7, . + 4 + (0xC3 << 2)
label_32af7c:
    if (ctx->pc == 0x32AF7Cu) {
        ctx->pc = 0x32AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF78u;
        // 0x32af7c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF80u;
        goto label_32af80;
    }
    ctx->pc = 0x32AF78u;
    {
        const bool branch_taken_0x32af78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 23));
        ctx->pc = 0x32AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF78u;
        // 0x32af7c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af78) {
            ctx->pc = 0x32B288u;
            goto label_32b288;
        }
    }
    ctx->pc = 0x32AF80u;
label_32af80:
    // 0x32af80: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x32af80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_32af84:
    // 0x32af84: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x32af84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_32af88:
    // 0x32af88: 0x2623000a  addiu       $v1, $s1, 0xA
    ctx->pc = 0x32af88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_32af8c:
    // 0x32af8c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x32af8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_32af90:
    // 0x32af90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_32af94:
    if (ctx->pc == 0x32AF94u) {
        ctx->pc = 0x32AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF90u;
        // 0x32af94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF98u;
        goto label_32af98;
    }
    ctx->pc = 0x32AF90u;
    {
        const bool branch_taken_0x32af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF90u;
        // 0x32af94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af90) {
            ctx->pc = 0x32AFA0u;
            goto label_32afa0;
        }
    }
    ctx->pc = 0x32AF98u;
label_32af98:
    // 0x32af98: 0xc0cb244  jal         func_32C910
label_32af9c:
    if (ctx->pc == 0x32AF9Cu) {
        ctx->pc = 0x32AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF98u;
        // 0x32af9c: 0x2625008a  addiu       $a1, $s1, 0x8A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 138));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFA0u;
        goto label_32afa0;
    }
    ctx->pc = 0x32AF98u;
    SET_GPR_U32(ctx, 31, 0x32AFA0u);
    ctx->pc = 0x32AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF98u;
    // 0x32af9c: 0x2625008a  addiu       $a1, $s1, 0x8A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 138));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x32AF98u, 0x32AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFA0u;
label_32afa0:
    // 0x32afa0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32afa4:
    // 0x32afa4: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x32afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_32afa8:
    // 0x32afa8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_32afac:
    if (ctx->pc == 0x32AFACu) {
        ctx->pc = 0x32AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFA8u;
        // 0x32afac: 0x2862005d  slti        $v0, $v1, 0x5D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)93) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFB0u;
        goto label_32afb0;
    }
    ctx->pc = 0x32AFA8u;
    {
        const bool branch_taken_0x32afa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFA8u;
        // 0x32afac: 0x2862005d  slti        $v0, $v1, 0x5D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)93) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afa8) {
            ctx->pc = 0x32AFF0u;
            goto label_32aff0;
        }
    }
    ctx->pc = 0x32AFB0u;
label_32afb0:
    // 0x32afb0: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
label_32afb4:
    if (ctx->pc == 0x32AFB4u) {
        ctx->pc = 0x32AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFB0u;
        // 0x32afb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFB8u;
        goto label_32afb8;
    }
    ctx->pc = 0x32AFB0u;
    {
        const bool branch_taken_0x32afb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFB0u;
        // 0x32afb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afb0) {
            ctx->pc = 0x32B220u;
            goto label_32b220;
        }
    }
    ctx->pc = 0x32AFB8u;
label_32afb8:
    // 0x32afb8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_32afbc:
    if (ctx->pc == 0x32AFBCu) {
        ctx->pc = 0x32AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFB8u;
        // 0x32afbc: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFC0u;
        goto label_32afc0;
    }
    ctx->pc = 0x32AFB8u;
    {
        const bool branch_taken_0x32afb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFB8u;
        // 0x32afbc: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afb8) {
            ctx->pc = 0x32AFC8u;
            goto label_32afc8;
        }
    }
    ctx->pc = 0x32AFC0u;
label_32afc0:
    // 0x32afc0: 0x147e0098  bne         $v1, $fp, . + 4 + (0x98 << 2)
label_32afc4:
    if (ctx->pc == 0x32AFC4u) {
        ctx->pc = 0x32AFC8u;
        goto label_32afc8;
    }
    ctx->pc = 0x32AFC0u;
    {
        const bool branch_taken_0x32afc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        if (branch_taken_0x32afc0) {
            ctx->pc = 0x32B224u;
            goto label_32b224;
        }
    }
    ctx->pc = 0x32AFC8u;
label_32afc8:
    // 0x32afc8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32afc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_32afcc:
    // 0x32afcc: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x32afccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
label_32afd0:
    // 0x32afd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32afd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32afd4:
    // 0x32afd4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32afd8:
    // 0x32afd8: 0x2406011b  addiu       $a2, $zero, 0x11B
    ctx->pc = 0x32afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
label_32afdc:
    // 0x32afdc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x32afdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_32afe0:
    // 0x32afe0: 0xc0ca8bc  jal         func_32A2F0
label_32afe4:
    if (ctx->pc == 0x32AFE4u) {
        ctx->pc = 0x32AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFE0u;
        // 0x32afe4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFE8u;
        goto label_32afe8;
    }
    ctx->pc = 0x32AFE0u;
    SET_GPR_U32(ctx, 31, 0x32AFE8u);
    ctx->pc = 0x32AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFE0u;
    // 0x32afe4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A2F0u, 0x32AFE0u, 0x32AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFE8u;
label_32afe8:
    // 0x32afe8: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_32afec:
    if (ctx->pc == 0x32AFECu) {
        ctx->pc = 0x32AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFE8u;
        // 0x32afec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AFF0u;
        goto label_32aff0;
    }
    ctx->pc = 0x32AFE8u;
    {
        const bool branch_taken_0x32afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFE8u;
        // 0x32afec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afe8) {
            ctx->pc = 0x32B280u;
            goto label_32b280;
        }
    }
    ctx->pc = 0x32AFF0u;
label_32aff0:
    // 0x32aff0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x32aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32aff4:
    // 0x32aff4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32aff8:
    // 0x32aff8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32aff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32affc:
    // 0x32affc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32b000:
    // 0x32b000: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b004:
    if (ctx->pc == 0x32B004u) {
        ctx->pc = 0x32B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B000u;
        // 0x32b004: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B008u;
        goto label_32b008;
    }
    ctx->pc = 0x32B000u;
    {
        const bool branch_taken_0x32b000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B000u;
        // 0x32b004: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b000) {
            ctx->pc = 0x32B020u;
            goto label_32b020;
        }
    }
    ctx->pc = 0x32B008u;
label_32b008:
    // 0x32b008: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b00c:
    // 0x32b00c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b010:
    // 0x32b010: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x32b010u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b014:
    // 0x32b014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b018:
    // 0x32b018: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b01c:
    if (ctx->pc == 0x32B01Cu) {
        ctx->pc = 0x32B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B018u;
        // 0x32b01c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B020u;
        goto label_32b020;
    }
    ctx->pc = 0x32B018u;
    {
        const bool branch_taken_0x32b018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B018u;
        // 0x32b01c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b018) {
            ctx->pc = 0x32B034u;
            goto label_32b034;
        }
    }
    ctx->pc = 0x32B020u;
label_32b020:
    // 0x32b020: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b024:
    // 0x32b024: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b028:
    // 0x32b028: 0x40f809  jalr        $v0
label_32b02c:
    if (ctx->pc == 0x32B02Cu) {
        ctx->pc = 0x32B030u;
        goto label_32b030;
    }
    ctx->pc = 0x32B028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B030u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B028u, 0x32B030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B030u;
label_32b030:
    // 0x32b030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32b030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b034:
    // 0x32b034: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x32b034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_32b038:
    // 0x32b038: 0x10a20032  beq         $a1, $v0, . + 4 + (0x32 << 2)
label_32b03c:
    if (ctx->pc == 0x32B03Cu) {
        ctx->pc = 0x32B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B038u;
        // 0x32b03c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B040u;
        goto label_32b040;
    }
    ctx->pc = 0x32B038u;
    {
        const bool branch_taken_0x32b038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B038u;
        // 0x32b03c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b038) {
            ctx->pc = 0x32B104u;
            goto label_32b104;
        }
    }
    ctx->pc = 0x32B040u;
label_32b040:
    // 0x32b040: 0x28a20067  slti        $v0, $a1, 0x67
    ctx->pc = 0x32b040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)103) ? 1 : 0);
label_32b044:
    // 0x32b044: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_32b048:
    if (ctx->pc == 0x32B048u) {
        ctx->pc = 0x32B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B044u;
        // 0x32b048: 0x28a2003a  slti        $v0, $a1, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B04Cu;
        goto label_32b04c;
    }
    ctx->pc = 0x32B044u;
    {
        const bool branch_taken_0x32b044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B044u;
        // 0x32b048: 0x28a2003a  slti        $v0, $a1, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b044) {
            ctx->pc = 0x32B088u;
            goto label_32b088;
        }
    }
    ctx->pc = 0x32B04Cu;
label_32b04c:
    // 0x32b04c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_32b050:
    if (ctx->pc == 0x32B050u) {
        ctx->pc = 0x32B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B04Cu;
        // 0x32b050: 0x28a20030  slti        $v0, $a1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B054u;
        goto label_32b054;
    }
    ctx->pc = 0x32B04Cu;
    {
        const bool branch_taken_0x32b04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B04Cu;
        // 0x32b050: 0x28a20030  slti        $v0, $a1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b04c) {
            ctx->pc = 0x32B06Cu;
            goto label_32b06c;
        }
    }
    ctx->pc = 0x32B054u;
label_32b054:
    // 0x32b054: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_32b058:
    if (ctx->pc == 0x32B058u) {
        ctx->pc = 0x32B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B054u;
        // 0x32b058: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B05Cu;
        goto label_32b05c;
    }
    ctx->pc = 0x32B054u;
    {
        const bool branch_taken_0x32b054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B054u;
        // 0x32b058: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b054) {
            ctx->pc = 0x32B154u;
            goto label_32b154;
        }
    }
    ctx->pc = 0x32B05Cu;
label_32b05c:
    // 0x32b05c: 0x10be0036  beq         $a1, $fp, . + 4 + (0x36 << 2)
label_32b060:
    if (ctx->pc == 0x32B060u) {
        ctx->pc = 0x32B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B05Cu;
        // 0x32b060: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B064u;
        goto label_32b064;
    }
    ctx->pc = 0x32B05Cu;
    {
        const bool branch_taken_0x32b05c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x32B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B05Cu;
        // 0x32b060: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b05c) {
            ctx->pc = 0x32B138u;
            goto label_32b138;
        }
    }
    ctx->pc = 0x32B064u;
label_32b064:
    // 0x32b064: 0x1000001a  b           . + 4 + (0x1A << 2)
label_32b068:
    if (ctx->pc == 0x32B068u) {
        ctx->pc = 0x32B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B064u;
        // 0x32b068: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B06Cu;
        goto label_32b06c;
    }
    ctx->pc = 0x32B064u;
    {
        const bool branch_taken_0x32b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B064u;
        // 0x32b068: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b064) {
            ctx->pc = 0x32B0D0u;
            goto label_32b0d0;
        }
    }
    ctx->pc = 0x32B06Cu;
label_32b06c:
    // 0x32b06c: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x32b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_32b070:
    // 0x32b070: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
label_32b074:
    if (ctx->pc == 0x32B074u) {
        ctx->pc = 0x32B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B070u;
        // 0x32b074: 0x24020062  addiu       $v0, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B078u;
        goto label_32b078;
    }
    ctx->pc = 0x32B070u;
    {
        const bool branch_taken_0x32b070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B070u;
        // 0x32b074: 0x24020062  addiu       $v0, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b070) {
            ctx->pc = 0x32B0C8u;
            goto label_32b0c8;
        }
    }
    ctx->pc = 0x32B078u;
label_32b078:
    // 0x32b078: 0x10a20020  beq         $a1, $v0, . + 4 + (0x20 << 2)
label_32b07c:
    if (ctx->pc == 0x32B07Cu) {
        ctx->pc = 0x32B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B078u;
        // 0x32b07c: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B080u;
        goto label_32b080;
    }
    ctx->pc = 0x32B078u;
    {
        const bool branch_taken_0x32b078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B078u;
        // 0x32b07c: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b078) {
            ctx->pc = 0x32B0FCu;
            goto label_32b0fc;
        }
    }
    ctx->pc = 0x32B080u;
label_32b080:
    // 0x32b080: 0x10000013  b           . + 4 + (0x13 << 2)
label_32b084:
    if (ctx->pc == 0x32B084u) {
        ctx->pc = 0x32B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B080u;
        // 0x32b084: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B088u;
        goto label_32b088;
    }
    ctx->pc = 0x32B080u;
    {
        const bool branch_taken_0x32b080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B080u;
        // 0x32b084: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b080) {
            ctx->pc = 0x32B0D0u;
            goto label_32b0d0;
        }
    }
    ctx->pc = 0x32B088u;
label_32b088:
    // 0x32b088: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x32b088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_32b08c:
    // 0x32b08c: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
label_32b090:
    if (ctx->pc == 0x32B090u) {
        ctx->pc = 0x32B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B08Cu;
        // 0x32b090: 0x28a20073  slti        $v0, $a1, 0x73 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)115) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B094u;
        goto label_32b094;
    }
    ctx->pc = 0x32B08Cu;
    {
        const bool branch_taken_0x32b08c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B08Cu;
        // 0x32b090: 0x28a20073  slti        $v0, $a1, 0x73 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)115) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b08c) {
            ctx->pc = 0x32B118u;
            goto label_32b118;
        }
    }
    ctx->pc = 0x32B094u;
label_32b094:
    // 0x32b094: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_32b098:
    if (ctx->pc == 0x32B098u) {
        ctx->pc = 0x32B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B094u;
        // 0x32b098: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B09Cu;
        goto label_32b09c;
    }
    ctx->pc = 0x32B094u;
    {
        const bool branch_taken_0x32b094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B094u;
        // 0x32b098: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b094) {
            ctx->pc = 0x32B0ACu;
            goto label_32b0ac;
        }
    }
    ctx->pc = 0x32B09Cu;
label_32b09c:
    // 0x32b09c: 0x10a2001c  beq         $a1, $v0, . + 4 + (0x1C << 2)
label_32b0a0:
    if (ctx->pc == 0x32B0A0u) {
        ctx->pc = 0x32B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B09Cu;
        // 0x32b0a0: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0A4u;
        goto label_32b0a4;
    }
    ctx->pc = 0x32B09Cu;
    {
        const bool branch_taken_0x32b09c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B09Cu;
        // 0x32b0a0: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b09c) {
            ctx->pc = 0x32B110u;
            goto label_32b110;
        }
    }
    ctx->pc = 0x32B0A4u;
label_32b0a4:
    // 0x32b0a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_32b0a8:
    if (ctx->pc == 0x32B0A8u) {
        ctx->pc = 0x32B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0A4u;
        // 0x32b0a8: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0ACu;
        goto label_32b0ac;
    }
    ctx->pc = 0x32B0A4u;
    {
        const bool branch_taken_0x32b0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0A4u;
        // 0x32b0a8: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0a4) {
            ctx->pc = 0x32B0D0u;
            goto label_32b0d0;
        }
    }
    ctx->pc = 0x32B0ACu;
label_32b0ac:
    // 0x32b0ac: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x32b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_32b0b0:
    // 0x32b0b0: 0x10a2001c  beq         $a1, $v0, . + 4 + (0x1C << 2)
label_32b0b4:
    if (ctx->pc == 0x32B0B4u) {
        ctx->pc = 0x32B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0B0u;
        // 0x32b0b4: 0x24020076  addiu       $v0, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0B8u;
        goto label_32b0b8;
    }
    ctx->pc = 0x32B0B0u;
    {
        const bool branch_taken_0x32b0b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0B0u;
        // 0x32b0b4: 0x24020076  addiu       $v0, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0b0) {
            ctx->pc = 0x32B124u;
            goto label_32b124;
        }
    }
    ctx->pc = 0x32B0B8u;
label_32b0b8:
    // 0x32b0b8: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
label_32b0bc:
    if (ctx->pc == 0x32B0BCu) {
        ctx->pc = 0x32B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0B8u;
        // 0x32b0bc: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0C0u;
        goto label_32b0c0;
    }
    ctx->pc = 0x32B0B8u;
    {
        const bool branch_taken_0x32b0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0B8u;
        // 0x32b0bc: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0b8) {
            ctx->pc = 0x32B130u;
            goto label_32b130;
        }
    }
    ctx->pc = 0x32B0C0u;
label_32b0c0:
    // 0x32b0c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_32b0c4:
    if (ctx->pc == 0x32B0C4u) {
        ctx->pc = 0x32B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0C0u;
        // 0x32b0c4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0C8u;
        goto label_32b0c8;
    }
    ctx->pc = 0x32B0C0u;
    {
        const bool branch_taken_0x32b0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0C0u;
        // 0x32b0c4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0c0) {
            ctx->pc = 0x32B0D0u;
            goto label_32b0d0;
        }
    }
    ctx->pc = 0x32B0C8u;
label_32b0c8:
    // 0x32b0c8: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x32b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_32b0cc:
    // 0x32b0cc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x32b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_32b0d0:
    // 0x32b0d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32b0d4:
    // 0x32b0d4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32b0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32b0d8:
    // 0x32b0d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32b0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32b0dc:
    // 0x32b0dc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b0e0:
    // 0x32b0e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32b0e4:
    // 0x32b0e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b0e8:
    // 0x32b0e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32b0ec:
    // 0x32b0ec: 0x14800057  bnez        $a0, . + 4 + (0x57 << 2)
label_32b0f0:
    if (ctx->pc == 0x32B0F0u) {
        ctx->pc = 0x32B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0ECu;
        // 0x32b0f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0F4u;
        goto label_32b0f4;
    }
    ctx->pc = 0x32B0ECu;
    {
        const bool branch_taken_0x32b0ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0ECu;
        // 0x32b0f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0ec) {
            ctx->pc = 0x32B24Cu;
            goto label_32b24c;
        }
    }
    ctx->pc = 0x32B0F4u;
label_32b0f4:
    // 0x32b0f4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_32b0f8:
    if (ctx->pc == 0x32B0F8u) {
        ctx->pc = 0x32B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0F4u;
        // 0x32b0f8: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B0FCu;
        goto label_32b0fc;
    }
    ctx->pc = 0x32B0F4u;
    {
        const bool branch_taken_0x32b0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0F4u;
        // 0x32b0f8: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0f4) {
            ctx->pc = 0x32B268u;
            goto label_32b268;
        }
    }
    ctx->pc = 0x32B0FCu;
label_32b0fc:
    // 0x32b0fc: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_32b100:
    if (ctx->pc == 0x32B100u) {
        ctx->pc = 0x32B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0FCu;
        // 0x32b100: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B104u;
        goto label_32b104;
    }
    ctx->pc = 0x32B0FCu;
    {
        const bool branch_taken_0x32b0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0FCu;
        // 0x32b100: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0fc) {
            ctx->pc = 0x32B0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b0d0;
        }
    }
    ctx->pc = 0x32B104u;
label_32b104:
    // 0x32b104: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x32b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_32b108:
    // 0x32b108: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_32b10c:
    if (ctx->pc == 0x32B10Cu) {
        ctx->pc = 0x32B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B108u;
        // 0x32b10c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B110u;
        goto label_32b110;
    }
    ctx->pc = 0x32B108u;
    {
        const bool branch_taken_0x32b108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B108u;
        // 0x32b10c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b108) {
            ctx->pc = 0x32B0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b0d0;
        }
    }
    ctx->pc = 0x32B110u;
label_32b110:
    // 0x32b110: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_32b114:
    if (ctx->pc == 0x32B114u) {
        ctx->pc = 0x32B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B110u;
        // 0x32b114: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B118u;
        goto label_32b118;
    }
    ctx->pc = 0x32B110u;
    {
        const bool branch_taken_0x32b110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B110u;
        // 0x32b114: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b110) {
            ctx->pc = 0x32B0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b0d0;
        }
    }
    ctx->pc = 0x32B118u;
label_32b118:
    // 0x32b118: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x32b118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_32b11c:
    // 0x32b11c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_32b120:
    if (ctx->pc == 0x32B120u) {
        ctx->pc = 0x32B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B11Cu;
        // 0x32b120: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B124u;
        goto label_32b124;
    }
    ctx->pc = 0x32B11Cu;
    {
        const bool branch_taken_0x32b11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B11Cu;
        // 0x32b120: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b11c) {
            ctx->pc = 0x32B0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b0d0;
        }
    }
    ctx->pc = 0x32B124u;
label_32b124:
    // 0x32b124: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x32b124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_32b128:
    // 0x32b128: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_32b12c:
    if (ctx->pc == 0x32B12Cu) {
        ctx->pc = 0x32B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B128u;
        // 0x32b12c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B130u;
        goto label_32b130;
    }
    ctx->pc = 0x32B128u;
    {
        const bool branch_taken_0x32b128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B128u;
        // 0x32b12c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b128) {
            ctx->pc = 0x32B0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b0d0;
        }
    }
    ctx->pc = 0x32B130u;
label_32b130:
    // 0x32b130: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_32b134:
    if (ctx->pc == 0x32B134u) {
        ctx->pc = 0x32B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B130u;
        // 0x32b134: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B138u;
        goto label_32b138;
    }
    ctx->pc = 0x32B130u;
    {
        const bool branch_taken_0x32b130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B130u;
        // 0x32b134: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b130) {
            ctx->pc = 0x32B0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b0d0;
        }
    }
    ctx->pc = 0x32B138u;
label_32b138:
    // 0x32b138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b13c:
    // 0x32b13c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32b140:
    // 0x32b140: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x32b140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
label_32b144:
    // 0x32b144: 0xc0ca8fa  jal         func_32A3E8
label_32b148:
    if (ctx->pc == 0x32B148u) {
        ctx->pc = 0x32B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B144u;
        // 0x32b148: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B14Cu;
        goto label_32b14c;
    }
    ctx->pc = 0x32B144u;
    SET_GPR_U32(ctx, 31, 0x32B14Cu);
    ctx->pc = 0x32B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B144u;
    // 0x32b148: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A3E8u, 0x32B144u, 0x32B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B14Cu;
label_32b14c:
    // 0x32b14c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_32b150:
    if (ctx->pc == 0x32B150u) {
        ctx->pc = 0x32B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B14Cu;
        // 0x32b150: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B154u;
        goto label_32b154;
    }
    ctx->pc = 0x32B14Cu;
    {
        const bool branch_taken_0x32b14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B14Cu;
        // 0x32b150: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b14c) {
            ctx->pc = 0x32B280u;
            goto label_32b280;
        }
    }
    ctx->pc = 0x32B154u;
label_32b154:
    // 0x32b154: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32b154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b158:
    // 0x32b158: 0x2456c531  addiu       $s6, $v0, -0x3ACF
    ctx->pc = 0x32b158u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
label_32b15c:
    // 0x32b15c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32b15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b160:
    // 0x32b160: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b164:
    if (ctx->pc == 0x32B164u) {
        ctx->pc = 0x32B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B160u;
        // 0x32b164: 0x2415000a  addiu       $s5, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B168u;
        goto label_32b168;
    }
    ctx->pc = 0x32B160u;
    {
        const bool branch_taken_0x32b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B160u;
        // 0x32b164: 0x2415000a  addiu       $s5, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b160) {
            ctx->pc = 0x32B17Cu;
            goto label_32b17c;
        }
    }
    ctx->pc = 0x32B168u;
label_32b168:
    // 0x32b168: 0x961821  addu        $v1, $a0, $s6
    ctx->pc = 0x32b168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_32b16c:
    // 0x32b16c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x32b16cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_32b170:
    // 0x32b170: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32b170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_32b174:
    // 0x32b174: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_32b178:
    if (ctx->pc == 0x32B178u) {
        ctx->pc = 0x32B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B174u;
        // 0x32b178: 0x326200ff  andi        $v0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B17Cu;
        goto label_32b17c;
    }
    ctx->pc = 0x32B174u;
    {
        const bool branch_taken_0x32b174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B174u;
        // 0x32b178: 0x326200ff  andi        $v0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b174) {
            ctx->pc = 0x32B1E4u;
            goto label_32b1e4;
        }
    }
    ctx->pc = 0x32B17Cu;
label_32b17c:
    // 0x32b17c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b180:
    // 0x32b180: 0x2751818  mult        $v1, $s3, $s5
    ctx->pc = 0x32b180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_32b184:
    // 0x32b184: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x32b184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32b188:
    // 0x32b188: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32b18c:
    // 0x32b18c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32b18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b190:
    // 0x32b190: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x32b190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_32b194:
    // 0x32b194: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32b198:
    // 0x32b198: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x32b198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_32b19c:
    // 0x32b19c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_32b1a0:
    if (ctx->pc == 0x32B1A0u) {
        ctx->pc = 0x32B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B19Cu;
        // 0x32b1a0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1A4u;
        goto label_32b1a4;
    }
    ctx->pc = 0x32B19Cu;
    {
        const bool branch_taken_0x32b19c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B19Cu;
        // 0x32b1a0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b19c) {
            ctx->pc = 0x32B1BCu;
            goto label_32b1bc;
        }
    }
    ctx->pc = 0x32B1A4u;
label_32b1a4:
    // 0x32b1a4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b1a8:
    // 0x32b1a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b1ac:
    // 0x32b1ac: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b1acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b1b0:
    // 0x32b1b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b1b4:
    // 0x32b1b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b1b8:
    if (ctx->pc == 0x32B1B8u) {
        ctx->pc = 0x32B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1B4u;
        // 0x32b1b8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1BCu;
        goto label_32b1bc;
    }
    ctx->pc = 0x32B1B4u;
    {
        const bool branch_taken_0x32b1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1B4u;
        // 0x32b1b8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b1b4) {
            ctx->pc = 0x32B1D0u;
            goto label_32b1d0;
        }
    }
    ctx->pc = 0x32B1BCu;
label_32b1bc:
    // 0x32b1bc: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b1c0:
    // 0x32b1c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b1c4:
    // 0x32b1c4: 0x40f809  jalr        $v0
label_32b1c8:
    if (ctx->pc == 0x32B1C8u) {
        ctx->pc = 0x32B1CCu;
        goto label_32b1cc;
    }
    ctx->pc = 0x32B1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B1CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B1C4u, 0x32B1CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B1CCu;
label_32b1cc:
    // 0x32b1cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b1d0:
    // 0x32b1d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32b1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_32b1d4:
    // 0x32b1d4: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x32b1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_32b1d8:
    // 0x32b1d8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_32b1dc:
    if (ctx->pc == 0x32B1DCu) {
        ctx->pc = 0x32B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1D8u;
        // 0x32b1dc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1E0u;
        goto label_32b1e0;
    }
    ctx->pc = 0x32B1D8u;
    {
        const bool branch_taken_0x32b1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1D8u;
        // 0x32b1dc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b1d8) {
            ctx->pc = 0x32B168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b168;
        }
    }
    ctx->pc = 0x32B1E0u;
label_32b1e0:
    // 0x32b1e0: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x32b1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_32b1e4:
    // 0x32b1e4: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
label_32b1e8:
    if (ctx->pc == 0x32B1E8u) {
        ctx->pc = 0x32B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1E4u;
        // 0x32b1e8: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B1ECu;
        goto label_32b1ec;
    }
    ctx->pc = 0x32B1E4u;
    {
        const bool branch_taken_0x32b1e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1E4u;
        // 0x32b1e8: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b1e4) {
            ctx->pc = 0x32B20Cu;
            goto label_32b20c;
        }
    }
    ctx->pc = 0x32B1ECu;
label_32b1ec:
    // 0x32b1ec: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x32b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_32b1f0:
    // 0x32b1f0: 0x24a55538  addiu       $a1, $a1, 0x5538
    ctx->pc = 0x32b1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21816));
label_32b1f4:
    // 0x32b1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32b1f8:
    // 0x32b1f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32b1fc:
    // 0x32b1fc: 0x2406011b  addiu       $a2, $zero, 0x11B
    ctx->pc = 0x32b1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
label_32b200:
    // 0x32b200: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x32b200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_32b204:
    // 0x32b204: 0xc0ca8bc  jal         func_32A2F0
label_32b208:
    if (ctx->pc == 0x32B208u) {
        ctx->pc = 0x32B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B204u;
        // 0x32b208: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B20Cu;
        goto label_32b20c;
    }
    ctx->pc = 0x32B204u;
    SET_GPR_U32(ctx, 31, 0x32B20Cu);
    ctx->pc = 0x32B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B204u;
    // 0x32b208: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A2F0u, 0x32B204u, 0x32B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B20Cu;
label_32b20c:
    // 0x32b20c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x32b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_32b210:
    // 0x32b210: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32b210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32b214:
    // 0x32b214: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x32b214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
label_32b218:
    // 0x32b218: 0x10000018  b           . + 4 + (0x18 << 2)
label_32b21c:
    if (ctx->pc == 0x32B21Cu) {
        ctx->pc = 0x32B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B218u;
        // 0x32b21c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B220u;
        goto label_32b220;
    }
    ctx->pc = 0x32B218u;
    {
        const bool branch_taken_0x32b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B218u;
        // 0x32b21c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b218) {
            ctx->pc = 0x32B27Cu;
            goto label_32b27c;
        }
    }
    ctx->pc = 0x32B220u;
label_32b220:
    // 0x32b220: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x32b220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_32b224:
    // 0x32b224: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32b224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32b228:
    // 0x32b228: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32b228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32b22c:
    // 0x32b22c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32b22cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32b230:
    // 0x32b230: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32b230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32b234:
    // 0x32b234: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b238:
    // 0x32b238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32b238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32b23c:
    // 0x32b23c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b240:
    // 0x32b240: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32b244:
    // 0x32b244: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b248:
    if (ctx->pc == 0x32B248u) {
        ctx->pc = 0x32B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B244u;
        // 0x32b248: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B24Cu;
        goto label_32b24c;
    }
    ctx->pc = 0x32B244u;
    {
        const bool branch_taken_0x32b244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B244u;
        // 0x32b248: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b244) {
            ctx->pc = 0x32B264u;
            goto label_32b264;
        }
    }
    ctx->pc = 0x32B24Cu;
label_32b24c:
    // 0x32b24c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b250:
    // 0x32b250: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b254:
    // 0x32b254: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b254u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b258:
    // 0x32b258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b25c:
    // 0x32b25c: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b260:
    if (ctx->pc == 0x32B260u) {
        ctx->pc = 0x32B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B25Cu;
        // 0x32b260: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B264u;
        goto label_32b264;
    }
    ctx->pc = 0x32B25Cu;
    {
        const bool branch_taken_0x32b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B25Cu;
        // 0x32b260: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b25c) {
            ctx->pc = 0x32B278u;
            goto label_32b278;
        }
    }
    ctx->pc = 0x32B264u;
label_32b264:
    // 0x32b264: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b268:
    // 0x32b268: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b26c:
    // 0x32b26c: 0x40f809  jalr        $v0
label_32b270:
    if (ctx->pc == 0x32B270u) {
        ctx->pc = 0x32B274u;
        goto label_32b274;
    }
    ctx->pc = 0x32B26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B274u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B26Cu, 0x32B274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B274u;
label_32b274:
    // 0x32b274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b278:
    // 0x32b278: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32b278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32b27c:
    // 0x32b27c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32b280:
    // 0x32b280: 0x5457ff41  bnel        $v0, $s7, . + 4 + (-0xBF << 2)
label_32b284:
    if (ctx->pc == 0x32B284u) {
        ctx->pc = 0x32B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B280u;
        // 0x32b284: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B288u;
        goto label_32b288;
    }
    ctx->pc = 0x32B280u;
    {
        const bool branch_taken_0x32b280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x32b280) {
            ctx->pc = 0x32B284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B280u;
            // 0x32b284: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32af88;
        }
    }
    ctx->pc = 0x32B288u;
label_32b288:
    // 0x32b288: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x32b288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_32b28c:
    // 0x32b28c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32b28cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_32b290:
    // 0x32b290: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32b294:
    // 0x32b294: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x32b294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_32b298:
    // 0x32b298: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32b298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32b29c:
    // 0x32b29c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b2a0:
    // 0x32b2a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32b2a4:
    // 0x32b2a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b2a8:
    // 0x32b2a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_32b2ac:
    // 0x32b2ac: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_32b2b0:
    if (ctx->pc == 0x32B2B0u) {
        ctx->pc = 0x32B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2ACu;
        // 0x32b2b0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2B4u;
        goto label_32b2b4;
    }
    ctx->pc = 0x32B2ACu;
    {
        const bool branch_taken_0x32b2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2ACu;
        // 0x32b2b0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2ac) {
            ctx->pc = 0x32B2CCu;
            goto label_32b2cc;
        }
    }
    ctx->pc = 0x32B2B4u;
label_32b2b4:
    // 0x32b2b4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x32b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b2b8:
    // 0x32b2b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32b2bc:
    // 0x32b2bc: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x32b2bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32b2c0:
    // 0x32b2c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b2c4:
    // 0x32b2c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_32b2c8:
    if (ctx->pc == 0x32B2C8u) {
        ctx->pc = 0x32B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2C4u;
        // 0x32b2c8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B2CCu;
        goto label_32b2cc;
    }
    ctx->pc = 0x32B2C4u;
    {
        const bool branch_taken_0x32b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2C4u;
        // 0x32b2c8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2c4) {
            ctx->pc = 0x32B2E0u;
            goto label_32b2e0;
        }
    }
    ctx->pc = 0x32B2CCu;
label_32b2cc:
    // 0x32b2cc: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x32b2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_32b2d0:
    // 0x32b2d0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32b2d4:
    // 0x32b2d4: 0x40f809  jalr        $v0
label_32b2d8:
    if (ctx->pc == 0x32B2D8u) {
        ctx->pc = 0x32B2DCu;
        goto label_32b2dc;
    }
    ctx->pc = 0x32B2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32B2DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B2D4u, 0x32B2DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32B2DCu;
label_32b2dc:
    // 0x32b2dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32b2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32b2e0:
    // 0x32b2e0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x32b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_32b2e4:
    // 0x32b2e4: 0x2626fffe  addiu       $a2, $s1, -0x2
    ctx->pc = 0x32b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
label_32b2e8:
    // 0x32b2e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32b2ec:
    // 0x32b2ec: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x32b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_32b2f0:
    // 0x32b2f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32b2f4:
    // 0x32b2f4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x32b2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_32b2f8:
    // 0x32b2f8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x32b2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_32b2fc:
    // 0x32b2fc: 0xc0cbebc  jal         func_32FAF0
label_32b300:
    if (ctx->pc == 0x32B300u) {
        ctx->pc = 0x32B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2FCu;
        // 0x32b300: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B304u;
        goto label_32b304;
    }
    ctx->pc = 0x32B2FCu;
    SET_GPR_U32(ctx, 31, 0x32B304u);
    ctx->pc = 0x32B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B2FCu;
    // 0x32b300: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAF0u, 0x32B2FCu, 0x32B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B304u;
label_32b304:
    // 0x32b304: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x32b304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32b308:
    // 0x32b308: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x32b308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_32b30c:
    // 0x32b30c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x32b30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_32b310:
    // 0x32b310: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x32b310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_32b314:
    // 0x32b314: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x32b314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_32b318:
    // 0x32b318: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x32b318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32b31c:
    // 0x32b31c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32b31cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_32b320:
    // 0x32b320: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x32b320u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32b324:
    // 0x32b324: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x32b324u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32b328:
    // 0x32b328: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x32b328u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32b32c:
    // 0x32b32c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32b32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32b330:
    // 0x32b330: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32b330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_32b334:
    // 0x32b334: 0x3e00008  jr          $ra
label_32b338:
    if (ctx->pc == 0x32B338u) {
        ctx->pc = 0x32B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B334u;
        // 0x32b338: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32B33Cu;
        goto label_32b33c;
    }
    ctx->pc = 0x32B334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B334u;
        // 0x32b338: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B33Cu;
label_32b33c:
    // 0x32b33c: 0x0  nop
    ctx->pc = 0x32b33cu;
    // NOP
    ctx->pc = 0x32b340u;
}
