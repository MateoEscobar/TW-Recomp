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

// Function: sub_00484638
// Address: 0x484638 - 0x4847d8
void sub_00484638_0x484638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484638_0x484638");
#endif

    switch (ctx->pc) {
        case 0x484638u: goto label_484638;
        case 0x48463cu: goto label_48463c;
        case 0x484640u: goto label_484640;
        case 0x484644u: goto label_484644;
        case 0x484648u: goto label_484648;
        case 0x48464cu: goto label_48464c;
        case 0x484650u: goto label_484650;
        case 0x484654u: goto label_484654;
        case 0x484658u: goto label_484658;
        case 0x48465cu: goto label_48465c;
        case 0x484660u: goto label_484660;
        case 0x484664u: goto label_484664;
        case 0x484668u: goto label_484668;
        case 0x48466cu: goto label_48466c;
        case 0x484670u: goto label_484670;
        case 0x484674u: goto label_484674;
        case 0x484678u: goto label_484678;
        case 0x48467cu: goto label_48467c;
        case 0x484680u: goto label_484680;
        case 0x484684u: goto label_484684;
        case 0x484688u: goto label_484688;
        case 0x48468cu: goto label_48468c;
        case 0x484690u: goto label_484690;
        case 0x484694u: goto label_484694;
        case 0x484698u: goto label_484698;
        case 0x48469cu: goto label_48469c;
        case 0x4846a0u: goto label_4846a0;
        case 0x4846a4u: goto label_4846a4;
        case 0x4846a8u: goto label_4846a8;
        case 0x4846acu: goto label_4846ac;
        case 0x4846b0u: goto label_4846b0;
        case 0x4846b4u: goto label_4846b4;
        case 0x4846b8u: goto label_4846b8;
        case 0x4846bcu: goto label_4846bc;
        case 0x4846c0u: goto label_4846c0;
        case 0x4846c4u: goto label_4846c4;
        case 0x4846c8u: goto label_4846c8;
        case 0x4846ccu: goto label_4846cc;
        case 0x4846d0u: goto label_4846d0;
        case 0x4846d4u: goto label_4846d4;
        case 0x4846d8u: goto label_4846d8;
        case 0x4846dcu: goto label_4846dc;
        case 0x4846e0u: goto label_4846e0;
        case 0x4846e4u: goto label_4846e4;
        case 0x4846e8u: goto label_4846e8;
        case 0x4846ecu: goto label_4846ec;
        case 0x4846f0u: goto label_4846f0;
        case 0x4846f4u: goto label_4846f4;
        case 0x4846f8u: goto label_4846f8;
        case 0x4846fcu: goto label_4846fc;
        case 0x484700u: goto label_484700;
        case 0x484704u: goto label_484704;
        case 0x484708u: goto label_484708;
        case 0x48470cu: goto label_48470c;
        case 0x484710u: goto label_484710;
        case 0x484714u: goto label_484714;
        case 0x484718u: goto label_484718;
        case 0x48471cu: goto label_48471c;
        case 0x484720u: goto label_484720;
        case 0x484724u: goto label_484724;
        case 0x484728u: goto label_484728;
        case 0x48472cu: goto label_48472c;
        case 0x484730u: goto label_484730;
        case 0x484734u: goto label_484734;
        case 0x484738u: goto label_484738;
        case 0x48473cu: goto label_48473c;
        case 0x484740u: goto label_484740;
        case 0x484744u: goto label_484744;
        case 0x484748u: goto label_484748;
        case 0x48474cu: goto label_48474c;
        case 0x484750u: goto label_484750;
        case 0x484754u: goto label_484754;
        case 0x484758u: goto label_484758;
        case 0x48475cu: goto label_48475c;
        case 0x484760u: goto label_484760;
        case 0x484764u: goto label_484764;
        case 0x484768u: goto label_484768;
        case 0x48476cu: goto label_48476c;
        case 0x484770u: goto label_484770;
        case 0x484774u: goto label_484774;
        case 0x484778u: goto label_484778;
        case 0x48477cu: goto label_48477c;
        case 0x484780u: goto label_484780;
        case 0x484784u: goto label_484784;
        case 0x484788u: goto label_484788;
        case 0x48478cu: goto label_48478c;
        case 0x484790u: goto label_484790;
        case 0x484794u: goto label_484794;
        case 0x484798u: goto label_484798;
        case 0x48479cu: goto label_48479c;
        case 0x4847a0u: goto label_4847a0;
        case 0x4847a4u: goto label_4847a4;
        case 0x4847a8u: goto label_4847a8;
        case 0x4847acu: goto label_4847ac;
        case 0x4847b0u: goto label_4847b0;
        case 0x4847b4u: goto label_4847b4;
        case 0x4847b8u: goto label_4847b8;
        case 0x4847bcu: goto label_4847bc;
        case 0x4847c0u: goto label_4847c0;
        case 0x4847c4u: goto label_4847c4;
        case 0x4847c8u: goto label_4847c8;
        case 0x4847ccu: goto label_4847cc;
        case 0x4847d0u: goto label_4847d0;
        case 0x4847d4u: goto label_4847d4;
        default: break;
    }

    ctx->pc = 0x484638u;

label_484638:
    // 0x484638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x484638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_48463c:
    // 0x48463c: 0xaf858968  sw          $a1, -0x7698($gp)
    ctx->pc = 0x48463cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936936), GPR_U32(ctx, 5));
label_484640:
    // 0x484640: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x484640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_484644:
    // 0x484644: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x484644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_484648:
    // 0x484648: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x484648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48464c:
    // 0x48464c: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x48464cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
label_484650:
    // 0x484650: 0x8c44ebd8  lw          $a0, -0x1428($v0)
    ctx->pc = 0x484650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962136)));
label_484654:
    // 0x484654: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x484654u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_484658:
    // 0x484658: 0x8f858624  lw          $a1, -0x79DC($gp)
    ctx->pc = 0x484658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936100)));
label_48465c:
    // 0x48465c: 0x2508ed40  addiu       $t0, $t0, -0x12C0
    ctx->pc = 0x48465cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962496));
label_484660:
    // 0x484660: 0x8f878628  lw          $a3, -0x79D8($gp)
    ctx->pc = 0x484660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936104)));
label_484664:
    // 0x484664: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x484664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_484668:
    // 0x484668: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x484668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_48466c:
    // 0x48466c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48466cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_484670:
    // 0x484670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x484670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_484674:
    // 0x484674: 0xc11f66e  jal         func_47D9B8
label_484678:
    if (ctx->pc == 0x484678u) {
        ctx->pc = 0x484678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484674u;
        // 0x484678: 0x35290018  ori         $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48467Cu;
        goto label_48467c;
    }
    ctx->pc = 0x484674u;
    SET_GPR_U32(ctx, 31, 0x48467Cu);
    ctx->pc = 0x484678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484674u;
    // 0x484678: 0x35290018  ori         $t1, $t1, 0x18 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x484674u, 0x48467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48467Cu;
label_48467c:
    // 0x48467c: 0x8f848968  lw          $a0, -0x7698($gp)
    ctx->pc = 0x48467cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_484680:
    // 0x484680: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x484680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_484684:
    // 0x484684: 0x2470ad18  addiu       $s0, $v1, -0x52E8
    ctx->pc = 0x484684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_484688:
    // 0x484688: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x484688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_48468c:
    // 0x48468c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_484690:
    if (ctx->pc == 0x484690u) {
        ctx->pc = 0x484690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48468Cu;
        // 0x484690: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484694u;
        goto label_484694;
    }
    ctx->pc = 0x48468Cu;
    {
        const bool branch_taken_0x48468c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48468Cu;
        // 0x484690: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48468c) {
            ctx->pc = 0x48469Cu;
            goto label_48469c;
        }
    }
    ctx->pc = 0x484694u;
label_484694:
    // 0x484694: 0x1000004a  b           . + 4 + (0x4A << 2)
label_484698:
    if (ctx->pc == 0x484698u) {
        ctx->pc = 0x484698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484694u;
        // 0x484698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48469Cu;
        goto label_48469c;
    }
    ctx->pc = 0x484694u;
    {
        const bool branch_taken_0x484694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484694u;
        // 0x484698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484694) {
            ctx->pc = 0x4847C0u;
            goto label_4847c0;
        }
    }
    ctx->pc = 0x48469Cu;
label_48469c:
    // 0x48469c: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x48469cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
label_4846a0:
    // 0x4846a0: 0x8f858624  lw          $a1, -0x79DC($gp)
    ctx->pc = 0x4846a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936100)));
label_4846a4:
    // 0x4846a4: 0x8f878630  lw          $a3, -0x79D0($gp)
    ctx->pc = 0x4846a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_4846a8:
    // 0x4846a8: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4846a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_4846ac:
    // 0x4846ac: 0x2508ed68  addiu       $t0, $t0, -0x1298
    ctx->pc = 0x4846acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962536));
label_4846b0:
    // 0x4846b0: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x4846b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_4846b4:
    // 0x4846b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4846b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4846b8:
    // 0x4846b8: 0xc11f66e  jal         func_47D9B8
label_4846bc:
    if (ctx->pc == 0x4846BCu) {
        ctx->pc = 0x4846BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4846B8u;
        // 0x4846bc: 0x35290406  ori         $t1, $t1, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4846C0u;
        goto label_4846c0;
    }
    ctx->pc = 0x4846B8u;
    SET_GPR_U32(ctx, 31, 0x4846C0u);
    ctx->pc = 0x4846BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4846B8u;
    // 0x4846bc: 0x35290406  ori         $t1, $t1, 0x406 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1030);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x4846B8u, 0x4846C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4846C0u;
label_4846c0:
    // 0x4846c0: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x4846c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_4846c4:
    // 0x4846c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4846c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4846c8:
    // 0x4846c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4846cc:
    if (ctx->pc == 0x4846CCu) {
        ctx->pc = 0x4846CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4846C8u;
        // 0x4846cc: 0xac620218  sw          $v0, 0x218($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4846D0u;
        goto label_4846d0;
    }
    ctx->pc = 0x4846C8u;
    {
        const bool branch_taken_0x4846c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4846CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4846C8u;
        // 0x4846cc: 0xac620218  sw          $v0, 0x218($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4846c8) {
            ctx->pc = 0x4846D8u;
            goto label_4846d8;
        }
    }
    ctx->pc = 0x4846D0u;
label_4846d0:
    // 0x4846d0: 0x10000035  b           . + 4 + (0x35 << 2)
label_4846d4:
    if (ctx->pc == 0x4846D4u) {
        ctx->pc = 0x4846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4846D0u;
        // 0x4846d4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4846D8u;
        goto label_4846d8;
    }
    ctx->pc = 0x4846D0u;
    {
        const bool branch_taken_0x4846d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4846D0u;
        // 0x4846d4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4846d0) {
            ctx->pc = 0x4847A8u;
            goto label_4847a8;
        }
    }
    ctx->pc = 0x4846D8u;
label_4846d8:
    // 0x4846d8: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x4846d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_4846dc:
    // 0x4846dc: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x4846dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_4846e0:
    // 0x4846e0: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x4846e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
label_4846e4:
    // 0x4846e4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x4846e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_4846e8:
    // 0x4846e8: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x4846e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_4846ec:
    // 0x4846ec: 0x40f809  jalr        $v0
label_4846f0:
    if (ctx->pc == 0x4846F0u) {
        ctx->pc = 0x4846F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4846ECu;
        // 0x4846f0: 0x34a50406  ori         $a1, $a1, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4846F4u;
        goto label_4846f4;
    }
    ctx->pc = 0x4846ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4846F4u);
        ctx->pc = 0x4846F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4846ECu;
        // 0x4846f0: 0x34a50406  ori         $a1, $a1, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4846ECu, 0x4846F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4846F4u;
label_4846f4:
    // 0x4846f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4846f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4846f8:
    // 0x4846f8: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x4846f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_4846fc:
    // 0x4846fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4846fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_484700:
    // 0x484700: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_484704:
    if (ctx->pc == 0x484704u) {
        ctx->pc = 0x484704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484700u;
        // 0x484704: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484708u;
        goto label_484708;
    }
    ctx->pc = 0x484700u;
    {
        const bool branch_taken_0x484700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x484704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484700u;
        // 0x484704: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484700) {
            ctx->pc = 0x484710u;
            goto label_484710;
        }
    }
    ctx->pc = 0x484708u;
label_484708:
    // 0x484708: 0x10000021  b           . + 4 + (0x21 << 2)
label_48470c:
    if (ctx->pc == 0x48470Cu) {
        ctx->pc = 0x48470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484708u;
        // 0x48470c: 0x8c440218  lw          $a0, 0x218($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484710u;
        goto label_484710;
    }
    ctx->pc = 0x484708u;
    {
        const bool branch_taken_0x484708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484708u;
        // 0x48470c: 0x8c440218  lw          $a0, 0x218($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484708) {
            ctx->pc = 0x484790u;
            goto label_484790;
        }
    }
    ctx->pc = 0x484710u;
label_484710:
    // 0x484710: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x484710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_484714:
    // 0x484714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x484714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_484718:
    // 0x484718: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x484718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_48471c:
    // 0x48471c: 0x8f82896c  lw          $v0, -0x7694($gp)
    ctx->pc = 0x48471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
label_484720:
    // 0x484720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x484720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_484724:
    // 0x484724: 0xaf82896c  sw          $v0, -0x7694($gp)
    ctx->pc = 0x484724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 2));
label_484728:
    // 0x484728: 0xc12170a  jal         func_485C28
label_48472c:
    if (ctx->pc == 0x48472Cu) {
        ctx->pc = 0x484730u;
        goto label_484730;
    }
    ctx->pc = 0x484728u;
    SET_GPR_U32(ctx, 31, 0x484730u);
    ctx->pc = 0x485C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485C28u, 0x484728u, 0x484730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484730u;
label_484730:
    // 0x484730: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x484730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_484734:
    // 0x484734: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x484734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_484738:
    // 0x484738: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x484738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_48473c:
    // 0x48473c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x48473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_484740:
    // 0x484740: 0xac710214  sw          $s1, 0x214($v1)
    ctx->pc = 0x484740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 17));
label_484744:
    // 0x484744: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x484744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_484748:
    // 0x484748: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x484748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_48474c:
    // 0x48474c: 0x40f809  jalr        $v0
label_484750:
    if (ctx->pc == 0x484750u) {
        ctx->pc = 0x484750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48474Cu;
        // 0x484750: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x484754u;
        goto label_484754;
    }
    ctx->pc = 0x48474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484754u);
        ctx->pc = 0x484750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48474Cu;
        // 0x484750: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48474Cu, 0x484754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484754u;
label_484754:
    // 0x484754: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x484754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_484758:
    // 0x484758: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x484758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_48475c:
    // 0x48475c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_484760:
    if (ctx->pc == 0x484760u) {
        ctx->pc = 0x484760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48475Cu;
        // 0x484760: 0xac620210  sw          $v0, 0x210($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484764u;
        goto label_484764;
    }
    ctx->pc = 0x48475Cu;
    {
        const bool branch_taken_0x48475c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x484760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48475Cu;
        // 0x484760: 0xac620210  sw          $v0, 0x210($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48475c) {
            ctx->pc = 0x48476Cu;
            goto label_48476c;
        }
    }
    ctx->pc = 0x484764u;
label_484764:
    // 0x484764: 0x10000016  b           . + 4 + (0x16 << 2)
label_484768:
    if (ctx->pc == 0x484768u) {
        ctx->pc = 0x484768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484764u;
        // 0x484768: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48476Cu;
        goto label_48476c;
    }
    ctx->pc = 0x484764u;
    {
        const bool branch_taken_0x484764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484764u;
        // 0x484768: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484764) {
            ctx->pc = 0x4847C0u;
            goto label_4847c0;
        }
    }
    ctx->pc = 0x48476Cu;
label_48476c:
    // 0x48476c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x48476cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_484770:
    // 0x484770: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x484770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_484774:
    // 0x484774: 0x60f809  jalr        $v1
label_484778:
    if (ctx->pc == 0x484778u) {
        ctx->pc = 0x48477Cu;
        goto label_48477c;
    }
    ctx->pc = 0x484774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x48477Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484774u, 0x48477Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48477Cu;
label_48477c:
    // 0x48477c: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x48477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_484780:
    // 0x484780: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x484780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_484784:
    // 0x484784: 0x8c440218  lw          $a0, 0x218($v0)
    ctx->pc = 0x484784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_484788:
    // 0x484788: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x484788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_48478c:
    // 0x48478c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x48478cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_484790:
    // 0x484790: 0xc11f74a  jal         func_47DD28
label_484794:
    if (ctx->pc == 0x484794u) {
        ctx->pc = 0x484798u;
        goto label_484798;
    }
    ctx->pc = 0x484790u;
    SET_GPR_U32(ctx, 31, 0x484798u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x484790u, 0x484798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484798u;
label_484798:
    // 0x484798: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x484798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_48479c:
    // 0x48479c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x48479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4847a0:
    // 0x4847a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4847a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4847a4:
    // 0x4847a4: 0xac600218  sw          $zero, 0x218($v1)
    ctx->pc = 0x4847a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 0));
label_4847a8:
    // 0x4847a8: 0xc11f74a  jal         func_47DD28
label_4847ac:
    if (ctx->pc == 0x4847ACu) {
        ctx->pc = 0x4847B0u;
        goto label_4847b0;
    }
    ctx->pc = 0x4847A8u;
    SET_GPR_U32(ctx, 31, 0x4847B0u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4847A8u, 0x4847B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4847B0u;
label_4847b0:
    // 0x4847b0: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x4847b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_4847b4:
    // 0x4847b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4847b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4847b8:
    // 0x4847b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4847b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4847bc:
    // 0x4847bc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4847bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4847c0:
    // 0x4847c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4847c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4847c4:
    // 0x4847c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4847c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4847c8:
    // 0x4847c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4847c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4847cc:
    // 0x4847cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4847ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4847d0:
    // 0x4847d0: 0x3e00008  jr          $ra
label_4847d4:
    if (ctx->pc == 0x4847D4u) {
        ctx->pc = 0x4847D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4847D0u;
        // 0x4847d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4847D8u;
        goto label_fallthrough_0x4847d0;
    }
    ctx->pc = 0x4847D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4847D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4847D0u;
        // 0x4847d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4847D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4847d0:
    ctx->pc = 0x4847D8u;
}
