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

// Function: sub_00201308
// Address: 0x201308 - 0x2015b0
void sub_00201308_0x201308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201308_0x201308");
#endif

    switch (ctx->pc) {
        case 0x201308u: goto label_201308;
        case 0x20130cu: goto label_20130c;
        case 0x201310u: goto label_201310;
        case 0x201314u: goto label_201314;
        case 0x201318u: goto label_201318;
        case 0x20131cu: goto label_20131c;
        case 0x201320u: goto label_201320;
        case 0x201324u: goto label_201324;
        case 0x201328u: goto label_201328;
        case 0x20132cu: goto label_20132c;
        case 0x201330u: goto label_201330;
        case 0x201334u: goto label_201334;
        case 0x201338u: goto label_201338;
        case 0x20133cu: goto label_20133c;
        case 0x201340u: goto label_201340;
        case 0x201344u: goto label_201344;
        case 0x201348u: goto label_201348;
        case 0x20134cu: goto label_20134c;
        case 0x201350u: goto label_201350;
        case 0x201354u: goto label_201354;
        case 0x201358u: goto label_201358;
        case 0x20135cu: goto label_20135c;
        case 0x201360u: goto label_201360;
        case 0x201364u: goto label_201364;
        case 0x201368u: goto label_201368;
        case 0x20136cu: goto label_20136c;
        case 0x201370u: goto label_201370;
        case 0x201374u: goto label_201374;
        case 0x201378u: goto label_201378;
        case 0x20137cu: goto label_20137c;
        case 0x201380u: goto label_201380;
        case 0x201384u: goto label_201384;
        case 0x201388u: goto label_201388;
        case 0x20138cu: goto label_20138c;
        case 0x201390u: goto label_201390;
        case 0x201394u: goto label_201394;
        case 0x201398u: goto label_201398;
        case 0x20139cu: goto label_20139c;
        case 0x2013a0u: goto label_2013a0;
        case 0x2013a4u: goto label_2013a4;
        case 0x2013a8u: goto label_2013a8;
        case 0x2013acu: goto label_2013ac;
        case 0x2013b0u: goto label_2013b0;
        case 0x2013b4u: goto label_2013b4;
        case 0x2013b8u: goto label_2013b8;
        case 0x2013bcu: goto label_2013bc;
        case 0x2013c0u: goto label_2013c0;
        case 0x2013c4u: goto label_2013c4;
        case 0x2013c8u: goto label_2013c8;
        case 0x2013ccu: goto label_2013cc;
        case 0x2013d0u: goto label_2013d0;
        case 0x2013d4u: goto label_2013d4;
        case 0x2013d8u: goto label_2013d8;
        case 0x2013dcu: goto label_2013dc;
        case 0x2013e0u: goto label_2013e0;
        case 0x2013e4u: goto label_2013e4;
        case 0x2013e8u: goto label_2013e8;
        case 0x2013ecu: goto label_2013ec;
        case 0x2013f0u: goto label_2013f0;
        case 0x2013f4u: goto label_2013f4;
        case 0x2013f8u: goto label_2013f8;
        case 0x2013fcu: goto label_2013fc;
        case 0x201400u: goto label_201400;
        case 0x201404u: goto label_201404;
        case 0x201408u: goto label_201408;
        case 0x20140cu: goto label_20140c;
        case 0x201410u: goto label_201410;
        case 0x201414u: goto label_201414;
        case 0x201418u: goto label_201418;
        case 0x20141cu: goto label_20141c;
        case 0x201420u: goto label_201420;
        case 0x201424u: goto label_201424;
        case 0x201428u: goto label_201428;
        case 0x20142cu: goto label_20142c;
        case 0x201430u: goto label_201430;
        case 0x201434u: goto label_201434;
        case 0x201438u: goto label_201438;
        case 0x20143cu: goto label_20143c;
        case 0x201440u: goto label_201440;
        case 0x201444u: goto label_201444;
        case 0x201448u: goto label_201448;
        case 0x20144cu: goto label_20144c;
        case 0x201450u: goto label_201450;
        case 0x201454u: goto label_201454;
        case 0x201458u: goto label_201458;
        case 0x20145cu: goto label_20145c;
        case 0x201460u: goto label_201460;
        case 0x201464u: goto label_201464;
        case 0x201468u: goto label_201468;
        case 0x20146cu: goto label_20146c;
        case 0x201470u: goto label_201470;
        case 0x201474u: goto label_201474;
        case 0x201478u: goto label_201478;
        case 0x20147cu: goto label_20147c;
        case 0x201480u: goto label_201480;
        case 0x201484u: goto label_201484;
        case 0x201488u: goto label_201488;
        case 0x20148cu: goto label_20148c;
        case 0x201490u: goto label_201490;
        case 0x201494u: goto label_201494;
        case 0x201498u: goto label_201498;
        case 0x20149cu: goto label_20149c;
        case 0x2014a0u: goto label_2014a0;
        case 0x2014a4u: goto label_2014a4;
        case 0x2014a8u: goto label_2014a8;
        case 0x2014acu: goto label_2014ac;
        case 0x2014b0u: goto label_2014b0;
        case 0x2014b4u: goto label_2014b4;
        case 0x2014b8u: goto label_2014b8;
        case 0x2014bcu: goto label_2014bc;
        case 0x2014c0u: goto label_2014c0;
        case 0x2014c4u: goto label_2014c4;
        case 0x2014c8u: goto label_2014c8;
        case 0x2014ccu: goto label_2014cc;
        case 0x2014d0u: goto label_2014d0;
        case 0x2014d4u: goto label_2014d4;
        case 0x2014d8u: goto label_2014d8;
        case 0x2014dcu: goto label_2014dc;
        case 0x2014e0u: goto label_2014e0;
        case 0x2014e4u: goto label_2014e4;
        case 0x2014e8u: goto label_2014e8;
        case 0x2014ecu: goto label_2014ec;
        case 0x2014f0u: goto label_2014f0;
        case 0x2014f4u: goto label_2014f4;
        case 0x2014f8u: goto label_2014f8;
        case 0x2014fcu: goto label_2014fc;
        case 0x201500u: goto label_201500;
        case 0x201504u: goto label_201504;
        case 0x201508u: goto label_201508;
        case 0x20150cu: goto label_20150c;
        case 0x201510u: goto label_201510;
        case 0x201514u: goto label_201514;
        case 0x201518u: goto label_201518;
        case 0x20151cu: goto label_20151c;
        case 0x201520u: goto label_201520;
        case 0x201524u: goto label_201524;
        case 0x201528u: goto label_201528;
        case 0x20152cu: goto label_20152c;
        case 0x201530u: goto label_201530;
        case 0x201534u: goto label_201534;
        case 0x201538u: goto label_201538;
        case 0x20153cu: goto label_20153c;
        case 0x201540u: goto label_201540;
        case 0x201544u: goto label_201544;
        case 0x201548u: goto label_201548;
        case 0x20154cu: goto label_20154c;
        case 0x201550u: goto label_201550;
        case 0x201554u: goto label_201554;
        case 0x201558u: goto label_201558;
        case 0x20155cu: goto label_20155c;
        case 0x201560u: goto label_201560;
        case 0x201564u: goto label_201564;
        case 0x201568u: goto label_201568;
        case 0x20156cu: goto label_20156c;
        case 0x201570u: goto label_201570;
        case 0x201574u: goto label_201574;
        case 0x201578u: goto label_201578;
        case 0x20157cu: goto label_20157c;
        case 0x201580u: goto label_201580;
        case 0x201584u: goto label_201584;
        case 0x201588u: goto label_201588;
        case 0x20158cu: goto label_20158c;
        case 0x201590u: goto label_201590;
        case 0x201594u: goto label_201594;
        case 0x201598u: goto label_201598;
        case 0x20159cu: goto label_20159c;
        case 0x2015a0u: goto label_2015a0;
        case 0x2015a4u: goto label_2015a4;
        case 0x2015a8u: goto label_2015a8;
        case 0x2015acu: goto label_2015ac;
        default: break;
    }

    ctx->pc = 0x201308u;

label_201308:
    // 0x201308: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x201308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20130c:
    // 0x20130c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x20130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_201310:
    // 0x201310: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x201310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_201314:
    // 0x201314: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x201314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201318:
    // 0x201318: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x201318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_20131c:
    // 0x20131c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20131cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201320:
    // 0x201320: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x201320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_201324:
    // 0x201324: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x201324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_201328:
    // 0x201328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20132c:
    // 0x20132c: 0x8e6500b8  lw          $a1, 0xB8($s3)
    ctx->pc = 0x20132cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_201330:
    // 0x201330: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201334:
    // 0x201334: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x201334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_201338:
    // 0x201338: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x201338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_20133c:
    // 0x20133c: 0x40f809  jalr        $v0
label_201340:
    if (ctx->pc == 0x201340u) {
        ctx->pc = 0x201340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20133Cu;
        // 0x201340: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201344u;
        goto label_201344;
    }
    ctx->pc = 0x20133Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201344u);
        ctx->pc = 0x201340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20133Cu;
        // 0x201340: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20133Cu, 0x201344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201344u;
label_201344:
    // 0x201344: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x201344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_201348:
    // 0x201348: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20134c:
    // 0x20134c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x20134cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_201350:
    // 0x201350: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x201350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_201354:
    // 0x201354: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x201354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_201358:
    // 0x201358: 0x1200008b  beqz        $s0, . + 4 + (0x8B << 2)
label_20135c:
    if (ctx->pc == 0x20135Cu) {
        ctx->pc = 0x20135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201358u;
        // 0x20135c: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201360u;
        goto label_201360;
    }
    ctx->pc = 0x201358u;
    {
        const bool branch_taken_0x201358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201358u;
        // 0x20135c: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201358) {
            ctx->pc = 0x201588u;
            goto label_201588;
        }
    }
    ctx->pc = 0x201360u;
label_201360:
    // 0x201360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201364:
    // 0x201364: 0x12020088  beq         $s0, $v0, . + 4 + (0x88 << 2)
label_201368:
    if (ctx->pc == 0x201368u) {
        ctx->pc = 0x201368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201364u;
        // 0x201368: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20136Cu;
        goto label_20136c;
    }
    ctx->pc = 0x201364u;
    {
        const bool branch_taken_0x201364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x201368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201364u;
        // 0x201368: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201364) {
            ctx->pc = 0x201588u;
            goto label_201588;
        }
    }
    ctx->pc = 0x20136Cu;
label_20136c:
    // 0x20136c: 0x16020024  bne         $s0, $v0, . + 4 + (0x24 << 2)
label_201370:
    if (ctx->pc == 0x201370u) {
        ctx->pc = 0x201370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20136Cu;
        // 0x201370: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201374u;
        goto label_201374;
    }
    ctx->pc = 0x20136Cu;
    {
        const bool branch_taken_0x20136c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x201370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20136Cu;
        // 0x201370: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20136c) {
            ctx->pc = 0x201400u;
            goto label_201400;
        }
    }
    ctx->pc = 0x201374u;
label_201374:
    // 0x201374: 0x8e6600b8  lw          $a2, 0xB8($s3)
    ctx->pc = 0x201374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_201378:
    // 0x201378: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x201378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_20137c:
    // 0x20137c: 0x84640118  lh          $a0, 0x118($v1)
    ctx->pc = 0x20137cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_201380:
    // 0x201380: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x201380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_201384:
    // 0x201384: 0x40f809  jalr        $v0
label_201388:
    if (ctx->pc == 0x201388u) {
        ctx->pc = 0x201388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201384u;
        // 0x201388: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20138Cu;
        goto label_20138c;
    }
    ctx->pc = 0x201384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20138Cu);
        ctx->pc = 0x201388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201384u;
        // 0x201388: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201384u, 0x20138Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20138Cu;
label_20138c:
    // 0x20138c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_201390:
    if (ctx->pc == 0x201390u) {
        ctx->pc = 0x201394u;
        goto label_201394;
    }
    ctx->pc = 0x20138Cu;
    {
        const bool branch_taken_0x20138c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20138c) {
            ctx->pc = 0x2013DCu;
            goto label_2013dc;
        }
    }
    ctx->pc = 0x201394u;
label_201394:
    // 0x201394: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x201394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_201398:
    // 0x201398: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20139c:
    // 0x20139c: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x20139cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_2013a0:
    // 0x2013a0: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x2013a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_2013a4:
    // 0x2013a4: 0x40f809  jalr        $v0
label_2013a8:
    if (ctx->pc == 0x2013A8u) {
        ctx->pc = 0x2013A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013A4u;
        // 0x2013a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013ACu;
        goto label_2013ac;
    }
    ctx->pc = 0x2013A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2013ACu);
        ctx->pc = 0x2013A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013A4u;
        // 0x2013a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2013A4u, 0x2013ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2013ACu;
label_2013ac:
    // 0x2013ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2013b0:
    if (ctx->pc == 0x2013B0u) {
        ctx->pc = 0x2013B4u;
        goto label_2013b4;
    }
    ctx->pc = 0x2013ACu;
    {
        const bool branch_taken_0x2013ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2013ac) {
            ctx->pc = 0x2013DCu;
            goto label_2013dc;
        }
    }
    ctx->pc = 0x2013B4u;
label_2013b4:
    // 0x2013b4: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x2013b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2013b8:
    // 0x2013b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2013b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2013bc:
    // 0x2013bc: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x2013bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_2013c0:
    // 0x2013c0: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x2013c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_2013c4:
    // 0x2013c4: 0x60f809  jalr        $v1
label_2013c8:
    if (ctx->pc == 0x2013C8u) {
        ctx->pc = 0x2013C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013C4u;
        // 0x2013c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013CCu;
        goto label_2013cc;
    }
    ctx->pc = 0x2013C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2013CCu);
        ctx->pc = 0x2013C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013C4u;
        // 0x2013c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2013C4u, 0x2013CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2013CCu;
label_2013cc:
    // 0x2013cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2013ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2013d0:
    // 0x2013d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2013d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2013d4:
    // 0x2013d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2013d8:
    if (ctx->pc == 0x2013D8u) {
        ctx->pc = 0x2013D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013D4u;
        // 0x2013d8: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013DCu;
        goto label_2013dc;
    }
    ctx->pc = 0x2013D4u;
    {
        const bool branch_taken_0x2013d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013D4u;
        // 0x2013d8: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013d4) {
            ctx->pc = 0x2013E8u;
            goto label_2013e8;
        }
    }
    ctx->pc = 0x2013DCu;
label_2013dc:
    // 0x2013dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2013dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2013e0:
    // 0x2013e0: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x2013e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_2013e4:
    // 0x2013e4: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x2013e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_2013e8:
    // 0x2013e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2013e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2013ec:
    // 0x2013ec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2013ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2013f0:
    // 0x2013f0: 0xc043f0c  jal         func_10FC30
label_2013f4:
    if (ctx->pc == 0x2013F4u) {
        ctx->pc = 0x2013F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013F0u;
        // 0x2013f4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2013F8u;
        goto label_2013f8;
    }
    ctx->pc = 0x2013F0u;
    SET_GPR_U32(ctx, 31, 0x2013F8u);
    ctx->pc = 0x2013F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013F0u;
    // 0x2013f4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x2013F0u, 0x2013F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013F8u;
label_2013f8:
    // 0x2013f8: 0x10000064  b           . + 4 + (0x64 << 2)
label_2013fc:
    if (ctx->pc == 0x2013FCu) {
        ctx->pc = 0x2013FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013F8u;
        // 0x2013fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201400u;
        goto label_201400;
    }
    ctx->pc = 0x2013F8u;
    {
        const bool branch_taken_0x2013f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013F8u;
        // 0x2013fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013f8) {
            ctx->pc = 0x20158Cu;
            goto label_20158c;
        }
    }
    ctx->pc = 0x201400u;
label_201400:
    // 0x201400: 0x16020062  bne         $s0, $v0, . + 4 + (0x62 << 2)
label_201404:
    if (ctx->pc == 0x201404u) {
        ctx->pc = 0x201404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201400u;
        // 0x201404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201408u;
        goto label_201408;
    }
    ctx->pc = 0x201400u;
    {
        const bool branch_taken_0x201400 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x201404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201400u;
        // 0x201404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201400) {
            ctx->pc = 0x20158Cu;
            goto label_20158c;
        }
    }
    ctx->pc = 0x201408u;
label_201408:
    // 0x201408: 0x8e6600b8  lw          $a2, 0xB8($s3)
    ctx->pc = 0x201408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_20140c:
    // 0x20140c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20140cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_201410:
    // 0x201410: 0x84640118  lh          $a0, 0x118($v1)
    ctx->pc = 0x201410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_201414:
    // 0x201414: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x201414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_201418:
    // 0x201418: 0x40f809  jalr        $v0
label_20141c:
    if (ctx->pc == 0x20141Cu) {
        ctx->pc = 0x20141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201418u;
        // 0x20141c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201420u;
        goto label_201420;
    }
    ctx->pc = 0x201418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201420u);
        ctx->pc = 0x20141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201418u;
        // 0x20141c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201418u, 0x201420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201420u;
label_201420:
    // 0x201420: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_201424:
    if (ctx->pc == 0x201424u) {
        ctx->pc = 0x201424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201420u;
        // 0x201424: 0x8e6500b8  lw          $a1, 0xB8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201428u;
        goto label_201428;
    }
    ctx->pc = 0x201420u;
    {
        const bool branch_taken_0x201420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201420) {
            ctx->pc = 0x201424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201420u;
            // 0x201424: 0x8e6500b8  lw          $a1, 0xB8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2014F4u;
            goto label_2014f4;
        }
    }
    ctx->pc = 0x201428u;
label_201428:
    // 0x201428: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x201428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_20142c:
    // 0x20142c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20142cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201430:
    // 0x201430: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x201430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_201434:
    // 0x201434: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x201434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_201438:
    // 0x201438: 0x40f809  jalr        $v0
label_20143c:
    if (ctx->pc == 0x20143Cu) {
        ctx->pc = 0x20143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201438u;
        // 0x20143c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201440u;
        goto label_201440;
    }
    ctx->pc = 0x201438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201440u);
        ctx->pc = 0x20143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201438u;
        // 0x20143c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201438u, 0x201440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201440u;
label_201440:
    // 0x201440: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_201444:
    if (ctx->pc == 0x201444u) {
        ctx->pc = 0x201444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201440u;
        // 0x201444: 0x3c100064  lui         $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201448u;
        goto label_201448;
    }
    ctx->pc = 0x201440u;
    {
        const bool branch_taken_0x201440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201440u;
        // 0x201444: 0x3c100064  lui         $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201440) {
            ctx->pc = 0x2014F0u;
            goto label_2014f0;
        }
    }
    ctx->pc = 0x201448u;
label_201448:
    // 0x201448: 0x2610ef80  addiu       $s0, $s0, -0x1080
    ctx->pc = 0x201448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963072));
label_20144c:
    // 0x20144c: 0xc080b0c  jal         func_202C30
label_201450:
    if (ctx->pc == 0x201450u) {
        ctx->pc = 0x201450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20144Cu;
        // 0x201450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201454u;
        goto label_201454;
    }
    ctx->pc = 0x20144Cu;
    SET_GPR_U32(ctx, 31, 0x201454u);
    ctx->pc = 0x201450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20144Cu;
    // 0x201450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C30u, 0x20144Cu, 0x201454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201454u;
label_201454:
    // 0x201454: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x201454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201458:
    // 0x201458: 0xc080b10  jal         func_202C40
label_20145c:
    if (ctx->pc == 0x20145Cu) {
        ctx->pc = 0x20145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201458u;
        // 0x20145c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201460u;
        goto label_201460;
    }
    ctx->pc = 0x201458u;
    SET_GPR_U32(ctx, 31, 0x201460u);
    ctx->pc = 0x20145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201458u;
    // 0x20145c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C40u, 0x201458u, 0x201460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201460u;
label_201460:
    // 0x201460: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x201460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201464:
    // 0x201464: 0xc0e409a  jal         func_390268
label_201468:
    if (ctx->pc == 0x201468u) {
        ctx->pc = 0x201468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201464u;
        // 0x201468: 0x26640094  addiu       $a0, $s3, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20146Cu;
        goto label_20146c;
    }
    ctx->pc = 0x201464u;
    SET_GPR_U32(ctx, 31, 0x20146Cu);
    ctx->pc = 0x201468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201464u;
    // 0x201468: 0x26640094  addiu       $a0, $s3, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x201464u, 0x20146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20146Cu;
label_20146c:
    // 0x20146c: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x20146cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_201470:
    // 0x201470: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201474:
    // 0x201474: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x201474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_201478:
    // 0x201478: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x201478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_20147c:
    // 0x20147c: 0x40f809  jalr        $v0
label_201480:
    if (ctx->pc == 0x201480u) {
        ctx->pc = 0x201480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20147Cu;
        // 0x201480: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201484u;
        goto label_201484;
    }
    ctx->pc = 0x20147Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201484u);
        ctx->pc = 0x201480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20147Cu;
        // 0x201480: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20147Cu, 0x201484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201484u;
label_201484:
    // 0x201484: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x201484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_201488:
    // 0x201488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x201488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20148c:
    // 0x20148c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20148cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201490:
    // 0x201490: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x201490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201494:
    // 0x201494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_201498:
    // 0x201498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20149c:
    // 0x20149c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2014a0:
    // 0x2014a0: 0xc080b40  jal         func_202D00
label_2014a4:
    if (ctx->pc == 0x2014A4u) {
        ctx->pc = 0x2014A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014A0u;
        // 0x2014a4: 0x94470000  lhu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014A8u;
        goto label_2014a8;
    }
    ctx->pc = 0x2014A0u;
    SET_GPR_U32(ctx, 31, 0x2014A8u);
    ctx->pc = 0x2014A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2014A0u;
    // 0x2014a4: 0x94470000  lhu         $a3, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202D00u, 0x2014A0u, 0x2014A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014A8u;
label_2014a8:
    // 0x2014a8: 0xc07f8b4  jal         func_1FE2D0
label_2014ac:
    if (ctx->pc == 0x2014ACu) {
        ctx->pc = 0x2014ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014A8u;
        // 0x2014ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014B0u;
        goto label_2014b0;
    }
    ctx->pc = 0x2014A8u;
    SET_GPR_U32(ctx, 31, 0x2014B0u);
    ctx->pc = 0x2014ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2014A8u;
    // 0x2014ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2D0u, 0x2014A8u, 0x2014B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014B0u;
label_2014b0:
    // 0x2014b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2014b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2014b4:
    // 0x2014b4: 0xc07f8b4  jal         func_1FE2D0
label_2014b8:
    if (ctx->pc == 0x2014B8u) {
        ctx->pc = 0x2014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014B4u;
        // 0x2014b8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014BCu;
        goto label_2014bc;
    }
    ctx->pc = 0x2014B4u;
    SET_GPR_U32(ctx, 31, 0x2014BCu);
    ctx->pc = 0x2014B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2014B4u;
    // 0x2014b8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2D0u, 0x2014B4u, 0x2014BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014BCu;
label_2014bc:
    // 0x2014bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2014bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2014c0:
    // 0x2014c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2014c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2014c4:
    // 0x2014c4: 0xc07f8ba  jal         func_1FE2E8
label_2014c8:
    if (ctx->pc == 0x2014C8u) {
        ctx->pc = 0x2014C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014C4u;
        // 0x2014c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014CCu;
        goto label_2014cc;
    }
    ctx->pc = 0x2014C4u;
    SET_GPR_U32(ctx, 31, 0x2014CCu);
    ctx->pc = 0x2014C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2014C4u;
    // 0x2014c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2E8u, 0x2014C4u, 0x2014CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014CCu;
label_2014cc:
    // 0x2014cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2014ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2014d0:
    // 0x2014d0: 0xc07f8ba  jal         func_1FE2E8
label_2014d4:
    if (ctx->pc == 0x2014D4u) {
        ctx->pc = 0x2014D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014D0u;
        // 0x2014d4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014D8u;
        goto label_2014d8;
    }
    ctx->pc = 0x2014D0u;
    SET_GPR_U32(ctx, 31, 0x2014D8u);
    ctx->pc = 0x2014D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2014D0u;
    // 0x2014d4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2E8u, 0x2014D0u, 0x2014D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2014D8u;
label_2014d8:
    // 0x2014d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2014d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2014dc:
    // 0x2014dc: 0xae700094  sw          $s0, 0x94($s3)
    ctx->pc = 0x2014dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 16));
label_2014e0:
    // 0x2014e0: 0xae720098  sw          $s2, 0x98($s3)
    ctx->pc = 0x2014e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 18));
label_2014e4:
    // 0x2014e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2014e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2014e8:
    // 0x2014e8: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
label_2014ec:
    if (ctx->pc == 0x2014ECu) {
        ctx->pc = 0x2014ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014E8u;
        // 0x2014ec: 0xae600074  sw          $zero, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2014F0u;
        goto label_2014f0;
    }
    ctx->pc = 0x2014E8u;
    {
        const bool branch_taken_0x2014e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2014ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014E8u;
        // 0x2014ec: 0xae600074  sw          $zero, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014e8) {
            ctx->pc = 0x2013F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2013f0;
        }
    }
    ctx->pc = 0x2014F0u;
label_2014f0:
    // 0x2014f0: 0x8e6500b8  lw          $a1, 0xB8($s3)
    ctx->pc = 0x2014f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_2014f4:
    // 0x2014f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2014f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2014f8:
    // 0x2014f8: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x2014f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_2014fc:
    // 0x2014fc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x2014fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_201500:
    // 0x201500: 0x40f809  jalr        $v0
label_201504:
    if (ctx->pc == 0x201504u) {
        ctx->pc = 0x201504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201500u;
        // 0x201504: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201508u;
        goto label_201508;
    }
    ctx->pc = 0x201500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201508u);
        ctx->pc = 0x201504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201500u;
        // 0x201504: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201500u, 0x201508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201508u;
label_201508:
    // 0x201508: 0x8e6800b8  lw          $t0, 0xB8($s3)
    ctx->pc = 0x201508u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_20150c:
    // 0x20150c: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x20150cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_201510:
    // 0x201510: 0x8e64008c  lw          $a0, 0x8C($s3)
    ctx->pc = 0x201510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_201514:
    // 0x201514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201518:
    // 0x201518: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x201518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_20151c:
    // 0x20151c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_201520:
    // 0x201520: 0x84c40118  lh          $a0, 0x118($a2)
    ctx->pc = 0x201520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 280)));
label_201524:
    // 0x201524: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x201524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_201528:
    // 0x201528: 0x8cc2011c  lw          $v0, 0x11C($a2)
    ctx->pc = 0x201528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
label_20152c:
    // 0x20152c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x20152cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_201530:
    // 0x201530: 0x40f809  jalr        $v0
label_201534:
    if (ctx->pc == 0x201534u) {
        ctx->pc = 0x201534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201530u;
        // 0x201534: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201538u;
        goto label_201538;
    }
    ctx->pc = 0x201530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201538u);
        ctx->pc = 0x201534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201530u;
        // 0x201534: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201530u, 0x201538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201538u;
label_201538:
    // 0x201538: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_20153c:
    if (ctx->pc == 0x20153Cu) {
        ctx->pc = 0x20153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201538u;
        // 0x20153c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201540u;
        goto label_201540;
    }
    ctx->pc = 0x201538u;
    {
        const bool branch_taken_0x201538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201538) {
            ctx->pc = 0x20153Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201538u;
            // 0x20153c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20156Cu;
            goto label_20156c;
        }
    }
    ctx->pc = 0x201540u;
label_201540:
    // 0x201540: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x201540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_201544:
    // 0x201544: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x201544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_201548:
    // 0x201548: 0xc07fb84  jal         func_1FEE10
label_20154c:
    if (ctx->pc == 0x20154Cu) {
        ctx->pc = 0x20154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201548u;
        // 0x20154c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201550u;
        goto label_201550;
    }
    ctx->pc = 0x201548u;
    SET_GPR_U32(ctx, 31, 0x201550u);
    ctx->pc = 0x20154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201548u;
    // 0x20154c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE10u, 0x201548u, 0x201550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201550u;
label_201550:
    // 0x201550: 0x8e6500b8  lw          $a1, 0xB8($s3)
    ctx->pc = 0x201550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_201554:
    // 0x201554: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201558:
    // 0x201558: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x201558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20155c:
    // 0x20155c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_201560:
    // 0x201560: 0x60f809  jalr        $v1
label_201564:
    if (ctx->pc == 0x201564u) {
        ctx->pc = 0x201564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201560u;
        // 0x201564: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201568u;
        goto label_201568;
    }
    ctx->pc = 0x201560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201568u);
        ctx->pc = 0x201564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201560u;
        // 0x201564: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201560u, 0x201568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201568u;
label_201568:
    // 0x201568: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x201568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20156c:
    // 0x20156c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201570:
    // 0x201570: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x201570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_201574:
    // 0x201574: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x201574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_201578:
    // 0x201578: 0x60f809  jalr        $v1
label_20157c:
    if (ctx->pc == 0x20157Cu) {
        ctx->pc = 0x20157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201578u;
        // 0x20157c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201580u;
        goto label_201580;
    }
    ctx->pc = 0x201578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201580u);
        ctx->pc = 0x20157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201578u;
        // 0x20157c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201578u, 0x201580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201580u;
label_201580:
    // 0x201580: 0x10000002  b           . + 4 + (0x2 << 2)
label_201584:
    if (ctx->pc == 0x201584u) {
        ctx->pc = 0x201584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201580u;
        // 0x201584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201588u;
        goto label_201588;
    }
    ctx->pc = 0x201580u;
    {
        const bool branch_taken_0x201580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201580u;
        // 0x201584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201580) {
            ctx->pc = 0x20158Cu;
            goto label_20158c;
        }
    }
    ctx->pc = 0x201588u;
label_201588:
    // 0x201588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20158c:
    // 0x20158c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x20158cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_201590:
    // 0x201590: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x201590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_201594:
    // 0x201594: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x201594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201598:
    // 0x201598: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x201598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20159c:
    // 0x20159c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x20159cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2015a0:
    // 0x2015a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2015a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2015a4:
    // 0x2015a4: 0x3e00008  jr          $ra
label_2015a8:
    if (ctx->pc == 0x2015A8u) {
        ctx->pc = 0x2015A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015A4u;
        // 0x2015a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2015ACu;
        goto label_2015ac;
    }
    ctx->pc = 0x2015A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2015A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015A4u;
        // 0x2015a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2015A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2015ACu;
label_2015ac:
    // 0x2015ac: 0x0  nop
    ctx->pc = 0x2015acu;
    // NOP
    ctx->pc = 0x2015b0u;
}
