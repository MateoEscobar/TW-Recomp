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

// Function: sub_004F5558
// Address: 0x4f5558 - 0x4f5700
void sub_004F5558_0x4f5558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5558_0x4f5558");
#endif

    switch (ctx->pc) {
        case 0x4f5558u: goto label_4f5558;
        case 0x4f555cu: goto label_4f555c;
        case 0x4f5560u: goto label_4f5560;
        case 0x4f5564u: goto label_4f5564;
        case 0x4f5568u: goto label_4f5568;
        case 0x4f556cu: goto label_4f556c;
        case 0x4f5570u: goto label_4f5570;
        case 0x4f5574u: goto label_4f5574;
        case 0x4f5578u: goto label_4f5578;
        case 0x4f557cu: goto label_4f557c;
        case 0x4f5580u: goto label_4f5580;
        case 0x4f5584u: goto label_4f5584;
        case 0x4f5588u: goto label_4f5588;
        case 0x4f558cu: goto label_4f558c;
        case 0x4f5590u: goto label_4f5590;
        case 0x4f5594u: goto label_4f5594;
        case 0x4f5598u: goto label_4f5598;
        case 0x4f559cu: goto label_4f559c;
        case 0x4f55a0u: goto label_4f55a0;
        case 0x4f55a4u: goto label_4f55a4;
        case 0x4f55a8u: goto label_4f55a8;
        case 0x4f55acu: goto label_4f55ac;
        case 0x4f55b0u: goto label_4f55b0;
        case 0x4f55b4u: goto label_4f55b4;
        case 0x4f55b8u: goto label_4f55b8;
        case 0x4f55bcu: goto label_4f55bc;
        case 0x4f55c0u: goto label_4f55c0;
        case 0x4f55c4u: goto label_4f55c4;
        case 0x4f55c8u: goto label_4f55c8;
        case 0x4f55ccu: goto label_4f55cc;
        case 0x4f55d0u: goto label_4f55d0;
        case 0x4f55d4u: goto label_4f55d4;
        case 0x4f55d8u: goto label_4f55d8;
        case 0x4f55dcu: goto label_4f55dc;
        case 0x4f55e0u: goto label_4f55e0;
        case 0x4f55e4u: goto label_4f55e4;
        case 0x4f55e8u: goto label_4f55e8;
        case 0x4f55ecu: goto label_4f55ec;
        case 0x4f55f0u: goto label_4f55f0;
        case 0x4f55f4u: goto label_4f55f4;
        case 0x4f55f8u: goto label_4f55f8;
        case 0x4f55fcu: goto label_4f55fc;
        case 0x4f5600u: goto label_4f5600;
        case 0x4f5604u: goto label_4f5604;
        case 0x4f5608u: goto label_4f5608;
        case 0x4f560cu: goto label_4f560c;
        case 0x4f5610u: goto label_4f5610;
        case 0x4f5614u: goto label_4f5614;
        case 0x4f5618u: goto label_4f5618;
        case 0x4f561cu: goto label_4f561c;
        case 0x4f5620u: goto label_4f5620;
        case 0x4f5624u: goto label_4f5624;
        case 0x4f5628u: goto label_4f5628;
        case 0x4f562cu: goto label_4f562c;
        case 0x4f5630u: goto label_4f5630;
        case 0x4f5634u: goto label_4f5634;
        case 0x4f5638u: goto label_4f5638;
        case 0x4f563cu: goto label_4f563c;
        case 0x4f5640u: goto label_4f5640;
        case 0x4f5644u: goto label_4f5644;
        case 0x4f5648u: goto label_4f5648;
        case 0x4f564cu: goto label_4f564c;
        case 0x4f5650u: goto label_4f5650;
        case 0x4f5654u: goto label_4f5654;
        case 0x4f5658u: goto label_4f5658;
        case 0x4f565cu: goto label_4f565c;
        case 0x4f5660u: goto label_4f5660;
        case 0x4f5664u: goto label_4f5664;
        case 0x4f5668u: goto label_4f5668;
        case 0x4f566cu: goto label_4f566c;
        case 0x4f5670u: goto label_4f5670;
        case 0x4f5674u: goto label_4f5674;
        case 0x4f5678u: goto label_4f5678;
        case 0x4f567cu: goto label_4f567c;
        case 0x4f5680u: goto label_4f5680;
        case 0x4f5684u: goto label_4f5684;
        case 0x4f5688u: goto label_4f5688;
        case 0x4f568cu: goto label_4f568c;
        case 0x4f5690u: goto label_4f5690;
        case 0x4f5694u: goto label_4f5694;
        case 0x4f5698u: goto label_4f5698;
        case 0x4f569cu: goto label_4f569c;
        case 0x4f56a0u: goto label_4f56a0;
        case 0x4f56a4u: goto label_4f56a4;
        case 0x4f56a8u: goto label_4f56a8;
        case 0x4f56acu: goto label_4f56ac;
        case 0x4f56b0u: goto label_4f56b0;
        case 0x4f56b4u: goto label_4f56b4;
        case 0x4f56b8u: goto label_4f56b8;
        case 0x4f56bcu: goto label_4f56bc;
        case 0x4f56c0u: goto label_4f56c0;
        case 0x4f56c4u: goto label_4f56c4;
        case 0x4f56c8u: goto label_4f56c8;
        case 0x4f56ccu: goto label_4f56cc;
        case 0x4f56d0u: goto label_4f56d0;
        case 0x4f56d4u: goto label_4f56d4;
        case 0x4f56d8u: goto label_4f56d8;
        case 0x4f56dcu: goto label_4f56dc;
        case 0x4f56e0u: goto label_4f56e0;
        case 0x4f56e4u: goto label_4f56e4;
        case 0x4f56e8u: goto label_4f56e8;
        case 0x4f56ecu: goto label_4f56ec;
        case 0x4f56f0u: goto label_4f56f0;
        case 0x4f56f4u: goto label_4f56f4;
        case 0x4f56f8u: goto label_4f56f8;
        case 0x4f56fcu: goto label_4f56fc;
        default: break;
    }

    ctx->pc = 0x4f5558u;

label_4f5558:
    // 0x4f5558: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4f5558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4f555c:
    // 0x4f555c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4f555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4f5560:
    // 0x4f5560: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4f5560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4f5564:
    // 0x4f5564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f5564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5568:
    // 0x4f5568: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f5568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4f556c:
    // 0x4f556c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4f556cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4f5570:
    // 0x4f5570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f5570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f5574:
    // 0x4f5574: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4f5574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f5578:
    // 0x4f5578: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x4f5578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_4f557c:
    // 0x4f557c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4f557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4f5580:
    // 0x4f5580: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4f5584:
    if (ctx->pc == 0x4F5584u) {
        ctx->pc = 0x4F5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5580u;
        // 0x4f5584: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5588u;
        goto label_4f5588;
    }
    ctx->pc = 0x4F5580u;
    {
        const bool branch_taken_0x4f5580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5580u;
        // 0x4f5584: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5580) {
            ctx->pc = 0x4F5598u;
            goto label_4f5598;
        }
    }
    ctx->pc = 0x4F5588u;
label_4f5588:
    // 0x4f5588: 0xc13d3b6  jal         func_4F4ED8
label_4f558c:
    if (ctx->pc == 0x4F558Cu) {
        ctx->pc = 0x4F5590u;
        goto label_4f5590;
    }
    ctx->pc = 0x4F5588u;
    SET_GPR_U32(ctx, 31, 0x4F5590u);
    ctx->pc = 0x4F4ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4ED8u, 0x4F5588u, 0x4F5590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5590u;
label_4f5590:
    // 0x4f5590: 0x10000004  b           . + 4 + (0x4 << 2)
label_4f5594:
    if (ctx->pc == 0x4F5594u) {
        ctx->pc = 0x4F5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5590u;
        // 0x4f5594: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5598u;
        goto label_4f5598;
    }
    ctx->pc = 0x4F5590u;
    {
        const bool branch_taken_0x4f5590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5590u;
        // 0x4f5594: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5590) {
            ctx->pc = 0x4F55A4u;
            goto label_4f55a4;
        }
    }
    ctx->pc = 0x4F5598u;
label_4f5598:
    // 0x4f5598: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4f5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4f559c:
    // 0x4f559c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f55a0:
    // 0x4f55a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4f55a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4f55a4:
    // 0x4f55a4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4f55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4f55a8:
    // 0x4f55a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4f55a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f55ac:
    // 0x4f55ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4f55acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f55b0:
    // 0x4f55b0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4f55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f55b4:
    // 0x4f55b4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4f55b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4f55b8:
    // 0x4f55b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4f55b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f55bc:
    // 0x4f55bc: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x4f55bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4f55c0:
    // 0x4f55c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4f55c4:
    if (ctx->pc == 0x4F55C4u) {
        ctx->pc = 0x4F55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F55C0u;
        // 0x4f55c4: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F55C8u;
        goto label_4f55c8;
    }
    ctx->pc = 0x4F55C0u;
    {
        const bool branch_taken_0x4f55c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F55C0u;
        // 0x4f55c4: 0xae250000  sw          $a1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f55c0) {
            ctx->pc = 0x4F55D8u;
            goto label_4f55d8;
        }
    }
    ctx->pc = 0x4F55C8u;
label_4f55c8:
    // 0x4f55c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f55c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f55cc:
    // 0x4f55cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4f55ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f55d0:
    // 0x4f55d0: 0xc13d4ce  jal         func_4F5338
label_4f55d4:
    if (ctx->pc == 0x4F55D4u) {
        ctx->pc = 0x4F55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F55D0u;
        // 0x4f55d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F55D8u;
        goto label_4f55d8;
    }
    ctx->pc = 0x4F55D0u;
    SET_GPR_U32(ctx, 31, 0x4F55D8u);
    ctx->pc = 0x4F55D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F55D0u;
    // 0x4f55d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5338u, 0x4F55D0u, 0x4F55D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F55D8u;
label_4f55d8:
    // 0x4f55d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4f55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f55dc:
    // 0x4f55dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4f55e0:
    // 0x4f55e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4f55e4:
    if (ctx->pc == 0x4F55E4u) {
        ctx->pc = 0x4F55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F55E0u;
        // 0x4f55e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F55E8u;
        goto label_4f55e8;
    }
    ctx->pc = 0x4F55E0u;
    {
        const bool branch_taken_0x4f55e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f55e0) {
            ctx->pc = 0x4F55E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F55E0u;
            // 0x4f55e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F55E8u;
            goto label_4f55e8;
        }
    }
    ctx->pc = 0x4F55E8u;
label_4f55e8:
    // 0x4f55e8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x4f55e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4f55ec:
    // 0x4f55ec: 0x8c69b9c0  lw          $t1, -0x4640($v1)
    ctx->pc = 0x4f55ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949312)));
label_4f55f0:
    // 0x4f55f0: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x4f55f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_4f55f4:
    // 0x4f55f4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4f55f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4f55f8:
    // 0x4f55f8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4f55f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4f55fc:
    // 0x4f55fc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f55fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4f5600:
    // 0x4f5600: 0x3c0a0059  lui         $t2, 0x59
    ctx->pc = 0x4f5600u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)89 << 16));
label_4f5604:
    // 0x4f5604: 0x24a58a48  addiu       $a1, $a1, -0x75B8
    ctx->pc = 0x4f5604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937160));
label_4f5608:
    // 0x4f5608: 0x254a8a78  addiu       $t2, $t2, -0x7588
    ctx->pc = 0x4f5608u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937208));
label_4f560c:
    // 0x4f560c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f560cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f5610:
    // 0x4f5610: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x4f5610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_4f5614:
    // 0x4f5614: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f5614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f5618:
    // 0x4f5618: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f5618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f561c:
    // 0x4f561c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x4f561cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4f5620:
    // 0x4f5620: 0x25088a50  addiu       $t0, $t0, -0x75B0
    ctx->pc = 0x4f5620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937168));
label_4f5624:
    // 0x4f5624: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f5624u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f5628:
    // 0x4f5628: 0x40f809  jalr        $v0
label_4f562c:
    if (ctx->pc == 0x4F562Cu) {
        ctx->pc = 0x4F562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5628u;
        // 0x4f562c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5630u;
        goto label_4f5630;
    }
    ctx->pc = 0x4F5628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F5630u);
        ctx->pc = 0x4F562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5628u;
        // 0x4f562c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5628u, 0x4F5630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5630u;
label_4f5630:
    // 0x4f5630: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x4f5630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4f5634:
    // 0x4f5634: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4f5634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4f5638:
    // 0x4f5638: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x4f5638u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4f563c:
    // 0x4f563c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4f5640:
    if (ctx->pc == 0x4F5640u) {
        ctx->pc = 0x4F5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F563Cu;
        // 0x4f5640: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5644u;
        goto label_4f5644;
    }
    ctx->pc = 0x4F563Cu;
    {
        const bool branch_taken_0x4f563c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F563Cu;
        // 0x4f5640: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f563c) {
            ctx->pc = 0x4F5670u;
            goto label_4f5670;
        }
    }
    ctx->pc = 0x4F5644u;
label_4f5644:
    // 0x4f5644: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x4f5644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_4f5648:
    // 0x4f5648: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4f5648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4f564c:
    // 0x4f564c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4f5650:
    if (ctx->pc == 0x4F5650u) {
        ctx->pc = 0x4F5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F564Cu;
        // 0x4f5650: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5654u;
        goto label_4f5654;
    }
    ctx->pc = 0x4F564Cu;
    {
        const bool branch_taken_0x4f564c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f564c) {
            ctx->pc = 0x4F5650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F564Cu;
            // 0x4f5650: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5664u;
            goto label_4f5664;
        }
    }
    ctx->pc = 0x4F5654u;
label_4f5654:
    // 0x4f5654: 0xc13d3b6  jal         func_4F4ED8
label_4f5658:
    if (ctx->pc == 0x4F5658u) {
        ctx->pc = 0x4F565Cu;
        goto label_4f565c;
    }
    ctx->pc = 0x4F5654u;
    SET_GPR_U32(ctx, 31, 0x4F565Cu);
    ctx->pc = 0x4F4ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4ED8u, 0x4F5654u, 0x4F565Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F565Cu;
label_4f565c:
    // 0x4f565c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4f5660:
    if (ctx->pc == 0x4F5660u) {
        ctx->pc = 0x4F5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F565Cu;
        // 0x4f5660: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5664u;
        goto label_4f5664;
    }
    ctx->pc = 0x4F565Cu;
    {
        const bool branch_taken_0x4f565c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F565Cu;
        // 0x4f5660: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f565c) {
            ctx->pc = 0x4F566Cu;
            goto label_4f566c;
        }
    }
    ctx->pc = 0x4F5664u;
label_4f5664:
    // 0x4f5664: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f5664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f5668:
    // 0x4f5668: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4f5668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4f566c:
    // 0x4f566c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4f566cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4f5670:
    // 0x4f5670: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x4f5670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4f5674:
    // 0x4f5674: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x4f5674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_4f5678:
    // 0x4f5678: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4f5678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f567c:
    // 0x4f567c: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x4f567cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4f5680:
    // 0x4f5680: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4f5680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_4f5684:
    // 0x4f5684: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4f5684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4f5688:
    // 0x4f5688: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4f5688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4f568c:
    // 0x4f568c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_4f5690:
    if (ctx->pc == 0x4F5690u) {
        ctx->pc = 0x4F5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F568Cu;
        // 0x4f5690: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5694u;
        goto label_4f5694;
    }
    ctx->pc = 0x4F568Cu;
    {
        const bool branch_taken_0x4f568c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f568c) {
            ctx->pc = 0x4F5690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F568Cu;
            // 0x4f5690: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5694u;
            goto label_4f5694;
        }
    }
    ctx->pc = 0x4F5694u;
label_4f5694:
    // 0x4f5694: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4f5694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_4f5698:
    // 0x4f5698: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4f5698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4f569c:
    // 0x4f569c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x4f569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4f56a0:
    // 0x4f56a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4f56a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4f56a4:
    // 0x4f56a4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x4f56a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_4f56a8:
    // 0x4f56a8: 0x2485fff0  addiu       $a1, $a0, -0x10
    ctx->pc = 0x4f56a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_4f56ac:
    // 0x4f56ac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4f56acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4f56b0:
    // 0x4f56b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4f56b4:
    // 0x4f56b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_4f56b8:
    if (ctx->pc == 0x4F56B8u) {
        ctx->pc = 0x4F56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F56B4u;
        // 0x4f56b8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F56BCu;
        goto label_4f56bc;
    }
    ctx->pc = 0x4F56B4u;
    {
        const bool branch_taken_0x4f56b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F56B4u;
        // 0x4f56b8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f56b4) {
            ctx->pc = 0x4F56E0u;
            goto label_4f56e0;
        }
    }
    ctx->pc = 0x4F56BCu;
label_4f56bc:
    // 0x4f56bc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4f56c0:
    if (ctx->pc == 0x4F56C0u) {
        ctx->pc = 0x4F56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F56BCu;
        // 0x4f56c0: 0x8e68b9c0  lw          $t0, -0x4640($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F56C4u;
        goto label_4f56c4;
    }
    ctx->pc = 0x4F56BCu;
    {
        const bool branch_taken_0x4f56bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F56BCu;
        // 0x4f56c0: 0x8e68b9c0  lw          $t0, -0x4640($s3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f56bc) {
            ctx->pc = 0x4F56E0u;
            goto label_4f56e0;
        }
    }
    ctx->pc = 0x4F56C4u;
label_4f56c4:
    // 0x4f56c4: 0x26468a50  addiu       $a2, $s2, -0x75B0
    ctx->pc = 0x4f56c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937168));
label_4f56c8:
    // 0x4f56c8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f56c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f56cc:
    // 0x4f56cc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f56d0:
    // 0x4f56d0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f56d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f56d4:
    // 0x4f56d4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f56d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f56d8:
    // 0x4f56d8: 0x60f809  jalr        $v1
label_4f56dc:
    if (ctx->pc == 0x4F56DCu) {
        ctx->pc = 0x4F56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F56D8u;
        // 0x4f56dc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F56E0u;
        goto label_4f56e0;
    }
    ctx->pc = 0x4F56D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F56E0u);
        ctx->pc = 0x4F56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F56D8u;
        // 0x4f56dc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F56D8u, 0x4F56E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F56E0u;
label_4f56e0:
    // 0x4f56e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4f56e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f56e4:
    // 0x4f56e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4f56e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f56e8:
    // 0x4f56e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f56e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f56ec:
    // 0x4f56ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4f56ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f56f0:
    // 0x4f56f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f56f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f56f4:
    // 0x4f56f4: 0x3e00008  jr          $ra
label_4f56f8:
    if (ctx->pc == 0x4F56F8u) {
        ctx->pc = 0x4F56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F56F4u;
        // 0x4f56f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F56FCu;
        goto label_4f56fc;
    }
    ctx->pc = 0x4F56F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F56F4u;
        // 0x4f56f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F56F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F56FCu;
label_4f56fc:
    // 0x4f56fc: 0x0  nop
    ctx->pc = 0x4f56fcu;
    // NOP
    ctx->pc = 0x4f5700u;
}
