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

// Function: sub_001CEF10
// Address: 0x1cef10 - 0x1cf358
void sub_001CEF10_0x1cef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEF10_0x1cef10");
#endif

    switch (ctx->pc) {
        case 0x1cef10u: goto label_1cef10;
        case 0x1cef14u: goto label_1cef14;
        case 0x1cef18u: goto label_1cef18;
        case 0x1cef1cu: goto label_1cef1c;
        case 0x1cef20u: goto label_1cef20;
        case 0x1cef24u: goto label_1cef24;
        case 0x1cef28u: goto label_1cef28;
        case 0x1cef2cu: goto label_1cef2c;
        case 0x1cef30u: goto label_1cef30;
        case 0x1cef34u: goto label_1cef34;
        case 0x1cef38u: goto label_1cef38;
        case 0x1cef3cu: goto label_1cef3c;
        case 0x1cef40u: goto label_1cef40;
        case 0x1cef44u: goto label_1cef44;
        case 0x1cef48u: goto label_1cef48;
        case 0x1cef4cu: goto label_1cef4c;
        case 0x1cef50u: goto label_1cef50;
        case 0x1cef54u: goto label_1cef54;
        case 0x1cef58u: goto label_1cef58;
        case 0x1cef5cu: goto label_1cef5c;
        case 0x1cef60u: goto label_1cef60;
        case 0x1cef64u: goto label_1cef64;
        case 0x1cef68u: goto label_1cef68;
        case 0x1cef6cu: goto label_1cef6c;
        case 0x1cef70u: goto label_1cef70;
        case 0x1cef74u: goto label_1cef74;
        case 0x1cef78u: goto label_1cef78;
        case 0x1cef7cu: goto label_1cef7c;
        case 0x1cef80u: goto label_1cef80;
        case 0x1cef84u: goto label_1cef84;
        case 0x1cef88u: goto label_1cef88;
        case 0x1cef8cu: goto label_1cef8c;
        case 0x1cef90u: goto label_1cef90;
        case 0x1cef94u: goto label_1cef94;
        case 0x1cef98u: goto label_1cef98;
        case 0x1cef9cu: goto label_1cef9c;
        case 0x1cefa0u: goto label_1cefa0;
        case 0x1cefa4u: goto label_1cefa4;
        case 0x1cefa8u: goto label_1cefa8;
        case 0x1cefacu: goto label_1cefac;
        case 0x1cefb0u: goto label_1cefb0;
        case 0x1cefb4u: goto label_1cefb4;
        case 0x1cefb8u: goto label_1cefb8;
        case 0x1cefbcu: goto label_1cefbc;
        case 0x1cefc0u: goto label_1cefc0;
        case 0x1cefc4u: goto label_1cefc4;
        case 0x1cefc8u: goto label_1cefc8;
        case 0x1cefccu: goto label_1cefcc;
        case 0x1cefd0u: goto label_1cefd0;
        case 0x1cefd4u: goto label_1cefd4;
        case 0x1cefd8u: goto label_1cefd8;
        case 0x1cefdcu: goto label_1cefdc;
        case 0x1cefe0u: goto label_1cefe0;
        case 0x1cefe4u: goto label_1cefe4;
        case 0x1cefe8u: goto label_1cefe8;
        case 0x1cefecu: goto label_1cefec;
        case 0x1ceff0u: goto label_1ceff0;
        case 0x1ceff4u: goto label_1ceff4;
        case 0x1ceff8u: goto label_1ceff8;
        case 0x1ceffcu: goto label_1ceffc;
        case 0x1cf000u: goto label_1cf000;
        case 0x1cf004u: goto label_1cf004;
        case 0x1cf008u: goto label_1cf008;
        case 0x1cf00cu: goto label_1cf00c;
        case 0x1cf010u: goto label_1cf010;
        case 0x1cf014u: goto label_1cf014;
        case 0x1cf018u: goto label_1cf018;
        case 0x1cf01cu: goto label_1cf01c;
        case 0x1cf020u: goto label_1cf020;
        case 0x1cf024u: goto label_1cf024;
        case 0x1cf028u: goto label_1cf028;
        case 0x1cf02cu: goto label_1cf02c;
        case 0x1cf030u: goto label_1cf030;
        case 0x1cf034u: goto label_1cf034;
        case 0x1cf038u: goto label_1cf038;
        case 0x1cf03cu: goto label_1cf03c;
        case 0x1cf040u: goto label_1cf040;
        case 0x1cf044u: goto label_1cf044;
        case 0x1cf048u: goto label_1cf048;
        case 0x1cf04cu: goto label_1cf04c;
        case 0x1cf050u: goto label_1cf050;
        case 0x1cf054u: goto label_1cf054;
        case 0x1cf058u: goto label_1cf058;
        case 0x1cf05cu: goto label_1cf05c;
        case 0x1cf060u: goto label_1cf060;
        case 0x1cf064u: goto label_1cf064;
        case 0x1cf068u: goto label_1cf068;
        case 0x1cf06cu: goto label_1cf06c;
        case 0x1cf070u: goto label_1cf070;
        case 0x1cf074u: goto label_1cf074;
        case 0x1cf078u: goto label_1cf078;
        case 0x1cf07cu: goto label_1cf07c;
        case 0x1cf080u: goto label_1cf080;
        case 0x1cf084u: goto label_1cf084;
        case 0x1cf088u: goto label_1cf088;
        case 0x1cf08cu: goto label_1cf08c;
        case 0x1cf090u: goto label_1cf090;
        case 0x1cf094u: goto label_1cf094;
        case 0x1cf098u: goto label_1cf098;
        case 0x1cf09cu: goto label_1cf09c;
        case 0x1cf0a0u: goto label_1cf0a0;
        case 0x1cf0a4u: goto label_1cf0a4;
        case 0x1cf0a8u: goto label_1cf0a8;
        case 0x1cf0acu: goto label_1cf0ac;
        case 0x1cf0b0u: goto label_1cf0b0;
        case 0x1cf0b4u: goto label_1cf0b4;
        case 0x1cf0b8u: goto label_1cf0b8;
        case 0x1cf0bcu: goto label_1cf0bc;
        case 0x1cf0c0u: goto label_1cf0c0;
        case 0x1cf0c4u: goto label_1cf0c4;
        case 0x1cf0c8u: goto label_1cf0c8;
        case 0x1cf0ccu: goto label_1cf0cc;
        case 0x1cf0d0u: goto label_1cf0d0;
        case 0x1cf0d4u: goto label_1cf0d4;
        case 0x1cf0d8u: goto label_1cf0d8;
        case 0x1cf0dcu: goto label_1cf0dc;
        case 0x1cf0e0u: goto label_1cf0e0;
        case 0x1cf0e4u: goto label_1cf0e4;
        case 0x1cf0e8u: goto label_1cf0e8;
        case 0x1cf0ecu: goto label_1cf0ec;
        case 0x1cf0f0u: goto label_1cf0f0;
        case 0x1cf0f4u: goto label_1cf0f4;
        case 0x1cf0f8u: goto label_1cf0f8;
        case 0x1cf0fcu: goto label_1cf0fc;
        case 0x1cf100u: goto label_1cf100;
        case 0x1cf104u: goto label_1cf104;
        case 0x1cf108u: goto label_1cf108;
        case 0x1cf10cu: goto label_1cf10c;
        case 0x1cf110u: goto label_1cf110;
        case 0x1cf114u: goto label_1cf114;
        case 0x1cf118u: goto label_1cf118;
        case 0x1cf11cu: goto label_1cf11c;
        case 0x1cf120u: goto label_1cf120;
        case 0x1cf124u: goto label_1cf124;
        case 0x1cf128u: goto label_1cf128;
        case 0x1cf12cu: goto label_1cf12c;
        case 0x1cf130u: goto label_1cf130;
        case 0x1cf134u: goto label_1cf134;
        case 0x1cf138u: goto label_1cf138;
        case 0x1cf13cu: goto label_1cf13c;
        case 0x1cf140u: goto label_1cf140;
        case 0x1cf144u: goto label_1cf144;
        case 0x1cf148u: goto label_1cf148;
        case 0x1cf14cu: goto label_1cf14c;
        case 0x1cf150u: goto label_1cf150;
        case 0x1cf154u: goto label_1cf154;
        case 0x1cf158u: goto label_1cf158;
        case 0x1cf15cu: goto label_1cf15c;
        case 0x1cf160u: goto label_1cf160;
        case 0x1cf164u: goto label_1cf164;
        case 0x1cf168u: goto label_1cf168;
        case 0x1cf16cu: goto label_1cf16c;
        case 0x1cf170u: goto label_1cf170;
        case 0x1cf174u: goto label_1cf174;
        case 0x1cf178u: goto label_1cf178;
        case 0x1cf17cu: goto label_1cf17c;
        case 0x1cf180u: goto label_1cf180;
        case 0x1cf184u: goto label_1cf184;
        case 0x1cf188u: goto label_1cf188;
        case 0x1cf18cu: goto label_1cf18c;
        case 0x1cf190u: goto label_1cf190;
        case 0x1cf194u: goto label_1cf194;
        case 0x1cf198u: goto label_1cf198;
        case 0x1cf19cu: goto label_1cf19c;
        case 0x1cf1a0u: goto label_1cf1a0;
        case 0x1cf1a4u: goto label_1cf1a4;
        case 0x1cf1a8u: goto label_1cf1a8;
        case 0x1cf1acu: goto label_1cf1ac;
        case 0x1cf1b0u: goto label_1cf1b0;
        case 0x1cf1b4u: goto label_1cf1b4;
        case 0x1cf1b8u: goto label_1cf1b8;
        case 0x1cf1bcu: goto label_1cf1bc;
        case 0x1cf1c0u: goto label_1cf1c0;
        case 0x1cf1c4u: goto label_1cf1c4;
        case 0x1cf1c8u: goto label_1cf1c8;
        case 0x1cf1ccu: goto label_1cf1cc;
        case 0x1cf1d0u: goto label_1cf1d0;
        case 0x1cf1d4u: goto label_1cf1d4;
        case 0x1cf1d8u: goto label_1cf1d8;
        case 0x1cf1dcu: goto label_1cf1dc;
        case 0x1cf1e0u: goto label_1cf1e0;
        case 0x1cf1e4u: goto label_1cf1e4;
        case 0x1cf1e8u: goto label_1cf1e8;
        case 0x1cf1ecu: goto label_1cf1ec;
        case 0x1cf1f0u: goto label_1cf1f0;
        case 0x1cf1f4u: goto label_1cf1f4;
        case 0x1cf1f8u: goto label_1cf1f8;
        case 0x1cf1fcu: goto label_1cf1fc;
        case 0x1cf200u: goto label_1cf200;
        case 0x1cf204u: goto label_1cf204;
        case 0x1cf208u: goto label_1cf208;
        case 0x1cf20cu: goto label_1cf20c;
        case 0x1cf210u: goto label_1cf210;
        case 0x1cf214u: goto label_1cf214;
        case 0x1cf218u: goto label_1cf218;
        case 0x1cf21cu: goto label_1cf21c;
        case 0x1cf220u: goto label_1cf220;
        case 0x1cf224u: goto label_1cf224;
        case 0x1cf228u: goto label_1cf228;
        case 0x1cf22cu: goto label_1cf22c;
        case 0x1cf230u: goto label_1cf230;
        case 0x1cf234u: goto label_1cf234;
        case 0x1cf238u: goto label_1cf238;
        case 0x1cf23cu: goto label_1cf23c;
        case 0x1cf240u: goto label_1cf240;
        case 0x1cf244u: goto label_1cf244;
        case 0x1cf248u: goto label_1cf248;
        case 0x1cf24cu: goto label_1cf24c;
        case 0x1cf250u: goto label_1cf250;
        case 0x1cf254u: goto label_1cf254;
        case 0x1cf258u: goto label_1cf258;
        case 0x1cf25cu: goto label_1cf25c;
        case 0x1cf260u: goto label_1cf260;
        case 0x1cf264u: goto label_1cf264;
        case 0x1cf268u: goto label_1cf268;
        case 0x1cf26cu: goto label_1cf26c;
        case 0x1cf270u: goto label_1cf270;
        case 0x1cf274u: goto label_1cf274;
        case 0x1cf278u: goto label_1cf278;
        case 0x1cf27cu: goto label_1cf27c;
        case 0x1cf280u: goto label_1cf280;
        case 0x1cf284u: goto label_1cf284;
        case 0x1cf288u: goto label_1cf288;
        case 0x1cf28cu: goto label_1cf28c;
        case 0x1cf290u: goto label_1cf290;
        case 0x1cf294u: goto label_1cf294;
        case 0x1cf298u: goto label_1cf298;
        case 0x1cf29cu: goto label_1cf29c;
        case 0x1cf2a0u: goto label_1cf2a0;
        case 0x1cf2a4u: goto label_1cf2a4;
        case 0x1cf2a8u: goto label_1cf2a8;
        case 0x1cf2acu: goto label_1cf2ac;
        case 0x1cf2b0u: goto label_1cf2b0;
        case 0x1cf2b4u: goto label_1cf2b4;
        case 0x1cf2b8u: goto label_1cf2b8;
        case 0x1cf2bcu: goto label_1cf2bc;
        case 0x1cf2c0u: goto label_1cf2c0;
        case 0x1cf2c4u: goto label_1cf2c4;
        case 0x1cf2c8u: goto label_1cf2c8;
        case 0x1cf2ccu: goto label_1cf2cc;
        case 0x1cf2d0u: goto label_1cf2d0;
        case 0x1cf2d4u: goto label_1cf2d4;
        case 0x1cf2d8u: goto label_1cf2d8;
        case 0x1cf2dcu: goto label_1cf2dc;
        case 0x1cf2e0u: goto label_1cf2e0;
        case 0x1cf2e4u: goto label_1cf2e4;
        case 0x1cf2e8u: goto label_1cf2e8;
        case 0x1cf2ecu: goto label_1cf2ec;
        case 0x1cf2f0u: goto label_1cf2f0;
        case 0x1cf2f4u: goto label_1cf2f4;
        case 0x1cf2f8u: goto label_1cf2f8;
        case 0x1cf2fcu: goto label_1cf2fc;
        case 0x1cf300u: goto label_1cf300;
        case 0x1cf304u: goto label_1cf304;
        case 0x1cf308u: goto label_1cf308;
        case 0x1cf30cu: goto label_1cf30c;
        case 0x1cf310u: goto label_1cf310;
        case 0x1cf314u: goto label_1cf314;
        case 0x1cf318u: goto label_1cf318;
        case 0x1cf31cu: goto label_1cf31c;
        case 0x1cf320u: goto label_1cf320;
        case 0x1cf324u: goto label_1cf324;
        case 0x1cf328u: goto label_1cf328;
        case 0x1cf32cu: goto label_1cf32c;
        case 0x1cf330u: goto label_1cf330;
        case 0x1cf334u: goto label_1cf334;
        case 0x1cf338u: goto label_1cf338;
        case 0x1cf33cu: goto label_1cf33c;
        case 0x1cf340u: goto label_1cf340;
        case 0x1cf344u: goto label_1cf344;
        case 0x1cf348u: goto label_1cf348;
        case 0x1cf34cu: goto label_1cf34c;
        case 0x1cf350u: goto label_1cf350;
        case 0x1cf354u: goto label_1cf354;
        default: break;
    }

    ctx->pc = 0x1cef10u;

label_1cef10:
    // 0x1cef10: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1cef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1cef14:
    // 0x1cef14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cef14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cef18:
    // 0x1cef18: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1cef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1cef1c:
    // 0x1cef1c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1cef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_1cef20:
    // 0x1cef20: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1cef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1cef24:
    // 0x1cef24: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1cef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1cef28:
    // 0x1cef28: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1cef28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1cef2c:
    // 0x1cef2c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1cef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1cef30:
    // 0x1cef30: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1cef30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1cef34:
    // 0x1cef34: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1cef34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1cef38:
    // 0x1cef38: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1cef38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1cef3c:
    // 0x1cef3c: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1cef3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1cef40:
    // 0x1cef40: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cef40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1cef44:
    // 0x1cef44: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x1cef44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1cef48:
    // 0x1cef48: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x1cef48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1cef4c:
    // 0x1cef4c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1cef4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1cef50:
    // 0x1cef50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cef50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cef54:
    // 0x1cef54: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1cef54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1cef58:
    // 0x1cef58: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1cef5c:
    if (ctx->pc == 0x1CEF5Cu) {
        ctx->pc = 0x1CEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF58u;
        // 0x1cef5c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEF60u;
        goto label_1cef60;
    }
    ctx->pc = 0x1CEF58u;
    {
        const bool branch_taken_0x1cef58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF58u;
        // 0x1cef5c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef58) {
            ctx->pc = 0x1CEFBCu;
            goto label_1cefbc;
        }
    }
    ctx->pc = 0x1CEF60u;
label_1cef60:
    // 0x1cef60: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1cef60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1cef64:
    // 0x1cef64: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_1cef68:
    if (ctx->pc == 0x1CEF68u) {
        ctx->pc = 0x1CEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF64u;
        // 0x1cef68: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEF6Cu;
        goto label_1cef6c;
    }
    ctx->pc = 0x1CEF64u;
    {
        const bool branch_taken_0x1cef64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF64u;
        // 0x1cef68: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef64) {
            ctx->pc = 0x1CF070u;
            goto label_1cf070;
        }
    }
    ctx->pc = 0x1CEF6Cu;
label_1cef6c:
    // 0x1cef6c: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x1cef6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
label_1cef70:
    // 0x1cef70: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1cef70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_1cef74:
    // 0x1cef74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cef74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cef78:
    // 0x1cef78: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1cef78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_1cef7c:
    // 0x1cef7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cef7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1cef80:
    // 0x1cef80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cef80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cef84:
    // 0x1cef84: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cef84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1cef88:
    // 0x1cef88: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x1cef88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
label_1cef8c:
    // 0x1cef8c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1cef8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_1cef90:
    // 0x1cef90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cef90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cef94:
    // 0x1cef94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cef94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cef98:
    // 0x1cef98: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x1cef98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
label_1cef9c:
    // 0x1cef9c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1cef9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1cefa0:
    // 0x1cefa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cefa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cefa4:
    // 0x1cefa4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1cefa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1cefa8:
    // 0x1cefa8: 0xe4a3ebf8  swc1        $f3, -0x1408($a1)
    ctx->pc = 0x1cefa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962168), bits); }
label_1cefac:
    // 0x1cefac: 0xe461ebfc  swc1        $f1, -0x1404($v1)
    ctx->pc = 0x1cefacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962172), bits); }
label_1cefb0:
    // 0x1cefb0: 0xe482ec00  swc1        $f2, -0x1400($a0)
    ctx->pc = 0x1cefb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962176), bits); }
label_1cefb4:
    // 0x1cefb4: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1cefb8:
    if (ctx->pc == 0x1CEFB8u) {
        ctx->pc = 0x1CEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEFB4u;
        // 0x1cefb8: 0xe440ec04  swc1        $f0, -0x13FC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEFBCu;
        goto label_1cefbc;
    }
    ctx->pc = 0x1CEFB4u;
    {
        const bool branch_taken_0x1cefb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEFB4u;
        // 0x1cefb8: 0xe440ec04  swc1        $f0, -0x13FC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cefb4) {
            ctx->pc = 0x1CF070u;
            goto label_1cf070;
        }
    }
    ctx->pc = 0x1CEFBCu;
label_1cefbc:
    // 0x1cefbc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1cefbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1cefc0:
    // 0x1cefc0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1cefc4:
    if (ctx->pc == 0x1CEFC4u) {
        ctx->pc = 0x1CEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEFC0u;
        // 0x1cefc4: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEFC8u;
        goto label_1cefc8;
    }
    ctx->pc = 0x1CEFC0u;
    {
        const bool branch_taken_0x1cefc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEFC0u;
        // 0x1cefc4: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cefc0) {
            ctx->pc = 0x1CF02Cu;
            goto label_1cf02c;
        }
    }
    ctx->pc = 0x1CEFC8u;
label_1cefc8:
    // 0x1cefc8: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1cefc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
label_1cefcc:
    // 0x1cefcc: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1cefccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_1cefd0:
    // 0x1cefd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cefd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cefd4:
    // 0x1cefd4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1cefd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1cefd8:
    // 0x1cefd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cefd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1cefdc:
    // 0x1cefdc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cefdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cefe0:
    // 0x1cefe0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1cefe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1cefe4:
    // 0x1cefe4: 0x3c013f1c  lui         $at, 0x3F1C
    ctx->pc = 0x1cefe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16156 << 16));
label_1cefe8:
    // 0x1cefe8: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1cefe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_1cefec:
    // 0x1cefec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1cefecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ceff0:
    // 0x1ceff0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ceff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ceff4:
    // 0x1ceff4: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1ceff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
label_1ceff8:
    // 0x1ceff8: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1ceff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_1ceffc:
    // 0x1ceffc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ceffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf000:
    // 0x1cf000: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cf000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cf004:
    // 0x1cf004: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1cf004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1cf008:
    // 0x1cf008: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cf008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1cf00c:
    // 0x1cf00c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf010:
    // 0x1cf010: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cf010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1cf014:
    // 0x1cf014: 0xe442ec04  swc1        $f2, -0x13FC($v0)
    ctx->pc = 0x1cf014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962180), bits); }
label_1cf018:
    // 0x1cf018: 0xe463ec00  swc1        $f3, -0x1400($v1)
    ctx->pc = 0x1cf018u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962176), bits); }
label_1cf01c:
    // 0x1cf01c: 0xe484ebfc  swc1        $f4, -0x1404($a0)
    ctx->pc = 0x1cf01cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294962172), bits); }
label_1cf020:
    // 0x1cf020: 0xe4c1ebf8  swc1        $f1, -0x1408($a2)
    ctx->pc = 0x1cf020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294962168), bits); }
label_1cf024:
    // 0x1cf024: 0x10000012  b           . + 4 + (0x12 << 2)
label_1cf028:
    if (ctx->pc == 0x1CF028u) {
        ctx->pc = 0x1CF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF024u;
        // 0x1cf028: 0xe4a0ebf4  swc1        $f0, -0x140C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962164), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF02Cu;
        goto label_1cf02c;
    }
    ctx->pc = 0x1CF024u;
    {
        const bool branch_taken_0x1cf024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF024u;
        // 0x1cf028: 0xe4a0ebf4  swc1        $f0, -0x140C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294962164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf024) {
            ctx->pc = 0x1CF070u;
            goto label_1cf070;
        }
    }
    ctx->pc = 0x1CF02Cu;
label_1cf02c:
    // 0x1cf02c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1cf02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1cf030:
    // 0x1cf030: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1cf034:
    if (ctx->pc == 0x1CF034u) {
        ctx->pc = 0x1CF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF030u;
        // 0x1cf034: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF038u;
        goto label_1cf038;
    }
    ctx->pc = 0x1CF030u;
    {
        const bool branch_taken_0x1cf030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF030u;
        // 0x1cf034: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf030) {
            ctx->pc = 0x1CF070u;
            goto label_1cf070;
        }
    }
    ctx->pc = 0x1CF038u;
label_1cf038:
    // 0x1cf038: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1cf038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1cf03c:
    // 0x1cf03c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1cf03cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1cf040:
    // 0x1cf040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf044:
    // 0x1cf044: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1cf044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_1cf048:
    // 0x1cf048: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1cf048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1cf04c:
    // 0x1cf04c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cf04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cf050:
    // 0x1cf050: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cf050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cf054:
    // 0x1cf054: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x1cf054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
label_1cf058:
    // 0x1cf058: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x1cf058u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
label_1cf05c:
    // 0x1cf05c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cf05cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf060:
    // 0x1cf060: 0xe440ec00  swc1        $f0, -0x1400($v0)
    ctx->pc = 0x1cf060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962176), bits); }
label_1cf064:
    // 0x1cf064: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cf064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cf068:
    // 0x1cf068: 0xe461ec04  swc1        $f1, -0x13FC($v1)
    ctx->pc = 0x1cf068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294962180), bits); }
label_1cf06c:
    // 0x1cf06c: 0xe442ebf4  swc1        $f2, -0x140C($v0)
    ctx->pc = 0x1cf06cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962164), bits); }
label_1cf070:
    // 0x1cf070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cf074:
    // 0x1cf074: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cf074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1cf078:
    // 0x1cf078: 0xc0746a8  jal         func_1D1AA0
label_1cf07c:
    if (ctx->pc == 0x1CF07Cu) {
        ctx->pc = 0x1CF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF078u;
        // 0x1cf07c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF080u;
        goto label_1cf080;
    }
    ctx->pc = 0x1CF078u;
    SET_GPR_U32(ctx, 31, 0x1CF080u);
    ctx->pc = 0x1CF07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF078u;
    // 0x1cf07c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AA0u, 0x1CF078u, 0x1CF080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF080u;
label_1cf080:
    // 0x1cf080: 0x26f10170  addiu       $s1, $s7, 0x170
    ctx->pc = 0x1cf080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 368));
label_1cf084:
    // 0x1cf084: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cf084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cf088:
    // 0x1cf088: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cf088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cf08c:
    // 0x1cf08c: 0xc440ebf0  lwc1        $f0, -0x1410($v0)
    ctx->pc = 0x1cf08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf090:
    // 0x1cf090: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1cf090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cf094:
    // 0x1cf094: 0xc461ebf4  lwc1        $f1, -0x140C($v1)
    ctx->pc = 0x1cf094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf098:
    // 0x1cf098: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1cf098u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf09c:
    // 0x1cf09c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1cf09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1cf0a0:
    // 0x1cf0a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf0a4:
    // 0x1cf0a4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1cf0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1cf0a8:
    // 0x1cf0a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf0ac:
    // 0x1cf0ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cf0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cf0b0:
    // 0x1cf0b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cf0b4:
    // 0x1cf0b4: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1cf0b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1cf0b8:
    // 0x1cf0b8: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x1cf0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_1cf0bc:
    // 0x1cf0bc: 0xae3e0004  sw          $fp, 0x4($s1)
    ctx->pc = 0x1cf0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 30));
label_1cf0c0:
    // 0x1cf0c0: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x1cf0c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cf0c4:
    // 0x1cf0c4: 0xae3e0008  sw          $fp, 0x8($s1)
    ctx->pc = 0x1cf0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 30));
label_1cf0c8:
    // 0x1cf0c8: 0x26f50890  addiu       $s5, $s7, 0x890
    ctx->pc = 0x1cf0c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 2192));
label_1cf0cc:
    // 0x1cf0cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cf0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1cf0d0:
    // 0x1cf0d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1cf0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1cf0d4:
    // 0x1cf0d4: 0xc06e4dc  jal         func_1B9370
label_1cf0d8:
    if (ctx->pc == 0x1CF0D8u) {
        ctx->pc = 0x1CF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0D4u;
        // 0x1cf0d8: 0x26f60430  addiu       $s6, $s7, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF0DCu;
        goto label_1cf0dc;
    }
    ctx->pc = 0x1CF0D4u;
    SET_GPR_U32(ctx, 31, 0x1CF0DCu);
    ctx->pc = 0x1CF0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0D4u;
    // 0x1cf0d8: 0x26f60430  addiu       $s6, $s7, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1CF0D4u, 0x1CF0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0DCu;
label_1cf0dc:
    // 0x1cf0dc: 0x26f30360  addiu       $s3, $s7, 0x360
    ctx->pc = 0x1cf0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 864));
label_1cf0e0:
    // 0x1cf0e0: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1cf0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_1cf0e4:
    // 0x1cf0e4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1cf0e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1cf0e8:
    // 0x1cf0e8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1cf0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1cf0ec:
    // 0x1cf0ec: 0xc067b9c  jal         func_19EE70
label_1cf0f0:
    if (ctx->pc == 0x1CF0F0u) {
        ctx->pc = 0x1CF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0ECu;
        // 0x1cf0f0: 0x240400ce  addiu       $a0, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF0F4u;
        goto label_1cf0f4;
    }
    ctx->pc = 0x1CF0ECu;
    SET_GPR_U32(ctx, 31, 0x1CF0F4u);
    ctx->pc = 0x1CF0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0ECu;
    // 0x1cf0f0: 0x240400ce  addiu       $a0, $zero, 0xCE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CF0ECu, 0x1CF0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0F4u;
label_1cf0f4:
    // 0x1cf0f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cf0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf0f8:
    // 0x1cf0f8: 0xc06ec94  jal         func_1BB250
label_1cf0fc:
    if (ctx->pc == 0x1CF0FCu) {
        ctx->pc = 0x1CF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0F8u;
        // 0x1cf0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF100u;
        goto label_1cf100;
    }
    ctx->pc = 0x1CF0F8u;
    SET_GPR_U32(ctx, 31, 0x1CF100u);
    ctx->pc = 0x1CF0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0F8u;
    // 0x1cf0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1CF0F8u, 0x1CF100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF100u;
label_1cf100:
    // 0x1cf100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cf104:
    // 0x1cf104: 0xc06e51e  jal         func_1B9478
label_1cf108:
    if (ctx->pc == 0x1CF108u) {
        ctx->pc = 0x1CF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF104u;
        // 0x1cf108: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF10Cu;
        goto label_1cf10c;
    }
    ctx->pc = 0x1CF104u;
    SET_GPR_U32(ctx, 31, 0x1CF10Cu);
    ctx->pc = 0x1CF108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF104u;
    // 0x1cf108: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1CF104u, 0x1CF10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF10Cu;
label_1cf10c:
    // 0x1cf10c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cf10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cf110:
    // 0x1cf110: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1cf110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cf114:
    // 0x1cf114: 0xc44cec08  lwc1        $f12, -0x13F8($v0)
    ctx->pc = 0x1cf114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cf118:
    // 0x1cf118: 0xc05e602  jal         func_179808
label_1cf11c:
    if (ctx->pc == 0x1CF11Cu) {
        ctx->pc = 0x1CF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF118u;
        // 0x1cf11c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF120u;
        goto label_1cf120;
    }
    ctx->pc = 0x1CF118u;
    SET_GPR_U32(ctx, 31, 0x1CF120u);
    ctx->pc = 0x1CF11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF118u;
    // 0x1cf11c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1CF118u, 0x1CF120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF120u;
label_1cf120:
    // 0x1cf120: 0x8e4739c0  lw          $a3, 0x39C0($s2)
    ctx->pc = 0x1cf120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14784)));
label_1cf124:
    // 0x1cf124: 0x26e407c0  addiu       $a0, $s7, 0x7C0
    ctx->pc = 0x1cf124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1984));
label_1cf128:
    // 0x1cf128: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1cf128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1cf12c:
    // 0x1cf12c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf130:
    // 0x1cf130: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cf130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cf134:
    // 0x1cf134: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1cf134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf138:
    // 0x1cf138: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf13c:
    // 0x1cf13c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cf13cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf140:
    // 0x1cf140: 0xc073418  jal         func_1CD060
label_1cf144:
    if (ctx->pc == 0x1CF144u) {
        ctx->pc = 0x1CF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF140u;
        // 0x1cf144: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF148u;
        goto label_1cf148;
    }
    ctx->pc = 0x1CF140u;
    SET_GPR_U32(ctx, 31, 0x1CF148u);
    ctx->pc = 0x1CF144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF140u;
    // 0x1cf144: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1CF140u, 0x1CF148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF148u;
label_1cf148:
    // 0x1cf148: 0x8e4739c0  lw          $a3, 0x39C0($s2)
    ctx->pc = 0x1cf148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14784)));
label_1cf14c:
    // 0x1cf14c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1cf14cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf150:
    // 0x1cf150: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x1cf150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_1cf154:
    // 0x1cf154: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf158:
    // 0x1cf158: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cf158u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf15c:
    // 0x1cf15c: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1cf15cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cf160:
    // 0x1cf160: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cf160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cf164:
    // 0x1cf164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf168:
    // 0x1cf168: 0xc073418  jal         func_1CD060
label_1cf16c:
    if (ctx->pc == 0x1CF16Cu) {
        ctx->pc = 0x1CF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF168u;
        // 0x1cf16c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF170u;
        goto label_1cf170;
    }
    ctx->pc = 0x1CF168u;
    SET_GPR_U32(ctx, 31, 0x1CF170u);
    ctx->pc = 0x1CF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF168u;
    // 0x1cf16c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1CF168u, 0x1CF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF170u;
label_1cf170:
    // 0x1cf170: 0xc067b9c  jal         func_19EE70
label_1cf174:
    if (ctx->pc == 0x1CF174u) {
        ctx->pc = 0x1CF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF170u;
        // 0x1cf174: 0x240400ce  addiu       $a0, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF178u;
        goto label_1cf178;
    }
    ctx->pc = 0x1CF170u;
    SET_GPR_U32(ctx, 31, 0x1CF178u);
    ctx->pc = 0x1CF174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF170u;
    // 0x1cf174: 0x240400ce  addiu       $a0, $zero, 0xCE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CF170u, 0x1CF178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF178u;
label_1cf178:
    // 0x1cf178: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cf178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf17c:
    // 0x1cf17c: 0xc073478  jal         func_1CD1E0
label_1cf180:
    if (ctx->pc == 0x1CF180u) {
        ctx->pc = 0x1CF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF17Cu;
        // 0x1cf180: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF184u;
        goto label_1cf184;
    }
    ctx->pc = 0x1CF17Cu;
    SET_GPR_U32(ctx, 31, 0x1CF184u);
    ctx->pc = 0x1CF180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF17Cu;
    // 0x1cf180: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1CF17Cu, 0x1CF184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF184u;
label_1cf184:
    // 0x1cf184: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1cf184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1cf188:
    // 0x1cf188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf18c:
    // 0x1cf18c: 0xc4a0ebf8  lwc1        $f0, -0x1408($a1)
    ctx->pc = 0x1cf18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294962168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf190:
    // 0x1cf190: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf194:
    // 0x1cf194: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x1cf194u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1cf198:
    // 0x1cf198: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf19c:
    // 0x1cf19c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1cf19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1cf1a0:
    // 0x1cf1a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cf1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1cf1a4:
    // 0x1cf1a4: 0xc048b52  jal         func_122D48
label_1cf1a8:
    if (ctx->pc == 0x1CF1A8u) {
        ctx->pc = 0x1CF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1A4u;
        // 0x1cf1a8: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF1ACu;
        goto label_1cf1ac;
    }
    ctx->pc = 0x1CF1A4u;
    SET_GPR_U32(ctx, 31, 0x1CF1ACu);
    ctx->pc = 0x1CF1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1A4u;
    // 0x1cf1a8: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1CF1A4u, 0x1CF1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1ACu;
label_1cf1ac:
    // 0x1cf1ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf1b0:
    // 0x1cf1b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf1b4:
    // 0x1cf1b4: 0xc073ad0  jal         func_1CEB40
label_1cf1b8:
    if (ctx->pc == 0x1CF1B8u) {
        ctx->pc = 0x1CF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1B4u;
        // 0x1cf1b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF1BCu;
        goto label_1cf1bc;
    }
    ctx->pc = 0x1CF1B4u;
    SET_GPR_U32(ctx, 31, 0x1CF1BCu);
    ctx->pc = 0x1CF1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1B4u;
    // 0x1cf1b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x1CF1B4u, 0x1CF1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1BCu;
label_1cf1bc:
    // 0x1cf1bc: 0xc067b9c  jal         func_19EE70
label_1cf1c0:
    if (ctx->pc == 0x1CF1C0u) {
        ctx->pc = 0x1CF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1BCu;
        // 0x1cf1c0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF1C4u;
        goto label_1cf1c4;
    }
    ctx->pc = 0x1CF1BCu;
    SET_GPR_U32(ctx, 31, 0x1CF1C4u);
    ctx->pc = 0x1CF1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1BCu;
    // 0x1cf1c0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CF1BCu, 0x1CF1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1C4u;
label_1cf1c4:
    // 0x1cf1c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cf1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf1c8:
    // 0x1cf1c8: 0xc073b0a  jal         func_1CEC28
label_1cf1cc:
    if (ctx->pc == 0x1CF1CCu) {
        ctx->pc = 0x1CF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1C8u;
        // 0x1cf1cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF1D0u;
        goto label_1cf1d0;
    }
    ctx->pc = 0x1CF1C8u;
    SET_GPR_U32(ctx, 31, 0x1CF1D0u);
    ctx->pc = 0x1CF1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1C8u;
    // 0x1cf1cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x1CF1C8u, 0x1CF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1D0u;
label_1cf1d0:
    // 0x1cf1d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cf1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf1d4:
    // 0x1cf1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf1d8:
    // 0x1cf1d8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1cf1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1cf1dc:
    // 0x1cf1dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf1e0:
    // 0x1cf1e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cf1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cf1e4:
    // 0x1cf1e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf1e8:
    // 0x1cf1e8: 0xc440ebf4  lwc1        $f0, -0x140C($v0)
    ctx->pc = 0x1cf1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf1ec:
    // 0x1cf1ec: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x1cf1ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1cf1f0:
    // 0x1cf1f0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1cf1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1cf1f4:
    // 0x1cf1f4: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1cf1f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1cf1f8:
    // 0x1cf1f8: 0xc048b52  jal         func_122D48
label_1cf1fc:
    if (ctx->pc == 0x1CF1FCu) {
        ctx->pc = 0x1CF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1F8u;
        // 0x1cf1fc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF200u;
        goto label_1cf200;
    }
    ctx->pc = 0x1CF1F8u;
    SET_GPR_U32(ctx, 31, 0x1CF200u);
    ctx->pc = 0x1CF1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1F8u;
    // 0x1cf1fc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1CF1F8u, 0x1CF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF200u;
label_1cf200:
    // 0x1cf200: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x1cf200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cf204:
    // 0x1cf204: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cf204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cf208:
    // 0x1cf208: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf20c:
    // 0x1cf20c: 0x26e70040  addiu       $a3, $s7, 0x40
    ctx->pc = 0x1cf20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
label_1cf210:
    // 0x1cf210: 0xc075044  jal         func_1D4110
label_1cf214:
    if (ctx->pc == 0x1CF214u) {
        ctx->pc = 0x1CF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF210u;
        // 0x1cf214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF218u;
        goto label_1cf218;
    }
    ctx->pc = 0x1CF210u;
    SET_GPR_U32(ctx, 31, 0x1CF218u);
    ctx->pc = 0x1CF214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF210u;
    // 0x1cf214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x1CF210u, 0x1CF218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF218u;
label_1cf218:
    // 0x1cf218: 0xc067b9c  jal         func_19EE70
label_1cf21c:
    if (ctx->pc == 0x1CF21Cu) {
        ctx->pc = 0x1CF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF218u;
        // 0x1cf21c: 0x240400db  addiu       $a0, $zero, 0xDB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF220u;
        goto label_1cf220;
    }
    ctx->pc = 0x1CF218u;
    SET_GPR_U32(ctx, 31, 0x1CF220u);
    ctx->pc = 0x1CF21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF218u;
    // 0x1cf21c: 0x240400db  addiu       $a0, $zero, 0xDB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CF218u, 0x1CF220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF220u;
label_1cf220:
    // 0x1cf220: 0x8e4a39c0  lw          $t2, 0x39C0($s2)
    ctx->pc = 0x1cf220u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14784)));
label_1cf224:
    // 0x1cf224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cf224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf228:
    // 0x1cf228: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x1cf228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
label_1cf22c:
    // 0x1cf22c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1cf22cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1cf230:
    // 0x1cf230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf234:
    // 0x1cf234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf238:
    // 0x1cf238: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cf238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cf23c:
    // 0x1cf23c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf23cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf240:
    // 0x1cf240: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1cf240u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cf244:
    // 0x1cf244: 0xc07508c  jal         func_1D4230
label_1cf248:
    if (ctx->pc == 0x1CF248u) {
        ctx->pc = 0x1CF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF244u;
        // 0x1cf248: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF24Cu;
        goto label_1cf24c;
    }
    ctx->pc = 0x1CF244u;
    SET_GPR_U32(ctx, 31, 0x1CF24Cu);
    ctx->pc = 0x1CF248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF244u;
    // 0x1cf248: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1CF244u, 0x1CF24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF24Cu;
label_1cf24c:
    // 0x1cf24c: 0xc067b9c  jal         func_19EE70
label_1cf250:
    if (ctx->pc == 0x1CF250u) {
        ctx->pc = 0x1CF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF24Cu;
        // 0x1cf250: 0x240400dc  addiu       $a0, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF254u;
        goto label_1cf254;
    }
    ctx->pc = 0x1CF24Cu;
    SET_GPR_U32(ctx, 31, 0x1CF254u);
    ctx->pc = 0x1CF250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF24Cu;
    // 0x1cf250: 0x240400dc  addiu       $a0, $zero, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1CF24Cu, 0x1CF254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF254u;
label_1cf254:
    // 0x1cf254: 0x8e4a39c0  lw          $t2, 0x39C0($s2)
    ctx->pc = 0x1cf254u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14784)));
label_1cf258:
    // 0x1cf258: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cf258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf25c:
    // 0x1cf25c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1cf25cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1cf260:
    // 0x1cf260: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x1cf260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
label_1cf264:
    // 0x1cf264: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf268:
    // 0x1cf268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf26c:
    // 0x1cf26c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cf26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cf270:
    // 0x1cf270: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf274:
    // 0x1cf274: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1cf274u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cf278:
    // 0x1cf278: 0xc07508c  jal         func_1D4230
label_1cf27c:
    if (ctx->pc == 0x1CF27Cu) {
        ctx->pc = 0x1CF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF278u;
        // 0x1cf27c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF280u;
        goto label_1cf280;
    }
    ctx->pc = 0x1CF278u;
    SET_GPR_U32(ctx, 31, 0x1CF280u);
    ctx->pc = 0x1CF27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF278u;
    // 0x1cf27c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x1CF278u, 0x1CF280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF280u;
label_1cf280:
    // 0x1cf280: 0xc07534a  jal         func_1D4D28
label_1cf284:
    if (ctx->pc == 0x1CF284u) {
        ctx->pc = 0x1CF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF280u;
        // 0x1cf284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF288u;
        goto label_1cf288;
    }
    ctx->pc = 0x1CF280u;
    SET_GPR_U32(ctx, 31, 0x1CF288u);
    ctx->pc = 0x1CF284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF280u;
    // 0x1cf284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4D28u, 0x1CF280u, 0x1CF288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF288u;
label_1cf288:
    // 0x1cf288: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cf288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cf28c:
    // 0x1cf28c: 0xaee007a0  sw          $zero, 0x7A0($s7)
    ctx->pc = 0x1cf28cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 1952), GPR_U32(ctx, 0));
label_1cf290:
    // 0x1cf290: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1cf290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1cf294:
    // 0x1cf294: 0xaee007a4  sw          $zero, 0x7A4($s7)
    ctx->pc = 0x1cf294u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 1956), GPR_U32(ctx, 0));
label_1cf298:
    // 0x1cf298: 0xaee007a8  sw          $zero, 0x7A8($s7)
    ctx->pc = 0x1cf298u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 1960), GPR_U32(ctx, 0));
label_1cf29c:
    // 0x1cf29c: 0xaee00960  sw          $zero, 0x960($s7)
    ctx->pc = 0x1cf29cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2400), GPR_U32(ctx, 0));
label_1cf2a0:
    // 0x1cf2a0: 0xaee007b0  sw          $zero, 0x7B0($s7)
    ctx->pc = 0x1cf2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 1968), GPR_U32(ctx, 0));
label_1cf2a4:
    // 0x1cf2a4: 0xaee007ac  sw          $zero, 0x7AC($s7)
    ctx->pc = 0x1cf2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 1964), GPR_U32(ctx, 0));
label_1cf2a8:
    // 0x1cf2a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cf2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cf2ac:
    // 0x1cf2ac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1cf2acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1cf2b0:
    // 0x1cf2b0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1cf2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1cf2b4:
    // 0x1cf2b4: 0x40f809  jalr        $v0
label_1cf2b8:
    if (ctx->pc == 0x1CF2B8u) {
        ctx->pc = 0x1CF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2B4u;
        // 0x1cf2b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2BCu;
        goto label_1cf2bc;
    }
    ctx->pc = 0x1CF2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF2BCu);
        ctx->pc = 0x1CF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2B4u;
        // 0x1cf2b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF2B4u, 0x1CF2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF2BCu;
label_1cf2bc:
    // 0x1cf2bc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1cf2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1cf2c0:
    // 0x1cf2c0: 0xaee20964  sw          $v0, 0x964($s7)
    ctx->pc = 0x1cf2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2404), GPR_U32(ctx, 2));
label_1cf2c4:
    // 0x1cf2c4: 0xa2e30968  sb          $v1, 0x968($s7)
    ctx->pc = 0x1cf2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2408), (uint8_t)GPR_U32(ctx, 3));
label_1cf2c8:
    // 0x1cf2c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cf2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cf2cc:
    // 0x1cf2cc: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x1cf2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_1cf2d0:
    // 0x1cf2d0: 0xc0e409a  jal         func_390268
label_1cf2d4:
    if (ctx->pc == 0x1CF2D4u) {
        ctx->pc = 0x1CF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2D0u;
        // 0x1cf2d4: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2D8u;
        goto label_1cf2d8;
    }
    ctx->pc = 0x1CF2D0u;
    SET_GPR_U32(ctx, 31, 0x1CF2D8u);
    ctx->pc = 0x1CF2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2D0u;
    // 0x1cf2d4: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1CF2D0u, 0x1CF2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2D8u;
label_1cf2d8:
    // 0x1cf2d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1cf2dc:
    if (ctx->pc == 0x1CF2DCu) {
        ctx->pc = 0x1CF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2D8u;
        // 0x1cf2dc: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2E0u;
        goto label_1cf2e0;
    }
    ctx->pc = 0x1CF2D8u;
    {
        const bool branch_taken_0x1cf2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2D8u;
        // 0x1cf2dc: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2d8) {
            ctx->pc = 0x1CF318u;
            goto label_1cf318;
        }
    }
    ctx->pc = 0x1CF2E0u;
label_1cf2e0:
    // 0x1cf2e0: 0x8ca4489c  lw          $a0, 0x489C($a1)
    ctx->pc = 0x1cf2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
label_1cf2e4:
    // 0x1cf2e4: 0xc0e409a  jal         func_390268
label_1cf2e8:
    if (ctx->pc == 0x1CF2E8u) {
        ctx->pc = 0x1CF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2E4u;
        // 0x1cf2e8: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2ECu;
        goto label_1cf2ec;
    }
    ctx->pc = 0x1CF2E4u;
    SET_GPR_U32(ctx, 31, 0x1CF2ECu);
    ctx->pc = 0x1CF2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2E4u;
    // 0x1cf2e8: 0x2484022c  addiu       $a0, $a0, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1CF2E4u, 0x1CF2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2ECu;
label_1cf2ec:
    // 0x1cf2ec: 0xc0874fa  jal         func_21D3E8
label_1cf2f0:
    if (ctx->pc == 0x1CF2F0u) {
        ctx->pc = 0x1CF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2ECu;
        // 0x1cf2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2F4u;
        goto label_1cf2f4;
    }
    ctx->pc = 0x1CF2ECu;
    SET_GPR_U32(ctx, 31, 0x1CF2F4u);
    ctx->pc = 0x1CF2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2ECu;
    // 0x1cf2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x1CF2ECu, 0x1CF2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2F4u;
label_1cf2f4:
    // 0x1cf2f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cf2f8:
    if (ctx->pc == 0x1CF2F8u) {
        ctx->pc = 0x1CF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2F4u;
        // 0x1cf2f8: 0xaee207b4  sw          $v0, 0x7B4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 1972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF2FCu;
        goto label_1cf2fc;
    }
    ctx->pc = 0x1CF2F4u;
    {
        const bool branch_taken_0x1cf2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2F4u;
        // 0x1cf2f8: 0xaee207b4  sw          $v0, 0x7B4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 1972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2f4) {
            ctx->pc = 0x1CF304u;
            goto label_1cf304;
        }
    }
    ctx->pc = 0x1CF2FCu;
label_1cf2fc:
    // 0x1cf2fc: 0xc051800  jal         func_146000
label_1cf300:
    if (ctx->pc == 0x1CF300u) {
        ctx->pc = 0x1CF300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2FCu;
        // 0x1cf300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF304u;
        goto label_1cf304;
    }
    ctx->pc = 0x1CF2FCu;
    SET_GPR_U32(ctx, 31, 0x1CF304u);
    ctx->pc = 0x1CF300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2FCu;
    // 0x1cf300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1CF2FCu, 0x1CF304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF304u;
label_1cf304:
    // 0x1cf304: 0x8ee207b4  lw          $v0, 0x7B4($s7)
    ctx->pc = 0x1cf304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1972)));
label_1cf308:
    // 0x1cf308: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x1cf308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
label_1cf30c:
    // 0x1cf30c: 0x8ee307b4  lw          $v1, 0x7B4($s7)
    ctx->pc = 0x1cf30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1972)));
label_1cf310:
    // 0x1cf310: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cf314:
    if (ctx->pc == 0x1CF314u) {
        ctx->pc = 0x1CF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF310u;
        // 0x1cf314: 0xa07e001e  sb          $fp, 0x1E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF318u;
        goto label_1cf318;
    }
    ctx->pc = 0x1CF310u;
    {
        const bool branch_taken_0x1cf310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF310u;
        // 0x1cf314: 0xa07e001e  sb          $fp, 0x1E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf310) {
            ctx->pc = 0x1CF31Cu;
            goto label_1cf31c;
        }
    }
    ctx->pc = 0x1CF318u;
label_1cf318:
    // 0x1cf318: 0xaee007b4  sw          $zero, 0x7B4($s7)
    ctx->pc = 0x1cf318u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 1972), GPR_U32(ctx, 0));
label_1cf31c:
    // 0x1cf31c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1cf31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1cf320:
    // 0x1cf320: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1cf320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1cf324:
    // 0x1cf324: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1cf324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1cf328:
    // 0x1cf328: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1cf328u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1cf32c:
    // 0x1cf32c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1cf32cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1cf330:
    // 0x1cf330: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1cf330u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cf334:
    // 0x1cf334: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1cf334u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cf338:
    // 0x1cf338: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1cf338u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cf33c:
    // 0x1cf33c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1cf33cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cf340:
    // 0x1cf340: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cf340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cf344:
    // 0x1cf344: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x1cf344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1cf348:
    // 0x1cf348: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x1cf348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1cf34c:
    // 0x1cf34c: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1cf34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cf350:
    // 0x1cf350: 0x3e00008  jr          $ra
label_1cf354:
    if (ctx->pc == 0x1CF354u) {
        ctx->pc = 0x1CF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF350u;
        // 0x1cf354: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF358u;
        goto label_fallthrough_0x1cf350;
    }
    ctx->pc = 0x1CF350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF350u;
        // 0x1cf354: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cf350:
    ctx->pc = 0x1CF358u;
}
