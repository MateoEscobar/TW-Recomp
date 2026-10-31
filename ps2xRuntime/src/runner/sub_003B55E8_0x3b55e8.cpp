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

// Function: sub_003B55E8
// Address: 0x3b55e8 - 0x3b57c8
void sub_003B55E8_0x3b55e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B55E8_0x3b55e8");
#endif

    switch (ctx->pc) {
        case 0x3b55e8u: goto label_3b55e8;
        case 0x3b55ecu: goto label_3b55ec;
        case 0x3b55f0u: goto label_3b55f0;
        case 0x3b55f4u: goto label_3b55f4;
        case 0x3b55f8u: goto label_3b55f8;
        case 0x3b55fcu: goto label_3b55fc;
        case 0x3b5600u: goto label_3b5600;
        case 0x3b5604u: goto label_3b5604;
        case 0x3b5608u: goto label_3b5608;
        case 0x3b560cu: goto label_3b560c;
        case 0x3b5610u: goto label_3b5610;
        case 0x3b5614u: goto label_3b5614;
        case 0x3b5618u: goto label_3b5618;
        case 0x3b561cu: goto label_3b561c;
        case 0x3b5620u: goto label_3b5620;
        case 0x3b5624u: goto label_3b5624;
        case 0x3b5628u: goto label_3b5628;
        case 0x3b562cu: goto label_3b562c;
        case 0x3b5630u: goto label_3b5630;
        case 0x3b5634u: goto label_3b5634;
        case 0x3b5638u: goto label_3b5638;
        case 0x3b563cu: goto label_3b563c;
        case 0x3b5640u: goto label_3b5640;
        case 0x3b5644u: goto label_3b5644;
        case 0x3b5648u: goto label_3b5648;
        case 0x3b564cu: goto label_3b564c;
        case 0x3b5650u: goto label_3b5650;
        case 0x3b5654u: goto label_3b5654;
        case 0x3b5658u: goto label_3b5658;
        case 0x3b565cu: goto label_3b565c;
        case 0x3b5660u: goto label_3b5660;
        case 0x3b5664u: goto label_3b5664;
        case 0x3b5668u: goto label_3b5668;
        case 0x3b566cu: goto label_3b566c;
        case 0x3b5670u: goto label_3b5670;
        case 0x3b5674u: goto label_3b5674;
        case 0x3b5678u: goto label_3b5678;
        case 0x3b567cu: goto label_3b567c;
        case 0x3b5680u: goto label_3b5680;
        case 0x3b5684u: goto label_3b5684;
        case 0x3b5688u: goto label_3b5688;
        case 0x3b568cu: goto label_3b568c;
        case 0x3b5690u: goto label_3b5690;
        case 0x3b5694u: goto label_3b5694;
        case 0x3b5698u: goto label_3b5698;
        case 0x3b569cu: goto label_3b569c;
        case 0x3b56a0u: goto label_3b56a0;
        case 0x3b56a4u: goto label_3b56a4;
        case 0x3b56a8u: goto label_3b56a8;
        case 0x3b56acu: goto label_3b56ac;
        case 0x3b56b0u: goto label_3b56b0;
        case 0x3b56b4u: goto label_3b56b4;
        case 0x3b56b8u: goto label_3b56b8;
        case 0x3b56bcu: goto label_3b56bc;
        case 0x3b56c0u: goto label_3b56c0;
        case 0x3b56c4u: goto label_3b56c4;
        case 0x3b56c8u: goto label_3b56c8;
        case 0x3b56ccu: goto label_3b56cc;
        case 0x3b56d0u: goto label_3b56d0;
        case 0x3b56d4u: goto label_3b56d4;
        case 0x3b56d8u: goto label_3b56d8;
        case 0x3b56dcu: goto label_3b56dc;
        case 0x3b56e0u: goto label_3b56e0;
        case 0x3b56e4u: goto label_3b56e4;
        case 0x3b56e8u: goto label_3b56e8;
        case 0x3b56ecu: goto label_3b56ec;
        case 0x3b56f0u: goto label_3b56f0;
        case 0x3b56f4u: goto label_3b56f4;
        case 0x3b56f8u: goto label_3b56f8;
        case 0x3b56fcu: goto label_3b56fc;
        case 0x3b5700u: goto label_3b5700;
        case 0x3b5704u: goto label_3b5704;
        case 0x3b5708u: goto label_3b5708;
        case 0x3b570cu: goto label_3b570c;
        case 0x3b5710u: goto label_3b5710;
        case 0x3b5714u: goto label_3b5714;
        case 0x3b5718u: goto label_3b5718;
        case 0x3b571cu: goto label_3b571c;
        case 0x3b5720u: goto label_3b5720;
        case 0x3b5724u: goto label_3b5724;
        case 0x3b5728u: goto label_3b5728;
        case 0x3b572cu: goto label_3b572c;
        case 0x3b5730u: goto label_3b5730;
        case 0x3b5734u: goto label_3b5734;
        case 0x3b5738u: goto label_3b5738;
        case 0x3b573cu: goto label_3b573c;
        case 0x3b5740u: goto label_3b5740;
        case 0x3b5744u: goto label_3b5744;
        case 0x3b5748u: goto label_3b5748;
        case 0x3b574cu: goto label_3b574c;
        case 0x3b5750u: goto label_3b5750;
        case 0x3b5754u: goto label_3b5754;
        case 0x3b5758u: goto label_3b5758;
        case 0x3b575cu: goto label_3b575c;
        case 0x3b5760u: goto label_3b5760;
        case 0x3b5764u: goto label_3b5764;
        case 0x3b5768u: goto label_3b5768;
        case 0x3b576cu: goto label_3b576c;
        case 0x3b5770u: goto label_3b5770;
        case 0x3b5774u: goto label_3b5774;
        case 0x3b5778u: goto label_3b5778;
        case 0x3b577cu: goto label_3b577c;
        case 0x3b5780u: goto label_3b5780;
        case 0x3b5784u: goto label_3b5784;
        case 0x3b5788u: goto label_3b5788;
        case 0x3b578cu: goto label_3b578c;
        case 0x3b5790u: goto label_3b5790;
        case 0x3b5794u: goto label_3b5794;
        case 0x3b5798u: goto label_3b5798;
        case 0x3b579cu: goto label_3b579c;
        case 0x3b57a0u: goto label_3b57a0;
        case 0x3b57a4u: goto label_3b57a4;
        case 0x3b57a8u: goto label_3b57a8;
        case 0x3b57acu: goto label_3b57ac;
        case 0x3b57b0u: goto label_3b57b0;
        case 0x3b57b4u: goto label_3b57b4;
        case 0x3b57b8u: goto label_3b57b8;
        case 0x3b57bcu: goto label_3b57bc;
        case 0x3b57c0u: goto label_3b57c0;
        case 0x3b57c4u: goto label_3b57c4;
        default: break;
    }

    ctx->pc = 0x3b55e8u;

label_3b55e8:
    // 0x3b55e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b55e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3b55ec:
    // 0x3b55ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3b55ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3b55f0:
    // 0x3b55f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3b55f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3b55f4:
    // 0x3b55f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b55f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b55f8:
    // 0x3b55f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3b55f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3b55fc:
    // 0x3b55fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b55fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b5600:
    // 0x3b5600: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b5600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3b5604:
    // 0x3b5604: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b5604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b5608:
    // 0x3b5608: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b5608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b560c:
    // 0x3b560c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b560cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b5610:
    // 0x3b5610: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b5610u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b5614:
    // 0x3b5614: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b5614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b5618:
    // 0x3b5618: 0x40f809  jalr        $v0
label_3b561c:
    if (ctx->pc == 0x3B561Cu) {
        ctx->pc = 0x3B561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5618u;
        // 0x3b561c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5620u;
        goto label_3b5620;
    }
    ctx->pc = 0x3B5618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B5620u);
        ctx->pc = 0x3B561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5618u;
        // 0x3b561c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5618u, 0x3B5620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B5620u;
label_3b5620:
    // 0x3b5620: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b5620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5624:
    // 0x3b5624: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3b5624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3b5628:
    // 0x3b5628: 0x12020034  beq         $s0, $v0, . + 4 + (0x34 << 2)
label_3b562c:
    if (ctx->pc == 0x3B562Cu) {
        ctx->pc = 0x3B562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5628u;
        // 0x3b562c: 0x2e02000c  sltiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5630u;
        goto label_3b5630;
    }
    ctx->pc = 0x3B5628u;
    {
        const bool branch_taken_0x3b5628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5628u;
        // 0x3b562c: 0x2e02000c  sltiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5628) {
            ctx->pc = 0x3B56FCu;
            goto label_3b56fc;
        }
    }
    ctx->pc = 0x3B5630u;
label_3b5630:
    // 0x3b5630: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3b5634:
    if (ctx->pc == 0x3B5634u) {
        ctx->pc = 0x3B5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5630u;
        // 0x3b5634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5638u;
        goto label_3b5638;
    }
    ctx->pc = 0x3B5630u;
    {
        const bool branch_taken_0x3b5630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5630u;
        // 0x3b5634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5630) {
            ctx->pc = 0x3B5648u;
            goto label_3b5648;
        }
    }
    ctx->pc = 0x3B5638u;
label_3b5638:
    // 0x3b5638: 0x1202003f  beq         $s0, $v0, . + 4 + (0x3F << 2)
label_3b563c:
    if (ctx->pc == 0x3B563Cu) {
        ctx->pc = 0x3B563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5638u;
        // 0x3b563c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5640u;
        goto label_3b5640;
    }
    ctx->pc = 0x3B5638u;
    {
        const bool branch_taken_0x3b5638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5638u;
        // 0x3b563c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5638) {
            ctx->pc = 0x3B5738u;
            goto label_3b5738;
        }
    }
    ctx->pc = 0x3B5640u;
label_3b5640:
    // 0x3b5640: 0x1000005c  b           . + 4 + (0x5C << 2)
label_3b5644:
    if (ctx->pc == 0x3B5644u) {
        ctx->pc = 0x3B5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5640u;
        // 0x3b5644: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5648u;
        goto label_3b5648;
    }
    ctx->pc = 0x3B5640u;
    {
        const bool branch_taken_0x3b5640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5640u;
        // 0x3b5644: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5640) {
            ctx->pc = 0x3B57B4u;
            goto label_3b57b4;
        }
    }
    ctx->pc = 0x3B5648u;
label_3b5648:
    // 0x3b5648: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3b5648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b564c:
    // 0x3b564c: 0x12020057  beq         $s0, $v0, . + 4 + (0x57 << 2)
label_3b5650:
    if (ctx->pc == 0x3B5650u) {
        ctx->pc = 0x3B5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B564Cu;
        // 0x3b5650: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5654u;
        goto label_3b5654;
    }
    ctx->pc = 0x3B564Cu;
    {
        const bool branch_taken_0x3b564c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B564Cu;
        // 0x3b5650: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b564c) {
            ctx->pc = 0x3B57ACu;
            goto label_3b57ac;
        }
    }
    ctx->pc = 0x3B5654u;
label_3b5654:
    // 0x3b5654: 0x16020056  bne         $s0, $v0, . + 4 + (0x56 << 2)
label_3b5658:
    if (ctx->pc == 0x3B5658u) {
        ctx->pc = 0x3B5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5654u;
        // 0x3b5658: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B565Cu;
        goto label_3b565c;
    }
    ctx->pc = 0x3B5654u;
    {
        const bool branch_taken_0x3b5654 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5654u;
        // 0x3b5658: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5654) {
            ctx->pc = 0x3B57B0u;
            goto label_3b57b0;
        }
    }
    ctx->pc = 0x3B565Cu;
label_3b565c:
    // 0x3b565c: 0xc0ea146  jal         func_3A8518
label_3b5660:
    if (ctx->pc == 0x3B5660u) {
        ctx->pc = 0x3B5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B565Cu;
        // 0x3b5660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5664u;
        goto label_3b5664;
    }
    ctx->pc = 0x3B565Cu;
    SET_GPR_U32(ctx, 31, 0x3B5664u);
    ctx->pc = 0x3B5660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B565Cu;
    // 0x3b5660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B565Cu, 0x3B5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5664u;
label_3b5664:
    // 0x3b5664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b5664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b5668:
    // 0x3b5668: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3b5668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3b566c:
    // 0x3b566c: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_3b5670:
    if (ctx->pc == 0x3B5670u) {
        ctx->pc = 0x3B5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B566Cu;
        // 0x3b5670: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5674u;
        goto label_3b5674;
    }
    ctx->pc = 0x3B566Cu;
    {
        const bool branch_taken_0x3b566c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B566Cu;
        // 0x3b5670: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b566c) {
            ctx->pc = 0x3B5694u;
            goto label_3b5694;
        }
    }
    ctx->pc = 0x3B5674u;
label_3b5674:
    // 0x3b5674: 0xc0e91b2  jal         func_3A46C8
label_3b5678:
    if (ctx->pc == 0x3B5678u) {
        ctx->pc = 0x3B5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5674u;
        // 0x3b5678: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B567Cu;
        goto label_3b567c;
    }
    ctx->pc = 0x3B5674u;
    SET_GPR_U32(ctx, 31, 0x3B567Cu);
    ctx->pc = 0x3B5678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5674u;
    // 0x3b5678: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B5674u, 0x3B567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B567Cu;
label_3b567c:
    // 0x3b567c: 0xc0e91b2  jal         func_3A46C8
label_3b5680:
    if (ctx->pc == 0x3B5680u) {
        ctx->pc = 0x3B5680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B567Cu;
        // 0x3b5680: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5684u;
        goto label_3b5684;
    }
    ctx->pc = 0x3B567Cu;
    SET_GPR_U32(ctx, 31, 0x3B5684u);
    ctx->pc = 0x3B5680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B567Cu;
    // 0x3b5680: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B567Cu, 0x3B5684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5684u;
label_3b5684:
    // 0x3b5684: 0xc0e92c0  jal         func_3A4B00
label_3b5688:
    if (ctx->pc == 0x3B5688u) {
        ctx->pc = 0x3B5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5684u;
        // 0x3b5688: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B568Cu;
        goto label_3b568c;
    }
    ctx->pc = 0x3B5684u;
    SET_GPR_U32(ctx, 31, 0x3B568Cu);
    ctx->pc = 0x3B5688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5684u;
    // 0x3b5688: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3B5684u, 0x3B568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B568Cu;
label_3b568c:
    // 0x3b568c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3b568cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3b5690:
    // 0x3b5690: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b5690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b5694:
    // 0x3b5694: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_3b5698:
    if (ctx->pc == 0x3B5698u) {
        ctx->pc = 0x3B5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5694u;
        // 0x3b5698: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B569Cu;
        goto label_3b569c;
    }
    ctx->pc = 0x3B5694u;
    {
        const bool branch_taken_0x3b5694 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5694u;
        // 0x3b5698: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5694) {
            ctx->pc = 0x3B56D0u;
            goto label_3b56d0;
        }
    }
    ctx->pc = 0x3B569Cu;
label_3b569c:
    // 0x3b569c: 0xc0e91b2  jal         func_3A46C8
label_3b56a0:
    if (ctx->pc == 0x3B56A0u) {
        ctx->pc = 0x3B56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B569Cu;
        // 0x3b56a0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B56A4u;
        goto label_3b56a4;
    }
    ctx->pc = 0x3B569Cu;
    SET_GPR_U32(ctx, 31, 0x3B56A4u);
    ctx->pc = 0x3B56A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B569Cu;
    // 0x3b56a0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B569Cu, 0x3B56A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56A4u;
label_3b56a4:
    // 0x3b56a4: 0xc0e91b2  jal         func_3A46C8
label_3b56a8:
    if (ctx->pc == 0x3B56A8u) {
        ctx->pc = 0x3B56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56A4u;
        // 0x3b56a8: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B56ACu;
        goto label_3b56ac;
    }
    ctx->pc = 0x3B56A4u;
    SET_GPR_U32(ctx, 31, 0x3B56ACu);
    ctx->pc = 0x3B56A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56A4u;
    // 0x3b56a8: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B56A4u, 0x3B56ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56ACu;
label_3b56ac:
    // 0x3b56ac: 0xc0e92c0  jal         func_3A4B00
label_3b56b0:
    if (ctx->pc == 0x3B56B0u) {
        ctx->pc = 0x3B56B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56ACu;
        // 0x3b56b0: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B56B4u;
        goto label_3b56b4;
    }
    ctx->pc = 0x3B56ACu;
    SET_GPR_U32(ctx, 31, 0x3B56B4u);
    ctx->pc = 0x3B56B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56ACu;
    // 0x3b56b0: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3B56ACu, 0x3B56B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56B4u;
label_3b56b4:
    // 0x3b56b4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3b56b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3b56b8:
    // 0x3b56b8: 0x3c05fd96  lui         $a1, 0xFD96
    ctx->pc = 0x3b56b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64918 << 16));
label_3b56bc:
    // 0x3b56bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b56bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b56c0:
    // 0x3b56c0: 0xc0e9132  jal         func_3A44C8
label_3b56c4:
    if (ctx->pc == 0x3B56C4u) {
        ctx->pc = 0x3B56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56C0u;
        // 0x3b56c4: 0x34a5c6c0  ori         $a1, $a1, 0xC6C0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50880);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B56C8u;
        goto label_3b56c8;
    }
    ctx->pc = 0x3B56C0u;
    SET_GPR_U32(ctx, 31, 0x3B56C8u);
    ctx->pc = 0x3B56C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56C0u;
    // 0x3b56c4: 0x34a5c6c0  ori         $a1, $a1, 0xC6C0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50880);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B56C0u, 0x3B56C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56C8u;
label_3b56c8:
    // 0x3b56c8: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3b56c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3b56cc:
    // 0x3b56cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3b56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3b56d0:
    // 0x3b56d0: 0x16020037  bne         $s0, $v0, . + 4 + (0x37 << 2)
label_3b56d4:
    if (ctx->pc == 0x3B56D4u) {
        ctx->pc = 0x3B56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56D0u;
        // 0x3b56d4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B56D8u;
        goto label_3b56d8;
    }
    ctx->pc = 0x3B56D0u;
    {
        const bool branch_taken_0x3b56d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56D0u;
        // 0x3b56d4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b56d0) {
            ctx->pc = 0x3B57B0u;
            goto label_3b57b0;
        }
    }
    ctx->pc = 0x3B56D8u;
label_3b56d8:
    // 0x3b56d8: 0xc0e91c4  jal         func_3A4710
label_3b56dc:
    if (ctx->pc == 0x3B56DCu) {
        ctx->pc = 0x3B56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56D8u;
        // 0x3b56dc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B56E0u;
        goto label_3b56e0;
    }
    ctx->pc = 0x3B56D8u;
    SET_GPR_U32(ctx, 31, 0x3B56E0u);
    ctx->pc = 0x3B56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56D8u;
    // 0x3b56dc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4710u, 0x3B56D8u, 0x3B56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56E0u;
label_3b56e0:
    // 0x3b56e0: 0xc0e91c4  jal         func_3A4710
label_3b56e4:
    if (ctx->pc == 0x3B56E4u) {
        ctx->pc = 0x3B56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56E0u;
        // 0x3b56e4: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B56E8u;
        goto label_3b56e8;
    }
    ctx->pc = 0x3B56E0u;
    SET_GPR_U32(ctx, 31, 0x3B56E8u);
    ctx->pc = 0x3B56E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56E0u;
    // 0x3b56e4: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4710u, 0x3B56E0u, 0x3B56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56E8u;
label_3b56e8:
    // 0x3b56e8: 0xc0e92b8  jal         func_3A4AE0
label_3b56ec:
    if (ctx->pc == 0x3B56ECu) {
        ctx->pc = 0x3B56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56E8u;
        // 0x3b56ec: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B56F0u;
        goto label_3b56f0;
    }
    ctx->pc = 0x3B56E8u;
    SET_GPR_U32(ctx, 31, 0x3B56F0u);
    ctx->pc = 0x3B56ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56E8u;
    // 0x3b56ec: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AE0u, 0x3B56E8u, 0x3B56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56F0u;
label_3b56f0:
    // 0x3b56f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b56f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b56f4:
    // 0x3b56f4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3b56f8:
    if (ctx->pc == 0x3B56F8u) {
        ctx->pc = 0x3B56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56F4u;
        // 0x3b56f8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B56FCu;
        goto label_3b56fc;
    }
    ctx->pc = 0x3B56F4u;
    {
        const bool branch_taken_0x3b56f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56F4u;
        // 0x3b56f8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b56f4) {
            ctx->pc = 0x3B57ACu;
            goto label_3b57ac;
        }
    }
    ctx->pc = 0x3B56FCu;
label_3b56fc:
    // 0x3b56fc: 0xc0ea14c  jal         func_3A8530
label_3b5700:
    if (ctx->pc == 0x3B5700u) {
        ctx->pc = 0x3B5700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B56FCu;
        // 0x3b5700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5704u;
        goto label_3b5704;
    }
    ctx->pc = 0x3B56FCu;
    SET_GPR_U32(ctx, 31, 0x3B5704u);
    ctx->pc = 0x3B5700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56FCu;
    // 0x3b5700: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B56FCu, 0x3B5704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5704u;
label_3b5704:
    // 0x3b5704: 0xc0e91b2  jal         func_3A46C8
label_3b5708:
    if (ctx->pc == 0x3B5708u) {
        ctx->pc = 0x3B5708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5704u;
        // 0x3b5708: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B570Cu;
        goto label_3b570c;
    }
    ctx->pc = 0x3B5704u;
    SET_GPR_U32(ctx, 31, 0x3B570Cu);
    ctx->pc = 0x3B5708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5704u;
    // 0x3b5708: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B5704u, 0x3B570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B570Cu;
label_3b570c:
    // 0x3b570c: 0xc0e91b2  jal         func_3A46C8
label_3b5710:
    if (ctx->pc == 0x3B5710u) {
        ctx->pc = 0x3B5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B570Cu;
        // 0x3b5710: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5714u;
        goto label_3b5714;
    }
    ctx->pc = 0x3B570Cu;
    SET_GPR_U32(ctx, 31, 0x3B5714u);
    ctx->pc = 0x3B5710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B570Cu;
    // 0x3b5710: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A46C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A46C8u, 0x3B570Cu, 0x3B5714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5714u;
label_3b5714:
    // 0x3b5714: 0xc0e92c0  jal         func_3A4B00
label_3b5718:
    if (ctx->pc == 0x3B5718u) {
        ctx->pc = 0x3B5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5714u;
        // 0x3b5718: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B571Cu;
        goto label_3b571c;
    }
    ctx->pc = 0x3B5714u;
    SET_GPR_U32(ctx, 31, 0x3B571Cu);
    ctx->pc = 0x3B5718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5714u;
    // 0x3b5718: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B00u, 0x3B5714u, 0x3B571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B571Cu;
label_3b571c:
    // 0x3b571c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3b571cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3b5720:
    // 0x3b5720: 0x3c05fd96  lui         $a1, 0xFD96
    ctx->pc = 0x3b5720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64918 << 16));
label_3b5724:
    // 0x3b5724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b5724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b5728:
    // 0x3b5728: 0xc0e9132  jal         func_3A44C8
label_3b572c:
    if (ctx->pc == 0x3B572Cu) {
        ctx->pc = 0x3B572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5728u;
        // 0x3b572c: 0x34a5c6c0  ori         $a1, $a1, 0xC6C0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50880);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5730u;
        goto label_3b5730;
    }
    ctx->pc = 0x3B5728u;
    SET_GPR_U32(ctx, 31, 0x3B5730u);
    ctx->pc = 0x3B572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5728u;
    // 0x3b572c: 0x34a5c6c0  ori         $a1, $a1, 0xC6C0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50880);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B5728u, 0x3B5730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5730u;
label_3b5730:
    // 0x3b5730: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3b5734:
    if (ctx->pc == 0x3B5734u) {
        ctx->pc = 0x3B5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5730u;
        // 0x3b5734: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5738u;
        goto label_3b5738;
    }
    ctx->pc = 0x3B5730u;
    {
        const bool branch_taken_0x3b5730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5730u;
        // 0x3b5734: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5730) {
            ctx->pc = 0x3B57ACu;
            goto label_3b57ac;
        }
    }
    ctx->pc = 0x3B5738u;
label_3b5738:
    // 0x3b5738: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b5738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b573c:
    // 0x3b573c: 0xc0ea12a  jal         func_3A84A8
label_3b5740:
    if (ctx->pc == 0x3B5740u) {
        ctx->pc = 0x3B5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B573Cu;
        // 0x3b5740: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5744u;
        goto label_3b5744;
    }
    ctx->pc = 0x3B573Cu;
    SET_GPR_U32(ctx, 31, 0x3B5744u);
    ctx->pc = 0x3B5740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B573Cu;
    // 0x3b5740: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B573Cu, 0x3B5744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5744u;
label_3b5744:
    // 0x3b5744: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b5744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b5748:
    // 0x3b5748: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b5748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b574c:
    // 0x3b574c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b574cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5750:
    // 0x3b5750: 0xc0ea12a  jal         func_3A84A8
label_3b5754:
    if (ctx->pc == 0x3B5754u) {
        ctx->pc = 0x3B5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5750u;
        // 0x3b5754: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5758u;
        goto label_3b5758;
    }
    ctx->pc = 0x3B5750u;
    SET_GPR_U32(ctx, 31, 0x3B5758u);
    ctx->pc = 0x3B5754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5750u;
    // 0x3b5754: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B5750u, 0x3B5758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5758u;
label_3b5758:
    // 0x3b5758: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b5758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b575c:
    // 0x3b575c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5760:
    // 0x3b5760: 0xc0ea146  jal         func_3A8518
label_3b5764:
    if (ctx->pc == 0x3B5764u) {
        ctx->pc = 0x3B5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5760u;
        // 0x3b5764: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5768u;
        goto label_3b5768;
    }
    ctx->pc = 0x3B5760u;
    SET_GPR_U32(ctx, 31, 0x3B5768u);
    ctx->pc = 0x3B5764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5760u;
    // 0x3b5764: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B5760u, 0x3B5768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5768u;
label_3b5768:
    // 0x3b5768: 0xc0ea146  jal         func_3A8518
label_3b576c:
    if (ctx->pc == 0x3B576Cu) {
        ctx->pc = 0x3B576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5768u;
        // 0x3b576c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5770u;
        goto label_3b5770;
    }
    ctx->pc = 0x3B5768u;
    SET_GPR_U32(ctx, 31, 0x3B5770u);
    ctx->pc = 0x3B576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5768u;
    // 0x3b576c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B5768u, 0x3B5770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5770u;
label_3b5770:
    // 0x3b5770: 0xc0ea14c  jal         func_3A8530
label_3b5774:
    if (ctx->pc == 0x3B5774u) {
        ctx->pc = 0x3B5774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5770u;
        // 0x3b5774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5778u;
        goto label_3b5778;
    }
    ctx->pc = 0x3B5770u;
    SET_GPR_U32(ctx, 31, 0x3B5778u);
    ctx->pc = 0x3B5774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5770u;
    // 0x3b5774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B5770u, 0x3B5778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5778u;
label_3b5778:
    // 0x3b5778: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b5778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b577c:
    // 0x3b577c: 0xc0ea14c  jal         func_3A8530
label_3b5780:
    if (ctx->pc == 0x3B5780u) {
        ctx->pc = 0x3B5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B577Cu;
        // 0x3b5780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5784u;
        goto label_3b5784;
    }
    ctx->pc = 0x3B577Cu;
    SET_GPR_U32(ctx, 31, 0x3B5784u);
    ctx->pc = 0x3B5780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B577Cu;
    // 0x3b5780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B577Cu, 0x3B5784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5784u;
label_3b5784:
    // 0x3b5784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5788:
    // 0x3b5788: 0xc0ea176  jal         func_3A85D8
label_3b578c:
    if (ctx->pc == 0x3B578Cu) {
        ctx->pc = 0x3B578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5788u;
        // 0x3b578c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B5790u;
        goto label_3b5790;
    }
    ctx->pc = 0x3B5788u;
    SET_GPR_U32(ctx, 31, 0x3B5790u);
    ctx->pc = 0x3B578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5788u;
    // 0x3b578c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x3B5788u, 0x3B5790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5790u;
label_3b5790:
    // 0x3b5790: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b5790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b5794:
    // 0x3b5794: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b5794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5798:
    // 0x3b5798: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3b5798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3b579c:
    // 0x3b579c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x3b579cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_3b57a0:
    // 0x3b57a0: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3b57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3b57a4:
    // 0x3b57a4: 0x40f809  jalr        $v0
label_3b57a8:
    if (ctx->pc == 0x3B57A8u) {
        ctx->pc = 0x3B57A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B57A4u;
        // 0x3b57a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B57ACu;
        goto label_3b57ac;
    }
    ctx->pc = 0x3B57A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B57ACu);
        ctx->pc = 0x3B57A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B57A4u;
        // 0x3b57a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B57A4u, 0x3B57ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B57ACu;
label_3b57ac:
    // 0x3b57ac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3b57acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b57b0:
    // 0x3b57b0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3b57b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b57b4:
    // 0x3b57b4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3b57b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b57b8:
    // 0x3b57b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b57b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b57bc:
    // 0x3b57bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b57bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b57c0:
    // 0x3b57c0: 0x3e00008  jr          $ra
label_3b57c4:
    if (ctx->pc == 0x3B57C4u) {
        ctx->pc = 0x3B57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B57C0u;
        // 0x3b57c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B57C8u;
        goto label_fallthrough_0x3b57c0;
    }
    ctx->pc = 0x3B57C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B57C0u;
        // 0x3b57c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B57C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b57c0:
    ctx->pc = 0x3B57C8u;
}
