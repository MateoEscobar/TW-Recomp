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

// Function: sub_001965D8
// Address: 0x1965d8 - 0x196730
void sub_001965D8_0x1965d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001965D8_0x1965d8");
#endif

    switch (ctx->pc) {
        case 0x1965d8u: goto label_1965d8;
        case 0x1965dcu: goto label_1965dc;
        case 0x1965e0u: goto label_1965e0;
        case 0x1965e4u: goto label_1965e4;
        case 0x1965e8u: goto label_1965e8;
        case 0x1965ecu: goto label_1965ec;
        case 0x1965f0u: goto label_1965f0;
        case 0x1965f4u: goto label_1965f4;
        case 0x1965f8u: goto label_1965f8;
        case 0x1965fcu: goto label_1965fc;
        case 0x196600u: goto label_196600;
        case 0x196604u: goto label_196604;
        case 0x196608u: goto label_196608;
        case 0x19660cu: goto label_19660c;
        case 0x196610u: goto label_196610;
        case 0x196614u: goto label_196614;
        case 0x196618u: goto label_196618;
        case 0x19661cu: goto label_19661c;
        case 0x196620u: goto label_196620;
        case 0x196624u: goto label_196624;
        case 0x196628u: goto label_196628;
        case 0x19662cu: goto label_19662c;
        case 0x196630u: goto label_196630;
        case 0x196634u: goto label_196634;
        case 0x196638u: goto label_196638;
        case 0x19663cu: goto label_19663c;
        case 0x196640u: goto label_196640;
        case 0x196644u: goto label_196644;
        case 0x196648u: goto label_196648;
        case 0x19664cu: goto label_19664c;
        case 0x196650u: goto label_196650;
        case 0x196654u: goto label_196654;
        case 0x196658u: goto label_196658;
        case 0x19665cu: goto label_19665c;
        case 0x196660u: goto label_196660;
        case 0x196664u: goto label_196664;
        case 0x196668u: goto label_196668;
        case 0x19666cu: goto label_19666c;
        case 0x196670u: goto label_196670;
        case 0x196674u: goto label_196674;
        case 0x196678u: goto label_196678;
        case 0x19667cu: goto label_19667c;
        case 0x196680u: goto label_196680;
        case 0x196684u: goto label_196684;
        case 0x196688u: goto label_196688;
        case 0x19668cu: goto label_19668c;
        case 0x196690u: goto label_196690;
        case 0x196694u: goto label_196694;
        case 0x196698u: goto label_196698;
        case 0x19669cu: goto label_19669c;
        case 0x1966a0u: goto label_1966a0;
        case 0x1966a4u: goto label_1966a4;
        case 0x1966a8u: goto label_1966a8;
        case 0x1966acu: goto label_1966ac;
        case 0x1966b0u: goto label_1966b0;
        case 0x1966b4u: goto label_1966b4;
        case 0x1966b8u: goto label_1966b8;
        case 0x1966bcu: goto label_1966bc;
        case 0x1966c0u: goto label_1966c0;
        case 0x1966c4u: goto label_1966c4;
        case 0x1966c8u: goto label_1966c8;
        case 0x1966ccu: goto label_1966cc;
        case 0x1966d0u: goto label_1966d0;
        case 0x1966d4u: goto label_1966d4;
        case 0x1966d8u: goto label_1966d8;
        case 0x1966dcu: goto label_1966dc;
        case 0x1966e0u: goto label_1966e0;
        case 0x1966e4u: goto label_1966e4;
        case 0x1966e8u: goto label_1966e8;
        case 0x1966ecu: goto label_1966ec;
        case 0x1966f0u: goto label_1966f0;
        case 0x1966f4u: goto label_1966f4;
        case 0x1966f8u: goto label_1966f8;
        case 0x1966fcu: goto label_1966fc;
        case 0x196700u: goto label_196700;
        case 0x196704u: goto label_196704;
        case 0x196708u: goto label_196708;
        case 0x19670cu: goto label_19670c;
        case 0x196710u: goto label_196710;
        case 0x196714u: goto label_196714;
        case 0x196718u: goto label_196718;
        case 0x19671cu: goto label_19671c;
        case 0x196720u: goto label_196720;
        case 0x196724u: goto label_196724;
        case 0x196728u: goto label_196728;
        case 0x19672cu: goto label_19672c;
        default: break;
    }

    ctx->pc = 0x1965d8u;

label_1965d8:
    // 0x1965d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1965d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1965dc:
    // 0x1965dc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1965dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1965e0:
    // 0x1965e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1965e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1965e4:
    // 0x1965e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1965e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1965e8:
    // 0x1965e8: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x1965e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_1965ec:
    // 0x1965ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1965ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1965f0:
    // 0x1965f0: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x1965f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_1965f4:
    // 0x1965f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1965f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1965f8:
    // 0x1965f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1965f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1965fc:
    // 0x1965fc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1965fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_196600:
    // 0x196600: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x196600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196604:
    // 0x196604: 0x40f809  jalr        $v0
label_196608:
    if (ctx->pc == 0x196608u) {
        ctx->pc = 0x196608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196604u;
        // 0x196608: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19660Cu;
        goto label_19660c;
    }
    ctx->pc = 0x196604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19660Cu);
        ctx->pc = 0x196608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196604u;
        // 0x196608: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196604u, 0x19660Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19660Cu;
label_19660c:
    // 0x19660c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196610:
    // 0x196610: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x196610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_196614:
    // 0x196614: 0x40f809  jalr        $v0
label_196618:
    if (ctx->pc == 0x196618u) {
        ctx->pc = 0x196618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196614u;
        // 0x196618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19661Cu;
        goto label_19661c;
    }
    ctx->pc = 0x196614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19661Cu);
        ctx->pc = 0x196618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196614u;
        // 0x196618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196614u, 0x19661Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19661Cu;
label_19661c:
    // 0x19661c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196620:
    // 0x196620: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x196620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_196624:
    // 0x196624: 0x40f809  jalr        $v0
label_196628:
    if (ctx->pc == 0x196628u) {
        ctx->pc = 0x196628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196624u;
        // 0x196628: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19662Cu;
        goto label_19662c;
    }
    ctx->pc = 0x196624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19662Cu);
        ctx->pc = 0x196628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196624u;
        // 0x196628: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196624u, 0x19662Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19662Cu;
label_19662c:
    // 0x19662c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196630:
    // 0x196630: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x196630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_196634:
    // 0x196634: 0x40f809  jalr        $v0
label_196638:
    if (ctx->pc == 0x196638u) {
        ctx->pc = 0x196638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196634u;
        // 0x196638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19663Cu;
        goto label_19663c;
    }
    ctx->pc = 0x196634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19663Cu);
        ctx->pc = 0x196638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196634u;
        // 0x196638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196634u, 0x19663Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19663Cu;
label_19663c:
    // 0x19663c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196640:
    // 0x196640: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x196640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_196644:
    // 0x196644: 0x40f809  jalr        $v0
label_196648:
    if (ctx->pc == 0x196648u) {
        ctx->pc = 0x196648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196644u;
        // 0x196648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19664Cu;
        goto label_19664c;
    }
    ctx->pc = 0x196644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19664Cu);
        ctx->pc = 0x196648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196644u;
        // 0x196648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196644u, 0x19664Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19664Cu;
label_19664c:
    // 0x19664c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196650:
    // 0x196650: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x196650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_196654:
    // 0x196654: 0x40f809  jalr        $v0
label_196658:
    if (ctx->pc == 0x196658u) {
        ctx->pc = 0x196658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196654u;
        // 0x196658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19665Cu;
        goto label_19665c;
    }
    ctx->pc = 0x196654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19665Cu);
        ctx->pc = 0x196658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196654u;
        // 0x196658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196654u, 0x19665Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19665Cu;
label_19665c:
    // 0x19665c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196660:
    // 0x196660: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x196660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_196664:
    // 0x196664: 0x40f809  jalr        $v0
label_196668:
    if (ctx->pc == 0x196668u) {
        ctx->pc = 0x196668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196664u;
        // 0x196668: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19666Cu;
        goto label_19666c;
    }
    ctx->pc = 0x196664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19666Cu);
        ctx->pc = 0x196668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196664u;
        // 0x196668: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196664u, 0x19666Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19666Cu;
label_19666c:
    // 0x19666c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196670:
    // 0x196670: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x196670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_196674:
    // 0x196674: 0x40f809  jalr        $v0
label_196678:
    if (ctx->pc == 0x196678u) {
        ctx->pc = 0x196678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196674u;
        // 0x196678: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19667Cu;
        goto label_19667c;
    }
    ctx->pc = 0x196674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19667Cu);
        ctx->pc = 0x196678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196674u;
        // 0x196678: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196674u, 0x19667Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19667Cu;
label_19667c:
    // 0x19667c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196680:
    // 0x196680: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x196680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_196684:
    // 0x196684: 0x40f809  jalr        $v0
label_196688:
    if (ctx->pc == 0x196688u) {
        ctx->pc = 0x196688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196684u;
        // 0x196688: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19668Cu;
        goto label_19668c;
    }
    ctx->pc = 0x196684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19668Cu);
        ctx->pc = 0x196688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196684u;
        // 0x196688: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196684u, 0x19668Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19668Cu;
label_19668c:
    // 0x19668c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_196690:
    // 0x196690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196694:
    // 0x196694: 0x40f809  jalr        $v0
label_196698:
    if (ctx->pc == 0x196698u) {
        ctx->pc = 0x196698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196694u;
        // 0x196698: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19669Cu;
        goto label_19669c;
    }
    ctx->pc = 0x196694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19669Cu);
        ctx->pc = 0x196698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196694u;
        // 0x196698: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196694u, 0x19669Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19669Cu;
label_19669c:
    // 0x19669c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19669cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1966a0:
    // 0x1966a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1966a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1966a4:
    // 0x1966a4: 0x8c46ce88  lw          $a2, -0x3178($v0)
    ctx->pc = 0x1966a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954632)));
label_1966a8:
    // 0x1966a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1966a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1966ac:
    // 0x1966ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1966acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1966b0:
    // 0x1966b0: 0x40f809  jalr        $v0
label_1966b4:
    if (ctx->pc == 0x1966B4u) {
        ctx->pc = 0x1966B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B0u;
        // 0x1966b4: 0x8c65ce8c  lw          $a1, -0x3174($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966B8u;
        goto label_1966b8;
    }
    ctx->pc = 0x1966B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1966B8u);
        ctx->pc = 0x1966B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966B0u;
        // 0x1966b4: 0x8c65ce8c  lw          $a1, -0x3174($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954636)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966B0u, 0x1966B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1966B8u;
label_1966b8:
    // 0x1966b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1966b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1966bc:
    // 0x1966bc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1966bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1966c0:
    // 0x1966c0: 0x40f809  jalr        $v0
label_1966c4:
    if (ctx->pc == 0x1966C4u) {
        ctx->pc = 0x1966C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966C0u;
        // 0x1966c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966C8u;
        goto label_1966c8;
    }
    ctx->pc = 0x1966C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1966C8u);
        ctx->pc = 0x1966C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966C0u;
        // 0x1966c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966C0u, 0x1966C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1966C8u;
label_1966c8:
    // 0x1966c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1966c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1966cc:
    // 0x1966cc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1966d0:
    // 0x1966d0: 0x40f809  jalr        $v0
label_1966d4:
    if (ctx->pc == 0x1966D4u) {
        ctx->pc = 0x1966D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966D0u;
        // 0x1966d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966D8u;
        goto label_1966d8;
    }
    ctx->pc = 0x1966D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1966D8u);
        ctx->pc = 0x1966D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966D0u;
        // 0x1966d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966D0u, 0x1966D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1966D8u;
label_1966d8:
    // 0x1966d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1966d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1966dc:
    // 0x1966dc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1966dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1966e0:
    // 0x1966e0: 0x40f809  jalr        $v0
label_1966e4:
    if (ctx->pc == 0x1966E4u) {
        ctx->pc = 0x1966E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966E0u;
        // 0x1966e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966E8u;
        goto label_1966e8;
    }
    ctx->pc = 0x1966E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1966E8u);
        ctx->pc = 0x1966E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966E0u;
        // 0x1966e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966E0u, 0x1966E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1966E8u;
label_1966e8:
    // 0x1966e8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1966e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1966ec:
    // 0x1966ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1966ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1966f0:
    // 0x1966f0: 0x40f809  jalr        $v0
label_1966f4:
    if (ctx->pc == 0x1966F4u) {
        ctx->pc = 0x1966F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966F0u;
        // 0x1966f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1966F8u;
        goto label_1966f8;
    }
    ctx->pc = 0x1966F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1966F8u);
        ctx->pc = 0x1966F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1966F0u;
        // 0x1966f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1966F0u, 0x1966F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1966F8u;
label_1966f8:
    // 0x1966f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1966f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1966fc:
    // 0x1966fc: 0x8c66ce90  lw          $a2, -0x3170($v1)
    ctx->pc = 0x1966fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954640)));
label_196700:
    // 0x196700: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x196700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_196704:
    // 0x196704: 0x84a40068  lh          $a0, 0x68($a1)
    ctx->pc = 0x196704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 104)));
label_196708:
    // 0x196708: 0x8ca2006c  lw          $v0, 0x6C($a1)
    ctx->pc = 0x196708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
label_19670c:
    // 0x19670c: 0x40f809  jalr        $v0
label_196710:
    if (ctx->pc == 0x196710u) {
        ctx->pc = 0x196710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19670Cu;
        // 0x196710: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196714u;
        goto label_196714;
    }
    ctx->pc = 0x19670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196714u);
        ctx->pc = 0x196710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19670Cu;
        // 0x196710: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19670Cu, 0x196714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196714u;
label_196714:
    // 0x196714: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x196714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196718:
    // 0x196718: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x196718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19671c:
    // 0x19671c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19671cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196720:
    // 0x196720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196724:
    // 0x196724: 0x3e00008  jr          $ra
label_196728:
    if (ctx->pc == 0x196728u) {
        ctx->pc = 0x196728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196724u;
        // 0x196728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19672Cu;
        goto label_19672c;
    }
    ctx->pc = 0x196724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196724u;
        // 0x196728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19672Cu;
label_19672c:
    // 0x19672c: 0x0  nop
    ctx->pc = 0x19672cu;
    // NOP
    ctx->pc = 0x196730u;
}
