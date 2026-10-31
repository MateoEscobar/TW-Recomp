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

// Function: sub_003FF6C8
// Address: 0x3ff6c8 - 0x3ff918
void sub_003FF6C8_0x3ff6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FF6C8_0x3ff6c8");
#endif

    switch (ctx->pc) {
        case 0x3ff6c8u: goto label_3ff6c8;
        case 0x3ff6ccu: goto label_3ff6cc;
        case 0x3ff6d0u: goto label_3ff6d0;
        case 0x3ff6d4u: goto label_3ff6d4;
        case 0x3ff6d8u: goto label_3ff6d8;
        case 0x3ff6dcu: goto label_3ff6dc;
        case 0x3ff6e0u: goto label_3ff6e0;
        case 0x3ff6e4u: goto label_3ff6e4;
        case 0x3ff6e8u: goto label_3ff6e8;
        case 0x3ff6ecu: goto label_3ff6ec;
        case 0x3ff6f0u: goto label_3ff6f0;
        case 0x3ff6f4u: goto label_3ff6f4;
        case 0x3ff6f8u: goto label_3ff6f8;
        case 0x3ff6fcu: goto label_3ff6fc;
        case 0x3ff700u: goto label_3ff700;
        case 0x3ff704u: goto label_3ff704;
        case 0x3ff708u: goto label_3ff708;
        case 0x3ff70cu: goto label_3ff70c;
        case 0x3ff710u: goto label_3ff710;
        case 0x3ff714u: goto label_3ff714;
        case 0x3ff718u: goto label_3ff718;
        case 0x3ff71cu: goto label_3ff71c;
        case 0x3ff720u: goto label_3ff720;
        case 0x3ff724u: goto label_3ff724;
        case 0x3ff728u: goto label_3ff728;
        case 0x3ff72cu: goto label_3ff72c;
        case 0x3ff730u: goto label_3ff730;
        case 0x3ff734u: goto label_3ff734;
        case 0x3ff738u: goto label_3ff738;
        case 0x3ff73cu: goto label_3ff73c;
        case 0x3ff740u: goto label_3ff740;
        case 0x3ff744u: goto label_3ff744;
        case 0x3ff748u: goto label_3ff748;
        case 0x3ff74cu: goto label_3ff74c;
        case 0x3ff750u: goto label_3ff750;
        case 0x3ff754u: goto label_3ff754;
        case 0x3ff758u: goto label_3ff758;
        case 0x3ff75cu: goto label_3ff75c;
        case 0x3ff760u: goto label_3ff760;
        case 0x3ff764u: goto label_3ff764;
        case 0x3ff768u: goto label_3ff768;
        case 0x3ff76cu: goto label_3ff76c;
        case 0x3ff770u: goto label_3ff770;
        case 0x3ff774u: goto label_3ff774;
        case 0x3ff778u: goto label_3ff778;
        case 0x3ff77cu: goto label_3ff77c;
        case 0x3ff780u: goto label_3ff780;
        case 0x3ff784u: goto label_3ff784;
        case 0x3ff788u: goto label_3ff788;
        case 0x3ff78cu: goto label_3ff78c;
        case 0x3ff790u: goto label_3ff790;
        case 0x3ff794u: goto label_3ff794;
        case 0x3ff798u: goto label_3ff798;
        case 0x3ff79cu: goto label_3ff79c;
        case 0x3ff7a0u: goto label_3ff7a0;
        case 0x3ff7a4u: goto label_3ff7a4;
        case 0x3ff7a8u: goto label_3ff7a8;
        case 0x3ff7acu: goto label_3ff7ac;
        case 0x3ff7b0u: goto label_3ff7b0;
        case 0x3ff7b4u: goto label_3ff7b4;
        case 0x3ff7b8u: goto label_3ff7b8;
        case 0x3ff7bcu: goto label_3ff7bc;
        case 0x3ff7c0u: goto label_3ff7c0;
        case 0x3ff7c4u: goto label_3ff7c4;
        case 0x3ff7c8u: goto label_3ff7c8;
        case 0x3ff7ccu: goto label_3ff7cc;
        case 0x3ff7d0u: goto label_3ff7d0;
        case 0x3ff7d4u: goto label_3ff7d4;
        case 0x3ff7d8u: goto label_3ff7d8;
        case 0x3ff7dcu: goto label_3ff7dc;
        case 0x3ff7e0u: goto label_3ff7e0;
        case 0x3ff7e4u: goto label_3ff7e4;
        case 0x3ff7e8u: goto label_3ff7e8;
        case 0x3ff7ecu: goto label_3ff7ec;
        case 0x3ff7f0u: goto label_3ff7f0;
        case 0x3ff7f4u: goto label_3ff7f4;
        case 0x3ff7f8u: goto label_3ff7f8;
        case 0x3ff7fcu: goto label_3ff7fc;
        case 0x3ff800u: goto label_3ff800;
        case 0x3ff804u: goto label_3ff804;
        case 0x3ff808u: goto label_3ff808;
        case 0x3ff80cu: goto label_3ff80c;
        case 0x3ff810u: goto label_3ff810;
        case 0x3ff814u: goto label_3ff814;
        case 0x3ff818u: goto label_3ff818;
        case 0x3ff81cu: goto label_3ff81c;
        case 0x3ff820u: goto label_3ff820;
        case 0x3ff824u: goto label_3ff824;
        case 0x3ff828u: goto label_3ff828;
        case 0x3ff82cu: goto label_3ff82c;
        case 0x3ff830u: goto label_3ff830;
        case 0x3ff834u: goto label_3ff834;
        case 0x3ff838u: goto label_3ff838;
        case 0x3ff83cu: goto label_3ff83c;
        case 0x3ff840u: goto label_3ff840;
        case 0x3ff844u: goto label_3ff844;
        case 0x3ff848u: goto label_3ff848;
        case 0x3ff84cu: goto label_3ff84c;
        case 0x3ff850u: goto label_3ff850;
        case 0x3ff854u: goto label_3ff854;
        case 0x3ff858u: goto label_3ff858;
        case 0x3ff85cu: goto label_3ff85c;
        case 0x3ff860u: goto label_3ff860;
        case 0x3ff864u: goto label_3ff864;
        case 0x3ff868u: goto label_3ff868;
        case 0x3ff86cu: goto label_3ff86c;
        case 0x3ff870u: goto label_3ff870;
        case 0x3ff874u: goto label_3ff874;
        case 0x3ff878u: goto label_3ff878;
        case 0x3ff87cu: goto label_3ff87c;
        case 0x3ff880u: goto label_3ff880;
        case 0x3ff884u: goto label_3ff884;
        case 0x3ff888u: goto label_3ff888;
        case 0x3ff88cu: goto label_3ff88c;
        case 0x3ff890u: goto label_3ff890;
        case 0x3ff894u: goto label_3ff894;
        case 0x3ff898u: goto label_3ff898;
        case 0x3ff89cu: goto label_3ff89c;
        case 0x3ff8a0u: goto label_3ff8a0;
        case 0x3ff8a4u: goto label_3ff8a4;
        case 0x3ff8a8u: goto label_3ff8a8;
        case 0x3ff8acu: goto label_3ff8ac;
        case 0x3ff8b0u: goto label_3ff8b0;
        case 0x3ff8b4u: goto label_3ff8b4;
        case 0x3ff8b8u: goto label_3ff8b8;
        case 0x3ff8bcu: goto label_3ff8bc;
        case 0x3ff8c0u: goto label_3ff8c0;
        case 0x3ff8c4u: goto label_3ff8c4;
        case 0x3ff8c8u: goto label_3ff8c8;
        case 0x3ff8ccu: goto label_3ff8cc;
        case 0x3ff8d0u: goto label_3ff8d0;
        case 0x3ff8d4u: goto label_3ff8d4;
        case 0x3ff8d8u: goto label_3ff8d8;
        case 0x3ff8dcu: goto label_3ff8dc;
        case 0x3ff8e0u: goto label_3ff8e0;
        case 0x3ff8e4u: goto label_3ff8e4;
        case 0x3ff8e8u: goto label_3ff8e8;
        case 0x3ff8ecu: goto label_3ff8ec;
        case 0x3ff8f0u: goto label_3ff8f0;
        case 0x3ff8f4u: goto label_3ff8f4;
        case 0x3ff8f8u: goto label_3ff8f8;
        case 0x3ff8fcu: goto label_3ff8fc;
        case 0x3ff900u: goto label_3ff900;
        case 0x3ff904u: goto label_3ff904;
        case 0x3ff908u: goto label_3ff908;
        case 0x3ff90cu: goto label_3ff90c;
        case 0x3ff910u: goto label_3ff910;
        case 0x3ff914u: goto label_3ff914;
        default: break;
    }

    ctx->pc = 0x3ff6c8u;

label_3ff6c8:
    // 0x3ff6c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ff6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3ff6cc:
    // 0x3ff6cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3ff6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3ff6d0:
    // 0x3ff6d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3ff6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3ff6d4:
    // 0x3ff6d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ff6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ff6d8:
    // 0x3ff6d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3ff6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3ff6dc:
    // 0x3ff6dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ff6dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ff6e0:
    // 0x3ff6e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ff6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3ff6e4:
    // 0x3ff6e4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3ff6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_3ff6e8:
    // 0x3ff6e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ff6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ff6ec:
    // 0x3ff6ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ff6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ff6f0:
    // 0x3ff6f0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ff6f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ff6f4:
    // 0x3ff6f4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ff6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ff6f8:
    // 0x3ff6f8: 0x40f809  jalr        $v0
label_3ff6fc:
    if (ctx->pc == 0x3FF6FCu) {
        ctx->pc = 0x3FF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF6F8u;
        // 0x3ff6fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF700u;
        goto label_3ff700;
    }
    ctx->pc = 0x3FF6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FF700u);
        ctx->pc = 0x3FF6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF6F8u;
        // 0x3ff6fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF6F8u, 0x3FF700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FF700u;
label_3ff700:
    // 0x3ff700: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ff700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ff704:
    // 0x3ff704: 0xc0ea14c  jal         func_3A8530
label_3ff708:
    if (ctx->pc == 0x3FF708u) {
        ctx->pc = 0x3FF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF704u;
        // 0x3ff708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF70Cu;
        goto label_3ff70c;
    }
    ctx->pc = 0x3FF704u;
    SET_GPR_U32(ctx, 31, 0x3FF70Cu);
    ctx->pc = 0x3FF708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF704u;
    // 0x3ff708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3FF704u, 0x3FF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF70Cu;
label_3ff70c:
    // 0x3ff70c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ff70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ff710:
    // 0x3ff710: 0xc0ea12a  jal         func_3A84A8
label_3ff714:
    if (ctx->pc == 0x3FF714u) {
        ctx->pc = 0x3FF714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF710u;
        // 0x3ff714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF718u;
        goto label_3ff718;
    }
    ctx->pc = 0x3FF710u;
    SET_GPR_U32(ctx, 31, 0x3FF718u);
    ctx->pc = 0x3FF714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF710u;
    // 0x3ff714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FF710u, 0x3FF718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF718u;
label_3ff718:
    // 0x3ff718: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3ff718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ff71c:
    // 0x3ff71c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff720:
    // 0x3ff720: 0xc0ea12a  jal         func_3A84A8
label_3ff724:
    if (ctx->pc == 0x3FF724u) {
        ctx->pc = 0x3FF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF720u;
        // 0x3ff724: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF728u;
        goto label_3ff728;
    }
    ctx->pc = 0x3FF720u;
    SET_GPR_U32(ctx, 31, 0x3FF728u);
    ctx->pc = 0x3FF724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF720u;
    // 0x3ff724: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3FF720u, 0x3FF728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF728u;
label_3ff728:
    // 0x3ff728: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x3ff728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_3ff72c:
    // 0x3ff72c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ff72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ff730:
    // 0x3ff730: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x3ff730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_3ff734:
    // 0x3ff734: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3ff734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ff738:
    // 0x3ff738: 0xc0e858c  jal         func_3A1630
label_3ff73c:
    if (ctx->pc == 0x3FF73Cu) {
        ctx->pc = 0x3FF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF738u;
        // 0x3ff73c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF740u;
        goto label_3ff740;
    }
    ctx->pc = 0x3FF738u;
    SET_GPR_U32(ctx, 31, 0x3FF740u);
    ctx->pc = 0x3FF73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF738u;
    // 0x3ff73c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FF738u, 0x3FF740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF740u;
label_3ff740:
    // 0x3ff740: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3ff740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3ff744:
    // 0x3ff744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ff744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ff748:
    // 0x3ff748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ff748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ff74c:
    // 0x3ff74c: 0xc0e9132  jal         func_3A44C8
label_3ff750:
    if (ctx->pc == 0x3FF750u) {
        ctx->pc = 0x3FF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF74Cu;
        // 0x3ff750: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF754u;
        goto label_3ff754;
    }
    ctx->pc = 0x3FF74Cu;
    SET_GPR_U32(ctx, 31, 0x3FF754u);
    ctx->pc = 0x3FF750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF74Cu;
    // 0x3ff750: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3FF74Cu, 0x3FF754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF754u;
label_3ff754:
    // 0x3ff754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ff754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ff758:
    // 0x3ff758: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ff758u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ff75c:
    // 0x3ff75c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ff75cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ff760:
    // 0x3ff760: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3ff760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3ff764:
    // 0x3ff764: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3ff764u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3ff768:
    // 0x3ff768: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ff768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ff76c:
    // 0x3ff76c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3ff76cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3ff770:
    // 0x3ff770: 0xae3000c4  sw          $s0, 0xC4($s1)
    ctx->pc = 0x3ff770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 16));
label_3ff774:
    // 0x3ff774: 0x8cc4489c  lw          $a0, 0x489C($a2)
    ctx->pc = 0x3ff774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_3ff778:
    // 0x3ff778: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3ff778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3ff77c:
    // 0x3ff77c: 0xc1073cc  jal         func_41CF30
label_3ff780:
    if (ctx->pc == 0x3FF780u) {
        ctx->pc = 0x3FF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF77Cu;
        // 0x3ff780: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF784u;
        goto label_3ff784;
    }
    ctx->pc = 0x3FF77Cu;
    SET_GPR_U32(ctx, 31, 0x3FF784u);
    ctx->pc = 0x3FF780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF77Cu;
    // 0x3ff780: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3FF77Cu, 0x3FF784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF784u;
label_3ff784:
    // 0x3ff784: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ff784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ff788:
    // 0x3ff788: 0x3c02232e  lui         $v0, 0x232E
    ctx->pc = 0x3ff788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9006 << 16));
label_3ff78c:
    // 0x3ff78c: 0x34429f88  ori         $v0, $v0, 0x9F88
    ctx->pc = 0x3ff78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40840);
label_3ff790:
    // 0x3ff790: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
label_3ff794:
    if (ctx->pc == 0x3FF794u) {
        ctx->pc = 0x3FF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF790u;
        // 0x3ff794: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF798u;
        goto label_3ff798;
    }
    ctx->pc = 0x3FF790u;
    {
        const bool branch_taken_0x3ff790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF790u;
        // 0x3ff794: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff790) {
            ctx->pc = 0x3FF87Cu;
            goto label_3ff87c;
        }
    }
    ctx->pc = 0x3FF798u;
label_3ff798:
    // 0x3ff798: 0x3c02e910  lui         $v0, 0xE910
    ctx->pc = 0x3ff798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59664 << 16));
label_3ff79c:
    // 0x3ff79c: 0x3442f959  ori         $v0, $v0, 0xF959
    ctx->pc = 0x3ff79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63833);
label_3ff7a0:
    // 0x3ff7a0: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
label_3ff7a4:
    if (ctx->pc == 0x3FF7A4u) {
        ctx->pc = 0x3FF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7A0u;
        // 0x3ff7a4: 0x3c021eb5  lui         $v0, 0x1EB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7861 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF7A8u;
        goto label_3ff7a8;
    }
    ctx->pc = 0x3FF7A0u;
    {
        const bool branch_taken_0x3ff7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7A0u;
        // 0x3ff7a4: 0x3c021eb5  lui         $v0, 0x1EB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7861 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff7a0) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF7A8u;
label_3ff7a8:
    // 0x3ff7a8: 0x34421b25  ori         $v0, $v0, 0x1B25
    ctx->pc = 0x3ff7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6949);
label_3ff7ac:
    // 0x3ff7ac: 0x12020032  beq         $s0, $v0, . + 4 + (0x32 << 2)
label_3ff7b0:
    if (ctx->pc == 0x3FF7B0u) {
        ctx->pc = 0x3FF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7ACu;
        // 0x3ff7b0: 0x3c024344  lui         $v0, 0x4344 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17220 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF7B4u;
        goto label_3ff7b4;
    }
    ctx->pc = 0x3FF7ACu;
    {
        const bool branch_taken_0x3ff7ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7ACu;
        // 0x3ff7b0: 0x3c024344  lui         $v0, 0x4344 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17220 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff7ac) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF7B4u;
label_3ff7b4:
    // 0x3ff7b4: 0x34429b27  ori         $v0, $v0, 0x9B27
    ctx->pc = 0x3ff7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39719);
label_3ff7b8:
    // 0x3ff7b8: 0x12020030  beq         $s0, $v0, . + 4 + (0x30 << 2)
label_3ff7bc:
    if (ctx->pc == 0x3FF7BCu) {
        ctx->pc = 0x3FF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7B8u;
        // 0x3ff7bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF7C0u;
        goto label_3ff7c0;
    }
    ctx->pc = 0x3FF7B8u;
    {
        const bool branch_taken_0x3ff7b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7B8u;
        // 0x3ff7bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff7b8) {
            ctx->pc = 0x3FF87Cu;
            goto label_3ff87c;
        }
    }
    ctx->pc = 0x3FF7C0u;
label_3ff7c0:
    // 0x3ff7c0: 0x3c02824e  lui         $v0, 0x824E
    ctx->pc = 0x3ff7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33358 << 16));
label_3ff7c4:
    // 0x3ff7c4: 0x3442aa6e  ori         $v0, $v0, 0xAA6E
    ctx->pc = 0x3ff7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43630);
label_3ff7c8:
    // 0x3ff7c8: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
label_3ff7cc:
    if (ctx->pc == 0x3FF7CCu) {
        ctx->pc = 0x3FF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7C8u;
        // 0x3ff7cc: 0x3c026b2d  lui         $v0, 0x6B2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27437 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF7D0u;
        goto label_3ff7d0;
    }
    ctx->pc = 0x3FF7C8u;
    {
        const bool branch_taken_0x3ff7c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7C8u;
        // 0x3ff7cc: 0x3c026b2d  lui         $v0, 0x6B2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27437 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff7c8) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF7D0u;
label_3ff7d0:
    // 0x3ff7d0: 0x34420f5b  ori         $v0, $v0, 0xF5B
    ctx->pc = 0x3ff7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3931);
label_3ff7d4:
    // 0x3ff7d4: 0x12020029  beq         $s0, $v0, . + 4 + (0x29 << 2)
label_3ff7d8:
    if (ctx->pc == 0x3FF7D8u) {
        ctx->pc = 0x3FF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7D4u;
        // 0x3ff7d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF7DCu;
        goto label_3ff7dc;
    }
    ctx->pc = 0x3FF7D4u;
    {
        const bool branch_taken_0x3ff7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7D4u;
        // 0x3ff7d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff7d4) {
            ctx->pc = 0x3FF87Cu;
            goto label_3ff87c;
        }
    }
    ctx->pc = 0x3FF7DCu;
label_3ff7dc:
    // 0x3ff7dc: 0x3c02ef4a  lui         $v0, 0xEF4A
    ctx->pc = 0x3ff7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61258 << 16));
label_3ff7e0:
    // 0x3ff7e0: 0x344246b2  ori         $v0, $v0, 0x46B2
    ctx->pc = 0x3ff7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18098);
label_3ff7e4:
    // 0x3ff7e4: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
label_3ff7e8:
    if (ctx->pc == 0x3FF7E8u) {
        ctx->pc = 0x3FF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7E4u;
        // 0x3ff7e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF7ECu;
        goto label_3ff7ec;
    }
    ctx->pc = 0x3FF7E4u;
    {
        const bool branch_taken_0x3ff7e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7E4u;
        // 0x3ff7e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff7e4) {
            ctx->pc = 0x3FF87Cu;
            goto label_3ff87c;
        }
    }
    ctx->pc = 0x3FF7ECu;
label_3ff7ec:
    // 0x3ff7ec: 0x3c029849  lui         $v0, 0x9849
    ctx->pc = 0x3ff7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38985 << 16));
label_3ff7f0:
    // 0x3ff7f0: 0x3442ef17  ori         $v0, $v0, 0xEF17
    ctx->pc = 0x3ff7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61207);
label_3ff7f4:
    // 0x3ff7f4: 0x12020021  beq         $s0, $v0, . + 4 + (0x21 << 2)
label_3ff7f8:
    if (ctx->pc == 0x3FF7F8u) {
        ctx->pc = 0x3FF7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7F4u;
        // 0x3ff7f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF7FCu;
        goto label_3ff7fc;
    }
    ctx->pc = 0x3FF7F4u;
    {
        const bool branch_taken_0x3ff7f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF7F4u;
        // 0x3ff7f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff7f4) {
            ctx->pc = 0x3FF87Cu;
            goto label_3ff87c;
        }
    }
    ctx->pc = 0x3FF7FCu;
label_3ff7fc:
    // 0x3ff7fc: 0x3c02b080  lui         $v0, 0xB080
    ctx->pc = 0x3ff7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45184 << 16));
label_3ff800:
    // 0x3ff800: 0x3442716a  ori         $v0, $v0, 0x716A
    ctx->pc = 0x3ff800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29034);
label_3ff804:
    // 0x3ff804: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
label_3ff808:
    if (ctx->pc == 0x3FF808u) {
        ctx->pc = 0x3FF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF804u;
        // 0x3ff808: 0x3c027299  lui         $v0, 0x7299 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29337 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF80Cu;
        goto label_3ff80c;
    }
    ctx->pc = 0x3FF804u;
    {
        const bool branch_taken_0x3ff804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF804u;
        // 0x3ff808: 0x3c027299  lui         $v0, 0x7299 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29337 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff804) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF80Cu;
label_3ff80c:
    // 0x3ff80c: 0x34429d87  ori         $v0, $v0, 0x9D87
    ctx->pc = 0x3ff80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40327);
label_3ff810:
    // 0x3ff810: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
label_3ff814:
    if (ctx->pc == 0x3FF814u) {
        ctx->pc = 0x3FF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF810u;
        // 0x3ff814: 0x3c02517d  lui         $v0, 0x517D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20861 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF818u;
        goto label_3ff818;
    }
    ctx->pc = 0x3FF810u;
    {
        const bool branch_taken_0x3ff810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF810u;
        // 0x3ff814: 0x3c02517d  lui         $v0, 0x517D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20861 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff810) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF818u;
label_3ff818:
    // 0x3ff818: 0x344218f6  ori         $v0, $v0, 0x18F6
    ctx->pc = 0x3ff818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6390);
label_3ff81c:
    // 0x3ff81c: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
label_3ff820:
    if (ctx->pc == 0x3FF820u) {
        ctx->pc = 0x3FF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF81Cu;
        // 0x3ff820: 0x3c022b02  lui         $v0, 0x2B02 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11010 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF824u;
        goto label_3ff824;
    }
    ctx->pc = 0x3FF81Cu;
    {
        const bool branch_taken_0x3ff81c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF81Cu;
        // 0x3ff820: 0x3c022b02  lui         $v0, 0x2B02 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11010 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff81c) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF824u;
label_3ff824:
    // 0x3ff824: 0x3442a695  ori         $v0, $v0, 0xA695
    ctx->pc = 0x3ff824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42645);
label_3ff828:
    // 0x3ff828: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
label_3ff82c:
    if (ctx->pc == 0x3FF82Cu) {
        ctx->pc = 0x3FF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF828u;
        // 0x3ff82c: 0x3c022c6f  lui         $v0, 0x2C6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11375 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF830u;
        goto label_3ff830;
    }
    ctx->pc = 0x3FF828u;
    {
        const bool branch_taken_0x3ff828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF828u;
        // 0x3ff82c: 0x3c022c6f  lui         $v0, 0x2C6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11375 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff828) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF830u;
label_3ff830:
    // 0x3ff830: 0x3442628c  ori         $v0, $v0, 0x628C
    ctx->pc = 0x3ff830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25228);
label_3ff834:
    // 0x3ff834: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
label_3ff838:
    if (ctx->pc == 0x3FF838u) {
        ctx->pc = 0x3FF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF834u;
        // 0x3ff838: 0x3c024763  lui         $v0, 0x4763 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18275 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF83Cu;
        goto label_3ff83c;
    }
    ctx->pc = 0x3FF834u;
    {
        const bool branch_taken_0x3ff834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF834u;
        // 0x3ff838: 0x3c024763  lui         $v0, 0x4763 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18275 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff834) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF83Cu;
label_3ff83c:
    // 0x3ff83c: 0x3442527e  ori         $v0, $v0, 0x527E
    ctx->pc = 0x3ff83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21118);
label_3ff840:
    // 0x3ff840: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_3ff844:
    if (ctx->pc == 0x3FF844u) {
        ctx->pc = 0x3FF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF840u;
        // 0x3ff844: 0x3c022c13  lui         $v0, 0x2C13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11283 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF848u;
        goto label_3ff848;
    }
    ctx->pc = 0x3FF840u;
    {
        const bool branch_taken_0x3ff840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF840u;
        // 0x3ff844: 0x3c022c13  lui         $v0, 0x2C13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11283 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff840) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF848u;
label_3ff848:
    // 0x3ff848: 0x3442bfa0  ori         $v0, $v0, 0xBFA0
    ctx->pc = 0x3ff848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49056);
label_3ff84c:
    // 0x3ff84c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_3ff850:
    if (ctx->pc == 0x3FF850u) {
        ctx->pc = 0x3FF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF84Cu;
        // 0x3ff850: 0x3c0210ca  lui         $v0, 0x10CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4298 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF854u;
        goto label_3ff854;
    }
    ctx->pc = 0x3FF84Cu;
    {
        const bool branch_taken_0x3ff84c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF84Cu;
        // 0x3ff850: 0x3c0210ca  lui         $v0, 0x10CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4298 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff84c) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF854u;
label_3ff854:
    // 0x3ff854: 0x344224ac  ori         $v0, $v0, 0x24AC
    ctx->pc = 0x3ff854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9388);
label_3ff858:
    // 0x3ff858: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_3ff85c:
    if (ctx->pc == 0x3FF85Cu) {
        ctx->pc = 0x3FF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF858u;
        // 0x3ff85c: 0x3c024a1f  lui         $v0, 0x4A1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18975 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF860u;
        goto label_3ff860;
    }
    ctx->pc = 0x3FF858u;
    {
        const bool branch_taken_0x3ff858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF858u;
        // 0x3ff85c: 0x3c024a1f  lui         $v0, 0x4A1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff858) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF860u;
label_3ff860:
    // 0x3ff860: 0x34425193  ori         $v0, $v0, 0x5193
    ctx->pc = 0x3ff860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20883);
label_3ff864:
    // 0x3ff864: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_3ff868:
    if (ctx->pc == 0x3FF868u) {
        ctx->pc = 0x3FF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF864u;
        // 0x3ff868: 0x3c020f4d  lui         $v0, 0xF4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3917 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF86Cu;
        goto label_3ff86c;
    }
    ctx->pc = 0x3FF864u;
    {
        const bool branch_taken_0x3ff864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FF868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF864u;
        // 0x3ff868: 0x3c020f4d  lui         $v0, 0xF4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3917 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff864) {
            ctx->pc = 0x3FF878u;
            goto label_3ff878;
        }
    }
    ctx->pc = 0x3FF86Cu;
label_3ff86c:
    // 0x3ff86c: 0x3442ce14  ori         $v0, $v0, 0xCE14
    ctx->pc = 0x3ff86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52756);
label_3ff870:
    // 0x3ff870: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_3ff874:
    if (ctx->pc == 0x3FF874u) {
        ctx->pc = 0x3FF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF870u;
        // 0x3ff874: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF878u;
        goto label_3ff878;
    }
    ctx->pc = 0x3FF870u;
    {
        const bool branch_taken_0x3ff870 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF870u;
        // 0x3ff874: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff870) {
            ctx->pc = 0x3FF884u;
            goto label_3ff884;
        }
    }
    ctx->pc = 0x3FF878u;
label_3ff878:
    // 0x3ff878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ff878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ff87c:
    // 0x3ff87c: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ff880:
    if (ctx->pc == 0x3FF880u) {
        ctx->pc = 0x3FF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF87Cu;
        // 0x3ff880: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF884u;
        goto label_3ff884;
    }
    ctx->pc = 0x3FF87Cu;
    {
        const bool branch_taken_0x3ff87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF87Cu;
        // 0x3ff880: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff87c) {
            ctx->pc = 0x3FF8B4u;
            goto label_3ff8b4;
        }
    }
    ctx->pc = 0x3FF884u;
label_3ff884:
    // 0x3ff884: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3ff888:
    if (ctx->pc == 0x3FF888u) {
        ctx->pc = 0x3FF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF884u;
        // 0x3ff888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF88Cu;
        goto label_3ff88c;
    }
    ctx->pc = 0x3FF884u;
    {
        const bool branch_taken_0x3ff884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF884u;
        // 0x3ff888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff884) {
            ctx->pc = 0x3FF8A4u;
            goto label_3ff8a4;
        }
    }
    ctx->pc = 0x3FF88Cu;
label_3ff88c:
    // 0x3ff88c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ff88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ff890:
    // 0x3ff890: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3ff890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_3ff894:
    // 0x3ff894: 0xc0e91f0  jal         func_3A47C0
label_3ff898:
    if (ctx->pc == 0x3FF898u) {
        ctx->pc = 0x3FF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF894u;
        // 0x3ff898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF89Cu;
        goto label_3ff89c;
    }
    ctx->pc = 0x3FF894u;
    SET_GPR_U32(ctx, 31, 0x3FF89Cu);
    ctx->pc = 0x3FF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF894u;
    // 0x3ff898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3FF894u, 0x3FF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF89Cu;
label_3ff89c:
    // 0x3ff89c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3ff8a0:
    if (ctx->pc == 0x3FF8A0u) {
        ctx->pc = 0x3FF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF89Cu;
        // 0x3ff8a0: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF8A4u;
        goto label_3ff8a4;
    }
    ctx->pc = 0x3FF89Cu;
    {
        const bool branch_taken_0x3ff89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF89Cu;
        // 0x3ff8a0: 0x32820008  andi        $v0, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff89c) {
            ctx->pc = 0x3FF8B8u;
            goto label_3ff8b8;
        }
    }
    ctx->pc = 0x3FF8A4u;
label_3ff8a4:
    // 0x3ff8a4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3ff8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3ff8a8:
    // 0x3ff8a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ff8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ff8ac:
    // 0x3ff8ac: 0xc0e91f0  jal         func_3A47C0
label_3ff8b0:
    if (ctx->pc == 0x3FF8B0u) {
        ctx->pc = 0x3FF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF8ACu;
        // 0x3ff8b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF8B4u;
        goto label_3ff8b4;
    }
    ctx->pc = 0x3FF8ACu;
    SET_GPR_U32(ctx, 31, 0x3FF8B4u);
    ctx->pc = 0x3FF8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF8ACu;
    // 0x3ff8b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3FF8ACu, 0x3FF8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF8B4u;
label_3ff8b4:
    // 0x3ff8b4: 0x32820008  andi        $v0, $s4, 0x8
    ctx->pc = 0x3ff8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_3ff8b8:
    // 0x3ff8b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3ff8bc:
    if (ctx->pc == 0x3FF8BCu) {
        ctx->pc = 0x3FF8C0u;
        goto label_3ff8c0;
    }
    ctx->pc = 0x3FF8B8u;
    {
        const bool branch_taken_0x3ff8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ff8b8) {
            ctx->pc = 0x3FF8D8u;
            goto label_3ff8d8;
        }
    }
    ctx->pc = 0x3FF8C0u;
label_3ff8c0:
    // 0x3ff8c0: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x3ff8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3ff8c4:
    // 0x3ff8c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3ff8c8:
    if (ctx->pc == 0x3FF8C8u) {
        ctx->pc = 0x3FF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF8C4u;
        // 0x3ff8c8: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF8CCu;
        goto label_3ff8cc;
    }
    ctx->pc = 0x3FF8C4u;
    {
        const bool branch_taken_0x3ff8c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF8C4u;
        // 0x3ff8c8: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff8c4) {
            ctx->pc = 0x3FF8D8u;
            goto label_3ff8d8;
        }
    }
    ctx->pc = 0x3FF8CCu;
label_3ff8cc:
    // 0x3ff8cc: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x3ff8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_3ff8d0:
    // 0x3ff8d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ff8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ff8d4:
    // 0x3ff8d4: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x3ff8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_3ff8d8:
    // 0x3ff8d8: 0x3c028fc6  lui         $v0, 0x8FC6
    ctx->pc = 0x3ff8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36806 << 16));
label_3ff8dc:
    // 0x3ff8dc: 0x3442ac30  ori         $v0, $v0, 0xAC30
    ctx->pc = 0x3ff8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44080);
label_3ff8e0:
    // 0x3ff8e0: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_3ff8e4:
    if (ctx->pc == 0x3FF8E4u) {
        ctx->pc = 0x3FF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF8E0u;
        // 0x3ff8e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF8E8u;
        goto label_3ff8e8;
    }
    ctx->pc = 0x3FF8E0u;
    {
        const bool branch_taken_0x3ff8e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FF8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF8E0u;
        // 0x3ff8e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff8e0) {
            ctx->pc = 0x3FF8FCu;
            goto label_3ff8fc;
        }
    }
    ctx->pc = 0x3FF8E8u;
label_3ff8e8:
    // 0x3ff8e8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3ff8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3ff8ec:
    // 0x3ff8ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ff8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ff8f0:
    // 0x3ff8f0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3ff8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_3ff8f4:
    // 0x3ff8f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ff8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ff8f8:
    // 0x3ff8f8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3ff8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3ff8fc:
    // 0x3ff8fc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3ff8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ff900:
    // 0x3ff900: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3ff900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ff904:
    // 0x3ff904: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ff904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ff908:
    // 0x3ff908: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3ff908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ff90c:
    // 0x3ff90c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ff90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ff910:
    // 0x3ff910: 0x3e00008  jr          $ra
label_3ff914:
    if (ctx->pc == 0x3FF914u) {
        ctx->pc = 0x3FF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF910u;
        // 0x3ff914: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FF918u;
        goto label_fallthrough_0x3ff910;
    }
    ctx->pc = 0x3FF910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF910u;
        // 0x3ff914: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ff910:
    ctx->pc = 0x3FF918u;
}
