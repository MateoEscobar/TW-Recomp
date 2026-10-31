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

// Function: sub_003D9508
// Address: 0x3d9508 - 0x3d95c8
void sub_003D9508_0x3d9508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9508_0x3d9508");
#endif

    switch (ctx->pc) {
        case 0x3d9508u: goto label_3d9508;
        case 0x3d950cu: goto label_3d950c;
        case 0x3d9510u: goto label_3d9510;
        case 0x3d9514u: goto label_3d9514;
        case 0x3d9518u: goto label_3d9518;
        case 0x3d951cu: goto label_3d951c;
        case 0x3d9520u: goto label_3d9520;
        case 0x3d9524u: goto label_3d9524;
        case 0x3d9528u: goto label_3d9528;
        case 0x3d952cu: goto label_3d952c;
        case 0x3d9530u: goto label_3d9530;
        case 0x3d9534u: goto label_3d9534;
        case 0x3d9538u: goto label_3d9538;
        case 0x3d953cu: goto label_3d953c;
        case 0x3d9540u: goto label_3d9540;
        case 0x3d9544u: goto label_3d9544;
        case 0x3d9548u: goto label_3d9548;
        case 0x3d954cu: goto label_3d954c;
        case 0x3d9550u: goto label_3d9550;
        case 0x3d9554u: goto label_3d9554;
        case 0x3d9558u: goto label_3d9558;
        case 0x3d955cu: goto label_3d955c;
        case 0x3d9560u: goto label_3d9560;
        case 0x3d9564u: goto label_3d9564;
        case 0x3d9568u: goto label_3d9568;
        case 0x3d956cu: goto label_3d956c;
        case 0x3d9570u: goto label_3d9570;
        case 0x3d9574u: goto label_3d9574;
        case 0x3d9578u: goto label_3d9578;
        case 0x3d957cu: goto label_3d957c;
        case 0x3d9580u: goto label_3d9580;
        case 0x3d9584u: goto label_3d9584;
        case 0x3d9588u: goto label_3d9588;
        case 0x3d958cu: goto label_3d958c;
        case 0x3d9590u: goto label_3d9590;
        case 0x3d9594u: goto label_3d9594;
        case 0x3d9598u: goto label_3d9598;
        case 0x3d959cu: goto label_3d959c;
        case 0x3d95a0u: goto label_3d95a0;
        case 0x3d95a4u: goto label_3d95a4;
        case 0x3d95a8u: goto label_3d95a8;
        case 0x3d95acu: goto label_3d95ac;
        case 0x3d95b0u: goto label_3d95b0;
        case 0x3d95b4u: goto label_3d95b4;
        case 0x3d95b8u: goto label_3d95b8;
        case 0x3d95bcu: goto label_3d95bc;
        case 0x3d95c0u: goto label_3d95c0;
        case 0x3d95c4u: goto label_3d95c4;
        default: break;
    }

    ctx->pc = 0x3d9508u;

label_3d9508:
    // 0x3d9508: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3d9508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3d950c:
    // 0x3d950c: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3d950cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3d9510:
    // 0x3d9510: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3d9510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3d9514:
    // 0x3d9514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9518:
    // 0x3d9518: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3d9518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3d951c:
    // 0x3d951c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d951cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9520:
    // 0x3d9520: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x3d9520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_3d9524:
    // 0x3d9524: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d9524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d9528:
    // 0x3d9528: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d9528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d952c:
    // 0x3d952c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d9530:
    // 0x3d9530: 0x40f809  jalr        $v0
label_3d9534:
    if (ctx->pc == 0x3D9534u) {
        ctx->pc = 0x3D9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9530u;
        // 0x3d9534: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9538u;
        goto label_3d9538;
    }
    ctx->pc = 0x3D9530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D9538u);
        ctx->pc = 0x3D9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9530u;
        // 0x3d9534: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9530u, 0x3D9538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9538u;
label_3d9538:
    // 0x3d9538: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d9538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d953c:
    // 0x3d953c: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x3d953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3d9540:
    // 0x3d9540: 0xc0e858c  jal         func_3A1630
label_3d9544:
    if (ctx->pc == 0x3D9544u) {
        ctx->pc = 0x3D9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9540u;
        // 0x3d9544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9548u;
        goto label_3d9548;
    }
    ctx->pc = 0x3D9540u;
    SET_GPR_U32(ctx, 31, 0x3D9548u);
    ctx->pc = 0x3D9544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9540u;
    // 0x3d9544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D9540u, 0x3D9548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9548u;
label_3d9548:
    // 0x3d9548: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3d9548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3d954c:
    // 0x3d954c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d9550:
    // 0x3d9550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d9550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9554:
    // 0x3d9554: 0xc0ea14c  jal         func_3A8530
label_3d9558:
    if (ctx->pc == 0x3D9558u) {
        ctx->pc = 0x3D9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9554u;
        // 0x3d9558: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D955Cu;
        goto label_3d955c;
    }
    ctx->pc = 0x3D9554u;
    SET_GPR_U32(ctx, 31, 0x3D955Cu);
    ctx->pc = 0x3D9558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9554u;
    // 0x3d9558: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D9554u, 0x3D955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D955Cu;
label_3d955c:
    // 0x3d955c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d955cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d9560:
    // 0x3d9560: 0xc0ea12a  jal         func_3A84A8
label_3d9564:
    if (ctx->pc == 0x3D9564u) {
        ctx->pc = 0x3D9564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9560u;
        // 0x3d9564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9568u;
        goto label_3d9568;
    }
    ctx->pc = 0x3D9560u;
    SET_GPR_U32(ctx, 31, 0x3D9568u);
    ctx->pc = 0x3D9564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9560u;
    // 0x3d9564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D9560u, 0x3D9568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9568u;
label_3d9568:
    // 0x3d9568: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d9568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d956c:
    // 0x3d956c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d956cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d9570:
    // 0x3d9570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d9570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9574:
    // 0x3d9574: 0xc0ea12a  jal         func_3A84A8
label_3d9578:
    if (ctx->pc == 0x3D9578u) {
        ctx->pc = 0x3D9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9574u;
        // 0x3d9578: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D957Cu;
        goto label_3d957c;
    }
    ctx->pc = 0x3D9574u;
    SET_GPR_U32(ctx, 31, 0x3D957Cu);
    ctx->pc = 0x3D9578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9574u;
    // 0x3d9578: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D9574u, 0x3D957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D957Cu;
label_3d957c:
    // 0x3d957c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d957cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9580:
    // 0x3d9580: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x3d9580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d9584:
    // 0x3d9584: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d9584u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d9588:
    // 0x3d9588: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d9588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d958c:
    // 0x3d958c: 0x26105108  addiu       $s0, $s0, 0x5108
    ctx->pc = 0x3d958cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20744));
label_3d9590:
    // 0x3d9590: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d9590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d9594:
    // 0x3d9594: 0xc0e9f6a  jal         func_3A7DA8
label_3d9598:
    if (ctx->pc == 0x3D9598u) {
        ctx->pc = 0x3D9598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9594u;
        // 0x3d9598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D959Cu;
        goto label_3d959c;
    }
    ctx->pc = 0x3D9594u;
    SET_GPR_U32(ctx, 31, 0x3D959Cu);
    ctx->pc = 0x3D9598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9594u;
    // 0x3d9598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3D9594u, 0x3D959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D959Cu;
label_3d959c:
    // 0x3d959c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d959cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d95a0:
    // 0x3d95a0: 0xc0f15bc  jal         func_3C56F0
label_3d95a4:
    if (ctx->pc == 0x3D95A4u) {
        ctx->pc = 0x3D95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95A0u;
        // 0x3d95a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D95A8u;
        goto label_3d95a8;
    }
    ctx->pc = 0x3D95A0u;
    SET_GPR_U32(ctx, 31, 0x3D95A8u);
    ctx->pc = 0x3D95A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D95A0u;
    // 0x3d95a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D95A0u, 0x3D95A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D95A8u;
label_3d95a8:
    // 0x3d95a8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3d95a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3d95ac:
    // 0x3d95ac: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3d95acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d95b0:
    // 0x3d95b0: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3d95b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d95b4:
    // 0x3d95b4: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3d95b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d95b8:
    // 0x3d95b8: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x3d95b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_3d95bc:
    // 0x3d95bc: 0x3e00008  jr          $ra
label_3d95c0:
    if (ctx->pc == 0x3D95C0u) {
        ctx->pc = 0x3D95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95BCu;
        // 0x3d95c0: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D95C4u;
        goto label_3d95c4;
    }
    ctx->pc = 0x3D95BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D95C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95BCu;
        // 0x3d95c0: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D95BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D95C4u;
label_3d95c4:
    // 0x3d95c4: 0x0  nop
    ctx->pc = 0x3d95c4u;
    // NOP
    ctx->pc = 0x3d95c8u;
}
