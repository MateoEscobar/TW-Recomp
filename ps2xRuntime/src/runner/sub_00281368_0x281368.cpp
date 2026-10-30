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

// Function: sub_00281368
// Address: 0x281368 - 0x281450
void sub_00281368_0x281368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281368_0x281368");
#endif

    switch (ctx->pc) {
        case 0x281368u: goto label_281368;
        case 0x28136cu: goto label_28136c;
        case 0x281370u: goto label_281370;
        case 0x281374u: goto label_281374;
        case 0x281378u: goto label_281378;
        case 0x28137cu: goto label_28137c;
        case 0x281380u: goto label_281380;
        case 0x281384u: goto label_281384;
        case 0x281388u: goto label_281388;
        case 0x28138cu: goto label_28138c;
        case 0x281390u: goto label_281390;
        case 0x281394u: goto label_281394;
        case 0x281398u: goto label_281398;
        case 0x28139cu: goto label_28139c;
        case 0x2813a0u: goto label_2813a0;
        case 0x2813a4u: goto label_2813a4;
        case 0x2813a8u: goto label_2813a8;
        case 0x2813acu: goto label_2813ac;
        case 0x2813b0u: goto label_2813b0;
        case 0x2813b4u: goto label_2813b4;
        case 0x2813b8u: goto label_2813b8;
        case 0x2813bcu: goto label_2813bc;
        case 0x2813c0u: goto label_2813c0;
        case 0x2813c4u: goto label_2813c4;
        case 0x2813c8u: goto label_2813c8;
        case 0x2813ccu: goto label_2813cc;
        case 0x2813d0u: goto label_2813d0;
        case 0x2813d4u: goto label_2813d4;
        case 0x2813d8u: goto label_2813d8;
        case 0x2813dcu: goto label_2813dc;
        case 0x2813e0u: goto label_2813e0;
        case 0x2813e4u: goto label_2813e4;
        case 0x2813e8u: goto label_2813e8;
        case 0x2813ecu: goto label_2813ec;
        case 0x2813f0u: goto label_2813f0;
        case 0x2813f4u: goto label_2813f4;
        case 0x2813f8u: goto label_2813f8;
        case 0x2813fcu: goto label_2813fc;
        case 0x281400u: goto label_281400;
        case 0x281404u: goto label_281404;
        case 0x281408u: goto label_281408;
        case 0x28140cu: goto label_28140c;
        case 0x281410u: goto label_281410;
        case 0x281414u: goto label_281414;
        case 0x281418u: goto label_281418;
        case 0x28141cu: goto label_28141c;
        case 0x281420u: goto label_281420;
        case 0x281424u: goto label_281424;
        case 0x281428u: goto label_281428;
        case 0x28142cu: goto label_28142c;
        case 0x281430u: goto label_281430;
        case 0x281434u: goto label_281434;
        case 0x281438u: goto label_281438;
        case 0x28143cu: goto label_28143c;
        case 0x281440u: goto label_281440;
        case 0x281444u: goto label_281444;
        case 0x281448u: goto label_281448;
        case 0x28144cu: goto label_28144c;
        default: break;
    }

    ctx->pc = 0x281368u;

label_281368:
    // 0x281368: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x281368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_28136c:
    // 0x28136c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_281370:
    // 0x281370: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x281370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_281374:
    // 0x281374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x281374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281378:
    // 0x281378: 0x12200030  beqz        $s1, . + 4 + (0x30 << 2)
label_28137c:
    if (ctx->pc == 0x28137Cu) {
        ctx->pc = 0x28137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281378u;
        // 0x28137c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281380u;
        goto label_281380;
    }
    ctx->pc = 0x281378u;
    {
        const bool branch_taken_0x281378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281378u;
        // 0x28137c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281378) {
            ctx->pc = 0x28143Cu;
            goto label_28143c;
        }
    }
    ctx->pc = 0x281380u;
label_281380:
    // 0x281380: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x281380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_281384:
    // 0x281384: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x281384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_281388:
    // 0x281388: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x281388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_28138c:
    // 0x28138c: 0x40f809  jalr        $v0
label_281390:
    if (ctx->pc == 0x281390u) {
        ctx->pc = 0x281390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28138Cu;
        // 0x281390: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281394u;
        goto label_281394;
    }
    ctx->pc = 0x28138Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x281394u);
        ctx->pc = 0x281390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28138Cu;
        // 0x281390: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28138Cu, 0x281394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281394u;
label_281394:
    // 0x281394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x281394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281398:
    // 0x281398: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_28139c:
    if (ctx->pc == 0x28139Cu) {
        ctx->pc = 0x28139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281398u;
        // 0x28139c: 0x2402bfff  addiu       $v0, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2813A0u;
        goto label_2813a0;
    }
    ctx->pc = 0x281398u;
    {
        const bool branch_taken_0x281398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281398u;
        // 0x28139c: 0x2402bfff  addiu       $v0, $zero, -0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281398) {
            ctx->pc = 0x2813BCu;
            goto label_2813bc;
        }
    }
    ctx->pc = 0x2813A0u;
label_2813a0:
    // 0x2813a0: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x2813a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_2813a4:
    // 0x2813a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2813a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2813a8:
    // 0x2813a8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2813a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2813ac:
    // 0x2813ac: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x2813acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_2813b0:
    // 0x2813b0: 0xaca40040  sw          $a0, 0x40($a1)
    ctx->pc = 0x2813b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 4));
label_2813b4:
    // 0x2813b4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2813b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2813b8:
    // 0x2813b8: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x2813b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
label_2813bc:
    // 0x2813bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2813bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2813c0:
    // 0x2813c0: 0xc089990  jal         func_226640
label_2813c4:
    if (ctx->pc == 0x2813C4u) {
        ctx->pc = 0x2813C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813C0u;
        // 0x2813c4: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2813C8u;
        goto label_2813c8;
    }
    ctx->pc = 0x2813C0u;
    SET_GPR_U32(ctx, 31, 0x2813C8u);
    ctx->pc = 0x2813C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2813C0u;
    // 0x2813c4: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2813C0u, 0x2813C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2813C8u;
label_2813c8:
    // 0x2813c8: 0xc087502  jal         func_21D408
label_2813cc:
    if (ctx->pc == 0x2813CCu) {
        ctx->pc = 0x2813CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813C8u;
        // 0x2813cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2813D0u;
        goto label_2813d0;
    }
    ctx->pc = 0x2813C8u;
    SET_GPR_U32(ctx, 31, 0x2813D0u);
    ctx->pc = 0x2813CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2813C8u;
    // 0x2813cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2813C8u, 0x2813D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2813D0u;
label_2813d0:
    // 0x2813d0: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2813d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_2813d4:
    // 0x2813d4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_2813d8:
    if (ctx->pc == 0x2813D8u) {
        ctx->pc = 0x2813D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813D4u;
        // 0x2813d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2813DCu;
        goto label_2813dc;
    }
    ctx->pc = 0x2813D4u;
    {
        const bool branch_taken_0x2813d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2813D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813D4u;
        // 0x2813d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813d4) {
            ctx->pc = 0x281440u;
            goto label_281440;
        }
    }
    ctx->pc = 0x2813DCu;
label_2813dc:
    // 0x2813dc: 0xc0899ae  jal         func_2266B8
label_2813e0:
    if (ctx->pc == 0x2813E0u) {
        ctx->pc = 0x2813E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813DCu;
        // 0x2813e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2813E4u;
        goto label_2813e4;
    }
    ctx->pc = 0x2813DCu;
    SET_GPR_U32(ctx, 31, 0x2813E4u);
    ctx->pc = 0x2813E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2813DCu;
    // 0x2813e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2813DCu, 0x2813E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2813E4u;
label_2813e4:
    // 0x2813e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2813e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2813e8:
    // 0x2813e8: 0x286201b8  slti        $v0, $v1, 0x1B8
    ctx->pc = 0x2813e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)440) ? 1 : 0);
label_2813ec:
    // 0x2813ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2813ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2813f0:
    // 0x2813f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2813f4:
    if (ctx->pc == 0x2813F4u) {
        ctx->pc = 0x2813F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813F0u;
        // 0x2813f4: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2813F8u;
        goto label_2813f8;
    }
    ctx->pc = 0x2813F0u;
    {
        const bool branch_taken_0x2813f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2813F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2813F0u;
        // 0x2813f4: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2813f0) {
            ctx->pc = 0x281404u;
            goto label_281404;
        }
    }
    ctx->pc = 0x2813F8u;
label_2813f8:
    // 0x2813f8: 0x286301bb  slti        $v1, $v1, 0x1BB
    ctx->pc = 0x2813f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)443) ? 1 : 0);
label_2813fc:
    // 0x2813fc: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x2813fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_281400:
    // 0x281400: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x281400u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_281404:
    // 0x281404: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x281404u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_281408:
    // 0x281408: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x281408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28140c:
    // 0x28140c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x28140cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_281410:
    // 0x281410: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x281410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_281414:
    // 0x281414: 0xc045200  jal         func_114800
label_281418:
    if (ctx->pc == 0x281418u) {
        ctx->pc = 0x281418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281414u;
        // 0x281418: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28141Cu;
        goto label_28141c;
    }
    ctx->pc = 0x281414u;
    SET_GPR_U32(ctx, 31, 0x28141Cu);
    ctx->pc = 0x281418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281414u;
    // 0x281418: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x281414u, 0x28141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28141Cu;
label_28141c:
    // 0x28141c: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x28141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_281420:
    // 0x281420: 0xc044382  jal         func_110E08
label_281424:
    if (ctx->pc == 0x281424u) {
        ctx->pc = 0x281424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281420u;
        // 0x281424: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281428u;
        goto label_281428;
    }
    ctx->pc = 0x281420u;
    SET_GPR_U32(ctx, 31, 0x281428u);
    ctx->pc = 0x281424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281420u;
    // 0x281424: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E08u, 0x281420u, 0x281428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281428u;
label_281428:
    // 0x281428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28142c:
    // 0x28142c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x28142cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_281430:
    // 0x281430: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x281430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281434:
    // 0x281434: 0xc0a4daa  jal         func_2936A8
label_281438:
    if (ctx->pc == 0x281438u) {
        ctx->pc = 0x281438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281434u;
        // 0x281438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28143Cu;
        goto label_28143c;
    }
    ctx->pc = 0x281434u;
    SET_GPR_U32(ctx, 31, 0x28143Cu);
    ctx->pc = 0x281438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281434u;
    // 0x281438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2936A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2936A8u, 0x281434u, 0x28143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28143Cu;
label_28143c:
    // 0x28143c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28143cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_281440:
    // 0x281440: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x281440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_281444:
    // 0x281444: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x281444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_281448:
    // 0x281448: 0x3e00008  jr          $ra
label_28144c:
    if (ctx->pc == 0x28144Cu) {
        ctx->pc = 0x28144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281448u;
        // 0x28144c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281450u;
        goto label_fallthrough_0x281448;
    }
    ctx->pc = 0x281448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281448u;
        // 0x28144c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x281448:
    ctx->pc = 0x281450u;
}
