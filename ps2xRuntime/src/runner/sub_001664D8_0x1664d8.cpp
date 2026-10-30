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

// Function: sub_001664D8
// Address: 0x1664d8 - 0x1666e8
void sub_001664D8_0x1664d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001664D8_0x1664d8");
#endif

    switch (ctx->pc) {
        case 0x1664d8u: goto label_1664d8;
        case 0x1664dcu: goto label_1664dc;
        case 0x1664e0u: goto label_1664e0;
        case 0x1664e4u: goto label_1664e4;
        case 0x1664e8u: goto label_1664e8;
        case 0x1664ecu: goto label_1664ec;
        case 0x1664f0u: goto label_1664f0;
        case 0x1664f4u: goto label_1664f4;
        case 0x1664f8u: goto label_1664f8;
        case 0x1664fcu: goto label_1664fc;
        case 0x166500u: goto label_166500;
        case 0x166504u: goto label_166504;
        case 0x166508u: goto label_166508;
        case 0x16650cu: goto label_16650c;
        case 0x166510u: goto label_166510;
        case 0x166514u: goto label_166514;
        case 0x166518u: goto label_166518;
        case 0x16651cu: goto label_16651c;
        case 0x166520u: goto label_166520;
        case 0x166524u: goto label_166524;
        case 0x166528u: goto label_166528;
        case 0x16652cu: goto label_16652c;
        case 0x166530u: goto label_166530;
        case 0x166534u: goto label_166534;
        case 0x166538u: goto label_166538;
        case 0x16653cu: goto label_16653c;
        case 0x166540u: goto label_166540;
        case 0x166544u: goto label_166544;
        case 0x166548u: goto label_166548;
        case 0x16654cu: goto label_16654c;
        case 0x166550u: goto label_166550;
        case 0x166554u: goto label_166554;
        case 0x166558u: goto label_166558;
        case 0x16655cu: goto label_16655c;
        case 0x166560u: goto label_166560;
        case 0x166564u: goto label_166564;
        case 0x166568u: goto label_166568;
        case 0x16656cu: goto label_16656c;
        case 0x166570u: goto label_166570;
        case 0x166574u: goto label_166574;
        case 0x166578u: goto label_166578;
        case 0x16657cu: goto label_16657c;
        case 0x166580u: goto label_166580;
        case 0x166584u: goto label_166584;
        case 0x166588u: goto label_166588;
        case 0x16658cu: goto label_16658c;
        case 0x166590u: goto label_166590;
        case 0x166594u: goto label_166594;
        case 0x166598u: goto label_166598;
        case 0x16659cu: goto label_16659c;
        case 0x1665a0u: goto label_1665a0;
        case 0x1665a4u: goto label_1665a4;
        case 0x1665a8u: goto label_1665a8;
        case 0x1665acu: goto label_1665ac;
        case 0x1665b0u: goto label_1665b0;
        case 0x1665b4u: goto label_1665b4;
        case 0x1665b8u: goto label_1665b8;
        case 0x1665bcu: goto label_1665bc;
        case 0x1665c0u: goto label_1665c0;
        case 0x1665c4u: goto label_1665c4;
        case 0x1665c8u: goto label_1665c8;
        case 0x1665ccu: goto label_1665cc;
        case 0x1665d0u: goto label_1665d0;
        case 0x1665d4u: goto label_1665d4;
        case 0x1665d8u: goto label_1665d8;
        case 0x1665dcu: goto label_1665dc;
        case 0x1665e0u: goto label_1665e0;
        case 0x1665e4u: goto label_1665e4;
        case 0x1665e8u: goto label_1665e8;
        case 0x1665ecu: goto label_1665ec;
        case 0x1665f0u: goto label_1665f0;
        case 0x1665f4u: goto label_1665f4;
        case 0x1665f8u: goto label_1665f8;
        case 0x1665fcu: goto label_1665fc;
        case 0x166600u: goto label_166600;
        case 0x166604u: goto label_166604;
        case 0x166608u: goto label_166608;
        case 0x16660cu: goto label_16660c;
        case 0x166610u: goto label_166610;
        case 0x166614u: goto label_166614;
        case 0x166618u: goto label_166618;
        case 0x16661cu: goto label_16661c;
        case 0x166620u: goto label_166620;
        case 0x166624u: goto label_166624;
        case 0x166628u: goto label_166628;
        case 0x16662cu: goto label_16662c;
        case 0x166630u: goto label_166630;
        case 0x166634u: goto label_166634;
        case 0x166638u: goto label_166638;
        case 0x16663cu: goto label_16663c;
        case 0x166640u: goto label_166640;
        case 0x166644u: goto label_166644;
        case 0x166648u: goto label_166648;
        case 0x16664cu: goto label_16664c;
        case 0x166650u: goto label_166650;
        case 0x166654u: goto label_166654;
        case 0x166658u: goto label_166658;
        case 0x16665cu: goto label_16665c;
        case 0x166660u: goto label_166660;
        case 0x166664u: goto label_166664;
        case 0x166668u: goto label_166668;
        case 0x16666cu: goto label_16666c;
        case 0x166670u: goto label_166670;
        case 0x166674u: goto label_166674;
        case 0x166678u: goto label_166678;
        case 0x16667cu: goto label_16667c;
        case 0x166680u: goto label_166680;
        case 0x166684u: goto label_166684;
        case 0x166688u: goto label_166688;
        case 0x16668cu: goto label_16668c;
        case 0x166690u: goto label_166690;
        case 0x166694u: goto label_166694;
        case 0x166698u: goto label_166698;
        case 0x16669cu: goto label_16669c;
        case 0x1666a0u: goto label_1666a0;
        case 0x1666a4u: goto label_1666a4;
        case 0x1666a8u: goto label_1666a8;
        case 0x1666acu: goto label_1666ac;
        case 0x1666b0u: goto label_1666b0;
        case 0x1666b4u: goto label_1666b4;
        case 0x1666b8u: goto label_1666b8;
        case 0x1666bcu: goto label_1666bc;
        case 0x1666c0u: goto label_1666c0;
        case 0x1666c4u: goto label_1666c4;
        case 0x1666c8u: goto label_1666c8;
        case 0x1666ccu: goto label_1666cc;
        case 0x1666d0u: goto label_1666d0;
        case 0x1666d4u: goto label_1666d4;
        case 0x1666d8u: goto label_1666d8;
        case 0x1666dcu: goto label_1666dc;
        case 0x1666e0u: goto label_1666e0;
        case 0x1666e4u: goto label_1666e4;
        default: break;
    }

    ctx->pc = 0x1664d8u;

label_1664d8:
    // 0x1664d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1664d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1664dc:
    // 0x1664dc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1664dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1664e0:
    // 0x1664e0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1664e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1664e4:
    // 0x1664e4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1664e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1664e8:
    // 0x1664e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1664e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1664ec:
    // 0x1664ec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1664ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1664f0:
    // 0x1664f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1664f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1664f4:
    // 0x1664f4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1664f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1664f8:
    // 0x1664f8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1664f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1664fc:
    // 0x1664fc: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1664fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_166500:
    // 0x166500: 0x26300048  addiu       $s0, $s1, 0x48
    ctx->pc = 0x166500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_166504:
    // 0x166504: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x166504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_166508:
    // 0x166508: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x166508u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16650c:
    // 0x16650c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16650cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_166510:
    // 0x166510: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x166510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_166514:
    // 0x166514: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x166514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_166518:
    // 0x166518: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x166518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_16651c:
    // 0x16651c: 0x40f809  jalr        $v0
label_166520:
    if (ctx->pc == 0x166520u) {
        ctx->pc = 0x166520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16651Cu;
        // 0x166520: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166524u;
        goto label_166524;
    }
    ctx->pc = 0x16651Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166524u);
        ctx->pc = 0x166520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16651Cu;
        // 0x166520: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16651Cu, 0x166524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166524u;
label_166524:
    // 0x166524: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x166524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_166528:
    // 0x166528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16652c:
    // 0x16652c: 0xc137882  jal         func_4DE208
label_166530:
    if (ctx->pc == 0x166530u) {
        ctx->pc = 0x166530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16652Cu;
        // 0x166530: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166534u;
        goto label_166534;
    }
    ctx->pc = 0x16652Cu;
    SET_GPR_U32(ctx, 31, 0x166534u);
    ctx->pc = 0x166530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16652Cu;
    // 0x166530: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x16652Cu, 0x166534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166534u;
label_166534:
    // 0x166534: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x166534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166538:
    // 0x166538: 0x52b6003d  beql        $s5, $s6, . + 4 + (0x3D << 2)
label_16653c:
    if (ctx->pc == 0x16653Cu) {
        ctx->pc = 0x16653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166538u;
        // 0x16653c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166540u;
        goto label_166540;
    }
    ctx->pc = 0x166538u;
    {
        const bool branch_taken_0x166538 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        if (branch_taken_0x166538) {
            ctx->pc = 0x16653Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166538u;
            // 0x16653c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166630u;
            goto label_166630;
        }
    }
    ctx->pc = 0x166540u;
label_166540:
    // 0x166540: 0xc087502  jal         func_21D408
label_166544:
    if (ctx->pc == 0x166544u) {
        ctx->pc = 0x166544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166540u;
        // 0x166544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166548u;
        goto label_166548;
    }
    ctx->pc = 0x166540u;
    SET_GPR_U32(ctx, 31, 0x166548u);
    ctx->pc = 0x166544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166540u;
    // 0x166544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x166540u, 0x166548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166548u;
label_166548:
    // 0x166548: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x166548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16654c:
    // 0x16654c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166550:
    // 0x166550: 0x1682001c  bne         $s4, $v0, . + 4 + (0x1C << 2)
label_166554:
    if (ctx->pc == 0x166554u) {
        ctx->pc = 0x166554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166550u;
        // 0x166554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166558u;
        goto label_166558;
    }
    ctx->pc = 0x166550u;
    {
        const bool branch_taken_0x166550 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x166554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166550u;
        // 0x166554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166550) {
            ctx->pc = 0x1665C4u;
            goto label_1665c4;
        }
    }
    ctx->pc = 0x166558u;
label_166558:
    // 0x166558: 0x86650210  lh          $a1, 0x210($s3)
    ctx->pc = 0x166558u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 528)));
label_16655c:
    // 0x16655c: 0x4a00019  bltz        $a1, . + 4 + (0x19 << 2)
label_166560:
    if (ctx->pc == 0x166560u) {
        ctx->pc = 0x166560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16655Cu;
        // 0x166560: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166564u;
        goto label_166564;
    }
    ctx->pc = 0x16655Cu;
    {
        const bool branch_taken_0x16655c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x166560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16655Cu;
        // 0x166560: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16655c) {
            ctx->pc = 0x1665C4u;
            goto label_1665c4;
        }
    }
    ctx->pc = 0x166564u;
label_166564:
    // 0x166564: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x166564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_166568:
    // 0x166568: 0xa62018  mult        $a0, $a1, $a2
    ctx->pc = 0x166568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_16656c:
    // 0x16656c: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x16656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_166570:
    // 0x166570: 0x84440692  lh          $a0, 0x692($v0)
    ctx->pc = 0x166570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1682)));
label_166574:
    // 0x166574: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_166578:
    if (ctx->pc == 0x166578u) {
        ctx->pc = 0x166578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166574u;
        // 0x166578: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16657Cu;
        goto label_16657c;
    }
    ctx->pc = 0x166574u;
    {
        const bool branch_taken_0x166574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x166578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166574u;
        // 0x166578: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166574) {
            ctx->pc = 0x1665C0u;
            goto label_1665c0;
        }
    }
    ctx->pc = 0x16657Cu;
label_16657c:
    // 0x16657c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_166580:
    if (ctx->pc == 0x166580u) {
        ctx->pc = 0x166580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16657Cu;
        // 0x166580: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166584u;
        goto label_166584;
    }
    ctx->pc = 0x16657Cu;
    {
        const bool branch_taken_0x16657c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x166580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16657Cu;
        // 0x166580: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16657c) {
            ctx->pc = 0x1665C0u;
            goto label_1665c0;
        }
    }
    ctx->pc = 0x166584u;
label_166584:
    // 0x166584: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
label_166588:
    if (ctx->pc == 0x166588u) {
        ctx->pc = 0x166588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166584u;
        // 0x166588: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16658Cu;
        goto label_16658c;
    }
    ctx->pc = 0x166584u;
    {
        const bool branch_taken_0x166584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x166588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166584u;
        // 0x166588: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166584) {
            ctx->pc = 0x1665C0u;
            goto label_1665c0;
        }
    }
    ctx->pc = 0x16658Cu;
label_16658c:
    // 0x16658c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
label_166590:
    if (ctx->pc == 0x166590u) {
        ctx->pc = 0x166590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16658Cu;
        // 0x166590: 0xa61018  mult        $v0, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x166594u;
        goto label_166594;
    }
    ctx->pc = 0x16658Cu;
    {
        const bool branch_taken_0x16658c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x166590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16658Cu;
        // 0x166590: 0xa61018  mult        $v0, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16658c) {
            ctx->pc = 0x1665C0u;
            goto label_1665c0;
        }
    }
    ctx->pc = 0x166594u;
label_166594:
    // 0x166594: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x166594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_166598:
    // 0x166598: 0x8c65489c  lw          $a1, 0x489C($v1)
    ctx->pc = 0x166598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_16659c:
    // 0x16659c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x16659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1665a0:
    // 0x1665a0: 0x8482069c  lh          $v0, 0x69C($a0)
    ctx->pc = 0x1665a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1692)));
label_1665a4:
    // 0x1665a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1665a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1665a8:
    // 0x1665a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1665a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1665ac:
    // 0x1665ac: 0xa4c2069c  sh          $v0, 0x69C($a2)
    ctx->pc = 0x1665acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1692), (uint16_t)GPR_U32(ctx, 2));
label_1665b0:
    // 0x1665b0: 0x94a30432  lhu         $v1, 0x432($a1)
    ctx->pc = 0x1665b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1074)));
label_1665b4:
    // 0x1665b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1665b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1665b8:
    // 0x1665b8: 0xa4a30432  sh          $v1, 0x432($a1)
    ctx->pc = 0x1665b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1074), (uint16_t)GPR_U32(ctx, 3));
label_1665bc:
    // 0x1665bc: 0xa6760210  sh          $s6, 0x210($s3)
    ctx->pc = 0x1665bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 528), (uint16_t)GPR_U32(ctx, 22));
label_1665c0:
    // 0x1665c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1665c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1665c4:
    // 0x1665c4: 0xc05959e  jal         func_165678
label_1665c8:
    if (ctx->pc == 0x1665C8u) {
        ctx->pc = 0x1665C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665C4u;
        // 0x1665c8: 0x3c14006f  lui         $s4, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665CCu;
        goto label_1665cc;
    }
    ctx->pc = 0x1665C4u;
    SET_GPR_U32(ctx, 31, 0x1665CCu);
    ctx->pc = 0x1665C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665C4u;
    // 0x1665c8: 0x3c14006f  lui         $s4, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x1665C4u, 0x1665CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665CCu;
label_1665cc:
    // 0x1665cc: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_1665d0:
    if (ctx->pc == 0x1665D0u) {
        ctx->pc = 0x1665D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665CCu;
        // 0x1665d0: 0x26300048  addiu       $s0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665D4u;
        goto label_1665d4;
    }
    ctx->pc = 0x1665CCu;
    {
        const bool branch_taken_0x1665cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1665D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665CCu;
        // 0x1665d0: 0x26300048  addiu       $s0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665cc) {
            ctx->pc = 0x1665DCu;
            goto label_1665dc;
        }
    }
    ctx->pc = 0x1665D4u;
label_1665d4:
    // 0x1665d4: 0x8e82bd30  lw          $v0, -0x42D0($s4)
    ctx->pc = 0x1665d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
label_1665d8:
    // 0x1665d8: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1665d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_1665dc:
    // 0x1665dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1665dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1665e0:
    // 0x1665e0: 0xc13788e  jal         func_4DE238
label_1665e4:
    if (ctx->pc == 0x1665E4u) {
        ctx->pc = 0x1665E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665E0u;
        // 0x1665e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665E8u;
        goto label_1665e8;
    }
    ctx->pc = 0x1665E0u;
    SET_GPR_U32(ctx, 31, 0x1665E8u);
    ctx->pc = 0x1665E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665E0u;
    // 0x1665e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE238u, 0x1665E0u, 0x1665E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665E8u;
label_1665e8:
    // 0x1665e8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1665e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1665ec:
    // 0x1665ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1665f0:
    if (ctx->pc == 0x1665F0u) {
        ctx->pc = 0x1665F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665ECu;
        // 0x1665f0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665F4u;
        goto label_1665f4;
    }
    ctx->pc = 0x1665ECu;
    {
        const bool branch_taken_0x1665ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1665F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665ECu;
        // 0x1665f0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1665ec) {
            ctx->pc = 0x166600u;
            goto label_166600;
        }
    }
    ctx->pc = 0x1665F4u;
label_1665f4:
    // 0x1665f4: 0xc0a3630  jal         func_28D8C0
label_1665f8:
    if (ctx->pc == 0x1665F8u) {
        ctx->pc = 0x1665F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1665F4u;
        // 0x1665f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1665FCu;
        goto label_1665fc;
    }
    ctx->pc = 0x1665F4u;
    SET_GPR_U32(ctx, 31, 0x1665FCu);
    ctx->pc = 0x1665F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1665F4u;
    // 0x1665f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x1665F4u, 0x1665FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665FCu;
label_1665fc:
    // 0x1665fc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1665fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_166600:
    // 0x166600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166604:
    // 0x166604: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x166604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_166608:
    // 0x166608: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x166608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_16660c:
    // 0x16660c: 0xafb20024  sw          $s2, 0x24($sp)
    ctx->pc = 0x16660cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 18));
label_166610:
    // 0x166610: 0xc136b80  jal         func_4DAE00
label_166614:
    if (ctx->pc == 0x166614u) {
        ctx->pc = 0x166614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166610u;
        // 0x166614: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166618u;
        goto label_166618;
    }
    ctx->pc = 0x166610u;
    SET_GPR_U32(ctx, 31, 0x166618u);
    ctx->pc = 0x166614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166610u;
    // 0x166614: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x166610u, 0x166618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166618u;
label_166618:
    // 0x166618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16661c:
    // 0x16661c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x16661cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_166620:
    // 0x166620: 0x2685bd30  addiu       $a1, $s4, -0x42D0
    ctx->pc = 0x166620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950192));
label_166624:
    // 0x166624: 0xc059308  jal         func_164C20
label_166628:
    if (ctx->pc == 0x166628u) {
        ctx->pc = 0x166628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166624u;
        // 0x166628: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16662Cu;
        goto label_16662c;
    }
    ctx->pc = 0x166624u;
    SET_GPR_U32(ctx, 31, 0x16662Cu);
    ctx->pc = 0x166628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166624u;
    // 0x166628: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C20u, 0x166624u, 0x16662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16662Cu;
label_16662c:
    // 0x16662c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x16662cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_166630:
    // 0x166630: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x166630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_166634:
    // 0x166634: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x166634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_166638:
    // 0x166638: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x166638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16663c:
    // 0x16663c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x16663cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_166640:
    // 0x166640: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x166640u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_166644:
    // 0x166644: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x166644u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_166648:
    // 0x166648: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x166648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16664c:
    // 0x16664c: 0x3e00008  jr          $ra
label_166650:
    if (ctx->pc == 0x166650u) {
        ctx->pc = 0x166650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16664Cu;
        // 0x166650: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166654u;
        goto label_166654;
    }
    ctx->pc = 0x16664Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16664Cu;
        // 0x166650: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16664Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166654u;
label_166654:
    // 0x166654: 0x0  nop
    ctx->pc = 0x166654u;
    // NOP
label_166658:
    // 0x166658: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x166658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16665c:
    // 0x16665c: 0x0  nop
    ctx->pc = 0x16665cu;
    // NOP
label_166660:
    // 0x166660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_166664:
    // 0x166664: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x166664u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_166668:
    // 0x166668: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x166668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_16666c:
    // 0x16666c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x16666cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_166670:
    // 0x166670: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x166670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_166674:
    // 0x166674: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x166674u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
label_166678:
    // 0x166678: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x166678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_16667c:
    // 0x16667c: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x16667cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
label_166680:
    // 0x166680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_166684:
    // 0x166684: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x166684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_166688:
    // 0x166688: 0xc137826  jal         func_4DE098
label_16668c:
    if (ctx->pc == 0x16668Cu) {
        ctx->pc = 0x16668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166688u;
        // 0x16668c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166690u;
        goto label_166690;
    }
    ctx->pc = 0x166688u;
    SET_GPR_U32(ctx, 31, 0x166690u);
    ctx->pc = 0x16668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166688u;
    // 0x16668c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x166688u, 0x166690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166690u;
label_166690:
    // 0x166690: 0x84500002  lh          $s0, 0x2($v0)
    ctx->pc = 0x166690u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_166694:
    // 0x166694: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_166698:
    // 0x166698: 0x52020015  beql        $s0, $v0, . + 4 + (0x15 << 2)
label_16669c:
    if (ctx->pc == 0x16669Cu) {
        ctx->pc = 0x16669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166698u;
        // 0x16669c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666A0u;
        goto label_1666a0;
    }
    ctx->pc = 0x166698u;
    {
        const bool branch_taken_0x166698 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x166698) {
            ctx->pc = 0x16669Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166698u;
            // 0x16669c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1666F0u;
            return;
        }
    }
    ctx->pc = 0x1666A0u;
label_1666a0:
    // 0x1666a0: 0xc0e402c  jal         func_3900B0
label_1666a4:
    if (ctx->pc == 0x1666A4u) {
        ctx->pc = 0x1666A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666A0u;
        // 0x1666a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666A8u;
        goto label_1666a8;
    }
    ctx->pc = 0x1666A0u;
    SET_GPR_U32(ctx, 31, 0x1666A8u);
    ctx->pc = 0x1666A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1666A0u;
    // 0x1666a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x1666A0u, 0x1666A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666A8u;
label_1666a8:
    // 0x1666a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1666ac:
    if (ctx->pc == 0x1666ACu) {
        ctx->pc = 0x1666ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666A8u;
        // 0x1666ac: 0x2e22000d  sltiu       $v0, $s1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666B0u;
        goto label_1666b0;
    }
    ctx->pc = 0x1666A8u;
    {
        const bool branch_taken_0x1666a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1666ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666A8u;
        // 0x1666ac: 0x2e22000d  sltiu       $v0, $s1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666a8) {
            ctx->pc = 0x1666E8u;
            return;
        }
    }
    ctx->pc = 0x1666B0u;
label_1666b0:
    // 0x1666b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1666b4:
    if (ctx->pc == 0x1666B4u) {
        ctx->pc = 0x1666B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666B0u;
        // 0x1666b4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666B8u;
        goto label_1666b8;
    }
    ctx->pc = 0x1666B0u;
    {
        const bool branch_taken_0x1666b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1666B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666B0u;
        // 0x1666b4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666b0) {
            ctx->pc = 0x1666E8u;
            return;
        }
    }
    ctx->pc = 0x1666B8u;
label_1666b8:
    // 0x1666b8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1666b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1666bc:
    // 0x1666bc: 0x24421100  addiu       $v0, $v0, 0x1100
    ctx->pc = 0x1666bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
label_1666c0:
    // 0x1666c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1666c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1666c4:
    // 0x1666c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1666c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1666c8:
    // 0x1666c8: 0x800008  jr          $a0
label_1666cc:
    if (ctx->pc == 0x1666CCu) {
        ctx->pc = 0x1666D0u;
        goto label_1666d0;
    }
    ctx->pc = 0x1666C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1666D0u: goto label_1666d0;
            case 0x1666D8u: goto label_1666d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1666C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1666D0u;
label_1666d0:
    // 0x1666d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1666d4:
    if (ctx->pc == 0x1666D4u) {
        ctx->pc = 0x1666D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666D0u;
        // 0x1666d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666D8u;
        goto label_1666d8;
    }
    ctx->pc = 0x1666D0u;
    {
        const bool branch_taken_0x1666d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1666D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666D0u;
        // 0x1666d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666d0) {
            ctx->pc = 0x1666ECu;
            return;
        }
    }
    ctx->pc = 0x1666D8u;
label_1666d8:
    // 0x1666d8: 0x2121826  xor         $v1, $s0, $s2
    ctx->pc = 0x1666d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 18));
label_1666dc:
    // 0x1666dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1666dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1666e0:
    // 0x1666e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1666e4:
    if (ctx->pc == 0x1666E4u) {
        ctx->pc = 0x1666E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666E0u;
        // 0x1666e4: 0x203100b  movn        $v0, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1666E8u;
        goto label_fallthrough_0x1666e0;
    }
    ctx->pc = 0x1666E0u;
    {
        const bool branch_taken_0x1666e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1666E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1666E0u;
        // 0x1666e4: 0x203100b  movn        $v0, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666e0) {
            ctx->pc = 0x1666ECu;
            return;
        }
    }
label_fallthrough_0x1666e0:
    ctx->pc = 0x1666E8u;
}
