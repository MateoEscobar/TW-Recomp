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

// Function: sub_00395510
// Address: 0x395510 - 0x3956c0
void sub_00395510_0x395510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395510_0x395510");
#endif

    switch (ctx->pc) {
        case 0x395510u: goto label_395510;
        case 0x395514u: goto label_395514;
        case 0x395518u: goto label_395518;
        case 0x39551cu: goto label_39551c;
        case 0x395520u: goto label_395520;
        case 0x395524u: goto label_395524;
        case 0x395528u: goto label_395528;
        case 0x39552cu: goto label_39552c;
        case 0x395530u: goto label_395530;
        case 0x395534u: goto label_395534;
        case 0x395538u: goto label_395538;
        case 0x39553cu: goto label_39553c;
        case 0x395540u: goto label_395540;
        case 0x395544u: goto label_395544;
        case 0x395548u: goto label_395548;
        case 0x39554cu: goto label_39554c;
        case 0x395550u: goto label_395550;
        case 0x395554u: goto label_395554;
        case 0x395558u: goto label_395558;
        case 0x39555cu: goto label_39555c;
        case 0x395560u: goto label_395560;
        case 0x395564u: goto label_395564;
        case 0x395568u: goto label_395568;
        case 0x39556cu: goto label_39556c;
        case 0x395570u: goto label_395570;
        case 0x395574u: goto label_395574;
        case 0x395578u: goto label_395578;
        case 0x39557cu: goto label_39557c;
        case 0x395580u: goto label_395580;
        case 0x395584u: goto label_395584;
        case 0x395588u: goto label_395588;
        case 0x39558cu: goto label_39558c;
        case 0x395590u: goto label_395590;
        case 0x395594u: goto label_395594;
        case 0x395598u: goto label_395598;
        case 0x39559cu: goto label_39559c;
        case 0x3955a0u: goto label_3955a0;
        case 0x3955a4u: goto label_3955a4;
        case 0x3955a8u: goto label_3955a8;
        case 0x3955acu: goto label_3955ac;
        case 0x3955b0u: goto label_3955b0;
        case 0x3955b4u: goto label_3955b4;
        case 0x3955b8u: goto label_3955b8;
        case 0x3955bcu: goto label_3955bc;
        case 0x3955c0u: goto label_3955c0;
        case 0x3955c4u: goto label_3955c4;
        case 0x3955c8u: goto label_3955c8;
        case 0x3955ccu: goto label_3955cc;
        case 0x3955d0u: goto label_3955d0;
        case 0x3955d4u: goto label_3955d4;
        case 0x3955d8u: goto label_3955d8;
        case 0x3955dcu: goto label_3955dc;
        case 0x3955e0u: goto label_3955e0;
        case 0x3955e4u: goto label_3955e4;
        case 0x3955e8u: goto label_3955e8;
        case 0x3955ecu: goto label_3955ec;
        case 0x3955f0u: goto label_3955f0;
        case 0x3955f4u: goto label_3955f4;
        case 0x3955f8u: goto label_3955f8;
        case 0x3955fcu: goto label_3955fc;
        case 0x395600u: goto label_395600;
        case 0x395604u: goto label_395604;
        case 0x395608u: goto label_395608;
        case 0x39560cu: goto label_39560c;
        case 0x395610u: goto label_395610;
        case 0x395614u: goto label_395614;
        case 0x395618u: goto label_395618;
        case 0x39561cu: goto label_39561c;
        case 0x395620u: goto label_395620;
        case 0x395624u: goto label_395624;
        case 0x395628u: goto label_395628;
        case 0x39562cu: goto label_39562c;
        case 0x395630u: goto label_395630;
        case 0x395634u: goto label_395634;
        case 0x395638u: goto label_395638;
        case 0x39563cu: goto label_39563c;
        case 0x395640u: goto label_395640;
        case 0x395644u: goto label_395644;
        case 0x395648u: goto label_395648;
        case 0x39564cu: goto label_39564c;
        case 0x395650u: goto label_395650;
        case 0x395654u: goto label_395654;
        case 0x395658u: goto label_395658;
        case 0x39565cu: goto label_39565c;
        case 0x395660u: goto label_395660;
        case 0x395664u: goto label_395664;
        case 0x395668u: goto label_395668;
        case 0x39566cu: goto label_39566c;
        case 0x395670u: goto label_395670;
        case 0x395674u: goto label_395674;
        case 0x395678u: goto label_395678;
        case 0x39567cu: goto label_39567c;
        case 0x395680u: goto label_395680;
        case 0x395684u: goto label_395684;
        case 0x395688u: goto label_395688;
        case 0x39568cu: goto label_39568c;
        case 0x395690u: goto label_395690;
        case 0x395694u: goto label_395694;
        case 0x395698u: goto label_395698;
        case 0x39569cu: goto label_39569c;
        case 0x3956a0u: goto label_3956a0;
        case 0x3956a4u: goto label_3956a4;
        case 0x3956a8u: goto label_3956a8;
        case 0x3956acu: goto label_3956ac;
        case 0x3956b0u: goto label_3956b0;
        case 0x3956b4u: goto label_3956b4;
        case 0x3956b8u: goto label_3956b8;
        case 0x3956bcu: goto label_3956bc;
        default: break;
    }

    ctx->pc = 0x395510u;

label_395510:
    // 0x395510: 0x27bded20  addiu       $sp, $sp, -0x12E0
    ctx->pc = 0x395510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962464));
label_395514:
    // 0x395514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x395514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395518:
    // 0x395518: 0x7fb41290  sq          $s4, 0x1290($sp)
    ctx->pc = 0x395518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4752), GPR_VEC(ctx, 20));
label_39551c:
    // 0x39551c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39551cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395520:
    // 0x395520: 0x7fb51280  sq          $s5, 0x1280($sp)
    ctx->pc = 0x395520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4736), GPR_VEC(ctx, 21));
label_395524:
    // 0x395524: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x395524u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_395528:
    // 0x395528: 0x7fb61270  sq          $s6, 0x1270($sp)
    ctx->pc = 0x395528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4720), GPR_VEC(ctx, 22));
label_39552c:
    // 0x39552c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39552cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395530:
    // 0x395530: 0x7fb012d0  sq          $s0, 0x12D0($sp)
    ctx->pc = 0x395530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4816), GPR_VEC(ctx, 16));
label_395534:
    // 0x395534: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x395534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395538:
    // 0x395538: 0x7fb112c0  sq          $s1, 0x12C0($sp)
    ctx->pc = 0x395538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4800), GPR_VEC(ctx, 17));
label_39553c:
    // 0x39553c: 0x7fb212b0  sq          $s2, 0x12B0($sp)
    ctx->pc = 0x39553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4784), GPR_VEC(ctx, 18));
label_395540:
    // 0x395540: 0x7fb312a0  sq          $s3, 0x12A0($sp)
    ctx->pc = 0x395540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4768), GPR_VEC(ctx, 19));
label_395544:
    // 0x395544: 0x7fb71260  sq          $s7, 0x1260($sp)
    ctx->pc = 0x395544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4704), GPR_VEC(ctx, 23));
label_395548:
    // 0x395548: 0x7fbe1250  sq          $fp, 0x1250($sp)
    ctx->pc = 0x395548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4688), GPR_VEC(ctx, 30));
label_39554c:
    // 0x39554c: 0xffbf1240  sd          $ra, 0x1240($sp)
    ctx->pc = 0x39554cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4672), GPR_U64(ctx, 31));
label_395550:
    // 0x395550: 0xafa01204  sw          $zero, 0x1204($sp)
    ctx->pc = 0x395550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4612), GPR_U32(ctx, 0));
label_395554:
    // 0x395554: 0x8e880118  lw          $t0, 0x118($s4)
    ctx->pc = 0x395554u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_395558:
    // 0x395558: 0xafa01208  sw          $zero, 0x1208($sp)
    ctx->pc = 0x395558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4616), GPR_U32(ctx, 0));
label_39555c:
    // 0x39555c: 0xafa0120c  sw          $zero, 0x120C($sp)
    ctx->pc = 0x39555cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4620), GPR_U32(ctx, 0));
label_395560:
    // 0x395560: 0xafa01210  sw          $zero, 0x1210($sp)
    ctx->pc = 0x395560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4624), GPR_U32(ctx, 0));
label_395564:
    // 0x395564: 0xafa01214  sw          $zero, 0x1214($sp)
    ctx->pc = 0x395564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4628), GPR_U32(ctx, 0));
label_395568:
    // 0x395568: 0xafa01218  sw          $zero, 0x1218($sp)
    ctx->pc = 0x395568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4632), GPR_U32(ctx, 0));
label_39556c:
    // 0x39556c: 0xafa0121c  sw          $zero, 0x121C($sp)
    ctx->pc = 0x39556cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4636), GPR_U32(ctx, 0));
label_395570:
    // 0x395570: 0xafa01220  sw          $zero, 0x1220($sp)
    ctx->pc = 0x395570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4640), GPR_U32(ctx, 0));
label_395574:
    // 0x395574: 0xafa01224  sw          $zero, 0x1224($sp)
    ctx->pc = 0x395574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4644), GPR_U32(ctx, 0));
label_395578:
    // 0x395578: 0xafa01228  sw          $zero, 0x1228($sp)
    ctx->pc = 0x395578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4648), GPR_U32(ctx, 0));
label_39557c:
    // 0x39557c: 0xafa0122c  sw          $zero, 0x122C($sp)
    ctx->pc = 0x39557cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4652), GPR_U32(ctx, 0));
label_395580:
    // 0x395580: 0xafa01230  sw          $zero, 0x1230($sp)
    ctx->pc = 0x395580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4656), GPR_U32(ctx, 0));
label_395584:
    // 0x395584: 0xafa01234  sw          $zero, 0x1234($sp)
    ctx->pc = 0x395584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4660), GPR_U32(ctx, 0));
label_395588:
    // 0x395588: 0xafa01238  sw          $zero, 0x1238($sp)
    ctx->pc = 0x395588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4664), GPR_U32(ctx, 0));
label_39558c:
    // 0x39558c: 0xafa81200  sw          $t0, 0x1200($sp)
    ctx->pc = 0x39558cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4608), GPR_U32(ctx, 8));
label_395590:
    // 0x395590: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x395590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_395594:
    // 0x395594: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x395594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_395598:
    // 0x395598: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x395598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39559c:
    // 0x39559c: 0x40f809  jalr        $v0
label_3955a0:
    if (ctx->pc == 0x3955A0u) {
        ctx->pc = 0x3955A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39559Cu;
        // 0x3955a0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3955A4u;
        goto label_3955a4;
    }
    ctx->pc = 0x39559Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3955A4u);
        ctx->pc = 0x3955A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39559Cu;
        // 0x3955a0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39559Cu, 0x3955A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3955A4u;
label_3955a4:
    // 0x3955a4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x3955a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_3955a8:
    // 0x3955a8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3955a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3955ac:
    // 0x3955ac: 0x8c647198  lw          $a0, 0x7198($v1)
    ctx->pc = 0x3955acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29080)));
label_3955b0:
    // 0x3955b0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x3955b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3955b4:
    // 0x3955b4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3955b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3955b8:
    // 0x3955b8: 0xafa51214  sw          $a1, 0x1214($sp)
    ctx->pc = 0x3955b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4628), GPR_U32(ctx, 5));
label_3955bc:
    // 0x3955bc: 0xafa61210  sw          $a2, 0x1210($sp)
    ctx->pc = 0x3955bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4624), GPR_U32(ctx, 6));
label_3955c0:
    // 0x3955c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3955c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3955c4:
    // 0x3955c4: 0xafa21204  sw          $v0, 0x1204($sp)
    ctx->pc = 0x3955c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4612), GPR_U32(ctx, 2));
label_3955c8:
    // 0x3955c8: 0x27a61200  addiu       $a2, $sp, 0x1200
    ctx->pc = 0x3955c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4608));
label_3955cc:
    // 0x3955cc: 0xc0cfaee  jal         func_33EBB8
label_3955d0:
    if (ctx->pc == 0x3955D0u) {
        ctx->pc = 0x3955D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955CCu;
        // 0x3955d0: 0xafa31218  sw          $v1, 0x1218($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3955D4u;
        goto label_3955d4;
    }
    ctx->pc = 0x3955CCu;
    SET_GPR_U32(ctx, 31, 0x3955D4u);
    ctx->pc = 0x3955D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3955CCu;
    // 0x3955d0: 0xafa31218  sw          $v1, 0x1218($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4632), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBB8u, 0x3955CCu, 0x3955D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3955D4u;
label_3955d4:
    // 0x3955d4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3955d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3955d8:
    // 0x3955d8: 0x12c0002c  beqz        $s6, . + 4 + (0x2C << 2)
label_3955dc:
    if (ctx->pc == 0x3955DCu) {
        ctx->pc = 0x3955DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955D8u;
        // 0x3955dc: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3955E0u;
        goto label_3955e0;
    }
    ctx->pc = 0x3955D8u;
    {
        const bool branch_taken_0x3955d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3955DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955D8u;
        // 0x3955dc: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3955d8) {
            ctx->pc = 0x39568Cu;
            goto label_39568c;
        }
    }
    ctx->pc = 0x3955E0u;
label_3955e0:
    // 0x3955e0: 0x2417000e  addiu       $s7, $zero, 0xE
    ctx->pc = 0x3955e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3955e4:
    // 0x3955e4: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3955e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3955e8:
    // 0x3955e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3955e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3955ec:
    // 0x3955ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3955ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3955f0:
    // 0x3955f0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3955f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3955f4:
    // 0x3955f4: 0x906256e5  lbu         $v0, 0x56E5($v1)
    ctx->pc = 0x3955f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22245)));
label_3955f8:
    // 0x3955f8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3955fc:
    if (ctx->pc == 0x3955FCu) {
        ctx->pc = 0x3955FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955F8u;
        // 0x3955fc: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395600u;
        goto label_395600;
    }
    ctx->pc = 0x3955F8u;
    {
        const bool branch_taken_0x3955f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3955FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955F8u;
        // 0x3955fc: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3955f8) {
            ctx->pc = 0x395644u;
            goto label_395644;
        }
    }
    ctx->pc = 0x395600u;
label_395600:
    // 0x395600: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x395600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_395604:
    // 0x395604: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x395604u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_395608:
    // 0x395608: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_39560c:
    if (ctx->pc == 0x39560Cu) {
        ctx->pc = 0x395610u;
        goto label_395610;
    }
    ctx->pc = 0x395608u;
    {
        const bool branch_taken_0x395608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395608) {
            ctx->pc = 0x395644u;
            goto label_395644;
        }
    }
    ctx->pc = 0x395610u;
label_395610:
    // 0x395610: 0x8fc42c04  lw          $a0, 0x2C04($fp)
    ctx->pc = 0x395610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11268)));
label_395614:
    // 0x395614: 0xc0e44cc  jal         func_391330
label_395618:
    if (ctx->pc == 0x395618u) {
        ctx->pc = 0x395618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395614u;
        // 0x395618: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39561Cu;
        goto label_39561c;
    }
    ctx->pc = 0x395614u;
    SET_GPR_U32(ctx, 31, 0x39561Cu);
    ctx->pc = 0x395618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395614u;
    // 0x395618: 0x96850112  lhu         $a1, 0x112($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x395614u, 0x39561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39561Cu;
label_39561c:
    // 0x39561c: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x39561cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_395620:
    // 0x395620: 0x14770008  bne         $v1, $s7, . + 4 + (0x8 << 2)
label_395624:
    if (ctx->pc == 0x395624u) {
        ctx->pc = 0x395628u;
        goto label_395628;
    }
    ctx->pc = 0x395620u;
    {
        const bool branch_taken_0x395620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x395620) {
            ctx->pc = 0x395644u;
            goto label_395644;
        }
    }
    ctx->pc = 0x395628u;
label_395628:
    // 0x395628: 0xc088b90  jal         func_222E40
label_39562c:
    if (ctx->pc == 0x39562Cu) {
        ctx->pc = 0x39562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395628u;
        // 0x39562c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395630u;
        goto label_395630;
    }
    ctx->pc = 0x395628u;
    SET_GPR_U32(ctx, 31, 0x395630u);
    ctx->pc = 0x39562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395628u;
    // 0x39562c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E40u, 0x395628u, 0x395630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395630u;
label_395630:
    // 0x395630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x395630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395634:
    // 0x395634: 0xc088b98  jal         func_222E60
label_395638:
    if (ctx->pc == 0x395638u) {
        ctx->pc = 0x395638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395634u;
        // 0x395638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39563Cu;
        goto label_39563c;
    }
    ctx->pc = 0x395634u;
    SET_GPR_U32(ctx, 31, 0x39563Cu);
    ctx->pc = 0x395638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395634u;
    // 0x395638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E60u, 0x395634u, 0x39563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39563Cu;
label_39563c:
    // 0x39563c: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x39563cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_395640:
    // 0x395640: 0x10900a  movz        $s2, $zero, $s0
    ctx->pc = 0x395640u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_395644:
    // 0x395644: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_395648:
    if (ctx->pc == 0x395648u) {
        ctx->pc = 0x395648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395644u;
        // 0x395648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39564Cu;
        goto label_39564c;
    }
    ctx->pc = 0x395644u;
    {
        const bool branch_taken_0x395644 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x395648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395644u;
        // 0x395648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395644) {
            ctx->pc = 0x39567Cu;
            goto label_39567c;
        }
    }
    ctx->pc = 0x39564Cu;
label_39564c:
    // 0x39564c: 0xc08715c  jal         func_21C570
label_395650:
    if (ctx->pc == 0x395650u) {
        ctx->pc = 0x395650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39564Cu;
        // 0x395650: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395654u;
        goto label_395654;
    }
    ctx->pc = 0x39564Cu;
    SET_GPR_U32(ctx, 31, 0x395654u);
    ctx->pc = 0x395650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39564Cu;
    // 0x395650: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C570u, 0x39564Cu, 0x395654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395654u;
label_395654:
    // 0x395654: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_395658:
    if (ctx->pc == 0x395658u) {
        ctx->pc = 0x395658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395654u;
        // 0x395658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39565Cu;
        goto label_39565c;
    }
    ctx->pc = 0x395654u;
    {
        const bool branch_taken_0x395654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395654u;
        // 0x395658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395654) {
            ctx->pc = 0x39567Cu;
            goto label_39567c;
        }
    }
    ctx->pc = 0x39565Cu;
label_39565c:
    // 0x39565c: 0xc08efc0  jal         func_23BF00
label_395660:
    if (ctx->pc == 0x395660u) {
        ctx->pc = 0x395660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39565Cu;
        // 0x395660: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395664u;
        goto label_395664;
    }
    ctx->pc = 0x39565Cu;
    SET_GPR_U32(ctx, 31, 0x395664u);
    ctx->pc = 0x395660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39565Cu;
    // 0x395660: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BF00u, 0x39565Cu, 0x395664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395664u;
label_395664:
    // 0x395664: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_395668:
    if (ctx->pc == 0x395668u) {
        ctx->pc = 0x395668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395664u;
        // 0x395668: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39566Cu;
        goto label_39566c;
    }
    ctx->pc = 0x395664u;
    {
        const bool branch_taken_0x395664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395664u;
        // 0x395668: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395664) {
            ctx->pc = 0x395680u;
            goto label_395680;
        }
    }
    ctx->pc = 0x39566Cu;
label_39566c:
    // 0x39566c: 0xc0e4936  jal         func_3924D8
label_395670:
    if (ctx->pc == 0x395670u) {
        ctx->pc = 0x395670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39566Cu;
        // 0x395670: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395674u;
        goto label_395674;
    }
    ctx->pc = 0x39566Cu;
    SET_GPR_U32(ctx, 31, 0x395674u);
    ctx->pc = 0x395670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39566Cu;
    // 0x395670: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3924D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3924D8u, 0x39566Cu, 0x395674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395674u;
label_395674:
    // 0x395674: 0x10000006  b           . + 4 + (0x6 << 2)
label_395678:
    if (ctx->pc == 0x395678u) {
        ctx->pc = 0x395678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395674u;
        // 0x395678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39567Cu;
        goto label_39567c;
    }
    ctx->pc = 0x395674u;
    {
        const bool branch_taken_0x395674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395674u;
        // 0x395678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395674) {
            ctx->pc = 0x395690u;
            goto label_395690;
        }
    }
    ctx->pc = 0x39567Cu;
label_39567c:
    // 0x39567c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x39567cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_395680:
    // 0x395680: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x395680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_395684:
    // 0x395684: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_395688:
    if (ctx->pc == 0x395688u) {
        ctx->pc = 0x395688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395684u;
        // 0x395688: 0x267300c0  addiu       $s3, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39568Cu;
        goto label_39568c;
    }
    ctx->pc = 0x395684u;
    {
        const bool branch_taken_0x395684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395684u;
        // 0x395688: 0x267300c0  addiu       $s3, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395684) {
            ctx->pc = 0x3955E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3955e8;
        }
    }
    ctx->pc = 0x39568Cu;
label_39568c:
    // 0x39568c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39568cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395690:
    // 0x395690: 0x7bb012d0  lq          $s0, 0x12D0($sp)
    ctx->pc = 0x395690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4816)));
label_395694:
    // 0x395694: 0x7bb112c0  lq          $s1, 0x12C0($sp)
    ctx->pc = 0x395694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4800)));
label_395698:
    // 0x395698: 0x7bb212b0  lq          $s2, 0x12B0($sp)
    ctx->pc = 0x395698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4784)));
label_39569c:
    // 0x39569c: 0x7bb312a0  lq          $s3, 0x12A0($sp)
    ctx->pc = 0x39569cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4768)));
label_3956a0:
    // 0x3956a0: 0x7bb41290  lq          $s4, 0x1290($sp)
    ctx->pc = 0x3956a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 4752)));
label_3956a4:
    // 0x3956a4: 0x7bb51280  lq          $s5, 0x1280($sp)
    ctx->pc = 0x3956a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 4736)));
label_3956a8:
    // 0x3956a8: 0x7bb61270  lq          $s6, 0x1270($sp)
    ctx->pc = 0x3956a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 4720)));
label_3956ac:
    // 0x3956ac: 0x7bb71260  lq          $s7, 0x1260($sp)
    ctx->pc = 0x3956acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 4704)));
label_3956b0:
    // 0x3956b0: 0x7bbe1250  lq          $fp, 0x1250($sp)
    ctx->pc = 0x3956b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 4688)));
label_3956b4:
    // 0x3956b4: 0xdfbf1240  ld          $ra, 0x1240($sp)
    ctx->pc = 0x3956b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4672)));
label_3956b8:
    // 0x3956b8: 0x3e00008  jr          $ra
label_3956bc:
    if (ctx->pc == 0x3956BCu) {
        ctx->pc = 0x3956BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956B8u;
        // 0x3956bc: 0x27bd12e0  addiu       $sp, $sp, 0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3956C0u;
        goto label_fallthrough_0x3956b8;
    }
    ctx->pc = 0x3956B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3956BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956B8u;
        // 0x3956bc: 0x27bd12e0  addiu       $sp, $sp, 0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3956B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3956b8:
    ctx->pc = 0x3956C0u;
}
