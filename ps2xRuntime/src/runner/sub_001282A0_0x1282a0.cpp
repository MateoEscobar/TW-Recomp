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

// Function: sub_001282A0
// Address: 0x1282a0 - 0x128678
void sub_001282A0_0x1282a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001282A0_0x1282a0");
#endif

    switch (ctx->pc) {
        case 0x1282a0u: goto label_1282a0;
        case 0x1282a4u: goto label_1282a4;
        case 0x1282a8u: goto label_1282a8;
        case 0x1282acu: goto label_1282ac;
        case 0x1282b0u: goto label_1282b0;
        case 0x1282b4u: goto label_1282b4;
        case 0x1282b8u: goto label_1282b8;
        case 0x1282bcu: goto label_1282bc;
        case 0x1282c0u: goto label_1282c0;
        case 0x1282c4u: goto label_1282c4;
        case 0x1282c8u: goto label_1282c8;
        case 0x1282ccu: goto label_1282cc;
        case 0x1282d0u: goto label_1282d0;
        case 0x1282d4u: goto label_1282d4;
        case 0x1282d8u: goto label_1282d8;
        case 0x1282dcu: goto label_1282dc;
        case 0x1282e0u: goto label_1282e0;
        case 0x1282e4u: goto label_1282e4;
        case 0x1282e8u: goto label_1282e8;
        case 0x1282ecu: goto label_1282ec;
        case 0x1282f0u: goto label_1282f0;
        case 0x1282f4u: goto label_1282f4;
        case 0x1282f8u: goto label_1282f8;
        case 0x1282fcu: goto label_1282fc;
        case 0x128300u: goto label_128300;
        case 0x128304u: goto label_128304;
        case 0x128308u: goto label_128308;
        case 0x12830cu: goto label_12830c;
        case 0x128310u: goto label_128310;
        case 0x128314u: goto label_128314;
        case 0x128318u: goto label_128318;
        case 0x12831cu: goto label_12831c;
        case 0x128320u: goto label_128320;
        case 0x128324u: goto label_128324;
        case 0x128328u: goto label_128328;
        case 0x12832cu: goto label_12832c;
        case 0x128330u: goto label_128330;
        case 0x128334u: goto label_128334;
        case 0x128338u: goto label_128338;
        case 0x12833cu: goto label_12833c;
        case 0x128340u: goto label_128340;
        case 0x128344u: goto label_128344;
        case 0x128348u: goto label_128348;
        case 0x12834cu: goto label_12834c;
        case 0x128350u: goto label_128350;
        case 0x128354u: goto label_128354;
        case 0x128358u: goto label_128358;
        case 0x12835cu: goto label_12835c;
        case 0x128360u: goto label_128360;
        case 0x128364u: goto label_128364;
        case 0x128368u: goto label_128368;
        case 0x12836cu: goto label_12836c;
        case 0x128370u: goto label_128370;
        case 0x128374u: goto label_128374;
        case 0x128378u: goto label_128378;
        case 0x12837cu: goto label_12837c;
        case 0x128380u: goto label_128380;
        case 0x128384u: goto label_128384;
        case 0x128388u: goto label_128388;
        case 0x12838cu: goto label_12838c;
        case 0x128390u: goto label_128390;
        case 0x128394u: goto label_128394;
        case 0x128398u: goto label_128398;
        case 0x12839cu: goto label_12839c;
        case 0x1283a0u: goto label_1283a0;
        case 0x1283a4u: goto label_1283a4;
        case 0x1283a8u: goto label_1283a8;
        case 0x1283acu: goto label_1283ac;
        case 0x1283b0u: goto label_1283b0;
        case 0x1283b4u: goto label_1283b4;
        case 0x1283b8u: goto label_1283b8;
        case 0x1283bcu: goto label_1283bc;
        case 0x1283c0u: goto label_1283c0;
        case 0x1283c4u: goto label_1283c4;
        case 0x1283c8u: goto label_1283c8;
        case 0x1283ccu: goto label_1283cc;
        case 0x1283d0u: goto label_1283d0;
        case 0x1283d4u: goto label_1283d4;
        case 0x1283d8u: goto label_1283d8;
        case 0x1283dcu: goto label_1283dc;
        case 0x1283e0u: goto label_1283e0;
        case 0x1283e4u: goto label_1283e4;
        case 0x1283e8u: goto label_1283e8;
        case 0x1283ecu: goto label_1283ec;
        case 0x1283f0u: goto label_1283f0;
        case 0x1283f4u: goto label_1283f4;
        case 0x1283f8u: goto label_1283f8;
        case 0x1283fcu: goto label_1283fc;
        case 0x128400u: goto label_128400;
        case 0x128404u: goto label_128404;
        case 0x128408u: goto label_128408;
        case 0x12840cu: goto label_12840c;
        case 0x128410u: goto label_128410;
        case 0x128414u: goto label_128414;
        case 0x128418u: goto label_128418;
        case 0x12841cu: goto label_12841c;
        case 0x128420u: goto label_128420;
        case 0x128424u: goto label_128424;
        case 0x128428u: goto label_128428;
        case 0x12842cu: goto label_12842c;
        case 0x128430u: goto label_128430;
        case 0x128434u: goto label_128434;
        case 0x128438u: goto label_128438;
        case 0x12843cu: goto label_12843c;
        case 0x128440u: goto label_128440;
        case 0x128444u: goto label_128444;
        case 0x128448u: goto label_128448;
        case 0x12844cu: goto label_12844c;
        case 0x128450u: goto label_128450;
        case 0x128454u: goto label_128454;
        case 0x128458u: goto label_128458;
        case 0x12845cu: goto label_12845c;
        case 0x128460u: goto label_128460;
        case 0x128464u: goto label_128464;
        case 0x128468u: goto label_128468;
        case 0x12846cu: goto label_12846c;
        case 0x128470u: goto label_128470;
        case 0x128474u: goto label_128474;
        case 0x128478u: goto label_128478;
        case 0x12847cu: goto label_12847c;
        case 0x128480u: goto label_128480;
        case 0x128484u: goto label_128484;
        case 0x128488u: goto label_128488;
        case 0x12848cu: goto label_12848c;
        case 0x128490u: goto label_128490;
        case 0x128494u: goto label_128494;
        case 0x128498u: goto label_128498;
        case 0x12849cu: goto label_12849c;
        case 0x1284a0u: goto label_1284a0;
        case 0x1284a4u: goto label_1284a4;
        case 0x1284a8u: goto label_1284a8;
        case 0x1284acu: goto label_1284ac;
        case 0x1284b0u: goto label_1284b0;
        case 0x1284b4u: goto label_1284b4;
        case 0x1284b8u: goto label_1284b8;
        case 0x1284bcu: goto label_1284bc;
        case 0x1284c0u: goto label_1284c0;
        case 0x1284c4u: goto label_1284c4;
        case 0x1284c8u: goto label_1284c8;
        case 0x1284ccu: goto label_1284cc;
        case 0x1284d0u: goto label_1284d0;
        case 0x1284d4u: goto label_1284d4;
        case 0x1284d8u: goto label_1284d8;
        case 0x1284dcu: goto label_1284dc;
        case 0x1284e0u: goto label_1284e0;
        case 0x1284e4u: goto label_1284e4;
        case 0x1284e8u: goto label_1284e8;
        case 0x1284ecu: goto label_1284ec;
        case 0x1284f0u: goto label_1284f0;
        case 0x1284f4u: goto label_1284f4;
        case 0x1284f8u: goto label_1284f8;
        case 0x1284fcu: goto label_1284fc;
        case 0x128500u: goto label_128500;
        case 0x128504u: goto label_128504;
        case 0x128508u: goto label_128508;
        case 0x12850cu: goto label_12850c;
        case 0x128510u: goto label_128510;
        case 0x128514u: goto label_128514;
        case 0x128518u: goto label_128518;
        case 0x12851cu: goto label_12851c;
        case 0x128520u: goto label_128520;
        case 0x128524u: goto label_128524;
        case 0x128528u: goto label_128528;
        case 0x12852cu: goto label_12852c;
        case 0x128530u: goto label_128530;
        case 0x128534u: goto label_128534;
        case 0x128538u: goto label_128538;
        case 0x12853cu: goto label_12853c;
        case 0x128540u: goto label_128540;
        case 0x128544u: goto label_128544;
        case 0x128548u: goto label_128548;
        case 0x12854cu: goto label_12854c;
        case 0x128550u: goto label_128550;
        case 0x128554u: goto label_128554;
        case 0x128558u: goto label_128558;
        case 0x12855cu: goto label_12855c;
        case 0x128560u: goto label_128560;
        case 0x128564u: goto label_128564;
        case 0x128568u: goto label_128568;
        case 0x12856cu: goto label_12856c;
        case 0x128570u: goto label_128570;
        case 0x128574u: goto label_128574;
        case 0x128578u: goto label_128578;
        case 0x12857cu: goto label_12857c;
        case 0x128580u: goto label_128580;
        case 0x128584u: goto label_128584;
        case 0x128588u: goto label_128588;
        case 0x12858cu: goto label_12858c;
        case 0x128590u: goto label_128590;
        case 0x128594u: goto label_128594;
        case 0x128598u: goto label_128598;
        case 0x12859cu: goto label_12859c;
        case 0x1285a0u: goto label_1285a0;
        case 0x1285a4u: goto label_1285a4;
        case 0x1285a8u: goto label_1285a8;
        case 0x1285acu: goto label_1285ac;
        case 0x1285b0u: goto label_1285b0;
        case 0x1285b4u: goto label_1285b4;
        case 0x1285b8u: goto label_1285b8;
        case 0x1285bcu: goto label_1285bc;
        case 0x1285c0u: goto label_1285c0;
        case 0x1285c4u: goto label_1285c4;
        case 0x1285c8u: goto label_1285c8;
        case 0x1285ccu: goto label_1285cc;
        case 0x1285d0u: goto label_1285d0;
        case 0x1285d4u: goto label_1285d4;
        case 0x1285d8u: goto label_1285d8;
        case 0x1285dcu: goto label_1285dc;
        case 0x1285e0u: goto label_1285e0;
        case 0x1285e4u: goto label_1285e4;
        case 0x1285e8u: goto label_1285e8;
        case 0x1285ecu: goto label_1285ec;
        case 0x1285f0u: goto label_1285f0;
        case 0x1285f4u: goto label_1285f4;
        case 0x1285f8u: goto label_1285f8;
        case 0x1285fcu: goto label_1285fc;
        case 0x128600u: goto label_128600;
        case 0x128604u: goto label_128604;
        case 0x128608u: goto label_128608;
        case 0x12860cu: goto label_12860c;
        case 0x128610u: goto label_128610;
        case 0x128614u: goto label_128614;
        case 0x128618u: goto label_128618;
        case 0x12861cu: goto label_12861c;
        case 0x128620u: goto label_128620;
        case 0x128624u: goto label_128624;
        case 0x128628u: goto label_128628;
        case 0x12862cu: goto label_12862c;
        case 0x128630u: goto label_128630;
        case 0x128634u: goto label_128634;
        case 0x128638u: goto label_128638;
        case 0x12863cu: goto label_12863c;
        case 0x128640u: goto label_128640;
        case 0x128644u: goto label_128644;
        case 0x128648u: goto label_128648;
        case 0x12864cu: goto label_12864c;
        case 0x128650u: goto label_128650;
        case 0x128654u: goto label_128654;
        case 0x128658u: goto label_128658;
        case 0x12865cu: goto label_12865c;
        case 0x128660u: goto label_128660;
        case 0x128664u: goto label_128664;
        case 0x128668u: goto label_128668;
        case 0x12866cu: goto label_12866c;
        case 0x128670u: goto label_128670;
        case 0x128674u: goto label_128674;
        default: break;
    }

    ctx->pc = 0x1282a0u;

label_1282a0:
    // 0x1282a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1282a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1282a4:
    // 0x1282a4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1282a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1282a8:
    // 0x1282a8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1282a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1282ac:
    // 0x1282ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1282acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1282b0:
    // 0x1282b0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1282b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1282b4:
    // 0x1282b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1282b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1282b8:
    // 0x1282b8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1282b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1282bc:
    // 0x1282bc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1282bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1282c0:
    // 0x1282c0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1282c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1282c4:
    // 0x1282c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1282c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1282c8:
    // 0x1282c8: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1282c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1282cc:
    // 0x1282cc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1282ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1282d0:
    // 0x1282d0: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1282d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1282d4:
    // 0x1282d4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1282d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1282d8:
    // 0x1282d8: 0x26360314  addiu       $s6, $s1, 0x314
    ctx->pc = 0x1282d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
label_1282dc:
    // 0x1282dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1282dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1282e0:
    // 0x1282e0: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1282e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1282e4:
    // 0x1282e4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1282e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1282e8:
    // 0x1282e8: 0x3c17005e  lui         $s7, 0x5E
    ctx->pc = 0x1282e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)94 << 16));
label_1282ec:
    // 0x1282ec: 0x963e0444  lhu         $fp, 0x444($s1)
    ctx->pc = 0x1282ecu;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_1282f0:
    // 0x1282f0: 0xa6200444  sh          $zero, 0x444($s1)
    ctx->pc = 0x1282f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1092), (uint16_t)GPR_U32(ctx, 0));
label_1282f4:
    // 0x1282f4: 0x26e491a8  addiu       $a0, $s7, -0x6E58
    ctx->pc = 0x1282f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939048));
label_1282f8:
    // 0x1282f8: 0xc136b7c  jal         func_4DADF0
label_1282fc:
    if (ctx->pc == 0x1282FCu) {
        ctx->pc = 0x1282FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282F8u;
        // 0x1282fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128300u;
        goto label_128300;
    }
    ctx->pc = 0x1282F8u;
    SET_GPR_U32(ctx, 31, 0x128300u);
    ctx->pc = 0x1282FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282F8u;
    // 0x1282fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x1282F8u, 0x128300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128300u;
label_128300:
    // 0x128300: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_128304:
    // 0x128304: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_128308:
    // 0x128308: 0xc0e409a  jal         func_390268
label_12830c:
    if (ctx->pc == 0x12830Cu) {
        ctx->pc = 0x12830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128308u;
        // 0x12830c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128310u;
        goto label_128310;
    }
    ctx->pc = 0x128308u;
    SET_GPR_U32(ctx, 31, 0x128310u);
    ctx->pc = 0x12830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128308u;
    // 0x12830c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x128308u, 0x128310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128310u;
label_128310:
    // 0x128310: 0x96230444  lhu         $v1, 0x444($s1)
    ctx->pc = 0x128310u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_128314:
    // 0x128314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x128314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_128318:
    // 0x128318: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x128318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_12831c:
    // 0x12831c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12831cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_128320:
    // 0x128320: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x128320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_128324:
    // 0x128324: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_128328:
    // 0x128328: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x128328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_12832c:
    // 0x12832c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12832cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_128330:
    // 0x128330: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_128334:
    if (ctx->pc == 0x128334u) {
        ctx->pc = 0x128334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128330u;
        // 0x128334: 0x8ea2b1c8  lw          $v0, -0x4E38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128338u;
        goto label_128338;
    }
    ctx->pc = 0x128330u;
    {
        const bool branch_taken_0x128330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x128334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128330u;
        // 0x128334: 0x8ea2b1c8  lw          $v0, -0x4E38($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294947272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128330) {
            ctx->pc = 0x128370u;
            goto label_128370;
        }
    }
    ctx->pc = 0x128338u;
label_128338:
    // 0x128338: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12833c:
    if (ctx->pc == 0x12833Cu) {
        ctx->pc = 0x12833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128338u;
        // 0x12833c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128340u;
        goto label_128340;
    }
    ctx->pc = 0x128338u;
    {
        const bool branch_taken_0x128338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128338u;
        // 0x12833c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128338) {
            ctx->pc = 0x12834Cu;
            goto label_12834c;
        }
    }
    ctx->pc = 0x128340u;
label_128340:
    // 0x128340: 0x8e82b1c4  lw          $v0, -0x4E3C($s4)
    ctx->pc = 0x128340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947268)));
label_128344:
    // 0x128344: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x128344u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_128348:
    // 0x128348: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x128348u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_12834c:
    // 0x12834c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_128350:
    if (ctx->pc == 0x128350u) {
        ctx->pc = 0x128350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12834Cu;
        // 0x128350: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128354u;
        goto label_128354;
    }
    ctx->pc = 0x12834Cu;
    {
        const bool branch_taken_0x12834c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12834c) {
            ctx->pc = 0x128350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12834Cu;
            // 0x128350: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128368u;
            goto label_128368;
        }
    }
    ctx->pc = 0x128354u;
label_128354:
    // 0x128354: 0xc048d40  jal         func_123500
label_128358:
    if (ctx->pc == 0x128358u) {
        ctx->pc = 0x12835Cu;
        goto label_12835c;
    }
    ctx->pc = 0x128354u;
    SET_GPR_U32(ctx, 31, 0x12835Cu);
    ctx->pc = 0x123500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123500u, 0x128354u, 0x12835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12835Cu;
label_12835c:
    // 0x12835c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_128360:
    if (ctx->pc == 0x128360u) {
        ctx->pc = 0x128360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12835Cu;
        // 0x128360: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128364u;
        goto label_128364;
    }
    ctx->pc = 0x12835Cu;
    {
        const bool branch_taken_0x12835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12835c) {
            ctx->pc = 0x128360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12835Cu;
            // 0x128360: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128374u;
            goto label_128374;
        }
    }
    ctx->pc = 0x128364u;
label_128364:
    // 0x128364: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x128364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_128368:
    // 0x128368: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x128368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_12836c:
    // 0x12836c: 0xa6220444  sh          $v0, 0x444($s1)
    ctx->pc = 0x12836cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1092), (uint16_t)GPR_U32(ctx, 2));
label_128370:
    // 0x128370: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x128370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_128374:
    // 0x128374: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x128374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_128378:
    // 0x128378: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_12837c:
    if (ctx->pc == 0x12837Cu) {
        ctx->pc = 0x12837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128378u;
        // 0x12837c: 0x26e491a8  addiu       $a0, $s7, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128380u;
        goto label_128380;
    }
    ctx->pc = 0x128378u;
    {
        const bool branch_taken_0x128378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128378u;
        // 0x12837c: 0x26e491a8  addiu       $a0, $s7, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128378) {
            ctx->pc = 0x1282F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1282f8;
        }
    }
    ctx->pc = 0x128380u;
label_128380:
    // 0x128380: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x128380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_128384:
    // 0x128384: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_128388:
    if (ctx->pc == 0x128388u) {
        ctx->pc = 0x128388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128384u;
        // 0x128388: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12838Cu;
        goto label_12838c;
    }
    ctx->pc = 0x128384u;
    {
        const bool branch_taken_0x128384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128384u;
        // 0x128388: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128384) {
            ctx->pc = 0x1284E0u;
            goto label_1284e0;
        }
    }
    ctx->pc = 0x12838Cu;
label_12838c:
    // 0x12838c: 0x8c43b1c0  lw          $v1, -0x4E40($v0)
    ctx->pc = 0x12838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947264)));
label_128390:
    // 0x128390: 0x50600049  beql        $v1, $zero, . + 4 + (0x49 << 2)
label_128394:
    if (ctx->pc == 0x128394u) {
        ctx->pc = 0x128394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128390u;
        // 0x128394: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128398u;
        goto label_128398;
    }
    ctx->pc = 0x128390u;
    {
        const bool branch_taken_0x128390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128390) {
            ctx->pc = 0x128394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128390u;
            // 0x128394: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1284B8u;
            goto label_1284b8;
        }
    }
    ctx->pc = 0x128398u;
label_128398:
    // 0x128398: 0xc047e6c  jal         func_11F9B0
label_12839c:
    if (ctx->pc == 0x12839Cu) {
        ctx->pc = 0x12839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128398u;
        // 0x12839c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1283A0u;
        goto label_1283a0;
    }
    ctx->pc = 0x128398u;
    SET_GPR_U32(ctx, 31, 0x1283A0u);
    ctx->pc = 0x12839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128398u;
    // 0x12839c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x128398u, 0x1283A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1283A0u;
label_1283a0:
    // 0x1283a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1283a4:
    if (ctx->pc == 0x1283A4u) {
        ctx->pc = 0x1283A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283A0u;
        // 0x1283a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1283A8u;
        goto label_1283a8;
    }
    ctx->pc = 0x1283A0u;
    {
        const bool branch_taken_0x1283a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283A0u;
        // 0x1283a4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283a0) {
            ctx->pc = 0x1283D0u;
            goto label_1283d0;
        }
    }
    ctx->pc = 0x1283A8u;
label_1283a8:
    // 0x1283a8: 0xc047e6c  jal         func_11F9B0
label_1283ac:
    if (ctx->pc == 0x1283ACu) {
        ctx->pc = 0x1283ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283A8u;
        // 0x1283ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1283B0u;
        goto label_1283b0;
    }
    ctx->pc = 0x1283A8u;
    SET_GPR_U32(ctx, 31, 0x1283B0u);
    ctx->pc = 0x1283ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1283A8u;
    // 0x1283ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1283A8u, 0x1283B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1283B0u;
label_1283b0:
    // 0x1283b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1283b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1283b4:
    // 0x1283b4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1283b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1283b8:
    // 0x1283b8: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x1283b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_1283bc:
    // 0x1283bc: 0xa0f809  jalr        $a1
label_1283c0:
    if (ctx->pc == 0x1283C0u) {
        ctx->pc = 0x1283C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283BCu;
        // 0x1283c0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1283C4u;
        goto label_1283c4;
    }
    ctx->pc = 0x1283BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1283C4u);
        ctx->pc = 0x1283C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283BCu;
        // 0x1283c0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1283BCu, 0x1283C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1283C4u;
label_1283c4:
    // 0x1283c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1283c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1283c8:
    // 0x1283c8: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_1283cc:
    if (ctx->pc == 0x1283CCu) {
        ctx->pc = 0x1283CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283C8u;
        // 0x1283cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1283D0u;
        goto label_1283d0;
    }
    ctx->pc = 0x1283C8u;
    {
        const bool branch_taken_0x1283c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1283CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283C8u;
        // 0x1283cc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283c8) {
            ctx->pc = 0x128414u;
            goto label_128414;
        }
    }
    ctx->pc = 0x1283D0u;
label_1283d0:
    // 0x1283d0: 0x8c44b19c  lw          $a0, -0x4E64($v0)
    ctx->pc = 0x1283d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947228)));
label_1283d4:
    // 0x1283d4: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x1283d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1283d8:
    // 0x1283d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1283dc:
    if (ctx->pc == 0x1283DCu) {
        ctx->pc = 0x1283DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283D8u;
        // 0x1283dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1283E0u;
        goto label_1283e0;
    }
    ctx->pc = 0x1283D8u;
    {
        const bool branch_taken_0x1283d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1283DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283D8u;
        // 0x1283dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283d8) {
            ctx->pc = 0x1283F0u;
            goto label_1283f0;
        }
    }
    ctx->pc = 0x1283E0u;
label_1283e0:
    // 0x1283e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1283e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1283e4:
    // 0x1283e4: 0x8c43b198  lw          $v1, -0x4E68($v0)
    ctx->pc = 0x1283e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947224)));
label_1283e8:
    // 0x1283e8: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
label_1283ec:
    if (ctx->pc == 0x1283ECu) {
        ctx->pc = 0x1283ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283E8u;
        // 0x1283ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1283F0u;
        goto label_1283f0;
    }
    ctx->pc = 0x1283E8u;
    {
        const bool branch_taken_0x1283e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1283ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283E8u;
        // 0x1283ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283e8) {
            ctx->pc = 0x128414u;
            goto label_128414;
        }
    }
    ctx->pc = 0x1283F0u;
label_1283f0:
    // 0x1283f0: 0x8c43b1d8  lw          $v1, -0x4E28($v0)
    ctx->pc = 0x1283f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947288)));
label_1283f4:
    // 0x1283f4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1283f8:
    if (ctx->pc == 0x1283F8u) {
        ctx->pc = 0x1283F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283F4u;
        // 0x1283f8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1283FCu;
        goto label_1283fc;
    }
    ctx->pc = 0x1283F4u;
    {
        const bool branch_taken_0x1283f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1283F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1283F4u;
        // 0x1283f8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1283f4) {
            ctx->pc = 0x128414u;
            goto label_128414;
        }
    }
    ctx->pc = 0x1283FCu;
label_1283fc:
    // 0x1283fc: 0x8c62b1e8  lw          $v0, -0x4E18($v1)
    ctx->pc = 0x1283fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947304)));
label_128400:
    // 0x128400: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_128404:
    if (ctx->pc == 0x128404u) {
        ctx->pc = 0x128404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128400u;
        // 0x128404: 0x2464b1e8  addiu       $a0, $v1, -0x4E18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128408u;
        goto label_128408;
    }
    ctx->pc = 0x128400u;
    {
        const bool branch_taken_0x128400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128400u;
        // 0x128404: 0x2464b1e8  addiu       $a0, $v1, -0x4E18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128400) {
            ctx->pc = 0x128414u;
            goto label_128414;
        }
    }
    ctx->pc = 0x128408u;
label_128408:
    // 0x128408: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x128408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_12840c:
    // 0x12840c: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_128410:
    if (ctx->pc == 0x128410u) {
        ctx->pc = 0x128410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12840Cu;
        // 0x128410: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128414u;
        goto label_128414;
    }
    ctx->pc = 0x12840Cu;
    {
        const bool branch_taken_0x12840c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12840c) {
            ctx->pc = 0x128410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12840Cu;
            // 0x128410: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1284B8u;
            goto label_1284b8;
        }
    }
    ctx->pc = 0x128414u;
label_128414:
    // 0x128414: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x128414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_128418:
    // 0x128418: 0x96300444  lhu         $s0, 0x444($s1)
    ctx->pc = 0x128418u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_12841c:
    // 0x12841c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x12841cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_128420:
    // 0x128420: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x128420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_128424:
    // 0x128424: 0x40f809  jalr        $v0
label_128428:
    if (ctx->pc == 0x128428u) {
        ctx->pc = 0x128428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128424u;
        // 0x128428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12842Cu;
        goto label_12842c;
    }
    ctx->pc = 0x128424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12842Cu);
        ctx->pc = 0x128428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128424u;
        // 0x128428: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128424u, 0x12842Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12842Cu;
label_12842c:
    // 0x12842c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x12842cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_128430:
    // 0x128430: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_128434:
    if (ctx->pc == 0x128434u) {
        ctx->pc = 0x128434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128430u;
        // 0x128434: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128438u;
        goto label_128438;
    }
    ctx->pc = 0x128430u;
    {
        const bool branch_taken_0x128430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128430u;
        // 0x128434: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128430) {
            ctx->pc = 0x128468u;
            goto label_128468;
        }
    }
    ctx->pc = 0x128438u;
label_128438:
    // 0x128438: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x128438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12843c:
    // 0x12843c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x12843cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_128440:
    // 0x128440: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x128440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_128444:
    // 0x128444: 0x40f809  jalr        $v0
label_128448:
    if (ctx->pc == 0x128448u) {
        ctx->pc = 0x128448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128444u;
        // 0x128448: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12844Cu;
        goto label_12844c;
    }
    ctx->pc = 0x128444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12844Cu);
        ctx->pc = 0x128448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128444u;
        // 0x128448: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128444u, 0x12844Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12844Cu;
label_12844c:
    // 0x12844c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12844cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_128450:
    // 0x128450: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128454:
    // 0x128454: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x128454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_128458:
    // 0x128458: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12845c:
    // 0x12845c: 0xa6240444  sh          $a0, 0x444($s1)
    ctx->pc = 0x12845cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1092), (uint16_t)GPR_U32(ctx, 4));
label_128460:
    // 0x128460: 0x10000014  b           . + 4 + (0x14 << 2)
label_128464:
    if (ctx->pc == 0x128464u) {
        ctx->pc = 0x128464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128460u;
        // 0x128464: 0xae230314  sw          $v1, 0x314($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128468u;
        goto label_128468;
    }
    ctx->pc = 0x128460u;
    {
        const bool branch_taken_0x128460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128460u;
        // 0x128464: 0xae230314  sw          $v1, 0x314($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128460) {
            ctx->pc = 0x1284B4u;
            goto label_1284b4;
        }
    }
    ctx->pc = 0x128468u;
label_128468:
    // 0x128468: 0x8c43b1e8  lw          $v1, -0x4E18($v0)
    ctx->pc = 0x128468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947304)));
label_12846c:
    // 0x12846c: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
label_128470:
    if (ctx->pc == 0x128470u) {
        ctx->pc = 0x128470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12846Cu;
        // 0x128470: 0xae200314  sw          $zero, 0x314($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128474u;
        goto label_128474;
    }
    ctx->pc = 0x12846Cu;
    {
        const bool branch_taken_0x12846c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12846c) {
            ctx->pc = 0x128470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12846Cu;
            // 0x128470: 0xae200314  sw          $zero, 0x314($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1284B0u;
            goto label_1284b0;
        }
    }
    ctx->pc = 0x128474u;
label_128474:
    // 0x128474: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x128474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_128478:
    // 0x128478: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x128478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_12847c:
    // 0x12847c: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x12847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_128480:
    // 0x128480: 0x40f809  jalr        $v0
label_128484:
    if (ctx->pc == 0x128484u) {
        ctx->pc = 0x128484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128480u;
        // 0x128484: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128488u;
        goto label_128488;
    }
    ctx->pc = 0x128480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x128488u);
        ctx->pc = 0x128484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128480u;
        // 0x128484: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128480u, 0x128488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x128488u;
label_128488:
    // 0x128488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x128488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12848c:
    // 0x12848c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128490:
    // 0x128490: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_128494:
    if (ctx->pc == 0x128494u) {
        ctx->pc = 0x128494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128490u;
        // 0x128494: 0xae200314  sw          $zero, 0x314($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128498u;
        goto label_128498;
    }
    ctx->pc = 0x128490u;
    {
        const bool branch_taken_0x128490 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x128490) {
            ctx->pc = 0x128494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128490u;
            // 0x128494: 0xae200314  sw          $zero, 0x314($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1284B0u;
            goto label_1284b0;
        }
    }
    ctx->pc = 0x128498u;
label_128498:
    // 0x128498: 0xc047e6c  jal         func_11F9B0
label_12849c:
    if (ctx->pc == 0x12849Cu) {
        ctx->pc = 0x12849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128498u;
        // 0x12849c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1284A0u;
        goto label_1284a0;
    }
    ctx->pc = 0x128498u;
    SET_GPR_U32(ctx, 31, 0x1284A0u);
    ctx->pc = 0x12849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128498u;
    // 0x12849c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x128498u, 0x1284A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284A0u;
label_1284a0:
    // 0x1284a0: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
label_1284a4:
    if (ctx->pc == 0x1284A4u) {
        ctx->pc = 0x1284A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284A0u;
        // 0x1284a4: 0xae200314  sw          $zero, 0x314($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1284A8u;
        goto label_1284a8;
    }
    ctx->pc = 0x1284A0u;
    {
        const bool branch_taken_0x1284a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1284a0) {
            ctx->pc = 0x1284A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1284A0u;
            // 0x1284a4: 0xae200314  sw          $zero, 0x314($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1284B0u;
            goto label_1284b0;
        }
    }
    ctx->pc = 0x1284A8u;
label_1284a8:
    // 0x1284a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1284ac:
    if (ctx->pc == 0x1284ACu) {
        ctx->pc = 0x1284ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284A8u;
        // 0x1284ac: 0xa6300444  sh          $s0, 0x444($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1092), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1284B0u;
        goto label_1284b0;
    }
    ctx->pc = 0x1284A8u;
    {
        const bool branch_taken_0x1284a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1284ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284A8u;
        // 0x1284ac: 0xa6300444  sh          $s0, 0x444($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1092), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284a8) {
            ctx->pc = 0x1284B4u;
            goto label_1284b4;
        }
    }
    ctx->pc = 0x1284B0u;
label_1284b0:
    // 0x1284b0: 0xa6200444  sh          $zero, 0x444($s1)
    ctx->pc = 0x1284b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1092), (uint16_t)GPR_U32(ctx, 0));
label_1284b4:
    // 0x1284b4: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x1284b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_1284b8:
    // 0x1284b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1284bc:
    if (ctx->pc == 0x1284BCu) {
        ctx->pc = 0x1284BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284B8u;
        // 0x1284bc: 0x2630031c  addiu       $s0, $s1, 0x31C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 796));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1284C0u;
        goto label_1284c0;
    }
    ctx->pc = 0x1284B8u;
    {
        const bool branch_taken_0x1284b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1284BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284B8u;
        // 0x1284bc: 0x2630031c  addiu       $s0, $s1, 0x31C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 796));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284b8) {
            ctx->pc = 0x1284E4u;
            goto label_1284e4;
        }
    }
    ctx->pc = 0x1284C0u;
label_1284c0:
    // 0x1284c0: 0x8e250314  lw          $a1, 0x314($s1)
    ctx->pc = 0x1284c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_1284c4:
    // 0x1284c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1284c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1284c8:
    // 0x1284c8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1284c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1284cc:
    // 0x1284cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1284ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1284d0:
    // 0x1284d0: 0x40f809  jalr        $v0
label_1284d4:
    if (ctx->pc == 0x1284D4u) {
        ctx->pc = 0x1284D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284D0u;
        // 0x1284d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1284D8u;
        goto label_1284d8;
    }
    ctx->pc = 0x1284D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1284D8u);
        ctx->pc = 0x1284D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284D0u;
        // 0x1284d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1284D0u, 0x1284D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1284D8u;
label_1284d8:
    // 0x1284d8: 0x10000022  b           . + 4 + (0x22 << 2)
label_1284dc:
    if (ctx->pc == 0x1284DCu) {
        ctx->pc = 0x1284DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284D8u;
        // 0x1284dc: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1284E0u;
        goto label_1284e0;
    }
    ctx->pc = 0x1284D8u;
    {
        const bool branch_taken_0x1284d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1284DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284D8u;
        // 0x1284dc: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284d8) {
            ctx->pc = 0x128564u;
            goto label_128564;
        }
    }
    ctx->pc = 0x1284E0u;
label_1284e0:
    // 0x1284e0: 0x2630031c  addiu       $s0, $s1, 0x31C
    ctx->pc = 0x1284e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 796));
label_1284e4:
    // 0x1284e4: 0xc0e4060  jal         func_390180
label_1284e8:
    if (ctx->pc == 0x1284E8u) {
        ctx->pc = 0x1284E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284E4u;
        // 0x1284e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1284ECu;
        goto label_1284ec;
    }
    ctx->pc = 0x1284E4u;
    SET_GPR_U32(ctx, 31, 0x1284ECu);
    ctx->pc = 0x1284E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284E4u;
    // 0x1284e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1284E4u, 0x1284ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284ECu;
label_1284ec:
    // 0x1284ec: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_1284f0:
    if (ctx->pc == 0x1284F0u) {
        ctx->pc = 0x1284F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284ECu;
        // 0x1284f0: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1284F4u;
        goto label_1284f4;
    }
    ctx->pc = 0x1284ECu;
    {
        const bool branch_taken_0x1284ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1284ec) {
            ctx->pc = 0x1284F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1284ECu;
            // 0x1284f0: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128568u;
            goto label_128568;
        }
    }
    ctx->pc = 0x1284F4u;
label_1284f4:
    // 0x1284f4: 0xc0e409a  jal         func_390268
label_1284f8:
    if (ctx->pc == 0x1284F8u) {
        ctx->pc = 0x1284F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284F4u;
        // 0x1284f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1284FCu;
        goto label_1284fc;
    }
    ctx->pc = 0x1284F4u;
    SET_GPR_U32(ctx, 31, 0x1284FCu);
    ctx->pc = 0x1284F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1284F4u;
    // 0x1284f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1284F4u, 0x1284FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1284FCu;
label_1284fc:
    // 0x1284fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_128500:
    if (ctx->pc == 0x128500u) {
        ctx->pc = 0x128500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284FCu;
        // 0x128500: 0xae220314  sw          $v0, 0x314($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128504u;
        goto label_128504;
    }
    ctx->pc = 0x1284FCu;
    {
        const bool branch_taken_0x1284fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1284FCu;
        // 0x128500: 0xae220314  sw          $v0, 0x314($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284fc) {
            ctx->pc = 0x128514u;
            goto label_128514;
        }
    }
    ctx->pc = 0x128504u;
label_128504:
    // 0x128504: 0xc048892  jal         func_122248
label_128508:
    if (ctx->pc == 0x128508u) {
        ctx->pc = 0x128508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128504u;
        // 0x128508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12850Cu;
        goto label_12850c;
    }
    ctx->pc = 0x128504u;
    SET_GPR_U32(ctx, 31, 0x12850Cu);
    ctx->pc = 0x128508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128504u;
    // 0x128508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x128504u, 0x12850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12850Cu;
label_12850c:
    // 0x12850c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_128510:
    if (ctx->pc == 0x128510u) {
        ctx->pc = 0x128510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12850Cu;
        // 0x128510: 0x8e220314  lw          $v0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128514u;
        goto label_128514;
    }
    ctx->pc = 0x12850Cu;
    {
        const bool branch_taken_0x12850c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12850c) {
            ctx->pc = 0x128510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12850Cu;
            // 0x128510: 0x8e220314  lw          $v0, 0x314($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128550u;
            goto label_128550;
        }
    }
    ctx->pc = 0x128514u;
label_128514:
    // 0x128514: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x128514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_128518:
    // 0x128518: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12851c:
    // 0x12851c: 0x8c43b194  lw          $v1, -0x4E6C($v0)
    ctx->pc = 0x12851cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947220)));
label_128520:
    // 0x128520: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
label_128524:
    if (ctx->pc == 0x128524u) {
        ctx->pc = 0x128524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128520u;
        // 0x128524: 0x8e220314  lw          $v0, 0x314($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128528u;
        goto label_128528;
    }
    ctx->pc = 0x128520u;
    {
        const bool branch_taken_0x128520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x128520) {
            ctx->pc = 0x128524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128520u;
            // 0x128524: 0x8e220314  lw          $v0, 0x314($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128550u;
            goto label_128550;
        }
    }
    ctx->pc = 0x128528u;
label_128528:
    // 0x128528: 0x26e491a8  addiu       $a0, $s7, -0x6E58
    ctx->pc = 0x128528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939048));
label_12852c:
    // 0x12852c: 0xc136b7c  jal         func_4DADF0
label_128530:
    if (ctx->pc == 0x128530u) {
        ctx->pc = 0x128530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12852Cu;
        // 0x128530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128534u;
        goto label_128534;
    }
    ctx->pc = 0x12852Cu;
    SET_GPR_U32(ctx, 31, 0x128534u);
    ctx->pc = 0x128530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12852Cu;
    // 0x128530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DADF0u, 0x12852Cu, 0x128534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128534u;
label_128534:
    // 0x128534: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_128538:
    // 0x128538: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x128538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_12853c:
    // 0x12853c: 0xc0e409a  jal         func_390268
label_128540:
    if (ctx->pc == 0x128540u) {
        ctx->pc = 0x128540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12853Cu;
        // 0x128540: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128544u;
        goto label_128544;
    }
    ctx->pc = 0x12853Cu;
    SET_GPR_U32(ctx, 31, 0x128544u);
    ctx->pc = 0x128540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12853Cu;
    // 0x128540: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x12853Cu, 0x128544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128544u;
label_128544:
    // 0x128544: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_128548:
    if (ctx->pc == 0x128548u) {
        ctx->pc = 0x128548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128544u;
        // 0x128548: 0xae220314  sw          $v0, 0x314($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12854Cu;
        goto label_12854c;
    }
    ctx->pc = 0x128544u;
    {
        const bool branch_taken_0x128544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128544) {
            ctx->pc = 0x128548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128544u;
            // 0x128548: 0xae220314  sw          $v0, 0x314($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 788), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12854Cu;
            goto label_12854c;
        }
    }
    ctx->pc = 0x12854Cu;
label_12854c:
    // 0x12854c: 0x8e220314  lw          $v0, 0x314($s1)
    ctx->pc = 0x12854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
label_128550:
    // 0x128550: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_128554:
    if (ctx->pc == 0x128554u) {
        ctx->pc = 0x128554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128550u;
        // 0x128554: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128558u;
        goto label_128558;
    }
    ctx->pc = 0x128550u;
    {
        const bool branch_taken_0x128550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128550) {
            ctx->pc = 0x128554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128550u;
            // 0x128554: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128568u;
            goto label_128568;
        }
    }
    ctx->pc = 0x128558u;
label_128558:
    // 0x128558: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x128558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_12855c:
    // 0x12855c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12855cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_128560:
    // 0x128560: 0xa6220444  sh          $v0, 0x444($s1)
    ctx->pc = 0x128560u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1092), (uint16_t)GPR_U32(ctx, 2));
label_128564:
    // 0x128564: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x128564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_128568:
    // 0x128568: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x128568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12856c:
    // 0x12856c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_128570:
    if (ctx->pc == 0x128570u) {
        ctx->pc = 0x128570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12856Cu;
        // 0x128570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128574u;
        goto label_128574;
    }
    ctx->pc = 0x12856Cu;
    {
        const bool branch_taken_0x12856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12856Cu;
        // 0x128570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12856c) {
            ctx->pc = 0x128618u;
            goto label_128618;
        }
    }
    ctx->pc = 0x128574u;
label_128574:
    // 0x128574: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x128574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128578:
    // 0x128578: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
label_12857c:
    if (ctx->pc == 0x12857Cu) {
        ctx->pc = 0x12857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128578u;
        // 0x12857c: 0xa2220469  sb          $v0, 0x469($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1129), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128580u;
        goto label_128580;
    }
    ctx->pc = 0x128578u;
    {
        const bool branch_taken_0x128578 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        ctx->pc = 0x12857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128578u;
        // 0x12857c: 0xa2220469  sb          $v0, 0x469($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1129), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128578) {
            ctx->pc = 0x128584u;
            goto label_128584;
        }
    }
    ctx->pc = 0x128580u;
label_128580:
    // 0x128580: 0xa6200446  sh          $zero, 0x446($s1)
    ctx->pc = 0x128580u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1094), (uint16_t)GPR_U32(ctx, 0));
label_128584:
    // 0x128584: 0xc047e6c  jal         func_11F9B0
label_128588:
    if (ctx->pc == 0x128588u) {
        ctx->pc = 0x128588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128584u;
        // 0x128588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12858Cu;
        goto label_12858c;
    }
    ctx->pc = 0x128584u;
    SET_GPR_U32(ctx, 31, 0x12858Cu);
    ctx->pc = 0x128588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128584u;
    // 0x128588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x128584u, 0x12858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12858Cu;
label_12858c:
    // 0x12858c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_128590:
    if (ctx->pc == 0x128590u) {
        ctx->pc = 0x128594u;
        goto label_128594;
    }
    ctx->pc = 0x12858Cu;
    {
        const bool branch_taken_0x12858c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12858c) {
            ctx->pc = 0x1285CCu;
            goto label_1285cc;
        }
    }
    ctx->pc = 0x128594u;
label_128594:
    // 0x128594: 0xc047e6c  jal         func_11F9B0
label_128598:
    if (ctx->pc == 0x128598u) {
        ctx->pc = 0x128598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128594u;
        // 0x128598: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12859Cu;
        goto label_12859c;
    }
    ctx->pc = 0x128594u;
    SET_GPR_U32(ctx, 31, 0x12859Cu);
    ctx->pc = 0x128598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128594u;
    // 0x128598: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x128594u, 0x12859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12859Cu;
label_12859c:
    // 0x12859c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1285a0:
    // 0x1285a0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1285a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1285a4:
    // 0x1285a4: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x1285a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_1285a8:
    // 0x1285a8: 0xa0f809  jalr        $a1
label_1285ac:
    if (ctx->pc == 0x1285ACu) {
        ctx->pc = 0x1285ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285A8u;
        // 0x1285ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1285B0u;
        goto label_1285b0;
    }
    ctx->pc = 0x1285A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1285B0u);
        ctx->pc = 0x1285ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285A8u;
        // 0x1285ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1285A8u, 0x1285B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1285B0u;
label_1285b0:
    // 0x1285b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1285b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1285b4:
    // 0x1285b4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1285b8:
    if (ctx->pc == 0x1285B8u) {
        ctx->pc = 0x1285B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285B4u;
        // 0x1285b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1285BCu;
        goto label_1285bc;
    }
    ctx->pc = 0x1285B4u;
    {
        const bool branch_taken_0x1285b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1285B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285B4u;
        // 0x1285b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1285b4) {
            ctx->pc = 0x1285CCu;
            goto label_1285cc;
        }
    }
    ctx->pc = 0x1285BCu;
label_1285bc:
    // 0x1285bc: 0xc047e78  jal         func_11F9E0
label_1285c0:
    if (ctx->pc == 0x1285C0u) {
        ctx->pc = 0x1285C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285BCu;
        // 0x1285c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1285C4u;
        goto label_1285c4;
    }
    ctx->pc = 0x1285BCu;
    SET_GPR_U32(ctx, 31, 0x1285C4u);
    ctx->pc = 0x1285C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1285BCu;
    // 0x1285c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x1285BCu, 0x1285C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285C4u;
label_1285c4:
    // 0x1285c4: 0xc049a9a  jal         func_126A68
label_1285c8:
    if (ctx->pc == 0x1285C8u) {
        ctx->pc = 0x1285C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285C4u;
        // 0x1285c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1285CCu;
        goto label_1285cc;
    }
    ctx->pc = 0x1285C4u;
    SET_GPR_U32(ctx, 31, 0x1285CCu);
    ctx->pc = 0x1285C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1285C4u;
    // 0x1285c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A68u, 0x1285C4u, 0x1285CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285CCu;
label_1285cc:
    // 0x1285cc: 0xc047e6c  jal         func_11F9B0
label_1285d0:
    if (ctx->pc == 0x1285D0u) {
        ctx->pc = 0x1285D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285CCu;
        // 0x1285d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1285D4u;
        goto label_1285d4;
    }
    ctx->pc = 0x1285CCu;
    SET_GPR_U32(ctx, 31, 0x1285D4u);
    ctx->pc = 0x1285D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1285CCu;
    // 0x1285d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1285CCu, 0x1285D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285D4u;
label_1285d4:
    // 0x1285d4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1285d8:
    if (ctx->pc == 0x1285D8u) {
        ctx->pc = 0x1285D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285D4u;
        // 0x1285d8: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1285DCu;
        goto label_1285dc;
    }
    ctx->pc = 0x1285D4u;
    {
        const bool branch_taken_0x1285d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1285d4) {
            ctx->pc = 0x1285D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1285D4u;
            // 0x1285d8: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12861Cu;
            goto label_12861c;
        }
    }
    ctx->pc = 0x1285DCu;
label_1285dc:
    // 0x1285dc: 0xc047e6c  jal         func_11F9B0
label_1285e0:
    if (ctx->pc == 0x1285E0u) {
        ctx->pc = 0x1285E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285DCu;
        // 0x1285e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1285E4u;
        goto label_1285e4;
    }
    ctx->pc = 0x1285DCu;
    SET_GPR_U32(ctx, 31, 0x1285E4u);
    ctx->pc = 0x1285E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1285DCu;
    // 0x1285e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1285DCu, 0x1285E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1285E4u;
label_1285e4:
    // 0x1285e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1285e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1285e8:
    // 0x1285e8: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x1285e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1285ec:
    // 0x1285ec: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x1285ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_1285f0:
    // 0x1285f0: 0xa0f809  jalr        $a1
label_1285f4:
    if (ctx->pc == 0x1285F4u) {
        ctx->pc = 0x1285F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285F0u;
        // 0x1285f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1285F8u;
        goto label_1285f8;
    }
    ctx->pc = 0x1285F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1285F8u);
        ctx->pc = 0x1285F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285F0u;
        // 0x1285f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1285F0u, 0x1285F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1285F8u;
label_1285f8:
    // 0x1285f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1285f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1285fc:
    // 0x1285fc: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_128600:
    if (ctx->pc == 0x128600u) {
        ctx->pc = 0x128600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1285FCu;
        // 0x128600: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128604u;
        goto label_128604;
    }
    ctx->pc = 0x1285FCu;
    {
        const bool branch_taken_0x1285fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1285fc) {
            ctx->pc = 0x128600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1285FCu;
            // 0x128600: 0x96230444  lhu         $v1, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12861Cu;
            goto label_12861c;
        }
    }
    ctx->pc = 0x128604u;
label_128604:
    // 0x128604: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_128608:
    // 0x128608: 0xc047e78  jal         func_11F9E0
label_12860c:
    if (ctx->pc == 0x12860Cu) {
        ctx->pc = 0x12860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128608u;
        // 0x12860c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128610u;
        goto label_128610;
    }
    ctx->pc = 0x128608u;
    SET_GPR_U32(ctx, 31, 0x128610u);
    ctx->pc = 0x12860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128608u;
    // 0x12860c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x128608u, 0x128610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128610u;
label_128610:
    // 0x128610: 0xc049a9a  jal         func_126A68
label_128614:
    if (ctx->pc == 0x128614u) {
        ctx->pc = 0x128614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128610u;
        // 0x128614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128618u;
        goto label_128618;
    }
    ctx->pc = 0x128610u;
    SET_GPR_U32(ctx, 31, 0x128618u);
    ctx->pc = 0x128614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128610u;
    // 0x128614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A68u, 0x128610u, 0x128618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128618u;
label_128618:
    // 0x128618: 0x96230444  lhu         $v1, 0x444($s1)
    ctx->pc = 0x128618u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_12861c:
    // 0x12861c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x12861cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_128620:
    // 0x128620: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_128624:
    if (ctx->pc == 0x128624u) {
        ctx->pc = 0x128624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128620u;
        // 0x128624: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128628u;
        goto label_128628;
    }
    ctx->pc = 0x128620u;
    {
        const bool branch_taken_0x128620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128620u;
        // 0x128624: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128620) {
            ctx->pc = 0x128648u;
            goto label_128648;
        }
    }
    ctx->pc = 0x128628u;
label_128628:
    // 0x128628: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x128628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_12862c:
    // 0x12862c: 0x0  nop
    ctx->pc = 0x12862cu;
    // NOP
label_128630:
    // 0x128630: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x128630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_128634:
    // 0x128634: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x128634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_128638:
    // 0x128638: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x128638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12863c:
    // 0x12863c: 0x0  nop
    ctx->pc = 0x12863cu;
    // NOP
label_128640:
    // 0x128640: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_128644:
    if (ctx->pc == 0x128644u) {
        ctx->pc = 0x128644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128640u;
        // 0x128644: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128648u;
        goto label_128648;
    }
    ctx->pc = 0x128640u;
    {
        const bool branch_taken_0x128640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128640u;
        // 0x128644: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128640) {
            ctx->pc = 0x128630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128630;
        }
    }
    ctx->pc = 0x128648u;
label_128648:
    // 0x128648: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x128648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_12864c:
    // 0x12864c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x12864cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_128650:
    // 0x128650: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x128650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_128654:
    // 0x128654: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x128654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_128658:
    // 0x128658: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x128658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12865c:
    // 0x12865c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12865cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_128660:
    // 0x128660: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x128660u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_128664:
    // 0x128664: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x128664u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_128668:
    // 0x128668: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x128668u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12866c:
    // 0x12866c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12866cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_128670:
    // 0x128670: 0x3e00008  jr          $ra
label_128674:
    if (ctx->pc == 0x128674u) {
        ctx->pc = 0x128674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128670u;
        // 0x128674: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128678u;
        goto label_fallthrough_0x128670;
    }
    ctx->pc = 0x128670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128670u;
        // 0x128674: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x128670:
    ctx->pc = 0x128678u;
}
