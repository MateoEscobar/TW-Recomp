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

// Function: sub_00219320
// Address: 0x219320 - 0x2195e0
void sub_00219320_0x219320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219320_0x219320");
#endif

    switch (ctx->pc) {
        case 0x219320u: goto label_219320;
        case 0x219324u: goto label_219324;
        case 0x219328u: goto label_219328;
        case 0x21932cu: goto label_21932c;
        case 0x219330u: goto label_219330;
        case 0x219334u: goto label_219334;
        case 0x219338u: goto label_219338;
        case 0x21933cu: goto label_21933c;
        case 0x219340u: goto label_219340;
        case 0x219344u: goto label_219344;
        case 0x219348u: goto label_219348;
        case 0x21934cu: goto label_21934c;
        case 0x219350u: goto label_219350;
        case 0x219354u: goto label_219354;
        case 0x219358u: goto label_219358;
        case 0x21935cu: goto label_21935c;
        case 0x219360u: goto label_219360;
        case 0x219364u: goto label_219364;
        case 0x219368u: goto label_219368;
        case 0x21936cu: goto label_21936c;
        case 0x219370u: goto label_219370;
        case 0x219374u: goto label_219374;
        case 0x219378u: goto label_219378;
        case 0x21937cu: goto label_21937c;
        case 0x219380u: goto label_219380;
        case 0x219384u: goto label_219384;
        case 0x219388u: goto label_219388;
        case 0x21938cu: goto label_21938c;
        case 0x219390u: goto label_219390;
        case 0x219394u: goto label_219394;
        case 0x219398u: goto label_219398;
        case 0x21939cu: goto label_21939c;
        case 0x2193a0u: goto label_2193a0;
        case 0x2193a4u: goto label_2193a4;
        case 0x2193a8u: goto label_2193a8;
        case 0x2193acu: goto label_2193ac;
        case 0x2193b0u: goto label_2193b0;
        case 0x2193b4u: goto label_2193b4;
        case 0x2193b8u: goto label_2193b8;
        case 0x2193bcu: goto label_2193bc;
        case 0x2193c0u: goto label_2193c0;
        case 0x2193c4u: goto label_2193c4;
        case 0x2193c8u: goto label_2193c8;
        case 0x2193ccu: goto label_2193cc;
        case 0x2193d0u: goto label_2193d0;
        case 0x2193d4u: goto label_2193d4;
        case 0x2193d8u: goto label_2193d8;
        case 0x2193dcu: goto label_2193dc;
        case 0x2193e0u: goto label_2193e0;
        case 0x2193e4u: goto label_2193e4;
        case 0x2193e8u: goto label_2193e8;
        case 0x2193ecu: goto label_2193ec;
        case 0x2193f0u: goto label_2193f0;
        case 0x2193f4u: goto label_2193f4;
        case 0x2193f8u: goto label_2193f8;
        case 0x2193fcu: goto label_2193fc;
        case 0x219400u: goto label_219400;
        case 0x219404u: goto label_219404;
        case 0x219408u: goto label_219408;
        case 0x21940cu: goto label_21940c;
        case 0x219410u: goto label_219410;
        case 0x219414u: goto label_219414;
        case 0x219418u: goto label_219418;
        case 0x21941cu: goto label_21941c;
        case 0x219420u: goto label_219420;
        case 0x219424u: goto label_219424;
        case 0x219428u: goto label_219428;
        case 0x21942cu: goto label_21942c;
        case 0x219430u: goto label_219430;
        case 0x219434u: goto label_219434;
        case 0x219438u: goto label_219438;
        case 0x21943cu: goto label_21943c;
        case 0x219440u: goto label_219440;
        case 0x219444u: goto label_219444;
        case 0x219448u: goto label_219448;
        case 0x21944cu: goto label_21944c;
        case 0x219450u: goto label_219450;
        case 0x219454u: goto label_219454;
        case 0x219458u: goto label_219458;
        case 0x21945cu: goto label_21945c;
        case 0x219460u: goto label_219460;
        case 0x219464u: goto label_219464;
        case 0x219468u: goto label_219468;
        case 0x21946cu: goto label_21946c;
        case 0x219470u: goto label_219470;
        case 0x219474u: goto label_219474;
        case 0x219478u: goto label_219478;
        case 0x21947cu: goto label_21947c;
        case 0x219480u: goto label_219480;
        case 0x219484u: goto label_219484;
        case 0x219488u: goto label_219488;
        case 0x21948cu: goto label_21948c;
        case 0x219490u: goto label_219490;
        case 0x219494u: goto label_219494;
        case 0x219498u: goto label_219498;
        case 0x21949cu: goto label_21949c;
        case 0x2194a0u: goto label_2194a0;
        case 0x2194a4u: goto label_2194a4;
        case 0x2194a8u: goto label_2194a8;
        case 0x2194acu: goto label_2194ac;
        case 0x2194b0u: goto label_2194b0;
        case 0x2194b4u: goto label_2194b4;
        case 0x2194b8u: goto label_2194b8;
        case 0x2194bcu: goto label_2194bc;
        case 0x2194c0u: goto label_2194c0;
        case 0x2194c4u: goto label_2194c4;
        case 0x2194c8u: goto label_2194c8;
        case 0x2194ccu: goto label_2194cc;
        case 0x2194d0u: goto label_2194d0;
        case 0x2194d4u: goto label_2194d4;
        case 0x2194d8u: goto label_2194d8;
        case 0x2194dcu: goto label_2194dc;
        case 0x2194e0u: goto label_2194e0;
        case 0x2194e4u: goto label_2194e4;
        case 0x2194e8u: goto label_2194e8;
        case 0x2194ecu: goto label_2194ec;
        case 0x2194f0u: goto label_2194f0;
        case 0x2194f4u: goto label_2194f4;
        case 0x2194f8u: goto label_2194f8;
        case 0x2194fcu: goto label_2194fc;
        case 0x219500u: goto label_219500;
        case 0x219504u: goto label_219504;
        case 0x219508u: goto label_219508;
        case 0x21950cu: goto label_21950c;
        case 0x219510u: goto label_219510;
        case 0x219514u: goto label_219514;
        case 0x219518u: goto label_219518;
        case 0x21951cu: goto label_21951c;
        case 0x219520u: goto label_219520;
        case 0x219524u: goto label_219524;
        case 0x219528u: goto label_219528;
        case 0x21952cu: goto label_21952c;
        case 0x219530u: goto label_219530;
        case 0x219534u: goto label_219534;
        case 0x219538u: goto label_219538;
        case 0x21953cu: goto label_21953c;
        case 0x219540u: goto label_219540;
        case 0x219544u: goto label_219544;
        case 0x219548u: goto label_219548;
        case 0x21954cu: goto label_21954c;
        case 0x219550u: goto label_219550;
        case 0x219554u: goto label_219554;
        case 0x219558u: goto label_219558;
        case 0x21955cu: goto label_21955c;
        case 0x219560u: goto label_219560;
        case 0x219564u: goto label_219564;
        case 0x219568u: goto label_219568;
        case 0x21956cu: goto label_21956c;
        case 0x219570u: goto label_219570;
        case 0x219574u: goto label_219574;
        case 0x219578u: goto label_219578;
        case 0x21957cu: goto label_21957c;
        case 0x219580u: goto label_219580;
        case 0x219584u: goto label_219584;
        case 0x219588u: goto label_219588;
        case 0x21958cu: goto label_21958c;
        case 0x219590u: goto label_219590;
        case 0x219594u: goto label_219594;
        case 0x219598u: goto label_219598;
        case 0x21959cu: goto label_21959c;
        case 0x2195a0u: goto label_2195a0;
        case 0x2195a4u: goto label_2195a4;
        case 0x2195a8u: goto label_2195a8;
        case 0x2195acu: goto label_2195ac;
        case 0x2195b0u: goto label_2195b0;
        case 0x2195b4u: goto label_2195b4;
        case 0x2195b8u: goto label_2195b8;
        case 0x2195bcu: goto label_2195bc;
        case 0x2195c0u: goto label_2195c0;
        case 0x2195c4u: goto label_2195c4;
        case 0x2195c8u: goto label_2195c8;
        case 0x2195ccu: goto label_2195cc;
        case 0x2195d0u: goto label_2195d0;
        case 0x2195d4u: goto label_2195d4;
        case 0x2195d8u: goto label_2195d8;
        case 0x2195dcu: goto label_2195dc;
        default: break;
    }

    ctx->pc = 0x219320u;

label_219320:
    // 0x219320: 0x27bde6e0  addiu       $sp, $sp, -0x1920
    ctx->pc = 0x219320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294960864));
label_219324:
    // 0x219324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x219324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219328:
    // 0x219328: 0x7fb01910  sq          $s0, 0x1910($sp)
    ctx->pc = 0x219328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6416), GPR_VEC(ctx, 16));
label_21932c:
    // 0x21932c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21932cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219330:
    // 0x219330: 0x7fb218f0  sq          $s2, 0x18F0($sp)
    ctx->pc = 0x219330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6384), GPR_VEC(ctx, 18));
label_219334:
    // 0x219334: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x219334u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_219338:
    // 0x219338: 0x7fb318e0  sq          $s3, 0x18E0($sp)
    ctx->pc = 0x219338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6368), GPR_VEC(ctx, 19));
label_21933c:
    // 0x21933c: 0x7fb418d0  sq          $s4, 0x18D0($sp)
    ctx->pc = 0x21933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6352), GPR_VEC(ctx, 20));
label_219340:
    // 0x219340: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x219340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_219344:
    // 0x219344: 0x7fb518c0  sq          $s5, 0x18C0($sp)
    ctx->pc = 0x219344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6336), GPR_VEC(ctx, 21));
label_219348:
    // 0x219348: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x219348u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21934c:
    // 0x21934c: 0x7fb11900  sq          $s1, 0x1900($sp)
    ctx->pc = 0x21934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6400), GPR_VEC(ctx, 17));
label_219350:
    // 0x219350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219354:
    // 0x219354: 0x7fb618b0  sq          $s6, 0x18B0($sp)
    ctx->pc = 0x219354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6320), GPR_VEC(ctx, 22));
label_219358:
    // 0x219358: 0x7fb718a0  sq          $s7, 0x18A0($sp)
    ctx->pc = 0x219358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6304), GPR_VEC(ctx, 23));
label_21935c:
    // 0x21935c: 0xffbf1890  sd          $ra, 0x1890($sp)
    ctx->pc = 0x21935cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 6288), GPR_U64(ctx, 31));
label_219360:
    // 0x219360: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x219360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_219364:
    // 0x219364: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x219364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_219368:
    // 0x219368: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x219368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_21936c:
    // 0x21936c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x21936cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_219370:
    // 0x219370: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x219370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_219374:
    // 0x219374: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x219374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_219378:
    // 0x219378: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x219378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_21937c:
    // 0x21937c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x21937cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_219380:
    // 0x219380: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x219380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_219384:
    // 0x219384: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x219384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_219388:
    // 0x219388: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x219388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_21938c:
    // 0x21938c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x21938cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_219390:
    // 0x219390: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x219390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_219394:
    // 0x219394: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x219394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_219398:
    // 0x219398: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x219398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_21939c:
    // 0x21939c: 0x8e6801a0  lw          $t0, 0x1A0($s3)
    ctx->pc = 0x21939cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
label_2193a0:
    // 0x2193a0: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x2193a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_2193a4:
    // 0x2193a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2193a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2193a8:
    // 0x2193a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2193a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2193ac:
    // 0x2193ac: 0x40f809  jalr        $v0
label_2193b0:
    if (ctx->pc == 0x2193B0u) {
        ctx->pc = 0x2193B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193ACu;
        // 0x2193b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193B4u;
        goto label_2193b4;
    }
    ctx->pc = 0x2193ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2193B4u);
        ctx->pc = 0x2193B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193ACu;
        // 0x2193b0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2193ACu, 0x2193B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2193B4u;
label_2193b4:
    // 0x2193b4: 0x8e6601a0  lw          $a2, 0x1A0($s3)
    ctx->pc = 0x2193b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 416)));
label_2193b8:
    // 0x2193b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2193b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2193bc:
    // 0x2193bc: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x2193bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2193c0:
    // 0x2193c0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2193c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2193c4:
    // 0x2193c4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2193c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2193c8:
    // 0x2193c8: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2193c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_2193cc:
    // 0x2193cc: 0x8e047198  lw          $a0, 0x7198($s0)
    ctx->pc = 0x2193ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
label_2193d0:
    // 0x2193d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2193d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2193d4:
    // 0x2193d4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2193d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2193d8:
    // 0x2193d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2193d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2193dc:
    // 0x2193dc: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x2193dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
label_2193e0:
    // 0x2193e0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2193e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_2193e4:
    // 0x2193e4: 0xc0cfaee  jal         func_33EBB8
label_2193e8:
    if (ctx->pc == 0x2193E8u) {
        ctx->pc = 0x2193E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193E4u;
        // 0x2193e8: 0xafa70018  sw          $a3, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193ECu;
        goto label_2193ec;
    }
    ctx->pc = 0x2193E4u;
    SET_GPR_U32(ctx, 31, 0x2193ECu);
    ctx->pc = 0x2193E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2193E4u;
    // 0x2193e8: 0xafa70018  sw          $a3, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBB8u, 0x2193E4u, 0x2193ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2193ECu;
label_2193ec:
    // 0x2193ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2193ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2193f0:
    // 0x2193f0: 0x1640001d  bnez        $s2, . + 4 + (0x1D << 2)
label_2193f4:
    if (ctx->pc == 0x2193F4u) {
        ctx->pc = 0x2193F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193F0u;
        // 0x2193f4: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2193F8u;
        goto label_2193f8;
    }
    ctx->pc = 0x2193F0u;
    {
        const bool branch_taken_0x2193f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2193F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193F0u;
        // 0x2193f4: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193f0) {
            ctx->pc = 0x219468u;
            goto label_219468;
        }
    }
    ctx->pc = 0x2193F8u;
label_2193f8:
    // 0x2193f8: 0x86650092  lh          $a1, 0x92($s3)
    ctx->pc = 0x2193f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2193fc:
    // 0x2193fc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2193fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_219400:
    // 0x219400: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x219400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_219404:
    // 0x219404: 0x27a41850  addiu       $a0, $sp, 0x1850
    ctx->pc = 0x219404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6224));
label_219408:
    // 0x219408: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x219408u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_21940c:
    // 0x21940c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_219410:
    // 0x219410: 0xc0cd8ec  jal         func_3363B0
label_219414:
    if (ctx->pc == 0x219414u) {
        ctx->pc = 0x219414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219410u;
        // 0x219414: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219418u;
        goto label_219418;
    }
    ctx->pc = 0x219410u;
    SET_GPR_U32(ctx, 31, 0x219418u);
    ctx->pc = 0x219414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219410u;
    // 0x219414: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x219410u, 0x219418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219418u;
label_219418:
    // 0x219418: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x219418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_21941c:
    // 0x21941c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21941cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_219420:
    // 0x219420: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219424:
    // 0x219424: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x219424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_219428:
    // 0x219428: 0x7ba21850  lq          $v0, 0x1850($sp)
    ctx->pc = 0x219428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 6224)));
label_21942c:
    // 0x21942c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21942cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_219430:
    // 0x219430: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x219430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_219434:
    // 0x219434: 0x27a71840  addiu       $a3, $sp, 0x1840
    ctx->pc = 0x219434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 6208));
label_219438:
    // 0x219438: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x219438u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21943c:
    // 0x21943c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21943cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_219440:
    // 0x219440: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x219440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_219444:
    // 0x219444: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x219444u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_219448:
    // 0x219448: 0x8e047198  lw          $a0, 0x7198($s0)
    ctx->pc = 0x219448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29080)));
label_21944c:
    // 0x21944c: 0x7fa21840  sq          $v0, 0x1840($sp)
    ctx->pc = 0x21944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6208), GPR_VEC(ctx, 2));
label_219450:
    // 0x219450: 0x7fa21870  sq          $v0, 0x1870($sp)
    ctx->pc = 0x219450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 6256), GPR_VEC(ctx, 2));
label_219454:
    // 0x219454: 0xc0cf9fc  jal         func_33E7F0
label_219458:
    if (ctx->pc == 0x219458u) {
        ctx->pc = 0x219458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219454u;
        // 0x219458: 0x7fa21860  sq          $v0, 0x1860($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 6240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21945Cu;
        goto label_21945c;
    }
    ctx->pc = 0x219454u;
    SET_GPR_U32(ctx, 31, 0x21945Cu);
    ctx->pc = 0x219458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219454u;
    // 0x219458: 0x7fa21860  sq          $v0, 0x1860($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 6240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E7F0u, 0x219454u, 0x21945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21945Cu;
label_21945c:
    // 0x21945c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21945cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219460:
    // 0x219460: 0x12400053  beqz        $s2, . + 4 + (0x53 << 2)
label_219464:
    if (ctx->pc == 0x219464u) {
        ctx->pc = 0x219464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219460u;
        // 0x219464: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219468u;
        goto label_219468;
    }
    ctx->pc = 0x219460u;
    {
        const bool branch_taken_0x219460 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x219464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219460u;
        // 0x219464: 0x3c170051  lui         $s7, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219460) {
            ctx->pc = 0x2195B0u;
            goto label_2195b0;
        }
    }
    ctx->pc = 0x219468u;
label_219468:
    // 0x219468: 0x3c160056  lui         $s6, 0x56
    ctx->pc = 0x219468u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)86 << 16));
label_21946c:
    // 0x21946c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x21946cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_219470:
    // 0x219470: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x219470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_219474:
    // 0x219474: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x219474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_219478:
    // 0x219478: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x219478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_21947c:
    // 0x21947c: 0xc0e57ce  jal         func_395F38
label_219480:
    if (ctx->pc == 0x219480u) {
        ctx->pc = 0x219480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21947Cu;
        // 0x219480: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219484u;
        goto label_219484;
    }
    ctx->pc = 0x21947Cu;
    SET_GPR_U32(ctx, 31, 0x219484u);
    ctx->pc = 0x219480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21947Cu;
    // 0x219480: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21947Cu, 0x219484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219484u;
label_219484:
    // 0x219484: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
label_219488:
    if (ctx->pc == 0x219488u) {
        ctx->pc = 0x219488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219484u;
        // 0x219488: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21948Cu;
        goto label_21948c;
    }
    ctx->pc = 0x219484u;
    {
        const bool branch_taken_0x219484 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x219488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219484u;
        // 0x219488: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219484) {
            ctx->pc = 0x21950Cu;
            goto label_21950c;
        }
    }
    ctx->pc = 0x21948Cu;
label_21948c:
    // 0x21948c: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x21948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_219490:
    // 0x219490: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_219494:
    if (ctx->pc == 0x219494u) {
        ctx->pc = 0x219498u;
        goto label_219498;
    }
    ctx->pc = 0x219490u;
    {
        const bool branch_taken_0x219490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219490) {
            ctx->pc = 0x2194DCu;
            goto label_2194dc;
        }
    }
    ctx->pc = 0x219498u;
label_219498:
    // 0x219498: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x219498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21949c:
    // 0x21949c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21949cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2194a0:
    // 0x2194a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2194a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2194a4:
    // 0x2194a4: 0x40f809  jalr        $v0
label_2194a8:
    if (ctx->pc == 0x2194A8u) {
        ctx->pc = 0x2194A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194A4u;
        // 0x2194a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194ACu;
        goto label_2194ac;
    }
    ctx->pc = 0x2194A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2194ACu);
        ctx->pc = 0x2194A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194A4u;
        // 0x2194a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2194A4u, 0x2194ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2194ACu;
label_2194ac:
    // 0x2194ac: 0xc0e5d00  jal         func_397400
label_2194b0:
    if (ctx->pc == 0x2194B0u) {
        ctx->pc = 0x2194B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194ACu;
        // 0x2194b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194B4u;
        goto label_2194b4;
    }
    ctx->pc = 0x2194ACu;
    SET_GPR_U32(ctx, 31, 0x2194B4u);
    ctx->pc = 0x2194B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194ACu;
    // 0x2194b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397400u, 0x2194ACu, 0x2194B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194B4u;
label_2194b4:
    // 0x2194b4: 0x27a41880  addiu       $a0, $sp, 0x1880
    ctx->pc = 0x2194b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 6272));
label_2194b8:
    // 0x2194b8: 0xc0e4060  jal         func_390180
label_2194bc:
    if (ctx->pc == 0x2194BCu) {
        ctx->pc = 0x2194BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194B8u;
        // 0x2194bc: 0xafa21880  sw          $v0, 0x1880($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 6272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194C0u;
        goto label_2194c0;
    }
    ctx->pc = 0x2194B8u;
    SET_GPR_U32(ctx, 31, 0x2194C0u);
    ctx->pc = 0x2194BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194B8u;
    // 0x2194bc: 0xafa21880  sw          $v0, 0x1880($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 6272), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2194B8u, 0x2194C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194C0u;
label_2194c0:
    // 0x2194c0: 0xc0e57ce  jal         func_395F38
label_2194c4:
    if (ctx->pc == 0x2194C4u) {
        ctx->pc = 0x2194C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194C0u;
        // 0x2194c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194C8u;
        goto label_2194c8;
    }
    ctx->pc = 0x2194C0u;
    SET_GPR_U32(ctx, 31, 0x2194C8u);
    ctx->pc = 0x2194C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2194C0u;
    // 0x2194c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2194C0u, 0x2194C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2194C8u;
label_2194c8:
    // 0x2194c8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x2194c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_2194cc:
    // 0x2194cc: 0x14740036  bne         $v1, $s4, . + 4 + (0x36 << 2)
label_2194d0:
    if (ctx->pc == 0x2194D0u) {
        ctx->pc = 0x2194D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194CCu;
        // 0x2194d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194D4u;
        goto label_2194d4;
    }
    ctx->pc = 0x2194CCu;
    {
        const bool branch_taken_0x2194cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2194D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194CCu;
        // 0x2194d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194cc) {
            ctx->pc = 0x2195A8u;
            goto label_2195a8;
        }
    }
    ctx->pc = 0x2194D4u;
label_2194d4:
    // 0x2194d4: 0x10000038  b           . + 4 + (0x38 << 2)
label_2194d8:
    if (ctx->pc == 0x2194D8u) {
        ctx->pc = 0x2194D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194D4u;
        // 0x2194d8: 0x7bb01910  lq          $s0, 0x1910($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 6416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194DCu;
        goto label_2194dc;
    }
    ctx->pc = 0x2194D4u;
    {
        const bool branch_taken_0x2194d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2194D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194D4u;
        // 0x2194d8: 0x7bb01910  lq          $s0, 0x1910($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 6416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194d4) {
            ctx->pc = 0x2195B8u;
            goto label_2195b8;
        }
    }
    ctx->pc = 0x2194DCu;
label_2194dc:
    // 0x2194dc: 0x14540032  bne         $v0, $s4, . + 4 + (0x32 << 2)
label_2194e0:
    if (ctx->pc == 0x2194E0u) {
        ctx->pc = 0x2194E4u;
        goto label_2194e4;
    }
    ctx->pc = 0x2194DCu;
    {
        const bool branch_taken_0x2194dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2194dc) {
            ctx->pc = 0x2195A8u;
            goto label_2195a8;
        }
    }
    ctx->pc = 0x2194E4u;
label_2194e4:
    // 0x2194e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2194e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2194e8:
    // 0x2194e8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2194e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2194ec:
    // 0x2194ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2194ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2194f0:
    // 0x2194f0: 0x40f809  jalr        $v0
label_2194f4:
    if (ctx->pc == 0x2194F4u) {
        ctx->pc = 0x2194F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194F0u;
        // 0x2194f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2194F8u;
        goto label_2194f8;
    }
    ctx->pc = 0x2194F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2194F8u);
        ctx->pc = 0x2194F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194F0u;
        // 0x2194f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2194F0u, 0x2194F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2194F8u;
label_2194f8:
    // 0x2194f8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2194f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_2194fc:
    // 0x2194fc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_219500:
    if (ctx->pc == 0x219500u) {
        ctx->pc = 0x219500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194FCu;
        // 0x219500: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219504u;
        goto label_219504;
    }
    ctx->pc = 0x2194FCu;
    {
        const bool branch_taken_0x2194fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2194FCu;
        // 0x219500: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2194fc) {
            ctx->pc = 0x2195A8u;
            goto label_2195a8;
        }
    }
    ctx->pc = 0x219504u;
label_219504:
    // 0x219504: 0x1000002c  b           . + 4 + (0x2C << 2)
label_219508:
    if (ctx->pc == 0x219508u) {
        ctx->pc = 0x219508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219504u;
        // 0x219508: 0x7bb01910  lq          $s0, 0x1910($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 6416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21950Cu;
        goto label_21950c;
    }
    ctx->pc = 0x219504u;
    {
        const bool branch_taken_0x219504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219504u;
        // 0x219508: 0x7bb01910  lq          $s0, 0x1910($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 6416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219504) {
            ctx->pc = 0x2195B8u;
            goto label_2195b8;
        }
    }
    ctx->pc = 0x21950Cu;
label_21950c:
    // 0x21950c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_219510:
    // 0x219510: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x219510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_219514:
    // 0x219514: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x219514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_219518:
    // 0x219518: 0x40f809  jalr        $v0
label_21951c:
    if (ctx->pc == 0x21951Cu) {
        ctx->pc = 0x21951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219518u;
        // 0x21951c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219520u;
        goto label_219520;
    }
    ctx->pc = 0x219518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x219520u);
        ctx->pc = 0x21951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219518u;
        // 0x21951c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219518u, 0x219520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x219520u;
label_219520:
    // 0x219520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219524:
    // 0x219524: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x219524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_219528:
    // 0x219528: 0xc08715c  jal         func_21C570
label_21952c:
    if (ctx->pc == 0x21952Cu) {
        ctx->pc = 0x21952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219528u;
        // 0x21952c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219530u;
        goto label_219530;
    }
    ctx->pc = 0x219528u;
    SET_GPR_U32(ctx, 31, 0x219530u);
    ctx->pc = 0x21952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219528u;
    // 0x21952c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C570u, 0x219528u, 0x219530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219530u;
label_219530:
    // 0x219530: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_219534:
    if (ctx->pc == 0x219534u) {
        ctx->pc = 0x219538u;
        goto label_219538;
    }
    ctx->pc = 0x219530u;
    {
        const bool branch_taken_0x219530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219530) {
            ctx->pc = 0x2195A8u;
            goto label_2195a8;
        }
    }
    ctx->pc = 0x219538u;
label_219538:
    // 0x219538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21953c:
    // 0x21953c: 0xc10d6e8  jal         func_435BA0
label_219540:
    if (ctx->pc == 0x219540u) {
        ctx->pc = 0x219540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21953Cu;
        // 0x219540: 0x26c5a908  addiu       $a1, $s6, -0x56F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219544u;
        goto label_219544;
    }
    ctx->pc = 0x21953Cu;
    SET_GPR_U32(ctx, 31, 0x219544u);
    ctx->pc = 0x219540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21953Cu;
    // 0x219540: 0x26c5a908  addiu       $a1, $s6, -0x56F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x21953Cu, 0x219544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219544u;
label_219544:
    // 0x219544: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_219548:
    if (ctx->pc == 0x219548u) {
        ctx->pc = 0x219548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219544u;
        // 0x219548: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21954Cu;
        goto label_21954c;
    }
    ctx->pc = 0x219544u;
    {
        const bool branch_taken_0x219544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219544u;
        // 0x219548: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219544) {
            ctx->pc = 0x2195A8u;
            goto label_2195a8;
        }
    }
    ctx->pc = 0x21954Cu;
label_21954c:
    // 0x21954c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x21954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_219550:
    // 0x219550: 0x906456e5  lbu         $a0, 0x56E5($v1)
    ctx->pc = 0x219550u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22245)));
label_219554:
    // 0x219554: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
label_219558:
    if (ctx->pc == 0x219558u) {
        ctx->pc = 0x219558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219554u;
        // 0x219558: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21955Cu;
        goto label_21955c;
    }
    ctx->pc = 0x219554u;
    {
        const bool branch_taken_0x219554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219554u;
        // 0x219558: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219554) {
            ctx->pc = 0x2195A0u;
            goto label_2195a0;
        }
    }
    ctx->pc = 0x21955Cu;
label_21955c:
    // 0x21955c: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x21955cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_219560:
    // 0x219560: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x219560u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_219564:
    // 0x219564: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_219568:
    if (ctx->pc == 0x219568u) {
        ctx->pc = 0x219568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219564u;
        // 0x219568: 0x8ee42c04  lw          $a0, 0x2C04($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21956Cu;
        goto label_21956c;
    }
    ctx->pc = 0x219564u;
    {
        const bool branch_taken_0x219564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219564u;
        // 0x219568: 0x8ee42c04  lw          $a0, 0x2C04($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 11268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219564) {
            ctx->pc = 0x2195A0u;
            goto label_2195a0;
        }
    }
    ctx->pc = 0x21956Cu;
label_21956c:
    // 0x21956c: 0xc0e44cc  jal         func_391330
label_219570:
    if (ctx->pc == 0x219570u) {
        ctx->pc = 0x219570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21956Cu;
        // 0x219570: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219574u;
        goto label_219574;
    }
    ctx->pc = 0x21956Cu;
    SET_GPR_U32(ctx, 31, 0x219574u);
    ctx->pc = 0x219570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21956Cu;
    // 0x219570: 0x96250112  lhu         $a1, 0x112($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x21956Cu, 0x219574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219574u;
label_219574:
    // 0x219574: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x219574u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_219578:
    // 0x219578: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x219578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_21957c:
    // 0x21957c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_219580:
    if (ctx->pc == 0x219580u) {
        ctx->pc = 0x219580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21957Cu;
        // 0x219580: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219584u;
        goto label_219584;
    }
    ctx->pc = 0x21957Cu;
    {
        const bool branch_taken_0x21957c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x219580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21957Cu;
        // 0x219580: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21957c) {
            ctx->pc = 0x2195A0u;
            goto label_2195a0;
        }
    }
    ctx->pc = 0x219584u;
label_219584:
    // 0x219584: 0xc088b90  jal         func_222E40
label_219588:
    if (ctx->pc == 0x219588u) {
        ctx->pc = 0x219588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219584u;
        // 0x219588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21958Cu;
        goto label_21958c;
    }
    ctx->pc = 0x219584u;
    SET_GPR_U32(ctx, 31, 0x21958Cu);
    ctx->pc = 0x219588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219584u;
    // 0x219588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x219584u, 0x21958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21958Cu;
label_21958c:
    // 0x21958c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21958cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219590:
    // 0x219590: 0xc088b98  jal         func_222E60
label_219594:
    if (ctx->pc == 0x219594u) {
        ctx->pc = 0x219594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219590u;
        // 0x219594: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219598u;
        goto label_219598;
    }
    ctx->pc = 0x219590u;
    SET_GPR_U32(ctx, 31, 0x219598u);
    ctx->pc = 0x219594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219590u;
    // 0x219594: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x219590u, 0x219598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219598u;
label_219598:
    // 0x219598: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_21959c:
    if (ctx->pc == 0x21959Cu) {
        ctx->pc = 0x21959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219598u;
        // 0x21959c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2195A0u;
        goto label_2195a0;
    }
    ctx->pc = 0x219598u;
    {
        const bool branch_taken_0x219598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x21959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219598u;
        // 0x21959c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219598) {
            ctx->pc = 0x2195A8u;
            goto label_2195a8;
        }
    }
    ctx->pc = 0x2195A0u;
label_2195a0:
    // 0x2195a0: 0xc08efc0  jal         func_23BF00
label_2195a4:
    if (ctx->pc == 0x2195A4u) {
        ctx->pc = 0x2195A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195A0u;
        // 0x2195a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2195A8u;
        goto label_2195a8;
    }
    ctx->pc = 0x2195A0u;
    SET_GPR_U32(ctx, 31, 0x2195A8u);
    ctx->pc = 0x2195A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195A0u;
    // 0x2195a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BF00u, 0x2195A0u, 0x2195A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195A8u;
label_2195a8:
    // 0x2195a8: 0x1640ffb1  bnez        $s2, . + 4 + (-0x4F << 2)
label_2195ac:
    if (ctx->pc == 0x2195ACu) {
        ctx->pc = 0x2195ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195A8u;
        // 0x2195ac: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2195B0u;
        goto label_2195b0;
    }
    ctx->pc = 0x2195A8u;
    {
        const bool branch_taken_0x2195a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2195ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195A8u;
        // 0x2195ac: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2195a8) {
            ctx->pc = 0x219470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219470;
        }
    }
    ctx->pc = 0x2195B0u;
label_2195b0:
    // 0x2195b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2195b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2195b4:
    // 0x2195b4: 0x7bb01910  lq          $s0, 0x1910($sp)
    ctx->pc = 0x2195b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 6416)));
label_2195b8:
    // 0x2195b8: 0x7bb11900  lq          $s1, 0x1900($sp)
    ctx->pc = 0x2195b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 6400)));
label_2195bc:
    // 0x2195bc: 0x7bb218f0  lq          $s2, 0x18F0($sp)
    ctx->pc = 0x2195bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 6384)));
label_2195c0:
    // 0x2195c0: 0x7bb318e0  lq          $s3, 0x18E0($sp)
    ctx->pc = 0x2195c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 6368)));
label_2195c4:
    // 0x2195c4: 0x7bb418d0  lq          $s4, 0x18D0($sp)
    ctx->pc = 0x2195c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 6352)));
label_2195c8:
    // 0x2195c8: 0x7bb518c0  lq          $s5, 0x18C0($sp)
    ctx->pc = 0x2195c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 6336)));
label_2195cc:
    // 0x2195cc: 0x7bb618b0  lq          $s6, 0x18B0($sp)
    ctx->pc = 0x2195ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 6320)));
label_2195d0:
    // 0x2195d0: 0x7bb718a0  lq          $s7, 0x18A0($sp)
    ctx->pc = 0x2195d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 6304)));
label_2195d4:
    // 0x2195d4: 0xdfbf1890  ld          $ra, 0x1890($sp)
    ctx->pc = 0x2195d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 6288)));
label_2195d8:
    // 0x2195d8: 0x3e00008  jr          $ra
label_2195dc:
    if (ctx->pc == 0x2195DCu) {
        ctx->pc = 0x2195DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195D8u;
        // 0x2195dc: 0x27bd1920  addiu       $sp, $sp, 0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2195E0u;
        goto label_fallthrough_0x2195d8;
    }
    ctx->pc = 0x2195D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2195DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195D8u;
        // 0x2195dc: 0x27bd1920  addiu       $sp, $sp, 0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 6432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2195D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2195d8:
    ctx->pc = 0x2195E0u;
}
