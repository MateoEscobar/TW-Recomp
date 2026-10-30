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

// Function: sub_004110C0
// Address: 0x4110c0 - 0x4114d8
void sub_004110C0_0x4110c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004110C0_0x4110c0");
#endif

    switch (ctx->pc) {
        case 0x4110c0u: goto label_4110c0;
        case 0x4110c4u: goto label_4110c4;
        case 0x4110c8u: goto label_4110c8;
        case 0x4110ccu: goto label_4110cc;
        case 0x4110d0u: goto label_4110d0;
        case 0x4110d4u: goto label_4110d4;
        case 0x4110d8u: goto label_4110d8;
        case 0x4110dcu: goto label_4110dc;
        case 0x4110e0u: goto label_4110e0;
        case 0x4110e4u: goto label_4110e4;
        case 0x4110e8u: goto label_4110e8;
        case 0x4110ecu: goto label_4110ec;
        case 0x4110f0u: goto label_4110f0;
        case 0x4110f4u: goto label_4110f4;
        case 0x4110f8u: goto label_4110f8;
        case 0x4110fcu: goto label_4110fc;
        case 0x411100u: goto label_411100;
        case 0x411104u: goto label_411104;
        case 0x411108u: goto label_411108;
        case 0x41110cu: goto label_41110c;
        case 0x411110u: goto label_411110;
        case 0x411114u: goto label_411114;
        case 0x411118u: goto label_411118;
        case 0x41111cu: goto label_41111c;
        case 0x411120u: goto label_411120;
        case 0x411124u: goto label_411124;
        case 0x411128u: goto label_411128;
        case 0x41112cu: goto label_41112c;
        case 0x411130u: goto label_411130;
        case 0x411134u: goto label_411134;
        case 0x411138u: goto label_411138;
        case 0x41113cu: goto label_41113c;
        case 0x411140u: goto label_411140;
        case 0x411144u: goto label_411144;
        case 0x411148u: goto label_411148;
        case 0x41114cu: goto label_41114c;
        case 0x411150u: goto label_411150;
        case 0x411154u: goto label_411154;
        case 0x411158u: goto label_411158;
        case 0x41115cu: goto label_41115c;
        case 0x411160u: goto label_411160;
        case 0x411164u: goto label_411164;
        case 0x411168u: goto label_411168;
        case 0x41116cu: goto label_41116c;
        case 0x411170u: goto label_411170;
        case 0x411174u: goto label_411174;
        case 0x411178u: goto label_411178;
        case 0x41117cu: goto label_41117c;
        case 0x411180u: goto label_411180;
        case 0x411184u: goto label_411184;
        case 0x411188u: goto label_411188;
        case 0x41118cu: goto label_41118c;
        case 0x411190u: goto label_411190;
        case 0x411194u: goto label_411194;
        case 0x411198u: goto label_411198;
        case 0x41119cu: goto label_41119c;
        case 0x4111a0u: goto label_4111a0;
        case 0x4111a4u: goto label_4111a4;
        case 0x4111a8u: goto label_4111a8;
        case 0x4111acu: goto label_4111ac;
        case 0x4111b0u: goto label_4111b0;
        case 0x4111b4u: goto label_4111b4;
        case 0x4111b8u: goto label_4111b8;
        case 0x4111bcu: goto label_4111bc;
        case 0x4111c0u: goto label_4111c0;
        case 0x4111c4u: goto label_4111c4;
        case 0x4111c8u: goto label_4111c8;
        case 0x4111ccu: goto label_4111cc;
        case 0x4111d0u: goto label_4111d0;
        case 0x4111d4u: goto label_4111d4;
        case 0x4111d8u: goto label_4111d8;
        case 0x4111dcu: goto label_4111dc;
        case 0x4111e0u: goto label_4111e0;
        case 0x4111e4u: goto label_4111e4;
        case 0x4111e8u: goto label_4111e8;
        case 0x4111ecu: goto label_4111ec;
        case 0x4111f0u: goto label_4111f0;
        case 0x4111f4u: goto label_4111f4;
        case 0x4111f8u: goto label_4111f8;
        case 0x4111fcu: goto label_4111fc;
        case 0x411200u: goto label_411200;
        case 0x411204u: goto label_411204;
        case 0x411208u: goto label_411208;
        case 0x41120cu: goto label_41120c;
        case 0x411210u: goto label_411210;
        case 0x411214u: goto label_411214;
        case 0x411218u: goto label_411218;
        case 0x41121cu: goto label_41121c;
        case 0x411220u: goto label_411220;
        case 0x411224u: goto label_411224;
        case 0x411228u: goto label_411228;
        case 0x41122cu: goto label_41122c;
        case 0x411230u: goto label_411230;
        case 0x411234u: goto label_411234;
        case 0x411238u: goto label_411238;
        case 0x41123cu: goto label_41123c;
        case 0x411240u: goto label_411240;
        case 0x411244u: goto label_411244;
        case 0x411248u: goto label_411248;
        case 0x41124cu: goto label_41124c;
        case 0x411250u: goto label_411250;
        case 0x411254u: goto label_411254;
        case 0x411258u: goto label_411258;
        case 0x41125cu: goto label_41125c;
        case 0x411260u: goto label_411260;
        case 0x411264u: goto label_411264;
        case 0x411268u: goto label_411268;
        case 0x41126cu: goto label_41126c;
        case 0x411270u: goto label_411270;
        case 0x411274u: goto label_411274;
        case 0x411278u: goto label_411278;
        case 0x41127cu: goto label_41127c;
        case 0x411280u: goto label_411280;
        case 0x411284u: goto label_411284;
        case 0x411288u: goto label_411288;
        case 0x41128cu: goto label_41128c;
        case 0x411290u: goto label_411290;
        case 0x411294u: goto label_411294;
        case 0x411298u: goto label_411298;
        case 0x41129cu: goto label_41129c;
        case 0x4112a0u: goto label_4112a0;
        case 0x4112a4u: goto label_4112a4;
        case 0x4112a8u: goto label_4112a8;
        case 0x4112acu: goto label_4112ac;
        case 0x4112b0u: goto label_4112b0;
        case 0x4112b4u: goto label_4112b4;
        case 0x4112b8u: goto label_4112b8;
        case 0x4112bcu: goto label_4112bc;
        case 0x4112c0u: goto label_4112c0;
        case 0x4112c4u: goto label_4112c4;
        case 0x4112c8u: goto label_4112c8;
        case 0x4112ccu: goto label_4112cc;
        case 0x4112d0u: goto label_4112d0;
        case 0x4112d4u: goto label_4112d4;
        case 0x4112d8u: goto label_4112d8;
        case 0x4112dcu: goto label_4112dc;
        case 0x4112e0u: goto label_4112e0;
        case 0x4112e4u: goto label_4112e4;
        case 0x4112e8u: goto label_4112e8;
        case 0x4112ecu: goto label_4112ec;
        case 0x4112f0u: goto label_4112f0;
        case 0x4112f4u: goto label_4112f4;
        case 0x4112f8u: goto label_4112f8;
        case 0x4112fcu: goto label_4112fc;
        case 0x411300u: goto label_411300;
        case 0x411304u: goto label_411304;
        case 0x411308u: goto label_411308;
        case 0x41130cu: goto label_41130c;
        case 0x411310u: goto label_411310;
        case 0x411314u: goto label_411314;
        case 0x411318u: goto label_411318;
        case 0x41131cu: goto label_41131c;
        case 0x411320u: goto label_411320;
        case 0x411324u: goto label_411324;
        case 0x411328u: goto label_411328;
        case 0x41132cu: goto label_41132c;
        case 0x411330u: goto label_411330;
        case 0x411334u: goto label_411334;
        case 0x411338u: goto label_411338;
        case 0x41133cu: goto label_41133c;
        case 0x411340u: goto label_411340;
        case 0x411344u: goto label_411344;
        case 0x411348u: goto label_411348;
        case 0x41134cu: goto label_41134c;
        case 0x411350u: goto label_411350;
        case 0x411354u: goto label_411354;
        case 0x411358u: goto label_411358;
        case 0x41135cu: goto label_41135c;
        case 0x411360u: goto label_411360;
        case 0x411364u: goto label_411364;
        case 0x411368u: goto label_411368;
        case 0x41136cu: goto label_41136c;
        case 0x411370u: goto label_411370;
        case 0x411374u: goto label_411374;
        case 0x411378u: goto label_411378;
        case 0x41137cu: goto label_41137c;
        case 0x411380u: goto label_411380;
        case 0x411384u: goto label_411384;
        case 0x411388u: goto label_411388;
        case 0x41138cu: goto label_41138c;
        case 0x411390u: goto label_411390;
        case 0x411394u: goto label_411394;
        case 0x411398u: goto label_411398;
        case 0x41139cu: goto label_41139c;
        case 0x4113a0u: goto label_4113a0;
        case 0x4113a4u: goto label_4113a4;
        case 0x4113a8u: goto label_4113a8;
        case 0x4113acu: goto label_4113ac;
        case 0x4113b0u: goto label_4113b0;
        case 0x4113b4u: goto label_4113b4;
        case 0x4113b8u: goto label_4113b8;
        case 0x4113bcu: goto label_4113bc;
        case 0x4113c0u: goto label_4113c0;
        case 0x4113c4u: goto label_4113c4;
        case 0x4113c8u: goto label_4113c8;
        case 0x4113ccu: goto label_4113cc;
        case 0x4113d0u: goto label_4113d0;
        case 0x4113d4u: goto label_4113d4;
        case 0x4113d8u: goto label_4113d8;
        case 0x4113dcu: goto label_4113dc;
        case 0x4113e0u: goto label_4113e0;
        case 0x4113e4u: goto label_4113e4;
        case 0x4113e8u: goto label_4113e8;
        case 0x4113ecu: goto label_4113ec;
        case 0x4113f0u: goto label_4113f0;
        case 0x4113f4u: goto label_4113f4;
        case 0x4113f8u: goto label_4113f8;
        case 0x4113fcu: goto label_4113fc;
        case 0x411400u: goto label_411400;
        case 0x411404u: goto label_411404;
        case 0x411408u: goto label_411408;
        case 0x41140cu: goto label_41140c;
        case 0x411410u: goto label_411410;
        case 0x411414u: goto label_411414;
        case 0x411418u: goto label_411418;
        case 0x41141cu: goto label_41141c;
        case 0x411420u: goto label_411420;
        case 0x411424u: goto label_411424;
        case 0x411428u: goto label_411428;
        case 0x41142cu: goto label_41142c;
        case 0x411430u: goto label_411430;
        case 0x411434u: goto label_411434;
        case 0x411438u: goto label_411438;
        case 0x41143cu: goto label_41143c;
        case 0x411440u: goto label_411440;
        case 0x411444u: goto label_411444;
        case 0x411448u: goto label_411448;
        case 0x41144cu: goto label_41144c;
        case 0x411450u: goto label_411450;
        case 0x411454u: goto label_411454;
        case 0x411458u: goto label_411458;
        case 0x41145cu: goto label_41145c;
        case 0x411460u: goto label_411460;
        case 0x411464u: goto label_411464;
        case 0x411468u: goto label_411468;
        case 0x41146cu: goto label_41146c;
        case 0x411470u: goto label_411470;
        case 0x411474u: goto label_411474;
        case 0x411478u: goto label_411478;
        case 0x41147cu: goto label_41147c;
        case 0x411480u: goto label_411480;
        case 0x411484u: goto label_411484;
        case 0x411488u: goto label_411488;
        case 0x41148cu: goto label_41148c;
        case 0x411490u: goto label_411490;
        case 0x411494u: goto label_411494;
        case 0x411498u: goto label_411498;
        case 0x41149cu: goto label_41149c;
        case 0x4114a0u: goto label_4114a0;
        case 0x4114a4u: goto label_4114a4;
        case 0x4114a8u: goto label_4114a8;
        case 0x4114acu: goto label_4114ac;
        case 0x4114b0u: goto label_4114b0;
        case 0x4114b4u: goto label_4114b4;
        case 0x4114b8u: goto label_4114b8;
        case 0x4114bcu: goto label_4114bc;
        case 0x4114c0u: goto label_4114c0;
        case 0x4114c4u: goto label_4114c4;
        case 0x4114c8u: goto label_4114c8;
        case 0x4114ccu: goto label_4114cc;
        case 0x4114d0u: goto label_4114d0;
        case 0x4114d4u: goto label_4114d4;
        default: break;
    }

    ctx->pc = 0x4110c0u;

label_4110c0:
    // 0x4110c0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4110c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4110c4:
    // 0x4110c4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4110c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4110c8:
    // 0x4110c8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x4110c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_4110cc:
    // 0x4110cc: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x4110ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_4110d0:
    // 0x4110d0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x4110d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_4110d4:
    // 0x4110d4: 0x25088dc0  addiu       $t0, $t0, -0x7240
    ctx->pc = 0x4110d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938048));
label_4110d8:
    // 0x4110d8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x4110d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_4110dc:
    // 0x4110dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4110dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4110e0:
    // 0x4110e0: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x4110e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_4110e4:
    // 0x4110e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4110e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4110e8:
    // 0x4110e8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x4110e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_4110ec:
    // 0x4110ec: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4110ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4110f0:
    // 0x4110f0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x4110f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_4110f4:
    // 0x4110f4: 0x24a58cc8  addiu       $a1, $a1, -0x7338
    ctx->pc = 0x4110f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937800));
label_4110f8:
    // 0x4110f8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x4110f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_4110fc:
    // 0x4110fc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4110fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_411100:
    // 0x411100: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x411100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_411104:
    // 0x411104: 0x240901b9  addiu       $t1, $zero, 0x1B9
    ctx->pc = 0x411104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
label_411108:
    // 0x411108: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x411108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_41110c:
    // 0x41110c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x41110cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411110:
    // 0x411110: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x411110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_411114:
    // 0x411114: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x411114u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411118:
    // 0x411118: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x411118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_41111c:
    // 0x41111c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x41111cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_411120:
    // 0x411120: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x411120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_411124:
    // 0x411124: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x411124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_411128:
    // 0x411128: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x411128u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_41112c:
    // 0x41112c: 0xc3a018  mult        $s4, $a2, $v1
    ctx->pc = 0x41112cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_411130:
    // 0x411130: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x411130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_411134:
    // 0x411134: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x411134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_411138:
    // 0x411138: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x411138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_41113c:
    // 0x41113c: 0xac441208  sw          $a0, 0x1208($v0)
    ctx->pc = 0x41113cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4616), GPR_U32(ctx, 4));
label_411140:
    // 0x411140: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x411140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_411144:
    // 0x411144: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x411144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_411148:
    // 0x411148: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x411148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_41114c:
    // 0x41114c: 0x40f809  jalr        $v0
label_411150:
    if (ctx->pc == 0x411150u) {
        ctx->pc = 0x411150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41114Cu;
        // 0x411150: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411154u;
        goto label_411154;
    }
    ctx->pc = 0x41114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411154u);
        ctx->pc = 0x411150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41114Cu;
        // 0x411150: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41114Cu, 0x411154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411154u;
label_411154:
    // 0x411154: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x411154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411158:
    // 0x411158: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_41115c:
    if (ctx->pc == 0x41115Cu) {
        ctx->pc = 0x41115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411158u;
        // 0x41115c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411160u;
        goto label_411160;
    }
    ctx->pc = 0x411158u;
    {
        const bool branch_taken_0x411158 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411158u;
        // 0x41115c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411158) {
            ctx->pc = 0x411168u;
            goto label_411168;
        }
    }
    ctx->pc = 0x411160u;
label_411160:
    // 0x411160: 0x24424370  addiu       $v0, $v0, 0x4370
    ctx->pc = 0x411160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17264));
label_411164:
    // 0x411164: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x411164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_411168:
    // 0x411168: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x411168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_41116c:
    // 0x41116c: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x41116cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_411170:
    // 0x411170: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x411170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_411174:
    // 0x411174: 0x24c68e10  addiu       $a2, $a2, -0x71F0
    ctx->pc = 0x411174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938128));
label_411178:
    // 0x411178: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x411178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_41117c:
    // 0x41117c: 0xc10ca04  jal         func_432810
label_411180:
    if (ctx->pc == 0x411180u) {
        ctx->pc = 0x411180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41117Cu;
        // 0x411180: 0x2670120c  addiu       $s0, $s3, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4620));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411184u;
        goto label_411184;
    }
    ctx->pc = 0x41117Cu;
    SET_GPR_U32(ctx, 31, 0x411184u);
    ctx->pc = 0x411180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41117Cu;
    // 0x411180: 0x2670120c  addiu       $s0, $s3, 0x120C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x41117Cu, 0x411184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411184u;
label_411184:
    // 0x411184: 0x26751204  addiu       $s5, $s3, 0x1204
    ctx->pc = 0x411184u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4612));
label_411188:
    // 0x411188: 0xafb00054  sw          $s0, 0x54($sp)
    ctx->pc = 0x411188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
label_41118c:
    // 0x41118c: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x41118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_411190:
    // 0x411190: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x411190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_411194:
    // 0x411194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x411194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411198:
    // 0x411198: 0x8c461214  lw          $a2, 0x1214($v0)
    ctx->pc = 0x411198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4628)));
label_41119c:
    // 0x41119c: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x41119cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_4111a0:
    // 0x4111a0: 0xc0ce108  jal         func_338420
label_4111a4:
    if (ctx->pc == 0x4111A4u) {
        ctx->pc = 0x4111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4111A0u;
        // 0x4111a4: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4111A8u;
        goto label_4111a8;
    }
    ctx->pc = 0x4111A0u;
    SET_GPR_U32(ctx, 31, 0x4111A8u);
    ctx->pc = 0x4111A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4111A0u;
    // 0x4111a4: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338420u, 0x4111A0u, 0x4111A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4111A8u;
label_4111a8:
    // 0x4111a8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x4111a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_4111ac:
    // 0x4111ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4111acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4111b0:
    // 0x4111b0: 0x8ce827e4  lw          $t0, 0x27E4($a3)
    ctx->pc = 0x4111b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10212)));
label_4111b4:
    // 0x4111b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4111b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4111b8:
    // 0x4111b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4111b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4111bc:
    // 0x4111bc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4111bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4111c0:
    // 0x4111c0: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x4111c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_4111c4:
    // 0x4111c4: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x4111c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_4111c8:
    // 0x4111c8: 0x40f809  jalr        $v0
label_4111cc:
    if (ctx->pc == 0x4111CCu) {
        ctx->pc = 0x4111CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4111C8u;
        // 0x4111cc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4111D0u;
        goto label_4111d0;
    }
    ctx->pc = 0x4111C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4111D0u);
        ctx->pc = 0x4111CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4111C8u;
        // 0x4111cc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4111C8u, 0x4111D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4111D0u;
label_4111d0:
    // 0x4111d0: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x4111d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_4111d4:
    // 0x4111d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4111d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4111d8:
    // 0x4111d8: 0x8d2827e4  lw          $t0, 0x27E4($t1)
    ctx->pc = 0x4111d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 10212)));
label_4111dc:
    // 0x4111dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4111dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4111e0:
    // 0x4111e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4111e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4111e4:
    // 0x4111e4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4111e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4111e8:
    // 0x4111e8: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x4111e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4111ec:
    // 0x4111ec: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x4111ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_4111f0:
    // 0x4111f0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x4111f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_4111f4:
    // 0x4111f4: 0x60f809  jalr        $v1
label_4111f8:
    if (ctx->pc == 0x4111F8u) {
        ctx->pc = 0x4111F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4111F4u;
        // 0x4111f8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4111FCu;
        goto label_4111fc;
    }
    ctx->pc = 0x4111F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4111FCu);
        ctx->pc = 0x4111F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4111F4u;
        // 0x4111f8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4111F4u, 0x4111FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4111FCu;
label_4111fc:
    // 0x4111fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4111fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_411200:
    // 0x411200: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x411200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_411204:
    // 0x411204: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x411204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_411208:
    // 0x411208: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x411208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41120c:
    // 0x41120c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x41120cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_411210:
    // 0x411210: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x411210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_411214:
    // 0x411214: 0x60f809  jalr        $v1
label_411218:
    if (ctx->pc == 0x411218u) {
        ctx->pc = 0x411218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411214u;
        // 0x411218: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41121Cu;
        goto label_41121c;
    }
    ctx->pc = 0x411214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41121Cu);
        ctx->pc = 0x411218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411214u;
        // 0x411218: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411214u, 0x41121Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41121Cu;
label_41121c:
    // 0x41121c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x41121cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_411220:
    // 0x411220: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x411220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_411224:
    // 0x411224: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x411224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_411228:
    // 0x411228: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x411228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_41122c:
    // 0x41122c: 0x40f809  jalr        $v0
label_411230:
    if (ctx->pc == 0x411230u) {
        ctx->pc = 0x411230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41122Cu;
        // 0x411230: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411234u;
        goto label_411234;
    }
    ctx->pc = 0x41122Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411234u);
        ctx->pc = 0x411230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41122Cu;
        // 0x411230: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41122Cu, 0x411234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411234u;
label_411234:
    // 0x411234: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x411234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_411238:
    // 0x411238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x411238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41123c:
    // 0x41123c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x41123cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_411240:
    // 0x411240: 0xc11fb56  jal         func_47ED58
label_411244:
    if (ctx->pc == 0x411244u) {
        ctx->pc = 0x411244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411240u;
        // 0x411244: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411248u;
        goto label_411248;
    }
    ctx->pc = 0x411240u;
    SET_GPR_U32(ctx, 31, 0x411248u);
    ctx->pc = 0x411244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411240u;
    // 0x411244: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x411240u, 0x411248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411248u;
label_411248:
    // 0x411248: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x411248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41124c:
    // 0x41124c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x41124cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_411250:
    // 0x411250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x411250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411254:
    // 0x411254: 0xc11eeae  jal         func_47BAB8
label_411258:
    if (ctx->pc == 0x411258u) {
        ctx->pc = 0x411258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411254u;
        // 0x411258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41125Cu;
        goto label_41125c;
    }
    ctx->pc = 0x411254u;
    SET_GPR_U32(ctx, 31, 0x41125Cu);
    ctx->pc = 0x411258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411254u;
    // 0x411258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x411254u, 0x41125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41125Cu;
label_41125c:
    // 0x41125c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_411260:
    if (ctx->pc == 0x411260u) {
        ctx->pc = 0x411260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41125Cu;
        // 0x411260: 0x2b41021  addu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411264u;
        goto label_411264;
    }
    ctx->pc = 0x41125Cu;
    {
        const bool branch_taken_0x41125c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x411260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41125Cu;
        // 0x411260: 0x2b41021  addu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41125c) {
            ctx->pc = 0x411278u;
            goto label_411278;
        }
    }
    ctx->pc = 0x411264u;
label_411264:
    // 0x411264: 0xc12043e  jal         func_4810F8
label_411268:
    if (ctx->pc == 0x411268u) {
        ctx->pc = 0x411268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411264u;
        // 0x411268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41126Cu;
        goto label_41126c;
    }
    ctx->pc = 0x411264u;
    SET_GPR_U32(ctx, 31, 0x41126Cu);
    ctx->pc = 0x411268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411264u;
    // 0x411268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4810F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4810F8u, 0x411264u, 0x41126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41126Cu;
label_41126c:
    // 0x41126c: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x41126cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_411270:
    // 0x411270: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x411270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_411274:
    // 0x411274: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x411274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_411278:
    // 0x411278: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x411278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41127c:
    // 0x41127c: 0xc1223e4  jal         func_488F90
label_411280:
    if (ctx->pc == 0x411280u) {
        ctx->pc = 0x411280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41127Cu;
        // 0x411280: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411284u;
        goto label_411284;
    }
    ctx->pc = 0x41127Cu;
    SET_GPR_U32(ctx, 31, 0x411284u);
    ctx->pc = 0x411280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41127Cu;
    // 0x411280: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488F90u, 0x41127Cu, 0x411284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411284u;
label_411284:
    // 0x411284: 0xc1223e4  jal         func_488F90
label_411288:
    if (ctx->pc == 0x411288u) {
        ctx->pc = 0x411288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411284u;
        // 0x411288: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41128Cu;
        goto label_41128c;
    }
    ctx->pc = 0x411284u;
    SET_GPR_U32(ctx, 31, 0x41128Cu);
    ctx->pc = 0x411288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411284u;
    // 0x411288: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488F90u, 0x411284u, 0x41128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41128Cu;
label_41128c:
    // 0x41128c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_411290:
    // 0x411290: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x411290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_411294:
    // 0x411294: 0xc11ef80  jal         func_47BE00
label_411298:
    if (ctx->pc == 0x411298u) {
        ctx->pc = 0x411298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411294u;
        // 0x411298: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41129Cu;
        goto label_41129c;
    }
    ctx->pc = 0x411294u;
    SET_GPR_U32(ctx, 31, 0x41129Cu);
    ctx->pc = 0x411298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411294u;
    // 0x411298: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x411294u, 0x41129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41129Cu;
label_41129c:
    // 0x41129c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41129cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_4112a0:
    // 0x4112a0: 0x8c66cdb4  lw          $a2, -0x324C($v1)
    ctx->pc = 0x4112a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_4112a4:
    // 0x4112a4: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x4112a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4112a8:
    // 0x4112a8: 0x84a40060  lh          $a0, 0x60($a1)
    ctx->pc = 0x4112a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
label_4112ac:
    // 0x4112ac: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x4112acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_4112b0:
    // 0x4112b0: 0x40f809  jalr        $v0
label_4112b4:
    if (ctx->pc == 0x4112B4u) {
        ctx->pc = 0x4112B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112B0u;
        // 0x4112b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4112B8u;
        goto label_4112b8;
    }
    ctx->pc = 0x4112B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4112B8u);
        ctx->pc = 0x4112B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112B0u;
        // 0x4112b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4112B0u, 0x4112B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4112B8u;
label_4112b8:
    // 0x4112b8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x4112b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_4112bc:
    // 0x4112bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4112bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4112c0:
    // 0x4112c0: 0x18400060  blez        $v0, . + 4 + (0x60 << 2)
label_4112c4:
    if (ctx->pc == 0x4112C4u) {
        ctx->pc = 0x4112C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112C0u;
        // 0x4112c4: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4112C8u;
        goto label_4112c8;
    }
    ctx->pc = 0x4112C0u;
    {
        const bool branch_taken_0x4112c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4112C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112C0u;
        // 0x4112c4: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4112c0) {
            ctx->pc = 0x411444u;
            goto label_411444;
        }
    }
    ctx->pc = 0x4112C8u;
label_4112c8:
    // 0x4112c8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x4112c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_4112cc:
    // 0x4112cc: 0x24561b18  addiu       $s6, $v0, 0x1B18
    ctx->pc = 0x4112ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 6936));
label_4112d0:
    // 0x4112d0: 0x247e9ef8  addiu       $fp, $v1, -0x6108
    ctx->pc = 0x4112d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942456));
label_4112d4:
    // 0x4112d4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x4112d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4112d8:
    // 0x4112d8: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x4112d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_4112dc:
    // 0x4112dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4112dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4112e0:
    // 0x4112e0: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x4112e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_4112e4:
    // 0x4112e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4112e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4112e8:
    // 0x4112e8: 0xc11ef80  jal         func_47BE00
label_4112ec:
    if (ctx->pc == 0x4112ECu) {
        ctx->pc = 0x4112ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112E8u;
        // 0x4112ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4112F0u;
        goto label_4112f0;
    }
    ctx->pc = 0x4112E8u;
    SET_GPR_U32(ctx, 31, 0x4112F0u);
    ctx->pc = 0x4112ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4112E8u;
    // 0x4112ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x4112E8u, 0x4112F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4112F0u;
label_4112f0:
    // 0x4112f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4112f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4112f4:
    // 0x4112f4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x4112f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4112f8:
    // 0x4112f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4112f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4112fc:
    // 0x4112fc: 0xc11eeae  jal         func_47BAB8
label_411300:
    if (ctx->pc == 0x411300u) {
        ctx->pc = 0x411300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4112FCu;
        // 0x411300: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411304u;
        goto label_411304;
    }
    ctx->pc = 0x4112FCu;
    SET_GPR_U32(ctx, 31, 0x411304u);
    ctx->pc = 0x411300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4112FCu;
    // 0x411300: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x4112FCu, 0x411304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411304u;
label_411304:
    // 0x411304: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_411308:
    if (ctx->pc == 0x411308u) {
        ctx->pc = 0x411308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411304u;
        // 0x411308: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41130Cu;
        goto label_41130c;
    }
    ctx->pc = 0x411304u;
    {
        const bool branch_taken_0x411304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x411308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411304u;
        // 0x411308: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411304) {
            ctx->pc = 0x41131Cu;
            goto label_41131c;
        }
    }
    ctx->pc = 0x41130Cu;
label_41130c:
    // 0x41130c: 0xc11a9c8  jal         func_46A720
label_411310:
    if (ctx->pc == 0x411310u) {
        ctx->pc = 0x411310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41130Cu;
        // 0x411310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411314u;
        goto label_411314;
    }
    ctx->pc = 0x41130Cu;
    SET_GPR_U32(ctx, 31, 0x411314u);
    ctx->pc = 0x411310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41130Cu;
    // 0x411310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A720u, 0x41130Cu, 0x411314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411314u;
label_411314:
    // 0x411314: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x411314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411318:
    // 0x411318: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x411318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_41131c:
    // 0x41131c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x41131cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_411320:
    // 0x411320: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x411320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_411324:
    // 0x411324: 0xc12107a  jal         func_4841E8
label_411328:
    if (ctx->pc == 0x411328u) {
        ctx->pc = 0x411328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411324u;
        // 0x411328: 0x8c500038  lw          $s0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41132Cu;
        goto label_41132c;
    }
    ctx->pc = 0x411324u;
    SET_GPR_U32(ctx, 31, 0x41132Cu);
    ctx->pc = 0x411328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411324u;
    // 0x411328: 0x8c500038  lw          $s0, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4841E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4841E8u, 0x411324u, 0x41132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41132Cu;
label_41132c:
    // 0x41132c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x41132cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_411330:
    // 0x411330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x411330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411334:
    // 0x411334: 0x8c62ced0  lw          $v0, -0x3130($v1)
    ctx->pc = 0x411334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954704)));
label_411338:
    // 0x411338: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x411338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_41133c:
    // 0x41133c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x41133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_411340:
    // 0x411340: 0x6843001b  ldl         $v1, 0x1B($v0)
    ctx->pc = 0x411340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_411344:
    // 0x411344: 0x6c430014  ldr         $v1, 0x14($v0)
    ctx->pc = 0x411344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_411348:
    // 0x411348: 0x8c47001c  lw          $a3, 0x1C($v0)
    ctx->pc = 0x411348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_41134c:
    // 0x41134c: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x41134cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_411350:
    // 0x411350: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x411350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_411354:
    // 0x411354: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x411354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_411358:
    // 0x411358: 0xc120ed6  jal         func_483B58
label_41135c:
    if (ctx->pc == 0x41135Cu) {
        ctx->pc = 0x41135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411358u;
        // 0x41135c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411360u;
        goto label_411360;
    }
    ctx->pc = 0x411358u;
    SET_GPR_U32(ctx, 31, 0x411360u);
    ctx->pc = 0x41135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411358u;
    // 0x41135c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483B58u, 0x411358u, 0x411360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411360u;
label_411360:
    // 0x411360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x411360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411364:
    // 0x411364: 0xc11a830  jal         func_46A0C0
label_411368:
    if (ctx->pc == 0x411368u) {
        ctx->pc = 0x411368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411364u;
        // 0x411368: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41136Cu;
        goto label_41136c;
    }
    ctx->pc = 0x411364u;
    SET_GPR_U32(ctx, 31, 0x41136Cu);
    ctx->pc = 0x411368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411364u;
    // 0x411368: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0C0u, 0x411364u, 0x41136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41136Cu;
label_41136c:
    // 0x41136c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41136cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411370:
    // 0x411370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x411370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411374:
    // 0x411374: 0xc0663fc  jal         func_198FF0
label_411378:
    if (ctx->pc == 0x411378u) {
        ctx->pc = 0x411378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411374u;
        // 0x411378: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41137Cu;
        goto label_41137c;
    }
    ctx->pc = 0x411374u;
    SET_GPR_U32(ctx, 31, 0x41137Cu);
    ctx->pc = 0x411378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411374u;
    // 0x411378: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198FF0u, 0x411374u, 0x41137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41137Cu;
label_41137c:
    // 0x41137c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411380:
    // 0x411380: 0xc066408  jal         func_199020
label_411384:
    if (ctx->pc == 0x411384u) {
        ctx->pc = 0x411384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411380u;
        // 0x411384: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411388u;
        goto label_411388;
    }
    ctx->pc = 0x411380u;
    SET_GPR_U32(ctx, 31, 0x411388u);
    ctx->pc = 0x411384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411380u;
    // 0x411384: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199020u, 0x411380u, 0x411388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411388u;
label_411388:
    // 0x411388: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x411388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_41138c:
    // 0x41138c: 0x8c66b8b8  lw          $a2, -0x4748($v1)
    ctx->pc = 0x41138cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_411390:
    // 0x411390: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x411390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_411394:
    // 0x411394: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x411394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_411398:
    // 0x411398: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x411398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_41139c:
    // 0x41139c: 0x40f809  jalr        $v0
label_4113a0:
    if (ctx->pc == 0x4113A0u) {
        ctx->pc = 0x4113A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41139Cu;
        // 0x4113a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4113A4u;
        goto label_4113a4;
    }
    ctx->pc = 0x41139Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4113A4u);
        ctx->pc = 0x4113A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41139Cu;
        // 0x4113a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41139Cu, 0x4113A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4113A4u;
label_4113a4:
    // 0x4113a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4113a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4113a8:
    // 0x4113a8: 0xc066414  jal         func_199050
label_4113ac:
    if (ctx->pc == 0x4113ACu) {
        ctx->pc = 0x4113ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113A8u;
        // 0x4113ac: 0x244503e8  addiu       $a1, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4113B0u;
        goto label_4113b0;
    }
    ctx->pc = 0x4113A8u;
    SET_GPR_U32(ctx, 31, 0x4113B0u);
    ctx->pc = 0x4113ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4113A8u;
    // 0x4113ac: 0x244503e8  addiu       $a1, $v0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199050u, 0x4113A8u, 0x4113B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4113B0u;
label_4113b0:
    // 0x4113b0: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x4113b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_4113b4:
    // 0x4113b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4113b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4113b8:
    // 0x4113b8: 0xac4347e8  sw          $v1, 0x47E8($v0)
    ctx->pc = 0x4113b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18408), GPR_U32(ctx, 3));
label_4113bc:
    // 0x4113bc: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
label_4113c0:
    if (ctx->pc == 0x4113C0u) {
        ctx->pc = 0x4113C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113BCu;
        // 0x4113c0: 0xae360048  sw          $s6, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4113C4u;
        goto label_4113c4;
    }
    ctx->pc = 0x4113BCu;
    {
        const bool branch_taken_0x4113bc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4113C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113BCu;
        // 0x4113c0: 0xae360048  sw          $s6, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4113bc) {
            ctx->pc = 0x4113C8u;
            goto label_4113c8;
        }
    }
    ctx->pc = 0x4113C4u;
label_4113c4:
    // 0x4113c4: 0xae3e0048  sw          $fp, 0x48($s1)
    ctx->pc = 0x4113c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 30));
label_4113c8:
    // 0x4113c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4113c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4113cc:
    // 0x4113cc: 0xc1040bc  jal         func_4102F0
label_4113d0:
    if (ctx->pc == 0x4113D0u) {
        ctx->pc = 0x4113D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113CCu;
        // 0x4113d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4113D4u;
        goto label_4113d4;
    }
    ctx->pc = 0x4113CCu;
    SET_GPR_U32(ctx, 31, 0x4113D4u);
    ctx->pc = 0x4113D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4113CCu;
    // 0x4113d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4102F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4102F0u, 0x4113CCu, 0x4113D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4113D4u;
label_4113d4:
    // 0x4113d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4113d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4113d8:
    // 0x4113d8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x4113d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4113dc:
    // 0x4113dc: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x4113dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
label_4113e0:
    // 0x4113e0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x4113e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4113e4:
    // 0x4113e4: 0x24e58190  addiu       $a1, $a3, -0x7E70
    ctx->pc = 0x4113e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934928));
label_4113e8:
    // 0x4113e8: 0xc11afd8  jal         func_46BF60
label_4113ec:
    if (ctx->pc == 0x4113ECu) {
        ctx->pc = 0x4113ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4113E8u;
        // 0x4113ec: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4113F0u;
        goto label_4113f0;
    }
    ctx->pc = 0x4113E8u;
    SET_GPR_U32(ctx, 31, 0x4113F0u);
    ctx->pc = 0x4113ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4113E8u;
    // 0x4113ec: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BF60u, 0x4113E8u, 0x4113F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4113F0u;
label_4113f0:
    // 0x4113f0: 0x8ee627e4  lw          $a2, 0x27E4($s7)
    ctx->pc = 0x4113f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_4113f4:
    // 0x4113f4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4113f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4113f8:
    // 0x4113f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4113f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4113fc:
    // 0x4113fc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x4113fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_411400:
    // 0x411400: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x411400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_411404:
    // 0x411404: 0x60f809  jalr        $v1
label_411408:
    if (ctx->pc == 0x411408u) {
        ctx->pc = 0x411408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411404u;
        // 0x411408: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41140Cu;
        goto label_41140c;
    }
    ctx->pc = 0x411404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41140Cu);
        ctx->pc = 0x411408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411404u;
        // 0x411408: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411404u, 0x41140Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41140Cu;
label_41140c:
    // 0x41140c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41140cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411410:
    // 0x411410: 0xc109b1e  jal         func_426C78
label_411414:
    if (ctx->pc == 0x411414u) {
        ctx->pc = 0x411414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411410u;
        // 0x411414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411418u;
        goto label_411418;
    }
    ctx->pc = 0x411410u;
    SET_GPR_U32(ctx, 31, 0x411418u);
    ctx->pc = 0x411414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411410u;
    // 0x411414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426C78u, 0x411410u, 0x411418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411418u;
label_411418:
    // 0x411418: 0x8ee627e4  lw          $a2, 0x27E4($s7)
    ctx->pc = 0x411418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_41141c:
    // 0x41141c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x41141cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_411420:
    // 0x411420: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x411420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_411424:
    // 0x411424: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x411424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_411428:
    // 0x411428: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x411428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_41142c:
    // 0x41142c: 0x60f809  jalr        $v1
label_411430:
    if (ctx->pc == 0x411430u) {
        ctx->pc = 0x411430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41142Cu;
        // 0x411430: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411434u;
        goto label_411434;
    }
    ctx->pc = 0x41142Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x411434u);
        ctx->pc = 0x411430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41142Cu;
        // 0x411430: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41142Cu, 0x411434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411434u;
label_411434:
    // 0x411434: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x411434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_411438:
    // 0x411438: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x411438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41143c:
    // 0x41143c: 0x5440ffa8  bnel        $v0, $zero, . + 4 + (-0x58 << 2)
label_411440:
    if (ctx->pc == 0x411440u) {
        ctx->pc = 0x411440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41143Cu;
        // 0x411440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411444u;
        goto label_411444;
    }
    ctx->pc = 0x41143Cu;
    {
        const bool branch_taken_0x41143c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41143c) {
            ctx->pc = 0x411440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41143Cu;
            // 0x411440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4112E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4112e0;
        }
    }
    ctx->pc = 0x411444u;
label_411444:
    // 0x411444: 0x8fa9004c  lw          $t1, 0x4C($sp)
    ctx->pc = 0x411444u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_411448:
    // 0x411448: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x411448u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_41144c:
    // 0x41144c: 0x2410001c  addiu       $s0, $zero, 0x1C
    ctx->pc = 0x41144cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_411450:
    // 0x411450: 0x8d0627e4  lw          $a2, 0x27E4($t0)
    ctx->pc = 0x411450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 10212)));
label_411454:
    // 0x411454: 0x1308018  mult        $s0, $t1, $s0
    ctx->pc = 0x411454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_411458:
    // 0x411458: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x411458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_41145c:
    // 0x41145c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41145cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_411460:
    // 0x411460: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x411460u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_411464:
    // 0x411464: 0x708821  addu        $s1, $v1, $s0
    ctx->pc = 0x411464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_411468:
    // 0x411468: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x411468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41146c:
    // 0x41146c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x41146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_411470:
    // 0x411470: 0x60f809  jalr        $v1
label_411474:
    if (ctx->pc == 0x411474u) {
        ctx->pc = 0x411474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411470u;
        // 0x411474: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411478u;
        goto label_411478;
    }
    ctx->pc = 0x411470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x411478u);
        ctx->pc = 0x411474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411470u;
        // 0x411474: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411470u, 0x411478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411478u;
label_411478:
    // 0x411478: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x411478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41147c:
    // 0x41147c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x41147cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_411480:
    // 0x411480: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x411480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_411484:
    // 0x411484: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x411484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_411488:
    // 0x411488: 0x40f809  jalr        $v0
label_41148c:
    if (ctx->pc == 0x41148Cu) {
        ctx->pc = 0x41148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411488u;
        // 0x41148c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411490u;
        goto label_411490;
    }
    ctx->pc = 0x411488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411490u);
        ctx->pc = 0x41148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411488u;
        // 0x41148c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411488u, 0x411490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411490u;
label_411490:
    // 0x411490: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x411490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_411494:
    // 0x411494: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x411494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_411498:
    // 0x411498: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x411498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_41149c:
    // 0x41149c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x41149cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4114a0:
    // 0x4114a0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x4114a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4114a4:
    // 0x4114a4: 0xae021214  sw          $v0, 0x1214($s0)
    ctx->pc = 0x4114a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4628), GPR_U32(ctx, 2));
label_4114a8:
    // 0x4114a8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x4114a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4114ac:
    // 0x4114ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4114acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4114b0:
    // 0x4114b0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x4114b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4114b4:
    // 0x4114b4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x4114b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4114b8:
    // 0x4114b8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x4114b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4114bc:
    // 0x4114bc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x4114bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4114c0:
    // 0x4114c0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4114c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4114c4:
    // 0x4114c4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x4114c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4114c8:
    // 0x4114c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4114c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4114cc:
    // 0x4114cc: 0x3e00008  jr          $ra
label_4114d0:
    if (ctx->pc == 0x4114D0u) {
        ctx->pc = 0x4114D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4114CCu;
        // 0x4114d0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4114D4u;
        goto label_4114d4;
    }
    ctx->pc = 0x4114CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4114D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4114CCu;
        // 0x4114d0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4114CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4114D4u;
label_4114d4:
    // 0x4114d4: 0x0  nop
    ctx->pc = 0x4114d4u;
    // NOP
    ctx->pc = 0x4114d8u;
}
