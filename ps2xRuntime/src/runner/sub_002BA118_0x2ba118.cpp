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

// Function: sub_002BA118
// Address: 0x2ba118 - 0x2ba580
void sub_002BA118_0x2ba118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA118_0x2ba118");
#endif

    switch (ctx->pc) {
        case 0x2ba118u: goto label_2ba118;
        case 0x2ba11cu: goto label_2ba11c;
        case 0x2ba120u: goto label_2ba120;
        case 0x2ba124u: goto label_2ba124;
        case 0x2ba128u: goto label_2ba128;
        case 0x2ba12cu: goto label_2ba12c;
        case 0x2ba130u: goto label_2ba130;
        case 0x2ba134u: goto label_2ba134;
        case 0x2ba138u: goto label_2ba138;
        case 0x2ba13cu: goto label_2ba13c;
        case 0x2ba140u: goto label_2ba140;
        case 0x2ba144u: goto label_2ba144;
        case 0x2ba148u: goto label_2ba148;
        case 0x2ba14cu: goto label_2ba14c;
        case 0x2ba150u: goto label_2ba150;
        case 0x2ba154u: goto label_2ba154;
        case 0x2ba158u: goto label_2ba158;
        case 0x2ba15cu: goto label_2ba15c;
        case 0x2ba160u: goto label_2ba160;
        case 0x2ba164u: goto label_2ba164;
        case 0x2ba168u: goto label_2ba168;
        case 0x2ba16cu: goto label_2ba16c;
        case 0x2ba170u: goto label_2ba170;
        case 0x2ba174u: goto label_2ba174;
        case 0x2ba178u: goto label_2ba178;
        case 0x2ba17cu: goto label_2ba17c;
        case 0x2ba180u: goto label_2ba180;
        case 0x2ba184u: goto label_2ba184;
        case 0x2ba188u: goto label_2ba188;
        case 0x2ba18cu: goto label_2ba18c;
        case 0x2ba190u: goto label_2ba190;
        case 0x2ba194u: goto label_2ba194;
        case 0x2ba198u: goto label_2ba198;
        case 0x2ba19cu: goto label_2ba19c;
        case 0x2ba1a0u: goto label_2ba1a0;
        case 0x2ba1a4u: goto label_2ba1a4;
        case 0x2ba1a8u: goto label_2ba1a8;
        case 0x2ba1acu: goto label_2ba1ac;
        case 0x2ba1b0u: goto label_2ba1b0;
        case 0x2ba1b4u: goto label_2ba1b4;
        case 0x2ba1b8u: goto label_2ba1b8;
        case 0x2ba1bcu: goto label_2ba1bc;
        case 0x2ba1c0u: goto label_2ba1c0;
        case 0x2ba1c4u: goto label_2ba1c4;
        case 0x2ba1c8u: goto label_2ba1c8;
        case 0x2ba1ccu: goto label_2ba1cc;
        case 0x2ba1d0u: goto label_2ba1d0;
        case 0x2ba1d4u: goto label_2ba1d4;
        case 0x2ba1d8u: goto label_2ba1d8;
        case 0x2ba1dcu: goto label_2ba1dc;
        case 0x2ba1e0u: goto label_2ba1e0;
        case 0x2ba1e4u: goto label_2ba1e4;
        case 0x2ba1e8u: goto label_2ba1e8;
        case 0x2ba1ecu: goto label_2ba1ec;
        case 0x2ba1f0u: goto label_2ba1f0;
        case 0x2ba1f4u: goto label_2ba1f4;
        case 0x2ba1f8u: goto label_2ba1f8;
        case 0x2ba1fcu: goto label_2ba1fc;
        case 0x2ba200u: goto label_2ba200;
        case 0x2ba204u: goto label_2ba204;
        case 0x2ba208u: goto label_2ba208;
        case 0x2ba20cu: goto label_2ba20c;
        case 0x2ba210u: goto label_2ba210;
        case 0x2ba214u: goto label_2ba214;
        case 0x2ba218u: goto label_2ba218;
        case 0x2ba21cu: goto label_2ba21c;
        case 0x2ba220u: goto label_2ba220;
        case 0x2ba224u: goto label_2ba224;
        case 0x2ba228u: goto label_2ba228;
        case 0x2ba22cu: goto label_2ba22c;
        case 0x2ba230u: goto label_2ba230;
        case 0x2ba234u: goto label_2ba234;
        case 0x2ba238u: goto label_2ba238;
        case 0x2ba23cu: goto label_2ba23c;
        case 0x2ba240u: goto label_2ba240;
        case 0x2ba244u: goto label_2ba244;
        case 0x2ba248u: goto label_2ba248;
        case 0x2ba24cu: goto label_2ba24c;
        case 0x2ba250u: goto label_2ba250;
        case 0x2ba254u: goto label_2ba254;
        case 0x2ba258u: goto label_2ba258;
        case 0x2ba25cu: goto label_2ba25c;
        case 0x2ba260u: goto label_2ba260;
        case 0x2ba264u: goto label_2ba264;
        case 0x2ba268u: goto label_2ba268;
        case 0x2ba26cu: goto label_2ba26c;
        case 0x2ba270u: goto label_2ba270;
        case 0x2ba274u: goto label_2ba274;
        case 0x2ba278u: goto label_2ba278;
        case 0x2ba27cu: goto label_2ba27c;
        case 0x2ba280u: goto label_2ba280;
        case 0x2ba284u: goto label_2ba284;
        case 0x2ba288u: goto label_2ba288;
        case 0x2ba28cu: goto label_2ba28c;
        case 0x2ba290u: goto label_2ba290;
        case 0x2ba294u: goto label_2ba294;
        case 0x2ba298u: goto label_2ba298;
        case 0x2ba29cu: goto label_2ba29c;
        case 0x2ba2a0u: goto label_2ba2a0;
        case 0x2ba2a4u: goto label_2ba2a4;
        case 0x2ba2a8u: goto label_2ba2a8;
        case 0x2ba2acu: goto label_2ba2ac;
        case 0x2ba2b0u: goto label_2ba2b0;
        case 0x2ba2b4u: goto label_2ba2b4;
        case 0x2ba2b8u: goto label_2ba2b8;
        case 0x2ba2bcu: goto label_2ba2bc;
        case 0x2ba2c0u: goto label_2ba2c0;
        case 0x2ba2c4u: goto label_2ba2c4;
        case 0x2ba2c8u: goto label_2ba2c8;
        case 0x2ba2ccu: goto label_2ba2cc;
        case 0x2ba2d0u: goto label_2ba2d0;
        case 0x2ba2d4u: goto label_2ba2d4;
        case 0x2ba2d8u: goto label_2ba2d8;
        case 0x2ba2dcu: goto label_2ba2dc;
        case 0x2ba2e0u: goto label_2ba2e0;
        case 0x2ba2e4u: goto label_2ba2e4;
        case 0x2ba2e8u: goto label_2ba2e8;
        case 0x2ba2ecu: goto label_2ba2ec;
        case 0x2ba2f0u: goto label_2ba2f0;
        case 0x2ba2f4u: goto label_2ba2f4;
        case 0x2ba2f8u: goto label_2ba2f8;
        case 0x2ba2fcu: goto label_2ba2fc;
        case 0x2ba300u: goto label_2ba300;
        case 0x2ba304u: goto label_2ba304;
        case 0x2ba308u: goto label_2ba308;
        case 0x2ba30cu: goto label_2ba30c;
        case 0x2ba310u: goto label_2ba310;
        case 0x2ba314u: goto label_2ba314;
        case 0x2ba318u: goto label_2ba318;
        case 0x2ba31cu: goto label_2ba31c;
        case 0x2ba320u: goto label_2ba320;
        case 0x2ba324u: goto label_2ba324;
        case 0x2ba328u: goto label_2ba328;
        case 0x2ba32cu: goto label_2ba32c;
        case 0x2ba330u: goto label_2ba330;
        case 0x2ba334u: goto label_2ba334;
        case 0x2ba338u: goto label_2ba338;
        case 0x2ba33cu: goto label_2ba33c;
        case 0x2ba340u: goto label_2ba340;
        case 0x2ba344u: goto label_2ba344;
        case 0x2ba348u: goto label_2ba348;
        case 0x2ba34cu: goto label_2ba34c;
        case 0x2ba350u: goto label_2ba350;
        case 0x2ba354u: goto label_2ba354;
        case 0x2ba358u: goto label_2ba358;
        case 0x2ba35cu: goto label_2ba35c;
        case 0x2ba360u: goto label_2ba360;
        case 0x2ba364u: goto label_2ba364;
        case 0x2ba368u: goto label_2ba368;
        case 0x2ba36cu: goto label_2ba36c;
        case 0x2ba370u: goto label_2ba370;
        case 0x2ba374u: goto label_2ba374;
        case 0x2ba378u: goto label_2ba378;
        case 0x2ba37cu: goto label_2ba37c;
        case 0x2ba380u: goto label_2ba380;
        case 0x2ba384u: goto label_2ba384;
        case 0x2ba388u: goto label_2ba388;
        case 0x2ba38cu: goto label_2ba38c;
        case 0x2ba390u: goto label_2ba390;
        case 0x2ba394u: goto label_2ba394;
        case 0x2ba398u: goto label_2ba398;
        case 0x2ba39cu: goto label_2ba39c;
        case 0x2ba3a0u: goto label_2ba3a0;
        case 0x2ba3a4u: goto label_2ba3a4;
        case 0x2ba3a8u: goto label_2ba3a8;
        case 0x2ba3acu: goto label_2ba3ac;
        case 0x2ba3b0u: goto label_2ba3b0;
        case 0x2ba3b4u: goto label_2ba3b4;
        case 0x2ba3b8u: goto label_2ba3b8;
        case 0x2ba3bcu: goto label_2ba3bc;
        case 0x2ba3c0u: goto label_2ba3c0;
        case 0x2ba3c4u: goto label_2ba3c4;
        case 0x2ba3c8u: goto label_2ba3c8;
        case 0x2ba3ccu: goto label_2ba3cc;
        case 0x2ba3d0u: goto label_2ba3d0;
        case 0x2ba3d4u: goto label_2ba3d4;
        case 0x2ba3d8u: goto label_2ba3d8;
        case 0x2ba3dcu: goto label_2ba3dc;
        case 0x2ba3e0u: goto label_2ba3e0;
        case 0x2ba3e4u: goto label_2ba3e4;
        case 0x2ba3e8u: goto label_2ba3e8;
        case 0x2ba3ecu: goto label_2ba3ec;
        case 0x2ba3f0u: goto label_2ba3f0;
        case 0x2ba3f4u: goto label_2ba3f4;
        case 0x2ba3f8u: goto label_2ba3f8;
        case 0x2ba3fcu: goto label_2ba3fc;
        case 0x2ba400u: goto label_2ba400;
        case 0x2ba404u: goto label_2ba404;
        case 0x2ba408u: goto label_2ba408;
        case 0x2ba40cu: goto label_2ba40c;
        case 0x2ba410u: goto label_2ba410;
        case 0x2ba414u: goto label_2ba414;
        case 0x2ba418u: goto label_2ba418;
        case 0x2ba41cu: goto label_2ba41c;
        case 0x2ba420u: goto label_2ba420;
        case 0x2ba424u: goto label_2ba424;
        case 0x2ba428u: goto label_2ba428;
        case 0x2ba42cu: goto label_2ba42c;
        case 0x2ba430u: goto label_2ba430;
        case 0x2ba434u: goto label_2ba434;
        case 0x2ba438u: goto label_2ba438;
        case 0x2ba43cu: goto label_2ba43c;
        case 0x2ba440u: goto label_2ba440;
        case 0x2ba444u: goto label_2ba444;
        case 0x2ba448u: goto label_2ba448;
        case 0x2ba44cu: goto label_2ba44c;
        case 0x2ba450u: goto label_2ba450;
        case 0x2ba454u: goto label_2ba454;
        case 0x2ba458u: goto label_2ba458;
        case 0x2ba45cu: goto label_2ba45c;
        case 0x2ba460u: goto label_2ba460;
        case 0x2ba464u: goto label_2ba464;
        case 0x2ba468u: goto label_2ba468;
        case 0x2ba46cu: goto label_2ba46c;
        case 0x2ba470u: goto label_2ba470;
        case 0x2ba474u: goto label_2ba474;
        case 0x2ba478u: goto label_2ba478;
        case 0x2ba47cu: goto label_2ba47c;
        case 0x2ba480u: goto label_2ba480;
        case 0x2ba484u: goto label_2ba484;
        case 0x2ba488u: goto label_2ba488;
        case 0x2ba48cu: goto label_2ba48c;
        case 0x2ba490u: goto label_2ba490;
        case 0x2ba494u: goto label_2ba494;
        case 0x2ba498u: goto label_2ba498;
        case 0x2ba49cu: goto label_2ba49c;
        case 0x2ba4a0u: goto label_2ba4a0;
        case 0x2ba4a4u: goto label_2ba4a4;
        case 0x2ba4a8u: goto label_2ba4a8;
        case 0x2ba4acu: goto label_2ba4ac;
        case 0x2ba4b0u: goto label_2ba4b0;
        case 0x2ba4b4u: goto label_2ba4b4;
        case 0x2ba4b8u: goto label_2ba4b8;
        case 0x2ba4bcu: goto label_2ba4bc;
        case 0x2ba4c0u: goto label_2ba4c0;
        case 0x2ba4c4u: goto label_2ba4c4;
        case 0x2ba4c8u: goto label_2ba4c8;
        case 0x2ba4ccu: goto label_2ba4cc;
        case 0x2ba4d0u: goto label_2ba4d0;
        case 0x2ba4d4u: goto label_2ba4d4;
        case 0x2ba4d8u: goto label_2ba4d8;
        case 0x2ba4dcu: goto label_2ba4dc;
        case 0x2ba4e0u: goto label_2ba4e0;
        case 0x2ba4e4u: goto label_2ba4e4;
        case 0x2ba4e8u: goto label_2ba4e8;
        case 0x2ba4ecu: goto label_2ba4ec;
        case 0x2ba4f0u: goto label_2ba4f0;
        case 0x2ba4f4u: goto label_2ba4f4;
        case 0x2ba4f8u: goto label_2ba4f8;
        case 0x2ba4fcu: goto label_2ba4fc;
        case 0x2ba500u: goto label_2ba500;
        case 0x2ba504u: goto label_2ba504;
        case 0x2ba508u: goto label_2ba508;
        case 0x2ba50cu: goto label_2ba50c;
        case 0x2ba510u: goto label_2ba510;
        case 0x2ba514u: goto label_2ba514;
        case 0x2ba518u: goto label_2ba518;
        case 0x2ba51cu: goto label_2ba51c;
        case 0x2ba520u: goto label_2ba520;
        case 0x2ba524u: goto label_2ba524;
        case 0x2ba528u: goto label_2ba528;
        case 0x2ba52cu: goto label_2ba52c;
        case 0x2ba530u: goto label_2ba530;
        case 0x2ba534u: goto label_2ba534;
        case 0x2ba538u: goto label_2ba538;
        case 0x2ba53cu: goto label_2ba53c;
        case 0x2ba540u: goto label_2ba540;
        case 0x2ba544u: goto label_2ba544;
        case 0x2ba548u: goto label_2ba548;
        case 0x2ba54cu: goto label_2ba54c;
        case 0x2ba550u: goto label_2ba550;
        case 0x2ba554u: goto label_2ba554;
        case 0x2ba558u: goto label_2ba558;
        case 0x2ba55cu: goto label_2ba55c;
        case 0x2ba560u: goto label_2ba560;
        case 0x2ba564u: goto label_2ba564;
        case 0x2ba568u: goto label_2ba568;
        case 0x2ba56cu: goto label_2ba56c;
        case 0x2ba570u: goto label_2ba570;
        case 0x2ba574u: goto label_2ba574;
        case 0x2ba578u: goto label_2ba578;
        case 0x2ba57cu: goto label_2ba57c;
        default: break;
    }

    ctx->pc = 0x2ba118u;

label_2ba118:
    // 0x2ba118: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ba118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2ba11c:
    // 0x2ba11c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2ba11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2ba120:
    // 0x2ba120: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2ba120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2ba124:
    // 0x2ba124: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2ba124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2ba128:
    // 0x2ba128: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ba128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ba12c:
    // 0x2ba12c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba130:
    // 0x2ba130: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2ba130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_2ba134:
    // 0x2ba134: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2ba134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2ba138:
    // 0x2ba138: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2ba138u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ba13c:
    // 0x2ba13c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ba13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2ba140:
    // 0x2ba140: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2ba140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2ba144:
    // 0x2ba144: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2ba144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2ba148:
    // 0x2ba148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ba14c:
    // 0x2ba14c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2ba14cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2ba150:
    // 0x2ba150: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2ba150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2ba154:
    // 0x2ba154: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ba154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba158:
    // 0x2ba158: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2ba158u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ba15c:
    // 0x2ba15c: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2ba15cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2ba160:
    // 0x2ba160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ba160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ba164:
    // 0x2ba164: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ba164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2ba168:
    // 0x2ba168: 0xc08a08a  jal         func_228228
label_2ba16c:
    if (ctx->pc == 0x2BA16Cu) {
        ctx->pc = 0x2BA16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA168u;
        // 0x2ba16c: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA170u;
        goto label_2ba170;
    }
    ctx->pc = 0x2BA168u;
    SET_GPR_U32(ctx, 31, 0x2BA170u);
    ctx->pc = 0x2BA16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA168u;
    // 0x2ba16c: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2BA168u, 0x2BA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA170u;
label_2ba170:
    // 0x2ba170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ba170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba174:
    // 0x2ba174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ba178:
    // 0x2ba178: 0x56020011  bnel        $s0, $v0, . + 4 + (0x11 << 2)
label_2ba17c:
    if (ctx->pc == 0x2BA17Cu) {
        ctx->pc = 0x2BA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA178u;
        // 0x2ba17c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA180u;
        goto label_2ba180;
    }
    ctx->pc = 0x2BA178u;
    {
        const bool branch_taken_0x2ba178 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ba178) {
            ctx->pc = 0x2BA17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA178u;
            // 0x2ba17c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA1C0u;
            goto label_2ba1c0;
        }
    }
    ctx->pc = 0x2BA180u;
label_2ba180:
    // 0x2ba180: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ba180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba184:
    // 0x2ba184: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2ba184u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2ba188:
    // 0x2ba188: 0x5840000d  blezl       $v0, . + 4 + (0xD << 2)
label_2ba18c:
    if (ctx->pc == 0x2BA18Cu) {
        ctx->pc = 0x2BA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA188u;
        // 0x2ba18c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA190u;
        goto label_2ba190;
    }
    ctx->pc = 0x2BA188u;
    {
        const bool branch_taken_0x2ba188 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ba188) {
            ctx->pc = 0x2BA18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA188u;
            // 0x2ba18c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA1C0u;
            goto label_2ba1c0;
        }
    }
    ctx->pc = 0x2BA190u;
label_2ba190:
    // 0x2ba190: 0xc0a36c2  jal         func_28DB08
label_2ba194:
    if (ctx->pc == 0x2BA194u) {
        ctx->pc = 0x2BA198u;
        goto label_2ba198;
    }
    ctx->pc = 0x2BA190u;
    SET_GPR_U32(ctx, 31, 0x2BA198u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2BA190u, 0x2BA198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA198u;
label_2ba198:
    // 0x2ba198: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2ba198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2ba19c:
    // 0x2ba19c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2ba19cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2ba1a0:
    // 0x2ba1a0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2ba1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2ba1a4:
    // 0x2ba1a4: 0xa0f809  jalr        $a1
label_2ba1a8:
    if (ctx->pc == 0x2BA1A8u) {
        ctx->pc = 0x2BA1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1A4u;
        // 0x2ba1a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1ACu;
        goto label_2ba1ac;
    }
    ctx->pc = 0x2BA1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2BA1ACu);
        ctx->pc = 0x2BA1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1A4u;
        // 0x2ba1a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA1A4u, 0x2BA1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA1ACu;
label_2ba1ac:
    // 0x2ba1ac: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_2ba1b0:
    if (ctx->pc == 0x2BA1B0u) {
        ctx->pc = 0x2BA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1ACu;
        // 0x2ba1b0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1B4u;
        goto label_2ba1b4;
    }
    ctx->pc = 0x2BA1ACu;
    {
        const bool branch_taken_0x2ba1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ba1ac) {
            ctx->pc = 0x2BA1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA1ACu;
            // 0x2ba1b0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA1C0u;
            goto label_2ba1c0;
        }
    }
    ctx->pc = 0x2BA1B4u;
label_2ba1b4:
    // 0x2ba1b4: 0xc0a36c8  jal         func_28DB20
label_2ba1b8:
    if (ctx->pc == 0x2BA1B8u) {
        ctx->pc = 0x2BA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1B4u;
        // 0x2ba1b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1BCu;
        goto label_2ba1bc;
    }
    ctx->pc = 0x2BA1B4u;
    SET_GPR_U32(ctx, 31, 0x2BA1BCu);
    ctx->pc = 0x2BA1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA1B4u;
    // 0x2ba1b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2BA1B4u, 0x2BA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA1BCu;
label_2ba1bc:
    // 0x2ba1bc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ba1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba1c0:
    // 0x2ba1c0: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2ba1c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2ba1c4:
    // 0x2ba1c4: 0x1c4000e1  bgtz        $v0, . + 4 + (0xE1 << 2)
label_2ba1c8:
    if (ctx->pc == 0x2BA1C8u) {
        ctx->pc = 0x2BA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1C4u;
        // 0x2ba1c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1CCu;
        goto label_2ba1cc;
    }
    ctx->pc = 0x2BA1C4u;
    {
        const bool branch_taken_0x2ba1c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2BA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1C4u;
        // 0x2ba1c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1c4) {
            ctx->pc = 0x2BA54Cu;
            goto label_2ba54c;
        }
    }
    ctx->pc = 0x2BA1CCu;
label_2ba1cc:
    // 0x2ba1cc: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2ba1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2ba1d0:
    // 0x2ba1d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ba1d4:
    if (ctx->pc == 0x2BA1D4u) {
        ctx->pc = 0x2BA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1D0u;
        // 0x2ba1d4: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1D8u;
        goto label_2ba1d8;
    }
    ctx->pc = 0x2BA1D0u;
    {
        const bool branch_taken_0x2ba1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba1d0) {
            ctx->pc = 0x2BA1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA1D0u;
            // 0x2ba1d4: 0xac600284  sw          $zero, 0x284($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA1D8u;
            goto label_2ba1d8;
        }
    }
    ctx->pc = 0x2BA1D8u;
label_2ba1d8:
    // 0x2ba1d8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ba1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba1dc:
    // 0x2ba1dc: 0xc0e409a  jal         func_390268
label_2ba1e0:
    if (ctx->pc == 0x2BA1E0u) {
        ctx->pc = 0x2BA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1DCu;
        // 0x2ba1e0: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1E4u;
        goto label_2ba1e4;
    }
    ctx->pc = 0x2BA1DCu;
    SET_GPR_U32(ctx, 31, 0x2BA1E4u);
    ctx->pc = 0x2BA1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA1DCu;
    // 0x2ba1e0: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BA1DCu, 0x2BA1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA1E4u;
label_2ba1e4:
    // 0x2ba1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1e8:
    // 0x2ba1e8: 0xc0a34d6  jal         func_28D358
label_2ba1ec:
    if (ctx->pc == 0x2BA1ECu) {
        ctx->pc = 0x2BA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1E8u;
        // 0x2ba1ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1F0u;
        goto label_2ba1f0;
    }
    ctx->pc = 0x2BA1E8u;
    SET_GPR_U32(ctx, 31, 0x2BA1F0u);
    ctx->pc = 0x2BA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA1E8u;
    // 0x2ba1ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2BA1E8u, 0x2BA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA1F0u;
label_2ba1f0:
    // 0x2ba1f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ba1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1f4:
    // 0x2ba1f4: 0xc08bfa0  jal         func_22FE80
label_2ba1f8:
    if (ctx->pc == 0x2BA1F8u) {
        ctx->pc = 0x2BA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1F4u;
        // 0x2ba1f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1FCu;
        goto label_2ba1fc;
    }
    ctx->pc = 0x2BA1F4u;
    SET_GPR_U32(ctx, 31, 0x2BA1FCu);
    ctx->pc = 0x2BA1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA1F4u;
    // 0x2ba1f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2BA1F4u, 0x2BA1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA1FCu;
label_2ba1fc:
    // 0x2ba1fc: 0xc08a08a  jal         func_228228
label_2ba200:
    if (ctx->pc == 0x2BA200u) {
        ctx->pc = 0x2BA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1FCu;
        // 0x2ba200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA204u;
        goto label_2ba204;
    }
    ctx->pc = 0x2BA1FCu;
    SET_GPR_U32(ctx, 31, 0x2BA204u);
    ctx->pc = 0x2BA200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA1FCu;
    // 0x2ba200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2BA1FCu, 0x2BA204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA204u;
label_2ba204:
    // 0x2ba204: 0x54400059  bnel        $v0, $zero, . + 4 + (0x59 << 2)
label_2ba208:
    if (ctx->pc == 0x2BA208u) {
        ctx->pc = 0x2BA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA204u;
        // 0x2ba208: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA20Cu;
        goto label_2ba20c;
    }
    ctx->pc = 0x2BA204u;
    {
        const bool branch_taken_0x2ba204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba204) {
            ctx->pc = 0x2BA208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA204u;
            // 0x2ba208: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA36Cu;
            goto label_2ba36c;
        }
    }
    ctx->pc = 0x2BA20Cu;
label_2ba20c:
    // 0x2ba20c: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x2ba20cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2ba210:
    // 0x2ba210: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ba210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ba214:
    // 0x2ba214: 0xc0cdb38  jal         func_336CE0
label_2ba218:
    if (ctx->pc == 0x2BA218u) {
        ctx->pc = 0x2BA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA214u;
        // 0x2ba218: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA21Cu;
        goto label_2ba21c;
    }
    ctx->pc = 0x2BA214u;
    SET_GPR_U32(ctx, 31, 0x2BA21Cu);
    ctx->pc = 0x2BA218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA214u;
    // 0x2ba218: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BA214u, 0x2BA21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA21Cu;
label_2ba21c:
    // 0x2ba21c: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x2ba21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_2ba220:
    // 0x2ba220: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x2ba220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
label_2ba224:
    // 0x2ba224: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ba224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ba228:
    // 0x2ba228: 0x0  nop
    ctx->pc = 0x2ba228u;
    // NOP
label_2ba22c:
    // 0x2ba22c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ba22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ba230:
    // 0x2ba230: 0x0  nop
    ctx->pc = 0x2ba230u;
    // NOP
label_2ba234:
    // 0x2ba234: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
label_2ba238:
    if (ctx->pc == 0x2BA238u) {
        ctx->pc = 0x2BA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA234u;
        // 0x2ba238: 0x86440092  lh          $a0, 0x92($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA23Cu;
        goto label_2ba23c;
    }
    ctx->pc = 0x2BA234u;
    {
        const bool branch_taken_0x2ba234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba234) {
            ctx->pc = 0x2BA238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA234u;
            // 0x2ba238: 0x86440092  lh          $a0, 0x92($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA2C4u;
            goto label_2ba2c4;
        }
    }
    ctx->pc = 0x2BA23Cu;
label_2ba23c:
    // 0x2ba23c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ba23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba240:
    // 0x2ba240: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x2ba240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_2ba244:
    // 0x2ba244: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2ba248:
    if (ctx->pc == 0x2BA248u) {
        ctx->pc = 0x2BA24Cu;
        goto label_2ba24c;
    }
    ctx->pc = 0x2BA244u;
    {
        const bool branch_taken_0x2ba244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba244) {
            ctx->pc = 0x2BA254u;
            goto label_2ba254;
        }
    }
    ctx->pc = 0x2BA24Cu;
label_2ba24c:
    // 0x2ba24c: 0xc08bfbc  jal         func_22FEF0
label_2ba250:
    if (ctx->pc == 0x2BA250u) {
        ctx->pc = 0x2BA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA24Cu;
        // 0x2ba250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA254u;
        goto label_2ba254;
    }
    ctx->pc = 0x2BA24Cu;
    SET_GPR_U32(ctx, 31, 0x2BA254u);
    ctx->pc = 0x2BA250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA24Cu;
    // 0x2ba250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2BA24Cu, 0x2BA254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA254u;
label_2ba254:
    // 0x2ba254: 0xc0a367c  jal         func_28D9F0
label_2ba258:
    if (ctx->pc == 0x2BA258u) {
        ctx->pc = 0x2BA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA254u;
        // 0x2ba258: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA25Cu;
        goto label_2ba25c;
    }
    ctx->pc = 0x2BA254u;
    SET_GPR_U32(ctx, 31, 0x2BA25Cu);
    ctx->pc = 0x2BA258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA254u;
    // 0x2ba258: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BA254u, 0x2BA25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA25Cu;
label_2ba25c:
    // 0x2ba25c: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
label_2ba260:
    if (ctx->pc == 0x2BA260u) {
        ctx->pc = 0x2BA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA25Cu;
        // 0x2ba260: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA264u;
        goto label_2ba264;
    }
    ctx->pc = 0x2BA25Cu;
    {
        const bool branch_taken_0x2ba25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA25Cu;
        // 0x2ba260: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba25c) {
            ctx->pc = 0x2BA548u;
            goto label_2ba548;
        }
    }
    ctx->pc = 0x2BA264u;
label_2ba264:
    // 0x2ba264: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2ba268:
    if (ctx->pc == 0x2BA268u) {
        ctx->pc = 0x2BA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA264u;
        // 0x2ba268: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA26Cu;
        goto label_2ba26c;
    }
    ctx->pc = 0x2BA264u;
    {
        const bool branch_taken_0x2ba264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA264u;
        // 0x2ba268: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba264) {
            ctx->pc = 0x2BA288u;
            goto label_2ba288;
        }
    }
    ctx->pc = 0x2BA26Cu;
label_2ba26c:
    // 0x2ba26c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ba26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ba270:
    // 0x2ba270: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ba270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ba274:
    // 0x2ba274: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ba274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ba278:
    // 0x2ba278: 0x40f809  jalr        $v0
label_2ba27c:
    if (ctx->pc == 0x2BA27Cu) {
        ctx->pc = 0x2BA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA278u;
        // 0x2ba27c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA280u;
        goto label_2ba280;
    }
    ctx->pc = 0x2BA278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BA280u);
        ctx->pc = 0x2BA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA278u;
        // 0x2ba27c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA278u, 0x2BA280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA280u;
label_2ba280:
    // 0x2ba280: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ba284:
    if (ctx->pc == 0x2BA284u) {
        ctx->pc = 0x2BA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA280u;
        // 0x2ba284: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA288u;
        goto label_2ba288;
    }
    ctx->pc = 0x2BA280u;
    {
        const bool branch_taken_0x2ba280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA280u;
        // 0x2ba284: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba280) {
            ctx->pc = 0x2BA290u;
            goto label_2ba290;
        }
    }
    ctx->pc = 0x2BA288u;
label_2ba288:
    // 0x2ba288: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x2ba288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ba28c:
    // 0x2ba28c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ba28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba290:
    // 0x2ba290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ba290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ba294:
    // 0x2ba294: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2ba294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2ba298:
    // 0x2ba298: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ba298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2ba29c:
    // 0x2ba29c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ba29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ba2a0:
    // 0x2ba2a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ba2a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2a4:
    // 0x2ba2a4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2ba2a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2a8:
    // 0x2ba2a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ba2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ba2ac:
    // 0x2ba2ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ba2acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2b0:
    // 0x2ba2b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ba2b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2b4:
    // 0x2ba2b4: 0xc0bee7a  jal         func_2FB9E8
label_2ba2b8:
    if (ctx->pc == 0x2BA2B8u) {
        ctx->pc = 0x2BA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2B4u;
        // 0x2ba2b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2BCu;
        goto label_2ba2bc;
    }
    ctx->pc = 0x2BA2B4u;
    SET_GPR_U32(ctx, 31, 0x2BA2BCu);
    ctx->pc = 0x2BA2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA2B4u;
    // 0x2ba2b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2BA2B4u, 0x2BA2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2BCu;
label_2ba2bc:
    // 0x2ba2bc: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_2ba2c0:
    if (ctx->pc == 0x2BA2C0u) {
        ctx->pc = 0x2BA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2BCu;
        // 0x2ba2c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2C4u;
        goto label_2ba2c4;
    }
    ctx->pc = 0x2BA2BCu;
    {
        const bool branch_taken_0x2ba2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2BCu;
        // 0x2ba2c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2bc) {
            ctx->pc = 0x2BA54Cu;
            goto label_2ba54c;
        }
    }
    ctx->pc = 0x2BA2C4u;
label_2ba2c4:
    // 0x2ba2c4: 0x26c24b00  addiu       $v0, $s6, 0x4B00
    ctx->pc = 0x2ba2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
label_2ba2c8:
    // 0x2ba2c8: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x2ba2c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2ba2cc:
    // 0x2ba2cc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ba2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ba2d0:
    // 0x2ba2d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ba2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ba2d4:
    // 0x2ba2d4: 0xc0cd7d2  jal         func_335F48
label_2ba2d8:
    if (ctx->pc == 0x2BA2D8u) {
        ctx->pc = 0x2BA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2D4u;
        // 0x2ba2d8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2DCu;
        goto label_2ba2dc;
    }
    ctx->pc = 0x2BA2D4u;
    SET_GPR_U32(ctx, 31, 0x2BA2DCu);
    ctx->pc = 0x2BA2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA2D4u;
    // 0x2ba2d8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2BA2D4u, 0x2BA2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2DCu;
label_2ba2dc:
    // 0x2ba2dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ba2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2e0:
    // 0x2ba2e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ba2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2e4:
    // 0x2ba2e4: 0xc0cd780  jal         func_335E00
label_2ba2e8:
    if (ctx->pc == 0x2BA2E8u) {
        ctx->pc = 0x2BA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2E4u;
        // 0x2ba2e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2ECu;
        goto label_2ba2ec;
    }
    ctx->pc = 0x2BA2E4u;
    SET_GPR_U32(ctx, 31, 0x2BA2ECu);
    ctx->pc = 0x2BA2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA2E4u;
    // 0x2ba2e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2BA2E4u, 0x2BA2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2ECu;
label_2ba2ec:
    // 0x2ba2ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ba2ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ba2f0:
    // 0x2ba2f0: 0xc0cd742  jal         func_335D08
label_2ba2f4:
    if (ctx->pc == 0x2BA2F4u) {
        ctx->pc = 0x2BA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2F0u;
        // 0x2ba2f4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2F8u;
        goto label_2ba2f8;
    }
    ctx->pc = 0x2BA2F0u;
    SET_GPR_U32(ctx, 31, 0x2BA2F8u);
    ctx->pc = 0x2BA2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA2F0u;
    // 0x2ba2f4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2BA2F0u, 0x2BA2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2F8u;
label_2ba2f8:
    // 0x2ba2f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ba2f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2ba2fc:
    // 0x2ba2fc: 0xc0cdd2e  jal         func_3374B8
label_2ba300:
    if (ctx->pc == 0x2BA300u) {
        ctx->pc = 0x2BA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2FCu;
        // 0x2ba300: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA304u;
        goto label_2ba304;
    }
    ctx->pc = 0x2BA2FCu;
    SET_GPR_U32(ctx, 31, 0x2BA304u);
    ctx->pc = 0x2BA300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA2FCu;
    // 0x2ba300: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2BA2FCu, 0x2BA304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA304u;
label_2ba304:
    // 0x2ba304: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2ba304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2ba308:
    // 0x2ba308: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2ba308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2ba30c:
    // 0x2ba30c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ba30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ba310:
    // 0x2ba310: 0x0  nop
    ctx->pc = 0x2ba310u;
    // NOP
label_2ba314:
    // 0x2ba314: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ba314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ba318:
    // 0x2ba318: 0x0  nop
    ctx->pc = 0x2ba318u;
    // NOP
label_2ba31c:
    // 0x2ba31c: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_2ba320:
    if (ctx->pc == 0x2BA320u) {
        ctx->pc = 0x2BA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA31Cu;
        // 0x2ba320: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA324u;
        goto label_2ba324;
    }
    ctx->pc = 0x2BA31Cu;
    {
        const bool branch_taken_0x2ba31c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba31c) {
            ctx->pc = 0x2BA320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA31Cu;
            // 0x2ba320: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA360u;
            goto label_2ba360;
        }
    }
    ctx->pc = 0x2BA324u;
label_2ba324:
    // 0x2ba324: 0xc0a367c  jal         func_28D9F0
label_2ba328:
    if (ctx->pc == 0x2BA328u) {
        ctx->pc = 0x2BA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA324u;
        // 0x2ba328: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA32Cu;
        goto label_2ba32c;
    }
    ctx->pc = 0x2BA324u;
    SET_GPR_U32(ctx, 31, 0x2BA32Cu);
    ctx->pc = 0x2BA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA324u;
    // 0x2ba328: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BA324u, 0x2BA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA32Cu;
label_2ba32c:
    // 0x2ba32c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ba32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba330:
    // 0x2ba330: 0x12000086  beqz        $s0, . + 4 + (0x86 << 2)
label_2ba334:
    if (ctx->pc == 0x2BA334u) {
        ctx->pc = 0x2BA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA330u;
        // 0x2ba334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA338u;
        goto label_2ba338;
    }
    ctx->pc = 0x2BA330u;
    {
        const bool branch_taken_0x2ba330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA330u;
        // 0x2ba334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba330) {
            ctx->pc = 0x2BA54Cu;
            goto label_2ba54c;
        }
    }
    ctx->pc = 0x2BA338u;
label_2ba338:
    // 0x2ba338: 0xc0884f6  jal         func_2213D8
label_2ba33c:
    if (ctx->pc == 0x2BA33Cu) {
        ctx->pc = 0x2BA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA338u;
        // 0x2ba33c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA340u;
        goto label_2ba340;
    }
    ctx->pc = 0x2BA338u;
    SET_GPR_U32(ctx, 31, 0x2BA340u);
    ctx->pc = 0x2BA33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA338u;
    // 0x2ba33c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2BA338u, 0x2BA340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA340u;
label_2ba340:
    // 0x2ba340: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ba340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba344:
    // 0x2ba344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba348:
    // 0x2ba348: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ba348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ba34c:
    // 0x2ba34c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ba34cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2ba350:
    // 0x2ba350: 0xc0bf800  jal         func_2FE000
label_2ba354:
    if (ctx->pc == 0x2BA354u) {
        ctx->pc = 0x2BA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA350u;
        // 0x2ba354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA358u;
        goto label_2ba358;
    }
    ctx->pc = 0x2BA350u;
    SET_GPR_U32(ctx, 31, 0x2BA358u);
    ctx->pc = 0x2BA354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA350u;
    // 0x2ba354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2BA350u, 0x2BA358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA358u;
label_2ba358:
    // 0x2ba358: 0x1000007c  b           . + 4 + (0x7C << 2)
label_2ba35c:
    if (ctx->pc == 0x2BA35Cu) {
        ctx->pc = 0x2BA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA358u;
        // 0x2ba35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA360u;
        goto label_2ba360;
    }
    ctx->pc = 0x2BA358u;
    {
        const bool branch_taken_0x2ba358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA358u;
        // 0x2ba35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba358) {
            ctx->pc = 0x2BA54Cu;
            goto label_2ba54c;
        }
    }
    ctx->pc = 0x2BA360u;
label_2ba360:
    // 0x2ba360: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ba360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ba364:
    // 0x2ba364: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2ba364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
label_2ba368:
    // 0x2ba368: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ba368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba36c:
    // 0x2ba36c: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x2ba36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_2ba370:
    // 0x2ba370: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_2ba374:
    if (ctx->pc == 0x2BA374u) {
        ctx->pc = 0x2BA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA370u;
        // 0x2ba374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA378u;
        goto label_2ba378;
    }
    ctx->pc = 0x2BA370u;
    {
        const bool branch_taken_0x2ba370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA370u;
        // 0x2ba374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba370) {
            ctx->pc = 0x2BA46Cu;
            goto label_2ba46c;
        }
    }
    ctx->pc = 0x2BA378u;
label_2ba378:
    // 0x2ba378: 0xc0a7c8c  jal         func_29F230
label_2ba37c:
    if (ctx->pc == 0x2BA37Cu) {
        ctx->pc = 0x2BA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA378u;
        // 0x2ba37c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA380u;
        goto label_2ba380;
    }
    ctx->pc = 0x2BA378u;
    SET_GPR_U32(ctx, 31, 0x2BA380u);
    ctx->pc = 0x2BA37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA378u;
    // 0x2ba37c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2BA378u, 0x2BA380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA380u;
label_2ba380:
    // 0x2ba380: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ba380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba384:
    // 0x2ba384: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
label_2ba388:
    if (ctx->pc == 0x2BA388u) {
        ctx->pc = 0x2BA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA384u;
        // 0x2ba388: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA38Cu;
        goto label_2ba38c;
    }
    ctx->pc = 0x2BA384u;
    {
        const bool branch_taken_0x2ba384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA384u;
        // 0x2ba388: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba384) {
            ctx->pc = 0x2BA470u;
            goto label_2ba470;
        }
    }
    ctx->pc = 0x2BA38Cu;
label_2ba38c:
    // 0x2ba38c: 0xc0a41a6  jal         func_290698
label_2ba390:
    if (ctx->pc == 0x2BA390u) {
        ctx->pc = 0x2BA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA38Cu;
        // 0x2ba390: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA394u;
        goto label_2ba394;
    }
    ctx->pc = 0x2BA38Cu;
    SET_GPR_U32(ctx, 31, 0x2BA394u);
    ctx->pc = 0x2BA390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA38Cu;
    // 0x2ba390: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290698u, 0x2BA38Cu, 0x2BA394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA394u;
label_2ba394:
    // 0x2ba394: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ba394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba398:
    // 0x2ba398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ba39c:
    // 0x2ba39c: 0x56620034  bnel        $s3, $v0, . + 4 + (0x34 << 2)
label_2ba3a0:
    if (ctx->pc == 0x2BA3A0u) {
        ctx->pc = 0x2BA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA39Cu;
        // 0x2ba3a0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3A4u;
        goto label_2ba3a4;
    }
    ctx->pc = 0x2BA39Cu;
    {
        const bool branch_taken_0x2ba39c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ba39c) {
            ctx->pc = 0x2BA3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA39Cu;
            // 0x2ba3a0: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA470u;
            goto label_2ba470;
        }
    }
    ctx->pc = 0x2BA3A4u;
label_2ba3a4:
    // 0x2ba3a4: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2ba3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2ba3a8:
    // 0x2ba3a8: 0x2415002d  addiu       $s5, $zero, 0x2D
    ctx->pc = 0x2ba3a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2ba3ac:
    // 0x2ba3ac: 0x1455000a  bne         $v0, $s5, . + 4 + (0xA << 2)
label_2ba3b0:
    if (ctx->pc == 0x2BA3B0u) {
        ctx->pc = 0x2BA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3ACu;
        // 0x2ba3b0: 0x3842002d  xori        $v0, $v0, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)45);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3B4u;
        goto label_2ba3b4;
    }
    ctx->pc = 0x2BA3ACu;
    {
        const bool branch_taken_0x2ba3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2BA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3ACu;
        // 0x2ba3b0: 0x3842002d  xori        $v0, $v0, 0x2D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)45);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3ac) {
            ctx->pc = 0x2BA3D8u;
            goto label_2ba3d8;
        }
    }
    ctx->pc = 0x2BA3B4u;
label_2ba3b4:
    // 0x2ba3b4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2ba3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2ba3b8:
    // 0x2ba3b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ba3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba3bc:
    // 0x2ba3bc: 0x68463fff  ldl         $a2, 0x3FFF($v0)
    ctx->pc = 0x2ba3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2ba3c0:
    // 0x2ba3c0: 0x6c463ff8  ldr         $a2, 0x3FF8($v0)
    ctx->pc = 0x2ba3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2ba3c4:
    // 0x2ba3c4: 0xc0a39c2  jal         func_28E708
label_2ba3c8:
    if (ctx->pc == 0x2BA3C8u) {
        ctx->pc = 0x2BA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3C4u;
        // 0x2ba3c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3CCu;
        goto label_2ba3cc;
    }
    ctx->pc = 0x2BA3C4u;
    SET_GPR_U32(ctx, 31, 0x2BA3CCu);
    ctx->pc = 0x2BA3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA3C4u;
    // 0x2ba3c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2BA3C4u, 0x2BA3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3CCu;
label_2ba3cc:
    // 0x2ba3cc: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2ba3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_2ba3d0:
    // 0x2ba3d0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2ba3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2ba3d4:
    // 0x2ba3d4: 0x3842002d  xori        $v0, $v0, 0x2D
    ctx->pc = 0x2ba3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)45);
label_2ba3d8:
    // 0x2ba3d8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2ba3dc:
    if (ctx->pc == 0x2BA3DCu) {
        ctx->pc = 0x2BA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3D8u;
        // 0x2ba3dc: 0x26c24b00  addiu       $v0, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3E0u;
        goto label_2ba3e0;
    }
    ctx->pc = 0x2BA3D8u;
    {
        const bool branch_taken_0x2ba3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3D8u;
        // 0x2ba3dc: 0x26c24b00  addiu       $v0, $s6, 0x4B00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3d8) {
            ctx->pc = 0x2BA46Cu;
            goto label_2ba46c;
        }
    }
    ctx->pc = 0x2BA3E0u;
label_2ba3e0:
    // 0x2ba3e0: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2ba3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2ba3e4:
    // 0x2ba3e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ba3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ba3e8:
    // 0x2ba3e8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ba3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2ba3ec:
    // 0x2ba3ec: 0xc0cdb38  jal         func_336CE0
label_2ba3f0:
    if (ctx->pc == 0x2BA3F0u) {
        ctx->pc = 0x2BA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3ECu;
        // 0x2ba3f0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3F4u;
        goto label_2ba3f4;
    }
    ctx->pc = 0x2BA3ECu;
    SET_GPR_U32(ctx, 31, 0x2BA3F4u);
    ctx->pc = 0x2BA3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA3ECu;
    // 0x2ba3f0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BA3ECu, 0x2BA3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3F4u;
label_2ba3f4:
    // 0x2ba3f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ba3f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ba3f8:
    // 0x2ba3f8: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x2ba3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2ba3fc:
    // 0x2ba3fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ba3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ba400:
    // 0x2ba400: 0xc08c24c  jal         func_230930
label_2ba404:
    if (ctx->pc == 0x2BA404u) {
        ctx->pc = 0x2BA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA400u;
        // 0x2ba404: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA408u;
        goto label_2ba408;
    }
    ctx->pc = 0x2BA400u;
    SET_GPR_U32(ctx, 31, 0x2BA408u);
    ctx->pc = 0x2BA404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA400u;
    // 0x2ba404: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230930u, 0x2BA400u, 0x2BA408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA408u;
label_2ba408:
    // 0x2ba408: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ba408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ba40c:
    // 0x2ba40c: 0x0  nop
    ctx->pc = 0x2ba40cu;
    // NOP
label_2ba410:
    // 0x2ba410: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2ba414:
    if (ctx->pc == 0x2BA414u) {
        ctx->pc = 0x2BA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA410u;
        // 0x2ba414: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA418u;
        goto label_2ba418;
    }
    ctx->pc = 0x2BA410u;
    {
        const bool branch_taken_0x2ba410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA410u;
        // 0x2ba414: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba410) {
            ctx->pc = 0x2BA46Cu;
            goto label_2ba46c;
        }
    }
    ctx->pc = 0x2BA418u;
label_2ba418:
    // 0x2ba418: 0x8e260048  lw          $a2, 0x48($s1)
    ctx->pc = 0x2ba418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2ba41c:
    // 0x2ba41c: 0xc0891de  jal         func_224778
label_2ba420:
    if (ctx->pc == 0x2BA420u) {
        ctx->pc = 0x2BA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA41Cu;
        // 0x2ba420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA424u;
        goto label_2ba424;
    }
    ctx->pc = 0x2BA41Cu;
    SET_GPR_U32(ctx, 31, 0x2BA424u);
    ctx->pc = 0x2BA420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA41Cu;
    // 0x2ba420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224778u, 0x2BA41Cu, 0x2BA424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA424u;
label_2ba424:
    // 0x2ba424: 0x14530012  bne         $v0, $s3, . + 4 + (0x12 << 2)
label_2ba428:
    if (ctx->pc == 0x2BA428u) {
        ctx->pc = 0x2BA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA424u;
        // 0x2ba428: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA42Cu;
        goto label_2ba42c;
    }
    ctx->pc = 0x2BA424u;
    {
        const bool branch_taken_0x2ba424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2BA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA424u;
        // 0x2ba428: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba424) {
            ctx->pc = 0x2BA470u;
            goto label_2ba470;
        }
    }
    ctx->pc = 0x2BA42Cu;
label_2ba42c:
    // 0x2ba42c: 0xc0a367c  jal         func_28D9F0
label_2ba430:
    if (ctx->pc == 0x2BA430u) {
        ctx->pc = 0x2BA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA42Cu;
        // 0x2ba430: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA434u;
        goto label_2ba434;
    }
    ctx->pc = 0x2BA42Cu;
    SET_GPR_U32(ctx, 31, 0x2BA434u);
    ctx->pc = 0x2BA430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA42Cu;
    // 0x2ba430: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BA42Cu, 0x2BA434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA434u;
label_2ba434:
    // 0x2ba434: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2ba438:
    if (ctx->pc == 0x2BA438u) {
        ctx->pc = 0x2BA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA434u;
        // 0x2ba438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA43Cu;
        goto label_2ba43c;
    }
    ctx->pc = 0x2BA434u;
    {
        const bool branch_taken_0x2ba434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA434u;
        // 0x2ba438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba434) {
            ctx->pc = 0x2BA464u;
            goto label_2ba464;
        }
    }
    ctx->pc = 0x2BA43Cu;
label_2ba43c:
    // 0x2ba43c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ba43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2ba440:
    // 0x2ba440: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ba440u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2ba444:
    // 0x2ba444: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ba444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ba448:
    // 0x2ba448: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ba448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba44c:
    // 0x2ba44c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2ba44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2ba450:
    // 0x2ba450: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ba450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ba454:
    // 0x2ba454: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ba454u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2ba458:
    // 0x2ba458: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ba458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba45c:
    // 0x2ba45c: 0xc0be968  jal         func_2FA5A0
label_2ba460:
    if (ctx->pc == 0x2BA460u) {
        ctx->pc = 0x2BA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA45Cu;
        // 0x2ba460: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA464u;
        goto label_2ba464;
    }
    ctx->pc = 0x2BA45Cu;
    SET_GPR_U32(ctx, 31, 0x2BA464u);
    ctx->pc = 0x2BA460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA45Cu;
    // 0x2ba460: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2BA45Cu, 0x2BA464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA464u;
label_2ba464:
    // 0x2ba464: 0x10000038  b           . + 4 + (0x38 << 2)
label_2ba468:
    if (ctx->pc == 0x2BA468u) {
        ctx->pc = 0x2BA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA464u;
        // 0x2ba468: 0xae350048  sw          $s5, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA46Cu;
        goto label_2ba46c;
    }
    ctx->pc = 0x2BA464u;
    {
        const bool branch_taken_0x2ba464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA464u;
        // 0x2ba468: 0xae350048  sw          $s5, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba464) {
            ctx->pc = 0x2BA548u;
            goto label_2ba548;
        }
    }
    ctx->pc = 0x2BA46Cu;
label_2ba46c:
    // 0x2ba46c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2ba46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2ba470:
    // 0x2ba470: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2ba470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2ba474:
    // 0x2ba474: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2ba474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
label_2ba478:
    // 0x2ba478: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2ba478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2ba47c:
    // 0x2ba47c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2ba47cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ba480:
    // 0x2ba480: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_2ba484:
    if (ctx->pc == 0x2BA484u) {
        ctx->pc = 0x2BA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA480u;
        // 0x2ba484: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA488u;
        goto label_2ba488;
    }
    ctx->pc = 0x2BA480u;
    {
        const bool branch_taken_0x2ba480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA480u;
        // 0x2ba484: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba480) {
            ctx->pc = 0x2BA4DCu;
            goto label_2ba4dc;
        }
    }
    ctx->pc = 0x2BA488u;
label_2ba488:
    // 0x2ba488: 0x244205dc  addiu       $v0, $v0, 0x5DC
    ctx->pc = 0x2ba488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1500));
label_2ba48c:
    // 0x2ba48c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ba48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba490:
    // 0x2ba490: 0xc0ae7ec  jal         func_2B9FB0
label_2ba494:
    if (ctx->pc == 0x2BA494u) {
        ctx->pc = 0x2BA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA490u;
        // 0x2ba494: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA498u;
        goto label_2ba498;
    }
    ctx->pc = 0x2BA490u;
    SET_GPR_U32(ctx, 31, 0x2BA498u);
    ctx->pc = 0x2BA494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA490u;
    // 0x2ba494: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9FB0u, 0x2BA490u, 0x2BA498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA498u;
label_2ba498:
    // 0x2ba498: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2ba498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2ba49c:
    // 0x2ba49c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ba49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4a0:
    // 0x2ba4a0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ba4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba4a4:
    // 0x2ba4a4: 0xc0e409a  jal         func_390268
label_2ba4a8:
    if (ctx->pc == 0x2BA4A8u) {
        ctx->pc = 0x2BA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4A4u;
        // 0x2ba4a8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4ACu;
        goto label_2ba4ac;
    }
    ctx->pc = 0x2BA4A4u;
    SET_GPR_U32(ctx, 31, 0x2BA4ACu);
    ctx->pc = 0x2BA4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA4A4u;
    // 0x2ba4a8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BA4A4u, 0x2BA4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA4ACu;
label_2ba4ac:
    // 0x2ba4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4b0:
    // 0x2ba4b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4b4:
    // 0x2ba4b4: 0xc0a352c  jal         func_28D4B0
label_2ba4b8:
    if (ctx->pc == 0x2BA4B8u) {
        ctx->pc = 0x2BA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4B4u;
        // 0x2ba4b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4BCu;
        goto label_2ba4bc;
    }
    ctx->pc = 0x2BA4B4u;
    SET_GPR_U32(ctx, 31, 0x2BA4BCu);
    ctx->pc = 0x2BA4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA4B4u;
    // 0x2ba4b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BA4B4u, 0x2BA4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA4BCu;
label_2ba4bc:
    // 0x2ba4bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ba4c0:
    if (ctx->pc == 0x2BA4C0u) {
        ctx->pc = 0x2BA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4BCu;
        // 0x2ba4c0: 0x26440284  addiu       $a0, $s2, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4C4u;
        goto label_2ba4c4;
    }
    ctx->pc = 0x2BA4BCu;
    {
        const bool branch_taken_0x2ba4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4BCu;
        // 0x2ba4c0: 0x26440284  addiu       $a0, $s2, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4bc) {
            ctx->pc = 0x2BA4DCu;
            goto label_2ba4dc;
        }
    }
    ctx->pc = 0x2BA4C4u;
label_2ba4c4:
    // 0x2ba4c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ba4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ba4c8:
    // 0x2ba4c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ba4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ba4cc:
    // 0x2ba4cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4d0:
    // 0x2ba4d0: 0x24060640  addiu       $a2, $zero, 0x640
    ctx->pc = 0x2ba4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
label_2ba4d4:
    // 0x2ba4d4: 0xc0a6800  jal         func_29A000
label_2ba4d8:
    if (ctx->pc == 0x2BA4D8u) {
        ctx->pc = 0x2BA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4D4u;
        // 0x2ba4d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4DCu;
        goto label_2ba4dc;
    }
    ctx->pc = 0x2BA4D4u;
    SET_GPR_U32(ctx, 31, 0x2BA4DCu);
    ctx->pc = 0x2BA4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA4D4u;
    // 0x2ba4d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2BA4D4u, 0x2BA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA4DCu;
label_2ba4dc:
    // 0x2ba4dc: 0x8e63b734  lw          $v1, -0x48CC($s3)
    ctx->pc = 0x2ba4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
label_2ba4e0:
    // 0x2ba4e0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2ba4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2ba4e4:
    // 0x2ba4e4: 0x8c700048  lw          $s0, 0x48($v1)
    ctx->pc = 0x2ba4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2ba4e8:
    // 0x2ba4e8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2ba4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2ba4ec:
    // 0x2ba4ec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2ba4f0:
    if (ctx->pc == 0x2BA4F0u) {
        ctx->pc = 0x2BA4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4ECu;
        // 0x2ba4f0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4F4u;
        goto label_2ba4f4;
    }
    ctx->pc = 0x2BA4ECu;
    {
        const bool branch_taken_0x2ba4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4ECu;
        // 0x2ba4f0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4ec) {
            ctx->pc = 0x2BA548u;
            goto label_2ba548;
        }
    }
    ctx->pc = 0x2BA4F4u;
label_2ba4f4:
    // 0x2ba4f4: 0x24050fa0  addiu       $a1, $zero, 0xFA0
    ctx->pc = 0x2ba4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2ba4f8:
    // 0x2ba4f8: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2ba4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2ba4fc:
    // 0x2ba4fc: 0xc0cd4fc  jal         func_3353F0
label_2ba500:
    if (ctx->pc == 0x2BA500u) {
        ctx->pc = 0x2BA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4FCu;
        // 0x2ba500: 0x24061f40  addiu       $a2, $zero, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA504u;
        goto label_2ba504;
    }
    ctx->pc = 0x2BA4FCu;
    SET_GPR_U32(ctx, 31, 0x2BA504u);
    ctx->pc = 0x2BA500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA4FCu;
    // 0x2ba500: 0x24061f40  addiu       $a2, $zero, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2BA4FCu, 0x2BA504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA504u;
label_2ba504:
    // 0x2ba504: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ba504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba508:
    // 0x2ba508: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ba508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ba50c:
    // 0x2ba50c: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2ba50cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_2ba510:
    // 0x2ba510: 0xc137832  jal         func_4DE0C8
label_2ba514:
    if (ctx->pc == 0x2BA514u) {
        ctx->pc = 0x2BA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA510u;
        // 0x2ba514: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA518u;
        goto label_2ba518;
    }
    ctx->pc = 0x2BA510u;
    SET_GPR_U32(ctx, 31, 0x2BA518u);
    ctx->pc = 0x2BA514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA510u;
    // 0x2ba514: 0x24840164  addiu       $a0, $a0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2BA510u, 0x2BA518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA518u;
label_2ba518:
    // 0x2ba518: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2ba51c:
    if (ctx->pc == 0x2BA51Cu) {
        ctx->pc = 0x2BA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA518u;
        // 0x2ba51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA520u;
        goto label_2ba520;
    }
    ctx->pc = 0x2BA518u;
    {
        const bool branch_taken_0x2ba518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA518u;
        // 0x2ba51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba518) {
            ctx->pc = 0x2BA54Cu;
            goto label_2ba54c;
        }
    }
    ctx->pc = 0x2BA520u;
label_2ba520:
    // 0x2ba520: 0xc0a367c  jal         func_28D9F0
label_2ba524:
    if (ctx->pc == 0x2BA524u) {
        ctx->pc = 0x2BA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA520u;
        // 0x2ba524: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA528u;
        goto label_2ba528;
    }
    ctx->pc = 0x2BA520u;
    SET_GPR_U32(ctx, 31, 0x2BA528u);
    ctx->pc = 0x2BA524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA520u;
    // 0x2ba524: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2BA520u, 0x2BA528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA528u;
label_2ba528:
    // 0x2ba528: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ba52c:
    if (ctx->pc == 0x2BA52Cu) {
        ctx->pc = 0x2BA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA528u;
        // 0x2ba52c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA530u;
        goto label_2ba530;
    }
    ctx->pc = 0x2BA528u;
    {
        const bool branch_taken_0x2ba528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA528u;
        // 0x2ba52c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba528) {
            ctx->pc = 0x2BA548u;
            goto label_2ba548;
        }
    }
    ctx->pc = 0x2BA530u;
label_2ba530:
    // 0x2ba530: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ba530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba534:
    // 0x2ba534: 0x2406025b  addiu       $a2, $zero, 0x25B
    ctx->pc = 0x2ba534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
label_2ba538:
    // 0x2ba538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ba538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba53c:
    // 0x2ba53c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ba53cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba540:
    // 0x2ba540: 0xc0be7d2  jal         func_2F9F48
label_2ba544:
    if (ctx->pc == 0x2BA544u) {
        ctx->pc = 0x2BA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA540u;
        // 0x2ba544: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA548u;
        goto label_2ba548;
    }
    ctx->pc = 0x2BA540u;
    SET_GPR_U32(ctx, 31, 0x2BA548u);
    ctx->pc = 0x2BA544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA540u;
    // 0x2ba544: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F48u, 0x2BA540u, 0x2BA548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA548u;
label_2ba548:
    // 0x2ba548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ba548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba54c:
    // 0x2ba54c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2ba54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ba550:
    // 0x2ba550: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2ba550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ba554:
    // 0x2ba554: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2ba554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ba558:
    // 0x2ba558: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2ba558u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ba55c:
    // 0x2ba55c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ba55cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ba560:
    // 0x2ba560: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2ba560u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ba564:
    // 0x2ba564: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2ba564u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ba568:
    // 0x2ba568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba56c:
    // 0x2ba56c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2ba56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ba570:
    // 0x2ba570: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2ba570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ba574:
    // 0x2ba574: 0x3e00008  jr          $ra
label_2ba578:
    if (ctx->pc == 0x2BA578u) {
        ctx->pc = 0x2BA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA574u;
        // 0x2ba578: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA57Cu;
        goto label_2ba57c;
    }
    ctx->pc = 0x2BA574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA574u;
        // 0x2ba578: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA57Cu;
label_2ba57c:
    // 0x2ba57c: 0x0  nop
    ctx->pc = 0x2ba57cu;
    // NOP
    ctx->pc = 0x2ba580u;
}
