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

// Function: sub_004125B8
// Address: 0x4125b8 - 0x4127c0
void sub_004125B8_0x4125b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004125B8_0x4125b8");
#endif

    switch (ctx->pc) {
        case 0x4125b8u: goto label_4125b8;
        case 0x4125bcu: goto label_4125bc;
        case 0x4125c0u: goto label_4125c0;
        case 0x4125c4u: goto label_4125c4;
        case 0x4125c8u: goto label_4125c8;
        case 0x4125ccu: goto label_4125cc;
        case 0x4125d0u: goto label_4125d0;
        case 0x4125d4u: goto label_4125d4;
        case 0x4125d8u: goto label_4125d8;
        case 0x4125dcu: goto label_4125dc;
        case 0x4125e0u: goto label_4125e0;
        case 0x4125e4u: goto label_4125e4;
        case 0x4125e8u: goto label_4125e8;
        case 0x4125ecu: goto label_4125ec;
        case 0x4125f0u: goto label_4125f0;
        case 0x4125f4u: goto label_4125f4;
        case 0x4125f8u: goto label_4125f8;
        case 0x4125fcu: goto label_4125fc;
        case 0x412600u: goto label_412600;
        case 0x412604u: goto label_412604;
        case 0x412608u: goto label_412608;
        case 0x41260cu: goto label_41260c;
        case 0x412610u: goto label_412610;
        case 0x412614u: goto label_412614;
        case 0x412618u: goto label_412618;
        case 0x41261cu: goto label_41261c;
        case 0x412620u: goto label_412620;
        case 0x412624u: goto label_412624;
        case 0x412628u: goto label_412628;
        case 0x41262cu: goto label_41262c;
        case 0x412630u: goto label_412630;
        case 0x412634u: goto label_412634;
        case 0x412638u: goto label_412638;
        case 0x41263cu: goto label_41263c;
        case 0x412640u: goto label_412640;
        case 0x412644u: goto label_412644;
        case 0x412648u: goto label_412648;
        case 0x41264cu: goto label_41264c;
        case 0x412650u: goto label_412650;
        case 0x412654u: goto label_412654;
        case 0x412658u: goto label_412658;
        case 0x41265cu: goto label_41265c;
        case 0x412660u: goto label_412660;
        case 0x412664u: goto label_412664;
        case 0x412668u: goto label_412668;
        case 0x41266cu: goto label_41266c;
        case 0x412670u: goto label_412670;
        case 0x412674u: goto label_412674;
        case 0x412678u: goto label_412678;
        case 0x41267cu: goto label_41267c;
        case 0x412680u: goto label_412680;
        case 0x412684u: goto label_412684;
        case 0x412688u: goto label_412688;
        case 0x41268cu: goto label_41268c;
        case 0x412690u: goto label_412690;
        case 0x412694u: goto label_412694;
        case 0x412698u: goto label_412698;
        case 0x41269cu: goto label_41269c;
        case 0x4126a0u: goto label_4126a0;
        case 0x4126a4u: goto label_4126a4;
        case 0x4126a8u: goto label_4126a8;
        case 0x4126acu: goto label_4126ac;
        case 0x4126b0u: goto label_4126b0;
        case 0x4126b4u: goto label_4126b4;
        case 0x4126b8u: goto label_4126b8;
        case 0x4126bcu: goto label_4126bc;
        case 0x4126c0u: goto label_4126c0;
        case 0x4126c4u: goto label_4126c4;
        case 0x4126c8u: goto label_4126c8;
        case 0x4126ccu: goto label_4126cc;
        case 0x4126d0u: goto label_4126d0;
        case 0x4126d4u: goto label_4126d4;
        case 0x4126d8u: goto label_4126d8;
        case 0x4126dcu: goto label_4126dc;
        case 0x4126e0u: goto label_4126e0;
        case 0x4126e4u: goto label_4126e4;
        case 0x4126e8u: goto label_4126e8;
        case 0x4126ecu: goto label_4126ec;
        case 0x4126f0u: goto label_4126f0;
        case 0x4126f4u: goto label_4126f4;
        case 0x4126f8u: goto label_4126f8;
        case 0x4126fcu: goto label_4126fc;
        case 0x412700u: goto label_412700;
        case 0x412704u: goto label_412704;
        case 0x412708u: goto label_412708;
        case 0x41270cu: goto label_41270c;
        case 0x412710u: goto label_412710;
        case 0x412714u: goto label_412714;
        case 0x412718u: goto label_412718;
        case 0x41271cu: goto label_41271c;
        case 0x412720u: goto label_412720;
        case 0x412724u: goto label_412724;
        case 0x412728u: goto label_412728;
        case 0x41272cu: goto label_41272c;
        case 0x412730u: goto label_412730;
        case 0x412734u: goto label_412734;
        case 0x412738u: goto label_412738;
        case 0x41273cu: goto label_41273c;
        case 0x412740u: goto label_412740;
        case 0x412744u: goto label_412744;
        case 0x412748u: goto label_412748;
        case 0x41274cu: goto label_41274c;
        case 0x412750u: goto label_412750;
        case 0x412754u: goto label_412754;
        case 0x412758u: goto label_412758;
        case 0x41275cu: goto label_41275c;
        case 0x412760u: goto label_412760;
        case 0x412764u: goto label_412764;
        case 0x412768u: goto label_412768;
        case 0x41276cu: goto label_41276c;
        case 0x412770u: goto label_412770;
        case 0x412774u: goto label_412774;
        case 0x412778u: goto label_412778;
        case 0x41277cu: goto label_41277c;
        case 0x412780u: goto label_412780;
        case 0x412784u: goto label_412784;
        case 0x412788u: goto label_412788;
        case 0x41278cu: goto label_41278c;
        case 0x412790u: goto label_412790;
        case 0x412794u: goto label_412794;
        case 0x412798u: goto label_412798;
        case 0x41279cu: goto label_41279c;
        case 0x4127a0u: goto label_4127a0;
        case 0x4127a4u: goto label_4127a4;
        case 0x4127a8u: goto label_4127a8;
        case 0x4127acu: goto label_4127ac;
        case 0x4127b0u: goto label_4127b0;
        case 0x4127b4u: goto label_4127b4;
        case 0x4127b8u: goto label_4127b8;
        case 0x4127bcu: goto label_4127bc;
        default: break;
    }

    ctx->pc = 0x4125b8u;

label_4125b8:
    // 0x4125b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4125b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4125bc:
    // 0x4125bc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4125bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_4125c0:
    // 0x4125c0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4125c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4125c4:
    // 0x4125c4: 0x51c03  sra         $v1, $a1, 16
    ctx->pc = 0x4125c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 16));
label_4125c8:
    // 0x4125c8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4125c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4125cc:
    // 0x4125cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4125ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4125d0:
    // 0x4125d0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4125d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4125d4:
    // 0x4125d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4125d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4125d8:
    // 0x4125d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4125d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4125dc:
    // 0x4125dc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4125dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4125e0:
    // 0x4125e0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4125e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4125e4:
    // 0x4125e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4125e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4125e8:
    // 0x4125e8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4125e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4125ec:
    // 0x4125ec: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4125ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4125f0:
    // 0x4125f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4125f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4125f4:
    // 0x4125f4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x4125f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_4125f8:
    // 0x4125f8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_4125fc:
    if (ctx->pc == 0x4125FCu) {
        ctx->pc = 0x4125FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125F8u;
        // 0x4125fc: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412600u;
        goto label_412600;
    }
    ctx->pc = 0x4125F8u;
    {
        const bool branch_taken_0x4125f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4125FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125F8u;
        // 0x4125fc: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4125f8) {
            ctx->pc = 0x4126E8u;
            goto label_4126e8;
        }
    }
    ctx->pc = 0x412600u;
label_412600:
    // 0x412600: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x412600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_412604:
    // 0x412604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x412604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_412608:
    // 0x412608: 0x24428f00  addiu       $v0, $v0, -0x7100
    ctx->pc = 0x412608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938368));
label_41260c:
    // 0x41260c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41260cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_412610:
    // 0x412610: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x412610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_412614:
    // 0x412614: 0x800008  jr          $a0
label_412618:
    if (ctx->pc == 0x412618u) {
        ctx->pc = 0x41261Cu;
        goto label_41261c;
    }
    ctx->pc = 0x412614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x41261Cu: goto label_41261c;
            case 0x41266Cu: goto label_41266c;
            case 0x412678u: goto label_412678;
            case 0x4126C8u: goto label_4126c8;
            case 0x4126E8u: goto label_4126e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412614u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x41261Cu;
label_41261c:
    // 0x41261c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41261cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_412620:
    // 0x412620: 0x8c46483c  lw          $a2, 0x483C($v0)
    ctx->pc = 0x412620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18492)));
label_412624:
    // 0x412624: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x412624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_412628:
    // 0x412628: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x412628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_41262c:
    // 0x41262c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x41262cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_412630:
    // 0x412630: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_412634:
    if (ctx->pc == 0x412634u) {
        ctx->pc = 0x412634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412630u;
        // 0x412634: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412638u;
        goto label_412638;
    }
    ctx->pc = 0x412630u;
    {
        const bool branch_taken_0x412630 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x412634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412630u;
        // 0x412634: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412630) {
            ctx->pc = 0x412664u;
            goto label_412664;
        }
    }
    ctx->pc = 0x412638u;
label_412638:
    // 0x412638: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x412638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_41263c:
    // 0x41263c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x41263cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_412640:
    // 0x412640: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x412640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_412644:
    // 0x412644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x412644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_412648:
    // 0x412648: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x412648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_41264c:
    // 0x41264c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_412650:
    if (ctx->pc == 0x412650u) {
        ctx->pc = 0x412650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41264Cu;
        // 0x412650: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412654u;
        goto label_412654;
    }
    ctx->pc = 0x41264Cu;
    {
        const bool branch_taken_0x41264c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41264Cu;
        // 0x412650: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41264c) {
            ctx->pc = 0x4126E4u;
            goto label_4126e4;
        }
    }
    ctx->pc = 0x412654u;
label_412654:
    // 0x412654: 0xc105470  jal         func_4151C0
label_412658:
    if (ctx->pc == 0x412658u) {
        ctx->pc = 0x412658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412654u;
        // 0x412658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41265Cu;
        goto label_41265c;
    }
    ctx->pc = 0x412654u;
    SET_GPR_U32(ctx, 31, 0x41265Cu);
    ctx->pc = 0x412658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412654u;
    // 0x412658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4151C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4151C0u, 0x412654u, 0x41265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41265Cu;
label_41265c:
    // 0x41265c: 0x10000022  b           . + 4 + (0x22 << 2)
label_412660:
    if (ctx->pc == 0x412660u) {
        ctx->pc = 0x412660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41265Cu;
        // 0x412660: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412664u;
        goto label_412664;
    }
    ctx->pc = 0x41265Cu;
    {
        const bool branch_taken_0x41265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41265Cu;
        // 0x412660: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41265c) {
            ctx->pc = 0x4126E8u;
            goto label_4126e8;
        }
    }
    ctx->pc = 0x412664u;
label_412664:
    // 0x412664: 0x1000001f  b           . + 4 + (0x1F << 2)
label_412668:
    if (ctx->pc == 0x412668u) {
        ctx->pc = 0x412668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412664u;
        // 0x412668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41266Cu;
        goto label_41266c;
    }
    ctx->pc = 0x412664u;
    {
        const bool branch_taken_0x412664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412664u;
        // 0x412668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412664) {
            ctx->pc = 0x4126E4u;
            goto label_4126e4;
        }
    }
    ctx->pc = 0x41266Cu;
label_41266c:
    // 0x41266c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41266cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_412670:
    // 0x412670: 0x10000049  b           . + 4 + (0x49 << 2)
label_412674:
    if (ctx->pc == 0x412674u) {
        ctx->pc = 0x412674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412670u;
        // 0x412674: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412678u;
        goto label_412678;
    }
    ctx->pc = 0x412670u;
    {
        const bool branch_taken_0x412670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412670u;
        // 0x412674: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412670) {
            ctx->pc = 0x412798u;
            goto label_412798;
        }
    }
    ctx->pc = 0x412678u;
label_412678:
    // 0x412678: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x412678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_41267c:
    // 0x41267c: 0x8c464814  lw          $a2, 0x4814($v0)
    ctx->pc = 0x41267cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18452)));
label_412680:
    // 0x412680: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x412680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_412684:
    // 0x412684: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x412684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_412688:
    // 0x412688: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x412688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_41268c:
    // 0x41268c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_412690:
    if (ctx->pc == 0x412690u) {
        ctx->pc = 0x412690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41268Cu;
        // 0x412690: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412694u;
        goto label_412694;
    }
    ctx->pc = 0x41268Cu;
    {
        const bool branch_taken_0x41268c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x412690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41268Cu;
        // 0x412690: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41268c) {
            ctx->pc = 0x4126C0u;
            goto label_4126c0;
        }
    }
    ctx->pc = 0x412694u;
label_412694:
    // 0x412694: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x412694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_412698:
    // 0x412698: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x412698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_41269c:
    // 0x41269c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x41269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4126a0:
    // 0x4126a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4126a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4126a4:
    // 0x4126a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4126a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4126a8:
    // 0x4126a8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4126ac:
    if (ctx->pc == 0x4126ACu) {
        ctx->pc = 0x4126ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126A8u;
        // 0x4126ac: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4126B0u;
        goto label_4126b0;
    }
    ctx->pc = 0x4126A8u;
    {
        const bool branch_taken_0x4126a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4126ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126A8u;
        // 0x4126ac: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4126a8) {
            ctx->pc = 0x4126E4u;
            goto label_4126e4;
        }
    }
    ctx->pc = 0x4126B0u;
label_4126b0:
    // 0x4126b0: 0xc104cf4  jal         func_4133D0
label_4126b4:
    if (ctx->pc == 0x4126B4u) {
        ctx->pc = 0x4126B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126B0u;
        // 0x4126b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4126B8u;
        goto label_4126b8;
    }
    ctx->pc = 0x4126B0u;
    SET_GPR_U32(ctx, 31, 0x4126B8u);
    ctx->pc = 0x4126B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4126B0u;
    // 0x4126b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133D0u, 0x4126B0u, 0x4126B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4126B8u;
label_4126b8:
    // 0x4126b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_4126bc:
    if (ctx->pc == 0x4126BCu) {
        ctx->pc = 0x4126BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126B8u;
        // 0x4126bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4126C0u;
        goto label_4126c0;
    }
    ctx->pc = 0x4126B8u;
    {
        const bool branch_taken_0x4126b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4126BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126B8u;
        // 0x4126bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4126b8) {
            ctx->pc = 0x4126E8u;
            goto label_4126e8;
        }
    }
    ctx->pc = 0x4126C0u;
label_4126c0:
    // 0x4126c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_4126c4:
    if (ctx->pc == 0x4126C4u) {
        ctx->pc = 0x4126C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126C0u;
        // 0x4126c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4126C8u;
        goto label_4126c8;
    }
    ctx->pc = 0x4126C0u;
    {
        const bool branch_taken_0x4126c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4126C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126C0u;
        // 0x4126c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4126c0) {
            ctx->pc = 0x4126E4u;
            goto label_4126e4;
        }
    }
    ctx->pc = 0x4126C8u;
label_4126c8:
    // 0x4126c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4126c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4126cc:
    // 0x4126cc: 0x8c454834  lw          $a1, 0x4834($v0)
    ctx->pc = 0x4126ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18484)));
label_4126d0:
    // 0x4126d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4126d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4126d4:
    // 0x4126d4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x4126d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_4126d8:
    // 0x4126d8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4126d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4126dc:
    // 0x4126dc: 0x40f809  jalr        $v0
label_4126e0:
    if (ctx->pc == 0x4126E0u) {
        ctx->pc = 0x4126E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126DCu;
        // 0x4126e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4126E4u;
        goto label_4126e4;
    }
    ctx->pc = 0x4126DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4126E4u);
        ctx->pc = 0x4126E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126DCu;
        // 0x4126e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4126DCu, 0x4126E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4126E4u;
label_4126e4:
    // 0x4126e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4126e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4126e8:
    // 0x4126e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4126e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4126ec:
    // 0x4126ec: 0xc104a3a  jal         func_4128E8
label_4126f0:
    if (ctx->pc == 0x4126F0u) {
        ctx->pc = 0x4126F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4126ECu;
        // 0x4126f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4126F4u;
        goto label_4126f4;
    }
    ctx->pc = 0x4126ECu;
    SET_GPR_U32(ctx, 31, 0x4126F4u);
    ctx->pc = 0x4126F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4126ECu;
    // 0x4126f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4128E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4128E8u, 0x4126ECu, 0x4126F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4126F4u;
label_4126f4:
    // 0x4126f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4126f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4126f8:
    // 0x4126f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4126f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4126fc:
    // 0x4126fc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4126fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_412700:
    // 0x412700: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x412700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_412704:
    // 0x412704: 0x60f809  jalr        $v1
label_412708:
    if (ctx->pc == 0x412708u) {
        ctx->pc = 0x412708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412704u;
        // 0x412708: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41270Cu;
        goto label_41270c;
    }
    ctx->pc = 0x412704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41270Cu);
        ctx->pc = 0x412708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412704u;
        // 0x412708: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412704u, 0x41270Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41270Cu;
label_41270c:
    // 0x41270c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x41270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_412710:
    // 0x412710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x412710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412714:
    // 0x412714: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x412714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_412718:
    // 0x412718: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x412718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41271c:
    // 0x41271c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41271cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_412720:
    // 0x412720: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x412720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_412724:
    // 0x412724: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x412724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_412728:
    // 0x412728: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x412728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_41272c:
    // 0x41272c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x41272cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_412730:
    // 0x412730: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x412730u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_412734:
    // 0x412734: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x412734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_412738:
    // 0x412738: 0xc104a44  jal         func_412910
label_41273c:
    if (ctx->pc == 0x41273Cu) {
        ctx->pc = 0x41273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412738u;
        // 0x41273c: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412740u;
        goto label_412740;
    }
    ctx->pc = 0x412738u;
    SET_GPR_U32(ctx, 31, 0x412740u);
    ctx->pc = 0x41273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412738u;
    // 0x41273c: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412910u, 0x412738u, 0x412740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412740u;
label_412740:
    // 0x412740: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x412740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_412744:
    // 0x412744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x412744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412748:
    // 0x412748: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x412748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41274c:
    // 0x41274c: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x41274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_412750:
    // 0x412750: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x412750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_412754:
    // 0x412754: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x412754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_412758:
    // 0x412758: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x412758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41275c:
    // 0x41275c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x41275cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_412760:
    // 0x412760: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x412760u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_412764:
    // 0x412764: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x412764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_412768:
    // 0x412768: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x412768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_41276c:
    // 0x41276c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x41276cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_412770:
    // 0x412770: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x412770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_412774:
    // 0x412774: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x412774u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_412778:
    // 0x412778: 0xc104a44  jal         func_412910
label_41277c:
    if (ctx->pc == 0x41277Cu) {
        ctx->pc = 0x41277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412778u;
        // 0x41277c: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412780u;
        goto label_412780;
    }
    ctx->pc = 0x412778u;
    SET_GPR_U32(ctx, 31, 0x412780u);
    ctx->pc = 0x41277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412778u;
    // 0x41277c: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412910u, 0x412778u, 0x412780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412780u;
label_412780:
    // 0x412780: 0xa215006a  sb          $s5, 0x6A($s0)
    ctx->pc = 0x412780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 21));
label_412784:
    // 0x412784: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x412784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412788:
    // 0x412788: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x412788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41278c:
    // 0x41278c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_412790:
    // 0x412790: 0x40f809  jalr        $v0
label_412794:
    if (ctx->pc == 0x412794u) {
        ctx->pc = 0x412794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412790u;
        // 0x412794: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412798u;
        goto label_412798;
    }
    ctx->pc = 0x412790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412798u);
        ctx->pc = 0x412794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412790u;
        // 0x412794: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412790u, 0x412798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412798u;
label_412798:
    // 0x412798: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x412798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41279c:
    // 0x41279c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x41279cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4127a0:
    // 0x4127a0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4127a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4127a4:
    // 0x4127a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4127a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4127a8:
    // 0x4127a8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4127a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4127ac:
    // 0x4127ac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4127acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4127b0:
    // 0x4127b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4127b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4127b4:
    // 0x4127b4: 0x3e00008  jr          $ra
label_4127b8:
    if (ctx->pc == 0x4127B8u) {
        ctx->pc = 0x4127B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4127B4u;
        // 0x4127b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4127BCu;
        goto label_4127bc;
    }
    ctx->pc = 0x4127B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4127B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4127B4u;
        // 0x4127b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4127B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4127BCu;
label_4127bc:
    // 0x4127bc: 0x0  nop
    ctx->pc = 0x4127bcu;
    // NOP
    ctx->pc = 0x4127c0u;
}
