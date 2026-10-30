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

// Function: sub_002CDBC0
// Address: 0x2cdbc0 - 0x2ce0e0
void sub_002CDBC0_0x2cdbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDBC0_0x2cdbc0");
#endif

    switch (ctx->pc) {
        case 0x2cdbc0u: goto label_2cdbc0;
        case 0x2cdbc4u: goto label_2cdbc4;
        case 0x2cdbc8u: goto label_2cdbc8;
        case 0x2cdbccu: goto label_2cdbcc;
        case 0x2cdbd0u: goto label_2cdbd0;
        case 0x2cdbd4u: goto label_2cdbd4;
        case 0x2cdbd8u: goto label_2cdbd8;
        case 0x2cdbdcu: goto label_2cdbdc;
        case 0x2cdbe0u: goto label_2cdbe0;
        case 0x2cdbe4u: goto label_2cdbe4;
        case 0x2cdbe8u: goto label_2cdbe8;
        case 0x2cdbecu: goto label_2cdbec;
        case 0x2cdbf0u: goto label_2cdbf0;
        case 0x2cdbf4u: goto label_2cdbf4;
        case 0x2cdbf8u: goto label_2cdbf8;
        case 0x2cdbfcu: goto label_2cdbfc;
        case 0x2cdc00u: goto label_2cdc00;
        case 0x2cdc04u: goto label_2cdc04;
        case 0x2cdc08u: goto label_2cdc08;
        case 0x2cdc0cu: goto label_2cdc0c;
        case 0x2cdc10u: goto label_2cdc10;
        case 0x2cdc14u: goto label_2cdc14;
        case 0x2cdc18u: goto label_2cdc18;
        case 0x2cdc1cu: goto label_2cdc1c;
        case 0x2cdc20u: goto label_2cdc20;
        case 0x2cdc24u: goto label_2cdc24;
        case 0x2cdc28u: goto label_2cdc28;
        case 0x2cdc2cu: goto label_2cdc2c;
        case 0x2cdc30u: goto label_2cdc30;
        case 0x2cdc34u: goto label_2cdc34;
        case 0x2cdc38u: goto label_2cdc38;
        case 0x2cdc3cu: goto label_2cdc3c;
        case 0x2cdc40u: goto label_2cdc40;
        case 0x2cdc44u: goto label_2cdc44;
        case 0x2cdc48u: goto label_2cdc48;
        case 0x2cdc4cu: goto label_2cdc4c;
        case 0x2cdc50u: goto label_2cdc50;
        case 0x2cdc54u: goto label_2cdc54;
        case 0x2cdc58u: goto label_2cdc58;
        case 0x2cdc5cu: goto label_2cdc5c;
        case 0x2cdc60u: goto label_2cdc60;
        case 0x2cdc64u: goto label_2cdc64;
        case 0x2cdc68u: goto label_2cdc68;
        case 0x2cdc6cu: goto label_2cdc6c;
        case 0x2cdc70u: goto label_2cdc70;
        case 0x2cdc74u: goto label_2cdc74;
        case 0x2cdc78u: goto label_2cdc78;
        case 0x2cdc7cu: goto label_2cdc7c;
        case 0x2cdc80u: goto label_2cdc80;
        case 0x2cdc84u: goto label_2cdc84;
        case 0x2cdc88u: goto label_2cdc88;
        case 0x2cdc8cu: goto label_2cdc8c;
        case 0x2cdc90u: goto label_2cdc90;
        case 0x2cdc94u: goto label_2cdc94;
        case 0x2cdc98u: goto label_2cdc98;
        case 0x2cdc9cu: goto label_2cdc9c;
        case 0x2cdca0u: goto label_2cdca0;
        case 0x2cdca4u: goto label_2cdca4;
        case 0x2cdca8u: goto label_2cdca8;
        case 0x2cdcacu: goto label_2cdcac;
        case 0x2cdcb0u: goto label_2cdcb0;
        case 0x2cdcb4u: goto label_2cdcb4;
        case 0x2cdcb8u: goto label_2cdcb8;
        case 0x2cdcbcu: goto label_2cdcbc;
        case 0x2cdcc0u: goto label_2cdcc0;
        case 0x2cdcc4u: goto label_2cdcc4;
        case 0x2cdcc8u: goto label_2cdcc8;
        case 0x2cdcccu: goto label_2cdccc;
        case 0x2cdcd0u: goto label_2cdcd0;
        case 0x2cdcd4u: goto label_2cdcd4;
        case 0x2cdcd8u: goto label_2cdcd8;
        case 0x2cdcdcu: goto label_2cdcdc;
        case 0x2cdce0u: goto label_2cdce0;
        case 0x2cdce4u: goto label_2cdce4;
        case 0x2cdce8u: goto label_2cdce8;
        case 0x2cdcecu: goto label_2cdcec;
        case 0x2cdcf0u: goto label_2cdcf0;
        case 0x2cdcf4u: goto label_2cdcf4;
        case 0x2cdcf8u: goto label_2cdcf8;
        case 0x2cdcfcu: goto label_2cdcfc;
        case 0x2cdd00u: goto label_2cdd00;
        case 0x2cdd04u: goto label_2cdd04;
        case 0x2cdd08u: goto label_2cdd08;
        case 0x2cdd0cu: goto label_2cdd0c;
        case 0x2cdd10u: goto label_2cdd10;
        case 0x2cdd14u: goto label_2cdd14;
        case 0x2cdd18u: goto label_2cdd18;
        case 0x2cdd1cu: goto label_2cdd1c;
        case 0x2cdd20u: goto label_2cdd20;
        case 0x2cdd24u: goto label_2cdd24;
        case 0x2cdd28u: goto label_2cdd28;
        case 0x2cdd2cu: goto label_2cdd2c;
        case 0x2cdd30u: goto label_2cdd30;
        case 0x2cdd34u: goto label_2cdd34;
        case 0x2cdd38u: goto label_2cdd38;
        case 0x2cdd3cu: goto label_2cdd3c;
        case 0x2cdd40u: goto label_2cdd40;
        case 0x2cdd44u: goto label_2cdd44;
        case 0x2cdd48u: goto label_2cdd48;
        case 0x2cdd4cu: goto label_2cdd4c;
        case 0x2cdd50u: goto label_2cdd50;
        case 0x2cdd54u: goto label_2cdd54;
        case 0x2cdd58u: goto label_2cdd58;
        case 0x2cdd5cu: goto label_2cdd5c;
        case 0x2cdd60u: goto label_2cdd60;
        case 0x2cdd64u: goto label_2cdd64;
        case 0x2cdd68u: goto label_2cdd68;
        case 0x2cdd6cu: goto label_2cdd6c;
        case 0x2cdd70u: goto label_2cdd70;
        case 0x2cdd74u: goto label_2cdd74;
        case 0x2cdd78u: goto label_2cdd78;
        case 0x2cdd7cu: goto label_2cdd7c;
        case 0x2cdd80u: goto label_2cdd80;
        case 0x2cdd84u: goto label_2cdd84;
        case 0x2cdd88u: goto label_2cdd88;
        case 0x2cdd8cu: goto label_2cdd8c;
        case 0x2cdd90u: goto label_2cdd90;
        case 0x2cdd94u: goto label_2cdd94;
        case 0x2cdd98u: goto label_2cdd98;
        case 0x2cdd9cu: goto label_2cdd9c;
        case 0x2cdda0u: goto label_2cdda0;
        case 0x2cdda4u: goto label_2cdda4;
        case 0x2cdda8u: goto label_2cdda8;
        case 0x2cddacu: goto label_2cddac;
        case 0x2cddb0u: goto label_2cddb0;
        case 0x2cddb4u: goto label_2cddb4;
        case 0x2cddb8u: goto label_2cddb8;
        case 0x2cddbcu: goto label_2cddbc;
        case 0x2cddc0u: goto label_2cddc0;
        case 0x2cddc4u: goto label_2cddc4;
        case 0x2cddc8u: goto label_2cddc8;
        case 0x2cddccu: goto label_2cddcc;
        case 0x2cddd0u: goto label_2cddd0;
        case 0x2cddd4u: goto label_2cddd4;
        case 0x2cddd8u: goto label_2cddd8;
        case 0x2cdddcu: goto label_2cdddc;
        case 0x2cdde0u: goto label_2cdde0;
        case 0x2cdde4u: goto label_2cdde4;
        case 0x2cdde8u: goto label_2cdde8;
        case 0x2cddecu: goto label_2cddec;
        case 0x2cddf0u: goto label_2cddf0;
        case 0x2cddf4u: goto label_2cddf4;
        case 0x2cddf8u: goto label_2cddf8;
        case 0x2cddfcu: goto label_2cddfc;
        case 0x2cde00u: goto label_2cde00;
        case 0x2cde04u: goto label_2cde04;
        case 0x2cde08u: goto label_2cde08;
        case 0x2cde0cu: goto label_2cde0c;
        case 0x2cde10u: goto label_2cde10;
        case 0x2cde14u: goto label_2cde14;
        case 0x2cde18u: goto label_2cde18;
        case 0x2cde1cu: goto label_2cde1c;
        case 0x2cde20u: goto label_2cde20;
        case 0x2cde24u: goto label_2cde24;
        case 0x2cde28u: goto label_2cde28;
        case 0x2cde2cu: goto label_2cde2c;
        case 0x2cde30u: goto label_2cde30;
        case 0x2cde34u: goto label_2cde34;
        case 0x2cde38u: goto label_2cde38;
        case 0x2cde3cu: goto label_2cde3c;
        case 0x2cde40u: goto label_2cde40;
        case 0x2cde44u: goto label_2cde44;
        case 0x2cde48u: goto label_2cde48;
        case 0x2cde4cu: goto label_2cde4c;
        case 0x2cde50u: goto label_2cde50;
        case 0x2cde54u: goto label_2cde54;
        case 0x2cde58u: goto label_2cde58;
        case 0x2cde5cu: goto label_2cde5c;
        case 0x2cde60u: goto label_2cde60;
        case 0x2cde64u: goto label_2cde64;
        case 0x2cde68u: goto label_2cde68;
        case 0x2cde6cu: goto label_2cde6c;
        case 0x2cde70u: goto label_2cde70;
        case 0x2cde74u: goto label_2cde74;
        case 0x2cde78u: goto label_2cde78;
        case 0x2cde7cu: goto label_2cde7c;
        case 0x2cde80u: goto label_2cde80;
        case 0x2cde84u: goto label_2cde84;
        case 0x2cde88u: goto label_2cde88;
        case 0x2cde8cu: goto label_2cde8c;
        case 0x2cde90u: goto label_2cde90;
        case 0x2cde94u: goto label_2cde94;
        case 0x2cde98u: goto label_2cde98;
        case 0x2cde9cu: goto label_2cde9c;
        case 0x2cdea0u: goto label_2cdea0;
        case 0x2cdea4u: goto label_2cdea4;
        case 0x2cdea8u: goto label_2cdea8;
        case 0x2cdeacu: goto label_2cdeac;
        case 0x2cdeb0u: goto label_2cdeb0;
        case 0x2cdeb4u: goto label_2cdeb4;
        case 0x2cdeb8u: goto label_2cdeb8;
        case 0x2cdebcu: goto label_2cdebc;
        case 0x2cdec0u: goto label_2cdec0;
        case 0x2cdec4u: goto label_2cdec4;
        case 0x2cdec8u: goto label_2cdec8;
        case 0x2cdeccu: goto label_2cdecc;
        case 0x2cded0u: goto label_2cded0;
        case 0x2cded4u: goto label_2cded4;
        case 0x2cded8u: goto label_2cded8;
        case 0x2cdedcu: goto label_2cdedc;
        case 0x2cdee0u: goto label_2cdee0;
        case 0x2cdee4u: goto label_2cdee4;
        case 0x2cdee8u: goto label_2cdee8;
        case 0x2cdeecu: goto label_2cdeec;
        case 0x2cdef0u: goto label_2cdef0;
        case 0x2cdef4u: goto label_2cdef4;
        case 0x2cdef8u: goto label_2cdef8;
        case 0x2cdefcu: goto label_2cdefc;
        case 0x2cdf00u: goto label_2cdf00;
        case 0x2cdf04u: goto label_2cdf04;
        case 0x2cdf08u: goto label_2cdf08;
        case 0x2cdf0cu: goto label_2cdf0c;
        case 0x2cdf10u: goto label_2cdf10;
        case 0x2cdf14u: goto label_2cdf14;
        case 0x2cdf18u: goto label_2cdf18;
        case 0x2cdf1cu: goto label_2cdf1c;
        case 0x2cdf20u: goto label_2cdf20;
        case 0x2cdf24u: goto label_2cdf24;
        case 0x2cdf28u: goto label_2cdf28;
        case 0x2cdf2cu: goto label_2cdf2c;
        case 0x2cdf30u: goto label_2cdf30;
        case 0x2cdf34u: goto label_2cdf34;
        case 0x2cdf38u: goto label_2cdf38;
        case 0x2cdf3cu: goto label_2cdf3c;
        case 0x2cdf40u: goto label_2cdf40;
        case 0x2cdf44u: goto label_2cdf44;
        case 0x2cdf48u: goto label_2cdf48;
        case 0x2cdf4cu: goto label_2cdf4c;
        case 0x2cdf50u: goto label_2cdf50;
        case 0x2cdf54u: goto label_2cdf54;
        case 0x2cdf58u: goto label_2cdf58;
        case 0x2cdf5cu: goto label_2cdf5c;
        case 0x2cdf60u: goto label_2cdf60;
        case 0x2cdf64u: goto label_2cdf64;
        case 0x2cdf68u: goto label_2cdf68;
        case 0x2cdf6cu: goto label_2cdf6c;
        case 0x2cdf70u: goto label_2cdf70;
        case 0x2cdf74u: goto label_2cdf74;
        case 0x2cdf78u: goto label_2cdf78;
        case 0x2cdf7cu: goto label_2cdf7c;
        case 0x2cdf80u: goto label_2cdf80;
        case 0x2cdf84u: goto label_2cdf84;
        case 0x2cdf88u: goto label_2cdf88;
        case 0x2cdf8cu: goto label_2cdf8c;
        case 0x2cdf90u: goto label_2cdf90;
        case 0x2cdf94u: goto label_2cdf94;
        case 0x2cdf98u: goto label_2cdf98;
        case 0x2cdf9cu: goto label_2cdf9c;
        case 0x2cdfa0u: goto label_2cdfa0;
        case 0x2cdfa4u: goto label_2cdfa4;
        case 0x2cdfa8u: goto label_2cdfa8;
        case 0x2cdfacu: goto label_2cdfac;
        case 0x2cdfb0u: goto label_2cdfb0;
        case 0x2cdfb4u: goto label_2cdfb4;
        case 0x2cdfb8u: goto label_2cdfb8;
        case 0x2cdfbcu: goto label_2cdfbc;
        case 0x2cdfc0u: goto label_2cdfc0;
        case 0x2cdfc4u: goto label_2cdfc4;
        case 0x2cdfc8u: goto label_2cdfc8;
        case 0x2cdfccu: goto label_2cdfcc;
        case 0x2cdfd0u: goto label_2cdfd0;
        case 0x2cdfd4u: goto label_2cdfd4;
        case 0x2cdfd8u: goto label_2cdfd8;
        case 0x2cdfdcu: goto label_2cdfdc;
        case 0x2cdfe0u: goto label_2cdfe0;
        case 0x2cdfe4u: goto label_2cdfe4;
        case 0x2cdfe8u: goto label_2cdfe8;
        case 0x2cdfecu: goto label_2cdfec;
        case 0x2cdff0u: goto label_2cdff0;
        case 0x2cdff4u: goto label_2cdff4;
        case 0x2cdff8u: goto label_2cdff8;
        case 0x2cdffcu: goto label_2cdffc;
        case 0x2ce000u: goto label_2ce000;
        case 0x2ce004u: goto label_2ce004;
        case 0x2ce008u: goto label_2ce008;
        case 0x2ce00cu: goto label_2ce00c;
        case 0x2ce010u: goto label_2ce010;
        case 0x2ce014u: goto label_2ce014;
        case 0x2ce018u: goto label_2ce018;
        case 0x2ce01cu: goto label_2ce01c;
        case 0x2ce020u: goto label_2ce020;
        case 0x2ce024u: goto label_2ce024;
        case 0x2ce028u: goto label_2ce028;
        case 0x2ce02cu: goto label_2ce02c;
        case 0x2ce030u: goto label_2ce030;
        case 0x2ce034u: goto label_2ce034;
        case 0x2ce038u: goto label_2ce038;
        case 0x2ce03cu: goto label_2ce03c;
        case 0x2ce040u: goto label_2ce040;
        case 0x2ce044u: goto label_2ce044;
        case 0x2ce048u: goto label_2ce048;
        case 0x2ce04cu: goto label_2ce04c;
        case 0x2ce050u: goto label_2ce050;
        case 0x2ce054u: goto label_2ce054;
        case 0x2ce058u: goto label_2ce058;
        case 0x2ce05cu: goto label_2ce05c;
        case 0x2ce060u: goto label_2ce060;
        case 0x2ce064u: goto label_2ce064;
        case 0x2ce068u: goto label_2ce068;
        case 0x2ce06cu: goto label_2ce06c;
        case 0x2ce070u: goto label_2ce070;
        case 0x2ce074u: goto label_2ce074;
        case 0x2ce078u: goto label_2ce078;
        case 0x2ce07cu: goto label_2ce07c;
        case 0x2ce080u: goto label_2ce080;
        case 0x2ce084u: goto label_2ce084;
        case 0x2ce088u: goto label_2ce088;
        case 0x2ce08cu: goto label_2ce08c;
        case 0x2ce090u: goto label_2ce090;
        case 0x2ce094u: goto label_2ce094;
        case 0x2ce098u: goto label_2ce098;
        case 0x2ce09cu: goto label_2ce09c;
        case 0x2ce0a0u: goto label_2ce0a0;
        case 0x2ce0a4u: goto label_2ce0a4;
        case 0x2ce0a8u: goto label_2ce0a8;
        case 0x2ce0acu: goto label_2ce0ac;
        case 0x2ce0b0u: goto label_2ce0b0;
        case 0x2ce0b4u: goto label_2ce0b4;
        case 0x2ce0b8u: goto label_2ce0b8;
        case 0x2ce0bcu: goto label_2ce0bc;
        case 0x2ce0c0u: goto label_2ce0c0;
        case 0x2ce0c4u: goto label_2ce0c4;
        case 0x2ce0c8u: goto label_2ce0c8;
        case 0x2ce0ccu: goto label_2ce0cc;
        case 0x2ce0d0u: goto label_2ce0d0;
        case 0x2ce0d4u: goto label_2ce0d4;
        case 0x2ce0d8u: goto label_2ce0d8;
        case 0x2ce0dcu: goto label_2ce0dc;
        default: break;
    }

    ctx->pc = 0x2cdbc0u;

label_2cdbc0:
    // 0x2cdbc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2cdbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2cdbc4:
    // 0x2cdbc4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2cdbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2cdbc8:
    // 0x2cdbc8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2cdbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2cdbcc:
    // 0x2cdbcc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2cdbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2cdbd0:
    // 0x2cdbd0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2cdbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cdbd4:
    // 0x2cdbd4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2cdbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2cdbd8:
    // 0x2cdbd8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cdbd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cdbdc:
    // 0x2cdbdc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2cdbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2cdbe0:
    // 0x2cdbe0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2cdbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2cdbe4:
    // 0x2cdbe4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2cdbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2cdbe8:
    // 0x2cdbe8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cdbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2cdbec:
    // 0x2cdbec: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2cdbecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2cdbf0:
    // 0x2cdbf0: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2cdbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2cdbf4:
    // 0x2cdbf4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2cdbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cdbf8:
    // 0x2cdbf8: 0x8c720048  lw          $s2, 0x48($v1)
    ctx->pc = 0x2cdbf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2cdbfc:
    // 0x2cdbfc: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2cdbfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2cdc00:
    // 0x2cdc00: 0x1c40012c  bgtz        $v0, . + 4 + (0x12C << 2)
label_2cdc04:
    if (ctx->pc == 0x2CDC04u) {
        ctx->pc = 0x2CDC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC00u;
        // 0x2cdc04: 0x8c940000  lw          $s4, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC08u;
        goto label_2cdc08;
    }
    ctx->pc = 0x2CDC00u;
    {
        const bool branch_taken_0x2cdc00 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2CDC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC00u;
        // 0x2cdc04: 0x8c940000  lw          $s4, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc00) {
            ctx->pc = 0x2CE0B4u;
            goto label_2ce0b4;
        }
    }
    ctx->pc = 0x2CDC08u;
label_2cdc08:
    // 0x2cdc08: 0xc08a1a8  jal         func_2286A0
label_2cdc0c:
    if (ctx->pc == 0x2CDC0Cu) {
        ctx->pc = 0x2CDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC08u;
        // 0x2cdc0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC10u;
        goto label_2cdc10;
    }
    ctx->pc = 0x2CDC08u;
    SET_GPR_U32(ctx, 31, 0x2CDC10u);
    ctx->pc = 0x2CDC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC08u;
    // 0x2cdc0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286A0u, 0x2CDC08u, 0x2CDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC10u;
label_2cdc10:
    // 0x2cdc10: 0x10510129  beq         $v0, $s1, . + 4 + (0x129 << 2)
label_2cdc14:
    if (ctx->pc == 0x2CDC14u) {
        ctx->pc = 0x2CDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC10u;
        // 0x2cdc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC18u;
        goto label_2cdc18;
    }
    ctx->pc = 0x2CDC10u;
    {
        const bool branch_taken_0x2cdc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2CDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC10u;
        // 0x2cdc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc10) {
            ctx->pc = 0x2CE0B8u;
            goto label_2ce0b8;
        }
    }
    ctx->pc = 0x2CDC18u;
label_2cdc18:
    // 0x2cdc18: 0xc08bfa0  jal         func_22FE80
label_2cdc1c:
    if (ctx->pc == 0x2CDC1Cu) {
        ctx->pc = 0x2CDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC18u;
        // 0x2cdc1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC20u;
        goto label_2cdc20;
    }
    ctx->pc = 0x2CDC18u;
    SET_GPR_U32(ctx, 31, 0x2CDC20u);
    ctx->pc = 0x2CDC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC18u;
    // 0x2cdc1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2CDC18u, 0x2CDC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC20u;
label_2cdc20:
    // 0x2cdc20: 0xc0e4060  jal         func_390180
label_2cdc24:
    if (ctx->pc == 0x2CDC24u) {
        ctx->pc = 0x2CDC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC20u;
        // 0x2cdc24: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC28u;
        goto label_2cdc28;
    }
    ctx->pc = 0x2CDC20u;
    SET_GPR_U32(ctx, 31, 0x2CDC28u);
    ctx->pc = 0x2CDC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC20u;
    // 0x2cdc24: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CDC20u, 0x2CDC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC28u;
label_2cdc28:
    // 0x2cdc28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cdc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdc2c:
    // 0x2cdc2c: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x2cdc2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_2cdc30:
    // 0x2cdc30: 0x14510010  bne         $v0, $s1, . + 4 + (0x10 << 2)
label_2cdc34:
    if (ctx->pc == 0x2CDC34u) {
        ctx->pc = 0x2CDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC30u;
        // 0x2cdc34: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC38u;
        goto label_2cdc38;
    }
    ctx->pc = 0x2CDC30u;
    {
        const bool branch_taken_0x2cdc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2CDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC30u;
        // 0x2cdc34: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc30) {
            ctx->pc = 0x2CDC74u;
            goto label_2cdc74;
        }
    }
    ctx->pc = 0x2CDC38u;
label_2cdc38:
    // 0x2cdc38: 0xa2600036  sb          $zero, 0x36($s3)
    ctx->pc = 0x2cdc38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 54), (uint8_t)GPR_U32(ctx, 0));
label_2cdc3c:
    // 0x2cdc3c: 0xa2600037  sb          $zero, 0x37($s3)
    ctx->pc = 0x2cdc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 0));
label_2cdc40:
    // 0x2cdc40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cdc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cdc44:
    // 0x2cdc44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cdc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cdc48:
    // 0x2cdc48: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x2cdc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2cdc4c:
    // 0x2cdc4c: 0xc0b3590  jal         func_2CD640
label_2cdc50:
    if (ctx->pc == 0x2CDC50u) {
        ctx->pc = 0x2CDC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC4Cu;
        // 0x2cdc50: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC54u;
        goto label_2cdc54;
    }
    ctx->pc = 0x2CDC4Cu;
    SET_GPR_U32(ctx, 31, 0x2CDC54u);
    ctx->pc = 0x2CDC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC4Cu;
    // 0x2cdc50: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD640u, 0x2CDC4Cu, 0x2CDC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC54u;
label_2cdc54:
    // 0x2cdc54: 0x96650030  lhu         $a1, 0x30($s3)
    ctx->pc = 0x2cdc54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_2cdc58:
    // 0x2cdc58: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2cdc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2cdc5c:
    // 0x2cdc5c: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x2cdc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
label_2cdc60:
    // 0x2cdc60: 0xc0cd4fc  jal         func_3353F0
label_2cdc64:
    if (ctx->pc == 0x2CDC64u) {
        ctx->pc = 0x2CDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC60u;
        // 0x2cdc64: 0x24a60064  addiu       $a2, $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC68u;
        goto label_2cdc68;
    }
    ctx->pc = 0x2CDC60u;
    SET_GPR_U32(ctx, 31, 0x2CDC68u);
    ctx->pc = 0x2CDC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC60u;
    // 0x2cdc64: 0x24a60064  addiu       $a2, $a1, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2CDC60u, 0x2CDC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC68u;
label_2cdc68:
    // 0x2cdc68: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2cdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2cdc6c:
    // 0x2cdc6c: 0x10000111  b           . + 4 + (0x111 << 2)
label_2cdc70:
    if (ctx->pc == 0x2CDC70u) {
        ctx->pc = 0x2CDC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC6Cu;
        // 0x2cdc70: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC74u;
        goto label_2cdc74;
    }
    ctx->pc = 0x2CDC6Cu;
    {
        const bool branch_taken_0x2cdc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC6Cu;
        // 0x2cdc70: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc6c) {
            ctx->pc = 0x2CE0B4u;
            goto label_2ce0b4;
        }
    }
    ctx->pc = 0x2CDC74u;
label_2cdc74:
    // 0x2cdc74: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
label_2cdc78:
    if (ctx->pc == 0x2CDC78u) {
        ctx->pc = 0x2CDC7Cu;
        goto label_2cdc7c;
    }
    ctx->pc = 0x2CDC74u;
    {
        const bool branch_taken_0x2cdc74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc74) {
            ctx->pc = 0x2CDCB8u;
            goto label_2cdcb8;
        }
    }
    ctx->pc = 0x2CDC7Cu;
label_2cdc7c:
    // 0x2cdc7c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2cdc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2cdc80:
    // 0x2cdc80: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
label_2cdc84:
    if (ctx->pc == 0x2CDC84u) {
        ctx->pc = 0x2CDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC80u;
        // 0x2cdc84: 0x242102b  sltu        $v0, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC88u;
        goto label_2cdc88;
    }
    ctx->pc = 0x2CDC80u;
    {
        const bool branch_taken_0x2cdc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC80u;
        // 0x2cdc84: 0x242102b  sltu        $v0, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc80) {
            ctx->pc = 0x2CDC54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cdc54;
        }
    }
    ctx->pc = 0x2CDC88u;
label_2cdc88:
    // 0x2cdc88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cdc8c:
    if (ctx->pc == 0x2CDC8Cu) {
        ctx->pc = 0x2CDC90u;
        goto label_2cdc90;
    }
    ctx->pc = 0x2CDC88u;
    {
        const bool branch_taken_0x2cdc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc88) {
            ctx->pc = 0x2CDCA0u;
            goto label_2cdca0;
        }
    }
    ctx->pc = 0x2CDC90u;
label_2cdc90:
    // 0x2cdc90: 0xc0b363e  jal         func_2CD8F8
label_2cdc94:
    if (ctx->pc == 0x2CDC94u) {
        ctx->pc = 0x2CDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC90u;
        // 0x2cdc94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC98u;
        goto label_2cdc98;
    }
    ctx->pc = 0x2CDC90u;
    SET_GPR_U32(ctx, 31, 0x2CDC98u);
    ctx->pc = 0x2CDC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDC90u;
    // 0x2cdc94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD8F8u, 0x2CDC90u, 0x2CDC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC98u;
label_2cdc98:
    // 0x2cdc98: 0x10000107  b           . + 4 + (0x107 << 2)
label_2cdc9c:
    if (ctx->pc == 0x2CDC9Cu) {
        ctx->pc = 0x2CDC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC98u;
        // 0x2cdc9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCA0u;
        goto label_2cdca0;
    }
    ctx->pc = 0x2CDC98u;
    {
        const bool branch_taken_0x2cdc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC98u;
        // 0x2cdc9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc98) {
            ctx->pc = 0x2CE0B8u;
            goto label_2ce0b8;
        }
    }
    ctx->pc = 0x2CDCA0u;
label_2cdca0:
    // 0x2cdca0: 0xc0b35a6  jal         func_2CD698
label_2cdca4:
    if (ctx->pc == 0x2CDCA4u) {
        ctx->pc = 0x2CDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCA0u;
        // 0x2cdca4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCA8u;
        goto label_2cdca8;
    }
    ctx->pc = 0x2CDCA0u;
    SET_GPR_U32(ctx, 31, 0x2CDCA8u);
    ctx->pc = 0x2CDCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDCA0u;
    // 0x2cdca4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD698u, 0x2CDCA0u, 0x2CDCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCA8u;
label_2cdca8:
    // 0x2cdca8: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x2cdca8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_2cdcac:
    // 0x2cdcac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdcacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cdcb0:
    // 0x2cdcb0: 0x10000101  b           . + 4 + (0x101 << 2)
label_2cdcb4:
    if (ctx->pc == 0x2CDCB4u) {
        ctx->pc = 0x2CDCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCB0u;
        // 0x2cdcb4: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCB8u;
        goto label_2cdcb8;
    }
    ctx->pc = 0x2CDCB0u;
    {
        const bool branch_taken_0x2cdcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCB0u;
        // 0x2cdcb4: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcb0) {
            ctx->pc = 0x2CE0B8u;
            goto label_2ce0b8;
        }
    }
    ctx->pc = 0x2CDCB8u;
label_2cdcb8:
    // 0x2cdcb8: 0xc0e2612  jal         func_389848
label_2cdcbc:
    if (ctx->pc == 0x2CDCBCu) {
        ctx->pc = 0x2CDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCB8u;
        // 0x2cdcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCC0u;
        goto label_2cdcc0;
    }
    ctx->pc = 0x2CDCB8u;
    SET_GPR_U32(ctx, 31, 0x2CDCC0u);
    ctx->pc = 0x2CDCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDCB8u;
    // 0x2cdcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x2CDCB8u, 0x2CDCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCC0u;
label_2cdcc0:
    // 0x2cdcc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2cdcc4:
    if (ctx->pc == 0x2CDCC4u) {
        ctx->pc = 0x2CDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCC0u;
        // 0x2cdcc4: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCC8u;
        goto label_2cdcc8;
    }
    ctx->pc = 0x2CDCC0u;
    {
        const bool branch_taken_0x2cdcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdcc0) {
            ctx->pc = 0x2CDCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDCC0u;
            // 0x2cdcc4: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDCDCu;
            goto label_2cdcdc;
        }
    }
    ctx->pc = 0x2CDCC8u;
label_2cdcc8:
    // 0x2cdcc8: 0xc0e36b8  jal         func_38DAE0
label_2cdccc:
    if (ctx->pc == 0x2CDCCCu) {
        ctx->pc = 0x2CDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCC8u;
        // 0x2cdccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCD0u;
        goto label_2cdcd0;
    }
    ctx->pc = 0x2CDCC8u;
    SET_GPR_U32(ctx, 31, 0x2CDCD0u);
    ctx->pc = 0x2CDCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDCC8u;
    // 0x2cdccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DAE0u, 0x2CDCC8u, 0x2CDCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCD0u;
label_2cdcd0:
    // 0x2cdcd0: 0x50510009  beql        $v0, $s1, . + 4 + (0x9 << 2)
label_2cdcd4:
    if (ctx->pc == 0x2CDCD4u) {
        ctx->pc = 0x2CDCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCD0u;
        // 0x2cdcd4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCD8u;
        goto label_2cdcd8;
    }
    ctx->pc = 0x2CDCD0u;
    {
        const bool branch_taken_0x2cdcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2cdcd0) {
            ctx->pc = 0x2CDCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDCD0u;
            // 0x2cdcd4: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDCF8u;
            goto label_2cdcf8;
        }
    }
    ctx->pc = 0x2CDCD8u;
label_2cdcd8:
    // 0x2cdcd8: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x2cdcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2cdcdc:
    // 0x2cdcdc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2cdcdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2cdce0:
    // 0x2cdce0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2cdce4:
    if (ctx->pc == 0x2CDCE4u) {
        ctx->pc = 0x2CDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCE0u;
        // 0x2cdce4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCE8u;
        goto label_2cdce8;
    }
    ctx->pc = 0x2CDCE0u;
    {
        const bool branch_taken_0x2cdce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCE0u;
        // 0x2cdce4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdce0) {
            ctx->pc = 0x2CDD08u;
            goto label_2cdd08;
        }
    }
    ctx->pc = 0x2CDCE8u;
label_2cdce8:
    // 0x2cdce8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cdce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cdcec:
    // 0x2cdcec: 0xc0b3590  jal         func_2CD640
label_2cdcf0:
    if (ctx->pc == 0x2CDCF0u) {
        ctx->pc = 0x2CDCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCECu;
        // 0x2cdcf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDCF4u;
        goto label_2cdcf4;
    }
    ctx->pc = 0x2CDCECu;
    SET_GPR_U32(ctx, 31, 0x2CDCF4u);
    ctx->pc = 0x2CDCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDCECu;
    // 0x2cdcf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD640u, 0x2CDCECu, 0x2CDCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCF4u;
label_2cdcf4:
    // 0x2cdcf4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2cdcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2cdcf8:
    // 0x2cdcf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdcf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cdcfc:
    // 0x2cdcfc: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x2cdcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2cdd00:
    // 0x2cdd00: 0x100000ed  b           . + 4 + (0xED << 2)
label_2cdd04:
    if (ctx->pc == 0x2CDD04u) {
        ctx->pc = 0x2CDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD00u;
        // 0x2cdd04: 0xae630020  sw          $v1, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD08u;
        goto label_2cdd08;
    }
    ctx->pc = 0x2CDD00u;
    {
        const bool branch_taken_0x2cdd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD00u;
        // 0x2cdd04: 0xae630020  sw          $v1, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd00) {
            ctx->pc = 0x2CE0B8u;
            goto label_2ce0b8;
        }
    }
    ctx->pc = 0x2CDD08u;
label_2cdd08:
    // 0x2cdd08: 0xc089bfc  jal         func_226FF0
label_2cdd0c:
    if (ctx->pc == 0x2CDD0Cu) {
        ctx->pc = 0x2CDD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD08u;
        // 0x2cdd0c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD10u;
        goto label_2cdd10;
    }
    ctx->pc = 0x2CDD08u;
    SET_GPR_U32(ctx, 31, 0x2CDD10u);
    ctx->pc = 0x2CDD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD08u;
    // 0x2cdd0c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2CDD08u, 0x2CDD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD10u;
label_2cdd10:
    // 0x2cdd10: 0xc0e57ce  jal         func_395F38
label_2cdd14:
    if (ctx->pc == 0x2CDD14u) {
        ctx->pc = 0x2CDD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD10u;
        // 0x2cdd14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD18u;
        goto label_2cdd18;
    }
    ctx->pc = 0x2CDD10u;
    SET_GPR_U32(ctx, 31, 0x2CDD18u);
    ctx->pc = 0x2CDD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD10u;
    // 0x2cdd14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2CDD10u, 0x2CDD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD18u;
label_2cdd18:
    // 0x2cdd18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdd1c:
    // 0x2cdd1c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_2cdd20:
    if (ctx->pc == 0x2CDD20u) {
        ctx->pc = 0x2CDD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD1Cu;
        // 0x2cdd20: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD24u;
        goto label_2cdd24;
    }
    ctx->pc = 0x2CDD1Cu;
    {
        const bool branch_taken_0x2cdd1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD1Cu;
        // 0x2cdd20: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd1c) {
            ctx->pc = 0x2CDD50u;
            goto label_2cdd50;
        }
    }
    ctx->pc = 0x2CDD24u;
label_2cdd24:
    // 0x2cdd24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cdd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cdd28:
    // 0x2cdd28: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2cdd28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cdd2c:
    // 0x2cdd2c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2cdd2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2cdd30:
    // 0x2cdd30: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2cdd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2cdd34:
    // 0x2cdd34: 0x40f809  jalr        $v0
label_2cdd38:
    if (ctx->pc == 0x2CDD38u) {
        ctx->pc = 0x2CDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD34u;
        // 0x2cdd38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD3Cu;
        goto label_2cdd3c;
    }
    ctx->pc = 0x2CDD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CDD3Cu);
        ctx->pc = 0x2CDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD34u;
        // 0x2cdd38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDD34u, 0x2CDD3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDD3Cu;
label_2cdd3c:
    // 0x2cdd3c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2cdd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2cdd40:
    // 0x2cdd40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cdd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2cdd44:
    // 0x2cdd44: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x2cdd44u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_2cdd48:
    // 0x2cdd48: 0x56b10044  bnel        $s5, $s1, . + 4 + (0x44 << 2)
label_2cdd4c:
    if (ctx->pc == 0x2CDD4Cu) {
        ctx->pc = 0x2CDD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD48u;
        // 0x2cdd4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD50u;
        goto label_2cdd50;
    }
    ctx->pc = 0x2CDD48u;
    {
        const bool branch_taken_0x2cdd48 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 17));
        if (branch_taken_0x2cdd48) {
            ctx->pc = 0x2CDD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDD48u;
            // 0x2cdd4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE5Cu;
            goto label_2cde5c;
        }
    }
    ctx->pc = 0x2CDD50u;
label_2cdd50:
    // 0x2cdd50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cdd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cdd54:
    // 0x2cdd54: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cdd54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cdd58:
    // 0x2cdd58: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cdd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cdd5c:
    // 0x2cdd5c: 0x40f809  jalr        $v0
label_2cdd60:
    if (ctx->pc == 0x2CDD60u) {
        ctx->pc = 0x2CDD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD5Cu;
        // 0x2cdd60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD64u;
        goto label_2cdd64;
    }
    ctx->pc = 0x2CDD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CDD64u);
        ctx->pc = 0x2CDD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD5Cu;
        // 0x2cdd60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDD5Cu, 0x2CDD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDD64u;
label_2cdd64:
    // 0x2cdd64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cdd68:
    // 0x2cdd68: 0xc0e57ce  jal         func_395F38
label_2cdd6c:
    if (ctx->pc == 0x2CDD6Cu) {
        ctx->pc = 0x2CDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD68u;
        // 0x2cdd6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD70u;
        goto label_2cdd70;
    }
    ctx->pc = 0x2CDD68u;
    SET_GPR_U32(ctx, 31, 0x2CDD70u);
    ctx->pc = 0x2CDD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD68u;
    // 0x2cdd6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2CDD68u, 0x2CDD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD70u;
label_2cdd70:
    // 0x2cdd70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cdd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdd74:
    // 0x2cdd74: 0xc0e2612  jal         func_389848
label_2cdd78:
    if (ctx->pc == 0x2CDD78u) {
        ctx->pc = 0x2CDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD74u;
        // 0x2cdd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD7Cu;
        goto label_2cdd7c;
    }
    ctx->pc = 0x2CDD74u;
    SET_GPR_U32(ctx, 31, 0x2CDD7Cu);
    ctx->pc = 0x2CDD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD74u;
    // 0x2cdd78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x2CDD74u, 0x2CDD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD7Cu;
label_2cdd7c:
    // 0x2cdd7c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_2cdd80:
    if (ctx->pc == 0x2CDD80u) {
        ctx->pc = 0x2CDD84u;
        goto label_2cdd84;
    }
    ctx->pc = 0x2CDD7Cu;
    {
        const bool branch_taken_0x2cdd7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd7c) {
            ctx->pc = 0x2CDDF4u;
            goto label_2cddf4;
        }
    }
    ctx->pc = 0x2CDD84u;
label_2cdd84:
    // 0x2cdd84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2cdd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2cdd88:
    // 0x2cdd88: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x2cdd88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_2cdd8c:
    // 0x2cdd8c: 0xc0e44cc  jal         func_391330
label_2cdd90:
    if (ctx->pc == 0x2CDD90u) {
        ctx->pc = 0x2CDD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD8Cu;
        // 0x2cdd90: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD94u;
        goto label_2cdd94;
    }
    ctx->pc = 0x2CDD8Cu;
    SET_GPR_U32(ctx, 31, 0x2CDD94u);
    ctx->pc = 0x2CDD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD8Cu;
    // 0x2cdd90: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2CDD8Cu, 0x2CDD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD94u;
label_2cdd94:
    // 0x2cdd94: 0x9443005e  lhu         $v1, 0x5E($v0)
    ctx->pc = 0x2cdd94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
label_2cdd98:
    // 0x2cdd98: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_2cdd9c:
    if (ctx->pc == 0x2CDD9Cu) {
        ctx->pc = 0x2CDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD98u;
        // 0x2cdd9c: 0x80440087  lb          $a0, 0x87($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDDA0u;
        goto label_2cdda0;
    }
    ctx->pc = 0x2CDD98u;
    {
        const bool branch_taken_0x2cdd98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD98u;
        // 0x2cdd9c: 0x80440087  lb          $a0, 0x87($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd98) {
            ctx->pc = 0x2CDDACu;
            goto label_2cddac;
        }
    }
    ctx->pc = 0x2CDDA0u;
label_2cdda0:
    // 0x2cdda0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2cdda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2cdda4:
    // 0x2cdda4: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_2cdda8:
    if (ctx->pc == 0x2CDDA8u) {
        ctx->pc = 0x2CDDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDA4u;
        // 0x2cdda8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDDACu;
        goto label_2cddac;
    }
    ctx->pc = 0x2CDDA4u;
    {
        const bool branch_taken_0x2cdda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdda4) {
            ctx->pc = 0x2CDDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDDA4u;
            // 0x2cdda8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE28u;
            goto label_2cde28;
        }
    }
    ctx->pc = 0x2CDDACu;
label_2cddac:
    // 0x2cddac: 0x2482fffc  addiu       $v0, $a0, -0x4
    ctx->pc = 0x2cddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_2cddb0:
    // 0x2cddb0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2cddb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2cddb4:
    // 0x2cddb4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_2cddb8:
    if (ctx->pc == 0x2CDDB8u) {
        ctx->pc = 0x2CDDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDB4u;
        // 0x2cddb8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDDBCu;
        goto label_2cddbc;
    }
    ctx->pc = 0x2CDDB4u;
    {
        const bool branch_taken_0x2cddb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cddb4) {
            ctx->pc = 0x2CDDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDDB4u;
            // 0x2cddb8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE28u;
            goto label_2cde28;
        }
    }
    ctx->pc = 0x2CDDBCu;
label_2cddbc:
    // 0x2cddbc: 0xc095fce  jal         func_257F38
label_2cddc0:
    if (ctx->pc == 0x2CDDC0u) {
        ctx->pc = 0x2CDDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDBCu;
        // 0x2cddc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDDC4u;
        goto label_2cddc4;
    }
    ctx->pc = 0x2CDDBCu;
    SET_GPR_U32(ctx, 31, 0x2CDDC4u);
    ctx->pc = 0x2CDDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDDBCu;
    // 0x2cddc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2CDDBCu, 0x2CDDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDC4u;
label_2cddc4:
    // 0x2cddc4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2cddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2cddc8:
    // 0x2cddc8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cddc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cddcc:
    // 0x2cddcc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cddd0:
    // 0x2cddd0: 0x40f809  jalr        $v0
label_2cddd4:
    if (ctx->pc == 0x2CDDD4u) {
        ctx->pc = 0x2CDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDD0u;
        // 0x2cddd4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDDD8u;
        goto label_2cddd8;
    }
    ctx->pc = 0x2CDDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CDDD8u);
        ctx->pc = 0x2CDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDD0u;
        // 0x2cddd4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDDD0u, 0x2CDDD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDDD8u;
label_2cddd8:
    // 0x2cddd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cddd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdddc:
    // 0x2cdddc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cdddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cdde0:
    // 0x2cdde0: 0xc0b71c2  jal         func_2DC708
label_2cdde4:
    if (ctx->pc == 0x2CDDE4u) {
        ctx->pc = 0x2CDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDE0u;
        // 0x2cdde4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDDE8u;
        goto label_2cdde8;
    }
    ctx->pc = 0x2CDDE0u;
    SET_GPR_U32(ctx, 31, 0x2CDDE8u);
    ctx->pc = 0x2CDDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDDE0u;
    // 0x2cdde4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2CDDE0u, 0x2CDDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDE8u;
label_2cdde8:
    // 0x2cdde8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cddec:
    // 0x2cddec: 0x10000016  b           . + 4 + (0x16 << 2)
label_2cddf0:
    if (ctx->pc == 0x2CDDF0u) {
        ctx->pc = 0x2CDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDECu;
        // 0x2cddf0: 0xa2620037  sb          $v0, 0x37($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDDF4u;
        goto label_2cddf4;
    }
    ctx->pc = 0x2CDDECu;
    {
        const bool branch_taken_0x2cddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDECu;
        // 0x2cddf0: 0xa2620037  sb          $v0, 0x37($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddec) {
            ctx->pc = 0x2CDE48u;
            goto label_2cde48;
        }
    }
    ctx->pc = 0x2CDDF4u;
label_2cddf4:
    // 0x2cddf4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2cddf8:
    if (ctx->pc == 0x2CDDF8u) {
        ctx->pc = 0x2CDDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDF4u;
        // 0x2cddf8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDDFCu;
        goto label_2cddfc;
    }
    ctx->pc = 0x2CDDF4u;
    {
        const bool branch_taken_0x2cddf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDF4u;
        // 0x2cddf8: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddf4) {
            ctx->pc = 0x2CDE28u;
            goto label_2cde28;
        }
    }
    ctx->pc = 0x2CDDFCu;
label_2cddfc:
    // 0x2cddfc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cddfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cde00:
    // 0x2cde00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cde00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cde04:
    // 0x2cde04: 0x40f809  jalr        $v0
label_2cde08:
    if (ctx->pc == 0x2CDE08u) {
        ctx->pc = 0x2CDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE04u;
        // 0x2cde08: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDE0Cu;
        goto label_2cde0c;
    }
    ctx->pc = 0x2CDE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CDE0Cu);
        ctx->pc = 0x2CDE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE04u;
        // 0x2cde08: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDE04u, 0x2CDE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDE0Cu;
label_2cde0c:
    // 0x2cde0c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2cde0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_2cde10:
    // 0x2cde10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cde10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cde14:
    // 0x2cde14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cde14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cde18:
    // 0x2cde18: 0xc0b76d0  jal         func_2DDB40
label_2cde1c:
    if (ctx->pc == 0x2CDE1Cu) {
        ctx->pc = 0x2CDE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE18u;
        // 0x2cde1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDE20u;
        goto label_2cde20;
    }
    ctx->pc = 0x2CDE18u;
    SET_GPR_U32(ctx, 31, 0x2CDE20u);
    ctx->pc = 0x2CDE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDE18u;
    // 0x2cde1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDB40u, 0x2CDE18u, 0x2CDE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE20u;
label_2cde20:
    // 0x2cde20: 0x10000009  b           . + 4 + (0x9 << 2)
label_2cde24:
    if (ctx->pc == 0x2CDE24u) {
        ctx->pc = 0x2CDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE20u;
        // 0x2cde24: 0xa2600037  sb          $zero, 0x37($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDE28u;
        goto label_2cde28;
    }
    ctx->pc = 0x2CDE20u;
    {
        const bool branch_taken_0x2cde20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE20u;
        // 0x2cde24: 0xa2600037  sb          $zero, 0x37($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde20) {
            ctx->pc = 0x2CDE48u;
            goto label_2cde48;
        }
    }
    ctx->pc = 0x2CDE28u;
label_2cde28:
    // 0x2cde28: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cde28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cde2c:
    // 0x2cde2c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cde30:
    // 0x2cde30: 0x40f809  jalr        $v0
label_2cde34:
    if (ctx->pc == 0x2CDE34u) {
        ctx->pc = 0x2CDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE30u;
        // 0x2cde34: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDE38u;
        goto label_2cde38;
    }
    ctx->pc = 0x2CDE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CDE38u);
        ctx->pc = 0x2CDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE30u;
        // 0x2cde34: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDE30u, 0x2CDE38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CDE38u;
label_2cde38:
    // 0x2cde38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cde38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cde3c:
    // 0x2cde3c: 0xc0b7432  jal         func_2DD0C8
label_2cde40:
    if (ctx->pc == 0x2CDE40u) {
        ctx->pc = 0x2CDE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE3Cu;
        // 0x2cde40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDE44u;
        goto label_2cde44;
    }
    ctx->pc = 0x2CDE3Cu;
    SET_GPR_U32(ctx, 31, 0x2CDE44u);
    ctx->pc = 0x2CDE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDE3Cu;
    // 0x2cde40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD0C8u, 0x2CDE3Cu, 0x2CDE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE44u;
label_2cde44:
    // 0x2cde44: 0xa2600037  sb          $zero, 0x37($s3)
    ctx->pc = 0x2cde44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 0));
label_2cde48:
    // 0x2cde48: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x2cde48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2cde4c:
    // 0x2cde4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cde4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cde50:
    // 0x2cde50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cde50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2cde54:
    // 0x2cde54: 0x10000098  b           . + 4 + (0x98 << 2)
label_2cde58:
    if (ctx->pc == 0x2CDE58u) {
        ctx->pc = 0x2CDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE54u;
        // 0x2cde58: 0xae630028  sw          $v1, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDE5Cu;
        goto label_2cde5c;
    }
    ctx->pc = 0x2CDE54u;
    {
        const bool branch_taken_0x2cde54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE54u;
        // 0x2cde58: 0xae630028  sw          $v1, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde54) {
            ctx->pc = 0x2CE0B8u;
            goto label_2ce0b8;
        }
    }
    ctx->pc = 0x2CDE5Cu;
label_2cde5c:
    // 0x2cde5c: 0xc088fa8  jal         func_223EA0
label_2cde60:
    if (ctx->pc == 0x2CDE60u) {
        ctx->pc = 0x2CDE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE5Cu;
        // 0x2cde60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDE64u;
        goto label_2cde64;
    }
    ctx->pc = 0x2CDE5Cu;
    SET_GPR_U32(ctx, 31, 0x2CDE64u);
    ctx->pc = 0x2CDE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDE5Cu;
    // 0x2cde60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2CDE5Cu, 0x2CDE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE64u;
label_2cde64:
    // 0x2cde64: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_2cde68:
    if (ctx->pc == 0x2CDE68u) {
        ctx->pc = 0x2CDE6Cu;
        goto label_2cde6c;
    }
    ctx->pc = 0x2CDE64u;
    {
        const bool branch_taken_0x2cde64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2cde64) {
            ctx->pc = 0x2CDE7Cu;
            goto label_2cde7c;
        }
    }
    ctx->pc = 0x2CDE6Cu;
label_2cde6c:
    // 0x2cde6c: 0xc089000  jal         func_224000
label_2cde70:
    if (ctx->pc == 0x2CDE70u) {
        ctx->pc = 0x2CDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE6Cu;
        // 0x2cde70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDE74u;
        goto label_2cde74;
    }
    ctx->pc = 0x2CDE6Cu;
    SET_GPR_U32(ctx, 31, 0x2CDE74u);
    ctx->pc = 0x2CDE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDE6Cu;
    // 0x2cde70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2CDE6Cu, 0x2CDE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE74u;
label_2cde74:
    // 0x2cde74: 0x1451008d  bne         $v0, $s1, . + 4 + (0x8D << 2)
label_2cde78:
    if (ctx->pc == 0x2CDE78u) {
        ctx->pc = 0x2CDE7Cu;
        goto label_2cde7c;
    }
    ctx->pc = 0x2CDE74u;
    {
        const bool branch_taken_0x2cde74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2cde74) {
            ctx->pc = 0x2CE0ACu;
            goto label_2ce0ac;
        }
    }
    ctx->pc = 0x2CDE7Cu;
label_2cde7c:
    // 0x2cde7c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2cde7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2cde80:
    // 0x2cde80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cde80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cde84:
    // 0x2cde84: 0xc089998  jal         func_226660
label_2cde88:
    if (ctx->pc == 0x2CDE88u) {
        ctx->pc = 0x2CDE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE84u;
        // 0x2cde88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDE8Cu;
        goto label_2cde8c;
    }
    ctx->pc = 0x2CDE84u;
    SET_GPR_U32(ctx, 31, 0x2CDE8Cu);
    ctx->pc = 0x2CDE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDE84u;
    // 0x2cde88: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2CDE84u, 0x2CDE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE8Cu;
label_2cde8c:
    // 0x2cde8c: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
label_2cde90:
    if (ctx->pc == 0x2CDE90u) {
        ctx->pc = 0x2CDE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE8Cu;
        // 0x2cde90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDE94u;
        goto label_2cde94;
    }
    ctx->pc = 0x2CDE8Cu;
    {
        const bool branch_taken_0x2cde8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE8Cu;
        // 0x2cde90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde8c) {
            ctx->pc = 0x2CE0B8u;
            goto label_2ce0b8;
        }
    }
    ctx->pc = 0x2CDE94u;
label_2cde94:
    // 0x2cde94: 0x92620038  lbu         $v0, 0x38($s3)
    ctx->pc = 0x2cde94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
label_2cde98:
    // 0x2cde98: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_2cde9c:
    if (ctx->pc == 0x2CDE9Cu) {
        ctx->pc = 0x2CDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE98u;
        // 0x2cde9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDEA0u;
        goto label_2cdea0;
    }
    ctx->pc = 0x2CDE98u;
    {
        const bool branch_taken_0x2cde98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE98u;
        // 0x2cde9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde98) {
            ctx->pc = 0x2CDFA8u;
            goto label_2cdfa8;
        }
    }
    ctx->pc = 0x2CDEA0u;
label_2cdea0:
    // 0x2cdea0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2cdea0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2cdea4:
    // 0x2cdea4: 0x26920090  addiu       $s2, $s4, 0x90
    ctx->pc = 0x2cdea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_2cdea8:
    // 0x2cdea8: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x2cdea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_2cdeac:
    // 0x2cdeac: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2cdeacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2cdeb0:
    // 0x2cdeb0: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2cdeb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2cdeb4:
    // 0x2cdeb4: 0x26034b00  addiu       $v1, $s0, 0x4B00
    ctx->pc = 0x2cdeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2cdeb8:
    // 0x2cdeb8: 0x8c44084c  lw          $a0, 0x84C($v0)
    ctx->pc = 0x2cdeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
label_2cdebc:
    // 0x2cdebc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2cdebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2cdec0:
    // 0x2cdec0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2cdec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2cdec4:
    // 0x2cdec4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2cdec4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cdec8:
    // 0x2cdec8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2cdec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2cdecc:
    // 0x2cdecc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2cdeccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2cded0:
    // 0x2cded0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2cded0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2cded4:
    // 0x2cded4: 0xc0e3ec8  jal         func_38FB20
label_2cded8:
    if (ctx->pc == 0x2CDED8u) {
        ctx->pc = 0x2CDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDED4u;
        // 0x2cded8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDEDCu;
        goto label_2cdedc;
    }
    ctx->pc = 0x2CDED4u;
    SET_GPR_U32(ctx, 31, 0x2CDEDCu);
    ctx->pc = 0x2CDED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDED4u;
    // 0x2cded8: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FB20u, 0x2CDED4u, 0x2CDEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDEDCu;
label_2cdedc:
    // 0x2cdedc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2cdee0:
    if (ctx->pc == 0x2CDEE0u) {
        ctx->pc = 0x2CDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEDCu;
        // 0x2cdee0: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDEE4u;
        goto label_2cdee4;
    }
    ctx->pc = 0x2CDEDCu;
    {
        const bool branch_taken_0x2cdedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEDCu;
        // 0x2cdee0: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdedc) {
            ctx->pc = 0x2CDF08u;
            goto label_2cdf08;
        }
    }
    ctx->pc = 0x2CDEE4u;
label_2cdee4:
    // 0x2cdee4: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x2cdee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_2cdee8:
    // 0x2cdee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cdee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cdeec:
    // 0x2cdeec: 0x0  nop
    ctx->pc = 0x2cdeecu;
    // NOP
label_2cdef0:
    // 0x2cdef0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cdef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cdef4:
    // 0x2cdef4: 0x0  nop
    ctx->pc = 0x2cdef4u;
    // NOP
label_2cdef8:
    // 0x2cdef8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2cdefc:
    if (ctx->pc == 0x2CDEFCu) {
        ctx->pc = 0x2CDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEF8u;
        // 0x2cdefc: 0x8e222c7c  lw          $v0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF00u;
        goto label_2cdf00;
    }
    ctx->pc = 0x2CDEF8u;
    {
        const bool branch_taken_0x2cdef8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdef8) {
            ctx->pc = 0x2CDEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDEF8u;
            // 0x2cdefc: 0x8e222c7c  lw          $v0, 0x2C7C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDF0Cu;
            goto label_2cdf0c;
        }
    }
    ctx->pc = 0x2CDF00u;
label_2cdf00:
    // 0x2cdf00: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2cdf00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdf04:
    // 0x2cdf04: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x2cdf04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_2cdf08:
    // 0x2cdf08: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x2cdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_2cdf0c:
    // 0x2cdf0c: 0x26034b00  addiu       $v1, $s0, 0x4B00
    ctx->pc = 0x2cdf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2cdf10:
    // 0x2cdf10: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2cdf10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2cdf14:
    // 0x2cdf14: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x2cdf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_2cdf18:
    // 0x2cdf18: 0x8c440844  lw          $a0, 0x844($v0)
    ctx->pc = 0x2cdf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
label_2cdf1c:
    // 0x2cdf1c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2cdf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2cdf20:
    // 0x2cdf20: 0xc0e397e  jal         func_38E5F8
label_2cdf24:
    if (ctx->pc == 0x2CDF24u) {
        ctx->pc = 0x2CDF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF20u;
        // 0x2cdf24: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF28u;
        goto label_2cdf28;
    }
    ctx->pc = 0x2CDF20u;
    SET_GPR_U32(ctx, 31, 0x2CDF28u);
    ctx->pc = 0x2CDF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDF20u;
    // 0x2cdf24: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E5F8u, 0x2CDF20u, 0x2CDF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF28u;
label_2cdf28:
    // 0x2cdf28: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2cdf2c:
    if (ctx->pc == 0x2CDF2Cu) {
        ctx->pc = 0x2CDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF28u;
        // 0x2cdf2c: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF30u;
        goto label_2cdf30;
    }
    ctx->pc = 0x2CDF28u;
    {
        const bool branch_taken_0x2cdf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF28u;
        // 0x2cdf2c: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf28) {
            ctx->pc = 0x2CDF5Cu;
            goto label_2cdf5c;
        }
    }
    ctx->pc = 0x2CDF30u;
label_2cdf30:
    // 0x2cdf30: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x2cdf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_2cdf34:
    // 0x2cdf34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cdf34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cdf38:
    // 0x2cdf38: 0x0  nop
    ctx->pc = 0x2cdf38u;
    // NOP
label_2cdf3c:
    // 0x2cdf3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cdf3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cdf40:
    // 0x2cdf40: 0x0  nop
    ctx->pc = 0x2cdf40u;
    // NOP
label_2cdf44:
    // 0x2cdf44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2cdf48:
    if (ctx->pc == 0x2CDF48u) {
        ctx->pc = 0x2CDF4Cu;
        goto label_2cdf4c;
    }
    ctx->pc = 0x2CDF44u;
    {
        const bool branch_taken_0x2cdf44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdf44) {
            ctx->pc = 0x2CDF5Cu;
            goto label_2cdf5c;
        }
    }
    ctx->pc = 0x2CDF4Cu;
label_2cdf4c:
    // 0x2cdf4c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2cdf4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cdf50:
    // 0x2cdf50: 0x0  nop
    ctx->pc = 0x2cdf50u;
    // NOP
label_2cdf54:
    // 0x2cdf54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2cdf58:
    if (ctx->pc == 0x2CDF58u) {
        ctx->pc = 0x2CDF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF54u;
        // 0x2cdf58: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF5Cu;
        goto label_2cdf5c;
    }
    ctx->pc = 0x2CDF54u;
    {
        const bool branch_taken_0x2cdf54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cdf54) {
            ctx->pc = 0x2CDF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDF54u;
            // 0x2cdf58: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDF5Cu;
            goto label_2cdf5c;
        }
    }
    ctx->pc = 0x2CDF5Cu;
label_2cdf5c:
    // 0x2cdf5c: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_2cdf60:
    if (ctx->pc == 0x2CDF60u) {
        ctx->pc = 0x2CDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF5Cu;
        // 0x2cdf60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF64u;
        goto label_2cdf64;
    }
    ctx->pc = 0x2CDF5Cu;
    {
        const bool branch_taken_0x2cdf5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF5Cu;
        // 0x2cdf60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf5c) {
            ctx->pc = 0x2CDFA8u;
            goto label_2cdfa8;
        }
    }
    ctx->pc = 0x2CDF64u;
label_2cdf64:
    // 0x2cdf64: 0xc0a367c  jal         func_28D9F0
label_2cdf68:
    if (ctx->pc == 0x2CDF68u) {
        ctx->pc = 0x2CDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF64u;
        // 0x2cdf68: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF6Cu;
        goto label_2cdf6c;
    }
    ctx->pc = 0x2CDF64u;
    SET_GPR_U32(ctx, 31, 0x2CDF6Cu);
    ctx->pc = 0x2CDF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDF64u;
    // 0x2cdf68: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CDF64u, 0x2CDF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF6Cu;
label_2cdf6c:
    // 0x2cdf6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cdf6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdf70:
    // 0x2cdf70: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_2cdf74:
    if (ctx->pc == 0x2CDF74u) {
        ctx->pc = 0x2CDF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF70u;
        // 0x2cdf74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF78u;
        goto label_2cdf78;
    }
    ctx->pc = 0x2CDF70u;
    {
        const bool branch_taken_0x2cdf70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF70u;
        // 0x2cdf74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf70) {
            ctx->pc = 0x2CDF98u;
            goto label_2cdf98;
        }
    }
    ctx->pc = 0x2CDF78u;
label_2cdf78:
    // 0x2cdf78: 0xc0884f6  jal         func_2213D8
label_2cdf7c:
    if (ctx->pc == 0x2CDF7Cu) {
        ctx->pc = 0x2CDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF78u;
        // 0x2cdf7c: 0x26b00010  addiu       $s0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF80u;
        goto label_2cdf80;
    }
    ctx->pc = 0x2CDF78u;
    SET_GPR_U32(ctx, 31, 0x2CDF80u);
    ctx->pc = 0x2CDF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDF78u;
    // 0x2cdf7c: 0x26b00010  addiu       $s0, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2CDF78u, 0x2CDF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF80u;
label_2cdf80:
    // 0x2cdf80: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2cdf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2cdf84:
    // 0x2cdf84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cdf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cdf88:
    // 0x2cdf88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cdf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cdf8c:
    // 0x2cdf8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2cdf8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2cdf90:
    // 0x2cdf90: 0xc0bf800  jal         func_2FE000
label_2cdf94:
    if (ctx->pc == 0x2CDF94u) {
        ctx->pc = 0x2CDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF90u;
        // 0x2cdf94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF98u;
        goto label_2cdf98;
    }
    ctx->pc = 0x2CDF90u;
    SET_GPR_U32(ctx, 31, 0x2CDF98u);
    ctx->pc = 0x2CDF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDF90u;
    // 0x2cdf94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CDF90u, 0x2CDF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF98u;
label_2cdf98:
    // 0x2cdf98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cdf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cdf9c:
    // 0x2cdf9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdf9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cdfa0:
    // 0x2cdfa0: 0x10000045  b           . + 4 + (0x45 << 2)
label_2cdfa4:
    if (ctx->pc == 0x2CDFA4u) {
        ctx->pc = 0x2CDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFA0u;
        // 0x2cdfa4: 0xa2630038  sb          $v1, 0x38($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 56), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDFA8u;
        goto label_2cdfa8;
    }
    ctx->pc = 0x2CDFA0u;
    {
        const bool branch_taken_0x2cdfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFA0u;
        // 0x2cdfa4: 0xa2630038  sb          $v1, 0x38($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 56), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdfa0) {
            ctx->pc = 0x2CE0B8u;
            goto label_2ce0b8;
        }
    }
    ctx->pc = 0x2CDFA8u;
label_2cdfa8:
    // 0x2cdfa8: 0xc0a774e  jal         func_29DD38
label_2cdfac:
    if (ctx->pc == 0x2CDFACu) {
        ctx->pc = 0x2CDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFA8u;
        // 0x2cdfac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDFB0u;
        goto label_2cdfb0;
    }
    ctx->pc = 0x2CDFA8u;
    SET_GPR_U32(ctx, 31, 0x2CDFB0u);
    ctx->pc = 0x2CDFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDFA8u;
    // 0x2cdfac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DD38u, 0x2CDFA8u, 0x2CDFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFB0u;
label_2cdfb0:
    // 0x2cdfb0: 0xc0a367c  jal         func_28D9F0
label_2cdfb4:
    if (ctx->pc == 0x2CDFB4u) {
        ctx->pc = 0x2CDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFB0u;
        // 0x2cdfb4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDFB8u;
        goto label_2cdfb8;
    }
    ctx->pc = 0x2CDFB0u;
    SET_GPR_U32(ctx, 31, 0x2CDFB8u);
    ctx->pc = 0x2CDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDFB0u;
    // 0x2cdfb4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CDFB0u, 0x2CDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFB8u;
label_2cdfb8:
    // 0x2cdfb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cdfb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdfbc:
    // 0x2cdfbc: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_2cdfc0:
    if (ctx->pc == 0x2CDFC0u) {
        ctx->pc = 0x2CDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFBCu;
        // 0x2cdfc0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDFC4u;
        goto label_2cdfc4;
    }
    ctx->pc = 0x2CDFBCu;
    {
        const bool branch_taken_0x2cdfbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFBCu;
        // 0x2cdfc0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdfbc) {
            ctx->pc = 0x2CE020u;
            goto label_2ce020;
        }
    }
    ctx->pc = 0x2CDFC4u;
label_2cdfc4:
    // 0x2cdfc4: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2cdfc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2cdfc8:
    // 0x2cdfc8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2cdfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2cdfcc:
    // 0x2cdfcc: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x2cdfccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cdfd0:
    // 0x2cdfd0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2cdfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2cdfd4:
    // 0x2cdfd4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2cdfd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2cdfd8:
    // 0x2cdfd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cdfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2cdfdc:
    // 0x2cdfdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cdfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cdfe0:
    // 0x2cdfe0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2cdfe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2cdfe4:
    // 0x2cdfe4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2cdfe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2cdfe8:
    // 0x2cdfe8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2cdfe8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2cdfec:
    // 0x2cdfec: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2cdfecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2cdff0:
    // 0x2cdff0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2cdff0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2cdff4:
    // 0x2cdff4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2cdff4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2cdff8:
    // 0x2cdff8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2cdff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2cdffc:
    // 0x2cdffc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2cdffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2ce000:
    // 0x2ce000: 0xc0884f6  jal         func_2213D8
label_2ce004:
    if (ctx->pc == 0x2CE004u) {
        ctx->pc = 0x2CE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE000u;
        // 0x2ce004: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE008u;
        goto label_2ce008;
    }
    ctx->pc = 0x2CE000u;
    SET_GPR_U32(ctx, 31, 0x2CE008u);
    ctx->pc = 0x2CE004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE000u;
    // 0x2ce004: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2CE000u, 0x2CE008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE008u;
label_2ce008:
    // 0x2ce008: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ce008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ce00c:
    // 0x2ce00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ce010:
    // 0x2ce010: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ce010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce014:
    // 0x2ce014: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ce014u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2ce018:
    // 0x2ce018: 0xc0bf800  jal         func_2FE000
label_2ce01c:
    if (ctx->pc == 0x2CE01Cu) {
        ctx->pc = 0x2CE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE018u;
        // 0x2ce01c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE020u;
        goto label_2ce020;
    }
    ctx->pc = 0x2CE018u;
    SET_GPR_U32(ctx, 31, 0x2CE020u);
    ctx->pc = 0x2CE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE018u;
    // 0x2ce01c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CE018u, 0x2CE020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE020u;
label_2ce020:
    // 0x2ce020: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2ce020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ce024:
    // 0x2ce024: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ce024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ce028:
    // 0x2ce028: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ce028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2ce02c:
    // 0x2ce02c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ce02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ce030:
    // 0x2ce030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce034:
    // 0x2ce034: 0xc0a3892  jal         func_28E248
label_2ce038:
    if (ctx->pc == 0x2CE038u) {
        ctx->pc = 0x2CE038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE034u;
        // 0x2ce038: 0x2407007d  addiu       $a3, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE03Cu;
        goto label_2ce03c;
    }
    ctx->pc = 0x2CE034u;
    SET_GPR_U32(ctx, 31, 0x2CE03Cu);
    ctx->pc = 0x2CE038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE034u;
    // 0x2ce038: 0x2407007d  addiu       $a3, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2CE034u, 0x2CE03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE03Cu;
label_2ce03c:
    // 0x2ce03c: 0xc0a4802  jal         func_292008
label_2ce040:
    if (ctx->pc == 0x2CE040u) {
        ctx->pc = 0x2CE044u;
        goto label_2ce044;
    }
    ctx->pc = 0x2CE03Cu;
    SET_GPR_U32(ctx, 31, 0x2CE044u);
    ctx->pc = 0x292008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292008u, 0x2CE03Cu, 0x2CE044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE044u;
label_2ce044:
    // 0x2ce044: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce048:
    // 0x2ce048: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_2ce04c:
    if (ctx->pc == 0x2CE04Cu) {
        ctx->pc = 0x2CE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE048u;
        // 0x2ce04c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE050u;
        goto label_2ce050;
    }
    ctx->pc = 0x2CE048u;
    {
        const bool branch_taken_0x2ce048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE048u;
        // 0x2ce04c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce048) {
            ctx->pc = 0x2CE0A0u;
            goto label_2ce0a0;
        }
    }
    ctx->pc = 0x2CE050u;
label_2ce050:
    // 0x2ce050: 0xc0a367c  jal         func_28D9F0
label_2ce054:
    if (ctx->pc == 0x2CE054u) {
        ctx->pc = 0x2CE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE050u;
        // 0x2ce054: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE058u;
        goto label_2ce058;
    }
    ctx->pc = 0x2CE050u;
    SET_GPR_U32(ctx, 31, 0x2CE058u);
    ctx->pc = 0x2CE054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE050u;
    // 0x2ce054: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CE050u, 0x2CE058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE058u;
label_2ce058:
    // 0x2ce058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ce058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce05c:
    // 0x2ce05c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2ce060:
    if (ctx->pc == 0x2CE060u) {
        ctx->pc = 0x2CE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE05Cu;
        // 0x2ce060: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE064u;
        goto label_2ce064;
    }
    ctx->pc = 0x2CE05Cu;
    {
        const bool branch_taken_0x2ce05c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE05Cu;
        // 0x2ce060: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce05c) {
            ctx->pc = 0x2CE09Cu;
            goto label_2ce09c;
        }
    }
    ctx->pc = 0x2CE064u;
label_2ce064:
    // 0x2ce064: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ce064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ce068:
    // 0x2ce068: 0xc0cd4ee  jal         func_3353B8
label_2ce06c:
    if (ctx->pc == 0x2CE06Cu) {
        ctx->pc = 0x2CE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE068u;
        // 0x2ce06c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE070u;
        goto label_2ce070;
    }
    ctx->pc = 0x2CE068u;
    SET_GPR_U32(ctx, 31, 0x2CE070u);
    ctx->pc = 0x2CE06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE068u;
    // 0x2ce06c: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2CE068u, 0x2CE070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE070u;
label_2ce070:
    // 0x2ce070: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2ce070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2ce074:
    // 0x2ce074: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x2ce074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2ce078:
    // 0x2ce078: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2ce078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ce07c:
    // 0x2ce07c: 0x2408008e  addiu       $t0, $zero, 0x8E
    ctx->pc = 0x2ce07cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_2ce080:
    // 0x2ce080: 0x83400b  movn        $t0, $a0, $v1
    ctx->pc = 0x2ce080u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
label_2ce084:
    // 0x2ce084: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2ce084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ce088:
    // 0x2ce088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce08c:
    // 0x2ce08c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2ce08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ce090:
    // 0x2ce090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ce090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce094:
    // 0x2ce094: 0xc0bec3c  jal         func_2FB0F0
label_2ce098:
    if (ctx->pc == 0x2CE098u) {
        ctx->pc = 0x2CE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE094u;
        // 0x2ce098: 0x240905dc  addiu       $t1, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE09Cu;
        goto label_2ce09c;
    }
    ctx->pc = 0x2CE094u;
    SET_GPR_U32(ctx, 31, 0x2CE09Cu);
    ctx->pc = 0x2CE098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE094u;
    // 0x2ce098: 0x240905dc  addiu       $t1, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2CE094u, 0x2CE09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE09Cu;
label_2ce09c:
    // 0x2ce09c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce0a0:
    // 0x2ce0a0: 0xa2600038  sb          $zero, 0x38($s3)
    ctx->pc = 0x2ce0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 56), (uint8_t)GPR_U32(ctx, 0));
label_2ce0a4:
    // 0x2ce0a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ce0a8:
    if (ctx->pc == 0x2CE0A8u) {
        ctx->pc = 0x2CE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0A4u;
        // 0x2ce0a8: 0xa2620036  sb          $v0, 0x36($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE0ACu;
        goto label_2ce0ac;
    }
    ctx->pc = 0x2CE0A4u;
    {
        const bool branch_taken_0x2ce0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0A4u;
        // 0x2ce0a8: 0xa2620036  sb          $v0, 0x36($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0a4) {
            ctx->pc = 0x2CE0B4u;
            goto label_2ce0b4;
        }
    }
    ctx->pc = 0x2CE0ACu;
label_2ce0ac:
    // 0x2ce0ac: 0xc095fce  jal         func_257F38
label_2ce0b0:
    if (ctx->pc == 0x2CE0B0u) {
        ctx->pc = 0x2CE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0ACu;
        // 0x2ce0b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE0B4u;
        goto label_2ce0b4;
    }
    ctx->pc = 0x2CE0ACu;
    SET_GPR_U32(ctx, 31, 0x2CE0B4u);
    ctx->pc = 0x2CE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE0ACu;
    // 0x2ce0b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2CE0ACu, 0x2CE0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0B4u;
label_2ce0b4:
    // 0x2ce0b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ce0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce0b8:
    // 0x2ce0b8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2ce0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ce0bc:
    // 0x2ce0bc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2ce0bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ce0c0:
    // 0x2ce0c0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2ce0c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ce0c4:
    // 0x2ce0c4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2ce0c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ce0c8:
    // 0x2ce0c8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2ce0c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ce0cc:
    // 0x2ce0cc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ce0ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ce0d0:
    // 0x2ce0d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ce0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ce0d4:
    // 0x2ce0d4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2ce0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ce0d8:
    // 0x2ce0d8: 0x3e00008  jr          $ra
label_2ce0dc:
    if (ctx->pc == 0x2CE0DCu) {
        ctx->pc = 0x2CE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0D8u;
        // 0x2ce0dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE0E0u;
        goto label_fallthrough_0x2ce0d8;
    }
    ctx->pc = 0x2CE0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0D8u;
        // 0x2ce0dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ce0d8:
    ctx->pc = 0x2CE0E0u;
}
