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

// Function: sub_003174E8
// Address: 0x3174e8 - 0x317700
void sub_003174E8_0x3174e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003174E8_0x3174e8");
#endif

    switch (ctx->pc) {
        case 0x3174e8u: goto label_3174e8;
        case 0x3174ecu: goto label_3174ec;
        case 0x3174f0u: goto label_3174f0;
        case 0x3174f4u: goto label_3174f4;
        case 0x3174f8u: goto label_3174f8;
        case 0x3174fcu: goto label_3174fc;
        case 0x317500u: goto label_317500;
        case 0x317504u: goto label_317504;
        case 0x317508u: goto label_317508;
        case 0x31750cu: goto label_31750c;
        case 0x317510u: goto label_317510;
        case 0x317514u: goto label_317514;
        case 0x317518u: goto label_317518;
        case 0x31751cu: goto label_31751c;
        case 0x317520u: goto label_317520;
        case 0x317524u: goto label_317524;
        case 0x317528u: goto label_317528;
        case 0x31752cu: goto label_31752c;
        case 0x317530u: goto label_317530;
        case 0x317534u: goto label_317534;
        case 0x317538u: goto label_317538;
        case 0x31753cu: goto label_31753c;
        case 0x317540u: goto label_317540;
        case 0x317544u: goto label_317544;
        case 0x317548u: goto label_317548;
        case 0x31754cu: goto label_31754c;
        case 0x317550u: goto label_317550;
        case 0x317554u: goto label_317554;
        case 0x317558u: goto label_317558;
        case 0x31755cu: goto label_31755c;
        case 0x317560u: goto label_317560;
        case 0x317564u: goto label_317564;
        case 0x317568u: goto label_317568;
        case 0x31756cu: goto label_31756c;
        case 0x317570u: goto label_317570;
        case 0x317574u: goto label_317574;
        case 0x317578u: goto label_317578;
        case 0x31757cu: goto label_31757c;
        case 0x317580u: goto label_317580;
        case 0x317584u: goto label_317584;
        case 0x317588u: goto label_317588;
        case 0x31758cu: goto label_31758c;
        case 0x317590u: goto label_317590;
        case 0x317594u: goto label_317594;
        case 0x317598u: goto label_317598;
        case 0x31759cu: goto label_31759c;
        case 0x3175a0u: goto label_3175a0;
        case 0x3175a4u: goto label_3175a4;
        case 0x3175a8u: goto label_3175a8;
        case 0x3175acu: goto label_3175ac;
        case 0x3175b0u: goto label_3175b0;
        case 0x3175b4u: goto label_3175b4;
        case 0x3175b8u: goto label_3175b8;
        case 0x3175bcu: goto label_3175bc;
        case 0x3175c0u: goto label_3175c0;
        case 0x3175c4u: goto label_3175c4;
        case 0x3175c8u: goto label_3175c8;
        case 0x3175ccu: goto label_3175cc;
        case 0x3175d0u: goto label_3175d0;
        case 0x3175d4u: goto label_3175d4;
        case 0x3175d8u: goto label_3175d8;
        case 0x3175dcu: goto label_3175dc;
        case 0x3175e0u: goto label_3175e0;
        case 0x3175e4u: goto label_3175e4;
        case 0x3175e8u: goto label_3175e8;
        case 0x3175ecu: goto label_3175ec;
        case 0x3175f0u: goto label_3175f0;
        case 0x3175f4u: goto label_3175f4;
        case 0x3175f8u: goto label_3175f8;
        case 0x3175fcu: goto label_3175fc;
        case 0x317600u: goto label_317600;
        case 0x317604u: goto label_317604;
        case 0x317608u: goto label_317608;
        case 0x31760cu: goto label_31760c;
        case 0x317610u: goto label_317610;
        case 0x317614u: goto label_317614;
        case 0x317618u: goto label_317618;
        case 0x31761cu: goto label_31761c;
        case 0x317620u: goto label_317620;
        case 0x317624u: goto label_317624;
        case 0x317628u: goto label_317628;
        case 0x31762cu: goto label_31762c;
        case 0x317630u: goto label_317630;
        case 0x317634u: goto label_317634;
        case 0x317638u: goto label_317638;
        case 0x31763cu: goto label_31763c;
        case 0x317640u: goto label_317640;
        case 0x317644u: goto label_317644;
        case 0x317648u: goto label_317648;
        case 0x31764cu: goto label_31764c;
        case 0x317650u: goto label_317650;
        case 0x317654u: goto label_317654;
        case 0x317658u: goto label_317658;
        case 0x31765cu: goto label_31765c;
        case 0x317660u: goto label_317660;
        case 0x317664u: goto label_317664;
        case 0x317668u: goto label_317668;
        case 0x31766cu: goto label_31766c;
        case 0x317670u: goto label_317670;
        case 0x317674u: goto label_317674;
        case 0x317678u: goto label_317678;
        case 0x31767cu: goto label_31767c;
        case 0x317680u: goto label_317680;
        case 0x317684u: goto label_317684;
        case 0x317688u: goto label_317688;
        case 0x31768cu: goto label_31768c;
        case 0x317690u: goto label_317690;
        case 0x317694u: goto label_317694;
        case 0x317698u: goto label_317698;
        case 0x31769cu: goto label_31769c;
        case 0x3176a0u: goto label_3176a0;
        case 0x3176a4u: goto label_3176a4;
        case 0x3176a8u: goto label_3176a8;
        case 0x3176acu: goto label_3176ac;
        case 0x3176b0u: goto label_3176b0;
        case 0x3176b4u: goto label_3176b4;
        case 0x3176b8u: goto label_3176b8;
        case 0x3176bcu: goto label_3176bc;
        case 0x3176c0u: goto label_3176c0;
        case 0x3176c4u: goto label_3176c4;
        case 0x3176c8u: goto label_3176c8;
        case 0x3176ccu: goto label_3176cc;
        case 0x3176d0u: goto label_3176d0;
        case 0x3176d4u: goto label_3176d4;
        case 0x3176d8u: goto label_3176d8;
        case 0x3176dcu: goto label_3176dc;
        case 0x3176e0u: goto label_3176e0;
        case 0x3176e4u: goto label_3176e4;
        case 0x3176e8u: goto label_3176e8;
        case 0x3176ecu: goto label_3176ec;
        case 0x3176f0u: goto label_3176f0;
        case 0x3176f4u: goto label_3176f4;
        case 0x3176f8u: goto label_3176f8;
        case 0x3176fcu: goto label_3176fc;
        default: break;
    }

    ctx->pc = 0x3174e8u;

label_3174e8:
    // 0x3174e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3174e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3174ec:
    // 0x3174ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3174ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3174f0:
    // 0x3174f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3174f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3174f4:
    // 0x3174f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3174f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3174f8:
    // 0x3174f8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3174f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3174fc:
    // 0x3174fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3174fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_317500:
    // 0x317500: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x317500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_317504:
    // 0x317504: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x317504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_317508:
    // 0x317508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31750c:
    // 0x31750c: 0xc05959e  jal         func_165678
label_317510:
    if (ctx->pc == 0x317510u) {
        ctx->pc = 0x317510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31750Cu;
        // 0x317510: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317514u;
        goto label_317514;
    }
    ctx->pc = 0x31750Cu;
    SET_GPR_U32(ctx, 31, 0x317514u);
    ctx->pc = 0x317510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31750Cu;
    // 0x317510: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31750Cu, 0x317514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317514u;
label_317514:
    // 0x317514: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x317514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317518:
    // 0x317518: 0x12400070  beqz        $s2, . + 4 + (0x70 << 2)
label_31751c:
    if (ctx->pc == 0x31751Cu) {
        ctx->pc = 0x31751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317518u;
        // 0x31751c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317520u;
        goto label_317520;
    }
    ctx->pc = 0x317518u;
    {
        const bool branch_taken_0x317518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317518u;
        // 0x31751c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317518) {
            ctx->pc = 0x3176DCu;
            goto label_3176dc;
        }
    }
    ctx->pc = 0x317520u;
label_317520:
    // 0x317520: 0xc087502  jal         func_21D408
label_317524:
    if (ctx->pc == 0x317524u) {
        ctx->pc = 0x317524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317520u;
        // 0x317524: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317528u;
        goto label_317528;
    }
    ctx->pc = 0x317520u;
    SET_GPR_U32(ctx, 31, 0x317528u);
    ctx->pc = 0x317524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317520u;
    // 0x317524: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x317520u, 0x317528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317528u;
label_317528:
    // 0x317528: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31752c:
    // 0x31752c: 0xc0a3630  jal         func_28D8C0
label_317530:
    if (ctx->pc == 0x317530u) {
        ctx->pc = 0x317530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31752Cu;
        // 0x317530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317534u;
        goto label_317534;
    }
    ctx->pc = 0x31752Cu;
    SET_GPR_U32(ctx, 31, 0x317534u);
    ctx->pc = 0x317530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31752Cu;
    // 0x317530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31752Cu, 0x317534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317534u;
label_317534:
    // 0x317534: 0xc0a3628  jal         func_28D8A0
label_317538:
    if (ctx->pc == 0x317538u) {
        ctx->pc = 0x317538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317534u;
        // 0x317538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31753Cu;
        goto label_31753c;
    }
    ctx->pc = 0x317534u;
    SET_GPR_U32(ctx, 31, 0x31753Cu);
    ctx->pc = 0x317538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317534u;
    // 0x317538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x317534u, 0x31753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31753Cu;
label_31753c:
    // 0x31753c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_317540:
    // 0x317540: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x317540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_317544:
    // 0x317544: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x317544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_317548:
    // 0x317548: 0x40f809  jalr        $v0
label_31754c:
    if (ctx->pc == 0x31754Cu) {
        ctx->pc = 0x31754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317548u;
        // 0x31754c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317550u;
        goto label_317550;
    }
    ctx->pc = 0x317548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317550u);
        ctx->pc = 0x31754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317548u;
        // 0x31754c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317548u, 0x317550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317550u;
label_317550:
    // 0x317550: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x317550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_317554:
    // 0x317554: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x317554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317558:
    // 0x317558: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x317558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_31755c:
    // 0x31755c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x31755cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_317560:
    // 0x317560: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x317560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317564:
    // 0x317564: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x317564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_317568:
    // 0x317568: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x317568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31756c:
    // 0x31756c: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x31756cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_317570:
    // 0x317570: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x317570u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317574:
    // 0x317574: 0xc0b68b0  jal         func_2DA2C0
label_317578:
    if (ctx->pc == 0x317578u) {
        ctx->pc = 0x317578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317574u;
        // 0x317578: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31757Cu;
        goto label_31757c;
    }
    ctx->pc = 0x317574u;
    SET_GPR_U32(ctx, 31, 0x31757Cu);
    ctx->pc = 0x317578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317574u;
    // 0x317578: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x317574u, 0x31757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31757Cu;
label_31757c:
    // 0x31757c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31757cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_317580:
    // 0x317580: 0xc08750a  jal         func_21D428
label_317584:
    if (ctx->pc == 0x317584u) {
        ctx->pc = 0x317584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317580u;
        // 0x317584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317588u;
        goto label_317588;
    }
    ctx->pc = 0x317580u;
    SET_GPR_U32(ctx, 31, 0x317588u);
    ctx->pc = 0x317584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317580u;
    // 0x317584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x317580u, 0x317588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317588u;
label_317588:
    // 0x317588: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x317588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31758c:
    // 0x31758c: 0x86220040  lh          $v0, 0x40($s1)
    ctx->pc = 0x31758cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
label_317590:
    // 0x317590: 0x54540004  bnel        $v0, $s4, . + 4 + (0x4 << 2)
label_317594:
    if (ctx->pc == 0x317594u) {
        ctx->pc = 0x317594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317590u;
        // 0x317594: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317598u;
        goto label_317598;
    }
    ctx->pc = 0x317590u;
    {
        const bool branch_taken_0x317590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x317590) {
            ctx->pc = 0x317594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317590u;
            // 0x317594: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3175A4u;
            goto label_3175a4;
        }
    }
    ctx->pc = 0x317598u;
label_317598:
    // 0x317598: 0x92620270  lbu         $v0, 0x270($s3)
    ctx->pc = 0x317598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 624)));
label_31759c:
    // 0x31759c: 0xa6220040  sh          $v0, 0x40($s1)
    ctx->pc = 0x31759cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 2));
label_3175a0:
    // 0x3175a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3175a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3175a4:
    // 0x3175a4: 0xc059856  jal         func_166158
label_3175a8:
    if (ctx->pc == 0x3175A8u) {
        ctx->pc = 0x3175A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175A4u;
        // 0x3175a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3175ACu;
        goto label_3175ac;
    }
    ctx->pc = 0x3175A4u;
    SET_GPR_U32(ctx, 31, 0x3175ACu);
    ctx->pc = 0x3175A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3175A4u;
    // 0x3175a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x3175A4u, 0x3175ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175ACu;
label_3175ac:
    // 0x3175ac: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x3175acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3175b0:
    // 0x3175b0: 0x14b40011  bne         $a1, $s4, . + 4 + (0x11 << 2)
label_3175b4:
    if (ctx->pc == 0x3175B4u) {
        ctx->pc = 0x3175B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175B0u;
        // 0x3175b4: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3175B8u;
        goto label_3175b8;
    }
    ctx->pc = 0x3175B0u;
    {
        const bool branch_taken_0x3175b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x3175B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175B0u;
        // 0x3175b4: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175b0) {
            ctx->pc = 0x3175F8u;
            goto label_3175f8;
        }
    }
    ctx->pc = 0x3175B8u;
label_3175b8:
    // 0x3175b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3175b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3175bc:
    // 0x3175bc: 0xc0a576c  jal         func_295DB0
label_3175c0:
    if (ctx->pc == 0x3175C0u) {
        ctx->pc = 0x3175C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175BCu;
        // 0x3175c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3175C4u;
        goto label_3175c4;
    }
    ctx->pc = 0x3175BCu;
    SET_GPR_U32(ctx, 31, 0x3175C4u);
    ctx->pc = 0x3175C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3175BCu;
    // 0x3175c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x3175BCu, 0x3175C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175C4u;
label_3175c4:
    // 0x3175c4: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x3175c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3175c8:
    // 0x3175c8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3175c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3175cc:
    // 0x3175cc: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x3175ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
label_3175d0:
    // 0x3175d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3175d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3175d4:
    // 0x3175d4: 0xc0a5776  jal         func_295DD8
label_3175d8:
    if (ctx->pc == 0x3175D8u) {
        ctx->pc = 0x3175D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175D4u;
        // 0x3175d8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3175DCu;
        goto label_3175dc;
    }
    ctx->pc = 0x3175D4u;
    SET_GPR_U32(ctx, 31, 0x3175DCu);
    ctx->pc = 0x3175D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3175D4u;
    // 0x3175d8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x3175D4u, 0x3175DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175DCu;
label_3175dc:
    // 0x3175dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3175dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3175e0:
    // 0x3175e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3175e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3175e4:
    // 0x3175e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3175e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3175e8:
    // 0x3175e8: 0xc0a5922  jal         func_296488
label_3175ec:
    if (ctx->pc == 0x3175ECu) {
        ctx->pc = 0x3175ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175E8u;
        // 0x3175ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3175F0u;
        goto label_3175f0;
    }
    ctx->pc = 0x3175E8u;
    SET_GPR_U32(ctx, 31, 0x3175F0u);
    ctx->pc = 0x3175ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3175E8u;
    // 0x3175ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296488u, 0x3175E8u, 0x3175F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175F0u;
label_3175f0:
    // 0x3175f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3175f4:
    if (ctx->pc == 0x3175F4u) {
        ctx->pc = 0x3175F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175F0u;
        // 0x3175f4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3175F8u;
        goto label_3175f8;
    }
    ctx->pc = 0x3175F0u;
    {
        const bool branch_taken_0x3175f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3175F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175F0u;
        // 0x3175f4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175f0) {
            ctx->pc = 0x317604u;
            goto label_317604;
        }
    }
    ctx->pc = 0x3175F8u;
label_3175f8:
    // 0x3175f8: 0xc0a576c  jal         func_295DB0
label_3175fc:
    if (ctx->pc == 0x3175FCu) {
        ctx->pc = 0x3175FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175F8u;
        // 0x3175fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317600u;
        goto label_317600;
    }
    ctx->pc = 0x3175F8u;
    SET_GPR_U32(ctx, 31, 0x317600u);
    ctx->pc = 0x3175FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3175F8u;
    // 0x3175fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x3175F8u, 0x317600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317600u;
label_317600:
    // 0x317600: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x317600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_317604:
    // 0x317604: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x317604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317608:
    // 0x317608: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x317608u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31760c:
    // 0x31760c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_317610:
    // 0x317610: 0xc137826  jal         func_4DE098
label_317614:
    if (ctx->pc == 0x317614u) {
        ctx->pc = 0x317614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317610u;
        // 0x317614: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317618u;
        goto label_317618;
    }
    ctx->pc = 0x317610u;
    SET_GPR_U32(ctx, 31, 0x317618u);
    ctx->pc = 0x317614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317610u;
    // 0x317614: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x317610u, 0x317618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317618u;
label_317618:
    // 0x317618: 0xc0e409a  jal         func_390268
label_31761c:
    if (ctx->pc == 0x31761Cu) {
        ctx->pc = 0x31761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317618u;
        // 0x31761c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317620u;
        goto label_317620;
    }
    ctx->pc = 0x317618u;
    SET_GPR_U32(ctx, 31, 0x317620u);
    ctx->pc = 0x31761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317618u;
    // 0x31761c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x317618u, 0x317620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317620u;
label_317620:
    // 0x317620: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x317620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317624:
    // 0x317624: 0x5220002a  beql        $s1, $zero, . + 4 + (0x2A << 2)
label_317628:
    if (ctx->pc == 0x317628u) {
        ctx->pc = 0x317628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317624u;
        // 0x317628: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31762Cu;
        goto label_31762c;
    }
    ctx->pc = 0x317624u;
    {
        const bool branch_taken_0x317624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x317624) {
            ctx->pc = 0x317628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317624u;
            // 0x317628: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3176D0u;
            goto label_3176d0;
        }
    }
    ctx->pc = 0x31762Cu;
label_31762c:
    // 0x31762c: 0x52320028  beql        $s1, $s2, . + 4 + (0x28 << 2)
label_317630:
    if (ctx->pc == 0x317630u) {
        ctx->pc = 0x317630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31762Cu;
        // 0x317630: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317634u;
        goto label_317634;
    }
    ctx->pc = 0x31762Cu;
    {
        const bool branch_taken_0x31762c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x31762c) {
            ctx->pc = 0x317630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31762Cu;
            // 0x317630: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3176D0u;
            goto label_3176d0;
        }
    }
    ctx->pc = 0x317634u;
label_317634:
    // 0x317634: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x317634u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_317638:
    // 0x317638: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x317638u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31763c:
    // 0x31763c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_317640:
    if (ctx->pc == 0x317640u) {
        ctx->pc = 0x317640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31763Cu;
        // 0x317640: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317644u;
        goto label_317644;
    }
    ctx->pc = 0x31763Cu;
    {
        const bool branch_taken_0x31763c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31763Cu;
        // 0x317640: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31763c) {
            ctx->pc = 0x3176CCu;
            goto label_3176cc;
        }
    }
    ctx->pc = 0x317644u;
label_317644:
    // 0x317644: 0xc088edc  jal         func_223B70
label_317648:
    if (ctx->pc == 0x317648u) {
        ctx->pc = 0x317648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317644u;
        // 0x317648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31764Cu;
        goto label_31764c;
    }
    ctx->pc = 0x317644u;
    SET_GPR_U32(ctx, 31, 0x31764Cu);
    ctx->pc = 0x317648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317644u;
    // 0x317648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x317644u, 0x31764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31764Cu;
label_31764c:
    // 0x31764c: 0x50500020  beql        $v0, $s0, . + 4 + (0x20 << 2)
label_317650:
    if (ctx->pc == 0x317650u) {
        ctx->pc = 0x317650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31764Cu;
        // 0x317650: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317654u;
        goto label_317654;
    }
    ctx->pc = 0x31764Cu;
    {
        const bool branch_taken_0x31764c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x31764c) {
            ctx->pc = 0x317650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31764Cu;
            // 0x317650: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3176D0u;
            goto label_3176d0;
        }
    }
    ctx->pc = 0x317654u;
label_317654:
    // 0x317654: 0xc089f98  jal         func_227E60
label_317658:
    if (ctx->pc == 0x317658u) {
        ctx->pc = 0x317658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317654u;
        // 0x317658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31765Cu;
        goto label_31765c;
    }
    ctx->pc = 0x317654u;
    SET_GPR_U32(ctx, 31, 0x31765Cu);
    ctx->pc = 0x317658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317654u;
    // 0x317658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x317654u, 0x31765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31765Cu;
label_31765c:
    // 0x31765c: 0x1050001b  beq         $v0, $s0, . + 4 + (0x1B << 2)
label_317660:
    if (ctx->pc == 0x317660u) {
        ctx->pc = 0x317660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31765Cu;
        // 0x317660: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317664u;
        goto label_317664;
    }
    ctx->pc = 0x31765Cu;
    {
        const bool branch_taken_0x31765c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x317660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31765Cu;
        // 0x317660: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31765c) {
            ctx->pc = 0x3176CCu;
            goto label_3176cc;
        }
    }
    ctx->pc = 0x317664u;
label_317664:
    // 0x317664: 0xc0a57ca  jal         func_295F28
label_317668:
    if (ctx->pc == 0x317668u) {
        ctx->pc = 0x317668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317664u;
        // 0x317668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31766Cu;
        goto label_31766c;
    }
    ctx->pc = 0x317664u;
    SET_GPR_U32(ctx, 31, 0x31766Cu);
    ctx->pc = 0x317668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317664u;
    // 0x317668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x317664u, 0x31766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31766Cu;
label_31766c:
    // 0x31766c: 0xc087502  jal         func_21D408
label_317670:
    if (ctx->pc == 0x317670u) {
        ctx->pc = 0x317670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31766Cu;
        // 0x317670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317674u;
        goto label_317674;
    }
    ctx->pc = 0x31766Cu;
    SET_GPR_U32(ctx, 31, 0x317674u);
    ctx->pc = 0x317670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31766Cu;
    // 0x317670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31766Cu, 0x317674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317674u;
label_317674:
    // 0x317674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_317678:
    // 0x317678: 0xc0a3630  jal         func_28D8C0
label_31767c:
    if (ctx->pc == 0x31767Cu) {
        ctx->pc = 0x31767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317678u;
        // 0x31767c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317680u;
        goto label_317680;
    }
    ctx->pc = 0x317678u;
    SET_GPR_U32(ctx, 31, 0x317680u);
    ctx->pc = 0x31767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317678u;
    // 0x31767c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x317678u, 0x317680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317680u;
label_317680:
    // 0x317680: 0xc0a3628  jal         func_28D8A0
label_317684:
    if (ctx->pc == 0x317684u) {
        ctx->pc = 0x317684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317680u;
        // 0x317684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317688u;
        goto label_317688;
    }
    ctx->pc = 0x317680u;
    SET_GPR_U32(ctx, 31, 0x317688u);
    ctx->pc = 0x317684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317680u;
    // 0x317684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x317680u, 0x317688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317688u;
label_317688:
    // 0x317688: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x317688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31768c:
    // 0x31768c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31768cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_317690:
    // 0x317690: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x317690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_317694:
    // 0x317694: 0x40f809  jalr        $v0
label_317698:
    if (ctx->pc == 0x317698u) {
        ctx->pc = 0x317698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317694u;
        // 0x317698: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31769Cu;
        goto label_31769c;
    }
    ctx->pc = 0x317694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31769Cu);
        ctx->pc = 0x317698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317694u;
        // 0x317698: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317694u, 0x31769Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31769Cu;
label_31769c:
    // 0x31769c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3176a0:
    // 0x3176a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3176a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3176a4:
    // 0x3176a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3176a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3176a8:
    // 0x3176a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3176a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3176ac:
    // 0x3176ac: 0x40f809  jalr        $v0
label_3176b0:
    if (ctx->pc == 0x3176B0u) {
        ctx->pc = 0x3176B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176ACu;
        // 0x3176b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3176B4u;
        goto label_3176b4;
    }
    ctx->pc = 0x3176ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3176B4u);
        ctx->pc = 0x3176B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176ACu;
        // 0x3176b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3176ACu, 0x3176B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3176B4u;
label_3176b4:
    // 0x3176b4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3176b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3176b8:
    // 0x3176b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3176b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3176bc:
    // 0x3176bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3176bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3176c0:
    // 0x3176c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3176c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3176c4:
    // 0x3176c4: 0xc0b78b2  jal         func_2DE2C8
label_3176c8:
    if (ctx->pc == 0x3176C8u) {
        ctx->pc = 0x3176C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176C4u;
        // 0x3176c8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3176CCu;
        goto label_3176cc;
    }
    ctx->pc = 0x3176C4u;
    SET_GPR_U32(ctx, 31, 0x3176CCu);
    ctx->pc = 0x3176C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3176C4u;
    // 0x3176c8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2C8u, 0x3176C4u, 0x3176CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3176CCu;
label_3176cc:
    // 0x3176cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3176ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3176d0:
    // 0x3176d0: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x3176d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3176d4:
    // 0x3176d4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_3176d8:
    if (ctx->pc == 0x3176D8u) {
        ctx->pc = 0x3176D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176D4u;
        // 0x3176d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3176DCu;
        goto label_3176dc;
    }
    ctx->pc = 0x3176D4u;
    {
        const bool branch_taken_0x3176d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3176D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176D4u;
        // 0x3176d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3176d4) {
            ctx->pc = 0x317610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317610;
        }
    }
    ctx->pc = 0x3176DCu;
label_3176dc:
    // 0x3176dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3176dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3176e0:
    // 0x3176e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3176e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3176e4:
    // 0x3176e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3176e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3176e8:
    // 0x3176e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3176e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3176ec:
    // 0x3176ec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3176ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3176f0:
    // 0x3176f0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3176f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3176f4:
    // 0x3176f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3176f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3176f8:
    // 0x3176f8: 0x3e00008  jr          $ra
label_3176fc:
    if (ctx->pc == 0x3176FCu) {
        ctx->pc = 0x3176FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176F8u;
        // 0x3176fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317700u;
        goto label_fallthrough_0x3176f8;
    }
    ctx->pc = 0x3176F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3176FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3176F8u;
        // 0x3176fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3176F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3176f8:
    ctx->pc = 0x317700u;
}
