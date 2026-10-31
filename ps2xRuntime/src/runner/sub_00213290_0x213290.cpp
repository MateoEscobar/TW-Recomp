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

// Function: sub_00213290
// Address: 0x213290 - 0x213718
void sub_00213290_0x213290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213290_0x213290");
#endif

    switch (ctx->pc) {
        case 0x213290u: goto label_213290;
        case 0x213294u: goto label_213294;
        case 0x213298u: goto label_213298;
        case 0x21329cu: goto label_21329c;
        case 0x2132a0u: goto label_2132a0;
        case 0x2132a4u: goto label_2132a4;
        case 0x2132a8u: goto label_2132a8;
        case 0x2132acu: goto label_2132ac;
        case 0x2132b0u: goto label_2132b0;
        case 0x2132b4u: goto label_2132b4;
        case 0x2132b8u: goto label_2132b8;
        case 0x2132bcu: goto label_2132bc;
        case 0x2132c0u: goto label_2132c0;
        case 0x2132c4u: goto label_2132c4;
        case 0x2132c8u: goto label_2132c8;
        case 0x2132ccu: goto label_2132cc;
        case 0x2132d0u: goto label_2132d0;
        case 0x2132d4u: goto label_2132d4;
        case 0x2132d8u: goto label_2132d8;
        case 0x2132dcu: goto label_2132dc;
        case 0x2132e0u: goto label_2132e0;
        case 0x2132e4u: goto label_2132e4;
        case 0x2132e8u: goto label_2132e8;
        case 0x2132ecu: goto label_2132ec;
        case 0x2132f0u: goto label_2132f0;
        case 0x2132f4u: goto label_2132f4;
        case 0x2132f8u: goto label_2132f8;
        case 0x2132fcu: goto label_2132fc;
        case 0x213300u: goto label_213300;
        case 0x213304u: goto label_213304;
        case 0x213308u: goto label_213308;
        case 0x21330cu: goto label_21330c;
        case 0x213310u: goto label_213310;
        case 0x213314u: goto label_213314;
        case 0x213318u: goto label_213318;
        case 0x21331cu: goto label_21331c;
        case 0x213320u: goto label_213320;
        case 0x213324u: goto label_213324;
        case 0x213328u: goto label_213328;
        case 0x21332cu: goto label_21332c;
        case 0x213330u: goto label_213330;
        case 0x213334u: goto label_213334;
        case 0x213338u: goto label_213338;
        case 0x21333cu: goto label_21333c;
        case 0x213340u: goto label_213340;
        case 0x213344u: goto label_213344;
        case 0x213348u: goto label_213348;
        case 0x21334cu: goto label_21334c;
        case 0x213350u: goto label_213350;
        case 0x213354u: goto label_213354;
        case 0x213358u: goto label_213358;
        case 0x21335cu: goto label_21335c;
        case 0x213360u: goto label_213360;
        case 0x213364u: goto label_213364;
        case 0x213368u: goto label_213368;
        case 0x21336cu: goto label_21336c;
        case 0x213370u: goto label_213370;
        case 0x213374u: goto label_213374;
        case 0x213378u: goto label_213378;
        case 0x21337cu: goto label_21337c;
        case 0x213380u: goto label_213380;
        case 0x213384u: goto label_213384;
        case 0x213388u: goto label_213388;
        case 0x21338cu: goto label_21338c;
        case 0x213390u: goto label_213390;
        case 0x213394u: goto label_213394;
        case 0x213398u: goto label_213398;
        case 0x21339cu: goto label_21339c;
        case 0x2133a0u: goto label_2133a0;
        case 0x2133a4u: goto label_2133a4;
        case 0x2133a8u: goto label_2133a8;
        case 0x2133acu: goto label_2133ac;
        case 0x2133b0u: goto label_2133b0;
        case 0x2133b4u: goto label_2133b4;
        case 0x2133b8u: goto label_2133b8;
        case 0x2133bcu: goto label_2133bc;
        case 0x2133c0u: goto label_2133c0;
        case 0x2133c4u: goto label_2133c4;
        case 0x2133c8u: goto label_2133c8;
        case 0x2133ccu: goto label_2133cc;
        case 0x2133d0u: goto label_2133d0;
        case 0x2133d4u: goto label_2133d4;
        case 0x2133d8u: goto label_2133d8;
        case 0x2133dcu: goto label_2133dc;
        case 0x2133e0u: goto label_2133e0;
        case 0x2133e4u: goto label_2133e4;
        case 0x2133e8u: goto label_2133e8;
        case 0x2133ecu: goto label_2133ec;
        case 0x2133f0u: goto label_2133f0;
        case 0x2133f4u: goto label_2133f4;
        case 0x2133f8u: goto label_2133f8;
        case 0x2133fcu: goto label_2133fc;
        case 0x213400u: goto label_213400;
        case 0x213404u: goto label_213404;
        case 0x213408u: goto label_213408;
        case 0x21340cu: goto label_21340c;
        case 0x213410u: goto label_213410;
        case 0x213414u: goto label_213414;
        case 0x213418u: goto label_213418;
        case 0x21341cu: goto label_21341c;
        case 0x213420u: goto label_213420;
        case 0x213424u: goto label_213424;
        case 0x213428u: goto label_213428;
        case 0x21342cu: goto label_21342c;
        case 0x213430u: goto label_213430;
        case 0x213434u: goto label_213434;
        case 0x213438u: goto label_213438;
        case 0x21343cu: goto label_21343c;
        case 0x213440u: goto label_213440;
        case 0x213444u: goto label_213444;
        case 0x213448u: goto label_213448;
        case 0x21344cu: goto label_21344c;
        case 0x213450u: goto label_213450;
        case 0x213454u: goto label_213454;
        case 0x213458u: goto label_213458;
        case 0x21345cu: goto label_21345c;
        case 0x213460u: goto label_213460;
        case 0x213464u: goto label_213464;
        case 0x213468u: goto label_213468;
        case 0x21346cu: goto label_21346c;
        case 0x213470u: goto label_213470;
        case 0x213474u: goto label_213474;
        case 0x213478u: goto label_213478;
        case 0x21347cu: goto label_21347c;
        case 0x213480u: goto label_213480;
        case 0x213484u: goto label_213484;
        case 0x213488u: goto label_213488;
        case 0x21348cu: goto label_21348c;
        case 0x213490u: goto label_213490;
        case 0x213494u: goto label_213494;
        case 0x213498u: goto label_213498;
        case 0x21349cu: goto label_21349c;
        case 0x2134a0u: goto label_2134a0;
        case 0x2134a4u: goto label_2134a4;
        case 0x2134a8u: goto label_2134a8;
        case 0x2134acu: goto label_2134ac;
        case 0x2134b0u: goto label_2134b0;
        case 0x2134b4u: goto label_2134b4;
        case 0x2134b8u: goto label_2134b8;
        case 0x2134bcu: goto label_2134bc;
        case 0x2134c0u: goto label_2134c0;
        case 0x2134c4u: goto label_2134c4;
        case 0x2134c8u: goto label_2134c8;
        case 0x2134ccu: goto label_2134cc;
        case 0x2134d0u: goto label_2134d0;
        case 0x2134d4u: goto label_2134d4;
        case 0x2134d8u: goto label_2134d8;
        case 0x2134dcu: goto label_2134dc;
        case 0x2134e0u: goto label_2134e0;
        case 0x2134e4u: goto label_2134e4;
        case 0x2134e8u: goto label_2134e8;
        case 0x2134ecu: goto label_2134ec;
        case 0x2134f0u: goto label_2134f0;
        case 0x2134f4u: goto label_2134f4;
        case 0x2134f8u: goto label_2134f8;
        case 0x2134fcu: goto label_2134fc;
        case 0x213500u: goto label_213500;
        case 0x213504u: goto label_213504;
        case 0x213508u: goto label_213508;
        case 0x21350cu: goto label_21350c;
        case 0x213510u: goto label_213510;
        case 0x213514u: goto label_213514;
        case 0x213518u: goto label_213518;
        case 0x21351cu: goto label_21351c;
        case 0x213520u: goto label_213520;
        case 0x213524u: goto label_213524;
        case 0x213528u: goto label_213528;
        case 0x21352cu: goto label_21352c;
        case 0x213530u: goto label_213530;
        case 0x213534u: goto label_213534;
        case 0x213538u: goto label_213538;
        case 0x21353cu: goto label_21353c;
        case 0x213540u: goto label_213540;
        case 0x213544u: goto label_213544;
        case 0x213548u: goto label_213548;
        case 0x21354cu: goto label_21354c;
        case 0x213550u: goto label_213550;
        case 0x213554u: goto label_213554;
        case 0x213558u: goto label_213558;
        case 0x21355cu: goto label_21355c;
        case 0x213560u: goto label_213560;
        case 0x213564u: goto label_213564;
        case 0x213568u: goto label_213568;
        case 0x21356cu: goto label_21356c;
        case 0x213570u: goto label_213570;
        case 0x213574u: goto label_213574;
        case 0x213578u: goto label_213578;
        case 0x21357cu: goto label_21357c;
        case 0x213580u: goto label_213580;
        case 0x213584u: goto label_213584;
        case 0x213588u: goto label_213588;
        case 0x21358cu: goto label_21358c;
        case 0x213590u: goto label_213590;
        case 0x213594u: goto label_213594;
        case 0x213598u: goto label_213598;
        case 0x21359cu: goto label_21359c;
        case 0x2135a0u: goto label_2135a0;
        case 0x2135a4u: goto label_2135a4;
        case 0x2135a8u: goto label_2135a8;
        case 0x2135acu: goto label_2135ac;
        case 0x2135b0u: goto label_2135b0;
        case 0x2135b4u: goto label_2135b4;
        case 0x2135b8u: goto label_2135b8;
        case 0x2135bcu: goto label_2135bc;
        case 0x2135c0u: goto label_2135c0;
        case 0x2135c4u: goto label_2135c4;
        case 0x2135c8u: goto label_2135c8;
        case 0x2135ccu: goto label_2135cc;
        case 0x2135d0u: goto label_2135d0;
        case 0x2135d4u: goto label_2135d4;
        case 0x2135d8u: goto label_2135d8;
        case 0x2135dcu: goto label_2135dc;
        case 0x2135e0u: goto label_2135e0;
        case 0x2135e4u: goto label_2135e4;
        case 0x2135e8u: goto label_2135e8;
        case 0x2135ecu: goto label_2135ec;
        case 0x2135f0u: goto label_2135f0;
        case 0x2135f4u: goto label_2135f4;
        case 0x2135f8u: goto label_2135f8;
        case 0x2135fcu: goto label_2135fc;
        case 0x213600u: goto label_213600;
        case 0x213604u: goto label_213604;
        case 0x213608u: goto label_213608;
        case 0x21360cu: goto label_21360c;
        case 0x213610u: goto label_213610;
        case 0x213614u: goto label_213614;
        case 0x213618u: goto label_213618;
        case 0x21361cu: goto label_21361c;
        case 0x213620u: goto label_213620;
        case 0x213624u: goto label_213624;
        case 0x213628u: goto label_213628;
        case 0x21362cu: goto label_21362c;
        case 0x213630u: goto label_213630;
        case 0x213634u: goto label_213634;
        case 0x213638u: goto label_213638;
        case 0x21363cu: goto label_21363c;
        case 0x213640u: goto label_213640;
        case 0x213644u: goto label_213644;
        case 0x213648u: goto label_213648;
        case 0x21364cu: goto label_21364c;
        case 0x213650u: goto label_213650;
        case 0x213654u: goto label_213654;
        case 0x213658u: goto label_213658;
        case 0x21365cu: goto label_21365c;
        case 0x213660u: goto label_213660;
        case 0x213664u: goto label_213664;
        case 0x213668u: goto label_213668;
        case 0x21366cu: goto label_21366c;
        case 0x213670u: goto label_213670;
        case 0x213674u: goto label_213674;
        case 0x213678u: goto label_213678;
        case 0x21367cu: goto label_21367c;
        case 0x213680u: goto label_213680;
        case 0x213684u: goto label_213684;
        case 0x213688u: goto label_213688;
        case 0x21368cu: goto label_21368c;
        case 0x213690u: goto label_213690;
        case 0x213694u: goto label_213694;
        case 0x213698u: goto label_213698;
        case 0x21369cu: goto label_21369c;
        case 0x2136a0u: goto label_2136a0;
        case 0x2136a4u: goto label_2136a4;
        case 0x2136a8u: goto label_2136a8;
        case 0x2136acu: goto label_2136ac;
        case 0x2136b0u: goto label_2136b0;
        case 0x2136b4u: goto label_2136b4;
        case 0x2136b8u: goto label_2136b8;
        case 0x2136bcu: goto label_2136bc;
        case 0x2136c0u: goto label_2136c0;
        case 0x2136c4u: goto label_2136c4;
        case 0x2136c8u: goto label_2136c8;
        case 0x2136ccu: goto label_2136cc;
        case 0x2136d0u: goto label_2136d0;
        case 0x2136d4u: goto label_2136d4;
        case 0x2136d8u: goto label_2136d8;
        case 0x2136dcu: goto label_2136dc;
        case 0x2136e0u: goto label_2136e0;
        case 0x2136e4u: goto label_2136e4;
        case 0x2136e8u: goto label_2136e8;
        case 0x2136ecu: goto label_2136ec;
        case 0x2136f0u: goto label_2136f0;
        case 0x2136f4u: goto label_2136f4;
        case 0x2136f8u: goto label_2136f8;
        case 0x2136fcu: goto label_2136fc;
        case 0x213700u: goto label_213700;
        case 0x213704u: goto label_213704;
        case 0x213708u: goto label_213708;
        case 0x21370cu: goto label_21370c;
        case 0x213710u: goto label_213710;
        case 0x213714u: goto label_213714;
        default: break;
    }

    ctx->pc = 0x213290u;

label_213290:
    // 0x213290: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x213290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_213294:
    // 0x213294: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x213294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_213298:
    // 0x213298: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x213298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_21329c:
    // 0x21329c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x21329cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2132a0:
    // 0x2132a0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2132a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2132a4:
    // 0x2132a4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2132a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2132a8:
    // 0x2132a8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2132a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2132ac:
    // 0x2132ac: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2132acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2132b0:
    // 0x2132b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2132b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2132b4:
    // 0x2132b4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2132b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2132b8:
    // 0x2132b8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2132b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2132bc:
    // 0x2132bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2132bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2132c0:
    // 0x2132c0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2132c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2132c4:
    // 0x2132c4: 0x8fc24138  lw          $v0, 0x4138($fp)
    ctx->pc = 0x2132c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16696)));
label_2132c8:
    // 0x2132c8: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
label_2132cc:
    if (ctx->pc == 0x2132CCu) {
        ctx->pc = 0x2132CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132C8u;
        // 0x2132cc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2132D0u;
        goto label_2132d0;
    }
    ctx->pc = 0x2132C8u;
    {
        const bool branch_taken_0x2132c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132C8u;
        // 0x2132cc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132c8) {
            ctx->pc = 0x2136E8u;
            goto label_2136e8;
        }
    }
    ctx->pc = 0x2132D0u;
label_2132d0:
    // 0x2132d0: 0x8fc24110  lw          $v0, 0x4110($fp)
    ctx->pc = 0x2132d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16656)));
label_2132d4:
    // 0x2132d4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2132d8:
    if (ctx->pc == 0x2132D8u) {
        ctx->pc = 0x2132D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132D4u;
        // 0x2132d8: 0x8fc240fc  lw          $v0, 0x40FC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2132DCu;
        goto label_2132dc;
    }
    ctx->pc = 0x2132D4u;
    {
        const bool branch_taken_0x2132d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2132d4) {
            ctx->pc = 0x2132D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2132D4u;
            // 0x2132d8: 0x8fc240fc  lw          $v0, 0x40FC($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2132FCu;
            goto label_2132fc;
        }
    }
    ctx->pc = 0x2132DCu;
label_2132dc:
    // 0x2132dc: 0x8fc34120  lw          $v1, 0x4120($fp)
    ctx->pc = 0x2132dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16672)));
label_2132e0:
    // 0x2132e0: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x2132e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_2132e4:
    // 0x2132e4: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x2132e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_2132e8:
    // 0x2132e8: 0x40f809  jalr        $v0
label_2132ec:
    if (ctx->pc == 0x2132ECu) {
        ctx->pc = 0x2132ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132E8u;
        // 0x2132ec: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2132F0u;
        goto label_2132f0;
    }
    ctx->pc = 0x2132E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2132F0u);
        ctx->pc = 0x2132ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132E8u;
        // 0x2132ec: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2132E8u, 0x2132F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2132F0u;
label_2132f0:
    // 0x2132f0: 0x104000fc  beqz        $v0, . + 4 + (0xFC << 2)
label_2132f4:
    if (ctx->pc == 0x2132F4u) {
        ctx->pc = 0x2132F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132F0u;
        // 0x2132f4: 0xafc24110  sw          $v0, 0x4110($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2132F8u;
        goto label_2132f8;
    }
    ctx->pc = 0x2132F0u;
    {
        const bool branch_taken_0x2132f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132F0u;
        // 0x2132f4: 0xafc24110  sw          $v0, 0x4110($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132f0) {
            ctx->pc = 0x2136E4u;
            goto label_2136e4;
        }
    }
    ctx->pc = 0x2132F8u;
label_2132f8:
    // 0x2132f8: 0x8fc240fc  lw          $v0, 0x40FC($fp)
    ctx->pc = 0x2132f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16636)));
label_2132fc:
    // 0x2132fc: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
label_213300:
    if (ctx->pc == 0x213300u) {
        ctx->pc = 0x213300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132FCu;
        // 0x213300: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213304u;
        goto label_213304;
    }
    ctx->pc = 0x2132FCu;
    {
        const bool branch_taken_0x2132fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132FCu;
        // 0x213300: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132fc) {
            ctx->pc = 0x2136E8u;
            goto label_2136e8;
        }
    }
    ctx->pc = 0x213304u;
label_213304:
    // 0x213304: 0x8fc240f8  lw          $v0, 0x40F8($fp)
    ctx->pc = 0x213304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16632)));
label_213308:
    // 0x213308: 0x104000f8  beqz        $v0, . + 4 + (0xF8 << 2)
label_21330c:
    if (ctx->pc == 0x21330Cu) {
        ctx->pc = 0x21330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213308u;
        // 0x21330c: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213310u;
        goto label_213310;
    }
    ctx->pc = 0x213308u;
    {
        const bool branch_taken_0x213308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213308u;
        // 0x21330c: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213308) {
            ctx->pc = 0x2136ECu;
            goto label_2136ec;
        }
    }
    ctx->pc = 0x213310u;
label_213310:
    // 0x213310: 0x27c43480  addiu       $a0, $fp, 0x3480
    ctx->pc = 0x213310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 13440));
label_213314:
    // 0x213314: 0xc07027e  jal         func_1C09F8
label_213318:
    if (ctx->pc == 0x213318u) {
        ctx->pc = 0x213318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213314u;
        // 0x213318: 0x27d00880  addiu       $s0, $fp, 0x880 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 2176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21331Cu;
        goto label_21331c;
    }
    ctx->pc = 0x213314u;
    SET_GPR_U32(ctx, 31, 0x21331Cu);
    ctx->pc = 0x213318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213314u;
    // 0x213318: 0x27d00880  addiu       $s0, $fp, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C09F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C09F8u, 0x213314u, 0x21331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21331Cu;
label_21331c:
    // 0x21331c: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x21331cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
label_213320:
    // 0x213320: 0xc079dd4  jal         func_1E7750
label_213324:
    if (ctx->pc == 0x213324u) {
        ctx->pc = 0x213324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213320u;
        // 0x213324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213328u;
        goto label_213328;
    }
    ctx->pc = 0x213320u;
    SET_GPR_U32(ctx, 31, 0x213328u);
    ctx->pc = 0x213324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213320u;
    // 0x213324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7750u, 0x213320u, 0x213328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213328u;
label_213328:
    // 0x213328: 0x8fc24104  lw          $v0, 0x4104($fp)
    ctx->pc = 0x213328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16644)));
label_21332c:
    // 0x21332c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_213330:
    if (ctx->pc == 0x213330u) {
        ctx->pc = 0x213330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21332Cu;
        // 0x213330: 0xafc0411c  sw          $zero, 0x411C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213334u;
        goto label_213334;
    }
    ctx->pc = 0x21332Cu;
    {
        const bool branch_taken_0x21332c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21332c) {
            ctx->pc = 0x213330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21332Cu;
            // 0x213330: 0xafc0411c  sw          $zero, 0x411C($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 16668), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213334u;
            goto label_213334;
        }
    }
    ctx->pc = 0x213334u;
label_213334:
    // 0x213334: 0x8fc2411c  lw          $v0, 0x411C($fp)
    ctx->pc = 0x213334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16668)));
label_213338:
    // 0x213338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21333c:
    // 0x21333c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21333cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_213340:
    // 0x213340: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_213344:
    if (ctx->pc == 0x213344u) {
        ctx->pc = 0x213344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213340u;
        // 0x213344: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213348u;
        goto label_213348;
    }
    ctx->pc = 0x213340u;
    {
        const bool branch_taken_0x213340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213340u;
        // 0x213344: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213340) {
            ctx->pc = 0x213368u;
            goto label_213368;
        }
    }
    ctx->pc = 0x213348u;
label_213348:
    // 0x213348: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x213348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_21334c:
    // 0x21334c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21334cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_213350:
    // 0x213350: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x213350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_213354:
    // 0x213354: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x213354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_213358:
    // 0x213358: 0x40f809  jalr        $v0
label_21335c:
    if (ctx->pc == 0x21335Cu) {
        ctx->pc = 0x21335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213358u;
        // 0x21335c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213360u;
        goto label_213360;
    }
    ctx->pc = 0x213358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x213360u);
        ctx->pc = 0x21335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213358u;
        // 0x21335c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213358u, 0x213360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x213360u;
label_213360:
    // 0x213360: 0x10000037  b           . + 4 + (0x37 << 2)
label_213364:
    if (ctx->pc == 0x213364u) {
        ctx->pc = 0x213364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213360u;
        // 0x213364: 0xafc2411c  sw          $v0, 0x411C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213368u;
        goto label_213368;
    }
    ctx->pc = 0x213360u;
    {
        const bool branch_taken_0x213360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213360u;
        // 0x213364: 0xafc2411c  sw          $v0, 0x411C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16668), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213360) {
            ctx->pc = 0x213440u;
            goto label_213440;
        }
    }
    ctx->pc = 0x213368u;
label_213368:
    // 0x213368: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x213368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_21336c:
    // 0x21336c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21336cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_213370:
    // 0x213370: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x213370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_213374:
    // 0x213374: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x213374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_213378:
    // 0x213378: 0x40f809  jalr        $v0
label_21337c:
    if (ctx->pc == 0x21337Cu) {
        ctx->pc = 0x21337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213378u;
        // 0x21337c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213380u;
        goto label_213380;
    }
    ctx->pc = 0x213378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x213380u);
        ctx->pc = 0x21337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213378u;
        // 0x21337c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213378u, 0x213380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x213380u;
label_213380:
    // 0x213380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x213380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213384:
    // 0x213384: 0x8fc3411c  lw          $v1, 0x411C($fp)
    ctx->pc = 0x213384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16668)));
label_213388:
    // 0x213388: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x213388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21338c:
    // 0x21338c: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x21338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_213390:
    // 0x213390: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x213390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_213394:
    // 0x213394: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x213394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_213398:
    // 0x213398: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_21339c:
    if (ctx->pc == 0x21339Cu) {
        ctx->pc = 0x21339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213398u;
        // 0x21339c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2133A0u;
        goto label_2133a0;
    }
    ctx->pc = 0x213398u;
    {
        const bool branch_taken_0x213398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213398u;
        // 0x21339c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213398) {
            ctx->pc = 0x213440u;
            goto label_213440;
        }
    }
    ctx->pc = 0x2133A0u;
label_2133a0:
    // 0x2133a0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x2133a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_2133a4:
    // 0x2133a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2133a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2133a8:
    // 0x2133a8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2133a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2133ac:
    // 0x2133ac: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
label_2133b0:
    if (ctx->pc == 0x2133B0u) {
        ctx->pc = 0x2133B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133ACu;
        // 0x2133b0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2133B4u;
        goto label_2133b4;
    }
    ctx->pc = 0x2133ACu;
    {
        const bool branch_taken_0x2133ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2133B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133ACu;
        // 0x2133b0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133ac) {
            ctx->pc = 0x2136E4u;
            goto label_2136e4;
        }
    }
    ctx->pc = 0x2133B4u;
label_2133b4:
    // 0x2133b4: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x2133b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2133b8:
    // 0x2133b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2133bc:
    if (ctx->pc == 0x2133BCu) {
        ctx->pc = 0x2133BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133B8u;
        // 0x2133bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2133C0u;
        goto label_2133c0;
    }
    ctx->pc = 0x2133B8u;
    {
        const bool branch_taken_0x2133b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2133BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133B8u;
        // 0x2133bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133b8) {
            ctx->pc = 0x2133D4u;
            goto label_2133d4;
        }
    }
    ctx->pc = 0x2133C0u;
label_2133c0:
    // 0x2133c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2133c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2133c4:
    // 0x2133c4: 0x0  nop
    ctx->pc = 0x2133c4u;
    // NOP
label_2133c8:
    // 0x2133c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2133c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2133cc:
    // 0x2133cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2133d0:
    if (ctx->pc == 0x2133D0u) {
        ctx->pc = 0x2133D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133CCu;
        // 0x2133d0: 0x8cc20074  lw          $v0, 0x74($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2133D4u;
        goto label_2133d4;
    }
    ctx->pc = 0x2133CCu;
    {
        const bool branch_taken_0x2133cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2133D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133CCu;
        // 0x2133d0: 0x8cc20074  lw          $v0, 0x74($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133cc) {
            ctx->pc = 0x2133F0u;
            goto label_2133f0;
        }
    }
    ctx->pc = 0x2133D4u;
label_2133d4:
    // 0x2133d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2133d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2133d8:
    // 0x2133d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2133d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2133dc:
    // 0x2133dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2133dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2133e0:
    // 0x2133e0: 0x0  nop
    ctx->pc = 0x2133e0u;
    // NOP
label_2133e4:
    // 0x2133e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2133e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2133e8:
    // 0x2133e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2133e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2133ec:
    // 0x2133ec: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x2133ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_2133f0:
    // 0x2133f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2133f4:
    if (ctx->pc == 0x2133F4u) {
        ctx->pc = 0x2133F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133F0u;
        // 0x2133f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2133F8u;
        goto label_2133f8;
    }
    ctx->pc = 0x2133F0u;
    {
        const bool branch_taken_0x2133f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2133F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133F0u;
        // 0x2133f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2133f0) {
            ctx->pc = 0x21340Cu;
            goto label_21340c;
        }
    }
    ctx->pc = 0x2133F8u;
label_2133f8:
    // 0x2133f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2133f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2133fc:
    // 0x2133fc: 0x0  nop
    ctx->pc = 0x2133fcu;
    // NOP
label_213400:
    // 0x213400: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x213400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_213404:
    // 0x213404: 0x10000007  b           . + 4 + (0x7 << 2)
label_213408:
    if (ctx->pc == 0x213408u) {
        ctx->pc = 0x21340Cu;
        goto label_21340c;
    }
    ctx->pc = 0x213404u;
    {
        const bool branch_taken_0x213404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213404) {
            ctx->pc = 0x213424u;
            goto label_213424;
        }
    }
    ctx->pc = 0x21340Cu;
label_21340c:
    // 0x21340c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21340cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_213410:
    // 0x213410: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_213414:
    // 0x213414: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_213418:
    // 0x213418: 0x0  nop
    ctx->pc = 0x213418u;
    // NOP
label_21341c:
    // 0x21341c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21341cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_213420:
    // 0x213420: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x213420u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_213424:
    // 0x213424: 0x0  nop
    ctx->pc = 0x213424u;
    // NOP
label_213428:
    // 0x213428: 0x0  nop
    ctx->pc = 0x213428u;
    // NOP
label_21342c:
    // 0x21342c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x21342cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_213430:
    // 0x213430: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_213434:
    // 0x213434: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_213438:
    // 0x213438: 0x0  nop
    ctx->pc = 0x213438u;
    // NOP
label_21343c:
    // 0x21343c: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x21343cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_213440:
    // 0x213440: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x213440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_213444:
    // 0x213444: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_213448:
    // 0x213448: 0x27c33ee0  addiu       $v1, $fp, 0x3EE0
    ctx->pc = 0x213448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16096));
label_21344c:
    // 0x21344c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x21344cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_213450:
    // 0x213450: 0x27c23de0  addiu       $v0, $fp, 0x3DE0
    ctx->pc = 0x213450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 15840));
label_213454:
    // 0x213454: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x213454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_213458:
    // 0x213458: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x213458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_21345c:
    // 0x21345c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_213460:
    // 0x213460: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x213460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213464:
    // 0x213464: 0x27c23ce0  addiu       $v0, $fp, 0x3CE0
    ctx->pc = 0x213464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 15584));
label_213468:
    // 0x213468: 0x27d302a0  addiu       $s3, $fp, 0x2A0
    ctx->pc = 0x213468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 672));
label_21346c:
    // 0x21346c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21346cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_213470:
    // 0x213470: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x213470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_213474:
    // 0x213474: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x213474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_213478:
    // 0x213478: 0x27d40e70  addiu       $s4, $fp, 0xE70
    ctx->pc = 0x213478u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 3696));
label_21347c:
    // 0x21347c: 0x27d512a0  addiu       $s5, $fp, 0x12A0
    ctx->pc = 0x21347cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4768));
label_213480:
    // 0x213480: 0x27d616d0  addiu       $s6, $fp, 0x16D0
    ctx->pc = 0x213480u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 5840));
label_213484:
    // 0x213484: 0x27d71b00  addiu       $s7, $fp, 0x1B00
    ctx->pc = 0x213484u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 6912));
label_213488:
    // 0x213488: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x213488u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_21348c:
    // 0x21348c: 0xc06898e  jal         func_1A2638
label_213490:
    if (ctx->pc == 0x213490u) {
        ctx->pc = 0x213490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21348Cu;
        // 0x213490: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213494u;
        goto label_213494;
    }
    ctx->pc = 0x21348Cu;
    SET_GPR_U32(ctx, 31, 0x213494u);
    ctx->pc = 0x213490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21348Cu;
    // 0x213490: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x21348Cu, 0x213494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213494u;
label_213494:
    // 0x213494: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x213494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_213498:
    // 0x213498: 0xc06898e  jal         func_1A2638
label_21349c:
    if (ctx->pc == 0x21349Cu) {
        ctx->pc = 0x21349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213498u;
        // 0x21349c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2134A0u;
        goto label_2134a0;
    }
    ctx->pc = 0x213498u;
    SET_GPR_U32(ctx, 31, 0x2134A0u);
    ctx->pc = 0x21349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213498u;
    // 0x21349c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x213498u, 0x2134A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134A0u;
label_2134a0:
    // 0x2134a0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2134a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2134a4:
    // 0x2134a4: 0xc06898e  jal         func_1A2638
label_2134a8:
    if (ctx->pc == 0x2134A8u) {
        ctx->pc = 0x2134A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134A4u;
        // 0x2134a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2134ACu;
        goto label_2134ac;
    }
    ctx->pc = 0x2134A4u;
    SET_GPR_U32(ctx, 31, 0x2134ACu);
    ctx->pc = 0x2134A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134A4u;
    // 0x2134a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x2134A4u, 0x2134ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134ACu;
label_2134ac:
    // 0x2134ac: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2134acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_2134b0:
    // 0x2134b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2134b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2134b4:
    // 0x2134b4: 0x27c200b0  addiu       $v0, $fp, 0xB0
    ctx->pc = 0x2134b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 176));
label_2134b8:
    // 0x2134b8: 0xa3d10023  sb          $s1, 0x23($fp)
    ctx->pc = 0x2134b8u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 35), (uint8_t)GPR_U32(ctx, 17));
label_2134bc:
    // 0x2134bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2134bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2134c0:
    // 0x2134c0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2134c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2134c4:
    // 0x2134c4: 0xa3d1002b  sb          $s1, 0x2B($fp)
    ctx->pc = 0x2134c4u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 43), (uint8_t)GPR_U32(ctx, 17));
label_2134c8:
    // 0x2134c8: 0xa3d10027  sb          $s1, 0x27($fp)
    ctx->pc = 0x2134c8u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 39), (uint8_t)GPR_U32(ctx, 17));
label_2134cc:
    // 0x2134cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2134ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2134d0:
    // 0x2134d0: 0xac5201b4  sw          $s2, 0x1B4($v0)
    ctx->pc = 0x2134d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 436), GPR_U32(ctx, 18));
label_2134d4:
    // 0x2134d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2134d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2134d8:
    // 0x2134d8: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x2134d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_2134dc:
    // 0x2134dc: 0xa05001b1  sb          $s0, 0x1B1($v0)
    ctx->pc = 0x2134dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 433), (uint8_t)GPR_U32(ctx, 16));
label_2134e0:
    // 0x2134e0: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x2134e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2134e4:
    // 0x2134e4: 0xc073476  jal         func_1CD1D8
label_2134e8:
    if (ctx->pc == 0x2134E8u) {
        ctx->pc = 0x2134E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134E4u;
        // 0x2134e8: 0xa051018c  sb          $s1, 0x18C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 396), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2134ECu;
        goto label_2134ec;
    }
    ctx->pc = 0x2134E4u;
    SET_GPR_U32(ctx, 31, 0x2134ECu);
    ctx->pc = 0x2134E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134E4u;
    // 0x2134e8: 0xa051018c  sb          $s1, 0x18C($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 396), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x2134E4u, 0x2134ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134ECu;
label_2134ec:
    // 0x2134ec: 0x27c20570  addiu       $v0, $fp, 0x570
    ctx->pc = 0x2134ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1392));
label_2134f0:
    // 0x2134f0: 0xa27100c4  sb          $s1, 0xC4($s3)
    ctx->pc = 0x2134f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 196), (uint8_t)GPR_U32(ctx, 17));
label_2134f4:
    // 0x2134f4: 0xa051018c  sb          $s1, 0x18C($v0)
    ctx->pc = 0x2134f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 396), (uint8_t)GPR_U32(ctx, 17));
label_2134f8:
    // 0x2134f8: 0x27c40760  addiu       $a0, $fp, 0x760
    ctx->pc = 0x2134f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1888));
label_2134fc:
    // 0x2134fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2134fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213500:
    // 0x213500: 0xac5201b4  sw          $s2, 0x1B4($v0)
    ctx->pc = 0x213500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 436), GPR_U32(ctx, 18));
label_213504:
    // 0x213504: 0xc06898e  jal         func_1A2638
label_213508:
    if (ctx->pc == 0x213508u) {
        ctx->pc = 0x213508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213504u;
        // 0x213508: 0xa05001b1  sb          $s0, 0x1B1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 433), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21350Cu;
        goto label_21350c;
    }
    ctx->pc = 0x213504u;
    SET_GPR_U32(ctx, 31, 0x21350Cu);
    ctx->pc = 0x213508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213504u;
    // 0x213508: 0xa05001b1  sb          $s0, 0x1B1($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 433), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x213504u, 0x21350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21350Cu;
label_21350c:
    // 0x21350c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x21350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_213510:
    // 0x213510: 0x27c41130  addiu       $a0, $fp, 0x1130
    ctx->pc = 0x213510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4400));
label_213514:
    // 0x213514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213518:
    // 0x213518: 0xac5201b4  sw          $s2, 0x1B4($v0)
    ctx->pc = 0x213518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 436), GPR_U32(ctx, 18));
label_21351c:
    // 0x21351c: 0xc06898e  jal         func_1A2638
label_213520:
    if (ctx->pc == 0x213520u) {
        ctx->pc = 0x213520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21351Cu;
        // 0x213520: 0xa05001b1  sb          $s0, 0x1B1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 433), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213524u;
        goto label_213524;
    }
    ctx->pc = 0x21351Cu;
    SET_GPR_U32(ctx, 31, 0x213524u);
    ctx->pc = 0x213520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21351Cu;
    // 0x213520: 0xa05001b1  sb          $s0, 0x1B1($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 433), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x21351Cu, 0x213524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213524u;
label_213524:
    // 0x213524: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x213524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_213528:
    // 0x213528: 0xc073476  jal         func_1CD1D8
label_21352c:
    if (ctx->pc == 0x21352Cu) {
        ctx->pc = 0x21352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213528u;
        // 0x21352c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213530u;
        goto label_213530;
    }
    ctx->pc = 0x213528u;
    SET_GPR_U32(ctx, 31, 0x213530u);
    ctx->pc = 0x21352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213528u;
    // 0x21352c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x213528u, 0x213530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213530u;
label_213530:
    // 0x213530: 0xa29100c4  sb          $s1, 0xC4($s4)
    ctx->pc = 0x213530u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 196), (uint8_t)GPR_U32(ctx, 17));
label_213534:
    // 0x213534: 0x27c41560  addiu       $a0, $fp, 0x1560
    ctx->pc = 0x213534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5472));
label_213538:
    // 0x213538: 0xc06898e  jal         func_1A2638
label_21353c:
    if (ctx->pc == 0x21353Cu) {
        ctx->pc = 0x21353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213538u;
        // 0x21353c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213540u;
        goto label_213540;
    }
    ctx->pc = 0x213538u;
    SET_GPR_U32(ctx, 31, 0x213540u);
    ctx->pc = 0x21353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213538u;
    // 0x21353c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x213538u, 0x213540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213540u;
label_213540:
    // 0x213540: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x213540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_213544:
    // 0x213544: 0xc073476  jal         func_1CD1D8
label_213548:
    if (ctx->pc == 0x213548u) {
        ctx->pc = 0x213548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213544u;
        // 0x213548: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21354Cu;
        goto label_21354c;
    }
    ctx->pc = 0x213544u;
    SET_GPR_U32(ctx, 31, 0x21354Cu);
    ctx->pc = 0x213548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213544u;
    // 0x213548: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x213544u, 0x21354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21354Cu;
label_21354c:
    // 0x21354c: 0xa2b100c4  sb          $s1, 0xC4($s5)
    ctx->pc = 0x21354cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 196), (uint8_t)GPR_U32(ctx, 17));
label_213550:
    // 0x213550: 0x27c41990  addiu       $a0, $fp, 0x1990
    ctx->pc = 0x213550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6544));
label_213554:
    // 0x213554: 0xc06898e  jal         func_1A2638
label_213558:
    if (ctx->pc == 0x213558u) {
        ctx->pc = 0x213558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213554u;
        // 0x213558: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21355Cu;
        goto label_21355c;
    }
    ctx->pc = 0x213554u;
    SET_GPR_U32(ctx, 31, 0x21355Cu);
    ctx->pc = 0x213558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213554u;
    // 0x213558: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x213554u, 0x21355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21355Cu;
label_21355c:
    // 0x21355c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_213560:
    // 0x213560: 0xc073476  jal         func_1CD1D8
label_213564:
    if (ctx->pc == 0x213564u) {
        ctx->pc = 0x213564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213560u;
        // 0x213564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213568u;
        goto label_213568;
    }
    ctx->pc = 0x213560u;
    SET_GPR_U32(ctx, 31, 0x213568u);
    ctx->pc = 0x213564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213560u;
    // 0x213564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x213560u, 0x213568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213568u;
label_213568:
    // 0x213568: 0xa2d100c4  sb          $s1, 0xC4($s6)
    ctx->pc = 0x213568u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 196), (uint8_t)GPR_U32(ctx, 17));
label_21356c:
    // 0x21356c: 0x27c41dc0  addiu       $a0, $fp, 0x1DC0
    ctx->pc = 0x21356cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 7616));
label_213570:
    // 0x213570: 0xc06898e  jal         func_1A2638
label_213574:
    if (ctx->pc == 0x213574u) {
        ctx->pc = 0x213574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213570u;
        // 0x213574: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213578u;
        goto label_213578;
    }
    ctx->pc = 0x213570u;
    SET_GPR_U32(ctx, 31, 0x213578u);
    ctx->pc = 0x213574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213570u;
    // 0x213574: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x213570u, 0x213578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213578u;
label_213578:
    // 0x213578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21357c:
    // 0x21357c: 0xc073476  jal         func_1CD1D8
label_213580:
    if (ctx->pc == 0x213580u) {
        ctx->pc = 0x213580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21357Cu;
        // 0x213580: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213584u;
        goto label_213584;
    }
    ctx->pc = 0x21357Cu;
    SET_GPR_U32(ctx, 31, 0x213584u);
    ctx->pc = 0x213580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21357Cu;
    // 0x213580: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1D8u, 0x21357Cu, 0x213584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213584u;
label_213584:
    // 0x213584: 0xa2f100c4  sb          $s1, 0xC4($s7)
    ctx->pc = 0x213584u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 196), (uint8_t)GPR_U32(ctx, 17));
label_213588:
    // 0x213588: 0xc068998  jal         func_1A2660
label_21358c:
    if (ctx->pc == 0x21358Cu) {
        ctx->pc = 0x21358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213588u;
        // 0x21358c: 0x27c43fe0  addiu       $a0, $fp, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213590u;
        goto label_213590;
    }
    ctx->pc = 0x213588u;
    SET_GPR_U32(ctx, 31, 0x213590u);
    ctx->pc = 0x21358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213588u;
    // 0x21358c: 0x27c43fe0  addiu       $a0, $fp, 0x3FE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x213588u, 0x213590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213590u;
label_213590:
    // 0x213590: 0xc068998  jal         func_1A2660
label_213594:
    if (ctx->pc == 0x213594u) {
        ctx->pc = 0x213594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213590u;
        // 0x213594: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213598u;
        goto label_213598;
    }
    ctx->pc = 0x213590u;
    SET_GPR_U32(ctx, 31, 0x213598u);
    ctx->pc = 0x213594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213590u;
    // 0x213594: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x213590u, 0x213598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213598u;
label_213598:
    // 0x213598: 0xc068998  jal         func_1A2660
label_21359c:
    if (ctx->pc == 0x21359Cu) {
        ctx->pc = 0x21359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213598u;
        // 0x21359c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2135A0u;
        goto label_2135a0;
    }
    ctx->pc = 0x213598u;
    SET_GPR_U32(ctx, 31, 0x2135A0u);
    ctx->pc = 0x21359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213598u;
    // 0x21359c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x213598u, 0x2135A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2135A0u;
label_2135a0:
    // 0x2135a0: 0xc068998  jal         func_1A2660
label_2135a4:
    if (ctx->pc == 0x2135A4u) {
        ctx->pc = 0x2135A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135A0u;
        // 0x2135a4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2135A8u;
        goto label_2135a8;
    }
    ctx->pc = 0x2135A0u;
    SET_GPR_U32(ctx, 31, 0x2135A8u);
    ctx->pc = 0x2135A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2135A0u;
    // 0x2135a4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x2135A0u, 0x2135A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2135A8u;
label_2135a8:
    // 0x2135a8: 0x8fc34118  lw          $v1, 0x4118($fp)
    ctx->pc = 0x2135a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16664)));
label_2135ac:
    // 0x2135ac: 0x8fc44114  lw          $a0, 0x4114($fp)
    ctx->pc = 0x2135acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16660)));
label_2135b0:
    // 0x2135b0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2135b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2135b4:
    // 0x2135b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2135b8:
    if (ctx->pc == 0x2135B8u) {
        ctx->pc = 0x2135B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135B4u;
        // 0x2135b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2135BCu;
        goto label_2135bc;
    }
    ctx->pc = 0x2135B4u;
    {
        const bool branch_taken_0x2135b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135B4u;
        // 0x2135b8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135b4) {
            ctx->pc = 0x2135E0u;
            goto label_2135e0;
        }
    }
    ctx->pc = 0x2135BCu;
label_2135bc:
    // 0x2135bc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2135bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2135c0:
    // 0x2135c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2135c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2135c4:
    // 0x2135c4: 0xafc24118  sw          $v0, 0x4118($fp)
    ctx->pc = 0x2135c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16664), GPR_U32(ctx, 2));
label_2135c8:
    // 0x2135c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2135c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2135cc:
    // 0x2135cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2135ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2135d0:
    // 0x2135d0: 0xc06844e  jal         func_1A1138
label_2135d4:
    if (ctx->pc == 0x2135D4u) {
        ctx->pc = 0x2135D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135D0u;
        // 0x2135d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2135D8u;
        goto label_2135d8;
    }
    ctx->pc = 0x2135D0u;
    SET_GPR_U32(ctx, 31, 0x2135D8u);
    ctx->pc = 0x2135D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2135D0u;
    // 0x2135d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x2135D0u, 0x2135D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2135D8u;
label_2135d8:
    // 0x2135d8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2135dc:
    if (ctx->pc == 0x2135DCu) {
        ctx->pc = 0x2135DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135D8u;
        // 0x2135dc: 0x8fc24114  lw          $v0, 0x4114($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2135E0u;
        goto label_2135e0;
    }
    ctx->pc = 0x2135D8u;
    {
        const bool branch_taken_0x2135d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135D8u;
        // 0x2135dc: 0x8fc24114  lw          $v0, 0x4114($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135d8) {
            ctx->pc = 0x213618u;
            goto label_213618;
        }
    }
    ctx->pc = 0x2135E0u;
label_2135e0:
    // 0x2135e0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2135e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2135e4:
    // 0x2135e4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2135e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2135e8:
    // 0x2135e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2135ec:
    if (ctx->pc == 0x2135ECu) {
        ctx->pc = 0x2135ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135E8u;
        // 0x2135ec: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2135F0u;
        goto label_2135f0;
    }
    ctx->pc = 0x2135E8u;
    {
        const bool branch_taken_0x2135e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135E8u;
        // 0x2135ec: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135e8) {
            ctx->pc = 0x2135F8u;
            goto label_2135f8;
        }
    }
    ctx->pc = 0x2135F0u;
label_2135f0:
    // 0x2135f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2135f4:
    if (ctx->pc == 0x2135F4u) {
        ctx->pc = 0x2135F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135F0u;
        // 0x2135f4: 0xafc24118  sw          $v0, 0x4118($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2135F8u;
        goto label_2135f8;
    }
    ctx->pc = 0x2135F0u;
    {
        const bool branch_taken_0x2135f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135F0u;
        // 0x2135f4: 0xafc24118  sw          $v0, 0x4118($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135f0) {
            ctx->pc = 0x213614u;
            goto label_213614;
        }
    }
    ctx->pc = 0x2135F8u;
label_2135f8:
    // 0x2135f8: 0xafc04118  sw          $zero, 0x4118($fp)
    ctx->pc = 0x2135f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16664), GPR_U32(ctx, 0));
label_2135fc:
    // 0x2135fc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2135fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_213600:
    // 0x213600: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x213600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_213604:
    // 0x213604: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x213604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_213608:
    // 0x213608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21360c:
    // 0x21360c: 0xc06844e  jal         func_1A1138
label_213610:
    if (ctx->pc == 0x213610u) {
        ctx->pc = 0x213610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21360Cu;
        // 0x213610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213614u;
        goto label_213614;
    }
    ctx->pc = 0x21360Cu;
    SET_GPR_U32(ctx, 31, 0x213614u);
    ctx->pc = 0x213610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21360Cu;
    // 0x213610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x21360Cu, 0x213614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213614u;
label_213614:
    // 0x213614: 0x8fc24114  lw          $v0, 0x4114($fp)
    ctx->pc = 0x213614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16660)));
label_213618:
    // 0x213618: 0x8fc34118  lw          $v1, 0x4118($fp)
    ctx->pc = 0x213618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16664)));
label_21361c:
    // 0x21361c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x21361cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_213620:
    // 0x213620: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_213624:
    if (ctx->pc == 0x213624u) {
        ctx->pc = 0x213624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213620u;
        // 0x213624: 0xafc04118  sw          $zero, 0x4118($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213628u;
        goto label_213628;
    }
    ctx->pc = 0x213620u;
    {
        const bool branch_taken_0x213620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x213620) {
            ctx->pc = 0x213624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213620u;
            // 0x213624: 0xafc04118  sw          $zero, 0x4118($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 16664), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213628u;
            goto label_213628;
        }
    }
    ctx->pc = 0x213628u;
label_213628:
    // 0x213628: 0x8fc24130  lw          $v0, 0x4130($fp)
    ctx->pc = 0x213628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16688)));
label_21362c:
    // 0x21362c: 0x27c31ac0  addiu       $v1, $fp, 0x1AC0
    ctx->pc = 0x21362cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 6848));
label_213630:
    // 0x213630: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x213630u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_213634:
    // 0x213634: 0x27d40400  addiu       $s4, $fp, 0x400
    ctx->pc = 0x213634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 1024));
label_213638:
    // 0x213638: 0x27d50e30  addiu       $s5, $fp, 0xE30
    ctx->pc = 0x213638u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 3632));
label_21363c:
    // 0x21363c: 0x27d61260  addiu       $s6, $fp, 0x1260
    ctx->pc = 0x21363cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4704));
label_213640:
    // 0x213640: 0x27d71690  addiu       $s7, $fp, 0x1690
    ctx->pc = 0x213640u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 5776));
label_213644:
    // 0x213644: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_213648:
    if (ctx->pc == 0x213648u) {
        ctx->pc = 0x213648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213644u;
        // 0x213648: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21364Cu;
        goto label_21364c;
    }
    ctx->pc = 0x213644u;
    {
        const bool branch_taken_0x213644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213644u;
        // 0x213648: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213644) {
            ctx->pc = 0x2136A4u;
            goto label_2136a4;
        }
    }
    ctx->pc = 0x21364Cu;
label_21364c:
    // 0x21364c: 0x8fc2413c  lw          $v0, 0x413C($fp)
    ctx->pc = 0x21364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16700)));
label_213650:
    // 0x213650: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_213654:
    if (ctx->pc == 0x213654u) {
        ctx->pc = 0x213654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213650u;
        // 0x213654: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213658u;
        goto label_213658;
    }
    ctx->pc = 0x213650u;
    {
        const bool branch_taken_0x213650 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213650u;
        // 0x213654: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213650) {
            ctx->pc = 0x2136A4u;
            goto label_2136a4;
        }
    }
    ctx->pc = 0x213658u;
label_213658:
    // 0x213658: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x213658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_21365c:
    // 0x21365c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21365cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_213660:
    // 0x213660: 0x27d04150  addiu       $s0, $fp, 0x4150
    ctx->pc = 0x213660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 16720));
label_213664:
    // 0x213664: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x213664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_213668:
    // 0x213668: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213668u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_21366c:
    // 0x21366c: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x21366cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_213670:
    // 0x213670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x213670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_213674:
    // 0x213674: 0xc06898e  jal         func_1A2638
label_213678:
    if (ctx->pc == 0x213678u) {
        ctx->pc = 0x213678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213674u;
        // 0x213678: 0x324500ff  andi        $a1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21367Cu;
        goto label_21367c;
    }
    ctx->pc = 0x213674u;
    SET_GPR_U32(ctx, 31, 0x21367Cu);
    ctx->pc = 0x213678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213674u;
    // 0x213678: 0x324500ff  andi        $a1, $s2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x213674u, 0x21367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21367Cu;
label_21367c:
    // 0x21367c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21367cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_213680:
    // 0x213680: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x213680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_213684:
    // 0x213684: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x213684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_213688:
    // 0x213688: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x213688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_21368c:
    // 0x21368c: 0x60f809  jalr        $v1
label_213690:
    if (ctx->pc == 0x213690u) {
        ctx->pc = 0x213690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21368Cu;
        // 0x213690: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213694u;
        goto label_213694;
    }
    ctx->pc = 0x21368Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x213694u);
        ctx->pc = 0x213690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21368Cu;
        // 0x213690: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21368Cu, 0x213694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x213694u;
label_213694:
    // 0x213694: 0x8fc2413c  lw          $v0, 0x413C($fp)
    ctx->pc = 0x213694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16700)));
label_213698:
    // 0x213698: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x213698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21369c:
    // 0x21369c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2136a0:
    if (ctx->pc == 0x2136A0u) {
        ctx->pc = 0x2136A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21369Cu;
        // 0x2136a0: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136A4u;
        goto label_2136a4;
    }
    ctx->pc = 0x21369Cu;
    {
        const bool branch_taken_0x21369c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2136A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21369Cu;
        // 0x2136a0: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21369c) {
            ctx->pc = 0x213670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213670;
        }
    }
    ctx->pc = 0x2136A4u;
label_2136a4:
    // 0x2136a4: 0xc107458  jal         func_41D160
label_2136a8:
    if (ctx->pc == 0x2136A8u) {
        ctx->pc = 0x2136A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136A4u;
        // 0x2136a8: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136ACu;
        goto label_2136ac;
    }
    ctx->pc = 0x2136A4u;
    SET_GPR_U32(ctx, 31, 0x2136ACu);
    ctx->pc = 0x2136A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136A4u;
    // 0x2136a8: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x2136A4u, 0x2136ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136ACu;
label_2136ac:
    // 0x2136ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2136b0:
    if (ctx->pc == 0x2136B0u) {
        ctx->pc = 0x2136B4u;
        goto label_2136b4;
    }
    ctx->pc = 0x2136ACu;
    {
        const bool branch_taken_0x2136ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2136ac) {
            ctx->pc = 0x2136BCu;
            goto label_2136bc;
        }
    }
    ctx->pc = 0x2136B4u;
label_2136b4:
    // 0x2136b4: 0xc071f90  jal         func_1C7E40
label_2136b8:
    if (ctx->pc == 0x2136B8u) {
        ctx->pc = 0x2136B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136B4u;
        // 0x2136b8: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136BCu;
        goto label_2136bc;
    }
    ctx->pc = 0x2136B4u;
    SET_GPR_U32(ctx, 31, 0x2136BCu);
    ctx->pc = 0x2136B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136B4u;
    // 0x2136b8: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E40u, 0x2136B4u, 0x2136BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136BCu;
label_2136bc:
    // 0x2136bc: 0xc06fc1a  jal         func_1BF068
label_2136c0:
    if (ctx->pc == 0x2136C0u) {
        ctx->pc = 0x2136C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136BCu;
        // 0x2136c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136C4u;
        goto label_2136c4;
    }
    ctx->pc = 0x2136BCu;
    SET_GPR_U32(ctx, 31, 0x2136C4u);
    ctx->pc = 0x2136C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136BCu;
    // 0x2136c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF068u, 0x2136BCu, 0x2136C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136C4u;
label_2136c4:
    // 0x2136c4: 0xc06dbb6  jal         func_1B6ED8
label_2136c8:
    if (ctx->pc == 0x2136C8u) {
        ctx->pc = 0x2136C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136C4u;
        // 0x2136c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136CCu;
        goto label_2136cc;
    }
    ctx->pc = 0x2136C4u;
    SET_GPR_U32(ctx, 31, 0x2136CCu);
    ctx->pc = 0x2136C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136C4u;
    // 0x2136c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6ED8u, 0x2136C4u, 0x2136CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136CCu;
label_2136cc:
    // 0x2136cc: 0xc06dbb6  jal         func_1B6ED8
label_2136d0:
    if (ctx->pc == 0x2136D0u) {
        ctx->pc = 0x2136D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136CCu;
        // 0x2136d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136D4u;
        goto label_2136d4;
    }
    ctx->pc = 0x2136CCu;
    SET_GPR_U32(ctx, 31, 0x2136D4u);
    ctx->pc = 0x2136D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136CCu;
    // 0x2136d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6ED8u, 0x2136CCu, 0x2136D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136D4u;
label_2136d4:
    // 0x2136d4: 0xc06dbb6  jal         func_1B6ED8
label_2136d8:
    if (ctx->pc == 0x2136D8u) {
        ctx->pc = 0x2136D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136D4u;
        // 0x2136d8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136DCu;
        goto label_2136dc;
    }
    ctx->pc = 0x2136D4u;
    SET_GPR_U32(ctx, 31, 0x2136DCu);
    ctx->pc = 0x2136D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136D4u;
    // 0x2136d8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6ED8u, 0x2136D4u, 0x2136DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136DCu;
label_2136dc:
    // 0x2136dc: 0xc06dbb6  jal         func_1B6ED8
label_2136e0:
    if (ctx->pc == 0x2136E0u) {
        ctx->pc = 0x2136E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136DCu;
        // 0x2136e0: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136E4u;
        goto label_2136e4;
    }
    ctx->pc = 0x2136DCu;
    SET_GPR_U32(ctx, 31, 0x2136E4u);
    ctx->pc = 0x2136E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136DCu;
    // 0x2136e0: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6ED8u, 0x2136DCu, 0x2136E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2136E4u;
label_2136e4:
    // 0x2136e4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2136e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2136e8:
    // 0x2136e8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2136e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2136ec:
    // 0x2136ec: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2136ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2136f0:
    // 0x2136f0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2136f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2136f4:
    // 0x2136f4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2136f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2136f8:
    // 0x2136f8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2136f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2136fc:
    // 0x2136fc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2136fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_213700:
    // 0x213700: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x213700u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_213704:
    // 0x213704: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x213704u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_213708:
    // 0x213708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x213708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21370c:
    // 0x21370c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x21370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_213710:
    // 0x213710: 0x3e00008  jr          $ra
label_213714:
    if (ctx->pc == 0x213714u) {
        ctx->pc = 0x213714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213710u;
        // 0x213714: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213718u;
        goto label_fallthrough_0x213710;
    }
    ctx->pc = 0x213710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213710u;
        // 0x213714: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x213710:
    ctx->pc = 0x213718u;
}
