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

// Function: sub_00170330
// Address: 0x170330 - 0x170528
void sub_00170330_0x170330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170330_0x170330");
#endif

    switch (ctx->pc) {
        case 0x170330u: goto label_170330;
        case 0x170334u: goto label_170334;
        case 0x170338u: goto label_170338;
        case 0x17033cu: goto label_17033c;
        case 0x170340u: goto label_170340;
        case 0x170344u: goto label_170344;
        case 0x170348u: goto label_170348;
        case 0x17034cu: goto label_17034c;
        case 0x170350u: goto label_170350;
        case 0x170354u: goto label_170354;
        case 0x170358u: goto label_170358;
        case 0x17035cu: goto label_17035c;
        case 0x170360u: goto label_170360;
        case 0x170364u: goto label_170364;
        case 0x170368u: goto label_170368;
        case 0x17036cu: goto label_17036c;
        case 0x170370u: goto label_170370;
        case 0x170374u: goto label_170374;
        case 0x170378u: goto label_170378;
        case 0x17037cu: goto label_17037c;
        case 0x170380u: goto label_170380;
        case 0x170384u: goto label_170384;
        case 0x170388u: goto label_170388;
        case 0x17038cu: goto label_17038c;
        case 0x170390u: goto label_170390;
        case 0x170394u: goto label_170394;
        case 0x170398u: goto label_170398;
        case 0x17039cu: goto label_17039c;
        case 0x1703a0u: goto label_1703a0;
        case 0x1703a4u: goto label_1703a4;
        case 0x1703a8u: goto label_1703a8;
        case 0x1703acu: goto label_1703ac;
        case 0x1703b0u: goto label_1703b0;
        case 0x1703b4u: goto label_1703b4;
        case 0x1703b8u: goto label_1703b8;
        case 0x1703bcu: goto label_1703bc;
        case 0x1703c0u: goto label_1703c0;
        case 0x1703c4u: goto label_1703c4;
        case 0x1703c8u: goto label_1703c8;
        case 0x1703ccu: goto label_1703cc;
        case 0x1703d0u: goto label_1703d0;
        case 0x1703d4u: goto label_1703d4;
        case 0x1703d8u: goto label_1703d8;
        case 0x1703dcu: goto label_1703dc;
        case 0x1703e0u: goto label_1703e0;
        case 0x1703e4u: goto label_1703e4;
        case 0x1703e8u: goto label_1703e8;
        case 0x1703ecu: goto label_1703ec;
        case 0x1703f0u: goto label_1703f0;
        case 0x1703f4u: goto label_1703f4;
        case 0x1703f8u: goto label_1703f8;
        case 0x1703fcu: goto label_1703fc;
        case 0x170400u: goto label_170400;
        case 0x170404u: goto label_170404;
        case 0x170408u: goto label_170408;
        case 0x17040cu: goto label_17040c;
        case 0x170410u: goto label_170410;
        case 0x170414u: goto label_170414;
        case 0x170418u: goto label_170418;
        case 0x17041cu: goto label_17041c;
        case 0x170420u: goto label_170420;
        case 0x170424u: goto label_170424;
        case 0x170428u: goto label_170428;
        case 0x17042cu: goto label_17042c;
        case 0x170430u: goto label_170430;
        case 0x170434u: goto label_170434;
        case 0x170438u: goto label_170438;
        case 0x17043cu: goto label_17043c;
        case 0x170440u: goto label_170440;
        case 0x170444u: goto label_170444;
        case 0x170448u: goto label_170448;
        case 0x17044cu: goto label_17044c;
        case 0x170450u: goto label_170450;
        case 0x170454u: goto label_170454;
        case 0x170458u: goto label_170458;
        case 0x17045cu: goto label_17045c;
        case 0x170460u: goto label_170460;
        case 0x170464u: goto label_170464;
        case 0x170468u: goto label_170468;
        case 0x17046cu: goto label_17046c;
        case 0x170470u: goto label_170470;
        case 0x170474u: goto label_170474;
        case 0x170478u: goto label_170478;
        case 0x17047cu: goto label_17047c;
        case 0x170480u: goto label_170480;
        case 0x170484u: goto label_170484;
        case 0x170488u: goto label_170488;
        case 0x17048cu: goto label_17048c;
        case 0x170490u: goto label_170490;
        case 0x170494u: goto label_170494;
        case 0x170498u: goto label_170498;
        case 0x17049cu: goto label_17049c;
        case 0x1704a0u: goto label_1704a0;
        case 0x1704a4u: goto label_1704a4;
        case 0x1704a8u: goto label_1704a8;
        case 0x1704acu: goto label_1704ac;
        case 0x1704b0u: goto label_1704b0;
        case 0x1704b4u: goto label_1704b4;
        case 0x1704b8u: goto label_1704b8;
        case 0x1704bcu: goto label_1704bc;
        case 0x1704c0u: goto label_1704c0;
        case 0x1704c4u: goto label_1704c4;
        case 0x1704c8u: goto label_1704c8;
        case 0x1704ccu: goto label_1704cc;
        case 0x1704d0u: goto label_1704d0;
        case 0x1704d4u: goto label_1704d4;
        case 0x1704d8u: goto label_1704d8;
        case 0x1704dcu: goto label_1704dc;
        case 0x1704e0u: goto label_1704e0;
        case 0x1704e4u: goto label_1704e4;
        case 0x1704e8u: goto label_1704e8;
        case 0x1704ecu: goto label_1704ec;
        case 0x1704f0u: goto label_1704f0;
        case 0x1704f4u: goto label_1704f4;
        case 0x1704f8u: goto label_1704f8;
        case 0x1704fcu: goto label_1704fc;
        case 0x170500u: goto label_170500;
        case 0x170504u: goto label_170504;
        case 0x170508u: goto label_170508;
        case 0x17050cu: goto label_17050c;
        case 0x170510u: goto label_170510;
        case 0x170514u: goto label_170514;
        case 0x170518u: goto label_170518;
        case 0x17051cu: goto label_17051c;
        case 0x170520u: goto label_170520;
        case 0x170524u: goto label_170524;
        default: break;
    }

    ctx->pc = 0x170330u;

label_170330:
    // 0x170330: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x170330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_170334:
    // 0x170334: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x170334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_170338:
    // 0x170338: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x170338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17033c:
    // 0x17033c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17033cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_170340:
    // 0x170340: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x170340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_170344:
    // 0x170344: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x170344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_170348:
    // 0x170348: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x170348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_17034c:
    // 0x17034c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_170350:
    // 0x170350: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x170350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_170354:
    // 0x170354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_170358:
    // 0x170358: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x170358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_17035c:
    // 0x17035c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_170360:
    if (ctx->pc == 0x170360u) {
        ctx->pc = 0x170360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17035Cu;
        // 0x170360: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170364u;
        goto label_170364;
    }
    ctx->pc = 0x17035Cu;
    {
        const bool branch_taken_0x17035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17035Cu;
        // 0x170360: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17035c) {
            ctx->pc = 0x1703E4u;
            goto label_1703e4;
        }
    }
    ctx->pc = 0x170364u;
label_170364:
    // 0x170364: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x170364u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_170368:
    // 0x170368: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x170368u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_17036c:
    // 0x17036c: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x17036cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_170370:
    // 0x170370: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x170370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_170374:
    // 0x170374: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x170374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_170378:
    // 0x170378: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x170378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_17037c:
    // 0x17037c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x17037cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_170380:
    // 0x170380: 0x60f809  jalr        $v1
label_170384:
    if (ctx->pc == 0x170384u) {
        ctx->pc = 0x170384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170380u;
        // 0x170384: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170388u;
        goto label_170388;
    }
    ctx->pc = 0x170380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x170388u);
        ctx->pc = 0x170384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170380u;
        // 0x170384: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170380u, 0x170388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170388u;
label_170388:
    // 0x170388: 0x8e0c27e4  lw          $t4, 0x27E4($s0)
    ctx->pc = 0x170388u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_17038c:
    // 0x17038c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x17038cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_170390:
    // 0x170390: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x170390u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_170394:
    // 0x170394: 0x24a51a28  addiu       $a1, $a1, 0x1A28
    ctx->pc = 0x170394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6696));
label_170398:
    // 0x170398: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x170398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_17039c:
    // 0x17039c: 0x24061c00  addiu       $a2, $zero, 0x1C00
    ctx->pc = 0x17039cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
label_1703a0:
    // 0x1703a0: 0x240900e6  addiu       $t1, $zero, 0xE6
    ctx->pc = 0x1703a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
label_1703a4:
    // 0x1703a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1703a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1703a8:
    // 0x1703a8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1703a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1703ac:
    // 0x1703ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1703acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1703b0:
    // 0x1703b0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1703b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1703b4:
    // 0x1703b4: 0x250819f8  addiu       $t0, $t0, 0x19F8
    ctx->pc = 0x1703b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6648));
label_1703b8:
    // 0x1703b8: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x1703b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_1703bc:
    // 0x1703bc: 0x40f809  jalr        $v0
label_1703c0:
    if (ctx->pc == 0x1703C0u) {
        ctx->pc = 0x1703C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703BCu;
        // 0x1703c0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1703C4u;
        goto label_1703c4;
    }
    ctx->pc = 0x1703BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1703C4u);
        ctx->pc = 0x1703C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703BCu;
        // 0x1703c0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1703BCu, 0x1703C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1703C4u;
label_1703c4:
    // 0x1703c4: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1703c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_1703c8:
    // 0x1703c8: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x1703c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_1703cc:
    // 0x1703cc: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x1703ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_1703d0:
    // 0x1703d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1703d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1703d4:
    // 0x1703d4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1703d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1703d8:
    // 0x1703d8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1703d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1703dc:
    // 0x1703dc: 0x60f809  jalr        $v1
label_1703e0:
    if (ctx->pc == 0x1703E0u) {
        ctx->pc = 0x1703E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703DCu;
        // 0x1703e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1703E4u;
        goto label_1703e4;
    }
    ctx->pc = 0x1703DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1703E4u);
        ctx->pc = 0x1703E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703DCu;
        // 0x1703e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1703DCu, 0x1703E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1703E4u;
label_1703e4:
    // 0x1703e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1703e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1703e8:
    // 0x1703e8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1703e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1703ec:
    // 0x1703ec: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1703ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1703f0:
    // 0x1703f0: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
label_1703f4:
    if (ctx->pc == 0x1703F4u) {
        ctx->pc = 0x1703F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703F0u;
        // 0x1703f4: 0xae530008  sw          $s3, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1703F8u;
        goto label_1703f8;
    }
    ctx->pc = 0x1703F0u;
    {
        const bool branch_taken_0x1703f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1703F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703F0u;
        // 0x1703f4: 0xae530008  sw          $s3, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703f0) {
            ctx->pc = 0x170430u;
            goto label_170430;
        }
    }
    ctx->pc = 0x1703F8u;
label_1703f8:
    // 0x1703f8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_1703fc:
    if (ctx->pc == 0x1703FCu) {
        ctx->pc = 0x1703FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703F8u;
        // 0x1703fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170400u;
        goto label_170400;
    }
    ctx->pc = 0x1703F8u;
    {
        const bool branch_taken_0x1703f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1703FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703F8u;
        // 0x1703fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703f8) {
            ctx->pc = 0x170418u;
            goto label_170418;
        }
    }
    ctx->pc = 0x170400u;
label_170400:
    // 0x170400: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
label_170404:
    if (ctx->pc == 0x170404u) {
        ctx->pc = 0x170404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170400u;
        // 0x170404: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170408u;
        goto label_170408;
    }
    ctx->pc = 0x170400u;
    {
        const bool branch_taken_0x170400 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x170404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170400u;
        // 0x170404: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170400) {
            ctx->pc = 0x170448u;
            goto label_170448;
        }
    }
    ctx->pc = 0x170408u;
label_170408:
    // 0x170408: 0x12620019  beq         $s3, $v0, . + 4 + (0x19 << 2)
label_17040c:
    if (ctx->pc == 0x17040Cu) {
        ctx->pc = 0x17040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170408u;
        // 0x17040c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170410u;
        goto label_170410;
    }
    ctx->pc = 0x170408u;
    {
        const bool branch_taken_0x170408 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x17040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170408u;
        // 0x17040c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170408) {
            ctx->pc = 0x170470u;
            goto label_170470;
        }
    }
    ctx->pc = 0x170410u;
label_170410:
    // 0x170410: 0x1000003c  b           . + 4 + (0x3C << 2)
label_170414:
    if (ctx->pc == 0x170414u) {
        ctx->pc = 0x170414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170410u;
        // 0x170414: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170418u;
        goto label_170418;
    }
    ctx->pc = 0x170410u;
    {
        const bool branch_taken_0x170410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170410u;
        // 0x170414: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170410) {
            ctx->pc = 0x170504u;
            goto label_170504;
        }
    }
    ctx->pc = 0x170418u;
label_170418:
    // 0x170418: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x170418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_17041c:
    // 0x17041c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_170420:
    // 0x170420: 0x34420036  ori         $v0, $v0, 0x36
    ctx->pc = 0x170420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54);
label_170424:
    // 0x170424: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x170424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_170428:
    // 0x170428: 0x1000000c  b           . + 4 + (0xC << 2)
label_17042c:
    if (ctx->pc == 0x17042Cu) {
        ctx->pc = 0x17042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170428u;
        // 0x17042c: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170430u;
        goto label_170430;
    }
    ctx->pc = 0x170428u;
    {
        const bool branch_taken_0x170428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170428u;
        // 0x17042c: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170428) {
            ctx->pc = 0x17045Cu;
            goto label_17045c;
        }
    }
    ctx->pc = 0x170430u;
label_170430:
    // 0x170430: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x170430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_170434:
    // 0x170434: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170438:
    // 0x170438: 0x3442001e  ori         $v0, $v0, 0x1E
    ctx->pc = 0x170438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
label_17043c:
    // 0x17043c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x17043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_170440:
    // 0x170440: 0x10000006  b           . + 4 + (0x6 << 2)
label_170444:
    if (ctx->pc == 0x170444u) {
        ctx->pc = 0x170444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170440u;
        // 0x170444: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170448u;
        goto label_170448;
    }
    ctx->pc = 0x170440u;
    {
        const bool branch_taken_0x170440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170440u;
        // 0x170444: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170440) {
            ctx->pc = 0x17045Cu;
            goto label_17045c;
        }
    }
    ctx->pc = 0x170448u;
label_170448:
    // 0x170448: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x170448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_17044c:
    // 0x17044c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17044cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_170450:
    // 0x170450: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x170450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_170454:
    // 0x170454: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x170454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_170458:
    // 0x170458: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x170458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_17045c:
    // 0x17045c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x17045cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_170460:
    // 0x170460: 0xae450010  sw          $a1, 0x10($s2)
    ctx->pc = 0x170460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 5));
label_170464:
    // 0x170464: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x170464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_170468:
    // 0x170468: 0x10000008  b           . + 4 + (0x8 << 2)
label_17046c:
    if (ctx->pc == 0x17046Cu) {
        ctx->pc = 0x17046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170468u;
        // 0x17046c: 0xae440018  sw          $a0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170470u;
        goto label_170470;
    }
    ctx->pc = 0x170468u;
    {
        const bool branch_taken_0x170468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170468u;
        // 0x17046c: 0xae440018  sw          $a0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170468) {
            ctx->pc = 0x17048Cu;
            goto label_17048c;
        }
    }
    ctx->pc = 0x170470u;
label_170470:
    // 0x170470: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x170470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_170474:
    // 0x170474: 0x34420012  ori         $v0, $v0, 0x12
    ctx->pc = 0x170474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
label_170478:
    // 0x170478: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x170478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_17047c:
    // 0x17047c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x17047cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_170480:
    // 0x170480: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x170480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
label_170484:
    // 0x170484: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x170484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_170488:
    // 0x170488: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x170488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_17048c:
    // 0x17048c: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x17048cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_170490:
    // 0x170490: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x170490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170494:
    // 0x170494: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x170494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170498:
    // 0x170498: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x170498u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_17049c:
    // 0x17049c: 0xa2110069  sb          $s1, 0x69($s0)
    ctx->pc = 0x17049cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 17));
label_1704a0:
    // 0x1704a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1704a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1704a4:
    // 0x1704a4: 0xa213006a  sb          $s3, 0x6A($s0)
    ctx->pc = 0x1704a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 19));
label_1704a8:
    // 0x1704a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1704a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1704ac:
    // 0x1704ac: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1704acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1704b0:
    // 0x1704b0: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x1704b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1704b4:
    // 0x1704b4: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x1704b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1704b8:
    // 0x1704b8: 0xc05bf64  jal         func_16FD90
label_1704bc:
    if (ctx->pc == 0x1704BCu) {
        ctx->pc = 0x1704BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704B8u;
        // 0x1704bc: 0x8e480018  lw          $t0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1704C0u;
        goto label_1704c0;
    }
    ctx->pc = 0x1704B8u;
    SET_GPR_U32(ctx, 31, 0x1704C0u);
    ctx->pc = 0x1704BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1704B8u;
    // 0x1704bc: 0x8e480018  lw          $t0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FD90u, 0x1704B8u, 0x1704C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1704C0u;
label_1704c0:
    // 0x1704c0: 0xa215006e  sb          $s5, 0x6E($s0)
    ctx->pc = 0x1704c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 21));
label_1704c4:
    // 0x1704c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1704c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1704c8:
    // 0x1704c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1704c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1704cc:
    // 0x1704cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1704ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1704d0:
    // 0x1704d0: 0x2ea20015  sltiu       $v0, $s5, 0x15
    ctx->pc = 0x1704d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_1704d4:
    // 0x1704d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1704d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1704d8:
    // 0x1704d8: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x1704d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_1704dc:
    // 0x1704dc: 0xc05c180  jal         func_170600
label_1704e0:
    if (ctx->pc == 0x1704E0u) {
        ctx->pc = 0x1704E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704DCu;
        // 0x1704e0: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1704E4u;
        goto label_1704e4;
    }
    ctx->pc = 0x1704DCu;
    SET_GPR_U32(ctx, 31, 0x1704E4u);
    ctx->pc = 0x1704E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1704DCu;
    // 0x1704e0: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170600u, 0x1704DCu, 0x1704E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1704E4u;
label_1704e4:
    // 0x1704e4: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x1704e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1704e8:
    // 0x1704e8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_1704ec:
    if (ctx->pc == 0x1704ECu) {
        ctx->pc = 0x1704ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704E8u;
        // 0x1704ec: 0xa2110069  sb          $s1, 0x69($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1704F0u;
        goto label_1704f0;
    }
    ctx->pc = 0x1704E8u;
    {
        const bool branch_taken_0x1704e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1704e8) {
            ctx->pc = 0x1704ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1704E8u;
            // 0x1704ec: 0xa2110069  sb          $s1, 0x69($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1704A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1704a0;
        }
    }
    ctx->pc = 0x1704F0u;
label_1704f0:
    // 0x1704f0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x1704f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1704f4:
    // 0x1704f4: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1704f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1704f8:
    // 0x1704f8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1704fc:
    if (ctx->pc == 0x1704FCu) {
        ctx->pc = 0x1704FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704F8u;
        // 0x1704fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170500u;
        goto label_170500;
    }
    ctx->pc = 0x1704F8u;
    {
        const bool branch_taken_0x1704f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1704FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704F8u;
        // 0x1704fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1704f8) {
            ctx->pc = 0x170498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170498;
        }
    }
    ctx->pc = 0x170500u;
label_170500:
    // 0x170500: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x170500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_170504:
    // 0x170504: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x170504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_170508:
    // 0x170508: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x170508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17050c:
    // 0x17050c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17050cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_170510:
    // 0x170510: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x170510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_170514:
    // 0x170514: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x170514u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_170518:
    // 0x170518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17051c:
    // 0x17051c: 0x3e00008  jr          $ra
label_170520:
    if (ctx->pc == 0x170520u) {
        ctx->pc = 0x170520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17051Cu;
        // 0x170520: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170524u;
        goto label_170524;
    }
    ctx->pc = 0x17051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17051Cu;
        // 0x170520: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17051Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170524u;
label_170524:
    // 0x170524: 0x0  nop
    ctx->pc = 0x170524u;
    // NOP
    ctx->pc = 0x170528u;
}
