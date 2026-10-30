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

// Function: sub_002DDE50
// Address: 0x2dde50 - 0x2de2c8
void sub_002DDE50_0x2dde50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDE50_0x2dde50");
#endif

    switch (ctx->pc) {
        case 0x2dde50u: goto label_2dde50;
        case 0x2dde54u: goto label_2dde54;
        case 0x2dde58u: goto label_2dde58;
        case 0x2dde5cu: goto label_2dde5c;
        case 0x2dde60u: goto label_2dde60;
        case 0x2dde64u: goto label_2dde64;
        case 0x2dde68u: goto label_2dde68;
        case 0x2dde6cu: goto label_2dde6c;
        case 0x2dde70u: goto label_2dde70;
        case 0x2dde74u: goto label_2dde74;
        case 0x2dde78u: goto label_2dde78;
        case 0x2dde7cu: goto label_2dde7c;
        case 0x2dde80u: goto label_2dde80;
        case 0x2dde84u: goto label_2dde84;
        case 0x2dde88u: goto label_2dde88;
        case 0x2dde8cu: goto label_2dde8c;
        case 0x2dde90u: goto label_2dde90;
        case 0x2dde94u: goto label_2dde94;
        case 0x2dde98u: goto label_2dde98;
        case 0x2dde9cu: goto label_2dde9c;
        case 0x2ddea0u: goto label_2ddea0;
        case 0x2ddea4u: goto label_2ddea4;
        case 0x2ddea8u: goto label_2ddea8;
        case 0x2ddeacu: goto label_2ddeac;
        case 0x2ddeb0u: goto label_2ddeb0;
        case 0x2ddeb4u: goto label_2ddeb4;
        case 0x2ddeb8u: goto label_2ddeb8;
        case 0x2ddebcu: goto label_2ddebc;
        case 0x2ddec0u: goto label_2ddec0;
        case 0x2ddec4u: goto label_2ddec4;
        case 0x2ddec8u: goto label_2ddec8;
        case 0x2ddeccu: goto label_2ddecc;
        case 0x2dded0u: goto label_2dded0;
        case 0x2dded4u: goto label_2dded4;
        case 0x2dded8u: goto label_2dded8;
        case 0x2ddedcu: goto label_2ddedc;
        case 0x2ddee0u: goto label_2ddee0;
        case 0x2ddee4u: goto label_2ddee4;
        case 0x2ddee8u: goto label_2ddee8;
        case 0x2ddeecu: goto label_2ddeec;
        case 0x2ddef0u: goto label_2ddef0;
        case 0x2ddef4u: goto label_2ddef4;
        case 0x2ddef8u: goto label_2ddef8;
        case 0x2ddefcu: goto label_2ddefc;
        case 0x2ddf00u: goto label_2ddf00;
        case 0x2ddf04u: goto label_2ddf04;
        case 0x2ddf08u: goto label_2ddf08;
        case 0x2ddf0cu: goto label_2ddf0c;
        case 0x2ddf10u: goto label_2ddf10;
        case 0x2ddf14u: goto label_2ddf14;
        case 0x2ddf18u: goto label_2ddf18;
        case 0x2ddf1cu: goto label_2ddf1c;
        case 0x2ddf20u: goto label_2ddf20;
        case 0x2ddf24u: goto label_2ddf24;
        case 0x2ddf28u: goto label_2ddf28;
        case 0x2ddf2cu: goto label_2ddf2c;
        case 0x2ddf30u: goto label_2ddf30;
        case 0x2ddf34u: goto label_2ddf34;
        case 0x2ddf38u: goto label_2ddf38;
        case 0x2ddf3cu: goto label_2ddf3c;
        case 0x2ddf40u: goto label_2ddf40;
        case 0x2ddf44u: goto label_2ddf44;
        case 0x2ddf48u: goto label_2ddf48;
        case 0x2ddf4cu: goto label_2ddf4c;
        case 0x2ddf50u: goto label_2ddf50;
        case 0x2ddf54u: goto label_2ddf54;
        case 0x2ddf58u: goto label_2ddf58;
        case 0x2ddf5cu: goto label_2ddf5c;
        case 0x2ddf60u: goto label_2ddf60;
        case 0x2ddf64u: goto label_2ddf64;
        case 0x2ddf68u: goto label_2ddf68;
        case 0x2ddf6cu: goto label_2ddf6c;
        case 0x2ddf70u: goto label_2ddf70;
        case 0x2ddf74u: goto label_2ddf74;
        case 0x2ddf78u: goto label_2ddf78;
        case 0x2ddf7cu: goto label_2ddf7c;
        case 0x2ddf80u: goto label_2ddf80;
        case 0x2ddf84u: goto label_2ddf84;
        case 0x2ddf88u: goto label_2ddf88;
        case 0x2ddf8cu: goto label_2ddf8c;
        case 0x2ddf90u: goto label_2ddf90;
        case 0x2ddf94u: goto label_2ddf94;
        case 0x2ddf98u: goto label_2ddf98;
        case 0x2ddf9cu: goto label_2ddf9c;
        case 0x2ddfa0u: goto label_2ddfa0;
        case 0x2ddfa4u: goto label_2ddfa4;
        case 0x2ddfa8u: goto label_2ddfa8;
        case 0x2ddfacu: goto label_2ddfac;
        case 0x2ddfb0u: goto label_2ddfb0;
        case 0x2ddfb4u: goto label_2ddfb4;
        case 0x2ddfb8u: goto label_2ddfb8;
        case 0x2ddfbcu: goto label_2ddfbc;
        case 0x2ddfc0u: goto label_2ddfc0;
        case 0x2ddfc4u: goto label_2ddfc4;
        case 0x2ddfc8u: goto label_2ddfc8;
        case 0x2ddfccu: goto label_2ddfcc;
        case 0x2ddfd0u: goto label_2ddfd0;
        case 0x2ddfd4u: goto label_2ddfd4;
        case 0x2ddfd8u: goto label_2ddfd8;
        case 0x2ddfdcu: goto label_2ddfdc;
        case 0x2ddfe0u: goto label_2ddfe0;
        case 0x2ddfe4u: goto label_2ddfe4;
        case 0x2ddfe8u: goto label_2ddfe8;
        case 0x2ddfecu: goto label_2ddfec;
        case 0x2ddff0u: goto label_2ddff0;
        case 0x2ddff4u: goto label_2ddff4;
        case 0x2ddff8u: goto label_2ddff8;
        case 0x2ddffcu: goto label_2ddffc;
        case 0x2de000u: goto label_2de000;
        case 0x2de004u: goto label_2de004;
        case 0x2de008u: goto label_2de008;
        case 0x2de00cu: goto label_2de00c;
        case 0x2de010u: goto label_2de010;
        case 0x2de014u: goto label_2de014;
        case 0x2de018u: goto label_2de018;
        case 0x2de01cu: goto label_2de01c;
        case 0x2de020u: goto label_2de020;
        case 0x2de024u: goto label_2de024;
        case 0x2de028u: goto label_2de028;
        case 0x2de02cu: goto label_2de02c;
        case 0x2de030u: goto label_2de030;
        case 0x2de034u: goto label_2de034;
        case 0x2de038u: goto label_2de038;
        case 0x2de03cu: goto label_2de03c;
        case 0x2de040u: goto label_2de040;
        case 0x2de044u: goto label_2de044;
        case 0x2de048u: goto label_2de048;
        case 0x2de04cu: goto label_2de04c;
        case 0x2de050u: goto label_2de050;
        case 0x2de054u: goto label_2de054;
        case 0x2de058u: goto label_2de058;
        case 0x2de05cu: goto label_2de05c;
        case 0x2de060u: goto label_2de060;
        case 0x2de064u: goto label_2de064;
        case 0x2de068u: goto label_2de068;
        case 0x2de06cu: goto label_2de06c;
        case 0x2de070u: goto label_2de070;
        case 0x2de074u: goto label_2de074;
        case 0x2de078u: goto label_2de078;
        case 0x2de07cu: goto label_2de07c;
        case 0x2de080u: goto label_2de080;
        case 0x2de084u: goto label_2de084;
        case 0x2de088u: goto label_2de088;
        case 0x2de08cu: goto label_2de08c;
        case 0x2de090u: goto label_2de090;
        case 0x2de094u: goto label_2de094;
        case 0x2de098u: goto label_2de098;
        case 0x2de09cu: goto label_2de09c;
        case 0x2de0a0u: goto label_2de0a0;
        case 0x2de0a4u: goto label_2de0a4;
        case 0x2de0a8u: goto label_2de0a8;
        case 0x2de0acu: goto label_2de0ac;
        case 0x2de0b0u: goto label_2de0b0;
        case 0x2de0b4u: goto label_2de0b4;
        case 0x2de0b8u: goto label_2de0b8;
        case 0x2de0bcu: goto label_2de0bc;
        case 0x2de0c0u: goto label_2de0c0;
        case 0x2de0c4u: goto label_2de0c4;
        case 0x2de0c8u: goto label_2de0c8;
        case 0x2de0ccu: goto label_2de0cc;
        case 0x2de0d0u: goto label_2de0d0;
        case 0x2de0d4u: goto label_2de0d4;
        case 0x2de0d8u: goto label_2de0d8;
        case 0x2de0dcu: goto label_2de0dc;
        case 0x2de0e0u: goto label_2de0e0;
        case 0x2de0e4u: goto label_2de0e4;
        case 0x2de0e8u: goto label_2de0e8;
        case 0x2de0ecu: goto label_2de0ec;
        case 0x2de0f0u: goto label_2de0f0;
        case 0x2de0f4u: goto label_2de0f4;
        case 0x2de0f8u: goto label_2de0f8;
        case 0x2de0fcu: goto label_2de0fc;
        case 0x2de100u: goto label_2de100;
        case 0x2de104u: goto label_2de104;
        case 0x2de108u: goto label_2de108;
        case 0x2de10cu: goto label_2de10c;
        case 0x2de110u: goto label_2de110;
        case 0x2de114u: goto label_2de114;
        case 0x2de118u: goto label_2de118;
        case 0x2de11cu: goto label_2de11c;
        case 0x2de120u: goto label_2de120;
        case 0x2de124u: goto label_2de124;
        case 0x2de128u: goto label_2de128;
        case 0x2de12cu: goto label_2de12c;
        case 0x2de130u: goto label_2de130;
        case 0x2de134u: goto label_2de134;
        case 0x2de138u: goto label_2de138;
        case 0x2de13cu: goto label_2de13c;
        case 0x2de140u: goto label_2de140;
        case 0x2de144u: goto label_2de144;
        case 0x2de148u: goto label_2de148;
        case 0x2de14cu: goto label_2de14c;
        case 0x2de150u: goto label_2de150;
        case 0x2de154u: goto label_2de154;
        case 0x2de158u: goto label_2de158;
        case 0x2de15cu: goto label_2de15c;
        case 0x2de160u: goto label_2de160;
        case 0x2de164u: goto label_2de164;
        case 0x2de168u: goto label_2de168;
        case 0x2de16cu: goto label_2de16c;
        case 0x2de170u: goto label_2de170;
        case 0x2de174u: goto label_2de174;
        case 0x2de178u: goto label_2de178;
        case 0x2de17cu: goto label_2de17c;
        case 0x2de180u: goto label_2de180;
        case 0x2de184u: goto label_2de184;
        case 0x2de188u: goto label_2de188;
        case 0x2de18cu: goto label_2de18c;
        case 0x2de190u: goto label_2de190;
        case 0x2de194u: goto label_2de194;
        case 0x2de198u: goto label_2de198;
        case 0x2de19cu: goto label_2de19c;
        case 0x2de1a0u: goto label_2de1a0;
        case 0x2de1a4u: goto label_2de1a4;
        case 0x2de1a8u: goto label_2de1a8;
        case 0x2de1acu: goto label_2de1ac;
        case 0x2de1b0u: goto label_2de1b0;
        case 0x2de1b4u: goto label_2de1b4;
        case 0x2de1b8u: goto label_2de1b8;
        case 0x2de1bcu: goto label_2de1bc;
        case 0x2de1c0u: goto label_2de1c0;
        case 0x2de1c4u: goto label_2de1c4;
        case 0x2de1c8u: goto label_2de1c8;
        case 0x2de1ccu: goto label_2de1cc;
        case 0x2de1d0u: goto label_2de1d0;
        case 0x2de1d4u: goto label_2de1d4;
        case 0x2de1d8u: goto label_2de1d8;
        case 0x2de1dcu: goto label_2de1dc;
        case 0x2de1e0u: goto label_2de1e0;
        case 0x2de1e4u: goto label_2de1e4;
        case 0x2de1e8u: goto label_2de1e8;
        case 0x2de1ecu: goto label_2de1ec;
        case 0x2de1f0u: goto label_2de1f0;
        case 0x2de1f4u: goto label_2de1f4;
        case 0x2de1f8u: goto label_2de1f8;
        case 0x2de1fcu: goto label_2de1fc;
        case 0x2de200u: goto label_2de200;
        case 0x2de204u: goto label_2de204;
        case 0x2de208u: goto label_2de208;
        case 0x2de20cu: goto label_2de20c;
        case 0x2de210u: goto label_2de210;
        case 0x2de214u: goto label_2de214;
        case 0x2de218u: goto label_2de218;
        case 0x2de21cu: goto label_2de21c;
        case 0x2de220u: goto label_2de220;
        case 0x2de224u: goto label_2de224;
        case 0x2de228u: goto label_2de228;
        case 0x2de22cu: goto label_2de22c;
        case 0x2de230u: goto label_2de230;
        case 0x2de234u: goto label_2de234;
        case 0x2de238u: goto label_2de238;
        case 0x2de23cu: goto label_2de23c;
        case 0x2de240u: goto label_2de240;
        case 0x2de244u: goto label_2de244;
        case 0x2de248u: goto label_2de248;
        case 0x2de24cu: goto label_2de24c;
        case 0x2de250u: goto label_2de250;
        case 0x2de254u: goto label_2de254;
        case 0x2de258u: goto label_2de258;
        case 0x2de25cu: goto label_2de25c;
        case 0x2de260u: goto label_2de260;
        case 0x2de264u: goto label_2de264;
        case 0x2de268u: goto label_2de268;
        case 0x2de26cu: goto label_2de26c;
        case 0x2de270u: goto label_2de270;
        case 0x2de274u: goto label_2de274;
        case 0x2de278u: goto label_2de278;
        case 0x2de27cu: goto label_2de27c;
        case 0x2de280u: goto label_2de280;
        case 0x2de284u: goto label_2de284;
        case 0x2de288u: goto label_2de288;
        case 0x2de28cu: goto label_2de28c;
        case 0x2de290u: goto label_2de290;
        case 0x2de294u: goto label_2de294;
        case 0x2de298u: goto label_2de298;
        case 0x2de29cu: goto label_2de29c;
        case 0x2de2a0u: goto label_2de2a0;
        case 0x2de2a4u: goto label_2de2a4;
        case 0x2de2a8u: goto label_2de2a8;
        case 0x2de2acu: goto label_2de2ac;
        case 0x2de2b0u: goto label_2de2b0;
        case 0x2de2b4u: goto label_2de2b4;
        case 0x2de2b8u: goto label_2de2b8;
        case 0x2de2bcu: goto label_2de2bc;
        case 0x2de2c0u: goto label_2de2c0;
        case 0x2de2c4u: goto label_2de2c4;
        default: break;
    }

    ctx->pc = 0x2dde50u;

label_2dde50:
    // 0x2dde50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2dde50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2dde54:
    // 0x2dde54: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2dde54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2dde58:
    // 0x2dde58: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2dde58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2dde5c:
    // 0x2dde5c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2dde5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2dde60:
    // 0x2dde60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dde60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dde64:
    // 0x2dde64: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2dde64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2dde68:
    // 0x2dde68: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2dde68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2dde6c:
    // 0x2dde6c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2dde6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2dde70:
    // 0x2dde70: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2dde70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2dde74:
    // 0x2dde74: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2dde74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_2dde78:
    // 0x2dde78: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2dde78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2dde7c:
    // 0x2dde7c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2dde7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dde80:
    // 0x2dde80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dde80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2dde84:
    // 0x2dde84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dde84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2dde88:
    // 0x2dde88: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2dde88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2dde8c:
    // 0x2dde8c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2dde8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2dde90:
    // 0x2dde90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2dde90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dde94:
    // 0x2dde94: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x2dde94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dde98:
    // 0x2dde98: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2dde98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2dde9c:
    // 0x2dde9c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2dde9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2ddea0:
    // 0x2ddea0: 0xc0e4060  jal         func_390180
label_2ddea4:
    if (ctx->pc == 0x2DDEA4u) {
        ctx->pc = 0x2DDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEA0u;
        // 0x2ddea4: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDEA8u;
        goto label_2ddea8;
    }
    ctx->pc = 0x2DDEA0u;
    SET_GPR_U32(ctx, 31, 0x2DDEA8u);
    ctx->pc = 0x2DDEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDEA0u;
    // 0x2ddea4: 0x52a821  addu        $s5, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DDEA0u, 0x2DDEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEA8u;
label_2ddea8:
    // 0x2ddea8: 0xc0e2612  jal         func_389848
label_2ddeac:
    if (ctx->pc == 0x2DDEACu) {
        ctx->pc = 0x2DDEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEA8u;
        // 0x2ddeac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDEB0u;
        goto label_2ddeb0;
    }
    ctx->pc = 0x2DDEA8u;
    SET_GPR_U32(ctx, 31, 0x2DDEB0u);
    ctx->pc = 0x2DDEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDEA8u;
    // 0x2ddeac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x2DDEA8u, 0x2DDEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEB0u;
label_2ddeb0:
    // 0x2ddeb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ddeb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ddeb4:
    // 0x2ddeb4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_2ddeb8:
    if (ctx->pc == 0x2DDEB8u) {
        ctx->pc = 0x2DDEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEB4u;
        // 0x2ddeb8: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDEBCu;
        goto label_2ddebc;
    }
    ctx->pc = 0x2DDEB4u;
    {
        const bool branch_taken_0x2ddeb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEB4u;
        // 0x2ddeb8: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddeb4) {
            ctx->pc = 0x2DDF18u;
            goto label_2ddf18;
        }
    }
    ctx->pc = 0x2DDEBCu;
label_2ddebc:
    // 0x2ddebc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ddebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ddec0:
    // 0x2ddec0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2ddec4:
    if (ctx->pc == 0x2DDEC4u) {
        ctx->pc = 0x2DDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEC0u;
        // 0x2ddec4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDEC8u;
        goto label_2ddec8;
    }
    ctx->pc = 0x2DDEC0u;
    {
        const bool branch_taken_0x2ddec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddec0) {
            ctx->pc = 0x2DDEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDEC0u;
            // 0x2ddec4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDEC8u;
            goto label_2ddec8;
        }
    }
    ctx->pc = 0x2DDEC8u;
label_2ddec8:
    // 0x2ddec8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ddec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2ddecc:
    // 0x2ddecc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2ddeccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2dded0:
    // 0x2dded0: 0x2010  mfhi        $a0
    ctx->pc = 0x2dded0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2dded4:
    // 0x2dded4: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
label_2dded8:
    if (ctx->pc == 0x2DDED8u) {
        ctx->pc = 0x2DDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDED4u;
        // 0x2dded8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDEDCu;
        goto label_2ddedc;
    }
    ctx->pc = 0x2DDED4u;
    {
        const bool branch_taken_0x2dded4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dded4) {
            ctx->pc = 0x2DDED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDED4u;
            // 0x2dded8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDEFCu;
            goto label_2ddefc;
        }
    }
    ctx->pc = 0x2DDEDCu;
label_2ddedc:
    // 0x2ddedc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ddedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ddee0:
    // 0x2ddee0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ddee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ddee4:
    // 0x2ddee4: 0x26640284  addiu       $a0, $s3, 0x284
    ctx->pc = 0x2ddee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 644));
label_2ddee8:
    // 0x2ddee8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ddee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ddeec:
    // 0x2ddeec: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2ddeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2ddef0:
    // 0x2ddef0: 0xc0a6800  jal         func_29A000
label_2ddef4:
    if (ctx->pc == 0x2DDEF4u) {
        ctx->pc = 0x2DDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEF0u;
        // 0x2ddef4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDEF8u;
        goto label_2ddef8;
    }
    ctx->pc = 0x2DDEF0u;
    SET_GPR_U32(ctx, 31, 0x2DDEF8u);
    ctx->pc = 0x2DDEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDEF0u;
    // 0x2ddef4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2DDEF0u, 0x2DDEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEF8u;
label_2ddef8:
    // 0x2ddef8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ddef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ddefc:
    // 0x2ddefc: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2ddefcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2ddf00:
    // 0x2ddf00: 0x1c4000e4  bgtz        $v0, . + 4 + (0xE4 << 2)
label_2ddf04:
    if (ctx->pc == 0x2DDF04u) {
        ctx->pc = 0x2DDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF00u;
        // 0x2ddf04: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF08u;
        goto label_2ddf08;
    }
    ctx->pc = 0x2DDF00u;
    {
        const bool branch_taken_0x2ddf00 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DDF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF00u;
        // 0x2ddf04: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf00) {
            ctx->pc = 0x2DE294u;
            goto label_2de294;
        }
    }
    ctx->pc = 0x2DDF08u;
label_2ddf08:
    // 0x2ddf08: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2ddf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
label_2ddf0c:
    // 0x2ddf0c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ddf10:
    if (ctx->pc == 0x2DDF10u) {
        ctx->pc = 0x2DDF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF0Cu;
        // 0x2ddf10: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF14u;
        goto label_2ddf14;
    }
    ctx->pc = 0x2DDF0Cu;
    {
        const bool branch_taken_0x2ddf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddf0c) {
            ctx->pc = 0x2DDF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDF0Cu;
            // 0x2ddf10: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDF20u;
            goto label_2ddf20;
        }
    }
    ctx->pc = 0x2DDF14u;
label_2ddf14:
    // 0x2ddf14: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x2ddf14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
label_2ddf18:
    // 0x2ddf18: 0x100000df  b           . + 4 + (0xDF << 2)
label_2ddf1c:
    if (ctx->pc == 0x2DDF1Cu) {
        ctx->pc = 0x2DDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF18u;
        // 0x2ddf1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF20u;
        goto label_2ddf20;
    }
    ctx->pc = 0x2DDF18u;
    {
        const bool branch_taken_0x2ddf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF18u;
        // 0x2ddf1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf18) {
            ctx->pc = 0x2DE298u;
            goto label_2de298;
        }
    }
    ctx->pc = 0x2DDF20u;
label_2ddf20:
    // 0x2ddf20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ddf20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ddf24:
    // 0x2ddf24: 0x0  nop
    ctx->pc = 0x2ddf24u;
    // NOP
label_2ddf28:
    // 0x2ddf28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ddf28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ddf2c:
    // 0x2ddf2c: 0x0  nop
    ctx->pc = 0x2ddf2cu;
    // NOP
label_2ddf30:
    // 0x2ddf30: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2ddf34:
    if (ctx->pc == 0x2DDF34u) {
        ctx->pc = 0x2DDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF30u;
        // 0x2ddf34: 0x92140018  lbu         $s4, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF38u;
        goto label_2ddf38;
    }
    ctx->pc = 0x2DDF30u;
    {
        const bool branch_taken_0x2ddf30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ddf30) {
            ctx->pc = 0x2DDF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDF30u;
            // 0x2ddf34: 0x92140018  lbu         $s4, 0x18($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDF74u;
            goto label_2ddf74;
        }
    }
    ctx->pc = 0x2DDF38u;
label_2ddf38:
    // 0x2ddf38: 0xc05959e  jal         func_165678
label_2ddf3c:
    if (ctx->pc == 0x2DDF3Cu) {
        ctx->pc = 0x2DDF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF38u;
        // 0x2ddf3c: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF40u;
        goto label_2ddf40;
    }
    ctx->pc = 0x2DDF38u;
    SET_GPR_U32(ctx, 31, 0x2DDF40u);
    ctx->pc = 0x2DDF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDF38u;
    // 0x2ddf3c: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2DDF38u, 0x2DDF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF40u;
label_2ddf40:
    // 0x2ddf40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2ddf44:
    if (ctx->pc == 0x2DDF44u) {
        ctx->pc = 0x2DDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF40u;
        // 0x2ddf44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF48u;
        goto label_2ddf48;
    }
    ctx->pc = 0x2DDF40u;
    {
        const bool branch_taken_0x2ddf40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF40u;
        // 0x2ddf44: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf40) {
            ctx->pc = 0x2DDF70u;
            goto label_2ddf70;
        }
    }
    ctx->pc = 0x2DDF48u;
label_2ddf48:
    // 0x2ddf48: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x2ddf48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2ddf4c:
    // 0x2ddf4c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2ddf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2ddf50:
    // 0x2ddf50: 0xc0cdb38  jal         func_336CE0
label_2ddf54:
    if (ctx->pc == 0x2DDF54u) {
        ctx->pc = 0x2DDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF50u;
        // 0x2ddf54: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF58u;
        goto label_2ddf58;
    }
    ctx->pc = 0x2DDF50u;
    SET_GPR_U32(ctx, 31, 0x2DDF58u);
    ctx->pc = 0x2DDF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDF50u;
    // 0x2ddf54: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DDF50u, 0x2DDF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF58u;
label_2ddf58:
    // 0x2ddf58: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2ddf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ddf5c:
    // 0x2ddf5c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ddf5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2ddf60:
    // 0x2ddf60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ddf60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ddf64:
    // 0x2ddf64: 0x0  nop
    ctx->pc = 0x2ddf64u;
    // NOP
label_2ddf68:
    // 0x2ddf68: 0x450100cb  bc1t        . + 4 + (0xCB << 2)
label_2ddf6c:
    if (ctx->pc == 0x2DDF6Cu) {
        ctx->pc = 0x2DDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF68u;
        // 0x2ddf6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF70u;
        goto label_2ddf70;
    }
    ctx->pc = 0x2DDF68u;
    {
        const bool branch_taken_0x2ddf68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF68u;
        // 0x2ddf6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf68) {
            ctx->pc = 0x2DE298u;
            goto label_2de298;
        }
    }
    ctx->pc = 0x2DDF70u;
label_2ddf70:
    // 0x2ddf70: 0x92140018  lbu         $s4, 0x18($s0)
    ctx->pc = 0x2ddf70u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_2ddf74:
    // 0x2ddf74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ddf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ddf78:
    // 0x2ddf78: 0x5682001b  bnel        $s4, $v0, . + 4 + (0x1B << 2)
label_2ddf7c:
    if (ctx->pc == 0x2DDF7Cu) {
        ctx->pc = 0x2DDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF78u;
        // 0x2ddf7c: 0x92050018  lbu         $a1, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF80u;
        goto label_2ddf80;
    }
    ctx->pc = 0x2DDF78u;
    {
        const bool branch_taken_0x2ddf78 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ddf78) {
            ctx->pc = 0x2DDF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDF78u;
            // 0x2ddf7c: 0x92050018  lbu         $a1, 0x18($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDFE8u;
            goto label_2ddfe8;
        }
    }
    ctx->pc = 0x2DDF80u;
label_2ddf80:
    // 0x2ddf80: 0x9202001a  lbu         $v0, 0x1A($s0)
    ctx->pc = 0x2ddf80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
label_2ddf84:
    // 0x2ddf84: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ddf84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddf88:
    // 0x2ddf88: 0x105200c3  beq         $v0, $s2, . + 4 + (0xC3 << 2)
label_2ddf8c:
    if (ctx->pc == 0x2DDF8Cu) {
        ctx->pc = 0x2DDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF88u;
        // 0x2ddf8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF90u;
        goto label_2ddf90;
    }
    ctx->pc = 0x2DDF88u;
    {
        const bool branch_taken_0x2ddf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF88u;
        // 0x2ddf8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf88) {
            ctx->pc = 0x2DE298u;
            goto label_2de298;
        }
    }
    ctx->pc = 0x2DDF90u;
label_2ddf90:
    // 0x2ddf90: 0xc0b7752  jal         func_2DDD48
label_2ddf94:
    if (ctx->pc == 0x2DDF94u) {
        ctx->pc = 0x2DDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF90u;
        // 0x2ddf94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDF98u;
        goto label_2ddf98;
    }
    ctx->pc = 0x2DDF90u;
    SET_GPR_U32(ctx, 31, 0x2DDF98u);
    ctx->pc = 0x2DDF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDF90u;
    // 0x2ddf94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDD48u, 0x2DDF90u, 0x2DDF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF98u;
label_2ddf98:
    // 0x2ddf98: 0x105200be  beq         $v0, $s2, . + 4 + (0xBE << 2)
label_2ddf9c:
    if (ctx->pc == 0x2DDF9Cu) {
        ctx->pc = 0x2DDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF98u;
        // 0x2ddf9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFA0u;
        goto label_2ddfa0;
    }
    ctx->pc = 0x2DDF98u;
    {
        const bool branch_taken_0x2ddf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF98u;
        // 0x2ddf9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf98) {
            ctx->pc = 0x2DE294u;
            goto label_2de294;
        }
    }
    ctx->pc = 0x2DDFA0u;
label_2ddfa0:
    // 0x2ddfa0: 0xc0e3604  jal         func_38D810
label_2ddfa4:
    if (ctx->pc == 0x2DDFA4u) {
        ctx->pc = 0x2DDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFA0u;
        // 0x2ddfa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFA8u;
        goto label_2ddfa8;
    }
    ctx->pc = 0x2DDFA0u;
    SET_GPR_U32(ctx, 31, 0x2DDFA8u);
    ctx->pc = 0x2DDFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDFA0u;
    // 0x2ddfa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D810u, 0x2DDFA0u, 0x2DDFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDFA8u;
label_2ddfa8:
    // 0x2ddfa8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ddfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ddfac:
    // 0x2ddfac: 0x1074ffda  beq         $v1, $s4, . + 4 + (-0x26 << 2)
label_2ddfb0:
    if (ctx->pc == 0x2DDFB0u) {
        ctx->pc = 0x2DDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFACu;
        // 0x2ddfb0: 0xa2020018  sb          $v0, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFB4u;
        goto label_2ddfb4;
    }
    ctx->pc = 0x2DDFACu;
    {
        const bool branch_taken_0x2ddfac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x2DDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFACu;
        // 0x2ddfb0: 0xa2020018  sb          $v0, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfac) {
            ctx->pc = 0x2DDF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ddf18;
        }
    }
    ctx->pc = 0x2DDFB4u;
label_2ddfb4:
    // 0x2ddfb4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2ddfb8:
    if (ctx->pc == 0x2DDFB8u) {
        ctx->pc = 0x2DDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFB4u;
        // 0x2ddfb8: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFBCu;
        goto label_2ddfbc;
    }
    ctx->pc = 0x2DDFB4u;
    {
        const bool branch_taken_0x2ddfb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFB4u;
        // 0x2ddfb8: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfb4) {
            ctx->pc = 0x2DDFD8u;
            goto label_2ddfd8;
        }
    }
    ctx->pc = 0x2DDFBCu;
label_2ddfbc:
    // 0x2ddfbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ddfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ddfc0:
    // 0x2ddfc0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ddfc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ddfc4:
    // 0x2ddfc4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ddfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ddfc8:
    // 0x2ddfc8: 0x40f809  jalr        $v0
label_2ddfcc:
    if (ctx->pc == 0x2DDFCCu) {
        ctx->pc = 0x2DDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFC8u;
        // 0x2ddfcc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFD0u;
        goto label_2ddfd0;
    }
    ctx->pc = 0x2DDFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DDFD0u);
        ctx->pc = 0x2DDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFC8u;
        // 0x2ddfcc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDFC8u, 0x2DDFD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DDFD0u;
label_2ddfd0:
    // 0x2ddfd0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ddfd4:
    if (ctx->pc == 0x2DDFD4u) {
        ctx->pc = 0x2DDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFD0u;
        // 0x2ddfd4: 0xae420128  sw          $v0, 0x128($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFD8u;
        goto label_2ddfd8;
    }
    ctx->pc = 0x2DDFD0u;
    {
        const bool branch_taken_0x2ddfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFD0u;
        // 0x2ddfd4: 0xae420128  sw          $v0, 0x128($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfd0) {
            ctx->pc = 0x2DDFE4u;
            goto label_2ddfe4;
        }
    }
    ctx->pc = 0x2DDFD8u;
label_2ddfd8:
    // 0x2ddfd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ddfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ddfdc:
    // 0x2ddfdc: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x2ddfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ddfe0:
    // 0x2ddfe0: 0xae420128  sw          $v0, 0x128($s2)
    ctx->pc = 0x2ddfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 2));
label_2ddfe4:
    // 0x2ddfe4: 0x92050018  lbu         $a1, 0x18($s0)
    ctx->pc = 0x2ddfe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_2ddfe8:
    // 0x2ddfe8: 0xc0e36a2  jal         func_38DA88
label_2ddfec:
    if (ctx->pc == 0x2DDFECu) {
        ctx->pc = 0x2DDFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFE8u;
        // 0x2ddfec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFF0u;
        goto label_2ddff0;
    }
    ctx->pc = 0x2DDFE8u;
    SET_GPR_U32(ctx, 31, 0x2DDFF0u);
    ctx->pc = 0x2DDFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDFE8u;
    // 0x2ddfec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA88u, 0x2DDFE8u, 0x2DDFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDFF0u;
label_2ddff0:
    // 0x2ddff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ddff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddff4:
    // 0x2ddff4: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_2ddff8:
    if (ctx->pc == 0x2DDFF8u) {
        ctx->pc = 0x2DDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFF4u;
        // 0x2ddff8: 0x92060018  lbu         $a2, 0x18($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDFFCu;
        goto label_2ddffc;
    }
    ctx->pc = 0x2DDFF4u;
    {
        const bool branch_taken_0x2ddff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ddff4) {
            ctx->pc = 0x2DDFF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDFF4u;
            // 0x2ddff8: 0x92060018  lbu         $a2, 0x18($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE028u;
            goto label_2de028;
        }
    }
    ctx->pc = 0x2DDFFCu;
label_2ddffc:
    // 0x2ddffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ddffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2de000:
    // 0x2de000: 0xc0e3666  jal         func_38D998
label_2de004:
    if (ctx->pc == 0x2DE004u) {
        ctx->pc = 0x2DE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE000u;
        // 0x2de004: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE008u;
        goto label_2de008;
    }
    ctx->pc = 0x2DE000u;
    SET_GPR_U32(ctx, 31, 0x2DE008u);
    ctx->pc = 0x2DE004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE000u;
    // 0x2de004: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D998u, 0x2DE000u, 0x2DE008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE008u;
label_2de008:
    // 0x2de008: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2de008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2de00c:
    // 0x2de00c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2de00cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2de010:
    // 0x2de010: 0xa2030018  sb          $v1, 0x18($s0)
    ctx->pc = 0x2de010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 3));
label_2de014:
    // 0x2de014: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2de014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de018:
    // 0x2de018: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2de018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2de01c:
    // 0x2de01c: 0x8ca3bd30  lw          $v1, -0x42D0($a1)
    ctx->pc = 0x2de01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950192)));
label_2de020:
    // 0x2de020: 0x1000009d  b           . + 4 + (0x9D << 2)
label_2de024:
    if (ctx->pc == 0x2DE024u) {
        ctx->pc = 0x2DE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE020u;
        // 0x2de024: 0xac830128  sw          $v1, 0x128($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE028u;
        goto label_2de028;
    }
    ctx->pc = 0x2DE020u;
    {
        const bool branch_taken_0x2de020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE020u;
        // 0x2de024: 0xac830128  sw          $v1, 0x128($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de020) {
            ctx->pc = 0x2DE298u;
            goto label_2de298;
        }
    }
    ctx->pc = 0x2DE028u;
label_2de028:
    // 0x2de028: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2de028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2de02c:
    // 0x2de02c: 0xa203001a  sb          $v1, 0x1A($s0)
    ctx->pc = 0x2de02cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 3));
label_2de030:
    // 0x2de030: 0xc0e36d0  jal         func_38DB40
label_2de034:
    if (ctx->pc == 0x2DE034u) {
        ctx->pc = 0x2DE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE030u;
        // 0x2de034: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE038u;
        goto label_2de038;
    }
    ctx->pc = 0x2DE030u;
    SET_GPR_U32(ctx, 31, 0x2DE038u);
    ctx->pc = 0x2DE034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE030u;
    // 0x2de034: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DB40u, 0x2DE030u, 0x2DE038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE038u;
label_2de038:
    // 0x2de038: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2de038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2de03c:
    // 0x2de03c: 0xc0cdb38  jal         func_336CE0
label_2de040:
    if (ctx->pc == 0x2DE040u) {
        ctx->pc = 0x2DE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE03Cu;
        // 0x2de040: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE044u;
        goto label_2de044;
    }
    ctx->pc = 0x2DE03Cu;
    SET_GPR_U32(ctx, 31, 0x2DE044u);
    ctx->pc = 0x2DE040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE03Cu;
    // 0x2de040: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DE03Cu, 0x2DE044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE044u;
label_2de044:
    // 0x2de044: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2de044u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2de048:
    // 0x2de048: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2de048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2de04c:
    // 0x2de04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2de04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de050:
    // 0x2de050: 0x0  nop
    ctx->pc = 0x2de050u;
    // NOP
label_2de054:
    // 0x2de054: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2de054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de058:
    // 0x2de058: 0x0  nop
    ctx->pc = 0x2de058u;
    // NOP
label_2de05c:
    // 0x2de05c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_2de060:
    if (ctx->pc == 0x2DE060u) {
        ctx->pc = 0x2DE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE05Cu;
        // 0x2de060: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE064u;
        goto label_2de064;
    }
    ctx->pc = 0x2DE05Cu;
    {
        const bool branch_taken_0x2de05c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE05Cu;
        // 0x2de060: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de05c) {
            ctx->pc = 0x2DE0CCu;
            goto label_2de0cc;
        }
    }
    ctx->pc = 0x2DE064u;
label_2de064:
    // 0x2de064: 0xc08bfbc  jal         func_22FEF0
label_2de068:
    if (ctx->pc == 0x2DE068u) {
        ctx->pc = 0x2DE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE064u;
        // 0x2de068: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE06Cu;
        goto label_2de06c;
    }
    ctx->pc = 0x2DE064u;
    SET_GPR_U32(ctx, 31, 0x2DE06Cu);
    ctx->pc = 0x2DE068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE064u;
    // 0x2de068: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2DE064u, 0x2DE06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE06Cu;
label_2de06c:
    // 0x2de06c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2de06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2de070:
    // 0x2de070: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2de070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2de074:
    // 0x2de074: 0x0  nop
    ctx->pc = 0x2de074u;
    // NOP
label_2de078:
    // 0x2de078: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2de078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de07c:
    // 0x2de07c: 0x0  nop
    ctx->pc = 0x2de07cu;
    // NOP
label_2de080:
    // 0x2de080: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2de084:
    if (ctx->pc == 0x2DE084u) {
        ctx->pc = 0x2DE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE080u;
        // 0x2de084: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE088u;
        goto label_2de088;
    }
    ctx->pc = 0x2DE080u;
    {
        const bool branch_taken_0x2de080 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de080) {
            ctx->pc = 0x2DE084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE080u;
            // 0x2de084: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE088u;
            goto label_2de088;
        }
    }
    ctx->pc = 0x2DE088u;
label_2de088:
    // 0x2de088: 0xc0a367c  jal         func_28D9F0
label_2de08c:
    if (ctx->pc == 0x2DE08Cu) {
        ctx->pc = 0x2DE08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE088u;
        // 0x2de08c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE090u;
        goto label_2de090;
    }
    ctx->pc = 0x2DE088u;
    SET_GPR_U32(ctx, 31, 0x2DE090u);
    ctx->pc = 0x2DE08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE088u;
    // 0x2de08c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DE088u, 0x2DE090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE090u;
label_2de090:
    // 0x2de090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2de090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de094:
    // 0x2de094: 0x1080007f  beqz        $a0, . + 4 + (0x7F << 2)
label_2de098:
    if (ctx->pc == 0x2DE098u) {
        ctx->pc = 0x2DE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE094u;
        // 0x2de098: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE09Cu;
        goto label_2de09c;
    }
    ctx->pc = 0x2DE094u;
    {
        const bool branch_taken_0x2de094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE094u;
        // 0x2de098: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de094) {
            ctx->pc = 0x2DE294u;
            goto label_2de294;
        }
    }
    ctx->pc = 0x2DE09Cu;
label_2de09c:
    // 0x2de09c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2de09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2de0a0:
    // 0x2de0a0: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2de0a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2de0a4:
    // 0x2de0a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2de0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2de0a8:
    // 0x2de0a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2de0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2de0ac:
    // 0x2de0ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2de0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2de0b0:
    // 0x2de0b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2de0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2de0b4:
    // 0x2de0b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2de0b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de0b8:
    // 0x2de0b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2de0b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de0bc:
    // 0x2de0bc: 0xc0bee7a  jal         func_2FB9E8
label_2de0c0:
    if (ctx->pc == 0x2DE0C0u) {
        ctx->pc = 0x2DE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0BCu;
        // 0x2de0c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE0C4u;
        goto label_2de0c4;
    }
    ctx->pc = 0x2DE0BCu;
    SET_GPR_U32(ctx, 31, 0x2DE0C4u);
    ctx->pc = 0x2DE0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE0BCu;
    // 0x2de0c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2DE0BCu, 0x2DE0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0C4u;
label_2de0c4:
    // 0x2de0c4: 0x10000074  b           . + 4 + (0x74 << 2)
label_2de0c8:
    if (ctx->pc == 0x2DE0C8u) {
        ctx->pc = 0x2DE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0C4u;
        // 0x2de0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE0CCu;
        goto label_2de0cc;
    }
    ctx->pc = 0x2DE0C4u;
    {
        const bool branch_taken_0x2de0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0C4u;
        // 0x2de0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0c4) {
            ctx->pc = 0x2DE298u;
            goto label_2de298;
        }
    }
    ctx->pc = 0x2DE0CCu;
label_2de0cc:
    // 0x2de0cc: 0x92050018  lbu         $a1, 0x18($s0)
    ctx->pc = 0x2de0ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_2de0d0:
    // 0x2de0d0: 0xc0e3682  jal         func_38DA08
label_2de0d4:
    if (ctx->pc == 0x2DE0D4u) {
        ctx->pc = 0x2DE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0D0u;
        // 0x2de0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE0D8u;
        goto label_2de0d8;
    }
    ctx->pc = 0x2DE0D0u;
    SET_GPR_U32(ctx, 31, 0x2DE0D8u);
    ctx->pc = 0x2DE0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE0D0u;
    // 0x2de0d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA08u, 0x2DE0D0u, 0x2DE0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0D8u;
label_2de0d8:
    // 0x2de0d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2de0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de0dc:
    // 0x2de0dc: 0xc0e32ca  jal         func_38CB28
label_2de0e0:
    if (ctx->pc == 0x2DE0E0u) {
        ctx->pc = 0x2DE0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0DCu;
        // 0x2de0e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE0E4u;
        goto label_2de0e4;
    }
    ctx->pc = 0x2DE0DCu;
    SET_GPR_U32(ctx, 31, 0x2DE0E4u);
    ctx->pc = 0x2DE0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE0DCu;
    // 0x2de0e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CB28u, 0x2DE0DCu, 0x2DE0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0E4u;
label_2de0e4:
    // 0x2de0e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2de0e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de0e8:
    // 0x2de0e8: 0x1240006a  beqz        $s2, . + 4 + (0x6A << 2)
label_2de0ec:
    if (ctx->pc == 0x2DE0ECu) {
        ctx->pc = 0x2DE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0E8u;
        // 0x2de0ec: 0x26c24b00  addiu       $v0, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE0F0u;
        goto label_2de0f0;
    }
    ctx->pc = 0x2DE0E8u;
    {
        const bool branch_taken_0x2de0e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0E8u;
        // 0x2de0ec: 0x26c24b00  addiu       $v0, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de0e8) {
            ctx->pc = 0x2DE294u;
            goto label_2de294;
        }
    }
    ctx->pc = 0x2DE0F0u;
label_2de0f0:
    // 0x2de0f0: 0x86640092  lh          $a0, 0x92($s3)
    ctx->pc = 0x2de0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2de0f4:
    // 0x2de0f4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2de0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2de0f8:
    // 0x2de0f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2de0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2de0fc:
    // 0x2de0fc: 0xc0cd7d2  jal         func_335F48
label_2de100:
    if (ctx->pc == 0x2DE100u) {
        ctx->pc = 0x2DE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0FCu;
        // 0x2de100: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE104u;
        goto label_2de104;
    }
    ctx->pc = 0x2DE0FCu;
    SET_GPR_U32(ctx, 31, 0x2DE104u);
    ctx->pc = 0x2DE100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE0FCu;
    // 0x2de100: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2DE0FCu, 0x2DE104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE104u;
label_2de104:
    // 0x2de104: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2de104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2de108:
    // 0x2de108: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2de108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2de10c:
    // 0x2de10c: 0xc0cd780  jal         func_335E00
label_2de110:
    if (ctx->pc == 0x2DE110u) {
        ctx->pc = 0x2DE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE10Cu;
        // 0x2de110: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE114u;
        goto label_2de114;
    }
    ctx->pc = 0x2DE10Cu;
    SET_GPR_U32(ctx, 31, 0x2DE114u);
    ctx->pc = 0x2DE110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE10Cu;
    // 0x2de110: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2DE10Cu, 0x2DE114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE114u;
label_2de114:
    // 0x2de114: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2de114u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2de118:
    // 0x2de118: 0xc0cd742  jal         func_335D08
label_2de11c:
    if (ctx->pc == 0x2DE11Cu) {
        ctx->pc = 0x2DE11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE118u;
        // 0x2de11c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE120u;
        goto label_2de120;
    }
    ctx->pc = 0x2DE118u;
    SET_GPR_U32(ctx, 31, 0x2DE120u);
    ctx->pc = 0x2DE11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE118u;
    // 0x2de11c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2DE118u, 0x2DE120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE120u;
label_2de120:
    // 0x2de120: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2de120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2de124:
    // 0x2de124: 0xc0cdd2e  jal         func_3374B8
label_2de128:
    if (ctx->pc == 0x2DE128u) {
        ctx->pc = 0x2DE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE124u;
        // 0x2de128: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE12Cu;
        goto label_2de12c;
    }
    ctx->pc = 0x2DE124u;
    SET_GPR_U32(ctx, 31, 0x2DE12Cu);
    ctx->pc = 0x2DE128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE124u;
    // 0x2de128: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2DE124u, 0x2DE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE12Cu;
label_2de12c:
    // 0x2de12c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2de12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2de130:
    // 0x2de130: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2de130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2de134:
    // 0x2de134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2de134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2de138:
    // 0x2de138: 0x0  nop
    ctx->pc = 0x2de138u;
    // NOP
label_2de13c:
    // 0x2de13c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de13cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de140:
    // 0x2de140: 0x0  nop
    ctx->pc = 0x2de140u;
    // NOP
label_2de144:
    // 0x2de144: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2de148:
    if (ctx->pc == 0x2DE148u) {
        ctx->pc = 0x2DE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE144u;
        // 0x2de148: 0xc6a00008  lwc1        $f0, 0x8($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE14Cu;
        goto label_2de14c;
    }
    ctx->pc = 0x2DE144u;
    {
        const bool branch_taken_0x2de144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de144) {
            ctx->pc = 0x2DE148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE144u;
            // 0x2de148: 0xc6a00008  lwc1        $f0, 0x8($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE188u;
            goto label_2de188;
        }
    }
    ctx->pc = 0x2DE14Cu;
label_2de14c:
    // 0x2de14c: 0xc0a367c  jal         func_28D9F0
label_2de150:
    if (ctx->pc == 0x2DE150u) {
        ctx->pc = 0x2DE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE14Cu;
        // 0x2de150: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE154u;
        goto label_2de154;
    }
    ctx->pc = 0x2DE14Cu;
    SET_GPR_U32(ctx, 31, 0x2DE154u);
    ctx->pc = 0x2DE150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE14Cu;
    // 0x2de150: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DE14Cu, 0x2DE154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE154u;
label_2de154:
    // 0x2de154: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2de154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de158:
    // 0x2de158: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
label_2de15c:
    if (ctx->pc == 0x2DE15Cu) {
        ctx->pc = 0x2DE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE158u;
        // 0x2de15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE160u;
        goto label_2de160;
    }
    ctx->pc = 0x2DE158u;
    {
        const bool branch_taken_0x2de158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE158u;
        // 0x2de15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de158) {
            ctx->pc = 0x2DE298u;
            goto label_2de298;
        }
    }
    ctx->pc = 0x2DE160u;
label_2de160:
    // 0x2de160: 0xc0884f6  jal         func_2213D8
label_2de164:
    if (ctx->pc == 0x2DE164u) {
        ctx->pc = 0x2DE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE160u;
        // 0x2de164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE168u;
        goto label_2de168;
    }
    ctx->pc = 0x2DE160u;
    SET_GPR_U32(ctx, 31, 0x2DE168u);
    ctx->pc = 0x2DE164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE160u;
    // 0x2de164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DE160u, 0x2DE168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE168u;
label_2de168:
    // 0x2de168: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2de168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2de16c:
    // 0x2de16c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2de170:
    // 0x2de170: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2de170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2de174:
    // 0x2de174: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2de174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2de178:
    // 0x2de178: 0xc0bf800  jal         func_2FE000
label_2de17c:
    if (ctx->pc == 0x2DE17Cu) {
        ctx->pc = 0x2DE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE178u;
        // 0x2de17c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE180u;
        goto label_2de180;
    }
    ctx->pc = 0x2DE178u;
    SET_GPR_U32(ctx, 31, 0x2DE180u);
    ctx->pc = 0x2DE17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE178u;
    // 0x2de17c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2DE178u, 0x2DE180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE180u;
label_2de180:
    // 0x2de180: 0x10000045  b           . + 4 + (0x45 << 2)
label_2de184:
    if (ctx->pc == 0x2DE184u) {
        ctx->pc = 0x2DE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE180u;
        // 0x2de184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE188u;
        goto label_2de188;
    }
    ctx->pc = 0x2DE180u;
    {
        const bool branch_taken_0x2de180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE180u;
        // 0x2de184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de180) {
            ctx->pc = 0x2DE298u;
            goto label_2de298;
        }
    }
    ctx->pc = 0x2DE188u;
label_2de188:
    // 0x2de188: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x2de188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
label_2de18c:
    // 0x2de18c: 0x34213d70  ori         $at, $at, 0x3D70
    ctx->pc = 0x2de18cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15728);
label_2de190:
    // 0x2de190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2de190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2de194:
    // 0x2de194: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2de194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2de198:
    // 0x2de198: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2de198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2de19c:
    // 0x2de19c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2de19cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2de1a0:
    // 0x2de1a0: 0x0  nop
    ctx->pc = 0x2de1a0u;
    // NOP
label_2de1a4:
    // 0x2de1a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2de1a8:
    if (ctx->pc == 0x2DE1A8u) {
        ctx->pc = 0x2DE1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1A4u;
        // 0x2de1a8: 0x2414000b  addiu       $s4, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE1ACu;
        goto label_2de1ac;
    }
    ctx->pc = 0x2DE1A4u;
    {
        const bool branch_taken_0x2de1a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1A4u;
        // 0x2de1a8: 0x2414000b  addiu       $s4, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1a4) {
            ctx->pc = 0x2DE1B0u;
            goto label_2de1b0;
        }
    }
    ctx->pc = 0x2DE1ACu;
label_2de1ac:
    // 0x2de1ac: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x2de1acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2de1b0:
    // 0x2de1b0: 0xc089018  jal         func_224060
label_2de1b4:
    if (ctx->pc == 0x2DE1B4u) {
        ctx->pc = 0x2DE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1B0u;
        // 0x2de1b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE1B8u;
        goto label_2de1b8;
    }
    ctx->pc = 0x2DE1B0u;
    SET_GPR_U32(ctx, 31, 0x2DE1B8u);
    ctx->pc = 0x2DE1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE1B0u;
    // 0x2de1b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2DE1B0u, 0x2DE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1B8u;
label_2de1b8:
    // 0x2de1b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2de1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2de1bc:
    // 0x2de1bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2de1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2de1c0:
    // 0x2de1c0: 0xc089bdc  jal         func_226F70
label_2de1c4:
    if (ctx->pc == 0x2DE1C4u) {
        ctx->pc = 0x2DE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1C0u;
        // 0x2de1c4: 0x2a00a  movz        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE1C8u;
        goto label_2de1c8;
    }
    ctx->pc = 0x2DE1C0u;
    SET_GPR_U32(ctx, 31, 0x2DE1C8u);
    ctx->pc = 0x2DE1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE1C0u;
    // 0x2de1c4: 0x2a00a  movz        $s4, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2DE1C0u, 0x2DE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1C8u;
label_2de1c8:
    // 0x2de1c8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2de1cc:
    if (ctx->pc == 0x2DE1CCu) {
        ctx->pc = 0x2DE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1C8u;
        // 0x2de1cc: 0x8e150000  lw          $s5, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE1D0u;
        goto label_2de1d0;
    }
    ctx->pc = 0x2DE1C8u;
    {
        const bool branch_taken_0x2de1c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1C8u;
        // 0x2de1cc: 0x8e150000  lw          $s5, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1c8) {
            ctx->pc = 0x2DE1ECu;
            goto label_2de1ec;
        }
    }
    ctx->pc = 0x2DE1D0u;
label_2de1d0:
    // 0x2de1d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2de1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2de1d4:
    // 0x2de1d4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2de1d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2de1d8:
    // 0x2de1d8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2de1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2de1dc:
    // 0x2de1dc: 0x40f809  jalr        $v0
label_2de1e0:
    if (ctx->pc == 0x2DE1E0u) {
        ctx->pc = 0x2DE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1DCu;
        // 0x2de1e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE1E4u;
        goto label_2de1e4;
    }
    ctx->pc = 0x2DE1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DE1E4u);
        ctx->pc = 0x2DE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1DCu;
        // 0x2de1e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE1DCu, 0x2DE1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE1E4u;
label_2de1e4:
    // 0x2de1e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2de1e8:
    if (ctx->pc == 0x2DE1E8u) {
        ctx->pc = 0x2DE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1E4u;
        // 0x2de1e8: 0xaea20128  sw          $v0, 0x128($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE1ECu;
        goto label_2de1ec;
    }
    ctx->pc = 0x2DE1E4u;
    {
        const bool branch_taken_0x2de1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1E4u;
        // 0x2de1e8: 0xaea20128  sw          $v0, 0x128($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1e4) {
            ctx->pc = 0x2DE1F8u;
            goto label_2de1f8;
        }
    }
    ctx->pc = 0x2DE1ECu;
label_2de1ec:
    // 0x2de1ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2de1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2de1f0:
    // 0x2de1f0: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x2de1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2de1f4:
    // 0x2de1f4: 0xaea20128  sw          $v0, 0x128($s5)
    ctx->pc = 0x2de1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 296), GPR_U32(ctx, 2));
label_2de1f8:
    // 0x2de1f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2de1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2de1fc:
    // 0x2de1fc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2de1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2de200:
    // 0x2de200: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2de200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2de204:
    // 0x2de204: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2de204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2de208:
    // 0x2de208: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x2de208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2de20c:
    // 0x2de20c: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x2de20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2de210:
    // 0x2de210: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x2de210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_2de214:
    // 0x2de214: 0x7c6200e0  sq          $v0, 0xE0($v1)
    ctx->pc = 0x2de214u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 224), GPR_VEC(ctx, 2));
label_2de218:
    // 0x2de218: 0xc0a3892  jal         func_28E248
label_2de21c:
    if (ctx->pc == 0x2DE21Cu) {
        ctx->pc = 0x2DE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE218u;
        // 0x2de21c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE220u;
        goto label_2de220;
    }
    ctx->pc = 0x2DE218u;
    SET_GPR_U32(ctx, 31, 0x2DE220u);
    ctx->pc = 0x2DE21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE218u;
    // 0x2de21c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2DE218u, 0x2DE220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE220u;
label_2de220:
    // 0x2de220: 0xc0a47b4  jal         func_291ED0
label_2de224:
    if (ctx->pc == 0x2DE224u) {
        ctx->pc = 0x2DE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE220u;
        // 0x2de224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE228u;
        goto label_2de228;
    }
    ctx->pc = 0x2DE220u;
    SET_GPR_U32(ctx, 31, 0x2DE228u);
    ctx->pc = 0x2DE224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE220u;
    // 0x2de224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2DE220u, 0x2DE228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE228u;
label_2de228:
    // 0x2de228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2de22c:
    // 0x2de22c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de230:
    // 0x2de230: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
label_2de234:
    if (ctx->pc == 0x2DE234u) {
        ctx->pc = 0x2DE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE230u;
        // 0x2de234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE238u;
        goto label_2de238;
    }
    ctx->pc = 0x2DE230u;
    {
        const bool branch_taken_0x2de230 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE230u;
        // 0x2de234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de230) {
            ctx->pc = 0x2DE298u;
            goto label_2de298;
        }
    }
    ctx->pc = 0x2DE238u;
label_2de238:
    // 0x2de238: 0xc0a4802  jal         func_292008
label_2de23c:
    if (ctx->pc == 0x2DE23Cu) {
        ctx->pc = 0x2DE240u;
        goto label_2de240;
    }
    ctx->pc = 0x2DE238u;
    SET_GPR_U32(ctx, 31, 0x2DE240u);
    ctx->pc = 0x292008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292008u, 0x2DE238u, 0x2DE240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE240u;
label_2de240:
    // 0x2de240: 0x14500015  bne         $v0, $s0, . + 4 + (0x15 << 2)
label_2de244:
    if (ctx->pc == 0x2DE244u) {
        ctx->pc = 0x2DE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE240u;
        // 0x2de244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE248u;
        goto label_2de248;
    }
    ctx->pc = 0x2DE240u;
    {
        const bool branch_taken_0x2de240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2DE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE240u;
        // 0x2de244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de240) {
            ctx->pc = 0x2DE298u;
            goto label_2de298;
        }
    }
    ctx->pc = 0x2DE248u;
label_2de248:
    // 0x2de248: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2de248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2de24c:
    // 0x2de24c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2de24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2de250:
    // 0x2de250: 0xc0cd4ee  jal         func_3353B8
label_2de254:
    if (ctx->pc == 0x2DE254u) {
        ctx->pc = 0x2DE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE250u;
        // 0x2de254: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE258u;
        goto label_2de258;
    }
    ctx->pc = 0x2DE250u;
    SET_GPR_U32(ctx, 31, 0x2DE258u);
    ctx->pc = 0x2DE254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE250u;
    // 0x2de254: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2DE250u, 0x2DE258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE258u;
label_2de258:
    // 0x2de258: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2de258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2de25c:
    // 0x2de25c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2de25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2de260:
    // 0x2de260: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2de260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2de264:
    // 0x2de264: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x2de264u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2de268:
    // 0x2de268: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x2de268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2de26c:
    // 0x2de26c: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x2de26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_2de270:
    // 0x2de270: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2de270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2de274:
    // 0x2de274: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2de274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2de278:
    // 0x2de278: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x2de278u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2de27c:
    // 0x2de27c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2de27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2de280:
    // 0x2de280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2de280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de284:
    // 0x2de284: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2de284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de288:
    // 0x2de288: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2de288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de28c:
    // 0x2de28c: 0xc088178  jal         func_2205E0
label_2de290:
    if (ctx->pc == 0x2DE290u) {
        ctx->pc = 0x2DE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE28Cu;
        // 0x2de290: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE294u;
        goto label_2de294;
    }
    ctx->pc = 0x2DE28Cu;
    SET_GPR_U32(ctx, 31, 0x2DE294u);
    ctx->pc = 0x2DE290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE28Cu;
    // 0x2de290: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2DE28Cu, 0x2DE294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE294u;
label_2de294:
    // 0x2de294: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2de294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de298:
    // 0x2de298: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2de298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2de29c:
    // 0x2de29c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2de29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2de2a0:
    // 0x2de2a0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2de2a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2de2a4:
    // 0x2de2a4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2de2a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2de2a8:
    // 0x2de2a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2de2a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2de2ac:
    // 0x2de2ac: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2de2acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2de2b0:
    // 0x2de2b0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2de2b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2de2b4:
    // 0x2de2b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2de2b8:
    // 0x2de2b8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2de2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2de2bc:
    // 0x2de2bc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2de2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2de2c0:
    // 0x2de2c0: 0x3e00008  jr          $ra
label_2de2c4:
    if (ctx->pc == 0x2DE2C4u) {
        ctx->pc = 0x2DE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2C0u;
        // 0x2de2c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE2C8u;
        goto label_fallthrough_0x2de2c0;
    }
    ctx->pc = 0x2DE2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE2C0u;
        // 0x2de2c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2de2c0:
    ctx->pc = 0x2DE2C8u;
}
