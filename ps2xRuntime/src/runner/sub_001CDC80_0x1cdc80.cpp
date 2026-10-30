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

// Function: sub_001CDC80
// Address: 0x1cdc80 - 0x1ce1e8
void sub_001CDC80_0x1cdc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDC80_0x1cdc80");
#endif

    switch (ctx->pc) {
        case 0x1cdc80u: goto label_1cdc80;
        case 0x1cdc84u: goto label_1cdc84;
        case 0x1cdc88u: goto label_1cdc88;
        case 0x1cdc8cu: goto label_1cdc8c;
        case 0x1cdc90u: goto label_1cdc90;
        case 0x1cdc94u: goto label_1cdc94;
        case 0x1cdc98u: goto label_1cdc98;
        case 0x1cdc9cu: goto label_1cdc9c;
        case 0x1cdca0u: goto label_1cdca0;
        case 0x1cdca4u: goto label_1cdca4;
        case 0x1cdca8u: goto label_1cdca8;
        case 0x1cdcacu: goto label_1cdcac;
        case 0x1cdcb0u: goto label_1cdcb0;
        case 0x1cdcb4u: goto label_1cdcb4;
        case 0x1cdcb8u: goto label_1cdcb8;
        case 0x1cdcbcu: goto label_1cdcbc;
        case 0x1cdcc0u: goto label_1cdcc0;
        case 0x1cdcc4u: goto label_1cdcc4;
        case 0x1cdcc8u: goto label_1cdcc8;
        case 0x1cdcccu: goto label_1cdccc;
        case 0x1cdcd0u: goto label_1cdcd0;
        case 0x1cdcd4u: goto label_1cdcd4;
        case 0x1cdcd8u: goto label_1cdcd8;
        case 0x1cdcdcu: goto label_1cdcdc;
        case 0x1cdce0u: goto label_1cdce0;
        case 0x1cdce4u: goto label_1cdce4;
        case 0x1cdce8u: goto label_1cdce8;
        case 0x1cdcecu: goto label_1cdcec;
        case 0x1cdcf0u: goto label_1cdcf0;
        case 0x1cdcf4u: goto label_1cdcf4;
        case 0x1cdcf8u: goto label_1cdcf8;
        case 0x1cdcfcu: goto label_1cdcfc;
        case 0x1cdd00u: goto label_1cdd00;
        case 0x1cdd04u: goto label_1cdd04;
        case 0x1cdd08u: goto label_1cdd08;
        case 0x1cdd0cu: goto label_1cdd0c;
        case 0x1cdd10u: goto label_1cdd10;
        case 0x1cdd14u: goto label_1cdd14;
        case 0x1cdd18u: goto label_1cdd18;
        case 0x1cdd1cu: goto label_1cdd1c;
        case 0x1cdd20u: goto label_1cdd20;
        case 0x1cdd24u: goto label_1cdd24;
        case 0x1cdd28u: goto label_1cdd28;
        case 0x1cdd2cu: goto label_1cdd2c;
        case 0x1cdd30u: goto label_1cdd30;
        case 0x1cdd34u: goto label_1cdd34;
        case 0x1cdd38u: goto label_1cdd38;
        case 0x1cdd3cu: goto label_1cdd3c;
        case 0x1cdd40u: goto label_1cdd40;
        case 0x1cdd44u: goto label_1cdd44;
        case 0x1cdd48u: goto label_1cdd48;
        case 0x1cdd4cu: goto label_1cdd4c;
        case 0x1cdd50u: goto label_1cdd50;
        case 0x1cdd54u: goto label_1cdd54;
        case 0x1cdd58u: goto label_1cdd58;
        case 0x1cdd5cu: goto label_1cdd5c;
        case 0x1cdd60u: goto label_1cdd60;
        case 0x1cdd64u: goto label_1cdd64;
        case 0x1cdd68u: goto label_1cdd68;
        case 0x1cdd6cu: goto label_1cdd6c;
        case 0x1cdd70u: goto label_1cdd70;
        case 0x1cdd74u: goto label_1cdd74;
        case 0x1cdd78u: goto label_1cdd78;
        case 0x1cdd7cu: goto label_1cdd7c;
        case 0x1cdd80u: goto label_1cdd80;
        case 0x1cdd84u: goto label_1cdd84;
        case 0x1cdd88u: goto label_1cdd88;
        case 0x1cdd8cu: goto label_1cdd8c;
        case 0x1cdd90u: goto label_1cdd90;
        case 0x1cdd94u: goto label_1cdd94;
        case 0x1cdd98u: goto label_1cdd98;
        case 0x1cdd9cu: goto label_1cdd9c;
        case 0x1cdda0u: goto label_1cdda0;
        case 0x1cdda4u: goto label_1cdda4;
        case 0x1cdda8u: goto label_1cdda8;
        case 0x1cddacu: goto label_1cddac;
        case 0x1cddb0u: goto label_1cddb0;
        case 0x1cddb4u: goto label_1cddb4;
        case 0x1cddb8u: goto label_1cddb8;
        case 0x1cddbcu: goto label_1cddbc;
        case 0x1cddc0u: goto label_1cddc0;
        case 0x1cddc4u: goto label_1cddc4;
        case 0x1cddc8u: goto label_1cddc8;
        case 0x1cddccu: goto label_1cddcc;
        case 0x1cddd0u: goto label_1cddd0;
        case 0x1cddd4u: goto label_1cddd4;
        case 0x1cddd8u: goto label_1cddd8;
        case 0x1cdddcu: goto label_1cdddc;
        case 0x1cdde0u: goto label_1cdde0;
        case 0x1cdde4u: goto label_1cdde4;
        case 0x1cdde8u: goto label_1cdde8;
        case 0x1cddecu: goto label_1cddec;
        case 0x1cddf0u: goto label_1cddf0;
        case 0x1cddf4u: goto label_1cddf4;
        case 0x1cddf8u: goto label_1cddf8;
        case 0x1cddfcu: goto label_1cddfc;
        case 0x1cde00u: goto label_1cde00;
        case 0x1cde04u: goto label_1cde04;
        case 0x1cde08u: goto label_1cde08;
        case 0x1cde0cu: goto label_1cde0c;
        case 0x1cde10u: goto label_1cde10;
        case 0x1cde14u: goto label_1cde14;
        case 0x1cde18u: goto label_1cde18;
        case 0x1cde1cu: goto label_1cde1c;
        case 0x1cde20u: goto label_1cde20;
        case 0x1cde24u: goto label_1cde24;
        case 0x1cde28u: goto label_1cde28;
        case 0x1cde2cu: goto label_1cde2c;
        case 0x1cde30u: goto label_1cde30;
        case 0x1cde34u: goto label_1cde34;
        case 0x1cde38u: goto label_1cde38;
        case 0x1cde3cu: goto label_1cde3c;
        case 0x1cde40u: goto label_1cde40;
        case 0x1cde44u: goto label_1cde44;
        case 0x1cde48u: goto label_1cde48;
        case 0x1cde4cu: goto label_1cde4c;
        case 0x1cde50u: goto label_1cde50;
        case 0x1cde54u: goto label_1cde54;
        case 0x1cde58u: goto label_1cde58;
        case 0x1cde5cu: goto label_1cde5c;
        case 0x1cde60u: goto label_1cde60;
        case 0x1cde64u: goto label_1cde64;
        case 0x1cde68u: goto label_1cde68;
        case 0x1cde6cu: goto label_1cde6c;
        case 0x1cde70u: goto label_1cde70;
        case 0x1cde74u: goto label_1cde74;
        case 0x1cde78u: goto label_1cde78;
        case 0x1cde7cu: goto label_1cde7c;
        case 0x1cde80u: goto label_1cde80;
        case 0x1cde84u: goto label_1cde84;
        case 0x1cde88u: goto label_1cde88;
        case 0x1cde8cu: goto label_1cde8c;
        case 0x1cde90u: goto label_1cde90;
        case 0x1cde94u: goto label_1cde94;
        case 0x1cde98u: goto label_1cde98;
        case 0x1cde9cu: goto label_1cde9c;
        case 0x1cdea0u: goto label_1cdea0;
        case 0x1cdea4u: goto label_1cdea4;
        case 0x1cdea8u: goto label_1cdea8;
        case 0x1cdeacu: goto label_1cdeac;
        case 0x1cdeb0u: goto label_1cdeb0;
        case 0x1cdeb4u: goto label_1cdeb4;
        case 0x1cdeb8u: goto label_1cdeb8;
        case 0x1cdebcu: goto label_1cdebc;
        case 0x1cdec0u: goto label_1cdec0;
        case 0x1cdec4u: goto label_1cdec4;
        case 0x1cdec8u: goto label_1cdec8;
        case 0x1cdeccu: goto label_1cdecc;
        case 0x1cded0u: goto label_1cded0;
        case 0x1cded4u: goto label_1cded4;
        case 0x1cded8u: goto label_1cded8;
        case 0x1cdedcu: goto label_1cdedc;
        case 0x1cdee0u: goto label_1cdee0;
        case 0x1cdee4u: goto label_1cdee4;
        case 0x1cdee8u: goto label_1cdee8;
        case 0x1cdeecu: goto label_1cdeec;
        case 0x1cdef0u: goto label_1cdef0;
        case 0x1cdef4u: goto label_1cdef4;
        case 0x1cdef8u: goto label_1cdef8;
        case 0x1cdefcu: goto label_1cdefc;
        case 0x1cdf00u: goto label_1cdf00;
        case 0x1cdf04u: goto label_1cdf04;
        case 0x1cdf08u: goto label_1cdf08;
        case 0x1cdf0cu: goto label_1cdf0c;
        case 0x1cdf10u: goto label_1cdf10;
        case 0x1cdf14u: goto label_1cdf14;
        case 0x1cdf18u: goto label_1cdf18;
        case 0x1cdf1cu: goto label_1cdf1c;
        case 0x1cdf20u: goto label_1cdf20;
        case 0x1cdf24u: goto label_1cdf24;
        case 0x1cdf28u: goto label_1cdf28;
        case 0x1cdf2cu: goto label_1cdf2c;
        case 0x1cdf30u: goto label_1cdf30;
        case 0x1cdf34u: goto label_1cdf34;
        case 0x1cdf38u: goto label_1cdf38;
        case 0x1cdf3cu: goto label_1cdf3c;
        case 0x1cdf40u: goto label_1cdf40;
        case 0x1cdf44u: goto label_1cdf44;
        case 0x1cdf48u: goto label_1cdf48;
        case 0x1cdf4cu: goto label_1cdf4c;
        case 0x1cdf50u: goto label_1cdf50;
        case 0x1cdf54u: goto label_1cdf54;
        case 0x1cdf58u: goto label_1cdf58;
        case 0x1cdf5cu: goto label_1cdf5c;
        case 0x1cdf60u: goto label_1cdf60;
        case 0x1cdf64u: goto label_1cdf64;
        case 0x1cdf68u: goto label_1cdf68;
        case 0x1cdf6cu: goto label_1cdf6c;
        case 0x1cdf70u: goto label_1cdf70;
        case 0x1cdf74u: goto label_1cdf74;
        case 0x1cdf78u: goto label_1cdf78;
        case 0x1cdf7cu: goto label_1cdf7c;
        case 0x1cdf80u: goto label_1cdf80;
        case 0x1cdf84u: goto label_1cdf84;
        case 0x1cdf88u: goto label_1cdf88;
        case 0x1cdf8cu: goto label_1cdf8c;
        case 0x1cdf90u: goto label_1cdf90;
        case 0x1cdf94u: goto label_1cdf94;
        case 0x1cdf98u: goto label_1cdf98;
        case 0x1cdf9cu: goto label_1cdf9c;
        case 0x1cdfa0u: goto label_1cdfa0;
        case 0x1cdfa4u: goto label_1cdfa4;
        case 0x1cdfa8u: goto label_1cdfa8;
        case 0x1cdfacu: goto label_1cdfac;
        case 0x1cdfb0u: goto label_1cdfb0;
        case 0x1cdfb4u: goto label_1cdfb4;
        case 0x1cdfb8u: goto label_1cdfb8;
        case 0x1cdfbcu: goto label_1cdfbc;
        case 0x1cdfc0u: goto label_1cdfc0;
        case 0x1cdfc4u: goto label_1cdfc4;
        case 0x1cdfc8u: goto label_1cdfc8;
        case 0x1cdfccu: goto label_1cdfcc;
        case 0x1cdfd0u: goto label_1cdfd0;
        case 0x1cdfd4u: goto label_1cdfd4;
        case 0x1cdfd8u: goto label_1cdfd8;
        case 0x1cdfdcu: goto label_1cdfdc;
        case 0x1cdfe0u: goto label_1cdfe0;
        case 0x1cdfe4u: goto label_1cdfe4;
        case 0x1cdfe8u: goto label_1cdfe8;
        case 0x1cdfecu: goto label_1cdfec;
        case 0x1cdff0u: goto label_1cdff0;
        case 0x1cdff4u: goto label_1cdff4;
        case 0x1cdff8u: goto label_1cdff8;
        case 0x1cdffcu: goto label_1cdffc;
        case 0x1ce000u: goto label_1ce000;
        case 0x1ce004u: goto label_1ce004;
        case 0x1ce008u: goto label_1ce008;
        case 0x1ce00cu: goto label_1ce00c;
        case 0x1ce010u: goto label_1ce010;
        case 0x1ce014u: goto label_1ce014;
        case 0x1ce018u: goto label_1ce018;
        case 0x1ce01cu: goto label_1ce01c;
        case 0x1ce020u: goto label_1ce020;
        case 0x1ce024u: goto label_1ce024;
        case 0x1ce028u: goto label_1ce028;
        case 0x1ce02cu: goto label_1ce02c;
        case 0x1ce030u: goto label_1ce030;
        case 0x1ce034u: goto label_1ce034;
        case 0x1ce038u: goto label_1ce038;
        case 0x1ce03cu: goto label_1ce03c;
        case 0x1ce040u: goto label_1ce040;
        case 0x1ce044u: goto label_1ce044;
        case 0x1ce048u: goto label_1ce048;
        case 0x1ce04cu: goto label_1ce04c;
        case 0x1ce050u: goto label_1ce050;
        case 0x1ce054u: goto label_1ce054;
        case 0x1ce058u: goto label_1ce058;
        case 0x1ce05cu: goto label_1ce05c;
        case 0x1ce060u: goto label_1ce060;
        case 0x1ce064u: goto label_1ce064;
        case 0x1ce068u: goto label_1ce068;
        case 0x1ce06cu: goto label_1ce06c;
        case 0x1ce070u: goto label_1ce070;
        case 0x1ce074u: goto label_1ce074;
        case 0x1ce078u: goto label_1ce078;
        case 0x1ce07cu: goto label_1ce07c;
        case 0x1ce080u: goto label_1ce080;
        case 0x1ce084u: goto label_1ce084;
        case 0x1ce088u: goto label_1ce088;
        case 0x1ce08cu: goto label_1ce08c;
        case 0x1ce090u: goto label_1ce090;
        case 0x1ce094u: goto label_1ce094;
        case 0x1ce098u: goto label_1ce098;
        case 0x1ce09cu: goto label_1ce09c;
        case 0x1ce0a0u: goto label_1ce0a0;
        case 0x1ce0a4u: goto label_1ce0a4;
        case 0x1ce0a8u: goto label_1ce0a8;
        case 0x1ce0acu: goto label_1ce0ac;
        case 0x1ce0b0u: goto label_1ce0b0;
        case 0x1ce0b4u: goto label_1ce0b4;
        case 0x1ce0b8u: goto label_1ce0b8;
        case 0x1ce0bcu: goto label_1ce0bc;
        case 0x1ce0c0u: goto label_1ce0c0;
        case 0x1ce0c4u: goto label_1ce0c4;
        case 0x1ce0c8u: goto label_1ce0c8;
        case 0x1ce0ccu: goto label_1ce0cc;
        case 0x1ce0d0u: goto label_1ce0d0;
        case 0x1ce0d4u: goto label_1ce0d4;
        case 0x1ce0d8u: goto label_1ce0d8;
        case 0x1ce0dcu: goto label_1ce0dc;
        case 0x1ce0e0u: goto label_1ce0e0;
        case 0x1ce0e4u: goto label_1ce0e4;
        case 0x1ce0e8u: goto label_1ce0e8;
        case 0x1ce0ecu: goto label_1ce0ec;
        case 0x1ce0f0u: goto label_1ce0f0;
        case 0x1ce0f4u: goto label_1ce0f4;
        case 0x1ce0f8u: goto label_1ce0f8;
        case 0x1ce0fcu: goto label_1ce0fc;
        case 0x1ce100u: goto label_1ce100;
        case 0x1ce104u: goto label_1ce104;
        case 0x1ce108u: goto label_1ce108;
        case 0x1ce10cu: goto label_1ce10c;
        case 0x1ce110u: goto label_1ce110;
        case 0x1ce114u: goto label_1ce114;
        case 0x1ce118u: goto label_1ce118;
        case 0x1ce11cu: goto label_1ce11c;
        case 0x1ce120u: goto label_1ce120;
        case 0x1ce124u: goto label_1ce124;
        case 0x1ce128u: goto label_1ce128;
        case 0x1ce12cu: goto label_1ce12c;
        case 0x1ce130u: goto label_1ce130;
        case 0x1ce134u: goto label_1ce134;
        case 0x1ce138u: goto label_1ce138;
        case 0x1ce13cu: goto label_1ce13c;
        case 0x1ce140u: goto label_1ce140;
        case 0x1ce144u: goto label_1ce144;
        case 0x1ce148u: goto label_1ce148;
        case 0x1ce14cu: goto label_1ce14c;
        case 0x1ce150u: goto label_1ce150;
        case 0x1ce154u: goto label_1ce154;
        case 0x1ce158u: goto label_1ce158;
        case 0x1ce15cu: goto label_1ce15c;
        case 0x1ce160u: goto label_1ce160;
        case 0x1ce164u: goto label_1ce164;
        case 0x1ce168u: goto label_1ce168;
        case 0x1ce16cu: goto label_1ce16c;
        case 0x1ce170u: goto label_1ce170;
        case 0x1ce174u: goto label_1ce174;
        case 0x1ce178u: goto label_1ce178;
        case 0x1ce17cu: goto label_1ce17c;
        case 0x1ce180u: goto label_1ce180;
        case 0x1ce184u: goto label_1ce184;
        case 0x1ce188u: goto label_1ce188;
        case 0x1ce18cu: goto label_1ce18c;
        case 0x1ce190u: goto label_1ce190;
        case 0x1ce194u: goto label_1ce194;
        case 0x1ce198u: goto label_1ce198;
        case 0x1ce19cu: goto label_1ce19c;
        case 0x1ce1a0u: goto label_1ce1a0;
        case 0x1ce1a4u: goto label_1ce1a4;
        case 0x1ce1a8u: goto label_1ce1a8;
        case 0x1ce1acu: goto label_1ce1ac;
        case 0x1ce1b0u: goto label_1ce1b0;
        case 0x1ce1b4u: goto label_1ce1b4;
        case 0x1ce1b8u: goto label_1ce1b8;
        case 0x1ce1bcu: goto label_1ce1bc;
        case 0x1ce1c0u: goto label_1ce1c0;
        case 0x1ce1c4u: goto label_1ce1c4;
        case 0x1ce1c8u: goto label_1ce1c8;
        case 0x1ce1ccu: goto label_1ce1cc;
        case 0x1ce1d0u: goto label_1ce1d0;
        case 0x1ce1d4u: goto label_1ce1d4;
        case 0x1ce1d8u: goto label_1ce1d8;
        case 0x1ce1dcu: goto label_1ce1dc;
        case 0x1ce1e0u: goto label_1ce1e0;
        case 0x1ce1e4u: goto label_1ce1e4;
        default: break;
    }

    ctx->pc = 0x1cdc80u;

label_1cdc80:
    // 0x1cdc80: 0x3c0d0051  lui         $t5, 0x51
    ctx->pc = 0x1cdc80u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)81 << 16));
label_1cdc84:
    // 0x1cdc84: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cdc84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1cdc88:
    // 0x1cdc88: 0x25aceb50  addiu       $t4, $t5, -0x14B0
    ctx->pc = 0x1cdc88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962000));
label_1cdc8c:
    // 0x1cdc8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cdc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cdc90:
    // 0x1cdc90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdc94:
    // 0x1cdc94: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1cdc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1cdc98:
    // 0x1cdc98: 0x25820060  addiu       $v0, $t4, 0x60
    ctx->pc = 0x1cdc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 96));
label_1cdc9c:
    // 0x1cdc9c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1cdc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1cdca0:
    // 0x1cdca0: 0x25870010  addiu       $a3, $t4, 0x10
    ctx->pc = 0x1cdca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
label_1cdca4:
    // 0x1cdca4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1cdca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1cdca8:
    // 0x1cdca8: 0x25860020  addiu       $a2, $t4, 0x20
    ctx->pc = 0x1cdca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
label_1cdcac:
    // 0x1cdcac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1cdcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1cdcb0:
    // 0x1cdcb0: 0x25850030  addiu       $a1, $t4, 0x30
    ctx->pc = 0x1cdcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
label_1cdcb4:
    // 0x1cdcb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cdcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1cdcb8:
    // 0x1cdcb8: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1cdcb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_1cdcbc:
    // 0x1cdcbc: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x1cdcbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1cdcc0:
    // 0x1cdcc0: 0x25830050  addiu       $v1, $t4, 0x50
    ctx->pc = 0x1cdcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 80));
label_1cdcc4:
    // 0x1cdcc4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1cdcc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1cdcc8:
    // 0x1cdcc8: 0x240b0fa0  addiu       $t3, $zero, 0xFA0
    ctx->pc = 0x1cdcc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_1cdccc:
    // 0x1cdccc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1cdcccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1cdcd0:
    // 0x1cdcd0: 0x240a00c8  addiu       $t2, $zero, 0xC8
    ctx->pc = 0x1cdcd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1cdcd4:
    // 0x1cdcd4: 0x3c013e81  lui         $at, 0x3E81
    ctx->pc = 0x1cdcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16001 << 16));
label_1cdcd8:
    // 0x1cdcd8: 0x34218937  ori         $at, $at, 0x8937
    ctx->pc = 0x1cdcd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35127);
label_1cdcdc:
    // 0x1cdcdc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1cdcdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1cdce0:
    // 0x1cdce0: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1cdce0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_1cdce4:
    // 0x1cdce4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1cdce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1cdce8:
    // 0x1cdce8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cdce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cdcec:
    // 0x1cdcec: 0xe5870010  swc1        $f7, 0x10($t4)
    ctx->pc = 0x1cdcecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 16), bits); }
label_1cdcf0:
    // 0x1cdcf0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1cdcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1cdcf4:
    // 0x1cdcf4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cdcf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1cdcf8:
    // 0x1cdcf8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1cdcf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1cdcfc:
    // 0x1cdcfc: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1cdcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_1cdd00:
    // 0x1cdd00: 0x3c013f3a  lui         $at, 0x3F3A
    ctx->pc = 0x1cdd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16186 << 16));
label_1cdd04:
    // 0x1cdd04: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1cdd04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1cdd08:
    // 0x1cdd08: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1cdd08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1cdd0c:
    // 0x1cdd0c: 0xe5880020  swc1        $f8, 0x20($t4)
    ctx->pc = 0x1cdd0cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 32), bits); }
label_1cdd10:
    // 0x1cdd10: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1cdd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
label_1cdd14:
    // 0x1cdd14: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1cdd14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1cdd18:
    // 0x1cdd18: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1cdd18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1cdd1c:
    // 0x1cdd1c: 0xe4c40008  swc1        $f4, 0x8($a2)
    ctx->pc = 0x1cdd1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1cdd20:
    // 0x1cdd20: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1cdd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_1cdd24:
    // 0x1cdd24: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x1cdd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_1cdd28:
    // 0x1cdd28: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1cdd28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1cdd2c:
    // 0x1cdd2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cdd2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cdd30:
    // 0x1cdd30: 0xe5850030  swc1        $f5, 0x30($t4)
    ctx->pc = 0x1cdd30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 48), bits); }
label_1cdd34:
    // 0x1cdd34: 0x3c01bc93  lui         $at, 0xBC93
    ctx->pc = 0x1cdd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48275 << 16));
label_1cdd38:
    // 0x1cdd38: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x1cdd38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
label_1cdd3c:
    // 0x1cdd3c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1cdd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1cdd40:
    // 0x1cdd40: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x1cdd40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1cdd44:
    // 0x1cdd44: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1cdd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1cdd48:
    // 0x1cdd48: 0x3c01bd0f  lui         $at, 0xBD0F
    ctx->pc = 0x1cdd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48399 << 16));
label_1cdd4c:
    // 0x1cdd4c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1cdd4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1cdd50:
    // 0x1cdd50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cdd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cdd54:
    // 0x1cdd54: 0xad880040  sw          $t0, 0x40($t4)
    ctx->pc = 0x1cdd54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 64), GPR_U32(ctx, 8));
label_1cdd58:
    // 0x1cdd58: 0xe5860050  swc1        $f6, 0x50($t4)
    ctx->pc = 0x1cdd58u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 80), bits); }
label_1cdd5c:
    // 0x1cdd5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cdd5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cdd60:
    // 0x1cdd60: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x1cdd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
label_1cdd64:
    // 0x1cdd64: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1cdd64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_1cdd68:
    // 0x1cdd68: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1cdd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1cdd6c:
    // 0x1cdd6c: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x1cdd6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1cdd70:
    // 0x1cdd70: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1cdd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1cdd74:
    // 0x1cdd74: 0xe4490004  swc1        $f9, 0x4($v0)
    ctx->pc = 0x1cdd74u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1cdd78:
    // 0x1cdd78: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1cdd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cdd7c:
    // 0x1cdd7c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1cdd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_1cdd80:
    // 0x1cdd80: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1cdd80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_1cdd84:
    // 0x1cdd84: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1cdd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1cdd88:
    // 0x1cdd88: 0xad8b0070  sw          $t3, 0x70($t4)
    ctx->pc = 0x1cdd88u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 112), GPR_U32(ctx, 11));
label_1cdd8c:
    // 0x1cdd8c: 0xad8a0074  sw          $t2, 0x74($t4)
    ctx->pc = 0x1cdd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 116), GPR_U32(ctx, 10));
label_1cdd90:
    // 0x1cdd90: 0xe5aaeb50  swc1        $f10, -0x14B0($t5)
    ctx->pc = 0x1cdd90u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294962000), bits); }
label_1cdd94:
    // 0x1cdd94: 0x8d24cdb4  lw          $a0, -0x324C($t1)
    ctx->pc = 0x1cdd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954420)));
label_1cdd98:
    // 0x1cdd98: 0xe5810004  swc1        $f1, 0x4($t4)
    ctx->pc = 0x1cdd98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_1cdd9c:
    // 0x1cdd9c: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x1cdd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_1cdda0:
    // 0x1cdda0: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x1cdda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
label_1cdda4:
    // 0x1cdda4: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x1cdda4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_1cdda8:
    // 0x1cdda8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1cdda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1cddac:
    // 0x1cddac: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1cddacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1cddb0:
    // 0x1cddb0: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1cddb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1cddb4:
    // 0x1cddb4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1cddb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1cddb8:
    // 0x1cddb8: 0xe5890060  swc1        $f9, 0x60($t4)
    ctx->pc = 0x1cddb8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 96), bits); }
label_1cddbc:
    // 0x1cddbc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cddc0:
    // 0x1cddc0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1cddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1cddc4:
    // 0x1cddc4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1cddc8:
    if (ctx->pc == 0x1CDDC8u) {
        ctx->pc = 0x1CDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDC4u;
        // 0x1cddc8: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDCCu;
        goto label_1cddcc;
    }
    ctx->pc = 0x1CDDC4u;
    {
        const bool branch_taken_0x1cddc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDC4u;
        // 0x1cddc8: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cddc4) {
            ctx->pc = 0x1CDE64u;
            goto label_1cde64;
        }
    }
    ctx->pc = 0x1CDDCCu;
label_1cddcc:
    // 0x1cddcc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1cddd0:
    if (ctx->pc == 0x1CDDD0u) {
        ctx->pc = 0x1CDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDCCu;
        // 0x1cddd0: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDD4u;
        goto label_1cddd4;
    }
    ctx->pc = 0x1CDDCCu;
    {
        const bool branch_taken_0x1cddcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDCCu;
        // 0x1cddd0: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cddcc) {
            ctx->pc = 0x1CDE00u;
            goto label_1cde00;
        }
    }
    ctx->pc = 0x1CDDD4u;
label_1cddd4:
    // 0x1cddd4: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_1cddd8:
    if (ctx->pc == 0x1CDDD8u) {
        ctx->pc = 0x1CDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDD4u;
        // 0x1cddd8: 0x8e420068  lw          $v0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDDCu;
        goto label_1cdddc;
    }
    ctx->pc = 0x1CDDD4u;
    {
        const bool branch_taken_0x1cddd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cddd4) {
            ctx->pc = 0x1CDDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDDD4u;
            // 0x1cddd8: 0x8e420068  lw          $v0, 0x68($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDEB8u;
            goto label_1cdeb8;
        }
    }
    ctx->pc = 0x1CDDDCu;
label_1cdddc:
    // 0x1cdddc: 0x3c01bdc2  lui         $at, 0xBDC2
    ctx->pc = 0x1cdddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48578 << 16));
label_1cdde0:
    // 0x1cdde0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1cdde0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_1cdde4:
    // 0x1cdde4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdde4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdde8:
    // 0x1cdde8: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x1cdde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
label_1cddec:
    // 0x1cddec: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cddecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1cddf0:
    // 0x1cddf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cddf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cddf4:
    // 0x1cddf4: 0xe5a0eb50  swc1        $f0, -0x14B0($t5)
    ctx->pc = 0x1cddf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294962000), bits); }
label_1cddf8:
    // 0x1cddf8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1cddfc:
    if (ctx->pc == 0x1CDDFCu) {
        ctx->pc = 0x1CDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDF8u;
        // 0x1cddfc: 0xe5810010  swc1        $f1, 0x10($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDE00u;
        goto label_1cde00;
    }
    ctx->pc = 0x1CDDF8u;
    {
        const bool branch_taken_0x1cddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDF8u;
        // 0x1cddfc: 0xe5810010  swc1        $f1, 0x10($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cddf8) {
            ctx->pc = 0x1CDEB4u;
            goto label_1cdeb4;
        }
    }
    ctx->pc = 0x1CDE00u;
label_1cde00:
    // 0x1cde00: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1cde04:
    if (ctx->pc == 0x1CDE04u) {
        ctx->pc = 0x1CDE08u;
        goto label_1cde08;
    }
    ctx->pc = 0x1CDE00u;
    {
        const bool branch_taken_0x1cde00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cde00) {
            ctx->pc = 0x1CDE3Cu;
            goto label_1cde3c;
        }
    }
    ctx->pc = 0x1CDE08u;
label_1cde08:
    // 0x1cde08: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x1cde08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_1cde0c:
    // 0x1cde0c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cde0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_1cde10:
    // 0x1cde10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cde10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cde14:
    // 0x1cde14: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x1cde14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_1cde18:
    // 0x1cde18: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1cde18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1cde1c:
    // 0x1cde1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cde1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cde20:
    // 0x1cde20: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1cde20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1cde24:
    // 0x1cde24: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cde24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1cde28:
    // 0x1cde28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cde28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cde2c:
    // 0x1cde2c: 0xe5a0eb50  swc1        $f0, -0x14B0($t5)
    ctx->pc = 0x1cde2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294962000), bits); }
label_1cde30:
    // 0x1cde30: 0xe5810010  swc1        $f1, 0x10($t4)
    ctx->pc = 0x1cde30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 16), bits); }
label_1cde34:
    // 0x1cde34: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1cde38:
    if (ctx->pc == 0x1CDE38u) {
        ctx->pc = 0x1CDE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE34u;
        // 0x1cde38: 0xe5820008  swc1        $f2, 0x8($t4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDE3Cu;
        goto label_1cde3c;
    }
    ctx->pc = 0x1CDE34u;
    {
        const bool branch_taken_0x1cde34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE34u;
        // 0x1cde38: 0xe5820008  swc1        $f2, 0x8($t4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde34) {
            ctx->pc = 0x1CDEB4u;
            goto label_1cdeb4;
        }
    }
    ctx->pc = 0x1CDE3Cu;
label_1cde3c:
    // 0x1cde3c: 0x3c013c83  lui         $at, 0x3C83
    ctx->pc = 0x1cde3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15491 << 16));
label_1cde40:
    // 0x1cde40: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1cde40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1cde44:
    // 0x1cde44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cde44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cde48:
    // 0x1cde48: 0x3c013e7a  lui         $at, 0x3E7A
    ctx->pc = 0x1cde48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15994 << 16));
label_1cde4c:
    // 0x1cde4c: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1cde4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1cde50:
    // 0x1cde50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cde50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cde54:
    // 0x1cde54: 0xe5a0eb50  swc1        $f0, -0x14B0($t5)
    ctx->pc = 0x1cde54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294962000), bits); }
label_1cde58:
    // 0x1cde58: 0xe58a0060  swc1        $f10, 0x60($t4)
    ctx->pc = 0x1cde58u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 96), bits); }
label_1cde5c:
    // 0x1cde5c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1cde60:
    if (ctx->pc == 0x1CDE60u) {
        ctx->pc = 0x1CDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE5Cu;
        // 0x1cde60: 0xe5810010  swc1        $f1, 0x10($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDE64u;
        goto label_1cde64;
    }
    ctx->pc = 0x1CDE5Cu;
    {
        const bool branch_taken_0x1cde5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE5Cu;
        // 0x1cde60: 0xe5810010  swc1        $f1, 0x10($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde5c) {
            ctx->pc = 0x1CDEB4u;
            goto label_1cdeb4;
        }
    }
    ctx->pc = 0x1CDE64u;
label_1cde64:
    // 0x1cde64: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1cde64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1cde68:
    // 0x1cde68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1cde6c:
    if (ctx->pc == 0x1CDE6Cu) {
        ctx->pc = 0x1CDE70u;
        goto label_1cde70;
    }
    ctx->pc = 0x1CDE68u;
    {
        const bool branch_taken_0x1cde68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cde68) {
            ctx->pc = 0x1CDE90u;
            goto label_1cde90;
        }
    }
    ctx->pc = 0x1CDE70u;
label_1cde70:
    // 0x1cde70: 0x3c013f68  lui         $at, 0x3F68
    ctx->pc = 0x1cde70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16232 << 16));
label_1cde74:
    // 0x1cde74: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1cde74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1cde78:
    // 0x1cde78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cde78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cde7c:
    // 0x1cde7c: 0x3c01be3d  lui         $at, 0xBE3D
    ctx->pc = 0x1cde7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48701 << 16));
label_1cde80:
    // 0x1cde80: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1cde80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_1cde84:
    // 0x1cde84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cde84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cde88:
    // 0x1cde88: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cde8c:
    if (ctx->pc == 0x1CDE8Cu) {
        ctx->pc = 0x1CDE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE88u;
        // 0x1cde8c: 0xe5810018  swc1        $f1, 0x18($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDE90u;
        goto label_1cde90;
    }
    ctx->pc = 0x1CDE88u;
    {
        const bool branch_taken_0x1cde88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE88u;
        // 0x1cde8c: 0xe5810018  swc1        $f1, 0x18($t4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde88) {
            ctx->pc = 0x1CDEACu;
            goto label_1cdeac;
        }
    }
    ctx->pc = 0x1CDE90u;
label_1cde90:
    // 0x1cde90: 0x3c013f61  lui         $at, 0x3F61
    ctx->pc = 0x1cde90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16225 << 16));
label_1cde94:
    // 0x1cde94: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1cde94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_1cde98:
    // 0x1cde98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cde98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cde9c:
    // 0x1cde9c: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1cde9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_1cdea0:
    // 0x1cdea0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cdea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1cdea4:
    // 0x1cdea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdea8:
    // 0x1cdea8: 0xe5810018  swc1        $f1, 0x18($t4)
    ctx->pc = 0x1cdea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 24), bits); }
label_1cdeac:
    // 0x1cdeac: 0xe5a0eb50  swc1        $f0, -0x14B0($t5)
    ctx->pc = 0x1cdeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294962000), bits); }
label_1cdeb0:
    // 0x1cdeb0: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x1cdeb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_1cdeb4:
    // 0x1cdeb4: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x1cdeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_1cdeb8:
    // 0x1cdeb8: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_1cdebc:
    if (ctx->pc == 0x1CDEBCu) {
        ctx->pc = 0x1CDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEB8u;
        // 0x1cdebc: 0xae4003a8  sw          $zero, 0x3A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDEC0u;
        goto label_1cdec0;
    }
    ctx->pc = 0x1CDEB8u;
    {
        const bool branch_taken_0x1cdeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEB8u;
        // 0x1cdebc: 0xae4003a8  sw          $zero, 0x3A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdeb8) {
            ctx->pc = 0x1CE048u;
            goto label_1ce048;
        }
    }
    ctx->pc = 0x1CDEC0u;
label_1cdec0:
    // 0x1cdec0: 0x8e420290  lw          $v0, 0x290($s2)
    ctx->pc = 0x1cdec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
label_1cdec4:
    // 0x1cdec4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1cdec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1cdec8:
    // 0x1cdec8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1cdec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cdecc:
    // 0x1cdecc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cdeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cded0:
    // 0x1cded0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1cded4:
    if (ctx->pc == 0x1CDED4u) {
        ctx->pc = 0x1CDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDED0u;
        // 0x1cded4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDED8u;
        goto label_1cded8;
    }
    ctx->pc = 0x1CDED0u;
    {
        const bool branch_taken_0x1cded0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDED0u;
        // 0x1cded4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cded0) {
            ctx->pc = 0x1CDEF8u;
            goto label_1cdef8;
        }
    }
    ctx->pc = 0x1CDED8u;
label_1cded8:
    // 0x1cded8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cded8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cdedc:
    // 0x1cdedc: 0x0  nop
    ctx->pc = 0x1cdedcu;
    // NOP
label_1cdee0:
    // 0x1cdee0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cdee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cdee4:
    // 0x1cdee4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cdee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cdee8:
    // 0x1cdee8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cdee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cdeec:
    // 0x1cdeec: 0x0  nop
    ctx->pc = 0x1cdeecu;
    // NOP
label_1cdef0:
    // 0x1cdef0: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
label_1cdef4:
    if (ctx->pc == 0x1CDEF4u) {
        ctx->pc = 0x1CDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEF0u;
        // 0x1cdef4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDEF8u;
        goto label_1cdef8;
    }
    ctx->pc = 0x1CDEF0u;
    {
        const bool branch_taken_0x1cdef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEF0u;
        // 0x1cdef4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdef0) {
            ctx->pc = 0x1CDEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdee0;
        }
    }
    ctx->pc = 0x1CDEF8u;
label_1cdef8:
    // 0x1cdef8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1cdef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1cdefc:
    // 0x1cdefc: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_1cdf00:
    if (ctx->pc == 0x1CDF00u) {
        ctx->pc = 0x1CDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEFCu;
        // 0x1cdf00: 0x8e420068  lw          $v0, 0x68($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDF04u;
        goto label_1cdf04;
    }
    ctx->pc = 0x1CDEFCu;
    {
        const bool branch_taken_0x1cdefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdefc) {
            ctx->pc = 0x1CDF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDEFCu;
            // 0x1cdf00: 0x8e420068  lw          $v0, 0x68($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE040u;
            goto label_1ce040;
        }
    }
    ctx->pc = 0x1CDF04u;
label_1cdf04:
    // 0x1cdf04: 0x8e450290  lw          $a1, 0x290($s2)
    ctx->pc = 0x1cdf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 656)));
label_1cdf08:
    // 0x1cdf08: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1cdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1cdf0c:
    // 0x1cdf0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cdf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdf10:
    // 0x1cdf10: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1cdf10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1cdf14:
    // 0x1cdf14: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1cdf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1cdf18:
    // 0x1cdf18: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1cdf18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1cdf1c:
    // 0x1cdf1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cdf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cdf20:
    // 0x1cdf20: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1cdf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1cdf24:
    // 0x1cdf24: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1cdf24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdf28:
    // 0x1cdf28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cdf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cdf2c:
    // 0x1cdf2c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1cdf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1cdf30:
    // 0x1cdf30: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1cdf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1cdf34:
    // 0x1cdf34: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1cdf34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cdf38:
    // 0x1cdf38: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1cdf3c:
    if (ctx->pc == 0x1CDF3Cu) {
        ctx->pc = 0x1CDF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF38u;
        // 0x1cdf3c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDF40u;
        goto label_1cdf40;
    }
    ctx->pc = 0x1CDF38u;
    {
        const bool branch_taken_0x1cdf38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF38u;
        // 0x1cdf3c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf38) {
            ctx->pc = 0x1CDF64u;
            goto label_1cdf64;
        }
    }
    ctx->pc = 0x1CDF40u;
label_1cdf40:
    // 0x1cdf40: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1cdf40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1cdf44:
    // 0x1cdf44: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1cdf44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1cdf48:
    // 0x1cdf48: 0x24c65998  addiu       $a2, $a2, 0x5998
    ctx->pc = 0x1cdf48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22936));
label_1cdf4c:
    // 0x1cdf4c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1cdf4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1cdf50:
    // 0x1cdf50: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1cdf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1cdf54:
    // 0x1cdf54: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1cdf54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1cdf58:
    // 0x1cdf58: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1cdf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1cdf5c:
    // 0x1cdf5c: 0x60f809  jalr        $v1
label_1cdf60:
    if (ctx->pc == 0x1CDF60u) {
        ctx->pc = 0x1CDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF5Cu;
        // 0x1cdf60: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDF64u;
        goto label_1cdf64;
    }
    ctx->pc = 0x1CDF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDF64u);
        ctx->pc = 0x1CDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF5Cu;
        // 0x1cdf60: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDF5Cu, 0x1CDF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDF64u;
label_1cdf64:
    // 0x1cdf64: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1cdf64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1cdf68:
    // 0x1cdf68: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1cdf68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cdf6c:
    // 0x1cdf6c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_1cdf70:
    if (ctx->pc == 0x1CDF70u) {
        ctx->pc = 0x1CDF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF6Cu;
        // 0x1cdf70: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDF74u;
        goto label_1cdf74;
    }
    ctx->pc = 0x1CDF6Cu;
    {
        const bool branch_taken_0x1cdf6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF6Cu;
        // 0x1cdf70: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf6c) {
            ctx->pc = 0x1CDFC8u;
            goto label_1cdfc8;
        }
    }
    ctx->pc = 0x1CDF74u;
label_1cdf74:
    // 0x1cdf74: 0xc06ec94  jal         func_1BB250
label_1cdf78:
    if (ctx->pc == 0x1CDF78u) {
        ctx->pc = 0x1CDF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF74u;
        // 0x1cdf78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDF7Cu;
        goto label_1cdf7c;
    }
    ctx->pc = 0x1CDF74u;
    SET_GPR_U32(ctx, 31, 0x1CDF7Cu);
    ctx->pc = 0x1CDF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF74u;
    // 0x1cdf78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1CDF74u, 0x1CDF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF7Cu;
label_1cdf7c:
    // 0x1cdf7c: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x1cdf7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_1cdf80:
    // 0x1cdf80: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cdf80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1cdf84:
    // 0x1cdf84: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1cdf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_1cdf88:
    // 0x1cdf88: 0xc06c590  jal         func_1B1640
label_1cdf8c:
    if (ctx->pc == 0x1CDF8Cu) {
        ctx->pc = 0x1CDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF88u;
        // 0x1cdf8c: 0xa24203ac  sb          $v0, 0x3AC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 940), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDF90u;
        goto label_1cdf90;
    }
    ctx->pc = 0x1CDF88u;
    SET_GPR_U32(ctx, 31, 0x1CDF90u);
    ctx->pc = 0x1CDF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF88u;
    // 0x1cdf8c: 0xa24203ac  sb          $v0, 0x3AC($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 940), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1CDF88u, 0x1CDF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF90u;
label_1cdf90:
    // 0x1cdf90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1cdf94:
    if (ctx->pc == 0x1CDF94u) {
        ctx->pc = 0x1CDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF90u;
        // 0x1cdf94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDF98u;
        goto label_1cdf98;
    }
    ctx->pc = 0x1CDF90u;
    {
        const bool branch_taken_0x1cdf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF90u;
        // 0x1cdf94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf90) {
            ctx->pc = 0x1CDFB0u;
            goto label_1cdfb0;
        }
    }
    ctx->pc = 0x1CDF98u;
label_1cdf98:
    // 0x1cdf98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cdf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cdf9c:
    // 0x1cdf9c: 0xc44cebd0  lwc1        $f12, -0x1430($v0)
    ctx->pc = 0x1cdf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cdfa0:
    // 0x1cdfa0: 0xc06ece4  jal         func_1BB390
label_1cdfa4:
    if (ctx->pc == 0x1CDFA4u) {
        ctx->pc = 0x1CDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFA0u;
        // 0x1cdfa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDFA8u;
        goto label_1cdfa8;
    }
    ctx->pc = 0x1CDFA0u;
    SET_GPR_U32(ctx, 31, 0x1CDFA8u);
    ctx->pc = 0x1CDFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFA0u;
    // 0x1cdfa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1CDFA0u, 0x1CDFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFA8u;
label_1cdfa8:
    // 0x1cdfa8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cdfac:
    if (ctx->pc == 0x1CDFACu) {
        ctx->pc = 0x1CDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFA8u;
        // 0x1cdfac: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDFB0u;
        goto label_1cdfb0;
    }
    ctx->pc = 0x1CDFA8u;
    {
        const bool branch_taken_0x1cdfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFA8u;
        // 0x1cdfac: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfa8) {
            ctx->pc = 0x1CDFC8u;
            goto label_1cdfc8;
        }
    }
    ctx->pc = 0x1CDFB0u;
label_1cdfb0:
    // 0x1cdfb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cdfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cdfb4:
    // 0x1cdfb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cdfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cdfb8:
    // 0x1cdfb8: 0xc44cebd8  lwc1        $f12, -0x1428($v0)
    ctx->pc = 0x1cdfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cdfbc:
    // 0x1cdfbc: 0xc06ece4  jal         func_1BB390
label_1cdfc0:
    if (ctx->pc == 0x1CDFC0u) {
        ctx->pc = 0x1CDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFBCu;
        // 0x1cdfc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDFC4u;
        goto label_1cdfc4;
    }
    ctx->pc = 0x1CDFBCu;
    SET_GPR_U32(ctx, 31, 0x1CDFC4u);
    ctx->pc = 0x1CDFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFBCu;
    // 0x1cdfc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1CDFBCu, 0x1CDFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFC4u;
label_1cdfc4:
    // 0x1cdfc4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1cdfc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1cdfc8:
    // 0x1cdfc8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1cdfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1cdfcc:
    // 0x1cdfcc: 0xc04444c  jal         func_111130
label_1cdfd0:
    if (ctx->pc == 0x1CDFD0u) {
        ctx->pc = 0x1CDFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFCCu;
        // 0x1cdfd0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDFD4u;
        goto label_1cdfd4;
    }
    ctx->pc = 0x1CDFCCu;
    SET_GPR_U32(ctx, 31, 0x1CDFD4u);
    ctx->pc = 0x1CDFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFCCu;
    // 0x1cdfd0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1CDFCCu, 0x1CDFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFD4u;
label_1cdfd4:
    // 0x1cdfd4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1cdfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1cdfd8:
    // 0x1cdfd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cdfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cdfdc:
    // 0x1cdfdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cdfdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdfe0:
    // 0x1cdfe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdfe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdfe4:
    // 0x1cdfe4: 0xc043f36  jal         func_10FCD8
label_1cdfe8:
    if (ctx->pc == 0x1CDFE8u) {
        ctx->pc = 0x1CDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFE4u;
        // 0x1cdfe8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDFECu;
        goto label_1cdfec;
    }
    ctx->pc = 0x1CDFE4u;
    SET_GPR_U32(ctx, 31, 0x1CDFECu);
    ctx->pc = 0x1CDFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFE4u;
    // 0x1cdfe8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1CDFE4u, 0x1CDFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFECu;
label_1cdfec:
    // 0x1cdfec: 0x8e450294  lw          $a1, 0x294($s2)
    ctx->pc = 0x1cdfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 660)));
label_1cdff0:
    // 0x1cdff0: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x1cdff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1cdff4:
    // 0x1cdff4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cdff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cdff8:
    // 0x1cdff8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cdff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cdffc:
    // 0x1cdffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cdffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ce000:
    // 0x1ce000: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ce000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ce004:
    // 0x1ce004: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1ce004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_1ce008:
    // 0x1ce008: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x1ce008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_1ce00c:
    // 0x1ce00c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1ce00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ce010:
    // 0x1ce010: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1ce010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ce014:
    // 0x1ce014: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1ce018:
    if (ctx->pc == 0x1CE018u) {
        ctx->pc = 0x1CE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE014u;
        // 0x1ce018: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE01Cu;
        goto label_1ce01c;
    }
    ctx->pc = 0x1CE014u;
    {
        const bool branch_taken_0x1ce014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce014) {
            ctx->pc = 0x1CE018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE014u;
            // 0x1ce018: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE034u;
            goto label_1ce034;
        }
    }
    ctx->pc = 0x1CE01Cu;
label_1ce01c:
    // 0x1ce01c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1ce01cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ce020:
    // 0x1ce020: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1ce024:
    if (ctx->pc == 0x1CE024u) {
        ctx->pc = 0x1CE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE020u;
        // 0x1ce024: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE028u;
        goto label_1ce028;
    }
    ctx->pc = 0x1CE020u;
    {
        const bool branch_taken_0x1ce020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce020) {
            ctx->pc = 0x1CE024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE020u;
            // 0x1ce024: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE028u;
            goto label_1ce028;
        }
    }
    ctx->pc = 0x1CE028u;
label_1ce028:
    // 0x1ce028: 0x1010  mfhi        $v0
    ctx->pc = 0x1ce028u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ce02c:
    // 0x1ce02c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1ce02cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_1ce030:
    // 0x1ce030: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1ce030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1ce034:
    // 0x1ce034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ce034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ce038:
    // 0x1ce038: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1ce038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1ce03c:
    // 0x1ce03c: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x1ce03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_1ce040:
    // 0x1ce040: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_1ce044:
    if (ctx->pc == 0x1CE044u) {
        ctx->pc = 0x1CE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE040u;
        // 0x1ce044: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE048u;
        goto label_1ce048;
    }
    ctx->pc = 0x1CE040u;
    {
        const bool branch_taken_0x1ce040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE040u;
        // 0x1ce044: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce040) {
            ctx->pc = 0x1CE1C0u;
            goto label_1ce1c0;
        }
    }
    ctx->pc = 0x1CE048u;
label_1ce048:
    // 0x1ce048: 0xc06ecbc  jal         func_1BB2F0
label_1ce04c:
    if (ctx->pc == 0x1CE04Cu) {
        ctx->pc = 0x1CE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE048u;
        // 0x1ce04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE050u;
        goto label_1ce050;
    }
    ctx->pc = 0x1CE048u;
    SET_GPR_U32(ctx, 31, 0x1CE050u);
    ctx->pc = 0x1CE04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE048u;
    // 0x1ce04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB2F0u, 0x1CE048u, 0x1CE050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE050u;
label_1ce050:
    // 0x1ce050: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1ce054:
    if (ctx->pc == 0x1CE054u) {
        ctx->pc = 0x1CE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE050u;
        // 0x1ce054: 0x8e4303a4  lw          $v1, 0x3A4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 932)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE058u;
        goto label_1ce058;
    }
    ctx->pc = 0x1CE050u;
    {
        const bool branch_taken_0x1ce050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce050) {
            ctx->pc = 0x1CE054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE050u;
            // 0x1ce054: 0x8e4303a4  lw          $v1, 0x3A4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 932)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE074u;
            goto label_1ce074;
        }
    }
    ctx->pc = 0x1CE058u;
label_1ce058:
    // 0x1ce058: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ce058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ce05c:
    // 0x1ce05c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1ce05cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1ce060:
    // 0x1ce060: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1ce060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1ce064:
    // 0x1ce064: 0x60f809  jalr        $v1
label_1ce068:
    if (ctx->pc == 0x1CE068u) {
        ctx->pc = 0x1CE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE064u;
        // 0x1ce068: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE06Cu;
        goto label_1ce06c;
    }
    ctx->pc = 0x1CE064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CE06Cu);
        ctx->pc = 0x1CE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE064u;
        // 0x1ce068: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE064u, 0x1CE06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE06Cu;
label_1ce06c:
    // 0x1ce06c: 0x10000054  b           . + 4 + (0x54 << 2)
label_1ce070:
    if (ctx->pc == 0x1CE070u) {
        ctx->pc = 0x1CE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE06Cu;
        // 0x1ce070: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE074u;
        goto label_1ce074;
    }
    ctx->pc = 0x1CE06Cu;
    {
        const bool branch_taken_0x1ce06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE06Cu;
        // 0x1ce070: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce06c) {
            ctx->pc = 0x1CE1C0u;
            goto label_1ce1c0;
        }
    }
    ctx->pc = 0x1CE074u;
label_1ce074:
    // 0x1ce074: 0x265002a0  addiu       $s0, $s2, 0x2A0
    ctx->pc = 0x1ce074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
label_1ce078:
    // 0x1ce078: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x1ce078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1ce07c:
    // 0x1ce07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce080:
    // 0x1ce080: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1ce080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1ce084:
    // 0x1ce084: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1ce084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce088:
    // 0x1ce088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ce088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ce08c:
    // 0x1ce08c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ce08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1ce090:
    // 0x1ce090: 0xc068992  jal         func_1A2648
label_1ce094:
    if (ctx->pc == 0x1CE094u) {
        ctx->pc = 0x1CE094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE090u;
        // 0x1ce094: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE098u;
        goto label_1ce098;
    }
    ctx->pc = 0x1CE090u;
    SET_GPR_U32(ctx, 31, 0x1CE098u);
    ctx->pc = 0x1CE094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE090u;
    // 0x1ce094: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1CE090u, 0x1CE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE098u;
label_1ce098:
    // 0x1ce098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce09c:
    // 0x1ce09c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ce0a0:
    // 0x1ce0a0: 0xae4201b8  sw          $v0, 0x1B8($s2)
    ctx->pc = 0x1ce0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 2));
label_1ce0a4:
    // 0x1ce0a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ce0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ce0a8:
    // 0x1ce0a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce0ac:
    // 0x1ce0ac: 0xc06e4ea  jal         func_1B93A8
label_1ce0b0:
    if (ctx->pc == 0x1CE0B0u) {
        ctx->pc = 0x1CE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0ACu;
        // 0x1ce0b0: 0xae420188  sw          $v0, 0x188($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE0B4u;
        goto label_1ce0b4;
    }
    ctx->pc = 0x1CE0ACu;
    SET_GPR_U32(ctx, 31, 0x1CE0B4u);
    ctx->pc = 0x1CE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE0ACu;
    // 0x1ce0b0: 0xae420188  sw          $v0, 0x188($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1CE0ACu, 0x1CE0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0B4u;
label_1ce0b4:
    // 0x1ce0b4: 0x8e4203a4  lw          $v0, 0x3A4($s2)
    ctx->pc = 0x1ce0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 932)));
label_1ce0b8:
    // 0x1ce0b8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1ce0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ce0bc:
    // 0x1ce0bc: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x1ce0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ce0c0:
    // 0x1ce0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce0c4:
    // 0x1ce0c4: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1ce0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce0c8:
    // 0x1ce0c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ce0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ce0cc:
    // 0x1ce0cc: 0xc4430054  lwc1        $f3, 0x54($v0)
    ctx->pc = 0x1ce0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ce0d0:
    // 0x1ce0d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ce0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce0d4:
    // 0x1ce0d4: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x1ce0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ce0d8:
    // 0x1ce0d8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1ce0d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1ce0dc:
    // 0x1ce0dc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1ce0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce0e0:
    // 0x1ce0e0: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x1ce0e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_1ce0e4:
    // 0x1ce0e4: 0xc4460050  lwc1        $f6, 0x50($v0)
    ctx->pc = 0x1ce0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ce0e8:
    // 0x1ce0e8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x1ce0e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_1ce0ec:
    // 0x1ce0ec: 0xc4420060  lwc1        $f2, 0x60($v0)
    ctx->pc = 0x1ce0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ce0f0:
    // 0x1ce0f0: 0xc4430064  lwc1        $f3, 0x64($v0)
    ctx->pc = 0x1ce0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ce0f4:
    // 0x1ce0f4: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x1ce0f4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_1ce0f8:
    // 0x1ce0f8: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x1ce0f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1ce0fc:
    // 0x1ce0fc: 0x46020580  add.s       $f22, $f0, $f2
    ctx->pc = 0x1ce0fcu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ce100:
    // 0x1ce100: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ce100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1ce104:
    // 0x1ce104: 0x46030d00  add.s       $f20, $f1, $f3
    ctx->pc = 0x1ce104u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1ce108:
    // 0x1ce108: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ce108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ce10c:
    // 0x1ce10c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ce10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ce110:
    // 0x1ce110: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x1ce110u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ce114:
    // 0x1ce114: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x1ce114u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1ce118:
    // 0x1ce118: 0x4602a0c2  mul.s       $f3, $f20, $f2
    ctx->pc = 0x1ce118u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_1ce11c:
    // 0x1ce11c: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x1ce11cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
label_1ce120:
    // 0x1ce120: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1ce120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce124:
    // 0x1ce124: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1ce124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce128:
    // 0x1ce128: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ce128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1ce12c:
    // 0x1ce12c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1ce12cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1ce130:
    // 0x1ce130: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1ce130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ce134:
    // 0x1ce134: 0xc068818  jal         func_1A2060
label_1ce138:
    if (ctx->pc == 0x1CE138u) {
        ctx->pc = 0x1CE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE134u;
        // 0x1ce138: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE13Cu;
        goto label_1ce13c;
    }
    ctx->pc = 0x1CE134u;
    SET_GPR_U32(ctx, 31, 0x1CE13Cu);
    ctx->pc = 0x1CE138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE134u;
    // 0x1ce138: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1CE134u, 0x1CE13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE13Cu;
label_1ce13c:
    // 0x1ce13c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ce13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1ce140:
    // 0x1ce140: 0xc06c590  jal         func_1B1640
label_1ce144:
    if (ctx->pc == 0x1CE144u) {
        ctx->pc = 0x1CE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE140u;
        // 0x1ce144: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE148u;
        goto label_1ce148;
    }
    ctx->pc = 0x1CE140u;
    SET_GPR_U32(ctx, 31, 0x1CE148u);
    ctx->pc = 0x1CE144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE140u;
    // 0x1ce144: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1CE140u, 0x1CE148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE148u;
label_1ce148:
    // 0x1ce148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ce14c:
    if (ctx->pc == 0x1CE14Cu) {
        ctx->pc = 0x1CE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE148u;
        // 0x1ce14c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE150u;
        goto label_1ce150;
    }
    ctx->pc = 0x1CE148u;
    {
        const bool branch_taken_0x1ce148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE148u;
        // 0x1ce14c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce148) {
            ctx->pc = 0x1CE160u;
            goto label_1ce160;
        }
    }
    ctx->pc = 0x1CE150u;
label_1ce150:
    // 0x1ce150: 0x8e4203a4  lw          $v0, 0x3A4($s2)
    ctx->pc = 0x1ce150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 932)));
label_1ce154:
    // 0x1ce154: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1ce154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce158:
    // 0x1ce158: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ce15c:
    if (ctx->pc == 0x1CE15Cu) {
        ctx->pc = 0x1CE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE158u;
        // 0x1ce15c: 0xc4410010  lwc1        $f1, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE160u;
        goto label_1ce160;
    }
    ctx->pc = 0x1CE158u;
    {
        const bool branch_taken_0x1ce158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE158u;
        // 0x1ce15c: 0xc4410010  lwc1        $f1, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce158) {
            ctx->pc = 0x1CE16Cu;
            goto label_1ce16c;
        }
    }
    ctx->pc = 0x1CE160u;
label_1ce160:
    // 0x1ce160: 0x8e4203a4  lw          $v0, 0x3A4($s2)
    ctx->pc = 0x1ce160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 932)));
label_1ce164:
    // 0x1ce164: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ce164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce168:
    // 0x1ce168: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ce168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce16c:
    // 0x1ce16c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1ce16cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1ce170:
    // 0x1ce170: 0xe4b5000c  swc1        $f21, 0xC($a1)
    ctx->pc = 0x1ce170u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1ce174:
    // 0x1ce174: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1ce174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ce178:
    // 0x1ce178: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ce178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1ce17c:
    // 0x1ce17c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1ce17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1ce180:
    // 0x1ce180: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ce180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce184:
    // 0x1ce184: 0xc06e4dc  jal         func_1B9370
label_1ce188:
    if (ctx->pc == 0x1CE188u) {
        ctx->pc = 0x1CE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE184u;
        // 0x1ce188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE18Cu;
        goto label_1ce18c;
    }
    ctx->pc = 0x1CE184u;
    SET_GPR_U32(ctx, 31, 0x1CE18Cu);
    ctx->pc = 0x1CE188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE184u;
    // 0x1ce188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1CE184u, 0x1CE18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE18Cu;
label_1ce18c:
    // 0x1ce18c: 0xc06e552  jal         func_1B9548
label_1ce190:
    if (ctx->pc == 0x1CE190u) {
        ctx->pc = 0x1CE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE18Cu;
        // 0x1ce190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE194u;
        goto label_1ce194;
    }
    ctx->pc = 0x1CE18Cu;
    SET_GPR_U32(ctx, 31, 0x1CE194u);
    ctx->pc = 0x1CE190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE18Cu;
    // 0x1ce190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1CE18Cu, 0x1CE194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE194u;
label_1ce194:
    // 0x1ce194: 0xc06886e  jal         func_1A21B8
label_1ce198:
    if (ctx->pc == 0x1CE198u) {
        ctx->pc = 0x1CE198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE194u;
        // 0x1ce198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE19Cu;
        goto label_1ce19c;
    }
    ctx->pc = 0x1CE194u;
    SET_GPR_U32(ctx, 31, 0x1CE19Cu);
    ctx->pc = 0x1CE198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE194u;
    // 0x1ce198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1CE194u, 0x1CE19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE19Cu;
label_1ce19c:
    // 0x1ce19c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ce19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ce1a0:
    // 0x1ce1a0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ce1a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1ce1a4:
    // 0x1ce1a4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ce1a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1ce1a8:
    // 0x1ce1a8: 0xc068848  jal         func_1A2120
label_1ce1ac:
    if (ctx->pc == 0x1CE1ACu) {
        ctx->pc = 0x1CE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1A8u;
        // 0x1ce1ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE1B0u;
        goto label_1ce1b0;
    }
    ctx->pc = 0x1CE1A8u;
    SET_GPR_U32(ctx, 31, 0x1CE1B0u);
    ctx->pc = 0x1CE1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE1A8u;
    // 0x1ce1ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1CE1A8u, 0x1CE1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE1B0u;
label_1ce1b0:
    // 0x1ce1b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce1b4:
    // 0x1ce1b4: 0xe65403b0  swc1        $f20, 0x3B0($s2)
    ctx->pc = 0x1ce1b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 944), bits); }
label_1ce1b8:
    // 0x1ce1b8: 0xae4203a8  sw          $v0, 0x3A8($s2)
    ctx->pc = 0x1ce1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 936), GPR_U32(ctx, 2));
label_1ce1bc:
    // 0x1ce1bc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1ce1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ce1c0:
    // 0x1ce1c0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1ce1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ce1c4:
    // 0x1ce1c4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1ce1c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ce1c8:
    // 0x1ce1c8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ce1c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ce1cc:
    // 0x1ce1cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ce1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ce1d0:
    // 0x1ce1d0: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x1ce1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1ce1d4:
    // 0x1ce1d4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1ce1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ce1d8:
    // 0x1ce1d8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1ce1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ce1dc:
    // 0x1ce1dc: 0x3e00008  jr          $ra
label_1ce1e0:
    if (ctx->pc == 0x1CE1E0u) {
        ctx->pc = 0x1CE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1DCu;
        // 0x1ce1e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE1E4u;
        goto label_1ce1e4;
    }
    ctx->pc = 0x1CE1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1DCu;
        // 0x1ce1e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE1E4u;
label_1ce1e4:
    // 0x1ce1e4: 0x0  nop
    ctx->pc = 0x1ce1e4u;
    // NOP
    ctx->pc = 0x1ce1e8u;
}
