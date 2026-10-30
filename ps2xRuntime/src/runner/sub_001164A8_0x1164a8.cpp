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

// Function: sub_001164A8
// Address: 0x1164a8 - 0x1167b8
void sub_001164A8_0x1164a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001164A8_0x1164a8");
#endif

    switch (ctx->pc) {
        case 0x1164a8u: goto label_1164a8;
        case 0x1164acu: goto label_1164ac;
        case 0x1164b0u: goto label_1164b0;
        case 0x1164b4u: goto label_1164b4;
        case 0x1164b8u: goto label_1164b8;
        case 0x1164bcu: goto label_1164bc;
        case 0x1164c0u: goto label_1164c0;
        case 0x1164c4u: goto label_1164c4;
        case 0x1164c8u: goto label_1164c8;
        case 0x1164ccu: goto label_1164cc;
        case 0x1164d0u: goto label_1164d0;
        case 0x1164d4u: goto label_1164d4;
        case 0x1164d8u: goto label_1164d8;
        case 0x1164dcu: goto label_1164dc;
        case 0x1164e0u: goto label_1164e0;
        case 0x1164e4u: goto label_1164e4;
        case 0x1164e8u: goto label_1164e8;
        case 0x1164ecu: goto label_1164ec;
        case 0x1164f0u: goto label_1164f0;
        case 0x1164f4u: goto label_1164f4;
        case 0x1164f8u: goto label_1164f8;
        case 0x1164fcu: goto label_1164fc;
        case 0x116500u: goto label_116500;
        case 0x116504u: goto label_116504;
        case 0x116508u: goto label_116508;
        case 0x11650cu: goto label_11650c;
        case 0x116510u: goto label_116510;
        case 0x116514u: goto label_116514;
        case 0x116518u: goto label_116518;
        case 0x11651cu: goto label_11651c;
        case 0x116520u: goto label_116520;
        case 0x116524u: goto label_116524;
        case 0x116528u: goto label_116528;
        case 0x11652cu: goto label_11652c;
        case 0x116530u: goto label_116530;
        case 0x116534u: goto label_116534;
        case 0x116538u: goto label_116538;
        case 0x11653cu: goto label_11653c;
        case 0x116540u: goto label_116540;
        case 0x116544u: goto label_116544;
        case 0x116548u: goto label_116548;
        case 0x11654cu: goto label_11654c;
        case 0x116550u: goto label_116550;
        case 0x116554u: goto label_116554;
        case 0x116558u: goto label_116558;
        case 0x11655cu: goto label_11655c;
        case 0x116560u: goto label_116560;
        case 0x116564u: goto label_116564;
        case 0x116568u: goto label_116568;
        case 0x11656cu: goto label_11656c;
        case 0x116570u: goto label_116570;
        case 0x116574u: goto label_116574;
        case 0x116578u: goto label_116578;
        case 0x11657cu: goto label_11657c;
        case 0x116580u: goto label_116580;
        case 0x116584u: goto label_116584;
        case 0x116588u: goto label_116588;
        case 0x11658cu: goto label_11658c;
        case 0x116590u: goto label_116590;
        case 0x116594u: goto label_116594;
        case 0x116598u: goto label_116598;
        case 0x11659cu: goto label_11659c;
        case 0x1165a0u: goto label_1165a0;
        case 0x1165a4u: goto label_1165a4;
        case 0x1165a8u: goto label_1165a8;
        case 0x1165acu: goto label_1165ac;
        case 0x1165b0u: goto label_1165b0;
        case 0x1165b4u: goto label_1165b4;
        case 0x1165b8u: goto label_1165b8;
        case 0x1165bcu: goto label_1165bc;
        case 0x1165c0u: goto label_1165c0;
        case 0x1165c4u: goto label_1165c4;
        case 0x1165c8u: goto label_1165c8;
        case 0x1165ccu: goto label_1165cc;
        case 0x1165d0u: goto label_1165d0;
        case 0x1165d4u: goto label_1165d4;
        case 0x1165d8u: goto label_1165d8;
        case 0x1165dcu: goto label_1165dc;
        case 0x1165e0u: goto label_1165e0;
        case 0x1165e4u: goto label_1165e4;
        case 0x1165e8u: goto label_1165e8;
        case 0x1165ecu: goto label_1165ec;
        case 0x1165f0u: goto label_1165f0;
        case 0x1165f4u: goto label_1165f4;
        case 0x1165f8u: goto label_1165f8;
        case 0x1165fcu: goto label_1165fc;
        case 0x116600u: goto label_116600;
        case 0x116604u: goto label_116604;
        case 0x116608u: goto label_116608;
        case 0x11660cu: goto label_11660c;
        case 0x116610u: goto label_116610;
        case 0x116614u: goto label_116614;
        case 0x116618u: goto label_116618;
        case 0x11661cu: goto label_11661c;
        case 0x116620u: goto label_116620;
        case 0x116624u: goto label_116624;
        case 0x116628u: goto label_116628;
        case 0x11662cu: goto label_11662c;
        case 0x116630u: goto label_116630;
        case 0x116634u: goto label_116634;
        case 0x116638u: goto label_116638;
        case 0x11663cu: goto label_11663c;
        case 0x116640u: goto label_116640;
        case 0x116644u: goto label_116644;
        case 0x116648u: goto label_116648;
        case 0x11664cu: goto label_11664c;
        case 0x116650u: goto label_116650;
        case 0x116654u: goto label_116654;
        case 0x116658u: goto label_116658;
        case 0x11665cu: goto label_11665c;
        case 0x116660u: goto label_116660;
        case 0x116664u: goto label_116664;
        case 0x116668u: goto label_116668;
        case 0x11666cu: goto label_11666c;
        case 0x116670u: goto label_116670;
        case 0x116674u: goto label_116674;
        case 0x116678u: goto label_116678;
        case 0x11667cu: goto label_11667c;
        case 0x116680u: goto label_116680;
        case 0x116684u: goto label_116684;
        case 0x116688u: goto label_116688;
        case 0x11668cu: goto label_11668c;
        case 0x116690u: goto label_116690;
        case 0x116694u: goto label_116694;
        case 0x116698u: goto label_116698;
        case 0x11669cu: goto label_11669c;
        case 0x1166a0u: goto label_1166a0;
        case 0x1166a4u: goto label_1166a4;
        case 0x1166a8u: goto label_1166a8;
        case 0x1166acu: goto label_1166ac;
        case 0x1166b0u: goto label_1166b0;
        case 0x1166b4u: goto label_1166b4;
        case 0x1166b8u: goto label_1166b8;
        case 0x1166bcu: goto label_1166bc;
        case 0x1166c0u: goto label_1166c0;
        case 0x1166c4u: goto label_1166c4;
        case 0x1166c8u: goto label_1166c8;
        case 0x1166ccu: goto label_1166cc;
        case 0x1166d0u: goto label_1166d0;
        case 0x1166d4u: goto label_1166d4;
        case 0x1166d8u: goto label_1166d8;
        case 0x1166dcu: goto label_1166dc;
        case 0x1166e0u: goto label_1166e0;
        case 0x1166e4u: goto label_1166e4;
        case 0x1166e8u: goto label_1166e8;
        case 0x1166ecu: goto label_1166ec;
        case 0x1166f0u: goto label_1166f0;
        case 0x1166f4u: goto label_1166f4;
        case 0x1166f8u: goto label_1166f8;
        case 0x1166fcu: goto label_1166fc;
        case 0x116700u: goto label_116700;
        case 0x116704u: goto label_116704;
        case 0x116708u: goto label_116708;
        case 0x11670cu: goto label_11670c;
        case 0x116710u: goto label_116710;
        case 0x116714u: goto label_116714;
        case 0x116718u: goto label_116718;
        case 0x11671cu: goto label_11671c;
        case 0x116720u: goto label_116720;
        case 0x116724u: goto label_116724;
        case 0x116728u: goto label_116728;
        case 0x11672cu: goto label_11672c;
        case 0x116730u: goto label_116730;
        case 0x116734u: goto label_116734;
        case 0x116738u: goto label_116738;
        case 0x11673cu: goto label_11673c;
        case 0x116740u: goto label_116740;
        case 0x116744u: goto label_116744;
        case 0x116748u: goto label_116748;
        case 0x11674cu: goto label_11674c;
        case 0x116750u: goto label_116750;
        case 0x116754u: goto label_116754;
        case 0x116758u: goto label_116758;
        case 0x11675cu: goto label_11675c;
        case 0x116760u: goto label_116760;
        case 0x116764u: goto label_116764;
        case 0x116768u: goto label_116768;
        case 0x11676cu: goto label_11676c;
        case 0x116770u: goto label_116770;
        case 0x116774u: goto label_116774;
        case 0x116778u: goto label_116778;
        case 0x11677cu: goto label_11677c;
        case 0x116780u: goto label_116780;
        case 0x116784u: goto label_116784;
        case 0x116788u: goto label_116788;
        case 0x11678cu: goto label_11678c;
        case 0x116790u: goto label_116790;
        case 0x116794u: goto label_116794;
        case 0x116798u: goto label_116798;
        case 0x11679cu: goto label_11679c;
        case 0x1167a0u: goto label_1167a0;
        case 0x1167a4u: goto label_1167a4;
        case 0x1167a8u: goto label_1167a8;
        case 0x1167acu: goto label_1167ac;
        case 0x1167b0u: goto label_1167b0;
        case 0x1167b4u: goto label_1167b4;
        default: break;
    }

    ctx->pc = 0x1164a8u;

label_1164a8:
    // 0x1164a8: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1164a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_1164ac:
    // 0x1164ac: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x1164acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_1164b0:
    // 0x1164b0: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x1164b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_1164b4:
    // 0x1164b4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1164b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1164b8:
    // 0x1164b8: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x1164b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
label_1164bc:
    // 0x1164bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1164bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1164c0:
    // 0x1164c0: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x1164c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_1164c4:
    // 0x1164c4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1164c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1164c8:
    // 0x1164c8: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x1164c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_1164cc:
    // 0x1164cc: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x1164ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_1164d0:
    // 0x1164d0: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x1164d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_1164d4:
    // 0x1164d4: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x1164d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_1164d8:
    // 0x1164d8: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x1164d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_1164dc:
    // 0x1164dc: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x1164dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_1164e0:
    // 0x1164e0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1164e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_1164e4:
    // 0x1164e4: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x1164e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_1164e8:
    // 0x1164e8: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x1164e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_1164ec:
    // 0x1164ec: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x1164ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_1164f0:
    // 0x1164f0: 0xae7e0030  sw          $fp, 0x30($s3)
    ctx->pc = 0x1164f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 30));
label_1164f4:
    // 0x1164f4: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x1164f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1164f8:
    // 0x1164f8: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x1164f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_1164fc:
    // 0x1164fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1164fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_116500:
    // 0x116500: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x116500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_116504:
    // 0x116504: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x116504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_116508:
    // 0x116508: 0x60f809  jalr        $v1
label_11650c:
    if (ctx->pc == 0x11650Cu) {
        ctx->pc = 0x11650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116508u;
        // 0x11650c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116510u;
        goto label_116510;
    }
    ctx->pc = 0x116508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x116510u);
        ctx->pc = 0x11650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116508u;
        // 0x11650c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116508u, 0x116510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116510u;
label_116510:
    // 0x116510: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x116510u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_116514:
    // 0x116514: 0x2406026d  addiu       $a2, $zero, 0x26D
    ctx->pc = 0x116514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
label_116518:
    // 0x116518: 0x3c60018  mult        $zero, $fp, $a2
    ctx->pc = 0x116518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_11651c:
    // 0x11651c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x11651cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_116520:
    // 0x116520: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x116520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_116524:
    // 0x116524: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x116524u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_116528:
    // 0x116528: 0x24090609  addiu       $t1, $zero, 0x609
    ctx->pc = 0x116528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1545));
label_11652c:
    // 0x11652c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11652cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116530:
    // 0x116530: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x116530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_116534:
    // 0x116534: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x116534u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116538:
    // 0x116538: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x116538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_11653c:
    // 0x11653c: 0x3012  mflo        $a2
    ctx->pc = 0x11653cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_116540:
    // 0x116540: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x116540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_116544:
    // 0x116544: 0x24a58188  addiu       $a1, $a1, -0x7E78
    ctx->pc = 0x116544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
label_116548:
    // 0x116548: 0x25088198  addiu       $t0, $t0, -0x7E68
    ctx->pc = 0x116548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934936));
label_11654c:
    // 0x11654c: 0x40f809  jalr        $v0
label_116550:
    if (ctx->pc == 0x116550u) {
        ctx->pc = 0x116550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11654Cu;
        // 0x116550: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116554u;
        goto label_116554;
    }
    ctx->pc = 0x11654Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116554u);
        ctx->pc = 0x116550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11654Cu;
        // 0x116550: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11654Cu, 0x116554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116554u;
label_116554:
    // 0x116554: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x116554u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_116558:
    // 0x116558: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x116558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_11655c:
    // 0x11655c: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x11655cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_116560:
    // 0x116560: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x116560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_116564:
    // 0x116564: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x116564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_116568:
    // 0x116568: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x116568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_11656c:
    // 0x11656c: 0x60f809  jalr        $v1
label_116570:
    if (ctx->pc == 0x116570u) {
        ctx->pc = 0x116570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11656Cu;
        // 0x116570: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116574u;
        goto label_116574;
    }
    ctx->pc = 0x11656Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x116574u);
        ctx->pc = 0x116570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11656Cu;
        // 0x116570: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11656Cu, 0x116574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116574u;
label_116574:
    // 0x116574: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x116574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_116578:
    // 0x116578: 0x3c2001b  divu        $zero, $fp, $v0
    ctx->pc = 0x116578u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,30); } }
label_11657c:
    // 0x11657c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_116580:
    if (ctx->pc == 0x116580u) {
        ctx->pc = 0x116580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11657Cu;
        // 0x116580: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x116584u;
        goto label_116584;
    }
    ctx->pc = 0x11657Cu;
    {
        const bool branch_taken_0x11657c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11657c) {
            ctx->pc = 0x116580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11657Cu;
            // 0x116580: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x116584u;
            goto label_116584;
        }
    }
    ctx->pc = 0x116584u;
label_116584:
    // 0x116584: 0x2012  mflo        $a0
    ctx->pc = 0x116584u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_116588:
    // 0x116588: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
label_11658c:
    if (ctx->pc == 0x11658Cu) {
        ctx->pc = 0x11658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116588u;
        // 0x11658c: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x116590u;
        goto label_116590;
    }
    ctx->pc = 0x116588u;
    {
        const bool branch_taken_0x116588 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x11658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116588u;
        // 0x11658c: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116588) {
            ctx->pc = 0x1165A4u;
            goto label_1165a4;
        }
    }
    ctx->pc = 0x116590u;
label_116590:
    // 0x116590: 0x449e0800  mtc1        $fp, $f1
    ctx->pc = 0x116590u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_116594:
    // 0x116594: 0x0  nop
    ctx->pc = 0x116594u;
    // NOP
label_116598:
    // 0x116598: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x116598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_11659c:
    // 0x11659c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1165a0:
    if (ctx->pc == 0x1165A0u) {
        ctx->pc = 0x1165A4u;
        goto label_1165a4;
    }
    ctx->pc = 0x11659Cu;
    {
        const bool branch_taken_0x11659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11659c) {
            ctx->pc = 0x1165BCu;
            goto label_1165bc;
        }
    }
    ctx->pc = 0x1165A4u;
label_1165a4:
    // 0x1165a4: 0x1e1842  srl         $v1, $fp, 1
    ctx->pc = 0x1165a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_1165a8:
    // 0x1165a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1165a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1165ac:
    // 0x1165ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1165acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1165b0:
    // 0x1165b0: 0x0  nop
    ctx->pc = 0x1165b0u;
    // NOP
label_1165b4:
    // 0x1165b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1165b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1165b8:
    // 0x1165b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1165b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1165bc:
    // 0x1165bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1165bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1165c0:
    // 0x1165c0: 0x0  nop
    ctx->pc = 0x1165c0u;
    // NOP
label_1165c4:
    // 0x1165c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1165c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1165c8:
    // 0x1165c8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1165c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1165cc:
    // 0x1165cc: 0x27a40017  addiu       $a0, $sp, 0x17
    ctx->pc = 0x1165ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 23));
label_1165d0:
    // 0x1165d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1165d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1165d4:
    // 0x1165d4: 0x240600e9  addiu       $a2, $zero, 0xE9
    ctx->pc = 0x1165d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
label_1165d8:
    // 0x1165d8: 0x244981c8  addiu       $t1, $v0, -0x7E38
    ctx->pc = 0x1165d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934984));
label_1165dc:
    // 0x1165dc: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x1165dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1165e0:
    // 0x1165e0: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x1165e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1165e4:
    // 0x1165e4: 0x6927000f  ldl         $a3, 0xF($t1)
    ctx->pc = 0x1165e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1165e8:
    // 0x1165e8: 0x6d270008  ldr         $a3, 0x8($t1)
    ctx->pc = 0x1165e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1165ec:
    // 0x1165ec: 0x89280013  lwl         $t0, 0x13($t1)
    ctx->pc = 0x1165ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_1165f0:
    // 0x1165f0: 0x99280010  lwr         $t0, 0x10($t1)
    ctx->pc = 0x1165f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_1165f4:
    // 0x1165f4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1165f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1165f8:
    // 0x1165f8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1165f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1165fc:
    // 0x1165fc: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x1165fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_116600:
    // 0x116600: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x116600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_116604:
    // 0x116604: 0xaba80013  swl         $t0, 0x13($sp)
    ctx->pc = 0x116604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_116608:
    // 0x116608: 0xbba80010  swr         $t0, 0x10($sp)
    ctx->pc = 0x116608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_11660c:
    // 0x11660c: 0x81230014  lb          $v1, 0x14($t1)
    ctx->pc = 0x11660cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 20)));
label_116610:
    // 0x116610: 0x81270015  lb          $a3, 0x15($t1)
    ctx->pc = 0x116610u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 21)));
label_116614:
    // 0x116614: 0x81280016  lb          $t0, 0x16($t1)
    ctx->pc = 0x116614u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 22)));
label_116618:
    // 0x116618: 0xa3a30014  sb          $v1, 0x14($sp)
    ctx->pc = 0x116618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 3));
label_11661c:
    // 0x11661c: 0xa3a70015  sb          $a3, 0x15($sp)
    ctx->pc = 0x11661cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 7));
label_116620:
    // 0x116620: 0xa3a80016  sb          $t0, 0x16($sp)
    ctx->pc = 0x116620u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 8));
label_116624:
    // 0x116624: 0x0  nop
    ctx->pc = 0x116624u;
    // NOP
label_116628:
    // 0x116628: 0x0  nop
    ctx->pc = 0x116628u;
    // NOP
label_11662c:
    // 0x11662c: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x11662cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_116630:
    // 0x116630: 0xc10c1fa  jal         func_4307E8
label_116634:
    if (ctx->pc == 0x116634u) {
        ctx->pc = 0x116634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116630u;
        // 0x116634: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116638u;
        goto label_116638;
    }
    ctx->pc = 0x116630u;
    SET_GPR_U32(ctx, 31, 0x116638u);
    ctx->pc = 0x116634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116630u;
    // 0x116634: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x116630u, 0x116638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116638u;
label_116638:
    // 0x116638: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x116638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11663c:
    // 0x11663c: 0xc10c3ac  jal         func_430EB0
label_116640:
    if (ctx->pc == 0x116640u) {
        ctx->pc = 0x116640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11663Cu;
        // 0x116640: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116644u;
        goto label_116644;
    }
    ctx->pc = 0x11663Cu;
    SET_GPR_U32(ctx, 31, 0x116644u);
    ctx->pc = 0x116640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11663Cu;
    // 0x116640: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x11663Cu, 0x116644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116644u;
label_116644:
    // 0x116644: 0x13c0004d  beqz        $fp, . + 4 + (0x4D << 2)
label_116648:
    if (ctx->pc == 0x116648u) {
        ctx->pc = 0x116648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116644u;
        // 0x116648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11664Cu;
        goto label_11664c;
    }
    ctx->pc = 0x116644u;
    {
        const bool branch_taken_0x116644 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x116648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116644u;
        // 0x116648: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116644) {
            ctx->pc = 0x11677Cu;
            goto label_11677c;
        }
    }
    ctx->pc = 0x11664Cu;
label_11664c:
    // 0x11664c: 0x3a42021  addu        $a0, $sp, $a0
    ctx->pc = 0x11664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_116650:
    // 0x116650: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_116654:
    // 0x116654: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x116654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_116658:
    // 0x116658: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x116658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
label_11665c:
    // 0x11665c: 0x2402026d  addiu       $v0, $zero, 0x26D
    ctx->pc = 0x11665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
label_116660:
    // 0x116660: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x116660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_116664:
    // 0x116664: 0x2428818  mult        $s1, $s2, $v0
    ctx->pc = 0x116664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_116668:
    // 0x116668: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x116668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_11666c:
    // 0x11666c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11666cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116670:
    // 0x116670: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x116670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_116674:
    // 0x116674: 0x0  nop
    ctx->pc = 0x116674u;
    // NOP
label_116678:
    // 0x116678: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x116678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_11667c:
    // 0x11667c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x11667cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_116680:
    // 0x116680: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x116680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_116684:
    // 0x116684: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x116684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_116688:
    // 0x116688: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x116688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_11668c:
    // 0x11668c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_116690:
    // 0x116690: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x116690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_116694:
    // 0x116694: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x116694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_116698:
    // 0x116698: 0x24c6aaac  addiu       $a2, $a2, -0x5554
    ctx->pc = 0x116698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945452));
label_11669c:
    // 0x11669c: 0x66a821  addu        $s5, $v1, $a2
    ctx->pc = 0x11669cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1166a0:
    // 0x1166a0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1166a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1166a4:
    // 0x1166a4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1166a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1166a8:
    // 0x1166a8: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x1166a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1166ac:
    // 0x1166ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1166acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1166b0:
    // 0x1166b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1166b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1166b4:
    // 0x1166b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1166b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1166b8:
    // 0x1166b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1166b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1166bc:
    // 0x1166bc: 0xa0470002  sb          $a3, 0x2($v0)
    ctx->pc = 0x1166bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
label_1166c0:
    // 0x1166c0: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x1166c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1166c4:
    // 0x1166c4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1166c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1166c8:
    // 0x1166c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1166c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1166cc:
    // 0x1166cc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1166ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1166d0:
    // 0x1166d0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1166d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1166d4:
    // 0x1166d4: 0x0  nop
    ctx->pc = 0x1166d4u;
    // NOP
label_1166d8:
    // 0x1166d8: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x1166d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_1166dc:
    // 0x1166dc: 0x250581e0  addiu       $a1, $t0, -0x7E20
    ctx->pc = 0x1166dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935008));
label_1166e0:
    // 0x1166e0: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x1166e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1166e4:
    // 0x1166e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1166e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1166e8:
    // 0x1166e8: 0xc10ca28  jal         func_4328A0
label_1166ec:
    if (ctx->pc == 0x1166ECu) {
        ctx->pc = 0x1166ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166E8u;
        // 0x1166ec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1166F0u;
        goto label_1166f0;
    }
    ctx->pc = 0x1166E8u;
    SET_GPR_U32(ctx, 31, 0x1166F0u);
    ctx->pc = 0x1166ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166E8u;
    // 0x1166ec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x1166E8u, 0x1166F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166F0u;
label_1166f0:
    // 0x1166f0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x1166f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_1166f4:
    // 0x1166f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1166f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1166f8:
    // 0x1166f8: 0xc050fda  jal         func_143F68
label_1166fc:
    if (ctx->pc == 0x1166FCu) {
        ctx->pc = 0x1166FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166F8u;
        // 0x1166fc: 0x252491e0  addiu       $a0, $t1, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116700u;
        goto label_116700;
    }
    ctx->pc = 0x1166F8u;
    SET_GPR_U32(ctx, 31, 0x116700u);
    ctx->pc = 0x1166FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166F8u;
    // 0x1166fc: 0x252491e0  addiu       $a0, $t1, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1166F8u, 0x116700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116700u;
label_116700:
    // 0x116700: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x116700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_116704:
    // 0x116704: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x116704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116708:
    // 0x116708: 0xc04436c  jal         func_110DB0
label_11670c:
    if (ctx->pc == 0x11670Cu) {
        ctx->pc = 0x11670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116708u;
        // 0x11670c: 0x8c64aa84  lw          $a0, -0x557C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116710u;
        goto label_116710;
    }
    ctx->pc = 0x116708u;
    SET_GPR_U32(ctx, 31, 0x116710u);
    ctx->pc = 0x11670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116708u;
    // 0x11670c: 0x8c64aa84  lw          $a0, -0x557C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x116708u, 0x116710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116710u;
label_116710:
    // 0x116710: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_116714:
    if (ctx->pc == 0x116714u) {
        ctx->pc = 0x116714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116710u;
        // 0x116714: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116718u;
        goto label_116718;
    }
    ctx->pc = 0x116710u;
    {
        const bool branch_taken_0x116710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116710) {
            ctx->pc = 0x116714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116710u;
            // 0x116714: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116734u;
            goto label_116734;
        }
    }
    ctx->pc = 0x116718u;
label_116718:
    // 0x116718: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x116718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_11671c:
    // 0x11671c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x11671cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_116720:
    // 0x116720: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x116720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_116724:
    // 0x116724: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x116724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_116728:
    // 0x116728: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x116728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_11672c:
    // 0x11672c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11672cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_116730:
    // 0x116730: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x116730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_116734:
    // 0x116734: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_116738:
    if (ctx->pc == 0x116738u) {
        ctx->pc = 0x116738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116734u;
        // 0x116738: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11673Cu;
        goto label_11673c;
    }
    ctx->pc = 0x116734u;
    {
        const bool branch_taken_0x116734 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x116738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116734u;
        // 0x116738: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116734) {
            ctx->pc = 0x116748u;
            goto label_116748;
        }
    }
    ctx->pc = 0x11673Cu;
label_11673c:
    // 0x11673c: 0x2a020037  slti        $v0, $s0, 0x37
    ctx->pc = 0x11673cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)55) ? 1 : 0);
label_116740:
    // 0x116740: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_116744:
    if (ctx->pc == 0x116744u) {
        ctx->pc = 0x116744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116740u;
        // 0x116744: 0x3c080055  lui         $t0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116748u;
        goto label_116748;
    }
    ctx->pc = 0x116740u;
    {
        const bool branch_taken_0x116740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116740u;
        // 0x116744: 0x3c080055  lui         $t0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116740) {
            ctx->pc = 0x1166D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1166d8;
        }
    }
    ctx->pc = 0x116748u;
label_116748:
    // 0x116748: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x116748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_11674c:
    // 0x11674c: 0x28a200cf  slti        $v0, $a1, 0xCF
    ctx->pc = 0x11674cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)207) ? 1 : 0);
label_116750:
    // 0x116750: 0x5440ffc9  bnel        $v0, $zero, . + 4 + (-0x37 << 2)
label_116754:
    if (ctx->pc == 0x116754u) {
        ctx->pc = 0x116754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116750u;
        // 0x116754: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116758u;
        goto label_116758;
    }
    ctx->pc = 0x116750u;
    {
        const bool branch_taken_0x116750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116750) {
            ctx->pc = 0x116754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116750u;
            // 0x116754: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116678;
        }
    }
    ctx->pc = 0x116758u;
label_116758:
    // 0x116758: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x116758u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_11675c:
    // 0x11675c: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x11675cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_116760:
    // 0x116760: 0x0  nop
    ctx->pc = 0x116760u;
    // NOP
label_116764:
    // 0x116764: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_116768:
    if (ctx->pc == 0x116768u) {
        ctx->pc = 0x116768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116764u;
        // 0x116768: 0x8fb20100  lw          $s2, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11676Cu;
        goto label_11676c;
    }
    ctx->pc = 0x116764u;
    {
        const bool branch_taken_0x116764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x116768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116764u;
        // 0x116768: 0x8fb20100  lw          $s2, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116764) {
            ctx->pc = 0x116770u;
            goto label_116770;
        }
    }
    ctx->pc = 0x11676Cu;
label_11676c:
    // 0x11676c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x11676cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_116770:
    // 0x116770: 0x25e102b  sltu        $v0, $s2, $fp
    ctx->pc = 0x116770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_116774:
    // 0x116774: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_116778:
    if (ctx->pc == 0x116778u) {
        ctx->pc = 0x116778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116774u;
        // 0x116778: 0x2402026d  addiu       $v0, $zero, 0x26D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11677Cu;
        goto label_11677c;
    }
    ctx->pc = 0x116774u;
    {
        const bool branch_taken_0x116774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116774u;
        // 0x116778: 0x2402026d  addiu       $v0, $zero, 0x26D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116774) {
            ctx->pc = 0x116660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116660;
        }
    }
    ctx->pc = 0x11677Cu;
label_11677c:
    // 0x11677c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x11677cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_116780:
    // 0x116780: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x116780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_116784:
    // 0x116784: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x116784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_116788:
    // 0x116788: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x116788u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_11678c:
    // 0x11678c: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x11678cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_116790:
    // 0x116790: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x116790u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_116794:
    // 0x116794: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x116794u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_116798:
    // 0x116798: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x116798u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_11679c:
    // 0x11679c: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x11679cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1167a0:
    // 0x1167a0: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1167a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1167a4:
    // 0x1167a4: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x1167a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1167a8:
    // 0x1167a8: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x1167a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1167ac:
    // 0x1167ac: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x1167acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1167b0:
    // 0x1167b0: 0x3e00008  jr          $ra
label_1167b4:
    if (ctx->pc == 0x1167B4u) {
        ctx->pc = 0x1167B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167B0u;
        // 0x1167b4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1167B8u;
        goto label_fallthrough_0x1167b0;
    }
    ctx->pc = 0x1167B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1167B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167B0u;
        // 0x1167b4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1167B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1167b0:
    ctx->pc = 0x1167B8u;
}
