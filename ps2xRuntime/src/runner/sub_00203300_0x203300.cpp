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

// Function: sub_00203300
// Address: 0x203300 - 0x2036d8
void sub_00203300_0x203300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203300_0x203300");
#endif

    switch (ctx->pc) {
        case 0x203300u: goto label_203300;
        case 0x203304u: goto label_203304;
        case 0x203308u: goto label_203308;
        case 0x20330cu: goto label_20330c;
        case 0x203310u: goto label_203310;
        case 0x203314u: goto label_203314;
        case 0x203318u: goto label_203318;
        case 0x20331cu: goto label_20331c;
        case 0x203320u: goto label_203320;
        case 0x203324u: goto label_203324;
        case 0x203328u: goto label_203328;
        case 0x20332cu: goto label_20332c;
        case 0x203330u: goto label_203330;
        case 0x203334u: goto label_203334;
        case 0x203338u: goto label_203338;
        case 0x20333cu: goto label_20333c;
        case 0x203340u: goto label_203340;
        case 0x203344u: goto label_203344;
        case 0x203348u: goto label_203348;
        case 0x20334cu: goto label_20334c;
        case 0x203350u: goto label_203350;
        case 0x203354u: goto label_203354;
        case 0x203358u: goto label_203358;
        case 0x20335cu: goto label_20335c;
        case 0x203360u: goto label_203360;
        case 0x203364u: goto label_203364;
        case 0x203368u: goto label_203368;
        case 0x20336cu: goto label_20336c;
        case 0x203370u: goto label_203370;
        case 0x203374u: goto label_203374;
        case 0x203378u: goto label_203378;
        case 0x20337cu: goto label_20337c;
        case 0x203380u: goto label_203380;
        case 0x203384u: goto label_203384;
        case 0x203388u: goto label_203388;
        case 0x20338cu: goto label_20338c;
        case 0x203390u: goto label_203390;
        case 0x203394u: goto label_203394;
        case 0x203398u: goto label_203398;
        case 0x20339cu: goto label_20339c;
        case 0x2033a0u: goto label_2033a0;
        case 0x2033a4u: goto label_2033a4;
        case 0x2033a8u: goto label_2033a8;
        case 0x2033acu: goto label_2033ac;
        case 0x2033b0u: goto label_2033b0;
        case 0x2033b4u: goto label_2033b4;
        case 0x2033b8u: goto label_2033b8;
        case 0x2033bcu: goto label_2033bc;
        case 0x2033c0u: goto label_2033c0;
        case 0x2033c4u: goto label_2033c4;
        case 0x2033c8u: goto label_2033c8;
        case 0x2033ccu: goto label_2033cc;
        case 0x2033d0u: goto label_2033d0;
        case 0x2033d4u: goto label_2033d4;
        case 0x2033d8u: goto label_2033d8;
        case 0x2033dcu: goto label_2033dc;
        case 0x2033e0u: goto label_2033e0;
        case 0x2033e4u: goto label_2033e4;
        case 0x2033e8u: goto label_2033e8;
        case 0x2033ecu: goto label_2033ec;
        case 0x2033f0u: goto label_2033f0;
        case 0x2033f4u: goto label_2033f4;
        case 0x2033f8u: goto label_2033f8;
        case 0x2033fcu: goto label_2033fc;
        case 0x203400u: goto label_203400;
        case 0x203404u: goto label_203404;
        case 0x203408u: goto label_203408;
        case 0x20340cu: goto label_20340c;
        case 0x203410u: goto label_203410;
        case 0x203414u: goto label_203414;
        case 0x203418u: goto label_203418;
        case 0x20341cu: goto label_20341c;
        case 0x203420u: goto label_203420;
        case 0x203424u: goto label_203424;
        case 0x203428u: goto label_203428;
        case 0x20342cu: goto label_20342c;
        case 0x203430u: goto label_203430;
        case 0x203434u: goto label_203434;
        case 0x203438u: goto label_203438;
        case 0x20343cu: goto label_20343c;
        case 0x203440u: goto label_203440;
        case 0x203444u: goto label_203444;
        case 0x203448u: goto label_203448;
        case 0x20344cu: goto label_20344c;
        case 0x203450u: goto label_203450;
        case 0x203454u: goto label_203454;
        case 0x203458u: goto label_203458;
        case 0x20345cu: goto label_20345c;
        case 0x203460u: goto label_203460;
        case 0x203464u: goto label_203464;
        case 0x203468u: goto label_203468;
        case 0x20346cu: goto label_20346c;
        case 0x203470u: goto label_203470;
        case 0x203474u: goto label_203474;
        case 0x203478u: goto label_203478;
        case 0x20347cu: goto label_20347c;
        case 0x203480u: goto label_203480;
        case 0x203484u: goto label_203484;
        case 0x203488u: goto label_203488;
        case 0x20348cu: goto label_20348c;
        case 0x203490u: goto label_203490;
        case 0x203494u: goto label_203494;
        case 0x203498u: goto label_203498;
        case 0x20349cu: goto label_20349c;
        case 0x2034a0u: goto label_2034a0;
        case 0x2034a4u: goto label_2034a4;
        case 0x2034a8u: goto label_2034a8;
        case 0x2034acu: goto label_2034ac;
        case 0x2034b0u: goto label_2034b0;
        case 0x2034b4u: goto label_2034b4;
        case 0x2034b8u: goto label_2034b8;
        case 0x2034bcu: goto label_2034bc;
        case 0x2034c0u: goto label_2034c0;
        case 0x2034c4u: goto label_2034c4;
        case 0x2034c8u: goto label_2034c8;
        case 0x2034ccu: goto label_2034cc;
        case 0x2034d0u: goto label_2034d0;
        case 0x2034d4u: goto label_2034d4;
        case 0x2034d8u: goto label_2034d8;
        case 0x2034dcu: goto label_2034dc;
        case 0x2034e0u: goto label_2034e0;
        case 0x2034e4u: goto label_2034e4;
        case 0x2034e8u: goto label_2034e8;
        case 0x2034ecu: goto label_2034ec;
        case 0x2034f0u: goto label_2034f0;
        case 0x2034f4u: goto label_2034f4;
        case 0x2034f8u: goto label_2034f8;
        case 0x2034fcu: goto label_2034fc;
        case 0x203500u: goto label_203500;
        case 0x203504u: goto label_203504;
        case 0x203508u: goto label_203508;
        case 0x20350cu: goto label_20350c;
        case 0x203510u: goto label_203510;
        case 0x203514u: goto label_203514;
        case 0x203518u: goto label_203518;
        case 0x20351cu: goto label_20351c;
        case 0x203520u: goto label_203520;
        case 0x203524u: goto label_203524;
        case 0x203528u: goto label_203528;
        case 0x20352cu: goto label_20352c;
        case 0x203530u: goto label_203530;
        case 0x203534u: goto label_203534;
        case 0x203538u: goto label_203538;
        case 0x20353cu: goto label_20353c;
        case 0x203540u: goto label_203540;
        case 0x203544u: goto label_203544;
        case 0x203548u: goto label_203548;
        case 0x20354cu: goto label_20354c;
        case 0x203550u: goto label_203550;
        case 0x203554u: goto label_203554;
        case 0x203558u: goto label_203558;
        case 0x20355cu: goto label_20355c;
        case 0x203560u: goto label_203560;
        case 0x203564u: goto label_203564;
        case 0x203568u: goto label_203568;
        case 0x20356cu: goto label_20356c;
        case 0x203570u: goto label_203570;
        case 0x203574u: goto label_203574;
        case 0x203578u: goto label_203578;
        case 0x20357cu: goto label_20357c;
        case 0x203580u: goto label_203580;
        case 0x203584u: goto label_203584;
        case 0x203588u: goto label_203588;
        case 0x20358cu: goto label_20358c;
        case 0x203590u: goto label_203590;
        case 0x203594u: goto label_203594;
        case 0x203598u: goto label_203598;
        case 0x20359cu: goto label_20359c;
        case 0x2035a0u: goto label_2035a0;
        case 0x2035a4u: goto label_2035a4;
        case 0x2035a8u: goto label_2035a8;
        case 0x2035acu: goto label_2035ac;
        case 0x2035b0u: goto label_2035b0;
        case 0x2035b4u: goto label_2035b4;
        case 0x2035b8u: goto label_2035b8;
        case 0x2035bcu: goto label_2035bc;
        case 0x2035c0u: goto label_2035c0;
        case 0x2035c4u: goto label_2035c4;
        case 0x2035c8u: goto label_2035c8;
        case 0x2035ccu: goto label_2035cc;
        case 0x2035d0u: goto label_2035d0;
        case 0x2035d4u: goto label_2035d4;
        case 0x2035d8u: goto label_2035d8;
        case 0x2035dcu: goto label_2035dc;
        case 0x2035e0u: goto label_2035e0;
        case 0x2035e4u: goto label_2035e4;
        case 0x2035e8u: goto label_2035e8;
        case 0x2035ecu: goto label_2035ec;
        case 0x2035f0u: goto label_2035f0;
        case 0x2035f4u: goto label_2035f4;
        case 0x2035f8u: goto label_2035f8;
        case 0x2035fcu: goto label_2035fc;
        case 0x203600u: goto label_203600;
        case 0x203604u: goto label_203604;
        case 0x203608u: goto label_203608;
        case 0x20360cu: goto label_20360c;
        case 0x203610u: goto label_203610;
        case 0x203614u: goto label_203614;
        case 0x203618u: goto label_203618;
        case 0x20361cu: goto label_20361c;
        case 0x203620u: goto label_203620;
        case 0x203624u: goto label_203624;
        case 0x203628u: goto label_203628;
        case 0x20362cu: goto label_20362c;
        case 0x203630u: goto label_203630;
        case 0x203634u: goto label_203634;
        case 0x203638u: goto label_203638;
        case 0x20363cu: goto label_20363c;
        case 0x203640u: goto label_203640;
        case 0x203644u: goto label_203644;
        case 0x203648u: goto label_203648;
        case 0x20364cu: goto label_20364c;
        case 0x203650u: goto label_203650;
        case 0x203654u: goto label_203654;
        case 0x203658u: goto label_203658;
        case 0x20365cu: goto label_20365c;
        case 0x203660u: goto label_203660;
        case 0x203664u: goto label_203664;
        case 0x203668u: goto label_203668;
        case 0x20366cu: goto label_20366c;
        case 0x203670u: goto label_203670;
        case 0x203674u: goto label_203674;
        case 0x203678u: goto label_203678;
        case 0x20367cu: goto label_20367c;
        case 0x203680u: goto label_203680;
        case 0x203684u: goto label_203684;
        case 0x203688u: goto label_203688;
        case 0x20368cu: goto label_20368c;
        case 0x203690u: goto label_203690;
        case 0x203694u: goto label_203694;
        case 0x203698u: goto label_203698;
        case 0x20369cu: goto label_20369c;
        case 0x2036a0u: goto label_2036a0;
        case 0x2036a4u: goto label_2036a4;
        case 0x2036a8u: goto label_2036a8;
        case 0x2036acu: goto label_2036ac;
        case 0x2036b0u: goto label_2036b0;
        case 0x2036b4u: goto label_2036b4;
        case 0x2036b8u: goto label_2036b8;
        case 0x2036bcu: goto label_2036bc;
        case 0x2036c0u: goto label_2036c0;
        case 0x2036c4u: goto label_2036c4;
        case 0x2036c8u: goto label_2036c8;
        case 0x2036ccu: goto label_2036cc;
        case 0x2036d0u: goto label_2036d0;
        case 0x2036d4u: goto label_2036d4;
        default: break;
    }

    ctx->pc = 0x203300u;

label_203300:
    // 0x203300: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x203300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_203304:
    // 0x203304: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x203304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_203308:
    // 0x203308: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x203308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_20330c:
    // 0x20330c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20330cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203310:
    // 0x203310: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x203310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_203314:
    // 0x203314: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x203314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_203318:
    // 0x203318: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x203318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20331c:
    // 0x20331c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_203320:
    // 0x203320: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x203320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_203324:
    // 0x203324: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x203324u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_203328:
    // 0x203328: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x203328u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_20332c:
    // 0x20332c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x20332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_203330:
    // 0x203330: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
label_203334:
    if (ctx->pc == 0x203334u) {
        ctx->pc = 0x203334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203330u;
        // 0x203334: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203338u;
        goto label_203338;
    }
    ctx->pc = 0x203330u;
    {
        const bool branch_taken_0x203330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203330u;
        // 0x203334: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203330) {
            ctx->pc = 0x2036B0u;
            goto label_2036b0;
        }
    }
    ctx->pc = 0x203338u;
label_203338:
    // 0x203338: 0xc080ebe  jal         func_203AF8
label_20333c:
    if (ctx->pc == 0x20333Cu) {
        ctx->pc = 0x203340u;
        goto label_203340;
    }
    ctx->pc = 0x203338u;
    SET_GPR_U32(ctx, 31, 0x203340u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x203338u, 0x203340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203340u;
label_203340:
    // 0x203340: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x203340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_203344:
    // 0x203344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x203344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_203348:
    // 0x203348: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x203348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20334c:
    // 0x20334c: 0xc462f57c  lwc1        $f2, -0xA84($v1)
    ctx->pc = 0x20334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_203350:
    // 0x203350: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x203350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_203354:
    // 0x203354: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x203354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_203358:
    // 0x203358: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x203358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_20335c:
    // 0x20335c: 0x8c64cdb4  lw          $a0, -0x324C($v1)
    ctx->pc = 0x20335cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_203360:
    // 0x203360: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x203360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203364:
    // 0x203364: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x203364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_203368:
    // 0x203368: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x203368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_20336c:
    // 0x20336c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x20336cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_203370:
    // 0x203370: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x203370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203374:
    // 0x203374: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x203374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_203378:
    // 0x203378: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20337c:
    if (ctx->pc == 0x20337Cu) {
        ctx->pc = 0x20337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203378u;
        // 0x20337c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x203380u;
        goto label_203380;
    }
    ctx->pc = 0x203378u;
    {
        const bool branch_taken_0x203378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203378u;
        // 0x20337c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203378) {
            ctx->pc = 0x2033A8u;
            goto label_2033a8;
        }
    }
    ctx->pc = 0x203380u;
label_203380:
    // 0x203380: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x203380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
label_203384:
    // 0x203384: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x203384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_203388:
    // 0x203388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20338c:
    // 0x20338c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_203390:
    if (ctx->pc == 0x203390u) {
        ctx->pc = 0x203390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20338Cu;
        // 0x203390: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x203394u;
        goto label_203394;
    }
    ctx->pc = 0x20338Cu;
    {
        const bool branch_taken_0x20338c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20338c) {
            ctx->pc = 0x203390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20338Cu;
            // 0x203390: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2033E4u;
            goto label_2033e4;
        }
    }
    ctx->pc = 0x203394u;
label_203394:
    // 0x203394: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x203394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
label_203398:
    // 0x203398: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x203398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_20339c:
    // 0x20339c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20339cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2033a0:
    // 0x2033a0: 0x10000010  b           . + 4 + (0x10 << 2)
label_2033a4:
    if (ctx->pc == 0x2033A4u) {
        ctx->pc = 0x2033A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033A0u;
        // 0x2033a4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2033A8u;
        goto label_2033a8;
    }
    ctx->pc = 0x2033A0u;
    {
        const bool branch_taken_0x2033a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033A0u;
        // 0x2033a4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033a0) {
            ctx->pc = 0x2033E4u;
            goto label_2033e4;
        }
    }
    ctx->pc = 0x2033A8u;
label_2033a8:
    // 0x2033a8: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x2033a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_2033ac:
    // 0x2033ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2033b0:
    if (ctx->pc == 0x2033B0u) {
        ctx->pc = 0x2033B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033ACu;
        // 0x2033b0: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2033B4u;
        goto label_2033b4;
    }
    ctx->pc = 0x2033ACu;
    {
        const bool branch_taken_0x2033ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033ACu;
        // 0x2033b0: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033ac) {
            ctx->pc = 0x2033BCu;
            goto label_2033bc;
        }
    }
    ctx->pc = 0x2033B4u;
label_2033b4:
    // 0x2033b4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2033b8:
    if (ctx->pc == 0x2033B8u) {
        ctx->pc = 0x2033B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033B4u;
        // 0x2033b8: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2033BCu;
        goto label_2033bc;
    }
    ctx->pc = 0x2033B4u;
    {
        const bool branch_taken_0x2033b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033B4u;
        // 0x2033b8: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033b4) {
            ctx->pc = 0x2033E4u;
            goto label_2033e4;
        }
    }
    ctx->pc = 0x2033BCu;
label_2033bc:
    // 0x2033bc: 0x3c013f3a  lui         $at, 0x3F3A
    ctx->pc = 0x2033bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16186 << 16));
label_2033c0:
    // 0x2033c0: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x2033c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_2033c4:
    // 0x2033c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2033c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2033c8:
    // 0x2033c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2033cc:
    if (ctx->pc == 0x2033CCu) {
        ctx->pc = 0x2033CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033C8u;
        // 0x2033cc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2033D0u;
        goto label_2033d0;
    }
    ctx->pc = 0x2033C8u;
    {
        const bool branch_taken_0x2033c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2033c8) {
            ctx->pc = 0x2033CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2033C8u;
            // 0x2033cc: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2033E4u;
            goto label_2033e4;
        }
    }
    ctx->pc = 0x2033D0u;
label_2033d0:
    // 0x2033d0: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x2033d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
label_2033d4:
    // 0x2033d4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2033d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_2033d8:
    // 0x2033d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2033d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2033dc:
    // 0x2033dc: 0x0  nop
    ctx->pc = 0x2033dcu;
    // NOP
label_2033e0:
    // 0x2033e0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2033e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2033e4:
    // 0x2033e4: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x2033e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_2033e8:
    // 0x2033e8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2033e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2033ec:
    // 0x2033ec: 0x8eab27e4  lw          $t3, 0x27E4($s5)
    ctx->pc = 0x2033ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_2033f0:
    // 0x2033f0: 0x245484a8  addiu       $s4, $v0, -0x7B58
    ctx->pc = 0x2033f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935720));
label_2033f4:
    // 0x2033f4: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2033f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2033f8:
    // 0x2033f8: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2033f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2033fc:
    // 0x2033fc: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2033fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_203400:
    // 0x203400: 0x24a58498  addiu       $a1, $a1, -0x7B68
    ctx->pc = 0x203400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935704));
label_203404:
    // 0x203404: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x203404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_203408:
    // 0x203408: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x203408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20340c:
    // 0x20340c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20340cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_203410:
    // 0x203410: 0x2409004f  addiu       $t1, $zero, 0x4F
    ctx->pc = 0x203410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_203414:
    // 0x203414: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x203414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_203418:
    // 0x203418: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x203418u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20341c:
    // 0x20341c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x20341cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_203420:
    // 0x203420: 0x40f809  jalr        $v0
label_203424:
    if (ctx->pc == 0x203424u) {
        ctx->pc = 0x203424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203420u;
        // 0x203424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203428u;
        goto label_203428;
    }
    ctx->pc = 0x203420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203428u);
        ctx->pc = 0x203424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203420u;
        // 0x203424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203420u, 0x203428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203428u;
label_203428:
    // 0x203428: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20342c:
    if (ctx->pc == 0x20342Cu) {
        ctx->pc = 0x20342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203428u;
        // 0x20342c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203430u;
        goto label_203430;
    }
    ctx->pc = 0x203428u;
    {
        const bool branch_taken_0x203428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203428u;
        // 0x20342c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203428) {
            ctx->pc = 0x20343Cu;
            goto label_20343c;
        }
    }
    ctx->pc = 0x203430u;
label_203430:
    // 0x203430: 0xc0733e2  jal         func_1CCF88
label_203434:
    if (ctx->pc == 0x203434u) {
        ctx->pc = 0x203434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203430u;
        // 0x203434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203438u;
        goto label_203438;
    }
    ctx->pc = 0x203430u;
    SET_GPR_U32(ctx, 31, 0x203438u);
    ctx->pc = 0x203434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203430u;
    // 0x203434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x203430u, 0x203438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203438u;
label_203438:
    // 0x203438: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x203438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_20343c:
    // 0x20343c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x20343cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_203440:
    // 0x203440: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x203440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_203444:
    // 0x203444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203448:
    // 0x203448: 0xc05e602  jal         func_179808
label_20344c:
    if (ctx->pc == 0x20344Cu) {
        ctx->pc = 0x20344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203448u;
        // 0x20344c: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203450u;
        goto label_203450;
    }
    ctx->pc = 0x203448u;
    SET_GPR_U32(ctx, 31, 0x203450u);
    ctx->pc = 0x20344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203448u;
    // 0x20344c: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x203448u, 0x203450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203450u;
label_203450:
    // 0x203450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x203450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_203454:
    // 0x203454: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x203454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_203458:
    // 0x203458: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x203458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_20345c:
    // 0x20345c: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x20345cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_203460:
    // 0x203460: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x203460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_203464:
    // 0x203464: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x203464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203468:
    // 0x203468: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x203468u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20346c:
    // 0x20346c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x20346cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_203470:
    // 0x203470: 0x8c47d310  lw          $a3, -0x2CF0($v0)
    ctx->pc = 0x203470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_203474:
    // 0x203474: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x203474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203478:
    // 0x203478: 0x85640068  lh          $a0, 0x68($t3)
    ctx->pc = 0x203478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 104)));
label_20347c:
    // 0x20347c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20347cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203480:
    // 0x203480: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x203480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
label_203484:
    // 0x203484: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x203484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_203488:
    // 0x203488: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x203488u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20348c:
    // 0x20348c: 0x8d63006c  lw          $v1, 0x6C($t3)
    ctx->pc = 0x20348cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 108)));
label_203490:
    // 0x203490: 0x60f809  jalr        $v1
label_203494:
    if (ctx->pc == 0x203494u) {
        ctx->pc = 0x203494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203490u;
        // 0x203494: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203498u;
        goto label_203498;
    }
    ctx->pc = 0x203490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203498u);
        ctx->pc = 0x203494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203490u;
        // 0x203494: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203490u, 0x203498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203498u;
label_203498:
    // 0x203498: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x203498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20349c:
    // 0x20349c: 0x8c515024  lw          $s1, 0x5024($v0)
    ctx->pc = 0x20349cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_2034a0:
    // 0x2034a0: 0x8e300128  lw          $s0, 0x128($s1)
    ctx->pc = 0x2034a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_2034a4:
    // 0x2034a4: 0x860200b8  lh          $v0, 0xB8($s0)
    ctx->pc = 0x2034a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 184)));
label_2034a8:
    // 0x2034a8: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x2034a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_2034ac:
    // 0x2034ac: 0xc081022  jal         func_204088
label_2034b0:
    if (ctx->pc == 0x2034B0u) {
        ctx->pc = 0x2034B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034ACu;
        // 0x2034b0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2034B4u;
        goto label_2034b4;
    }
    ctx->pc = 0x2034ACu;
    SET_GPR_U32(ctx, 31, 0x2034B4u);
    ctx->pc = 0x2034B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034ACu;
    // 0x2034b0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x2034ACu, 0x2034B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034B4u;
label_2034b4:
    // 0x2034b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2034b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2034b8:
    // 0x2034b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2034b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2034bc:
    // 0x2034bc: 0x60f809  jalr        $v1
label_2034c0:
    if (ctx->pc == 0x2034C0u) {
        ctx->pc = 0x2034C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034BCu;
        // 0x2034c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2034C4u;
        goto label_2034c4;
    }
    ctx->pc = 0x2034BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2034C4u);
        ctx->pc = 0x2034C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034BCu;
        // 0x2034c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2034BCu, 0x2034C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2034C4u;
label_2034c4:
    // 0x2034c4: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x2034c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_2034c8:
    // 0x2034c8: 0xc073478  jal         func_1CD1E0
label_2034cc:
    if (ctx->pc == 0x2034CCu) {
        ctx->pc = 0x2034CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034C8u;
        // 0x2034cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2034D0u;
        goto label_2034d0;
    }
    ctx->pc = 0x2034C8u;
    SET_GPR_U32(ctx, 31, 0x2034D0u);
    ctx->pc = 0x2034CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034C8u;
    // 0x2034cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x2034C8u, 0x2034D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034D0u;
label_2034d0:
    // 0x2034d0: 0xc080ec6  jal         func_203B18
label_2034d4:
    if (ctx->pc == 0x2034D4u) {
        ctx->pc = 0x2034D8u;
        goto label_2034d8;
    }
    ctx->pc = 0x2034D0u;
    SET_GPR_U32(ctx, 31, 0x2034D8u);
    ctx->pc = 0x203B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B18u, 0x2034D0u, 0x2034D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034D8u;
label_2034d8:
    // 0x2034d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2034d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2034dc:
    // 0x2034dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2034dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2034e0:
    // 0x2034e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2034e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2034e4:
    // 0x2034e4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x2034e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_2034e8:
    // 0x2034e8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2034e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2034ec:
    // 0x2034ec: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2034ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2034f0:
    // 0x2034f0: 0x24a584e8  addiu       $a1, $a1, -0x7B18
    ctx->pc = 0x2034f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935784));
label_2034f4:
    // 0x2034f4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2034f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2034f8:
    // 0x2034f8: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2034f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2034fc:
    // 0x2034fc: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2034fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_203500:
    // 0x203500: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x203500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_203504:
    // 0x203504: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x203504u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_203508:
    // 0x203508: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x203508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20350c:
    // 0x20350c: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20350cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_203510:
    // 0x203510: 0x24090057  addiu       $t1, $zero, 0x57
    ctx->pc = 0x203510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_203514:
    // 0x203514: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x203514u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203518:
    // 0x203518: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x203518u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20351c:
    // 0x20351c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20351cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_203520:
    // 0x203520: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x203520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_203524:
    // 0x203524: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x203524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_203528:
    // 0x203528: 0x40f809  jalr        $v0
label_20352c:
    if (ctx->pc == 0x20352Cu) {
        ctx->pc = 0x20352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203528u;
        // 0x20352c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203530u;
        goto label_203530;
    }
    ctx->pc = 0x203528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x203530u);
        ctx->pc = 0x20352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203528u;
        // 0x20352c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203528u, 0x203530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203530u;
label_203530:
    // 0x203530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_203534:
    if (ctx->pc == 0x203534u) {
        ctx->pc = 0x203534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203530u;
        // 0x203534: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x203538u;
        goto label_203538;
    }
    ctx->pc = 0x203530u;
    {
        const bool branch_taken_0x203530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203530u;
        // 0x203534: 0xc7ac0018  lwc1        $f12, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203530) {
            ctx->pc = 0x203544u;
            goto label_203544;
        }
    }
    ctx->pc = 0x203538u;
label_203538:
    // 0x203538: 0xc074fbc  jal         func_1D3EF0
label_20353c:
    if (ctx->pc == 0x20353Cu) {
        ctx->pc = 0x20353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203538u;
        // 0x20353c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203540u;
        goto label_203540;
    }
    ctx->pc = 0x203538u;
    SET_GPR_U32(ctx, 31, 0x203540u);
    ctx->pc = 0x20353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203538u;
    // 0x20353c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x203538u, 0x203540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203540u;
label_203540:
    // 0x203540: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x203540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_203544:
    // 0x203544: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x203544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_203548:
    // 0x203548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20354c:
    // 0x20354c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20354cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203550:
    // 0x203550: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x203550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_203554:
    // 0x203554: 0xc075044  jal         func_1D4110
label_203558:
    if (ctx->pc == 0x203558u) {
        ctx->pc = 0x203558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203554u;
        // 0x203558: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20355Cu;
        goto label_20355c;
    }
    ctx->pc = 0x203554u;
    SET_GPR_U32(ctx, 31, 0x20355Cu);
    ctx->pc = 0x203558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203554u;
    // 0x203558: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x203554u, 0x20355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20355Cu;
label_20355c:
    // 0x20355c: 0xc080ebe  jal         func_203AF8
label_203560:
    if (ctx->pc == 0x203560u) {
        ctx->pc = 0x203560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20355Cu;
        // 0x203560: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203564u;
        goto label_203564;
    }
    ctx->pc = 0x20355Cu;
    SET_GPR_U32(ctx, 31, 0x203564u);
    ctx->pc = 0x203560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20355Cu;
    // 0x203560: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x20355Cu, 0x203564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203564u;
label_203564:
    // 0x203564: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x203564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_203568:
    // 0x203568: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x203568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20356c:
    // 0x20356c: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x20356cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_203570:
    // 0x203570: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x203570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
label_203574:
    // 0x203574: 0xac710088  sw          $s1, 0x88($v1)
    ctx->pc = 0x203574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 17));
label_203578:
    // 0x203578: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x203578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_20357c:
    // 0x20357c: 0xc067b9c  jal         func_19EE70
label_203580:
    if (ctx->pc == 0x203580u) {
        ctx->pc = 0x203580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20357Cu;
        // 0x203580: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203584u;
        goto label_203584;
    }
    ctx->pc = 0x20357Cu;
    SET_GPR_U32(ctx, 31, 0x203584u);
    ctx->pc = 0x203580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20357Cu;
    // 0x203580: 0xac450094  sw          $a1, 0x94($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x20357Cu, 0x203584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203584u;
label_203584:
    // 0x203584: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x203584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_203588:
    // 0x203588: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x203588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_20358c:
    // 0x20358c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x20358cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_203590:
    // 0x203590: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x203590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_203594:
    // 0x203594: 0x8c70d328  lw          $s0, -0x2CD8($v1)
    ctx->pc = 0x203594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955816)));
label_203598:
    // 0x203598: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20359c:
    // 0x20359c: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x20359cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2035a0:
    // 0x2035a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2035a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2035a4:
    // 0x2035a4: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x2035a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_2035a8:
    // 0x2035a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2035a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2035ac:
    // 0x2035ac: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2035acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2035b0:
    // 0x2035b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2035b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2035b4:
    // 0x2035b4: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2035b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2035b8:
    // 0x2035b8: 0xc07508c  jal         func_1D4230
label_2035bc:
    if (ctx->pc == 0x2035BCu) {
        ctx->pc = 0x2035BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035B8u;
        // 0x2035bc: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2035C0u;
        goto label_2035c0;
    }
    ctx->pc = 0x2035B8u;
    SET_GPR_U32(ctx, 31, 0x2035C0u);
    ctx->pc = 0x2035BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035B8u;
    // 0x2035bc: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x2035B8u, 0x2035C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035C0u;
label_2035c0:
    // 0x2035c0: 0xc067b9c  jal         func_19EE70
label_2035c4:
    if (ctx->pc == 0x2035C4u) {
        ctx->pc = 0x2035C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035C0u;
        // 0x2035c4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2035C8u;
        goto label_2035c8;
    }
    ctx->pc = 0x2035C0u;
    SET_GPR_U32(ctx, 31, 0x2035C8u);
    ctx->pc = 0x2035C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035C0u;
    // 0x2035c4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2035C0u, 0x2035C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035C8u;
label_2035c8:
    // 0x2035c8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x2035c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_2035cc:
    // 0x2035cc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2035ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2035d0:
    // 0x2035d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2035d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2035d4:
    // 0x2035d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2035d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2035d8:
    // 0x2035d8: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x2035d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2035dc:
    // 0x2035dc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2035dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2035e0:
    // 0x2035e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2035e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2035e4:
    // 0x2035e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2035e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2035e8:
    // 0x2035e8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2035e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2035ec:
    // 0x2035ec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2035ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2035f0:
    // 0x2035f0: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x2035f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2035f4:
    // 0x2035f4: 0xc07508c  jal         func_1D4230
label_2035f8:
    if (ctx->pc == 0x2035F8u) {
        ctx->pc = 0x2035F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035F4u;
        // 0x2035f8: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2035FCu;
        goto label_2035fc;
    }
    ctx->pc = 0x2035F4u;
    SET_GPR_U32(ctx, 31, 0x2035FCu);
    ctx->pc = 0x2035F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035F4u;
    // 0x2035f8: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x2035F4u, 0x2035FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035FCu;
label_2035fc:
    // 0x2035fc: 0x8e45008c  lw          $a1, 0x8C($s2)
    ctx->pc = 0x2035fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_203600:
    // 0x203600: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x203600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203604:
    // 0x203604: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x203604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_203608:
    // 0x203608: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x203608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_20360c:
    // 0x20360c: 0x60f809  jalr        $v1
label_203610:
    if (ctx->pc == 0x203610u) {
        ctx->pc = 0x203610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20360Cu;
        // 0x203610: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203614u;
        goto label_203614;
    }
    ctx->pc = 0x20360Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203614u);
        ctx->pc = 0x203610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20360Cu;
        // 0x203610: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20360Cu, 0x203614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203614u;
label_203614:
    // 0x203614: 0xc080ebe  jal         func_203AF8
label_203618:
    if (ctx->pc == 0x203618u) {
        ctx->pc = 0x20361Cu;
        goto label_20361c;
    }
    ctx->pc = 0x203614u;
    SET_GPR_U32(ctx, 31, 0x20361Cu);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x203614u, 0x20361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20361Cu;
label_20361c:
    // 0x20361c: 0xc080ec2  jal         func_203B08
label_203620:
    if (ctx->pc == 0x203620u) {
        ctx->pc = 0x203620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20361Cu;
        // 0x203620: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x203624u;
        goto label_203624;
    }
    ctx->pc = 0x20361Cu;
    SET_GPR_U32(ctx, 31, 0x203624u);
    ctx->pc = 0x203620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20361Cu;
    // 0x203620: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x20361Cu, 0x203624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203624u;
label_203624:
    // 0x203624: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x203624u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_203628:
    // 0x203628: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x203628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20362c:
    // 0x20362c: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x20362cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_203630:
    // 0x203630: 0x24a584f8  addiu       $a1, $a1, -0x7B08
    ctx->pc = 0x203630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935800));
label_203634:
    // 0x203634: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x203634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_203638:
    // 0x203638: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x203638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20363c:
    // 0x20363c: 0xe675000c  swc1        $f21, 0xC($s3)
    ctx->pc = 0x20363cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_203640:
    // 0x203640: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x203640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_203644:
    // 0x203644: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x203644u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_203648:
    // 0x203648: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x203648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20364c:
    // 0x20364c: 0x24090061  addiu       $t1, $zero, 0x61
    ctx->pc = 0x20364cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_203650:
    // 0x203650: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x203650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203654:
    // 0x203654: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x203654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_203658:
    // 0x203658: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x203658u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20365c:
    // 0x20365c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20365cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_203660:
    // 0x203660: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x203660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_203664:
    // 0x203664: 0x40f809  jalr        $v0
label_203668:
    if (ctx->pc == 0x203668u) {
        ctx->pc = 0x203668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203664u;
        // 0x203668: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20366Cu;
        goto label_20366c;
    }
    ctx->pc = 0x203664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20366Cu);
        ctx->pc = 0x203668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203664u;
        // 0x203668: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203664u, 0x20366Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20366Cu;
label_20366c:
    // 0x20366c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_203670:
    if (ctx->pc == 0x203670u) {
        ctx->pc = 0x203670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20366Cu;
        // 0x203670: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203674u;
        goto label_203674;
    }
    ctx->pc = 0x20366Cu;
    {
        const bool branch_taken_0x20366c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20366c) {
            ctx->pc = 0x203670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20366Cu;
            // 0x203670: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203680u;
            goto label_203680;
        }
    }
    ctx->pc = 0x203674u;
label_203674:
    // 0x203674: 0xc073a9c  jal         func_1CEA70
label_203678:
    if (ctx->pc == 0x203678u) {
        ctx->pc = 0x203678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203674u;
        // 0x203678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20367Cu;
        goto label_20367c;
    }
    ctx->pc = 0x203674u;
    SET_GPR_U32(ctx, 31, 0x20367Cu);
    ctx->pc = 0x203678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203674u;
    // 0x203678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x203674u, 0x20367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20367Cu;
label_20367c:
    // 0x20367c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20367cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_203680:
    // 0x203680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203684:
    // 0x203684: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x203684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203688:
    // 0x203688: 0xc073ad0  jal         func_1CEB40
label_20368c:
    if (ctx->pc == 0x20368Cu) {
        ctx->pc = 0x20368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203688u;
        // 0x20368c: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203690u;
        goto label_203690;
    }
    ctx->pc = 0x203688u;
    SET_GPR_U32(ctx, 31, 0x203690u);
    ctx->pc = 0x20368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203688u;
    // 0x20368c: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x203688u, 0x203690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203690u;
label_203690:
    // 0x203690: 0xc067b9c  jal         func_19EE70
label_203694:
    if (ctx->pc == 0x203694u) {
        ctx->pc = 0x203694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203690u;
        // 0x203694: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203698u;
        goto label_203698;
    }
    ctx->pc = 0x203690u;
    SET_GPR_U32(ctx, 31, 0x203698u);
    ctx->pc = 0x203694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203690u;
    // 0x203694: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x203690u, 0x203698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203698u;
label_203698:
    // 0x203698: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x203698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_20369c:
    // 0x20369c: 0xc073b0a  jal         func_1CEC28
label_2036a0:
    if (ctx->pc == 0x2036A0u) {
        ctx->pc = 0x2036A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20369Cu;
        // 0x2036a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036A4u;
        goto label_2036a4;
    }
    ctx->pc = 0x20369Cu;
    SET_GPR_U32(ctx, 31, 0x2036A4u);
    ctx->pc = 0x2036A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20369Cu;
    // 0x2036a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x20369Cu, 0x2036A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036A4u;
label_2036a4:
    // 0x2036a4: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x2036a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_2036a8:
    // 0x2036a8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2036a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2036ac:
    // 0x2036ac: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2036acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2036b0:
    // 0x2036b0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2036b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2036b4:
    // 0x2036b4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2036b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2036b8:
    // 0x2036b8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2036b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2036bc:
    // 0x2036bc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2036bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2036c0:
    // 0x2036c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2036c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2036c4:
    // 0x2036c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2036c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2036c8:
    // 0x2036c8: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2036c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2036cc:
    // 0x2036cc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2036ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2036d0:
    // 0x2036d0: 0x3e00008  jr          $ra
label_2036d4:
    if (ctx->pc == 0x2036D4u) {
        ctx->pc = 0x2036D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036D0u;
        // 0x2036d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2036D8u;
        goto label_fallthrough_0x2036d0;
    }
    ctx->pc = 0x2036D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2036D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036D0u;
        // 0x2036d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2036D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2036d0:
    ctx->pc = 0x2036D8u;
}
