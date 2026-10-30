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

// Function: sub_001F54F0
// Address: 0x1f54f0 - 0x1f57e0
void sub_001F54F0_0x1f54f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F54F0_0x1f54f0");
#endif

    switch (ctx->pc) {
        case 0x1f54f0u: goto label_1f54f0;
        case 0x1f54f4u: goto label_1f54f4;
        case 0x1f54f8u: goto label_1f54f8;
        case 0x1f54fcu: goto label_1f54fc;
        case 0x1f5500u: goto label_1f5500;
        case 0x1f5504u: goto label_1f5504;
        case 0x1f5508u: goto label_1f5508;
        case 0x1f550cu: goto label_1f550c;
        case 0x1f5510u: goto label_1f5510;
        case 0x1f5514u: goto label_1f5514;
        case 0x1f5518u: goto label_1f5518;
        case 0x1f551cu: goto label_1f551c;
        case 0x1f5520u: goto label_1f5520;
        case 0x1f5524u: goto label_1f5524;
        case 0x1f5528u: goto label_1f5528;
        case 0x1f552cu: goto label_1f552c;
        case 0x1f5530u: goto label_1f5530;
        case 0x1f5534u: goto label_1f5534;
        case 0x1f5538u: goto label_1f5538;
        case 0x1f553cu: goto label_1f553c;
        case 0x1f5540u: goto label_1f5540;
        case 0x1f5544u: goto label_1f5544;
        case 0x1f5548u: goto label_1f5548;
        case 0x1f554cu: goto label_1f554c;
        case 0x1f5550u: goto label_1f5550;
        case 0x1f5554u: goto label_1f5554;
        case 0x1f5558u: goto label_1f5558;
        case 0x1f555cu: goto label_1f555c;
        case 0x1f5560u: goto label_1f5560;
        case 0x1f5564u: goto label_1f5564;
        case 0x1f5568u: goto label_1f5568;
        case 0x1f556cu: goto label_1f556c;
        case 0x1f5570u: goto label_1f5570;
        case 0x1f5574u: goto label_1f5574;
        case 0x1f5578u: goto label_1f5578;
        case 0x1f557cu: goto label_1f557c;
        case 0x1f5580u: goto label_1f5580;
        case 0x1f5584u: goto label_1f5584;
        case 0x1f5588u: goto label_1f5588;
        case 0x1f558cu: goto label_1f558c;
        case 0x1f5590u: goto label_1f5590;
        case 0x1f5594u: goto label_1f5594;
        case 0x1f5598u: goto label_1f5598;
        case 0x1f559cu: goto label_1f559c;
        case 0x1f55a0u: goto label_1f55a0;
        case 0x1f55a4u: goto label_1f55a4;
        case 0x1f55a8u: goto label_1f55a8;
        case 0x1f55acu: goto label_1f55ac;
        case 0x1f55b0u: goto label_1f55b0;
        case 0x1f55b4u: goto label_1f55b4;
        case 0x1f55b8u: goto label_1f55b8;
        case 0x1f55bcu: goto label_1f55bc;
        case 0x1f55c0u: goto label_1f55c0;
        case 0x1f55c4u: goto label_1f55c4;
        case 0x1f55c8u: goto label_1f55c8;
        case 0x1f55ccu: goto label_1f55cc;
        case 0x1f55d0u: goto label_1f55d0;
        case 0x1f55d4u: goto label_1f55d4;
        case 0x1f55d8u: goto label_1f55d8;
        case 0x1f55dcu: goto label_1f55dc;
        case 0x1f55e0u: goto label_1f55e0;
        case 0x1f55e4u: goto label_1f55e4;
        case 0x1f55e8u: goto label_1f55e8;
        case 0x1f55ecu: goto label_1f55ec;
        case 0x1f55f0u: goto label_1f55f0;
        case 0x1f55f4u: goto label_1f55f4;
        case 0x1f55f8u: goto label_1f55f8;
        case 0x1f55fcu: goto label_1f55fc;
        case 0x1f5600u: goto label_1f5600;
        case 0x1f5604u: goto label_1f5604;
        case 0x1f5608u: goto label_1f5608;
        case 0x1f560cu: goto label_1f560c;
        case 0x1f5610u: goto label_1f5610;
        case 0x1f5614u: goto label_1f5614;
        case 0x1f5618u: goto label_1f5618;
        case 0x1f561cu: goto label_1f561c;
        case 0x1f5620u: goto label_1f5620;
        case 0x1f5624u: goto label_1f5624;
        case 0x1f5628u: goto label_1f5628;
        case 0x1f562cu: goto label_1f562c;
        case 0x1f5630u: goto label_1f5630;
        case 0x1f5634u: goto label_1f5634;
        case 0x1f5638u: goto label_1f5638;
        case 0x1f563cu: goto label_1f563c;
        case 0x1f5640u: goto label_1f5640;
        case 0x1f5644u: goto label_1f5644;
        case 0x1f5648u: goto label_1f5648;
        case 0x1f564cu: goto label_1f564c;
        case 0x1f5650u: goto label_1f5650;
        case 0x1f5654u: goto label_1f5654;
        case 0x1f5658u: goto label_1f5658;
        case 0x1f565cu: goto label_1f565c;
        case 0x1f5660u: goto label_1f5660;
        case 0x1f5664u: goto label_1f5664;
        case 0x1f5668u: goto label_1f5668;
        case 0x1f566cu: goto label_1f566c;
        case 0x1f5670u: goto label_1f5670;
        case 0x1f5674u: goto label_1f5674;
        case 0x1f5678u: goto label_1f5678;
        case 0x1f567cu: goto label_1f567c;
        case 0x1f5680u: goto label_1f5680;
        case 0x1f5684u: goto label_1f5684;
        case 0x1f5688u: goto label_1f5688;
        case 0x1f568cu: goto label_1f568c;
        case 0x1f5690u: goto label_1f5690;
        case 0x1f5694u: goto label_1f5694;
        case 0x1f5698u: goto label_1f5698;
        case 0x1f569cu: goto label_1f569c;
        case 0x1f56a0u: goto label_1f56a0;
        case 0x1f56a4u: goto label_1f56a4;
        case 0x1f56a8u: goto label_1f56a8;
        case 0x1f56acu: goto label_1f56ac;
        case 0x1f56b0u: goto label_1f56b0;
        case 0x1f56b4u: goto label_1f56b4;
        case 0x1f56b8u: goto label_1f56b8;
        case 0x1f56bcu: goto label_1f56bc;
        case 0x1f56c0u: goto label_1f56c0;
        case 0x1f56c4u: goto label_1f56c4;
        case 0x1f56c8u: goto label_1f56c8;
        case 0x1f56ccu: goto label_1f56cc;
        case 0x1f56d0u: goto label_1f56d0;
        case 0x1f56d4u: goto label_1f56d4;
        case 0x1f56d8u: goto label_1f56d8;
        case 0x1f56dcu: goto label_1f56dc;
        case 0x1f56e0u: goto label_1f56e0;
        case 0x1f56e4u: goto label_1f56e4;
        case 0x1f56e8u: goto label_1f56e8;
        case 0x1f56ecu: goto label_1f56ec;
        case 0x1f56f0u: goto label_1f56f0;
        case 0x1f56f4u: goto label_1f56f4;
        case 0x1f56f8u: goto label_1f56f8;
        case 0x1f56fcu: goto label_1f56fc;
        case 0x1f5700u: goto label_1f5700;
        case 0x1f5704u: goto label_1f5704;
        case 0x1f5708u: goto label_1f5708;
        case 0x1f570cu: goto label_1f570c;
        case 0x1f5710u: goto label_1f5710;
        case 0x1f5714u: goto label_1f5714;
        case 0x1f5718u: goto label_1f5718;
        case 0x1f571cu: goto label_1f571c;
        case 0x1f5720u: goto label_1f5720;
        case 0x1f5724u: goto label_1f5724;
        case 0x1f5728u: goto label_1f5728;
        case 0x1f572cu: goto label_1f572c;
        case 0x1f5730u: goto label_1f5730;
        case 0x1f5734u: goto label_1f5734;
        case 0x1f5738u: goto label_1f5738;
        case 0x1f573cu: goto label_1f573c;
        case 0x1f5740u: goto label_1f5740;
        case 0x1f5744u: goto label_1f5744;
        case 0x1f5748u: goto label_1f5748;
        case 0x1f574cu: goto label_1f574c;
        case 0x1f5750u: goto label_1f5750;
        case 0x1f5754u: goto label_1f5754;
        case 0x1f5758u: goto label_1f5758;
        case 0x1f575cu: goto label_1f575c;
        case 0x1f5760u: goto label_1f5760;
        case 0x1f5764u: goto label_1f5764;
        case 0x1f5768u: goto label_1f5768;
        case 0x1f576cu: goto label_1f576c;
        case 0x1f5770u: goto label_1f5770;
        case 0x1f5774u: goto label_1f5774;
        case 0x1f5778u: goto label_1f5778;
        case 0x1f577cu: goto label_1f577c;
        case 0x1f5780u: goto label_1f5780;
        case 0x1f5784u: goto label_1f5784;
        case 0x1f5788u: goto label_1f5788;
        case 0x1f578cu: goto label_1f578c;
        case 0x1f5790u: goto label_1f5790;
        case 0x1f5794u: goto label_1f5794;
        case 0x1f5798u: goto label_1f5798;
        case 0x1f579cu: goto label_1f579c;
        case 0x1f57a0u: goto label_1f57a0;
        case 0x1f57a4u: goto label_1f57a4;
        case 0x1f57a8u: goto label_1f57a8;
        case 0x1f57acu: goto label_1f57ac;
        case 0x1f57b0u: goto label_1f57b0;
        case 0x1f57b4u: goto label_1f57b4;
        case 0x1f57b8u: goto label_1f57b8;
        case 0x1f57bcu: goto label_1f57bc;
        case 0x1f57c0u: goto label_1f57c0;
        case 0x1f57c4u: goto label_1f57c4;
        case 0x1f57c8u: goto label_1f57c8;
        case 0x1f57ccu: goto label_1f57cc;
        case 0x1f57d0u: goto label_1f57d0;
        case 0x1f57d4u: goto label_1f57d4;
        case 0x1f57d8u: goto label_1f57d8;
        case 0x1f57dcu: goto label_1f57dc;
        default: break;
    }

    ctx->pc = 0x1f54f0u;

label_1f54f0:
    // 0x1f54f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f54f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1f54f4:
    // 0x1f54f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f54f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1f54f8:
    // 0x1f54f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f54f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1f54fc:
    // 0x1f54fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f54fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5500:
    // 0x1f5500: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f5500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1f5504:
    // 0x1f5504: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f5508:
    // 0x1f5508: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1f5508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1f550c:
    // 0x1f550c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1f550cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1f5510:
    // 0x1f5510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f5514:
    // 0x1f5514: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f5514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f5518:
    // 0x1f5518: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f5518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f551c:
    // 0x1f551c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f5520:
    // 0x1f5520: 0x40f809  jalr        $v0
label_1f5524:
    if (ctx->pc == 0x1F5524u) {
        ctx->pc = 0x1F5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5520u;
        // 0x1f5524: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5528u;
        goto label_1f5528;
    }
    ctx->pc = 0x1F5520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5528u);
        ctx->pc = 0x1F5524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5520u;
        // 0x1f5524: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5520u, 0x1F5528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5528u;
label_1f5528:
    // 0x1f5528: 0x504000a5  beql        $v0, $zero, . + 4 + (0xA5 << 2)
label_1f552c:
    if (ctx->pc == 0x1F552Cu) {
        ctx->pc = 0x1F552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5528u;
        // 0x1f552c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5530u;
        goto label_1f5530;
    }
    ctx->pc = 0x1F5528u;
    {
        const bool branch_taken_0x1f5528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5528) {
            ctx->pc = 0x1F552Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5528u;
            // 0x1f552c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F57C0u;
            goto label_1f57c0;
        }
    }
    ctx->pc = 0x1F5530u;
label_1f5530:
    // 0x1f5530: 0xc07f88a  jal         func_1FE228
label_1f5534:
    if (ctx->pc == 0x1F5534u) {
        ctx->pc = 0x1F5538u;
        goto label_1f5538;
    }
    ctx->pc = 0x1F5530u;
    SET_GPR_U32(ctx, 31, 0x1F5538u);
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1F5530u, 0x1F5538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5538u;
label_1f5538:
    // 0x1f5538: 0x544000a1  bnel        $v0, $zero, . + 4 + (0xA1 << 2)
label_1f553c:
    if (ctx->pc == 0x1F553Cu) {
        ctx->pc = 0x1F553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5538u;
        // 0x1f553c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5540u;
        goto label_1f5540;
    }
    ctx->pc = 0x1F5538u;
    {
        const bool branch_taken_0x1f5538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5538) {
            ctx->pc = 0x1F553Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5538u;
            // 0x1f553c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F57C0u;
            goto label_1f57c0;
        }
    }
    ctx->pc = 0x1F5540u;
label_1f5540:
    // 0x1f5540: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1f5540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f5544:
    // 0x1f5544: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f5544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5548:
    // 0x1f5548: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f5548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f554c:
    // 0x1f554c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f5550:
    // 0x1f5550: 0x40f809  jalr        $v0
label_1f5554:
    if (ctx->pc == 0x1F5554u) {
        ctx->pc = 0x1F5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5550u;
        // 0x1f5554: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5558u;
        goto label_1f5558;
    }
    ctx->pc = 0x1F5550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5558u);
        ctx->pc = 0x1F5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5550u;
        // 0x1f5554: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5550u, 0x1F5558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5558u;
label_1f5558:
    // 0x1f5558: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1f555c:
    if (ctx->pc == 0x1F555Cu) {
        ctx->pc = 0x1F555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5558u;
        // 0x1f555c: 0x8e0500a0  lw          $a1, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5560u;
        goto label_1f5560;
    }
    ctx->pc = 0x1F5558u;
    {
        const bool branch_taken_0x1f5558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5558) {
            ctx->pc = 0x1F555Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5558u;
            // 0x1f555c: 0x8e0500a0  lw          $a1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F557Cu;
            goto label_1f557c;
        }
    }
    ctx->pc = 0x1F5560u;
label_1f5560:
    // 0x1f5560: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1f5560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f5564:
    // 0x1f5564: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5568:
    // 0x1f5568: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f5568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f556c:
    // 0x1f556c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f5570:
    // 0x1f5570: 0x60f809  jalr        $v1
label_1f5574:
    if (ctx->pc == 0x1F5574u) {
        ctx->pc = 0x1F5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5570u;
        // 0x1f5574: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5578u;
        goto label_1f5578;
    }
    ctx->pc = 0x1F5570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5578u);
        ctx->pc = 0x1F5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5570u;
        // 0x1f5574: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5570u, 0x1F5578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5578u;
label_1f5578:
    // 0x1f5578: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x1f5578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f557c:
    // 0x1f557c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5580:
    // 0x1f5580: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f5580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f5584:
    // 0x1f5584: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f5584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f5588:
    // 0x1f5588: 0x40f809  jalr        $v0
label_1f558c:
    if (ctx->pc == 0x1F558Cu) {
        ctx->pc = 0x1F558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5588u;
        // 0x1f558c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5590u;
        goto label_1f5590;
    }
    ctx->pc = 0x1F5588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5590u);
        ctx->pc = 0x1F558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5588u;
        // 0x1f558c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5588u, 0x1F5590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5590u;
label_1f5590:
    // 0x1f5590: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f5594:
    if (ctx->pc == 0x1F5594u) {
        ctx->pc = 0x1F5598u;
        goto label_1f5598;
    }
    ctx->pc = 0x1F5590u;
    {
        const bool branch_taken_0x1f5590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5590) {
            ctx->pc = 0x1F55C8u;
            goto label_1f55c8;
        }
    }
    ctx->pc = 0x1F5598u;
label_1f5598:
    // 0x1f5598: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x1f5598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f559c:
    // 0x1f559c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f55a0:
    // 0x1f55a0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f55a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f55a4:
    // 0x1f55a4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f55a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f55a8:
    // 0x1f55a8: 0x60f809  jalr        $v1
label_1f55ac:
    if (ctx->pc == 0x1F55ACu) {
        ctx->pc = 0x1F55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55A8u;
        // 0x1f55ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F55B0u;
        goto label_1f55b0;
    }
    ctx->pc = 0x1F55A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F55B0u);
        ctx->pc = 0x1F55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55A8u;
        // 0x1f55ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F55A8u, 0x1F55B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F55B0u;
label_1f55b0:
    // 0x1f55b0: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x1f55b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f55b4:
    // 0x1f55b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f55b8:
    // 0x1f55b8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1f55b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f55bc:
    // 0x1f55bc: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1f55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1f55c0:
    // 0x1f55c0: 0x60f809  jalr        $v1
label_1f55c4:
    if (ctx->pc == 0x1F55C4u) {
        ctx->pc = 0x1F55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55C0u;
        // 0x1f55c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F55C8u;
        goto label_1f55c8;
    }
    ctx->pc = 0x1F55C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F55C8u);
        ctx->pc = 0x1F55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55C0u;
        // 0x1f55c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F55C0u, 0x1F55C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F55C8u;
label_1f55c8:
    // 0x1f55c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f55cc:
    // 0x1f55cc: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1f55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1f55d0:
    // 0x1f55d0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1f55d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_1f55d4:
    // 0x1f55d4: 0x5462007a  bnel        $v1, $v0, . + 4 + (0x7A << 2)
label_1f55d8:
    if (ctx->pc == 0x1F55D8u) {
        ctx->pc = 0x1F55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55D4u;
        // 0x1f55d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F55DCu;
        goto label_1f55dc;
    }
    ctx->pc = 0x1F55D4u;
    {
        const bool branch_taken_0x1f55d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f55d4) {
            ctx->pc = 0x1F55D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F55D4u;
            // 0x1f55d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F57C0u;
            goto label_1f57c0;
        }
    }
    ctx->pc = 0x1F55DCu;
label_1f55dc:
    // 0x1f55dc: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1f55dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1f55e0:
    // 0x1f55e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f55e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f55e4:
    // 0x1f55e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f55e8:
    // 0x1f55e8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f55e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f55ec:
    // 0x1f55ec: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f55ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f55f0:
    // 0x1f55f0: 0x40f809  jalr        $v0
label_1f55f4:
    if (ctx->pc == 0x1F55F4u) {
        ctx->pc = 0x1F55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55F0u;
        // 0x1f55f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F55F8u;
        goto label_1f55f8;
    }
    ctx->pc = 0x1F55F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F55F8u);
        ctx->pc = 0x1F55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55F0u;
        // 0x1f55f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F55F0u, 0x1F55F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F55F8u;
label_1f55f8:
    // 0x1f55f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1f55fc:
    if (ctx->pc == 0x1F55FCu) {
        ctx->pc = 0x1F55FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F55F8u;
        // 0x1f55fc: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5600u;
        goto label_1f5600;
    }
    ctx->pc = 0x1F55F8u;
    {
        const bool branch_taken_0x1f55f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f55f8) {
            ctx->pc = 0x1F55FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F55F8u;
            // 0x1f55fc: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5610u;
            goto label_1f5610;
        }
    }
    ctx->pc = 0x1F5600u;
label_1f5600:
    // 0x1f5600: 0xc0750fa  jal         func_1D43E8
label_1f5604:
    if (ctx->pc == 0x1F5604u) {
        ctx->pc = 0x1F5604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5600u;
        // 0x1f5604: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5608u;
        goto label_1f5608;
    }
    ctx->pc = 0x1F5600u;
    SET_GPR_U32(ctx, 31, 0x1F5608u);
    ctx->pc = 0x1F5604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5600u;
    // 0x1f5604: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1F5600u, 0x1F5608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5608u;
label_1f5608:
    // 0x1f5608: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1f5608u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f560c:
    // 0x1f560c: 0x8e060098  lw          $a2, 0x98($s0)
    ctx->pc = 0x1f560cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f5610:
    // 0x1f5610: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f5610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5614:
    // 0x1f5614: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f5614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5618:
    // 0x1f5618: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1f5618u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1f561c:
    // 0x1f561c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f5620:
    // 0x1f5620: 0x26130148  addiu       $s3, $s0, 0x148
    ctx->pc = 0x1f5620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_1f5624:
    // 0x1f5624: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f5624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f5628:
    // 0x1f5628: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f5628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f562c:
    // 0x1f562c: 0x60f809  jalr        $v1
label_1f5630:
    if (ctx->pc == 0x1F5630u) {
        ctx->pc = 0x1F5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F562Cu;
        // 0x1f5630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5634u;
        goto label_1f5634;
    }
    ctx->pc = 0x1F562Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5634u);
        ctx->pc = 0x1F5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F562Cu;
        // 0x1f5630: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F562Cu, 0x1F5634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5634u;
label_1f5634:
    // 0x1f5634: 0x8e060170  lw          $a2, 0x170($s0)
    ctx->pc = 0x1f5634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_1f5638:
    // 0x1f5638: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f5638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f563c:
    // 0x1f563c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f5640:
    // 0x1f5640: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f5640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f5644:
    // 0x1f5644: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f5644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f5648:
    // 0x1f5648: 0x60f809  jalr        $v1
label_1f564c:
    if (ctx->pc == 0x1F564Cu) {
        ctx->pc = 0x1F564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5648u;
        // 0x1f564c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5650u;
        goto label_1f5650;
    }
    ctx->pc = 0x1F5648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5650u);
        ctx->pc = 0x1F564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5648u;
        // 0x1f564c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5648u, 0x1F5650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5650u;
label_1f5650:
    // 0x1f5650: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x1f5650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1f5654:
    // 0x1f5654: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f5654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5658:
    // 0x1f5658: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f5658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f565c:
    // 0x1f565c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f565cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f5660:
    // 0x1f5660: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f5660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f5664:
    // 0x1f5664: 0x60f809  jalr        $v1
label_1f5668:
    if (ctx->pc == 0x1F5668u) {
        ctx->pc = 0x1F5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5664u;
        // 0x1f5668: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F566Cu;
        goto label_1f566c;
    }
    ctx->pc = 0x1F5664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F566Cu);
        ctx->pc = 0x1F5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5664u;
        // 0x1f5668: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5664u, 0x1F566Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F566Cu;
label_1f566c:
    // 0x1f566c: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x1f566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_1f5670:
    // 0x1f5670: 0xac510050  sw          $s1, 0x50($v0)
    ctx->pc = 0x1f5670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 17));
label_1f5674:
    // 0x1f5674: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1f5674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1f5678:
    // 0x1f5678: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f567c:
    // 0x1f567c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f567cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f5680:
    // 0x1f5680: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f5680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f5684:
    // 0x1f5684: 0x60f809  jalr        $v1
label_1f5688:
    if (ctx->pc == 0x1F5688u) {
        ctx->pc = 0x1F5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5684u;
        // 0x1f5688: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F568Cu;
        goto label_1f568c;
    }
    ctx->pc = 0x1F5684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F568Cu);
        ctx->pc = 0x1F5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5684u;
        // 0x1f5688: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5684u, 0x1F568Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F568Cu;
label_1f568c:
    // 0x1f568c: 0x8e050170  lw          $a1, 0x170($s0)
    ctx->pc = 0x1f568cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_1f5690:
    // 0x1f5690: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5694:
    // 0x1f5694: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f5694u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f5698:
    // 0x1f5698: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f5698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f569c:
    // 0x1f569c: 0x60f809  jalr        $v1
label_1f56a0:
    if (ctx->pc == 0x1F56A0u) {
        ctx->pc = 0x1F56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F569Cu;
        // 0x1f56a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F56A4u;
        goto label_1f56a4;
    }
    ctx->pc = 0x1F569Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F56A4u);
        ctx->pc = 0x1F56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F569Cu;
        // 0x1f56a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F569Cu, 0x1F56A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F56A4u;
label_1f56a4:
    // 0x1f56a4: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1f56a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1f56a8:
    // 0x1f56a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f56ac:
    // 0x1f56ac: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f56acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f56b0:
    // 0x1f56b0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f56b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f56b4:
    // 0x1f56b4: 0x60f809  jalr        $v1
label_1f56b8:
    if (ctx->pc == 0x1F56B8u) {
        ctx->pc = 0x1F56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56B4u;
        // 0x1f56b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F56BCu;
        goto label_1f56bc;
    }
    ctx->pc = 0x1F56B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F56BCu);
        ctx->pc = 0x1F56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56B4u;
        // 0x1f56b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F56B4u, 0x1F56BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F56BCu;
label_1f56bc:
    // 0x1f56bc: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1f56bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1f56c0:
    // 0x1f56c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f56c4:
    // 0x1f56c4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f56c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f56c8:
    // 0x1f56c8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f56cc:
    // 0x1f56cc: 0x60f809  jalr        $v1
label_1f56d0:
    if (ctx->pc == 0x1F56D0u) {
        ctx->pc = 0x1F56D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56CCu;
        // 0x1f56d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F56D4u;
        goto label_1f56d4;
    }
    ctx->pc = 0x1F56CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F56D4u);
        ctx->pc = 0x1F56D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56CCu;
        // 0x1f56d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F56CCu, 0x1F56D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F56D4u;
label_1f56d4:
    // 0x1f56d4: 0x8e050174  lw          $a1, 0x174($s0)
    ctx->pc = 0x1f56d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1f56d8:
    // 0x1f56d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f56d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f56dc:
    // 0x1f56dc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f56dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f56e0:
    // 0x1f56e0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f56e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f56e4:
    // 0x1f56e4: 0x60f809  jalr        $v1
label_1f56e8:
    if (ctx->pc == 0x1F56E8u) {
        ctx->pc = 0x1F56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56E4u;
        // 0x1f56e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F56ECu;
        goto label_1f56ec;
    }
    ctx->pc = 0x1F56E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F56ECu);
        ctx->pc = 0x1F56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56E4u;
        // 0x1f56e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F56E4u, 0x1F56ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F56ECu;
label_1f56ec:
    // 0x1f56ec: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x1f56ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1f56f0:
    // 0x1f56f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f56f4:
    // 0x1f56f4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f56f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f56f8:
    // 0x1f56f8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f56f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f56fc:
    // 0x1f56fc: 0x60f809  jalr        $v1
label_1f5700:
    if (ctx->pc == 0x1F5700u) {
        ctx->pc = 0x1F5700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56FCu;
        // 0x1f5700: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5704u;
        goto label_1f5704;
    }
    ctx->pc = 0x1F56FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5704u);
        ctx->pc = 0x1F5700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F56FCu;
        // 0x1f5700: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F56FCu, 0x1F5704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5704u;
label_1f5704:
    // 0x1f5704: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x1f5704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1f5708:
    // 0x1f5708: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f570c:
    // 0x1f570c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f570cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f5710:
    // 0x1f5710: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f5710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f5714:
    // 0x1f5714: 0x60f809  jalr        $v1
label_1f5718:
    if (ctx->pc == 0x1F5718u) {
        ctx->pc = 0x1F5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5714u;
        // 0x1f5718: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F571Cu;
        goto label_1f571c;
    }
    ctx->pc = 0x1F5714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F571Cu);
        ctx->pc = 0x1F5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5714u;
        // 0x1f5718: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5714u, 0x1F571Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F571Cu;
label_1f571c:
    // 0x1f571c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1f571cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f5720:
    // 0x1f5720: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5724:
    // 0x1f5724: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f5724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f5728:
    // 0x1f5728: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f5728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f572c:
    // 0x1f572c: 0x60f809  jalr        $v1
label_1f5730:
    if (ctx->pc == 0x1F5730u) {
        ctx->pc = 0x1F5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F572Cu;
        // 0x1f5730: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5734u;
        goto label_1f5734;
    }
    ctx->pc = 0x1F572Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5734u);
        ctx->pc = 0x1F5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F572Cu;
        // 0x1f5730: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F572Cu, 0x1F5734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5734u;
label_1f5734:
    // 0x1f5734: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1f5734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f5738:
    // 0x1f5738: 0x8ea7b8b8  lw          $a3, -0x4748($s5)
    ctx->pc = 0x1f5738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949048)));
label_1f573c:
    // 0x1f573c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f5740:
    // 0x1f5740: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1f5740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f5744:
    // 0x1f5744: 0x84430090  lh          $v1, 0x90($v0)
    ctx->pc = 0x1f5744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f5748:
    // 0x1f5748: 0x24520090  addiu       $s2, $v0, 0x90
    ctx->pc = 0x1f5748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1f574c:
    // 0x1f574c: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x1f574cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1f5750:
    // 0x1f5750: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1f5750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1f5754:
    // 0x1f5754: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x1f5754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f5758:
    // 0x1f5758: 0x40f809  jalr        $v0
label_1f575c:
    if (ctx->pc == 0x1F575Cu) {
        ctx->pc = 0x1F575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5758u;
        // 0x1f575c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5760u;
        goto label_1f5760;
    }
    ctx->pc = 0x1F5758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5760u);
        ctx->pc = 0x1F575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5758u;
        // 0x1f575c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5758u, 0x1F5760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5760u;
label_1f5760:
    // 0x1f5760: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1f5764:
    if (ctx->pc == 0x1F5764u) {
        ctx->pc = 0x1F5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5760u;
        // 0x1f5764: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5768u;
        goto label_1f5768;
    }
    ctx->pc = 0x1F5760u;
    {
        const bool branch_taken_0x1f5760 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F5764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5760u;
        // 0x1f5764: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5760) {
            ctx->pc = 0x1F577Cu;
            goto label_1f577c;
        }
    }
    ctx->pc = 0x1F5768u;
label_1f5768:
    // 0x1f5768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f576c:
    // 0x1f576c: 0x0  nop
    ctx->pc = 0x1f576cu;
    // NOP
label_1f5770:
    // 0x1f5770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f5770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f5774:
    // 0x1f5774: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f5778:
    if (ctx->pc == 0x1F5778u) {
        ctx->pc = 0x1F5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5774u;
        // 0x1f5778: 0xc60c0144  lwc1        $f12, 0x144($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F577Cu;
        goto label_1f577c;
    }
    ctx->pc = 0x1F5774u;
    {
        const bool branch_taken_0x1f5774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5774u;
        // 0x1f5778: 0xc60c0144  lwc1        $f12, 0x144($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5774) {
            ctx->pc = 0x1F5798u;
            goto label_1f5798;
        }
    }
    ctx->pc = 0x1F577Cu;
label_1f577c:
    // 0x1f577c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f5780:
    // 0x1f5780: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f5780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f5784:
    // 0x1f5784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f5788:
    // 0x1f5788: 0x0  nop
    ctx->pc = 0x1f5788u;
    // NOP
label_1f578c:
    // 0x1f578c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f578cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f5790:
    // 0x1f5790: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f5790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1f5794:
    // 0x1f5794: 0xc60c0144  lwc1        $f12, 0x144($s0)
    ctx->pc = 0x1f5794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f5798:
    // 0x1f5798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f579c:
    // 0x1f579c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1f579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f57a0:
    // 0x1f57a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f57a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f57a4:
    // 0x1f57a4: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1f57a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_1f57a8:
    // 0x1f57a8: 0x60f809  jalr        $v1
label_1f57ac:
    if (ctx->pc == 0x1F57ACu) {
        ctx->pc = 0x1F57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57A8u;
        // 0x1f57ac: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F57B0u;
        goto label_1f57b0;
    }
    ctx->pc = 0x1F57A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F57B0u);
        ctx->pc = 0x1F57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57A8u;
        // 0x1f57ac: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F57A8u, 0x1F57B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F57B0u;
label_1f57b0:
    // 0x1f57b0: 0x2e820009  sltiu       $v0, $s4, 0x9
    ctx->pc = 0x1f57b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f57b4:
    // 0x1f57b4: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
label_1f57b8:
    if (ctx->pc == 0x1F57B8u) {
        ctx->pc = 0x1F57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57B4u;
        // 0x1f57b8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F57BCu;
        goto label_1f57bc;
    }
    ctx->pc = 0x1F57B4u;
    {
        const bool branch_taken_0x1f57b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f57b4) {
            ctx->pc = 0x1F57B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F57B4u;
            // 0x1f57b8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5720;
        }
    }
    ctx->pc = 0x1F57BCu;
label_1f57bc:
    // 0x1f57bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f57bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f57c0:
    // 0x1f57c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f57c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f57c4:
    // 0x1f57c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f57c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f57c8:
    // 0x1f57c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f57c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f57cc:
    // 0x1f57cc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1f57ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f57d0:
    // 0x1f57d0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1f57d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f57d4:
    // 0x1f57d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f57d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f57d8:
    // 0x1f57d8: 0x3e00008  jr          $ra
label_1f57dc:
    if (ctx->pc == 0x1F57DCu) {
        ctx->pc = 0x1F57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57D8u;
        // 0x1f57dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F57E0u;
        goto label_fallthrough_0x1f57d8;
    }
    ctx->pc = 0x1F57D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57D8u;
        // 0x1f57dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F57D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f57d8:
    ctx->pc = 0x1F57E0u;
}
