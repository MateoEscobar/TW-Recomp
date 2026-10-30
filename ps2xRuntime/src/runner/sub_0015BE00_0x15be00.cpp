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

// Function: sub_0015BE00
// Address: 0x15be00 - 0x15c2c0
void sub_0015BE00_0x15be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BE00_0x15be00");
#endif

    switch (ctx->pc) {
        case 0x15be00u: goto label_15be00;
        case 0x15be04u: goto label_15be04;
        case 0x15be08u: goto label_15be08;
        case 0x15be0cu: goto label_15be0c;
        case 0x15be10u: goto label_15be10;
        case 0x15be14u: goto label_15be14;
        case 0x15be18u: goto label_15be18;
        case 0x15be1cu: goto label_15be1c;
        case 0x15be20u: goto label_15be20;
        case 0x15be24u: goto label_15be24;
        case 0x15be28u: goto label_15be28;
        case 0x15be2cu: goto label_15be2c;
        case 0x15be30u: goto label_15be30;
        case 0x15be34u: goto label_15be34;
        case 0x15be38u: goto label_15be38;
        case 0x15be3cu: goto label_15be3c;
        case 0x15be40u: goto label_15be40;
        case 0x15be44u: goto label_15be44;
        case 0x15be48u: goto label_15be48;
        case 0x15be4cu: goto label_15be4c;
        case 0x15be50u: goto label_15be50;
        case 0x15be54u: goto label_15be54;
        case 0x15be58u: goto label_15be58;
        case 0x15be5cu: goto label_15be5c;
        case 0x15be60u: goto label_15be60;
        case 0x15be64u: goto label_15be64;
        case 0x15be68u: goto label_15be68;
        case 0x15be6cu: goto label_15be6c;
        case 0x15be70u: goto label_15be70;
        case 0x15be74u: goto label_15be74;
        case 0x15be78u: goto label_15be78;
        case 0x15be7cu: goto label_15be7c;
        case 0x15be80u: goto label_15be80;
        case 0x15be84u: goto label_15be84;
        case 0x15be88u: goto label_15be88;
        case 0x15be8cu: goto label_15be8c;
        case 0x15be90u: goto label_15be90;
        case 0x15be94u: goto label_15be94;
        case 0x15be98u: goto label_15be98;
        case 0x15be9cu: goto label_15be9c;
        case 0x15bea0u: goto label_15bea0;
        case 0x15bea4u: goto label_15bea4;
        case 0x15bea8u: goto label_15bea8;
        case 0x15beacu: goto label_15beac;
        case 0x15beb0u: goto label_15beb0;
        case 0x15beb4u: goto label_15beb4;
        case 0x15beb8u: goto label_15beb8;
        case 0x15bebcu: goto label_15bebc;
        case 0x15bec0u: goto label_15bec0;
        case 0x15bec4u: goto label_15bec4;
        case 0x15bec8u: goto label_15bec8;
        case 0x15beccu: goto label_15becc;
        case 0x15bed0u: goto label_15bed0;
        case 0x15bed4u: goto label_15bed4;
        case 0x15bed8u: goto label_15bed8;
        case 0x15bedcu: goto label_15bedc;
        case 0x15bee0u: goto label_15bee0;
        case 0x15bee4u: goto label_15bee4;
        case 0x15bee8u: goto label_15bee8;
        case 0x15beecu: goto label_15beec;
        case 0x15bef0u: goto label_15bef0;
        case 0x15bef4u: goto label_15bef4;
        case 0x15bef8u: goto label_15bef8;
        case 0x15befcu: goto label_15befc;
        case 0x15bf00u: goto label_15bf00;
        case 0x15bf04u: goto label_15bf04;
        case 0x15bf08u: goto label_15bf08;
        case 0x15bf0cu: goto label_15bf0c;
        case 0x15bf10u: goto label_15bf10;
        case 0x15bf14u: goto label_15bf14;
        case 0x15bf18u: goto label_15bf18;
        case 0x15bf1cu: goto label_15bf1c;
        case 0x15bf20u: goto label_15bf20;
        case 0x15bf24u: goto label_15bf24;
        case 0x15bf28u: goto label_15bf28;
        case 0x15bf2cu: goto label_15bf2c;
        case 0x15bf30u: goto label_15bf30;
        case 0x15bf34u: goto label_15bf34;
        case 0x15bf38u: goto label_15bf38;
        case 0x15bf3cu: goto label_15bf3c;
        case 0x15bf40u: goto label_15bf40;
        case 0x15bf44u: goto label_15bf44;
        case 0x15bf48u: goto label_15bf48;
        case 0x15bf4cu: goto label_15bf4c;
        case 0x15bf50u: goto label_15bf50;
        case 0x15bf54u: goto label_15bf54;
        case 0x15bf58u: goto label_15bf58;
        case 0x15bf5cu: goto label_15bf5c;
        case 0x15bf60u: goto label_15bf60;
        case 0x15bf64u: goto label_15bf64;
        case 0x15bf68u: goto label_15bf68;
        case 0x15bf6cu: goto label_15bf6c;
        case 0x15bf70u: goto label_15bf70;
        case 0x15bf74u: goto label_15bf74;
        case 0x15bf78u: goto label_15bf78;
        case 0x15bf7cu: goto label_15bf7c;
        case 0x15bf80u: goto label_15bf80;
        case 0x15bf84u: goto label_15bf84;
        case 0x15bf88u: goto label_15bf88;
        case 0x15bf8cu: goto label_15bf8c;
        case 0x15bf90u: goto label_15bf90;
        case 0x15bf94u: goto label_15bf94;
        case 0x15bf98u: goto label_15bf98;
        case 0x15bf9cu: goto label_15bf9c;
        case 0x15bfa0u: goto label_15bfa0;
        case 0x15bfa4u: goto label_15bfa4;
        case 0x15bfa8u: goto label_15bfa8;
        case 0x15bfacu: goto label_15bfac;
        case 0x15bfb0u: goto label_15bfb0;
        case 0x15bfb4u: goto label_15bfb4;
        case 0x15bfb8u: goto label_15bfb8;
        case 0x15bfbcu: goto label_15bfbc;
        case 0x15bfc0u: goto label_15bfc0;
        case 0x15bfc4u: goto label_15bfc4;
        case 0x15bfc8u: goto label_15bfc8;
        case 0x15bfccu: goto label_15bfcc;
        case 0x15bfd0u: goto label_15bfd0;
        case 0x15bfd4u: goto label_15bfd4;
        case 0x15bfd8u: goto label_15bfd8;
        case 0x15bfdcu: goto label_15bfdc;
        case 0x15bfe0u: goto label_15bfe0;
        case 0x15bfe4u: goto label_15bfe4;
        case 0x15bfe8u: goto label_15bfe8;
        case 0x15bfecu: goto label_15bfec;
        case 0x15bff0u: goto label_15bff0;
        case 0x15bff4u: goto label_15bff4;
        case 0x15bff8u: goto label_15bff8;
        case 0x15bffcu: goto label_15bffc;
        case 0x15c000u: goto label_15c000;
        case 0x15c004u: goto label_15c004;
        case 0x15c008u: goto label_15c008;
        case 0x15c00cu: goto label_15c00c;
        case 0x15c010u: goto label_15c010;
        case 0x15c014u: goto label_15c014;
        case 0x15c018u: goto label_15c018;
        case 0x15c01cu: goto label_15c01c;
        case 0x15c020u: goto label_15c020;
        case 0x15c024u: goto label_15c024;
        case 0x15c028u: goto label_15c028;
        case 0x15c02cu: goto label_15c02c;
        case 0x15c030u: goto label_15c030;
        case 0x15c034u: goto label_15c034;
        case 0x15c038u: goto label_15c038;
        case 0x15c03cu: goto label_15c03c;
        case 0x15c040u: goto label_15c040;
        case 0x15c044u: goto label_15c044;
        case 0x15c048u: goto label_15c048;
        case 0x15c04cu: goto label_15c04c;
        case 0x15c050u: goto label_15c050;
        case 0x15c054u: goto label_15c054;
        case 0x15c058u: goto label_15c058;
        case 0x15c05cu: goto label_15c05c;
        case 0x15c060u: goto label_15c060;
        case 0x15c064u: goto label_15c064;
        case 0x15c068u: goto label_15c068;
        case 0x15c06cu: goto label_15c06c;
        case 0x15c070u: goto label_15c070;
        case 0x15c074u: goto label_15c074;
        case 0x15c078u: goto label_15c078;
        case 0x15c07cu: goto label_15c07c;
        case 0x15c080u: goto label_15c080;
        case 0x15c084u: goto label_15c084;
        case 0x15c088u: goto label_15c088;
        case 0x15c08cu: goto label_15c08c;
        case 0x15c090u: goto label_15c090;
        case 0x15c094u: goto label_15c094;
        case 0x15c098u: goto label_15c098;
        case 0x15c09cu: goto label_15c09c;
        case 0x15c0a0u: goto label_15c0a0;
        case 0x15c0a4u: goto label_15c0a4;
        case 0x15c0a8u: goto label_15c0a8;
        case 0x15c0acu: goto label_15c0ac;
        case 0x15c0b0u: goto label_15c0b0;
        case 0x15c0b4u: goto label_15c0b4;
        case 0x15c0b8u: goto label_15c0b8;
        case 0x15c0bcu: goto label_15c0bc;
        case 0x15c0c0u: goto label_15c0c0;
        case 0x15c0c4u: goto label_15c0c4;
        case 0x15c0c8u: goto label_15c0c8;
        case 0x15c0ccu: goto label_15c0cc;
        case 0x15c0d0u: goto label_15c0d0;
        case 0x15c0d4u: goto label_15c0d4;
        case 0x15c0d8u: goto label_15c0d8;
        case 0x15c0dcu: goto label_15c0dc;
        case 0x15c0e0u: goto label_15c0e0;
        case 0x15c0e4u: goto label_15c0e4;
        case 0x15c0e8u: goto label_15c0e8;
        case 0x15c0ecu: goto label_15c0ec;
        case 0x15c0f0u: goto label_15c0f0;
        case 0x15c0f4u: goto label_15c0f4;
        case 0x15c0f8u: goto label_15c0f8;
        case 0x15c0fcu: goto label_15c0fc;
        case 0x15c100u: goto label_15c100;
        case 0x15c104u: goto label_15c104;
        case 0x15c108u: goto label_15c108;
        case 0x15c10cu: goto label_15c10c;
        case 0x15c110u: goto label_15c110;
        case 0x15c114u: goto label_15c114;
        case 0x15c118u: goto label_15c118;
        case 0x15c11cu: goto label_15c11c;
        case 0x15c120u: goto label_15c120;
        case 0x15c124u: goto label_15c124;
        case 0x15c128u: goto label_15c128;
        case 0x15c12cu: goto label_15c12c;
        case 0x15c130u: goto label_15c130;
        case 0x15c134u: goto label_15c134;
        case 0x15c138u: goto label_15c138;
        case 0x15c13cu: goto label_15c13c;
        case 0x15c140u: goto label_15c140;
        case 0x15c144u: goto label_15c144;
        case 0x15c148u: goto label_15c148;
        case 0x15c14cu: goto label_15c14c;
        case 0x15c150u: goto label_15c150;
        case 0x15c154u: goto label_15c154;
        case 0x15c158u: goto label_15c158;
        case 0x15c15cu: goto label_15c15c;
        case 0x15c160u: goto label_15c160;
        case 0x15c164u: goto label_15c164;
        case 0x15c168u: goto label_15c168;
        case 0x15c16cu: goto label_15c16c;
        case 0x15c170u: goto label_15c170;
        case 0x15c174u: goto label_15c174;
        case 0x15c178u: goto label_15c178;
        case 0x15c17cu: goto label_15c17c;
        case 0x15c180u: goto label_15c180;
        case 0x15c184u: goto label_15c184;
        case 0x15c188u: goto label_15c188;
        case 0x15c18cu: goto label_15c18c;
        case 0x15c190u: goto label_15c190;
        case 0x15c194u: goto label_15c194;
        case 0x15c198u: goto label_15c198;
        case 0x15c19cu: goto label_15c19c;
        case 0x15c1a0u: goto label_15c1a0;
        case 0x15c1a4u: goto label_15c1a4;
        case 0x15c1a8u: goto label_15c1a8;
        case 0x15c1acu: goto label_15c1ac;
        case 0x15c1b0u: goto label_15c1b0;
        case 0x15c1b4u: goto label_15c1b4;
        case 0x15c1b8u: goto label_15c1b8;
        case 0x15c1bcu: goto label_15c1bc;
        case 0x15c1c0u: goto label_15c1c0;
        case 0x15c1c4u: goto label_15c1c4;
        case 0x15c1c8u: goto label_15c1c8;
        case 0x15c1ccu: goto label_15c1cc;
        case 0x15c1d0u: goto label_15c1d0;
        case 0x15c1d4u: goto label_15c1d4;
        case 0x15c1d8u: goto label_15c1d8;
        case 0x15c1dcu: goto label_15c1dc;
        case 0x15c1e0u: goto label_15c1e0;
        case 0x15c1e4u: goto label_15c1e4;
        case 0x15c1e8u: goto label_15c1e8;
        case 0x15c1ecu: goto label_15c1ec;
        case 0x15c1f0u: goto label_15c1f0;
        case 0x15c1f4u: goto label_15c1f4;
        case 0x15c1f8u: goto label_15c1f8;
        case 0x15c1fcu: goto label_15c1fc;
        case 0x15c200u: goto label_15c200;
        case 0x15c204u: goto label_15c204;
        case 0x15c208u: goto label_15c208;
        case 0x15c20cu: goto label_15c20c;
        case 0x15c210u: goto label_15c210;
        case 0x15c214u: goto label_15c214;
        case 0x15c218u: goto label_15c218;
        case 0x15c21cu: goto label_15c21c;
        case 0x15c220u: goto label_15c220;
        case 0x15c224u: goto label_15c224;
        case 0x15c228u: goto label_15c228;
        case 0x15c22cu: goto label_15c22c;
        case 0x15c230u: goto label_15c230;
        case 0x15c234u: goto label_15c234;
        case 0x15c238u: goto label_15c238;
        case 0x15c23cu: goto label_15c23c;
        case 0x15c240u: goto label_15c240;
        case 0x15c244u: goto label_15c244;
        case 0x15c248u: goto label_15c248;
        case 0x15c24cu: goto label_15c24c;
        case 0x15c250u: goto label_15c250;
        case 0x15c254u: goto label_15c254;
        case 0x15c258u: goto label_15c258;
        case 0x15c25cu: goto label_15c25c;
        case 0x15c260u: goto label_15c260;
        case 0x15c264u: goto label_15c264;
        case 0x15c268u: goto label_15c268;
        case 0x15c26cu: goto label_15c26c;
        case 0x15c270u: goto label_15c270;
        case 0x15c274u: goto label_15c274;
        case 0x15c278u: goto label_15c278;
        case 0x15c27cu: goto label_15c27c;
        case 0x15c280u: goto label_15c280;
        case 0x15c284u: goto label_15c284;
        case 0x15c288u: goto label_15c288;
        case 0x15c28cu: goto label_15c28c;
        case 0x15c290u: goto label_15c290;
        case 0x15c294u: goto label_15c294;
        case 0x15c298u: goto label_15c298;
        case 0x15c29cu: goto label_15c29c;
        case 0x15c2a0u: goto label_15c2a0;
        case 0x15c2a4u: goto label_15c2a4;
        case 0x15c2a8u: goto label_15c2a8;
        case 0x15c2acu: goto label_15c2ac;
        case 0x15c2b0u: goto label_15c2b0;
        case 0x15c2b4u: goto label_15c2b4;
        case 0x15c2b8u: goto label_15c2b8;
        case 0x15c2bcu: goto label_15c2bc;
        default: break;
    }

    ctx->pc = 0x15be00u;

label_15be00:
    // 0x15be00: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x15be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_15be04:
    // 0x15be04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15be04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15be08:
    // 0x15be08: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x15be08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_15be0c:
    // 0x15be0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15be0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15be10:
    // 0x15be10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15be10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15be14:
    // 0x15be14: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x15be14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_15be18:
    // 0x15be18: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x15be18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_15be1c:
    // 0x15be1c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15be1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15be20:
    // 0x15be20: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x15be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_15be24:
    // 0x15be24: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x15be24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_15be28:
    // 0x15be28: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x15be28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15be2c:
    // 0x15be2c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x15be2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_15be30:
    // 0x15be30: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15be30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_15be34:
    // 0x15be34: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x15be34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_15be38:
    // 0x15be38: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x15be38u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
label_15be3c:
    // 0x15be3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15be3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15be40:
    // 0x15be40: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x15be40u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_15be44:
    // 0x15be44: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x15be44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_15be48:
    // 0x15be48: 0x3c17005e  lui         $s7, 0x5E
    ctx->pc = 0x15be48u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
label_15be4c:
    // 0x15be4c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15be4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15be50:
    // 0x15be50: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x15be50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_15be54:
    // 0x15be54: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x15be54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_15be58:
    // 0x15be58: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x15be58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_15be5c:
    // 0x15be5c: 0xc0517d8  jal         func_145F60
label_15be60:
    if (ctx->pc == 0x15BE60u) {
        ctx->pc = 0x15BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE5Cu;
        // 0x15be60: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE64u;
        goto label_15be64;
    }
    ctx->pc = 0x15BE5Cu;
    SET_GPR_U32(ctx, 31, 0x15BE64u);
    ctx->pc = 0x15BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE5Cu;
    // 0x15be60: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15BE5Cu, 0x15BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE64u;
label_15be64:
    // 0x15be64: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x15be64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_15be68:
    // 0x15be68: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x15be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15be6c:
    // 0x15be6c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15be6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15be70:
    // 0x15be70: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15be70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15be74:
    // 0x15be74: 0x60f809  jalr        $v1
label_15be78:
    if (ctx->pc == 0x15BE78u) {
        ctx->pc = 0x15BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE74u;
        // 0x15be78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE7Cu;
        goto label_15be7c;
    }
    ctx->pc = 0x15BE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BE7Cu);
        ctx->pc = 0x15BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE74u;
        // 0x15be78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BE74u, 0x15BE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BE7Cu;
label_15be7c:
    // 0x15be7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15be80:
    // 0x15be80: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15be80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15be84:
    // 0x15be84: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x15be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_15be88:
    // 0x15be88: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x15be88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
label_15be8c:
    // 0x15be8c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15be8cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_15be90:
    // 0x15be90: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15be90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_15be94:
    // 0x15be94: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x15be94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_15be98:
    // 0x15be98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15be98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15be9c:
    // 0x15be9c: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x15be9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_15bea0:
    // 0x15bea0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15bea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15bea4:
    // 0x15bea4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x15bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_15bea8:
    // 0x15bea8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x15bea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15beac:
    // 0x15beac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15beacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_15beb0:
    // 0x15beb0: 0x2ce40002  sltiu       $a0, $a3, 0x2
    ctx->pc = 0x15beb0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15beb4:
    // 0x15beb4: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x15beb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
label_15beb8:
    // 0x15beb8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x15beb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15bebc:
    // 0x15bebc: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x15bebcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
label_15bec0:
    // 0x15bec0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_15bec4:
    if (ctx->pc == 0x15BEC4u) {
        ctx->pc = 0x15BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEC0u;
        // 0x15bec4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BEC8u;
        goto label_15bec8;
    }
    ctx->pc = 0x15BEC0u;
    {
        const bool branch_taken_0x15bec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEC0u;
        // 0x15bec4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bec0) {
            ctx->pc = 0x15BEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bea8;
        }
    }
    ctx->pc = 0x15BEC8u;
label_15bec8:
    // 0x15bec8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15becc:
    // 0x15becc: 0xc043e04  jal         func_10F810
label_15bed0:
    if (ctx->pc == 0x15BED0u) {
        ctx->pc = 0x15BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BECCu;
        // 0x15bed0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BED4u;
        goto label_15bed4;
    }
    ctx->pc = 0x15BECCu;
    SET_GPR_U32(ctx, 31, 0x15BED4u);
    ctx->pc = 0x15BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BECCu;
    // 0x15bed0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x15BECCu, 0x15BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BED4u;
label_15bed4:
    // 0x15bed4: 0x8ee45340  lw          $a0, 0x5340($s7)
    ctx->pc = 0x15bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21312)));
label_15bed8:
    // 0x15bed8: 0xc0552b8  jal         func_154AE0
label_15bedc:
    if (ctx->pc == 0x15BEDCu) {
        ctx->pc = 0x15BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BED8u;
        // 0x15bedc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BEE0u;
        goto label_15bee0;
    }
    ctx->pc = 0x15BED8u;
    SET_GPR_U32(ctx, 31, 0x15BEE0u);
    ctx->pc = 0x15BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BED8u;
    // 0x15bedc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15BED8u, 0x15BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BEE0u;
label_15bee0:
    // 0x15bee0: 0x8ec2c6f4  lw          $v0, -0x390C($s6)
    ctx->pc = 0x15bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952692)));
label_15bee4:
    // 0x15bee4: 0x54400074  bnel        $v0, $zero, . + 4 + (0x74 << 2)
label_15bee8:
    if (ctx->pc == 0x15BEE8u) {
        ctx->pc = 0x15BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEE4u;
        // 0x15bee8: 0x8e44cdb4  lw          $a0, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BEECu;
        goto label_15beec;
    }
    ctx->pc = 0x15BEE4u;
    {
        const bool branch_taken_0x15bee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bee4) {
            ctx->pc = 0x15BEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BEE4u;
            // 0x15bee8: 0x8e44cdb4  lw          $a0, -0x324C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C0B8u;
            goto label_15c0b8;
        }
    }
    ctx->pc = 0x15BEECu;
label_15beec:
    // 0x15beec: 0x8e255024  lw          $a1, 0x5024($s1)
    ctx->pc = 0x15beecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20516)));
label_15bef0:
    // 0x15bef0: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x15bef0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_15bef4:
    // 0x15bef4: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15bef8:
    // 0x15bef8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x15bef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_15befc:
    // 0x15befc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x15befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15bf00:
    // 0x15bf00: 0x40f809  jalr        $v0
label_15bf04:
    if (ctx->pc == 0x15BF04u) {
        ctx->pc = 0x15BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF00u;
        // 0x15bf04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF08u;
        goto label_15bf08;
    }
    ctx->pc = 0x15BF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BF08u);
        ctx->pc = 0x15BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF00u;
        // 0x15bf04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BF00u, 0x15BF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BF08u;
label_15bf08:
    // 0x15bf08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bf0c:
    // 0x15bf0c: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
label_15bf10:
    if (ctx->pc == 0x15BF10u) {
        ctx->pc = 0x15BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF0Cu;
        // 0x15bf10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF14u;
        goto label_15bf14;
    }
    ctx->pc = 0x15BF0Cu;
    {
        const bool branch_taken_0x15bf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF0Cu;
        // 0x15bf10: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf0c) {
            ctx->pc = 0x15BFB4u;
            goto label_15bfb4;
        }
    }
    ctx->pc = 0x15BF14u;
label_15bf14:
    // 0x15bf14: 0x26705840  addiu       $s0, $s3, 0x5840
    ctx->pc = 0x15bf14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 22592));
label_15bf18:
    // 0x15bf18: 0xc071bd6  jal         func_1C6F58
label_15bf1c:
    if (ctx->pc == 0x15BF1Cu) {
        ctx->pc = 0x15BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF18u;
        // 0x15bf1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF20u;
        goto label_15bf20;
    }
    ctx->pc = 0x15BF18u;
    SET_GPR_U32(ctx, 31, 0x15BF20u);
    ctx->pc = 0x15BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BF18u;
    // 0x15bf1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6F58u, 0x15BF18u, 0x15BF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BF20u;
label_15bf20:
    // 0x15bf20: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_15bf24:
    if (ctx->pc == 0x15BF24u) {
        ctx->pc = 0x15BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF20u;
        // 0x15bf24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF28u;
        goto label_15bf28;
    }
    ctx->pc = 0x15BF20u;
    {
        const bool branch_taken_0x15bf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF20u;
        // 0x15bf24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf20) {
            ctx->pc = 0x15BFB4u;
            goto label_15bfb4;
        }
    }
    ctx->pc = 0x15BF28u;
label_15bf28:
    // 0x15bf28: 0xc071bea  jal         func_1C6FA8
label_15bf2c:
    if (ctx->pc == 0x15BF2Cu) {
        ctx->pc = 0x15BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF28u;
        // 0x15bf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF30u;
        goto label_15bf30;
    }
    ctx->pc = 0x15BF28u;
    SET_GPR_U32(ctx, 31, 0x15BF30u);
    ctx->pc = 0x15BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BF28u;
    // 0x15bf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FA8u, 0x15BF28u, 0x15BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BF30u;
label_15bf30:
    // 0x15bf30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15bf34:
    if (ctx->pc == 0x15BF34u) {
        ctx->pc = 0x15BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF30u;
        // 0x15bf34: 0x8e255024  lw          $a1, 0x5024($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF38u;
        goto label_15bf38;
    }
    ctx->pc = 0x15BF30u;
    {
        const bool branch_taken_0x15bf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF30u;
        // 0x15bf34: 0x8e255024  lw          $a1, 0x5024($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf30) {
            ctx->pc = 0x15BF44u;
            goto label_15bf44;
        }
    }
    ctx->pc = 0x15BF38u;
label_15bf38:
    // 0x15bf38: 0xc0579fa  jal         func_15E7E8
label_15bf3c:
    if (ctx->pc == 0x15BF3Cu) {
        ctx->pc = 0x15BF40u;
        goto label_15bf40;
    }
    ctx->pc = 0x15BF38u;
    SET_GPR_U32(ctx, 31, 0x15BF40u);
    ctx->pc = 0x15E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E7E8u, 0x15BF38u, 0x15BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BF40u;
label_15bf40:
    // 0x15bf40: 0x8e255024  lw          $a1, 0x5024($s1)
    ctx->pc = 0x15bf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20516)));
label_15bf44:
    // 0x15bf44: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15bf48:
    // 0x15bf48: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x15bf48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_15bf4c:
    // 0x15bf4c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15bf50:
    // 0x15bf50: 0x40f809  jalr        $v0
label_15bf54:
    if (ctx->pc == 0x15BF54u) {
        ctx->pc = 0x15BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF50u;
        // 0x15bf54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF58u;
        goto label_15bf58;
    }
    ctx->pc = 0x15BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BF58u);
        ctx->pc = 0x15BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF50u;
        // 0x15bf54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BF50u, 0x15BF58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BF58u;
label_15bf58:
    // 0x15bf58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_15bf5c:
    if (ctx->pc == 0x15BF5Cu) {
        ctx->pc = 0x15BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF58u;
        // 0x15bf5c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF60u;
        goto label_15bf60;
    }
    ctx->pc = 0x15BF58u;
    {
        const bool branch_taken_0x15bf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF58u;
        // 0x15bf5c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf58) {
            ctx->pc = 0x15BF6Cu;
            goto label_15bf6c;
        }
    }
    ctx->pc = 0x15BF60u;
label_15bf60:
    // 0x15bf60: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15bf64:
    // 0x15bf64: 0x2442b918  addiu       $v0, $v0, -0x46E8
    ctx->pc = 0x15bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949144));
label_15bf68:
    // 0x15bf68: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15bf6c:
    // 0x15bf6c: 0x8c62c734  lw          $v0, -0x38CC($v1)
    ctx->pc = 0x15bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952756)));
label_15bf70:
    // 0x15bf70: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_15bf74:
    if (ctx->pc == 0x15BF74u) {
        ctx->pc = 0x15BF78u;
        goto label_15bf78;
    }
    ctx->pc = 0x15BF70u;
    {
        const bool branch_taken_0x15bf70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bf70) {
            ctx->pc = 0x15BFA8u;
            goto label_15bfa8;
        }
    }
    ctx->pc = 0x15BF78u;
label_15bf78:
    // 0x15bf78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15bf7c:
    // 0x15bf7c: 0x8c43c70c  lw          $v1, -0x38F4($v0)
    ctx->pc = 0x15bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952716)));
label_15bf80:
    // 0x15bf80: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_15bf84:
    if (ctx->pc == 0x15BF84u) {
        ctx->pc = 0x15BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF80u;
        // 0x15bf84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF88u;
        goto label_15bf88;
    }
    ctx->pc = 0x15BF80u;
    {
        const bool branch_taken_0x15bf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF80u;
        // 0x15bf84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf80) {
            ctx->pc = 0x15BFB4u;
            goto label_15bfb4;
        }
    }
    ctx->pc = 0x15BF88u;
label_15bf88:
    // 0x15bf88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15bf8c:
    // 0x15bf8c: 0x8c43c724  lw          $v1, -0x38DC($v0)
    ctx->pc = 0x15bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952740)));
label_15bf90:
    // 0x15bf90: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_15bf94:
    if (ctx->pc == 0x15BF94u) {
        ctx->pc = 0x15BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF90u;
        // 0x15bf94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BF98u;
        goto label_15bf98;
    }
    ctx->pc = 0x15BF90u;
    {
        const bool branch_taken_0x15bf90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF90u;
        // 0x15bf94: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf90) {
            ctx->pc = 0x15BFB4u;
            goto label_15bfb4;
        }
    }
    ctx->pc = 0x15BF98u;
label_15bf98:
    // 0x15bf98: 0xc056f2a  jal         func_15BCA8
label_15bf9c:
    if (ctx->pc == 0x15BF9Cu) {
        ctx->pc = 0x15BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF98u;
        // 0x15bf9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BFA0u;
        goto label_15bfa0;
    }
    ctx->pc = 0x15BF98u;
    SET_GPR_U32(ctx, 31, 0x15BFA0u);
    ctx->pc = 0x15BF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BF98u;
    // 0x15bf9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCA8u, 0x15BF98u, 0x15BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BFA0u;
label_15bfa0:
    // 0x15bfa0: 0x10000004  b           . + 4 + (0x4 << 2)
label_15bfa4:
    if (ctx->pc == 0x15BFA4u) {
        ctx->pc = 0x15BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFA0u;
        // 0x15bfa4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BFA8u;
        goto label_15bfa8;
    }
    ctx->pc = 0x15BFA0u;
    {
        const bool branch_taken_0x15bfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFA0u;
        // 0x15bfa4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfa0) {
            ctx->pc = 0x15BFB4u;
            goto label_15bfb4;
        }
    }
    ctx->pc = 0x15BFA8u;
label_15bfa8:
    // 0x15bfa8: 0x40f809  jalr        $v0
label_15bfac:
    if (ctx->pc == 0x15BFACu) {
        ctx->pc = 0x15BFB0u;
        goto label_15bfb0;
    }
    ctx->pc = 0x15BFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BFB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BFA8u, 0x15BFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BFB0u;
label_15bfb0:
    // 0x15bfb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15bfb4:
    // 0x15bfb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15bfb8:
    // 0x15bfb8: 0xc0e8c52  jal         func_3A3148
label_15bfbc:
    if (ctx->pc == 0x15BFBCu) {
        ctx->pc = 0x15BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFB8u;
        // 0x15bfbc: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BFC0u;
        goto label_15bfc0;
    }
    ctx->pc = 0x15BFB8u;
    SET_GPR_U32(ctx, 31, 0x15BFC0u);
    ctx->pc = 0x15BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BFB8u;
    // 0x15bfbc: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x15BFB8u, 0x15BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BFC0u;
label_15bfc0:
    // 0x15bfc0: 0xc05152a  jal         func_1454A8
label_15bfc4:
    if (ctx->pc == 0x15BFC4u) {
        ctx->pc = 0x15BFC8u;
        goto label_15bfc8;
    }
    ctx->pc = 0x15BFC0u;
    SET_GPR_U32(ctx, 31, 0x15BFC8u);
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x15BFC0u, 0x15BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BFC8u;
label_15bfc8:
    // 0x15bfc8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15bfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15bfcc:
    // 0x15bfcc: 0xc055e18  jal         func_157860
label_15bfd0:
    if (ctx->pc == 0x15BFD0u) {
        ctx->pc = 0x15BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFCCu;
        // 0x15bfd0: 0x24845560  addiu       $a0, $a0, 0x5560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BFD4u;
        goto label_15bfd4;
    }
    ctx->pc = 0x15BFCCu;
    SET_GPR_U32(ctx, 31, 0x15BFD4u);
    ctx->pc = 0x15BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BFCCu;
    // 0x15bfd0: 0x24845560  addiu       $a0, $a0, 0x5560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157860u, 0x15BFCCu, 0x15BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BFD4u;
label_15bfd4:
    // 0x15bfd4: 0x8e44cdb4  lw          $a0, -0x324C($s2)
    ctx->pc = 0x15bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15bfd8:
    // 0x15bfd8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15bfdc:
    // 0x15bfdc: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x15bfdcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_15bfe0:
    // 0x15bfe0: 0x24510028  addiu       $s1, $v0, 0x28
    ctx->pc = 0x15bfe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_15bfe4:
    // 0x15bfe4: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x15bfe4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_15bfe8:
    // 0x15bfe8: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x15bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15bfec:
    // 0x15bfec: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x15bfecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_15bff0:
    // 0x15bff0: 0xa0f809  jalr        $a1
label_15bff4:
    if (ctx->pc == 0x15BFF4u) {
        ctx->pc = 0x15BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFF0u;
        // 0x15bff4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BFF8u;
        goto label_15bff8;
    }
    ctx->pc = 0x15BFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15BFF8u);
        ctx->pc = 0x15BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFF0u;
        // 0x15bff4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BFF0u, 0x15BFF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BFF8u;
label_15bff8:
    // 0x15bff8: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x15bff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15bffc:
    // 0x15bffc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15bffcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15c000:
    // 0x15c000: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15c004:
    // 0x15c004: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x15c004u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_15c008:
    // 0x15c008: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x15c008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_15c00c:
    // 0x15c00c: 0x60f809  jalr        $v1
label_15c010:
    if (ctx->pc == 0x15C010u) {
        ctx->pc = 0x15C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C00Cu;
        // 0x15c010: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C014u;
        goto label_15c014;
    }
    ctx->pc = 0x15C00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C014u);
        ctx->pc = 0x15C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C00Cu;
        // 0x15c010: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C00Cu, 0x15C014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C014u;
label_15c014:
    // 0x15c014: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x15c014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_15c018:
    // 0x15c018: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x15c018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_15c01c:
    // 0x15c01c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15c01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c020:
    // 0x15c020: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x15c020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_15c024:
    // 0x15c024: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15c024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_15c028:
    // 0x15c028: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x15c028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_15c02c:
    // 0x15c02c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15c02cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15c030:
    // 0x15c030: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x15c030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
label_15c034:
    // 0x15c034: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x15c034u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
label_15c038:
    // 0x15c038: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x15c038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_15c03c:
    // 0x15c03c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x15c03cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_15c040:
    // 0x15c040: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15c044:
    // 0x15c044: 0x40f809  jalr        $v0
label_15c048:
    if (ctx->pc == 0x15C048u) {
        ctx->pc = 0x15C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C044u;
        // 0x15c048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C04Cu;
        goto label_15c04c;
    }
    ctx->pc = 0x15C044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C04Cu);
        ctx->pc = 0x15C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C044u;
        // 0x15c048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C044u, 0x15C04Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C04Cu;
label_15c04c:
    // 0x15c04c: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x15c04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15c050:
    // 0x15c050: 0x8ea5d260  lw          $a1, -0x2DA0($s5)
    ctx->pc = 0x15c050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955616)));
label_15c054:
    // 0x15c054: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15c058:
    // 0x15c058: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x15c058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_15c05c:
    // 0x15c05c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x15c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_15c060:
    // 0x15c060: 0x60f809  jalr        $v1
label_15c064:
    if (ctx->pc == 0x15C064u) {
        ctx->pc = 0x15C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C060u;
        // 0x15c064: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C068u;
        goto label_15c068;
    }
    ctx->pc = 0x15C060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C068u);
        ctx->pc = 0x15C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C060u;
        // 0x15c064: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C060u, 0x15C068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C068u;
label_15c068:
    // 0x15c068: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15c068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_15c06c:
    // 0x15c06c: 0xc06ba0a  jal         func_1AE828
label_15c070:
    if (ctx->pc == 0x15C070u) {
        ctx->pc = 0x15C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C06Cu;
        // 0x15c070: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C074u;
        goto label_15c074;
    }
    ctx->pc = 0x15C06Cu;
    SET_GPR_U32(ctx, 31, 0x15C074u);
    ctx->pc = 0x15C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C06Cu;
    // 0x15c070: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x15C06Cu, 0x15C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C074u;
label_15c074:
    // 0x15c074: 0xc071ae0  jal         func_1C6B80
label_15c078:
    if (ctx->pc == 0x15C078u) {
        ctx->pc = 0x15C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C074u;
        // 0x15c078: 0x26645840  addiu       $a0, $s3, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C07Cu;
        goto label_15c07c;
    }
    ctx->pc = 0x15C074u;
    SET_GPR_U32(ctx, 31, 0x15C07Cu);
    ctx->pc = 0x15C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C074u;
    // 0x15c078: 0x26645840  addiu       $a0, $s3, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B80u, 0x15C074u, 0x15C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C07Cu;
label_15c07c:
    // 0x15c07c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15c080:
    // 0x15c080: 0xc061748  jal         func_185D20
label_15c084:
    if (ctx->pc == 0x15C084u) {
        ctx->pc = 0x15C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C080u;
        // 0x15c084: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C088u;
        goto label_15c088;
    }
    ctx->pc = 0x15C080u;
    SET_GPR_U32(ctx, 31, 0x15C088u);
    ctx->pc = 0x15C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C080u;
    // 0x15c084: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x15C080u, 0x15C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C088u;
label_15c088:
    // 0x15c088: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x15c088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15c08c:
    // 0x15c08c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15c090:
    // 0x15c090: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15c090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15c094:
    // 0x15c094: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15c098:
    // 0x15c098: 0x60f809  jalr        $v1
label_15c09c:
    if (ctx->pc == 0x15C09Cu) {
        ctx->pc = 0x15C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C098u;
        // 0x15c09c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0A0u;
        goto label_15c0a0;
    }
    ctx->pc = 0x15C098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C0A0u);
        ctx->pc = 0x15C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C098u;
        // 0x15c09c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C098u, 0x15C0A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C0A0u;
label_15c0a0:
    // 0x15c0a0: 0x8ee45340  lw          $a0, 0x5340($s7)
    ctx->pc = 0x15c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21312)));
label_15c0a4:
    // 0x15c0a4: 0xc0552b8  jal         func_154AE0
label_15c0a8:
    if (ctx->pc == 0x15C0A8u) {
        ctx->pc = 0x15C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0A4u;
        // 0x15c0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0ACu;
        goto label_15c0ac;
    }
    ctx->pc = 0x15C0A4u;
    SET_GPR_U32(ctx, 31, 0x15C0ACu);
    ctx->pc = 0x15C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C0A4u;
    // 0x15c0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15C0A4u, 0x15C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C0ACu;
label_15c0ac:
    // 0x15c0ac: 0x8ec2c6f4  lw          $v0, -0x390C($s6)
    ctx->pc = 0x15c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952692)));
label_15c0b0:
    // 0x15c0b0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_15c0b4:
    if (ctx->pc == 0x15C0B4u) {
        ctx->pc = 0x15C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0B0u;
        // 0x15c0b4: 0x8e44cdb4  lw          $a0, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0B8u;
        goto label_15c0b8;
    }
    ctx->pc = 0x15C0B0u;
    {
        const bool branch_taken_0x15c0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0B0u;
        // 0x15c0b4: 0x8e44cdb4  lw          $a0, -0x324C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0b0) {
            ctx->pc = 0x15C204u;
            goto label_15c204;
        }
    }
    ctx->pc = 0x15C0B8u;
label_15c0b8:
    // 0x15c0b8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x15c0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_15c0bc:
    // 0x15c0bc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x15c0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_15c0c0:
    // 0x15c0c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15c0c4:
    // 0x15c0c4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x15c0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_15c0c8:
    // 0x15c0c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15c0c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_15c0cc:
    // 0x15c0cc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x15c0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_15c0d0:
    // 0x15c0d0: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x15c0d0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_15c0d4:
    // 0x15c0d4: 0x24510028  addiu       $s1, $v0, 0x28
    ctx->pc = 0x15c0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_15c0d8:
    // 0x15c0d8: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x15c0d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_15c0dc:
    // 0x15c0dc: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x15c0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15c0e0:
    // 0x15c0e0: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x15c0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_15c0e4:
    // 0x15c0e4: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x15c0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
label_15c0e8:
    // 0x15c0e8: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x15c0e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
label_15c0ec:
    // 0x15c0ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15c0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_15c0f0:
    // 0x15c0f0: 0xc0f809  jalr        $a2
label_15c0f4:
    if (ctx->pc == 0x15C0F4u) {
        ctx->pc = 0x15C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0F0u;
        // 0x15c0f4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0F8u;
        goto label_15c0f8;
    }
    ctx->pc = 0x15C0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15C0F8u);
        ctx->pc = 0x15C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0F0u;
        // 0x15c0f4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C0F0u, 0x15C0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C0F8u;
label_15c0f8:
    // 0x15c0f8: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x15c0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15c0fc:
    // 0x15c0fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15c0fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15c100:
    // 0x15c100: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15c104:
    // 0x15c104: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x15c104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_15c108:
    // 0x15c108: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x15c108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_15c10c:
    // 0x15c10c: 0x60f809  jalr        $v1
label_15c110:
    if (ctx->pc == 0x15C110u) {
        ctx->pc = 0x15C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C10Cu;
        // 0x15c110: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C114u;
        goto label_15c114;
    }
    ctx->pc = 0x15C10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C114u);
        ctx->pc = 0x15C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C10Cu;
        // 0x15c110: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C10Cu, 0x15C114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C114u;
label_15c114:
    // 0x15c114: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15c114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15c118:
    // 0x15c118: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15c118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c11c:
    // 0x15c11c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15c11cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15c120:
    // 0x15c120: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x15c120u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_15c124:
    // 0x15c124: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x15c124u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_15c128:
    // 0x15c128: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x15c128u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_15c12c:
    // 0x15c12c: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x15c12cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
label_15c130:
    // 0x15c130: 0x40f809  jalr        $v0
label_15c134:
    if (ctx->pc == 0x15C134u) {
        ctx->pc = 0x15C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C130u;
        // 0x15c134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C138u;
        goto label_15c138;
    }
    ctx->pc = 0x15C130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C138u);
        ctx->pc = 0x15C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C130u;
        // 0x15c134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C130u, 0x15C138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C138u;
label_15c138:
    // 0x15c138: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x15c138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15c13c:
    // 0x15c13c: 0x8ea5d260  lw          $a1, -0x2DA0($s5)
    ctx->pc = 0x15c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955616)));
label_15c140:
    // 0x15c140: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15c144:
    // 0x15c144: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x15c144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_15c148:
    // 0x15c148: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x15c148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_15c14c:
    // 0x15c14c: 0x60f809  jalr        $v1
label_15c150:
    if (ctx->pc == 0x15C150u) {
        ctx->pc = 0x15C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C14Cu;
        // 0x15c150: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C154u;
        goto label_15c154;
    }
    ctx->pc = 0x15C14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C154u);
        ctx->pc = 0x15C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C14Cu;
        // 0x15c150: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C14Cu, 0x15C154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C154u;
label_15c154:
    // 0x15c154: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x15c154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15c158:
    // 0x15c158: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15c15c:
    // 0x15c15c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15c15cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15c160:
    // 0x15c160: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15c160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15c164:
    // 0x15c164: 0x60f809  jalr        $v1
label_15c168:
    if (ctx->pc == 0x15C168u) {
        ctx->pc = 0x15C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C164u;
        // 0x15c168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C16Cu;
        goto label_15c16c;
    }
    ctx->pc = 0x15C164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C16Cu);
        ctx->pc = 0x15C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C164u;
        // 0x15c168: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C164u, 0x15C16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C16Cu;
label_15c16c:
    // 0x15c16c: 0x8e44cdb4  lw          $a0, -0x324C($s2)
    ctx->pc = 0x15c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15c170:
    // 0x15c170: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x15c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15c174:
    // 0x15c174: 0x84500028  lh          $s0, 0x28($v0)
    ctx->pc = 0x15c174u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_15c178:
    // 0x15c178: 0x24510028  addiu       $s1, $v0, 0x28
    ctx->pc = 0x15c178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_15c17c:
    // 0x15c17c: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x15c17cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_15c180:
    // 0x15c180: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x15c180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15c184:
    // 0x15c184: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x15c184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_15c188:
    // 0x15c188: 0xa0f809  jalr        $a1
label_15c18c:
    if (ctx->pc == 0x15C18Cu) {
        ctx->pc = 0x15C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C188u;
        // 0x15c18c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C190u;
        goto label_15c190;
    }
    ctx->pc = 0x15C188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15C190u);
        ctx->pc = 0x15C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C188u;
        // 0x15c18c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C188u, 0x15C190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C190u;
label_15c190:
    // 0x15c190: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x15c190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15c194:
    // 0x15c194: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15c194u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15c198:
    // 0x15c198: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15c19c:
    // 0x15c19c: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x15c19cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_15c1a0:
    // 0x15c1a0: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x15c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_15c1a4:
    // 0x15c1a4: 0x60f809  jalr        $v1
label_15c1a8:
    if (ctx->pc == 0x15C1A8u) {
        ctx->pc = 0x15C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1A4u;
        // 0x15c1a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1ACu;
        goto label_15c1ac;
    }
    ctx->pc = 0x15C1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C1ACu);
        ctx->pc = 0x15C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1A4u;
        // 0x15c1a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C1A4u, 0x15C1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C1ACu;
label_15c1ac:
    // 0x15c1ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15c1b0:
    // 0x15c1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15c1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c1b4:
    // 0x15c1b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15c1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c1b8:
    // 0x15c1b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15c1b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15c1bc:
    // 0x15c1bc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x15c1bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_15c1c0:
    // 0x15c1c0: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x15c1c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_15c1c4:
    // 0x15c1c4: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x15c1c4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_15c1c8:
    // 0x15c1c8: 0x40f809  jalr        $v0
label_15c1cc:
    if (ctx->pc == 0x15C1CCu) {
        ctx->pc = 0x15C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1C8u;
        // 0x15c1cc: 0x4600ac06  mov.s       $f16, $f21 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1D0u;
        goto label_15c1d0;
    }
    ctx->pc = 0x15C1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C1D0u);
        ctx->pc = 0x15C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1C8u;
        // 0x15c1cc: 0x4600ac06  mov.s       $f16, $f21 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C1C8u, 0x15C1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C1D0u;
label_15c1d0:
    // 0x15c1d0: 0x8e46cdb4  lw          $a2, -0x324C($s2)
    ctx->pc = 0x15c1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15c1d4:
    // 0x15c1d4: 0x8ea5d260  lw          $a1, -0x2DA0($s5)
    ctx->pc = 0x15c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294955616)));
label_15c1d8:
    // 0x15c1d8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x15c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15c1dc:
    // 0x15c1dc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x15c1dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_15c1e0:
    // 0x15c1e0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x15c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_15c1e4:
    // 0x15c1e4: 0x60f809  jalr        $v1
label_15c1e8:
    if (ctx->pc == 0x15C1E8u) {
        ctx->pc = 0x15C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1E4u;
        // 0x15c1e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C1ECu;
        goto label_15c1ec;
    }
    ctx->pc = 0x15C1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C1ECu);
        ctx->pc = 0x15C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1E4u;
        // 0x15c1e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C1E4u, 0x15C1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C1ECu;
label_15c1ec:
    // 0x15c1ec: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x15c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15c1f0:
    // 0x15c1f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15c1f4:
    // 0x15c1f4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15c1f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15c1f8:
    // 0x15c1f8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15c1fc:
    // 0x15c1fc: 0x60f809  jalr        $v1
label_15c200:
    if (ctx->pc == 0x15C200u) {
        ctx->pc = 0x15C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1FCu;
        // 0x15c200: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C204u;
        goto label_15c204;
    }
    ctx->pc = 0x15C1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C204u);
        ctx->pc = 0x15C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1FCu;
        // 0x15c200: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C1FCu, 0x15C204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C204u;
label_15c204:
    // 0x15c204: 0xc080ffa  jal         func_203FE8
label_15c208:
    if (ctx->pc == 0x15C208u) {
        ctx->pc = 0x15C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C204u;
        // 0x15c208: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C20Cu;
        goto label_15c20c;
    }
    ctx->pc = 0x15C204u;
    SET_GPR_U32(ctx, 31, 0x15C20Cu);
    ctx->pc = 0x15C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C204u;
    // 0x15c208: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x15C204u, 0x15C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C20Cu;
label_15c20c:
    // 0x15c20c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15c210:
    if (ctx->pc == 0x15C210u) {
        ctx->pc = 0x15C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C20Cu;
        // 0x15c210: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C214u;
        goto label_15c214;
    }
    ctx->pc = 0x15C20Cu;
    {
        const bool branch_taken_0x15c20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C20Cu;
        // 0x15c210: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c20c) {
            ctx->pc = 0x15C224u;
            goto label_15c224;
        }
    }
    ctx->pc = 0x15C214u;
label_15c214:
    // 0x15c214: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15c214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c218:
    // 0x15c218: 0x8c435d80  lw          $v1, 0x5D80($v0)
    ctx->pc = 0x15c218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
label_15c21c:
    // 0x15c21c: 0x50640012  beql        $v1, $a0, . + 4 + (0x12 << 2)
label_15c220:
    if (ctx->pc == 0x15C220u) {
        ctx->pc = 0x15C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C21Cu;
        // 0x15c220: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C224u;
        goto label_15c224;
    }
    ctx->pc = 0x15C21Cu;
    {
        const bool branch_taken_0x15c21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15c21c) {
            ctx->pc = 0x15C220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C21Cu;
            // 0x15c220: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C224u;
label_15c224:
    // 0x15c224: 0xc080ffa  jal         func_203FE8
label_15c228:
    if (ctx->pc == 0x15C228u) {
        ctx->pc = 0x15C22Cu;
        goto label_15c22c;
    }
    ctx->pc = 0x15C224u;
    SET_GPR_U32(ctx, 31, 0x15C22Cu);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x15C224u, 0x15C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C22Cu;
label_15c22c:
    // 0x15c22c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_15c230:
    if (ctx->pc == 0x15C230u) {
        ctx->pc = 0x15C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C22Cu;
        // 0x15c230: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C234u;
        goto label_15c234;
    }
    ctx->pc = 0x15C22Cu;
    {
        const bool branch_taken_0x15c22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C22Cu;
        // 0x15c230: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c22c) {
            ctx->pc = 0x15C254u;
            goto label_15c254;
        }
    }
    ctx->pc = 0x15C234u;
label_15c234:
    // 0x15c234: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15c234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15c238:
    // 0x15c238: 0x8c435d80  lw          $v1, 0x5D80($v0)
    ctx->pc = 0x15c238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
label_15c23c:
    // 0x15c23c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_15c240:
    if (ctx->pc == 0x15C240u) {
        ctx->pc = 0x15C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C23Cu;
        // 0x15c240: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C244u;
        goto label_15c244;
    }
    ctx->pc = 0x15C23Cu;
    {
        const bool branch_taken_0x15c23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C23Cu;
        // 0x15c240: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c23c) {
            ctx->pc = 0x15C254u;
            goto label_15c254;
        }
    }
    ctx->pc = 0x15C244u;
label_15c244:
    // 0x15c244: 0x8c43c700  lw          $v1, -0x3900($v0)
    ctx->pc = 0x15c244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952704)));
label_15c248:
    // 0x15c248: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_15c24c:
    if (ctx->pc == 0x15C24Cu) {
        ctx->pc = 0x15C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C248u;
        // 0x15c24c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C250u;
        goto label_15c250;
    }
    ctx->pc = 0x15C248u;
    {
        const bool branch_taken_0x15c248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c248) {
            ctx->pc = 0x15C24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C248u;
            // 0x15c24c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C268u;
            goto label_15c268;
        }
    }
    ctx->pc = 0x15C250u;
label_15c250:
    // 0x15c250: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15c250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15c254:
    // 0x15c254: 0xc071cfa  jal         func_1C73E8
label_15c258:
    if (ctx->pc == 0x15C258u) {
        ctx->pc = 0x15C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C254u;
        // 0x15c258: 0x24845840  addiu       $a0, $a0, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C25Cu;
        goto label_15c25c;
    }
    ctx->pc = 0x15C254u;
    SET_GPR_U32(ctx, 31, 0x15C25Cu);
    ctx->pc = 0x15C258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C254u;
    // 0x15c258: 0x24845840  addiu       $a0, $a0, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C73E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C73E8u, 0x15C254u, 0x15C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C25Cu;
label_15c25c:
    // 0x15c25c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c260:
    if (ctx->pc == 0x15C260u) {
        ctx->pc = 0x15C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C25Cu;
        // 0x15c260: 0x8ec2c6f4  lw          $v0, -0x390C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C264u;
        goto label_15c264;
    }
    ctx->pc = 0x15C25Cu;
    {
        const bool branch_taken_0x15c25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C25Cu;
        // 0x15c260: 0x8ec2c6f4  lw          $v0, -0x390C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c25c) {
            ctx->pc = 0x15C26Cu;
            goto label_15c26c;
        }
    }
    ctx->pc = 0x15C264u;
label_15c264:
    // 0x15c264: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15c264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c268:
    // 0x15c268: 0x8ec2c6f4  lw          $v0, -0x390C($s6)
    ctx->pc = 0x15c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294952692)));
label_15c26c:
    // 0x15c26c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c270:
    if (ctx->pc == 0x15C270u) {
        ctx->pc = 0x15C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C26Cu;
        // 0x15c270: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C274u;
        goto label_15c274;
    }
    ctx->pc = 0x15C26Cu;
    {
        const bool branch_taken_0x15c26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C26Cu;
        // 0x15c270: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c26c) {
            ctx->pc = 0x15C27Cu;
            goto label_15c27c;
        }
    }
    ctx->pc = 0x15C274u;
label_15c274:
    // 0x15c274: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_15c278:
    if (ctx->pc == 0x15C278u) {
        ctx->pc = 0x15C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C274u;
        // 0x15c278: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C27Cu;
        goto label_15c27c;
    }
    ctx->pc = 0x15C274u;
    {
        const bool branch_taken_0x15c274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C274u;
        // 0x15c278: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c274) {
            ctx->pc = 0x15C284u;
            goto label_15c284;
        }
    }
    ctx->pc = 0x15C27Cu;
label_15c27c:
    // 0x15c27c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c280:
    // 0x15c280: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x15c280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_15c284:
    // 0x15c284: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x15c284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_15c288:
    // 0x15c288: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x15c288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_15c28c:
    // 0x15c28c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x15c28cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_15c290:
    // 0x15c290: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x15c290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15c294:
    // 0x15c294: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x15c294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15c298:
    // 0x15c298: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x15c298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15c29c:
    // 0x15c29c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x15c29cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15c2a0:
    // 0x15c2a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15c2a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15c2a4:
    // 0x15c2a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15c2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15c2a8:
    // 0x15c2a8: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x15c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_15c2ac:
    // 0x15c2ac: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x15c2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_15c2b0:
    // 0x15c2b0: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x15c2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_15c2b4:
    // 0x15c2b4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x15c2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15c2b8:
    // 0x15c2b8: 0x3e00008  jr          $ra
label_15c2bc:
    if (ctx->pc == 0x15C2BCu) {
        ctx->pc = 0x15C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2B8u;
        // 0x15c2bc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C2C0u;
        goto label_fallthrough_0x15c2b8;
    }
    ctx->pc = 0x15C2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2B8u;
        // 0x15c2bc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15c2b8:
    ctx->pc = 0x15C2C0u;
}
