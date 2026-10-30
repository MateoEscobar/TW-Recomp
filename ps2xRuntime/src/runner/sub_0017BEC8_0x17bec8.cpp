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

// Function: sub_0017BEC8
// Address: 0x17bec8 - 0x17c2a8
void sub_0017BEC8_0x17bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BEC8_0x17bec8");
#endif

    switch (ctx->pc) {
        case 0x17bec8u: goto label_17bec8;
        case 0x17beccu: goto label_17becc;
        case 0x17bed0u: goto label_17bed0;
        case 0x17bed4u: goto label_17bed4;
        case 0x17bed8u: goto label_17bed8;
        case 0x17bedcu: goto label_17bedc;
        case 0x17bee0u: goto label_17bee0;
        case 0x17bee4u: goto label_17bee4;
        case 0x17bee8u: goto label_17bee8;
        case 0x17beecu: goto label_17beec;
        case 0x17bef0u: goto label_17bef0;
        case 0x17bef4u: goto label_17bef4;
        case 0x17bef8u: goto label_17bef8;
        case 0x17befcu: goto label_17befc;
        case 0x17bf00u: goto label_17bf00;
        case 0x17bf04u: goto label_17bf04;
        case 0x17bf08u: goto label_17bf08;
        case 0x17bf0cu: goto label_17bf0c;
        case 0x17bf10u: goto label_17bf10;
        case 0x17bf14u: goto label_17bf14;
        case 0x17bf18u: goto label_17bf18;
        case 0x17bf1cu: goto label_17bf1c;
        case 0x17bf20u: goto label_17bf20;
        case 0x17bf24u: goto label_17bf24;
        case 0x17bf28u: goto label_17bf28;
        case 0x17bf2cu: goto label_17bf2c;
        case 0x17bf30u: goto label_17bf30;
        case 0x17bf34u: goto label_17bf34;
        case 0x17bf38u: goto label_17bf38;
        case 0x17bf3cu: goto label_17bf3c;
        case 0x17bf40u: goto label_17bf40;
        case 0x17bf44u: goto label_17bf44;
        case 0x17bf48u: goto label_17bf48;
        case 0x17bf4cu: goto label_17bf4c;
        case 0x17bf50u: goto label_17bf50;
        case 0x17bf54u: goto label_17bf54;
        case 0x17bf58u: goto label_17bf58;
        case 0x17bf5cu: goto label_17bf5c;
        case 0x17bf60u: goto label_17bf60;
        case 0x17bf64u: goto label_17bf64;
        case 0x17bf68u: goto label_17bf68;
        case 0x17bf6cu: goto label_17bf6c;
        case 0x17bf70u: goto label_17bf70;
        case 0x17bf74u: goto label_17bf74;
        case 0x17bf78u: goto label_17bf78;
        case 0x17bf7cu: goto label_17bf7c;
        case 0x17bf80u: goto label_17bf80;
        case 0x17bf84u: goto label_17bf84;
        case 0x17bf88u: goto label_17bf88;
        case 0x17bf8cu: goto label_17bf8c;
        case 0x17bf90u: goto label_17bf90;
        case 0x17bf94u: goto label_17bf94;
        case 0x17bf98u: goto label_17bf98;
        case 0x17bf9cu: goto label_17bf9c;
        case 0x17bfa0u: goto label_17bfa0;
        case 0x17bfa4u: goto label_17bfa4;
        case 0x17bfa8u: goto label_17bfa8;
        case 0x17bfacu: goto label_17bfac;
        case 0x17bfb0u: goto label_17bfb0;
        case 0x17bfb4u: goto label_17bfb4;
        case 0x17bfb8u: goto label_17bfb8;
        case 0x17bfbcu: goto label_17bfbc;
        case 0x17bfc0u: goto label_17bfc0;
        case 0x17bfc4u: goto label_17bfc4;
        case 0x17bfc8u: goto label_17bfc8;
        case 0x17bfccu: goto label_17bfcc;
        case 0x17bfd0u: goto label_17bfd0;
        case 0x17bfd4u: goto label_17bfd4;
        case 0x17bfd8u: goto label_17bfd8;
        case 0x17bfdcu: goto label_17bfdc;
        case 0x17bfe0u: goto label_17bfe0;
        case 0x17bfe4u: goto label_17bfe4;
        case 0x17bfe8u: goto label_17bfe8;
        case 0x17bfecu: goto label_17bfec;
        case 0x17bff0u: goto label_17bff0;
        case 0x17bff4u: goto label_17bff4;
        case 0x17bff8u: goto label_17bff8;
        case 0x17bffcu: goto label_17bffc;
        case 0x17c000u: goto label_17c000;
        case 0x17c004u: goto label_17c004;
        case 0x17c008u: goto label_17c008;
        case 0x17c00cu: goto label_17c00c;
        case 0x17c010u: goto label_17c010;
        case 0x17c014u: goto label_17c014;
        case 0x17c018u: goto label_17c018;
        case 0x17c01cu: goto label_17c01c;
        case 0x17c020u: goto label_17c020;
        case 0x17c024u: goto label_17c024;
        case 0x17c028u: goto label_17c028;
        case 0x17c02cu: goto label_17c02c;
        case 0x17c030u: goto label_17c030;
        case 0x17c034u: goto label_17c034;
        case 0x17c038u: goto label_17c038;
        case 0x17c03cu: goto label_17c03c;
        case 0x17c040u: goto label_17c040;
        case 0x17c044u: goto label_17c044;
        case 0x17c048u: goto label_17c048;
        case 0x17c04cu: goto label_17c04c;
        case 0x17c050u: goto label_17c050;
        case 0x17c054u: goto label_17c054;
        case 0x17c058u: goto label_17c058;
        case 0x17c05cu: goto label_17c05c;
        case 0x17c060u: goto label_17c060;
        case 0x17c064u: goto label_17c064;
        case 0x17c068u: goto label_17c068;
        case 0x17c06cu: goto label_17c06c;
        case 0x17c070u: goto label_17c070;
        case 0x17c074u: goto label_17c074;
        case 0x17c078u: goto label_17c078;
        case 0x17c07cu: goto label_17c07c;
        case 0x17c080u: goto label_17c080;
        case 0x17c084u: goto label_17c084;
        case 0x17c088u: goto label_17c088;
        case 0x17c08cu: goto label_17c08c;
        case 0x17c090u: goto label_17c090;
        case 0x17c094u: goto label_17c094;
        case 0x17c098u: goto label_17c098;
        case 0x17c09cu: goto label_17c09c;
        case 0x17c0a0u: goto label_17c0a0;
        case 0x17c0a4u: goto label_17c0a4;
        case 0x17c0a8u: goto label_17c0a8;
        case 0x17c0acu: goto label_17c0ac;
        case 0x17c0b0u: goto label_17c0b0;
        case 0x17c0b4u: goto label_17c0b4;
        case 0x17c0b8u: goto label_17c0b8;
        case 0x17c0bcu: goto label_17c0bc;
        case 0x17c0c0u: goto label_17c0c0;
        case 0x17c0c4u: goto label_17c0c4;
        case 0x17c0c8u: goto label_17c0c8;
        case 0x17c0ccu: goto label_17c0cc;
        case 0x17c0d0u: goto label_17c0d0;
        case 0x17c0d4u: goto label_17c0d4;
        case 0x17c0d8u: goto label_17c0d8;
        case 0x17c0dcu: goto label_17c0dc;
        case 0x17c0e0u: goto label_17c0e0;
        case 0x17c0e4u: goto label_17c0e4;
        case 0x17c0e8u: goto label_17c0e8;
        case 0x17c0ecu: goto label_17c0ec;
        case 0x17c0f0u: goto label_17c0f0;
        case 0x17c0f4u: goto label_17c0f4;
        case 0x17c0f8u: goto label_17c0f8;
        case 0x17c0fcu: goto label_17c0fc;
        case 0x17c100u: goto label_17c100;
        case 0x17c104u: goto label_17c104;
        case 0x17c108u: goto label_17c108;
        case 0x17c10cu: goto label_17c10c;
        case 0x17c110u: goto label_17c110;
        case 0x17c114u: goto label_17c114;
        case 0x17c118u: goto label_17c118;
        case 0x17c11cu: goto label_17c11c;
        case 0x17c120u: goto label_17c120;
        case 0x17c124u: goto label_17c124;
        case 0x17c128u: goto label_17c128;
        case 0x17c12cu: goto label_17c12c;
        case 0x17c130u: goto label_17c130;
        case 0x17c134u: goto label_17c134;
        case 0x17c138u: goto label_17c138;
        case 0x17c13cu: goto label_17c13c;
        case 0x17c140u: goto label_17c140;
        case 0x17c144u: goto label_17c144;
        case 0x17c148u: goto label_17c148;
        case 0x17c14cu: goto label_17c14c;
        case 0x17c150u: goto label_17c150;
        case 0x17c154u: goto label_17c154;
        case 0x17c158u: goto label_17c158;
        case 0x17c15cu: goto label_17c15c;
        case 0x17c160u: goto label_17c160;
        case 0x17c164u: goto label_17c164;
        case 0x17c168u: goto label_17c168;
        case 0x17c16cu: goto label_17c16c;
        case 0x17c170u: goto label_17c170;
        case 0x17c174u: goto label_17c174;
        case 0x17c178u: goto label_17c178;
        case 0x17c17cu: goto label_17c17c;
        case 0x17c180u: goto label_17c180;
        case 0x17c184u: goto label_17c184;
        case 0x17c188u: goto label_17c188;
        case 0x17c18cu: goto label_17c18c;
        case 0x17c190u: goto label_17c190;
        case 0x17c194u: goto label_17c194;
        case 0x17c198u: goto label_17c198;
        case 0x17c19cu: goto label_17c19c;
        case 0x17c1a0u: goto label_17c1a0;
        case 0x17c1a4u: goto label_17c1a4;
        case 0x17c1a8u: goto label_17c1a8;
        case 0x17c1acu: goto label_17c1ac;
        case 0x17c1b0u: goto label_17c1b0;
        case 0x17c1b4u: goto label_17c1b4;
        case 0x17c1b8u: goto label_17c1b8;
        case 0x17c1bcu: goto label_17c1bc;
        case 0x17c1c0u: goto label_17c1c0;
        case 0x17c1c4u: goto label_17c1c4;
        case 0x17c1c8u: goto label_17c1c8;
        case 0x17c1ccu: goto label_17c1cc;
        case 0x17c1d0u: goto label_17c1d0;
        case 0x17c1d4u: goto label_17c1d4;
        case 0x17c1d8u: goto label_17c1d8;
        case 0x17c1dcu: goto label_17c1dc;
        case 0x17c1e0u: goto label_17c1e0;
        case 0x17c1e4u: goto label_17c1e4;
        case 0x17c1e8u: goto label_17c1e8;
        case 0x17c1ecu: goto label_17c1ec;
        case 0x17c1f0u: goto label_17c1f0;
        case 0x17c1f4u: goto label_17c1f4;
        case 0x17c1f8u: goto label_17c1f8;
        case 0x17c1fcu: goto label_17c1fc;
        case 0x17c200u: goto label_17c200;
        case 0x17c204u: goto label_17c204;
        case 0x17c208u: goto label_17c208;
        case 0x17c20cu: goto label_17c20c;
        case 0x17c210u: goto label_17c210;
        case 0x17c214u: goto label_17c214;
        case 0x17c218u: goto label_17c218;
        case 0x17c21cu: goto label_17c21c;
        case 0x17c220u: goto label_17c220;
        case 0x17c224u: goto label_17c224;
        case 0x17c228u: goto label_17c228;
        case 0x17c22cu: goto label_17c22c;
        case 0x17c230u: goto label_17c230;
        case 0x17c234u: goto label_17c234;
        case 0x17c238u: goto label_17c238;
        case 0x17c23cu: goto label_17c23c;
        case 0x17c240u: goto label_17c240;
        case 0x17c244u: goto label_17c244;
        case 0x17c248u: goto label_17c248;
        case 0x17c24cu: goto label_17c24c;
        case 0x17c250u: goto label_17c250;
        case 0x17c254u: goto label_17c254;
        case 0x17c258u: goto label_17c258;
        case 0x17c25cu: goto label_17c25c;
        case 0x17c260u: goto label_17c260;
        case 0x17c264u: goto label_17c264;
        case 0x17c268u: goto label_17c268;
        case 0x17c26cu: goto label_17c26c;
        case 0x17c270u: goto label_17c270;
        case 0x17c274u: goto label_17c274;
        case 0x17c278u: goto label_17c278;
        case 0x17c27cu: goto label_17c27c;
        case 0x17c280u: goto label_17c280;
        case 0x17c284u: goto label_17c284;
        case 0x17c288u: goto label_17c288;
        case 0x17c28cu: goto label_17c28c;
        case 0x17c290u: goto label_17c290;
        case 0x17c294u: goto label_17c294;
        case 0x17c298u: goto label_17c298;
        case 0x17c29cu: goto label_17c29c;
        case 0x17c2a0u: goto label_17c2a0;
        case 0x17c2a4u: goto label_17c2a4;
        default: break;
    }

    ctx->pc = 0x17bec8u;

label_17bec8:
    // 0x17bec8: 0x27bddeb0  addiu       $sp, $sp, -0x2150
    ctx->pc = 0x17bec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294958768));
label_17becc:
    // 0x17becc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x17beccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_17bed0:
    // 0x17bed0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17bed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bed4:
    // 0x17bed4: 0x7fb120d0  sq          $s1, 0x20D0($sp)
    ctx->pc = 0x17bed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8400), GPR_VEC(ctx, 17));
label_17bed8:
    // 0x17bed8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_17bedc:
    // 0x17bedc: 0xe7b72108  swc1        $f23, 0x2108($sp)
    ctx->pc = 0x17bedcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8456), bits); }
label_17bee0:
    // 0x17bee0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17bee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17bee4:
    // 0x17bee4: 0x7fb020e0  sq          $s0, 0x20E0($sp)
    ctx->pc = 0x17bee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8416), GPR_VEC(ctx, 16));
label_17bee8:
    // 0x17bee8: 0x7fb220c0  sq          $s2, 0x20C0($sp)
    ctx->pc = 0x17bee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8384), GPR_VEC(ctx, 18));
label_17beec:
    // 0x17beec: 0x7fb320b0  sq          $s3, 0x20B0($sp)
    ctx->pc = 0x17beecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8368), GPR_VEC(ctx, 19));
label_17bef0:
    // 0x17bef0: 0x7fb420a0  sq          $s4, 0x20A0($sp)
    ctx->pc = 0x17bef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8352), GPR_VEC(ctx, 20));
label_17bef4:
    // 0x17bef4: 0x7fb52090  sq          $s5, 0x2090($sp)
    ctx->pc = 0x17bef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8336), GPR_VEC(ctx, 21));
label_17bef8:
    // 0x17bef8: 0x7fb62080  sq          $s6, 0x2080($sp)
    ctx->pc = 0x17bef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8320), GPR_VEC(ctx, 22));
label_17befc:
    // 0x17befc: 0x7fb72070  sq          $s7, 0x2070($sp)
    ctx->pc = 0x17befcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8304), GPR_VEC(ctx, 23));
label_17bf00:
    // 0x17bf00: 0x7fbe2060  sq          $fp, 0x2060($sp)
    ctx->pc = 0x17bf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 8288), GPR_VEC(ctx, 30));
label_17bf04:
    // 0x17bf04: 0xffbf2050  sd          $ra, 0x2050($sp)
    ctx->pc = 0x17bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8272), GPR_U64(ctx, 31));
label_17bf08:
    // 0x17bf08: 0xe7bf2148  swc1        $f31, 0x2148($sp)
    ctx->pc = 0x17bf08u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8520), bits); }
label_17bf0c:
    // 0x17bf0c: 0xe7be2140  swc1        $f30, 0x2140($sp)
    ctx->pc = 0x17bf0cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8512), bits); }
label_17bf10:
    // 0x17bf10: 0xe7bd2138  swc1        $f29, 0x2138($sp)
    ctx->pc = 0x17bf10u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8504), bits); }
label_17bf14:
    // 0x17bf14: 0xe7bc2130  swc1        $f28, 0x2130($sp)
    ctx->pc = 0x17bf14u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8496), bits); }
label_17bf18:
    // 0x17bf18: 0xe7bb2128  swc1        $f27, 0x2128($sp)
    ctx->pc = 0x17bf18u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8488), bits); }
label_17bf1c:
    // 0x17bf1c: 0xe7ba2120  swc1        $f26, 0x2120($sp)
    ctx->pc = 0x17bf1cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8480), bits); }
label_17bf20:
    // 0x17bf20: 0xe7b92118  swc1        $f25, 0x2118($sp)
    ctx->pc = 0x17bf20u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8472), bits); }
label_17bf24:
    // 0x17bf24: 0xe7b82110  swc1        $f24, 0x2110($sp)
    ctx->pc = 0x17bf24u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8464), bits); }
label_17bf28:
    // 0x17bf28: 0xe7b62100  swc1        $f22, 0x2100($sp)
    ctx->pc = 0x17bf28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8448), bits); }
label_17bf2c:
    // 0x17bf2c: 0xe7b520f8  swc1        $f21, 0x20F8($sp)
    ctx->pc = 0x17bf2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8440), bits); }
label_17bf30:
    // 0x17bf30: 0xe7b420f0  swc1        $f20, 0x20F0($sp)
    ctx->pc = 0x17bf30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8432), bits); }
label_17bf34:
    // 0x17bf34: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x17bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_17bf38:
    // 0x17bf38: 0xc62300b4  lwc1        $f3, 0xB4($s1)
    ctx->pc = 0x17bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17bf3c:
    // 0x17bf3c: 0x9235002c  lbu         $s5, 0x2C($s1)
    ctx->pc = 0x17bf3cu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_17bf40:
    // 0x17bf40: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x17bf40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bf44:
    // 0x17bf44: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x17bf44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_17bf48:
    // 0x17bf48: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_17bf4c:
    if (ctx->pc == 0x17BF4Cu) {
        ctx->pc = 0x17BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF48u;
        // 0x17bf4c: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BF50u;
        goto label_17bf50;
    }
    ctx->pc = 0x17BF48u;
    {
        const bool branch_taken_0x17bf48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF48u;
        // 0x17bf4c: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf48) {
            ctx->pc = 0x17BFD0u;
            goto label_17bfd0;
        }
    }
    ctx->pc = 0x17BF50u;
label_17bf50:
    // 0x17bf50: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x17bf50u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bf54:
    // 0x17bf54: 0x0  nop
    ctx->pc = 0x17bf54u;
    // NOP
label_17bf58:
    // 0x17bf58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17bf58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17bf5c:
    // 0x17bf5c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x17bf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_17bf60:
    // 0x17bf60: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17bf60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_17bf64:
    // 0x17bf64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17bf64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17bf68:
    // 0x17bf68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17bf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_17bf6c:
    // 0x17bf6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17bf6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17bf70:
    // 0x17bf70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17bf70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17bf74:
    // 0x17bf74: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x17bf74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_17bf78:
    // 0x17bf78: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x17bf78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_17bf7c:
    // 0x17bf7c: 0x4601b836  c.le.s      $f23, $f1
    ctx->pc = 0x17bf7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bf80:
    // 0x17bf80: 0x0  nop
    ctx->pc = 0x17bf80u;
    // NOP
label_17bf84:
    // 0x17bf84: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_17bf88:
    if (ctx->pc == 0x17BF88u) {
        ctx->pc = 0x17BF8Cu;
        goto label_17bf8c;
    }
    ctx->pc = 0x17BF84u;
    {
        const bool branch_taken_0x17bf84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17bf84) {
            ctx->pc = 0x17BF9Cu;
            goto label_17bf9c;
        }
    }
    ctx->pc = 0x17BF8Cu;
label_17bf8c:
    // 0x17bf8c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17bf8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17bf90:
    // 0x17bf90: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17bf90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17bf94:
    // 0x17bf94: 0x1000000b  b           . + 4 + (0xB << 2)
label_17bf98:
    if (ctx->pc == 0x17BF98u) {
        ctx->pc = 0x17BF9Cu;
        goto label_17bf9c;
    }
    ctx->pc = 0x17BF94u;
    {
        const bool branch_taken_0x17bf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bf94) {
            ctx->pc = 0x17BFC4u;
            goto label_17bfc4;
        }
    }
    ctx->pc = 0x17BF9Cu;
label_17bf9c:
    // 0x17bf9c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17bf9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_17bfa0:
    // 0x17bfa0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x17bfa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_17bfa4:
    // 0x17bfa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17bfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bfa8:
    // 0x17bfa8: 0x0  nop
    ctx->pc = 0x17bfa8u;
    // NOP
label_17bfac:
    // 0x17bfac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17bfacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17bfb0:
    // 0x17bfb0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17bfb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bfb4:
    // 0x17bfb4: 0x0  nop
    ctx->pc = 0x17bfb4u;
    // NOP
label_17bfb8:
    // 0x17bfb8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_17bfbc:
    if (ctx->pc == 0x17BFBCu) {
        ctx->pc = 0x17BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFB8u;
        // 0x17bfbc: 0x46000dc6  mov.s       $f23, $f1 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BFC0u;
        goto label_17bfc0;
    }
    ctx->pc = 0x17BFB8u;
    {
        const bool branch_taken_0x17bfb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFB8u;
        // 0x17bfbc: 0x46000dc6  mov.s       $f23, $f1 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bfb8) {
            ctx->pc = 0x17BFD0u;
            goto label_17bfd0;
        }
    }
    ctx->pc = 0x17BFC0u;
label_17bfc0:
    // 0x17bfc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17bfc4:
    // 0x17bfc4: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x17bfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_17bfc8:
    // 0x17bfc8: 0x0  nop
    ctx->pc = 0x17bfc8u;
    // NOP
label_17bfcc:
    // 0x17bfcc: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x17bfccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_17bfd0:
    // 0x17bfd0: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x17bfd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_17bfd4:
    // 0x17bfd4: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x17bfd4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_17bfd8:
    // 0x17bfd8: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x17bfd8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17bfdc:
    // 0x17bfdc: 0x0  nop
    ctx->pc = 0x17bfdcu;
    // NOP
label_17bfe0:
    // 0x17bfe0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17bfe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17bfe4:
    // 0x17bfe4: 0xae40f774  sw          $zero, -0x88C($s2)
    ctx->pc = 0x17bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294965108), GPR_U32(ctx, 0));
label_17bfe8:
    // 0x17bfe8: 0x3c01c0c9  lui         $at, 0xC0C9
    ctx->pc = 0x17bfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49353 << 16));
label_17bfec:
    // 0x17bfec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17bfecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_17bff0:
    // 0x17bff0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17bff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17bff4:
    // 0x17bff4: 0x922200b9  lbu         $v0, 0xB9($s1)
    ctx->pc = 0x17bff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 185)));
label_17bff8:
    // 0x17bff8: 0x0  nop
    ctx->pc = 0x17bff8u;
    // NOP
label_17bffc:
    // 0x17bffc: 0x0  nop
    ctx->pc = 0x17bffcu;
    // NOP
label_17c000:
    // 0x17c000: 0x46010603  div.s       $f24, $f0, $f1
    ctx->pc = 0x17c000u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_17c004:
    // 0x17c004: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17c008:
    if (ctx->pc == 0x17C008u) {
        ctx->pc = 0x17C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C004u;
        // 0x17c008: 0x7fa32000  sq          $v1, 0x2000($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 8192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C00Cu;
        goto label_17c00c;
    }
    ctx->pc = 0x17C004u;
    {
        const bool branch_taken_0x17c004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C004u;
        // 0x17c008: 0x7fa32000  sq          $v1, 0x2000($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 8192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c004) {
            ctx->pc = 0x17C014u;
            goto label_17c014;
        }
    }
    ctx->pc = 0x17C00Cu;
label_17c00c:
    // 0x17c00c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c010:
    // 0x17c010: 0xae42f774  sw          $v0, -0x88C($s2)
    ctx->pc = 0x17c010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294965108), GPR_U32(ctx, 2));
label_17c014:
    // 0x17c014: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17c014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c018:
    // 0x17c018: 0x27b32000  addiu       $s3, $sp, 0x2000
    ctx->pc = 0x17c018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 8192));
label_17c01c:
    // 0x17c01c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17c01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17c020:
    // 0x17c020: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17c020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17c024:
    // 0x17c024: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x17c024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_17c028:
    // 0x17c028: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17c028u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c02c:
    // 0x17c02c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17c030:
    // 0x17c030: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x17c030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_17c034:
    // 0x17c034: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x17c034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_17c038:
    // 0x17c038: 0x60f809  jalr        $v1
label_17c03c:
    if (ctx->pc == 0x17C03Cu) {
        ctx->pc = 0x17C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C038u;
        // 0x17c03c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C040u;
        goto label_17c040;
    }
    ctx->pc = 0x17C038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17C040u);
        ctx->pc = 0x17C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C038u;
        // 0x17c03c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C038u, 0x17C040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C040u;
label_17c040:
    // 0x17c040: 0x8e36005c  lw          $s6, 0x5C($s1)
    ctx->pc = 0x17c040u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_17c044:
    // 0x17c044: 0x4600d706  mov.s       $f28, $f26
    ctx->pc = 0x17c044u;
    ctx->f[28] = FPU_MOV_S(ctx->f[26]);
label_17c048:
    // 0x17c048: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_17c04c:
    if (ctx->pc == 0x17C04Cu) {
        ctx->pc = 0x17C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C048u;
        // 0x17c04c: 0xae40f774  sw          $zero, -0x88C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294965108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C050u;
        goto label_17c050;
    }
    ctx->pc = 0x17C048u;
    {
        const bool branch_taken_0x17c048 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C048u;
        // 0x17c04c: 0xae40f774  sw          $zero, -0x88C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294965108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c048) {
            ctx->pc = 0x17C05Cu;
            goto label_17c05c;
        }
    }
    ctx->pc = 0x17C050u;
label_17c050:
    // 0x17c050: 0xc63c004c  lwc1        $f28, 0x4C($s1)
    ctx->pc = 0x17c050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_17c054:
    // 0x17c054: 0x27b42010  addiu       $s4, $sp, 0x2010
    ctx->pc = 0x17c054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8208));
label_17c058:
    // 0x17c058: 0xc63a0050  lwc1        $f26, 0x50($s1)
    ctx->pc = 0x17c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_17c05c:
    // 0x17c05c: 0x6a220043  ldl         $v0, 0x43($s1)
    ctx->pc = 0x17c05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_17c060:
    // 0x17c060: 0x6e22003c  ldr         $v0, 0x3C($s1)
    ctx->pc = 0x17c060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_17c064:
    // 0x17c064: 0x6a23004b  ldl         $v1, 0x4B($s1)
    ctx->pc = 0x17c064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_17c068:
    // 0x17c068: 0x6e230044  ldr         $v1, 0x44($s1)
    ctx->pc = 0x17c068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_17c06c:
    // 0x17c06c: 0xb3a22027  sdl         $v0, 0x2027($sp)
    ctx->pc = 0x17c06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c070:
    // 0x17c070: 0xb7a22020  sdr         $v0, 0x2020($sp)
    ctx->pc = 0x17c070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c074:
    // 0x17c074: 0xb3a3202f  sdl         $v1, 0x202F($sp)
    ctx->pc = 0x17c074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c078:
    // 0x17c078: 0xb7a32028  sdr         $v1, 0x2028($sp)
    ctx->pc = 0x17c078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17c07c:
    // 0x17c07c: 0x27a62020  addiu       $a2, $sp, 0x2020
    ctx->pc = 0x17c07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8224));
label_17c080:
    // 0x17c080: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17c080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17c084:
    // 0x17c084: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x17c084u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c088:
    // 0x17c088: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17c088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c08c:
    // 0x17c08c: 0x2627004c  addiu       $a3, $s1, 0x4C
    ctx->pc = 0x17c08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_17c090:
    // 0x17c090: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17c090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c094:
    // 0x17c094: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x17c094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_17c098:
    // 0x17c098: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x17c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_17c09c:
    // 0x17c09c: 0x40f809  jalr        $v0
label_17c0a0:
    if (ctx->pc == 0x17C0A0u) {
        ctx->pc = 0x17C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C09Cu;
        // 0x17c0a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C0A4u;
        goto label_17c0a4;
    }
    ctx->pc = 0x17C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C0A4u);
        ctx->pc = 0x17C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C09Cu;
        // 0x17c0a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C09Cu, 0x17C0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C0A4u;
label_17c0a4:
    // 0x17c0a4: 0x27a42040  addiu       $a0, $sp, 0x2040
    ctx->pc = 0x17c0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8256));
label_17c0a8:
    // 0x17c0a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c0ac:
    // 0x17c0ac: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x17c0acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c0b0:
    // 0x17c0b0: 0xc10c1fa  jal         func_4307E8
label_17c0b4:
    if (ctx->pc == 0x17C0B4u) {
        ctx->pc = 0x17C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0B0u;
        // 0x17c0b4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C0B8u;
        goto label_17c0b8;
    }
    ctx->pc = 0x17C0B0u;
    SET_GPR_U32(ctx, 31, 0x17C0B8u);
    ctx->pc = 0x17C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0B0u;
    // 0x17c0b4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x17C0B0u, 0x17C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0B8u;
label_17c0b8:
    // 0x17c0b8: 0x26a20002  addiu       $v0, $s5, 0x2
    ctx->pc = 0x17c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_17c0bc:
    // 0x17c0bc: 0xc63f0010  lwc1        $f31, 0x10($s1)
    ctx->pc = 0x17c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_17c0c0:
    // 0x17c0c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17c0c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c0c4:
    // 0x17c0c4: 0xc63e0014  lwc1        $f30, 0x14($s1)
    ctx->pc = 0x17c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_17c0c8:
    // 0x17c0c8: 0xc63d0018  lwc1        $f29, 0x18($s1)
    ctx->pc = 0x17c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_17c0cc:
    // 0x17c0cc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17c0ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_17c0d0:
    // 0x17c0d0: 0xc63b001c  lwc1        $f27, 0x1C($s1)
    ctx->pc = 0x17c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_17c0d4:
    // 0x17c0d4: 0xc6360020  lwc1        $f22, 0x20($s1)
    ctx->pc = 0x17c0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17c0d8:
    // 0x17c0d8: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_17c0dc:
    if (ctx->pc == 0x17C0DCu) {
        ctx->pc = 0x17C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0D8u;
        // 0x17c0dc: 0xc6350024  lwc1        $f21, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C0E0u;
        goto label_17c0e0;
    }
    ctx->pc = 0x17C0D8u;
    {
        const bool branch_taken_0x17c0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0D8u;
        // 0x17c0dc: 0xc6350024  lwc1        $f21, 0x24($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0d8) {
            ctx->pc = 0x17C224u;
            goto label_17c224;
        }
    }
    ctx->pc = 0x17C0E0u;
label_17c0e0:
    // 0x17c0e0: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x17c0e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_17c0e4:
    // 0x17c0e4: 0x0  nop
    ctx->pc = 0x17c0e4u;
    // NOP
label_17c0e8:
    // 0x17c0e8: 0xc12e310  jal         func_4B8C40
label_17c0ec:
    if (ctx->pc == 0x17C0ECu) {
        ctx->pc = 0x17C0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0E8u;
        // 0x17c0ec: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C0F0u;
        goto label_17c0f0;
    }
    ctx->pc = 0x17C0E8u;
    SET_GPR_U32(ctx, 31, 0x17C0F0u);
    ctx->pc = 0x17C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0E8u;
    // 0x17c0ec: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x17C0E8u, 0x17C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0F0u;
label_17c0f0:
    // 0x17c0f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17c0f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17c0f4:
    // 0x17c0f4: 0xc12e29c  jal         func_4B8A70
label_17c0f8:
    if (ctx->pc == 0x17C0F8u) {
        ctx->pc = 0x17C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0F4u;
        // 0x17c0f8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C0FCu;
        goto label_17c0fc;
    }
    ctx->pc = 0x17C0F4u;
    SET_GPR_U32(ctx, 31, 0x17C0FCu);
    ctx->pc = 0x17C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0F4u;
    // 0x17c0f8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x17C0F4u, 0x17C0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0FCu;
label_17c0fc:
    // 0x17c0fc: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_17c100:
    if (ctx->pc == 0x17C100u) {
        ctx->pc = 0x17C104u;
        goto label_17c104;
    }
    ctx->pc = 0x17C0FCu;
    {
        const bool branch_taken_0x17c0fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c0fc) {
            ctx->pc = 0x17C11Cu;
            goto label_17c11c;
        }
    }
    ctx->pc = 0x17C104u;
label_17c104:
    // 0x17c104: 0x4600f802  mul.s       $f0, $f31, $f0
    ctx->pc = 0x17c104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[31], ctx->f[0]);
label_17c108:
    // 0x17c108: 0x4614f042  mul.s       $f1, $f30, $f20
    ctx->pc = 0x17c108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[30], ctx->f[20]);
label_17c10c:
    // 0x17c10c: 0x461c0000  add.s       $f0, $f0, $f28
    ctx->pc = 0x17c10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[28]);
label_17c110:
    // 0x17c110: 0x4601d041  sub.s       $f1, $f26, $f1
    ctx->pc = 0x17c110u;
    ctx->f[1] = FPU_SUB_S(ctx->f[26], ctx->f[1]);
label_17c114:
    // 0x17c114: 0xe7a02010  swc1        $f0, 0x2010($sp)
    ctx->pc = 0x17c114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8208), bits); }
label_17c118:
    // 0x17c118: 0xe7a12014  swc1        $f1, 0x2014($sp)
    ctx->pc = 0x17c118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8212), bits); }
label_17c11c:
    // 0x17c11c: 0xc12e310  jal         func_4B8C40
label_17c120:
    if (ctx->pc == 0x17C120u) {
        ctx->pc = 0x17C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C11Cu;
        // 0x17c120: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C124u;
        goto label_17c124;
    }
    ctx->pc = 0x17C11Cu;
    SET_GPR_U32(ctx, 31, 0x17C124u);
    ctx->pc = 0x17C120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C11Cu;
    // 0x17c120: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x17C11Cu, 0x17C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C124u;
label_17c124:
    // 0x17c124: 0x4600ed02  mul.s       $f20, $f29, $f0
    ctx->pc = 0x17c124u;
    ctx->f[20] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
label_17c128:
    // 0x17c128: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x17c128u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_17c12c:
    // 0x17c12c: 0xc7a02000  lwc1        $f0, 0x2000($sp)
    ctx->pc = 0x17c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17c130:
    // 0x17c130: 0xc12e29c  jal         func_4B8A70
label_17c134:
    if (ctx->pc == 0x17C134u) {
        ctx->pc = 0x17C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C130u;
        // 0x17c134: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C138u;
        goto label_17c138;
    }
    ctx->pc = 0x17C130u;
    SET_GPR_U32(ctx, 31, 0x17C138u);
    ctx->pc = 0x17C134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C130u;
    // 0x17c134: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x17C130u, 0x17C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C138u;
label_17c138:
    // 0x17c138: 0x4600d802  mul.s       $f0, $f27, $f0
    ctx->pc = 0x17c138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
label_17c13c:
    // 0x17c13c: 0xc7a12004  lwc1        $f1, 0x2004($sp)
    ctx->pc = 0x17c13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17c140:
    // 0x17c140: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x17c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_17c144:
    // 0x17c144: 0xc7a22008  lwc1        $f2, 0x2008($sp)
    ctx->pc = 0x17c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17c148:
    // 0x17c148: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x17c148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17c14c:
    // 0x17c14c: 0x0  nop
    ctx->pc = 0x17c14cu;
    // NOP
label_17c150:
    // 0x17c150: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17c150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_17c154:
    // 0x17c154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17c154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c158:
    // 0x17c158: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17c158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17c15c:
    // 0x17c15c: 0x27a22030  addiu       $v0, $sp, 0x2030
    ctx->pc = 0x17c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8240));
label_17c160:
    // 0x17c160: 0xe7b42030  swc1        $f20, 0x2030($sp)
    ctx->pc = 0x17c160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8240), bits); }
label_17c164:
    // 0x17c164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17c164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c168:
    // 0x17c168: 0x46171836  c.le.s      $f3, $f23
    ctx->pc = 0x17c168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c16c:
    // 0x17c16c: 0xe7a22038  swc1        $f2, 0x2038($sp)
    ctx->pc = 0x17c16cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8248), bits); }
label_17c170:
    // 0x17c170: 0xe7a02034  swc1        $f0, 0x2034($sp)
    ctx->pc = 0x17c170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8244), bits); }
label_17c174:
    // 0x17c174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17c174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17c178:
    // 0x17c178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17c178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c17c:
    // 0x17c17c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_17c180:
    if (ctx->pc == 0x17C180u) {
        ctx->pc = 0x17C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C17Cu;
        // 0x17c180: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C184u;
        goto label_17c184;
    }
    ctx->pc = 0x17C17Cu;
    {
        const bool branch_taken_0x17c17c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C17Cu;
        // 0x17c180: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c17c) {
            ctx->pc = 0x17C194u;
            goto label_17c194;
        }
    }
    ctx->pc = 0x17C184u;
label_17c184:
    // 0x17c184: 0x4617c834  c.lt.s      $f25, $f23
    ctx->pc = 0x17c184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c188:
    // 0x17c188: 0x0  nop
    ctx->pc = 0x17c188u;
    // NOP
label_17c18c:
    // 0x17c18c: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
label_17c190:
    if (ctx->pc == 0x17C190u) {
        ctx->pc = 0x17C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C18Cu;
        // 0x17c190: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C194u;
        goto label_17c194;
    }
    ctx->pc = 0x17C18Cu;
    {
        const bool branch_taken_0x17c18c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c18c) {
            ctx->pc = 0x17C190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C18Cu;
            // 0x17c190: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C1D4u;
            goto label_17c1d4;
        }
    }
    ctx->pc = 0x17C194u;
label_17c194:
    // 0x17c194: 0x922300b8  lbu         $v1, 0xB8($s1)
    ctx->pc = 0x17c194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
label_17c198:
    // 0x17c198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c19c:
    // 0x17c19c: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
label_17c1a0:
    if (ctx->pc == 0x17C1A0u) {
        ctx->pc = 0x17C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C19Cu;
        // 0x17c1a0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C1A4u;
        goto label_17c1a4;
    }
    ctx->pc = 0x17C19Cu;
    {
        const bool branch_taken_0x17c19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17c19c) {
            ctx->pc = 0x17C1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C19Cu;
            // 0x17c1a0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C1F4u;
            goto label_17c1f4;
        }
    }
    ctx->pc = 0x17C1A4u;
label_17c1a4:
    // 0x17c1a4: 0x2a41023  subu        $v0, $s5, $a0
    ctx->pc = 0x17c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_17c1a8:
    // 0x17c1a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17c1ac:
    // 0x17c1ac: 0x0  nop
    ctx->pc = 0x17c1acu;
    // NOP
label_17c1b0:
    // 0x17c1b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17c1b4:
    // 0x17c1b4: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x17c1b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c1b8:
    // 0x17c1b8: 0x0  nop
    ctx->pc = 0x17c1b8u;
    // NOP
label_17c1bc:
    // 0x17c1bc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_17c1c0:
    if (ctx->pc == 0x17C1C0u) {
        ctx->pc = 0x17C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1BCu;
        // 0x17c1c0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C1C4u;
        goto label_17c1c4;
    }
    ctx->pc = 0x17C1BCu;
    {
        const bool branch_taken_0x17c1bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1BCu;
        // 0x17c1c0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1bc) {
            ctx->pc = 0x17C1F4u;
            goto label_17c1f4;
        }
    }
    ctx->pc = 0x17C1C4u;
label_17c1c4:
    // 0x17c1c4: 0x4617c834  c.lt.s      $f25, $f23
    ctx->pc = 0x17c1c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17c1c8:
    // 0x17c1c8: 0x0  nop
    ctx->pc = 0x17c1c8u;
    // NOP
label_17c1cc:
    // 0x17c1cc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_17c1d0:
    if (ctx->pc == 0x17C1D0u) {
        ctx->pc = 0x17C1D4u;
        goto label_17c1d4;
    }
    ctx->pc = 0x17C1CCu;
    {
        const bool branch_taken_0x17c1cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c1cc) {
            ctx->pc = 0x17C1F4u;
            goto label_17c1f4;
        }
    }
    ctx->pc = 0x17C1D4u;
label_17c1d4:
    // 0x17c1d4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17c1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17c1d8:
    // 0x17c1d8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x17c1d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17c1dc:
    // 0x17c1dc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x17c1dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_17c1e0:
    // 0x17c1e0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x17c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_17c1e4:
    // 0x17c1e4: 0x60f809  jalr        $v1
label_17c1e8:
    if (ctx->pc == 0x17C1E8u) {
        ctx->pc = 0x17C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1E4u;
        // 0x17c1e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C1ECu;
        goto label_17c1ec;
    }
    ctx->pc = 0x17C1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17C1ECu);
        ctx->pc = 0x17C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1E4u;
        // 0x17c1e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C1E4u, 0x17C1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C1ECu;
label_17c1ec:
    // 0x17c1ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_17c1f0:
    if (ctx->pc == 0x17C1F0u) {
        ctx->pc = 0x17C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1ECu;
        // 0x17c1f0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C1F4u;
        goto label_17c1f4;
    }
    ctx->pc = 0x17C1ECu;
    {
        const bool branch_taken_0x17c1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C1ECu;
        // 0x17c1f0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c1ec) {
            ctx->pc = 0x17C210u;
            goto label_17c210;
        }
    }
    ctx->pc = 0x17C1F4u;
label_17c1f4:
    // 0x17c1f4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x17c1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_17c1f8:
    // 0x17c1f8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x17c1f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17c1fc:
    // 0x17c1fc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x17c1fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_17c200:
    // 0x17c200: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x17c200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_17c204:
    // 0x17c204: 0x60f809  jalr        $v1
label_17c208:
    if (ctx->pc == 0x17C208u) {
        ctx->pc = 0x17C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C204u;
        // 0x17c208: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C20Cu;
        goto label_17c20c;
    }
    ctx->pc = 0x17C204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17C20Cu);
        ctx->pc = 0x17C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C204u;
        // 0x17c208: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C204u, 0x17C20Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C20Cu;
label_17c20c:
    // 0x17c20c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x17c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17c210:
    // 0x17c210: 0x4618b580  add.s       $f22, $f22, $f24
    ctx->pc = 0x17c210u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[24]);
label_17c214:
    // 0x17c214: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x17c214u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17c218:
    // 0x17c218: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x17c218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_17c21c:
    // 0x17c21c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_17c220:
    if (ctx->pc == 0x17C220u) {
        ctx->pc = 0x17C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C21Cu;
        // 0x17c220: 0x4618ad40  add.s       $f21, $f21, $f24 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C224u;
        goto label_17c224;
    }
    ctx->pc = 0x17C21Cu;
    {
        const bool branch_taken_0x17c21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C21Cu;
        // 0x17c220: 0x4618ad40  add.s       $f21, $f21, $f24 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c21c) {
            ctx->pc = 0x17C0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c0e8;
        }
    }
    ctx->pc = 0x17C224u;
label_17c224:
    // 0x17c224: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17c224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c228:
    // 0x17c228: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x17c228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_17c22c:
    // 0x17c22c: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x17c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_17c230:
    // 0x17c230: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17c230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c234:
    // 0x17c234: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x17c234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_17c238:
    // 0x17c238: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x17c238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_17c23c:
    // 0x17c23c: 0x60f809  jalr        $v1
label_17c240:
    if (ctx->pc == 0x17C240u) {
        ctx->pc = 0x17C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C23Cu;
        // 0x17c240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C244u;
        goto label_17c244;
    }
    ctx->pc = 0x17C23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17C244u);
        ctx->pc = 0x17C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C23Cu;
        // 0x17c240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C23Cu, 0x17C244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C244u;
label_17c244:
    // 0x17c244: 0x7bb020e0  lq          $s0, 0x20E0($sp)
    ctx->pc = 0x17c244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 8416)));
label_17c248:
    // 0x17c248: 0x7bb120d0  lq          $s1, 0x20D0($sp)
    ctx->pc = 0x17c248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 8400)));
label_17c24c:
    // 0x17c24c: 0x7bb220c0  lq          $s2, 0x20C0($sp)
    ctx->pc = 0x17c24cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 8384)));
label_17c250:
    // 0x17c250: 0x7bb320b0  lq          $s3, 0x20B0($sp)
    ctx->pc = 0x17c250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 8368)));
label_17c254:
    // 0x17c254: 0x7bb420a0  lq          $s4, 0x20A0($sp)
    ctx->pc = 0x17c254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 8352)));
label_17c258:
    // 0x17c258: 0x7bb52090  lq          $s5, 0x2090($sp)
    ctx->pc = 0x17c258u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 8336)));
label_17c25c:
    // 0x17c25c: 0x7bb62080  lq          $s6, 0x2080($sp)
    ctx->pc = 0x17c25cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 8320)));
label_17c260:
    // 0x17c260: 0x7bb72070  lq          $s7, 0x2070($sp)
    ctx->pc = 0x17c260u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 8304)));
label_17c264:
    // 0x17c264: 0x7bbe2060  lq          $fp, 0x2060($sp)
    ctx->pc = 0x17c264u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 8288)));
label_17c268:
    // 0x17c268: 0xdfbf2050  ld          $ra, 0x2050($sp)
    ctx->pc = 0x17c268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8272)));
label_17c26c:
    // 0x17c26c: 0xc7bf2148  lwc1        $f31, 0x2148($sp)
    ctx->pc = 0x17c26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_17c270:
    // 0x17c270: 0xc7be2140  lwc1        $f30, 0x2140($sp)
    ctx->pc = 0x17c270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_17c274:
    // 0x17c274: 0xc7bd2138  lwc1        $f29, 0x2138($sp)
    ctx->pc = 0x17c274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_17c278:
    // 0x17c278: 0xc7bc2130  lwc1        $f28, 0x2130($sp)
    ctx->pc = 0x17c278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_17c27c:
    // 0x17c27c: 0xc7bb2128  lwc1        $f27, 0x2128($sp)
    ctx->pc = 0x17c27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_17c280:
    // 0x17c280: 0xc7ba2120  lwc1        $f26, 0x2120($sp)
    ctx->pc = 0x17c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_17c284:
    // 0x17c284: 0xc7b92118  lwc1        $f25, 0x2118($sp)
    ctx->pc = 0x17c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_17c288:
    // 0x17c288: 0xc7b82110  lwc1        $f24, 0x2110($sp)
    ctx->pc = 0x17c288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_17c28c:
    // 0x17c28c: 0xc7b72108  lwc1        $f23, 0x2108($sp)
    ctx->pc = 0x17c28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_17c290:
    // 0x17c290: 0xc7b62100  lwc1        $f22, 0x2100($sp)
    ctx->pc = 0x17c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17c294:
    // 0x17c294: 0xc7b520f8  lwc1        $f21, 0x20F8($sp)
    ctx->pc = 0x17c294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17c298:
    // 0x17c298: 0xc7b420f0  lwc1        $f20, 0x20F0($sp)
    ctx->pc = 0x17c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17c29c:
    // 0x17c29c: 0x3e00008  jr          $ra
label_17c2a0:
    if (ctx->pc == 0x17C2A0u) {
        ctx->pc = 0x17C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C29Cu;
        // 0x17c2a0: 0x27bd2150  addiu       $sp, $sp, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C2A4u;
        goto label_17c2a4;
    }
    ctx->pc = 0x17C29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C29Cu;
        // 0x17c2a0: 0x27bd2150  addiu       $sp, $sp, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C2A4u;
label_17c2a4:
    // 0x17c2a4: 0x0  nop
    ctx->pc = 0x17c2a4u;
    // NOP
    ctx->pc = 0x17c2a8u;
}
