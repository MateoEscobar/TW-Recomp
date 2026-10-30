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

// Function: sub_00269510
// Address: 0x269510 - 0x269670
void sub_00269510_0x269510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269510_0x269510");
#endif

    switch (ctx->pc) {
        case 0x269510u: goto label_269510;
        case 0x269514u: goto label_269514;
        case 0x269518u: goto label_269518;
        case 0x26951cu: goto label_26951c;
        case 0x269520u: goto label_269520;
        case 0x269524u: goto label_269524;
        case 0x269528u: goto label_269528;
        case 0x26952cu: goto label_26952c;
        case 0x269530u: goto label_269530;
        case 0x269534u: goto label_269534;
        case 0x269538u: goto label_269538;
        case 0x26953cu: goto label_26953c;
        case 0x269540u: goto label_269540;
        case 0x269544u: goto label_269544;
        case 0x269548u: goto label_269548;
        case 0x26954cu: goto label_26954c;
        case 0x269550u: goto label_269550;
        case 0x269554u: goto label_269554;
        case 0x269558u: goto label_269558;
        case 0x26955cu: goto label_26955c;
        case 0x269560u: goto label_269560;
        case 0x269564u: goto label_269564;
        case 0x269568u: goto label_269568;
        case 0x26956cu: goto label_26956c;
        case 0x269570u: goto label_269570;
        case 0x269574u: goto label_269574;
        case 0x269578u: goto label_269578;
        case 0x26957cu: goto label_26957c;
        case 0x269580u: goto label_269580;
        case 0x269584u: goto label_269584;
        case 0x269588u: goto label_269588;
        case 0x26958cu: goto label_26958c;
        case 0x269590u: goto label_269590;
        case 0x269594u: goto label_269594;
        case 0x269598u: goto label_269598;
        case 0x26959cu: goto label_26959c;
        case 0x2695a0u: goto label_2695a0;
        case 0x2695a4u: goto label_2695a4;
        case 0x2695a8u: goto label_2695a8;
        case 0x2695acu: goto label_2695ac;
        case 0x2695b0u: goto label_2695b0;
        case 0x2695b4u: goto label_2695b4;
        case 0x2695b8u: goto label_2695b8;
        case 0x2695bcu: goto label_2695bc;
        case 0x2695c0u: goto label_2695c0;
        case 0x2695c4u: goto label_2695c4;
        case 0x2695c8u: goto label_2695c8;
        case 0x2695ccu: goto label_2695cc;
        case 0x2695d0u: goto label_2695d0;
        case 0x2695d4u: goto label_2695d4;
        case 0x2695d8u: goto label_2695d8;
        case 0x2695dcu: goto label_2695dc;
        case 0x2695e0u: goto label_2695e0;
        case 0x2695e4u: goto label_2695e4;
        case 0x2695e8u: goto label_2695e8;
        case 0x2695ecu: goto label_2695ec;
        case 0x2695f0u: goto label_2695f0;
        case 0x2695f4u: goto label_2695f4;
        case 0x2695f8u: goto label_2695f8;
        case 0x2695fcu: goto label_2695fc;
        case 0x269600u: goto label_269600;
        case 0x269604u: goto label_269604;
        case 0x269608u: goto label_269608;
        case 0x26960cu: goto label_26960c;
        case 0x269610u: goto label_269610;
        case 0x269614u: goto label_269614;
        case 0x269618u: goto label_269618;
        case 0x26961cu: goto label_26961c;
        case 0x269620u: goto label_269620;
        case 0x269624u: goto label_269624;
        case 0x269628u: goto label_269628;
        case 0x26962cu: goto label_26962c;
        case 0x269630u: goto label_269630;
        case 0x269634u: goto label_269634;
        case 0x269638u: goto label_269638;
        case 0x26963cu: goto label_26963c;
        case 0x269640u: goto label_269640;
        case 0x269644u: goto label_269644;
        case 0x269648u: goto label_269648;
        case 0x26964cu: goto label_26964c;
        case 0x269650u: goto label_269650;
        case 0x269654u: goto label_269654;
        case 0x269658u: goto label_269658;
        case 0x26965cu: goto label_26965c;
        case 0x269660u: goto label_269660;
        case 0x269664u: goto label_269664;
        case 0x269668u: goto label_269668;
        case 0x26966cu: goto label_26966c;
        default: break;
    }

    ctx->pc = 0x269510u;

label_269510:
    // 0x269510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x269510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_269514:
    // 0x269514: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x269514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_269518:
    // 0x269518: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x269518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_26951c:
    // 0x26951c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_269520:
    // 0x269520: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x269520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_269524:
    // 0x269524: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x269524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_269528:
    // 0x269528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26952c:
    // 0x26952c: 0xc08bf92  jal         func_22FE48
label_269530:
    if (ctx->pc == 0x269530u) {
        ctx->pc = 0x269530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26952Cu;
        // 0x269530: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269534u;
        goto label_269534;
    }
    ctx->pc = 0x26952Cu;
    SET_GPR_U32(ctx, 31, 0x269534u);
    ctx->pc = 0x269530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26952Cu;
    // 0x269530: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x26952Cu, 0x269534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269534u;
label_269534:
    // 0x269534: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x269534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_269538:
    // 0x269538: 0xc089990  jal         func_226640
label_26953c:
    if (ctx->pc == 0x26953Cu) {
        ctx->pc = 0x26953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269538u;
        // 0x26953c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269540u;
        goto label_269540;
    }
    ctx->pc = 0x269538u;
    SET_GPR_U32(ctx, 31, 0x269540u);
    ctx->pc = 0x26953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269538u;
    // 0x26953c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x269538u, 0x269540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269540u;
label_269540:
    // 0x269540: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x269540u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_269544:
    // 0x269544: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x269544u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_269548:
    // 0x269548: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x269548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_26954c:
    // 0x26954c: 0xc041532  jal         func_1054C8
label_269550:
    if (ctx->pc == 0x269550u) {
        ctx->pc = 0x269550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26954Cu;
        // 0x269550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269554u;
        goto label_269554;
    }
    ctx->pc = 0x26954Cu;
    SET_GPR_U32(ctx, 31, 0x269554u);
    ctx->pc = 0x269550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26954Cu;
    // 0x269550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26954Cu, 0x269554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269554u;
label_269554:
    // 0x269554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269558:
    // 0x269558: 0xc041532  jal         func_1054C8
label_26955c:
    if (ctx->pc == 0x26955Cu) {
        ctx->pc = 0x26955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269558u;
        // 0x26955c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269560u;
        goto label_269560;
    }
    ctx->pc = 0x269558u;
    SET_GPR_U32(ctx, 31, 0x269560u);
    ctx->pc = 0x26955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269558u;
    // 0x26955c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269558u, 0x269560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269560u;
label_269560:
    // 0x269560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269564:
    // 0x269564: 0xc041532  jal         func_1054C8
label_269568:
    if (ctx->pc == 0x269568u) {
        ctx->pc = 0x269568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269564u;
        // 0x269568: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26956Cu;
        goto label_26956c;
    }
    ctx->pc = 0x269564u;
    SET_GPR_U32(ctx, 31, 0x26956Cu);
    ctx->pc = 0x269568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269564u;
    // 0x269568: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x269564u, 0x26956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26956Cu;
label_26956c:
    // 0x26956c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26956cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269570:
    // 0x269570: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_269574:
    if (ctx->pc == 0x269574u) {
        ctx->pc = 0x269574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269570u;
        // 0x269574: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269578u;
        goto label_269578;
    }
    ctx->pc = 0x269570u;
    {
        const bool branch_taken_0x269570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x269574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269570u;
        // 0x269574: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269570) {
            ctx->pc = 0x269598u;
            goto label_269598;
        }
    }
    ctx->pc = 0x269578u;
label_269578:
    // 0x269578: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x269578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26957c:
    // 0x26957c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26957cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269580:
    // 0x269580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269584:
    // 0x269584: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x269584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_269588:
    // 0x269588: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x269588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_26958c:
    // 0x26958c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26958cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269590:
    // 0x269590: 0xc041b20  jal         func_106C80
label_269594:
    if (ctx->pc == 0x269594u) {
        ctx->pc = 0x269594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269590u;
        // 0x269594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269598u;
        goto label_269598;
    }
    ctx->pc = 0x269590u;
    SET_GPR_U32(ctx, 31, 0x269598u);
    ctx->pc = 0x269594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269590u;
    // 0x269594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x269590u, 0x269598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269598u;
label_269598:
    // 0x269598: 0xc05d484  jal         func_175210
label_26959c:
    if (ctx->pc == 0x26959Cu) {
        ctx->pc = 0x26959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269598u;
        // 0x26959c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2695A0u;
        goto label_2695a0;
    }
    ctx->pc = 0x269598u;
    SET_GPR_U32(ctx, 31, 0x2695A0u);
    ctx->pc = 0x26959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269598u;
    // 0x26959c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x269598u, 0x2695A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695A0u;
label_2695a0:
    // 0x2695a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2695a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2695a4:
    // 0x2695a4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2695a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2695a8:
    // 0x2695a8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2695a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2695ac:
    // 0x2695ac: 0xa0f809  jalr        $a1
label_2695b0:
    if (ctx->pc == 0x2695B0u) {
        ctx->pc = 0x2695B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695ACu;
        // 0x2695b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2695B4u;
        goto label_2695b4;
    }
    ctx->pc = 0x2695ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2695B4u);
        ctx->pc = 0x2695B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695ACu;
        // 0x2695b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2695ACu, 0x2695B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2695B4u;
label_2695b4:
    // 0x2695b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2695b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2695b8:
    // 0x2695b8: 0xc087016  jal         func_21C058
label_2695bc:
    if (ctx->pc == 0x2695BCu) {
        ctx->pc = 0x2695BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695B8u;
        // 0x2695bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2695C0u;
        goto label_2695c0;
    }
    ctx->pc = 0x2695B8u;
    SET_GPR_U32(ctx, 31, 0x2695C0u);
    ctx->pc = 0x2695BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2695B8u;
    // 0x2695bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2695B8u, 0x2695C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695C0u;
label_2695c0:
    // 0x2695c0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2695c4:
    if (ctx->pc == 0x2695C4u) {
        ctx->pc = 0x2695C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695C0u;
        // 0x2695c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2695C8u;
        goto label_2695c8;
    }
    ctx->pc = 0x2695C0u;
    {
        const bool branch_taken_0x2695c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2695C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695C0u;
        // 0x2695c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695c0) {
            ctx->pc = 0x2695E8u;
            goto label_2695e8;
        }
    }
    ctx->pc = 0x2695C8u;
label_2695c8:
    // 0x2695c8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2695c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2695cc:
    // 0x2695cc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2695ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2695d0:
    // 0x2695d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2695d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2695d4:
    // 0x2695d4: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x2695d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2695d8:
    // 0x2695d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2695d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2695dc:
    // 0x2695dc: 0xc04159e  jal         func_105678
label_2695e0:
    if (ctx->pc == 0x2695E0u) {
        ctx->pc = 0x2695E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695DCu;
        // 0x2695e0: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2695E4u;
        goto label_2695e4;
    }
    ctx->pc = 0x2695DCu;
    SET_GPR_U32(ctx, 31, 0x2695E4u);
    ctx->pc = 0x2695E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2695DCu;
    // 0x2695e0: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2695DCu, 0x2695E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695E4u;
label_2695e4:
    // 0x2695e4: 0x0  nop
    ctx->pc = 0x2695e4u;
    // NOP
label_2695e8:
    // 0x2695e8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2695e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2695ec:
    // 0x2695ec: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2695ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2695f0:
    // 0x2695f0: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_2695f4:
    if (ctx->pc == 0x2695F4u) {
        ctx->pc = 0x2695F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695F0u;
        // 0x2695f4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2695F8u;
        goto label_2695f8;
    }
    ctx->pc = 0x2695F0u;
    {
        const bool branch_taken_0x2695f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2695F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695F0u;
        // 0x2695f4: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695f0) {
            ctx->pc = 0x269638u;
            goto label_269638;
        }
    }
    ctx->pc = 0x2695F8u;
label_2695f8:
    // 0x2695f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2695f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2695fc:
    // 0x2695fc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2695fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_269600:
    // 0x269600: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x269600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_269604:
    // 0x269604: 0x40f809  jalr        $v0
label_269608:
    if (ctx->pc == 0x269608u) {
        ctx->pc = 0x269608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269604u;
        // 0x269608: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26960Cu;
        goto label_26960c;
    }
    ctx->pc = 0x269604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26960Cu);
        ctx->pc = 0x269608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269604u;
        // 0x269608: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269604u, 0x26960Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26960Cu;
label_26960c:
    // 0x26960c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26960cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_269610:
    // 0x269610: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x269610u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_269614:
    // 0x269614: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269618:
    // 0x269618: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x269618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26961c:
    // 0x26961c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26961cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269620:
    // 0x269620: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x269620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_269624:
    // 0x269624: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x269624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_269628:
    // 0x269628: 0x2406006b  addiu       $a2, $zero, 0x6B
    ctx->pc = 0x269628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_26962c:
    // 0x26962c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x26962cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
label_269630:
    // 0x269630: 0xc041664  jal         func_105990
label_269634:
    if (ctx->pc == 0x269634u) {
        ctx->pc = 0x269634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269630u;
        // 0x269634: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269638u;
        goto label_269638;
    }
    ctx->pc = 0x269630u;
    SET_GPR_U32(ctx, 31, 0x269638u);
    ctx->pc = 0x269634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269630u;
    // 0x269634: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x269630u, 0x269638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269638u;
label_269638:
    // 0x269638: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x269638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26963c:
    // 0x26963c: 0xc05d53a  jal         func_1754E8
label_269640:
    if (ctx->pc == 0x269640u) {
        ctx->pc = 0x269640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26963Cu;
        // 0x269640: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269644u;
        goto label_269644;
    }
    ctx->pc = 0x26963Cu;
    SET_GPR_U32(ctx, 31, 0x269644u);
    ctx->pc = 0x269640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26963Cu;
    // 0x269640: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26963Cu, 0x269644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269644u;
label_269644:
    // 0x269644: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x269644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_269648:
    // 0x269648: 0xc05d4f6  jal         func_1753D8
label_26964c:
    if (ctx->pc == 0x26964Cu) {
        ctx->pc = 0x26964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269648u;
        // 0x26964c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269650u;
        goto label_269650;
    }
    ctx->pc = 0x269648u;
    SET_GPR_U32(ctx, 31, 0x269650u);
    ctx->pc = 0x26964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269648u;
    // 0x26964c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x269648u, 0x269650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269650u;
label_269650:
    // 0x269650: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x269650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_269654:
    // 0x269654: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x269654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_269658:
    // 0x269658: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x269658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26965c:
    // 0x26965c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26965cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_269660:
    // 0x269660: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x269660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_269664:
    // 0x269664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_269668:
    // 0x269668: 0x3e00008  jr          $ra
label_26966c:
    if (ctx->pc == 0x26966Cu) {
        ctx->pc = 0x26966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269668u;
        // 0x26966c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269670u;
        goto label_fallthrough_0x269668;
    }
    ctx->pc = 0x269668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269668u;
        // 0x26966c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x269668:
    ctx->pc = 0x269670u;
}
