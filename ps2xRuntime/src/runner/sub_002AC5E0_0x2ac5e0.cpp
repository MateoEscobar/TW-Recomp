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

// Function: sub_002AC5E0
// Address: 0x2ac5e0 - 0x2ac900
void sub_002AC5E0_0x2ac5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC5E0_0x2ac5e0");
#endif

    switch (ctx->pc) {
        case 0x2ac5e0u: goto label_2ac5e0;
        case 0x2ac5e4u: goto label_2ac5e4;
        case 0x2ac5e8u: goto label_2ac5e8;
        case 0x2ac5ecu: goto label_2ac5ec;
        case 0x2ac5f0u: goto label_2ac5f0;
        case 0x2ac5f4u: goto label_2ac5f4;
        case 0x2ac5f8u: goto label_2ac5f8;
        case 0x2ac5fcu: goto label_2ac5fc;
        case 0x2ac600u: goto label_2ac600;
        case 0x2ac604u: goto label_2ac604;
        case 0x2ac608u: goto label_2ac608;
        case 0x2ac60cu: goto label_2ac60c;
        case 0x2ac610u: goto label_2ac610;
        case 0x2ac614u: goto label_2ac614;
        case 0x2ac618u: goto label_2ac618;
        case 0x2ac61cu: goto label_2ac61c;
        case 0x2ac620u: goto label_2ac620;
        case 0x2ac624u: goto label_2ac624;
        case 0x2ac628u: goto label_2ac628;
        case 0x2ac62cu: goto label_2ac62c;
        case 0x2ac630u: goto label_2ac630;
        case 0x2ac634u: goto label_2ac634;
        case 0x2ac638u: goto label_2ac638;
        case 0x2ac63cu: goto label_2ac63c;
        case 0x2ac640u: goto label_2ac640;
        case 0x2ac644u: goto label_2ac644;
        case 0x2ac648u: goto label_2ac648;
        case 0x2ac64cu: goto label_2ac64c;
        case 0x2ac650u: goto label_2ac650;
        case 0x2ac654u: goto label_2ac654;
        case 0x2ac658u: goto label_2ac658;
        case 0x2ac65cu: goto label_2ac65c;
        case 0x2ac660u: goto label_2ac660;
        case 0x2ac664u: goto label_2ac664;
        case 0x2ac668u: goto label_2ac668;
        case 0x2ac66cu: goto label_2ac66c;
        case 0x2ac670u: goto label_2ac670;
        case 0x2ac674u: goto label_2ac674;
        case 0x2ac678u: goto label_2ac678;
        case 0x2ac67cu: goto label_2ac67c;
        case 0x2ac680u: goto label_2ac680;
        case 0x2ac684u: goto label_2ac684;
        case 0x2ac688u: goto label_2ac688;
        case 0x2ac68cu: goto label_2ac68c;
        case 0x2ac690u: goto label_2ac690;
        case 0x2ac694u: goto label_2ac694;
        case 0x2ac698u: goto label_2ac698;
        case 0x2ac69cu: goto label_2ac69c;
        case 0x2ac6a0u: goto label_2ac6a0;
        case 0x2ac6a4u: goto label_2ac6a4;
        case 0x2ac6a8u: goto label_2ac6a8;
        case 0x2ac6acu: goto label_2ac6ac;
        case 0x2ac6b0u: goto label_2ac6b0;
        case 0x2ac6b4u: goto label_2ac6b4;
        case 0x2ac6b8u: goto label_2ac6b8;
        case 0x2ac6bcu: goto label_2ac6bc;
        case 0x2ac6c0u: goto label_2ac6c0;
        case 0x2ac6c4u: goto label_2ac6c4;
        case 0x2ac6c8u: goto label_2ac6c8;
        case 0x2ac6ccu: goto label_2ac6cc;
        case 0x2ac6d0u: goto label_2ac6d0;
        case 0x2ac6d4u: goto label_2ac6d4;
        case 0x2ac6d8u: goto label_2ac6d8;
        case 0x2ac6dcu: goto label_2ac6dc;
        case 0x2ac6e0u: goto label_2ac6e0;
        case 0x2ac6e4u: goto label_2ac6e4;
        case 0x2ac6e8u: goto label_2ac6e8;
        case 0x2ac6ecu: goto label_2ac6ec;
        case 0x2ac6f0u: goto label_2ac6f0;
        case 0x2ac6f4u: goto label_2ac6f4;
        case 0x2ac6f8u: goto label_2ac6f8;
        case 0x2ac6fcu: goto label_2ac6fc;
        case 0x2ac700u: goto label_2ac700;
        case 0x2ac704u: goto label_2ac704;
        case 0x2ac708u: goto label_2ac708;
        case 0x2ac70cu: goto label_2ac70c;
        case 0x2ac710u: goto label_2ac710;
        case 0x2ac714u: goto label_2ac714;
        case 0x2ac718u: goto label_2ac718;
        case 0x2ac71cu: goto label_2ac71c;
        case 0x2ac720u: goto label_2ac720;
        case 0x2ac724u: goto label_2ac724;
        case 0x2ac728u: goto label_2ac728;
        case 0x2ac72cu: goto label_2ac72c;
        case 0x2ac730u: goto label_2ac730;
        case 0x2ac734u: goto label_2ac734;
        case 0x2ac738u: goto label_2ac738;
        case 0x2ac73cu: goto label_2ac73c;
        case 0x2ac740u: goto label_2ac740;
        case 0x2ac744u: goto label_2ac744;
        case 0x2ac748u: goto label_2ac748;
        case 0x2ac74cu: goto label_2ac74c;
        case 0x2ac750u: goto label_2ac750;
        case 0x2ac754u: goto label_2ac754;
        case 0x2ac758u: goto label_2ac758;
        case 0x2ac75cu: goto label_2ac75c;
        case 0x2ac760u: goto label_2ac760;
        case 0x2ac764u: goto label_2ac764;
        case 0x2ac768u: goto label_2ac768;
        case 0x2ac76cu: goto label_2ac76c;
        case 0x2ac770u: goto label_2ac770;
        case 0x2ac774u: goto label_2ac774;
        case 0x2ac778u: goto label_2ac778;
        case 0x2ac77cu: goto label_2ac77c;
        case 0x2ac780u: goto label_2ac780;
        case 0x2ac784u: goto label_2ac784;
        case 0x2ac788u: goto label_2ac788;
        case 0x2ac78cu: goto label_2ac78c;
        case 0x2ac790u: goto label_2ac790;
        case 0x2ac794u: goto label_2ac794;
        case 0x2ac798u: goto label_2ac798;
        case 0x2ac79cu: goto label_2ac79c;
        case 0x2ac7a0u: goto label_2ac7a0;
        case 0x2ac7a4u: goto label_2ac7a4;
        case 0x2ac7a8u: goto label_2ac7a8;
        case 0x2ac7acu: goto label_2ac7ac;
        case 0x2ac7b0u: goto label_2ac7b0;
        case 0x2ac7b4u: goto label_2ac7b4;
        case 0x2ac7b8u: goto label_2ac7b8;
        case 0x2ac7bcu: goto label_2ac7bc;
        case 0x2ac7c0u: goto label_2ac7c0;
        case 0x2ac7c4u: goto label_2ac7c4;
        case 0x2ac7c8u: goto label_2ac7c8;
        case 0x2ac7ccu: goto label_2ac7cc;
        case 0x2ac7d0u: goto label_2ac7d0;
        case 0x2ac7d4u: goto label_2ac7d4;
        case 0x2ac7d8u: goto label_2ac7d8;
        case 0x2ac7dcu: goto label_2ac7dc;
        case 0x2ac7e0u: goto label_2ac7e0;
        case 0x2ac7e4u: goto label_2ac7e4;
        case 0x2ac7e8u: goto label_2ac7e8;
        case 0x2ac7ecu: goto label_2ac7ec;
        case 0x2ac7f0u: goto label_2ac7f0;
        case 0x2ac7f4u: goto label_2ac7f4;
        case 0x2ac7f8u: goto label_2ac7f8;
        case 0x2ac7fcu: goto label_2ac7fc;
        case 0x2ac800u: goto label_2ac800;
        case 0x2ac804u: goto label_2ac804;
        case 0x2ac808u: goto label_2ac808;
        case 0x2ac80cu: goto label_2ac80c;
        case 0x2ac810u: goto label_2ac810;
        case 0x2ac814u: goto label_2ac814;
        case 0x2ac818u: goto label_2ac818;
        case 0x2ac81cu: goto label_2ac81c;
        case 0x2ac820u: goto label_2ac820;
        case 0x2ac824u: goto label_2ac824;
        case 0x2ac828u: goto label_2ac828;
        case 0x2ac82cu: goto label_2ac82c;
        case 0x2ac830u: goto label_2ac830;
        case 0x2ac834u: goto label_2ac834;
        case 0x2ac838u: goto label_2ac838;
        case 0x2ac83cu: goto label_2ac83c;
        case 0x2ac840u: goto label_2ac840;
        case 0x2ac844u: goto label_2ac844;
        case 0x2ac848u: goto label_2ac848;
        case 0x2ac84cu: goto label_2ac84c;
        case 0x2ac850u: goto label_2ac850;
        case 0x2ac854u: goto label_2ac854;
        case 0x2ac858u: goto label_2ac858;
        case 0x2ac85cu: goto label_2ac85c;
        case 0x2ac860u: goto label_2ac860;
        case 0x2ac864u: goto label_2ac864;
        case 0x2ac868u: goto label_2ac868;
        case 0x2ac86cu: goto label_2ac86c;
        case 0x2ac870u: goto label_2ac870;
        case 0x2ac874u: goto label_2ac874;
        case 0x2ac878u: goto label_2ac878;
        case 0x2ac87cu: goto label_2ac87c;
        case 0x2ac880u: goto label_2ac880;
        case 0x2ac884u: goto label_2ac884;
        case 0x2ac888u: goto label_2ac888;
        case 0x2ac88cu: goto label_2ac88c;
        case 0x2ac890u: goto label_2ac890;
        case 0x2ac894u: goto label_2ac894;
        case 0x2ac898u: goto label_2ac898;
        case 0x2ac89cu: goto label_2ac89c;
        case 0x2ac8a0u: goto label_2ac8a0;
        case 0x2ac8a4u: goto label_2ac8a4;
        case 0x2ac8a8u: goto label_2ac8a8;
        case 0x2ac8acu: goto label_2ac8ac;
        case 0x2ac8b0u: goto label_2ac8b0;
        case 0x2ac8b4u: goto label_2ac8b4;
        case 0x2ac8b8u: goto label_2ac8b8;
        case 0x2ac8bcu: goto label_2ac8bc;
        case 0x2ac8c0u: goto label_2ac8c0;
        case 0x2ac8c4u: goto label_2ac8c4;
        case 0x2ac8c8u: goto label_2ac8c8;
        case 0x2ac8ccu: goto label_2ac8cc;
        case 0x2ac8d0u: goto label_2ac8d0;
        case 0x2ac8d4u: goto label_2ac8d4;
        case 0x2ac8d8u: goto label_2ac8d8;
        case 0x2ac8dcu: goto label_2ac8dc;
        case 0x2ac8e0u: goto label_2ac8e0;
        case 0x2ac8e4u: goto label_2ac8e4;
        case 0x2ac8e8u: goto label_2ac8e8;
        case 0x2ac8ecu: goto label_2ac8ec;
        case 0x2ac8f0u: goto label_2ac8f0;
        case 0x2ac8f4u: goto label_2ac8f4;
        case 0x2ac8f8u: goto label_2ac8f8;
        case 0x2ac8fcu: goto label_2ac8fc;
        default: break;
    }

    ctx->pc = 0x2ac5e0u;

label_2ac5e0:
    // 0x2ac5e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ac5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2ac5e4:
    // 0x2ac5e4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2ac5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2ac5e8:
    // 0x2ac5e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2ac5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2ac5ec:
    // 0x2ac5ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ac5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ac5f0:
    // 0x2ac5f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2ac5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2ac5f4:
    // 0x2ac5f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ac5f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ac5f8:
    // 0x2ac5f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ac5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2ac5fc:
    // 0x2ac5fc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2ac5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2ac600:
    // 0x2ac600: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2ac600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_2ac604:
    // 0x2ac604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ac604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ac608:
    // 0x2ac608: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ac608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ac60c:
    // 0x2ac60c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ac60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac610:
    // 0x2ac610: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2ac610u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ac614:
    // 0x2ac614: 0x147400b1  bne         $v1, $s4, . + 4 + (0xB1 << 2)
label_2ac618:
    if (ctx->pc == 0x2AC618u) {
        ctx->pc = 0x2AC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC614u;
        // 0x2ac618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC61Cu;
        goto label_2ac61c;
    }
    ctx->pc = 0x2AC614u;
    {
        const bool branch_taken_0x2ac614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2AC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC614u;
        // 0x2ac618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac614) {
            ctx->pc = 0x2AC8DCu;
            goto label_2ac8dc;
        }
    }
    ctx->pc = 0x2AC61Cu;
label_2ac61c:
    // 0x2ac61c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ac61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ac620:
    // 0x2ac620: 0xc08a096  jal         func_228258
label_2ac624:
    if (ctx->pc == 0x2AC624u) {
        ctx->pc = 0x2AC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC620u;
        // 0x2ac624: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC628u;
        goto label_2ac628;
    }
    ctx->pc = 0x2AC620u;
    SET_GPR_U32(ctx, 31, 0x2AC628u);
    ctx->pc = 0x2AC624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC620u;
    // 0x2ac624: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2AC620u, 0x2AC628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC628u;
label_2ac628:
    // 0x2ac628: 0x10550011  beq         $v0, $s5, . + 4 + (0x11 << 2)
label_2ac62c:
    if (ctx->pc == 0x2AC62Cu) {
        ctx->pc = 0x2AC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC628u;
        // 0x2ac62c: 0x26850070  addiu       $a1, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC630u;
        goto label_2ac630;
    }
    ctx->pc = 0x2AC628u;
    {
        const bool branch_taken_0x2ac628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2AC62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC628u;
        // 0x2ac62c: 0x26850070  addiu       $a1, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac628) {
            ctx->pc = 0x2AC670u;
            goto label_2ac670;
        }
    }
    ctx->pc = 0x2AC630u;
label_2ac630:
    // 0x2ac630: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x2ac630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_2ac634:
    // 0x2ac634: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2ac634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2ac638:
    // 0x2ac638: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2ac638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2ac63c:
    // 0x2ac63c: 0x40f809  jalr        $v0
label_2ac640:
    if (ctx->pc == 0x2AC640u) {
        ctx->pc = 0x2AC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC63Cu;
        // 0x2ac640: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC644u;
        goto label_2ac644;
    }
    ctx->pc = 0x2AC63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AC644u);
        ctx->pc = 0x2AC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC63Cu;
        // 0x2ac640: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC63Cu, 0x2AC644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC644u;
label_2ac644:
    // 0x2ac644: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
label_2ac648:
    if (ctx->pc == 0x2AC648u) {
        ctx->pc = 0x2AC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC644u;
        // 0x2ac648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC64Cu;
        goto label_2ac64c;
    }
    ctx->pc = 0x2AC644u;
    {
        const bool branch_taken_0x2ac644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC644u;
        // 0x2ac648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac644) {
            ctx->pc = 0x2AC8DCu;
            goto label_2ac8dc;
        }
    }
    ctx->pc = 0x2AC64Cu;
label_2ac64c:
    // 0x2ac64c: 0xc08a61a  jal         func_229868
label_2ac650:
    if (ctx->pc == 0x2AC650u) {
        ctx->pc = 0x2AC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC64Cu;
        // 0x2ac650: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC654u;
        goto label_2ac654;
    }
    ctx->pc = 0x2AC64Cu;
    SET_GPR_U32(ctx, 31, 0x2AC654u);
    ctx->pc = 0x2AC650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC64Cu;
    // 0x2ac650: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2AC64Cu, 0x2AC654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC654u;
label_2ac654:
    // 0x2ac654: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ac654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ac658:
    // 0x2ac658: 0x126000a0  beqz        $s3, . + 4 + (0xA0 << 2)
label_2ac65c:
    if (ctx->pc == 0x2AC65Cu) {
        ctx->pc = 0x2AC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC658u;
        // 0x2ac65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC660u;
        goto label_2ac660;
    }
    ctx->pc = 0x2AC658u;
    {
        const bool branch_taken_0x2ac658 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC658u;
        // 0x2ac65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac658) {
            ctx->pc = 0x2AC8DCu;
            goto label_2ac8dc;
        }
    }
    ctx->pc = 0x2AC660u;
label_2ac660:
    // 0x2ac660: 0x826201b0  lb          $v0, 0x1B0($s3)
    ctx->pc = 0x2ac660u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
label_2ac664:
    // 0x2ac664: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2ac664u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2ac668:
    // 0x2ac668: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ac66c:
    if (ctx->pc == 0x2AC66Cu) {
        ctx->pc = 0x2AC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC668u;
        // 0x2ac66c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC670u;
        goto label_2ac670;
    }
    ctx->pc = 0x2AC668u;
    {
        const bool branch_taken_0x2ac668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC668u;
        // 0x2ac66c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac668) {
            ctx->pc = 0x2AC678u;
            goto label_2ac678;
        }
    }
    ctx->pc = 0x2AC670u;
label_2ac670:
    // 0x2ac670: 0x1000009a  b           . + 4 + (0x9A << 2)
label_2ac674:
    if (ctx->pc == 0x2AC674u) {
        ctx->pc = 0x2AC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC670u;
        // 0x2ac674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC678u;
        goto label_2ac678;
    }
    ctx->pc = 0x2AC670u;
    {
        const bool branch_taken_0x2ac670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC670u;
        // 0x2ac674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac670) {
            ctx->pc = 0x2AC8DCu;
            goto label_2ac8dc;
        }
    }
    ctx->pc = 0x2AC678u;
label_2ac678:
    // 0x2ac678: 0x9242003c  lbu         $v0, 0x3C($s2)
    ctx->pc = 0x2ac678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
label_2ac67c:
    // 0x2ac67c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x2ac67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_2ac680:
    // 0x2ac680: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x2ac680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2ac684:
    // 0x2ac684: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ac684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ac688:
    // 0x2ac688: 0x8e650380  lw          $a1, 0x380($s3)
    ctx->pc = 0x2ac688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_2ac68c:
    // 0x2ac68c: 0x24910480  addiu       $s1, $a0, 0x480
    ctx->pc = 0x2ac68cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_2ac690:
    // 0x2ac690: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x2ac690u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2ac694:
    // 0x2ac694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ac698:
    // 0x2ac698: 0xc107908  jal         func_41E420
label_2ac69c:
    if (ctx->pc == 0x2AC69Cu) {
        ctx->pc = 0x2AC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC698u;
        // 0x2ac69c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC6A0u;
        goto label_2ac6a0;
    }
    ctx->pc = 0x2AC698u;
    SET_GPR_U32(ctx, 31, 0x2AC6A0u);
    ctx->pc = 0x2AC69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC698u;
    // 0x2ac69c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2AC698u, 0x2AC6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6A0u;
label_2ac6a0:
    // 0x2ac6a0: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x2ac6a0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2ac6a4:
    // 0x2ac6a4: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
label_2ac6a8:
    if (ctx->pc == 0x2AC6A8u) {
        ctx->pc = 0x2AC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6A4u;
        // 0x2ac6a8: 0x9242003c  lbu         $v0, 0x3C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC6ACu;
        goto label_2ac6ac;
    }
    ctx->pc = 0x2AC6A4u;
    {
        const bool branch_taken_0x2ac6a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac6a4) {
            ctx->pc = 0x2AC6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC6A4u;
            // 0x2ac6a8: 0x9242003c  lbu         $v0, 0x3C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC6E0u;
            goto label_2ac6e0;
        }
    }
    ctx->pc = 0x2AC6ACu;
label_2ac6ac:
    // 0x2ac6ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ac6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ac6b0:
    // 0x2ac6b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ac6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ac6b4:
    // 0x2ac6b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ac6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ac6b8:
    // 0x2ac6b8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ac6b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ac6bc:
    // 0x2ac6bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ac6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ac6c0:
    // 0x2ac6c0: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x2ac6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_2ac6c4:
    // 0x2ac6c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac6c8:
    // 0x2ac6c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac6cc:
    // 0x2ac6cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ac6ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac6d0:
    // 0x2ac6d0: 0xc088178  jal         func_2205E0
label_2ac6d4:
    if (ctx->pc == 0x2AC6D4u) {
        ctx->pc = 0x2AC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6D0u;
        // 0x2ac6d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC6D8u;
        goto label_2ac6d8;
    }
    ctx->pc = 0x2AC6D0u;
    SET_GPR_U32(ctx, 31, 0x2AC6D8u);
    ctx->pc = 0x2AC6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC6D0u;
    // 0x2ac6d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AC6D0u, 0x2AC6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6D8u;
label_2ac6d8:
    // 0x2ac6d8: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2ac6dc:
    if (ctx->pc == 0x2AC6DCu) {
        ctx->pc = 0x2AC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6D8u;
        // 0x2ac6dc: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC6E0u;
        goto label_2ac6e0;
    }
    ctx->pc = 0x2AC6D8u;
    {
        const bool branch_taken_0x2ac6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6D8u;
        // 0x2ac6dc: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac6d8) {
            ctx->pc = 0x2AC8C4u;
            goto label_2ac8c4;
        }
    }
    ctx->pc = 0x2AC6E0u;
label_2ac6e0:
    // 0x2ac6e0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_2ac6e4:
    if (ctx->pc == 0x2AC6E4u) {
        ctx->pc = 0x2AC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6E0u;
        // 0x2ac6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC6E8u;
        goto label_2ac6e8;
    }
    ctx->pc = 0x2AC6E0u;
    {
        const bool branch_taken_0x2ac6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6E0u;
        // 0x2ac6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac6e0) {
            ctx->pc = 0x2AC79Cu;
            goto label_2ac79c;
        }
    }
    ctx->pc = 0x2AC6E8u;
label_2ac6e8:
    // 0x2ac6e8: 0x8e650380  lw          $a1, 0x380($s3)
    ctx->pc = 0x2ac6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_2ac6ec:
    // 0x2ac6ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ac6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ac6f0:
    // 0x2ac6f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2ac6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ac6f4:
    // 0x2ac6f4: 0xc10796c  jal         func_41E5B0
label_2ac6f8:
    if (ctx->pc == 0x2AC6F8u) {
        ctx->pc = 0x2AC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC6F4u;
        // 0x2ac6f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC6FCu;
        goto label_2ac6fc;
    }
    ctx->pc = 0x2AC6F4u;
    SET_GPR_U32(ctx, 31, 0x2AC6FCu);
    ctx->pc = 0x2AC6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC6F4u;
    // 0x2ac6f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2AC6F4u, 0x2AC6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC6FCu;
label_2ac6fc:
    // 0x2ac6fc: 0x9242003b  lbu         $v0, 0x3B($s2)
    ctx->pc = 0x2ac6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 59)));
label_2ac700:
    // 0x2ac700: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ac700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ac704:
    // 0x2ac704: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ac704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ac708:
    // 0x2ac708: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x2ac708u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2ac70c:
    // 0x2ac70c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_2ac710:
    if (ctx->pc == 0x2AC710u) {
        ctx->pc = 0x2AC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC70Cu;
        // 0x2ac710: 0xa242003b  sb          $v0, 0x3B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 59), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC714u;
        goto label_2ac714;
    }
    ctx->pc = 0x2AC70Cu;
    {
        const bool branch_taken_0x2ac70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC70Cu;
        // 0x2ac710: 0xa242003b  sb          $v0, 0x3B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 59), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac70c) {
            ctx->pc = 0x2AC758u;
            goto label_2ac758;
        }
    }
    ctx->pc = 0x2AC714u;
label_2ac714:
    // 0x2ac714: 0x9242003a  lbu         $v0, 0x3A($s2)
    ctx->pc = 0x2ac714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_2ac718:
    // 0x2ac718: 0x1455000f  bne         $v0, $s5, . + 4 + (0xF << 2)
label_2ac71c:
    if (ctx->pc == 0x2AC71Cu) {
        ctx->pc = 0x2AC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC718u;
        // 0x2ac71c: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC720u;
        goto label_2ac720;
    }
    ctx->pc = 0x2AC718u;
    {
        const bool branch_taken_0x2ac718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2AC71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC718u;
        // 0x2ac71c: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac718) {
            ctx->pc = 0x2AC758u;
            goto label_2ac758;
        }
    }
    ctx->pc = 0x2AC720u;
label_2ac720:
    // 0x2ac720: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ac720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ac724:
    // 0x2ac724: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x2ac724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_2ac728:
    // 0x2ac728: 0xc10904c  jal         func_424130
label_2ac72c:
    if (ctx->pc == 0x2AC72Cu) {
        ctx->pc = 0x2AC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC728u;
        // 0x2ac72c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC730u;
        goto label_2ac730;
    }
    ctx->pc = 0x2AC728u;
    SET_GPR_U32(ctx, 31, 0x2AC730u);
    ctx->pc = 0x2AC72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC728u;
    // 0x2ac72c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x2AC728u, 0x2AC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC730u;
label_2ac730:
    // 0x2ac730: 0x14550009  bne         $v0, $s5, . + 4 + (0x9 << 2)
label_2ac734:
    if (ctx->pc == 0x2AC734u) {
        ctx->pc = 0x2AC738u;
        goto label_2ac738;
    }
    ctx->pc = 0x2AC730u;
    {
        const bool branch_taken_0x2ac730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2ac730) {
            ctx->pc = 0x2AC758u;
            goto label_2ac758;
        }
    }
    ctx->pc = 0x2AC738u;
label_2ac738:
    // 0x2ac738: 0xc087502  jal         func_21D408
label_2ac73c:
    if (ctx->pc == 0x2AC73Cu) {
        ctx->pc = 0x2AC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC738u;
        // 0x2ac73c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC740u;
        goto label_2ac740;
    }
    ctx->pc = 0x2AC738u;
    SET_GPR_U32(ctx, 31, 0x2AC740u);
    ctx->pc = 0x2AC73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC738u;
    // 0x2ac73c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AC738u, 0x2AC740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC740u;
label_2ac740:
    // 0x2ac740: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2ac740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2ac744:
    // 0x2ac744: 0xc059856  jal         func_166158
label_2ac748:
    if (ctx->pc == 0x2AC748u) {
        ctx->pc = 0x2AC748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC744u;
        // 0x2ac748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC74Cu;
        goto label_2ac74c;
    }
    ctx->pc = 0x2AC744u;
    SET_GPR_U32(ctx, 31, 0x2AC74Cu);
    ctx->pc = 0x2AC748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC744u;
    // 0x2ac748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x2AC744u, 0x2AC74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC74Cu;
label_2ac74c:
    // 0x2ac74c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x2ac74cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_2ac750:
    // 0x2ac750: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2ac754:
    if (ctx->pc == 0x2AC754u) {
        ctx->pc = 0x2AC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC750u;
        // 0x2ac754: 0xa255003c  sb          $s5, 0x3C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 60), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC758u;
        goto label_2ac758;
    }
    ctx->pc = 0x2AC750u;
    {
        const bool branch_taken_0x2ac750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac750) {
            ctx->pc = 0x2AC754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC750u;
            // 0x2ac754: 0xa255003c  sb          $s5, 0x3C($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 60), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC758u;
            goto label_2ac758;
        }
    }
    ctx->pc = 0x2AC758u;
label_2ac758:
    // 0x2ac758: 0xc0ab2be  jal         func_2ACAF8
label_2ac75c:
    if (ctx->pc == 0x2AC75Cu) {
        ctx->pc = 0x2AC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC758u;
        // 0x2ac75c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC760u;
        goto label_2ac760;
    }
    ctx->pc = 0x2AC758u;
    SET_GPR_U32(ctx, 31, 0x2AC760u);
    ctx->pc = 0x2AC75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC758u;
    // 0x2ac75c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACAF8u, 0x2AC758u, 0x2AC760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC760u;
label_2ac760:
    // 0x2ac760: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
label_2ac764:
    if (ctx->pc == 0x2AC764u) {
        ctx->pc = 0x2AC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC760u;
        // 0x2ac764: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC768u;
        goto label_2ac768;
    }
    ctx->pc = 0x2AC760u;
    {
        const bool branch_taken_0x2ac760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac760) {
            ctx->pc = 0x2AC764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC760u;
            // 0x2ac764: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC804u;
            goto label_2ac804;
        }
    }
    ctx->pc = 0x2AC768u;
label_2ac768:
    // 0x2ac768: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ac768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ac76c:
    // 0x2ac76c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ac76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ac770:
    // 0x2ac770: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ac770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ac774:
    // 0x2ac774: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ac774u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ac778:
    // 0x2ac778: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ac778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ac77c:
    // 0x2ac77c: 0x24050093  addiu       $a1, $zero, 0x93
    ctx->pc = 0x2ac77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_2ac780:
    // 0x2ac780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac784:
    // 0x2ac784: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac788:
    // 0x2ac788: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ac788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac78c:
    // 0x2ac78c: 0xc088178  jal         func_2205E0
label_2ac790:
    if (ctx->pc == 0x2AC790u) {
        ctx->pc = 0x2AC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC78Cu;
        // 0x2ac790: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC794u;
        goto label_2ac794;
    }
    ctx->pc = 0x2AC78Cu;
    SET_GPR_U32(ctx, 31, 0x2AC794u);
    ctx->pc = 0x2AC790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC78Cu;
    // 0x2ac790: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AC78Cu, 0x2AC794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC794u;
label_2ac794:
    // 0x2ac794: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2ac798:
    if (ctx->pc == 0x2AC798u) {
        ctx->pc = 0x2AC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC794u;
        // 0x2ac798: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC79Cu;
        goto label_2ac79c;
    }
    ctx->pc = 0x2AC794u;
    {
        const bool branch_taken_0x2ac794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC794u;
        // 0x2ac798: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac794) {
            ctx->pc = 0x2AC804u;
            goto label_2ac804;
        }
    }
    ctx->pc = 0x2AC79Cu;
label_2ac79c:
    // 0x2ac79c: 0xc087502  jal         func_21D408
label_2ac7a0:
    if (ctx->pc == 0x2AC7A0u) {
        ctx->pc = 0x2AC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC79Cu;
        // 0x2ac7a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC7A4u;
        goto label_2ac7a4;
    }
    ctx->pc = 0x2AC79Cu;
    SET_GPR_U32(ctx, 31, 0x2AC7A4u);
    ctx->pc = 0x2AC7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC79Cu;
    // 0x2ac7a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AC79Cu, 0x2AC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC7A4u;
label_2ac7a4:
    // 0x2ac7a4: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2ac7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2ac7a8:
    // 0x2ac7a8: 0xc059856  jal         func_166158
label_2ac7ac:
    if (ctx->pc == 0x2AC7ACu) {
        ctx->pc = 0x2AC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7A8u;
        // 0x2ac7ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC7B0u;
        goto label_2ac7b0;
    }
    ctx->pc = 0x2AC7A8u;
    SET_GPR_U32(ctx, 31, 0x2AC7B0u);
    ctx->pc = 0x2AC7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC7A8u;
    // 0x2ac7ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x2AC7A8u, 0x2AC7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC7B0u;
label_2ac7b0:
    // 0x2ac7b0: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x2ac7b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_2ac7b4:
    // 0x2ac7b4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_2ac7b8:
    if (ctx->pc == 0x2AC7B8u) {
        ctx->pc = 0x2AC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7B4u;
        // 0x2ac7b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC7BCu;
        goto label_2ac7bc;
    }
    ctx->pc = 0x2AC7B4u;
    {
        const bool branch_taken_0x2ac7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7B4u;
        // 0x2ac7b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac7b4) {
            ctx->pc = 0x2AC8C0u;
            goto label_2ac8c0;
        }
    }
    ctx->pc = 0x2AC7BCu;
label_2ac7bc:
    // 0x2ac7bc: 0x8e650380  lw          $a1, 0x380($s3)
    ctx->pc = 0x2ac7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
label_2ac7c0:
    // 0x2ac7c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ac7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ac7c4:
    // 0x2ac7c4: 0x2407fff6  addiu       $a3, $zero, -0xA
    ctx->pc = 0x2ac7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
label_2ac7c8:
    // 0x2ac7c8: 0xc10796c  jal         func_41E5B0
label_2ac7cc:
    if (ctx->pc == 0x2AC7CCu) {
        ctx->pc = 0x2AC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7C8u;
        // 0x2ac7cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC7D0u;
        goto label_2ac7d0;
    }
    ctx->pc = 0x2AC7C8u;
    SET_GPR_U32(ctx, 31, 0x2AC7D0u);
    ctx->pc = 0x2AC7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC7C8u;
    // 0x2ac7cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2AC7C8u, 0x2AC7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC7D0u;
label_2ac7d0:
    // 0x2ac7d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ac7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ac7d4:
    // 0x2ac7d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ac7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ac7d8:
    // 0x2ac7d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ac7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ac7dc:
    // 0x2ac7dc: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ac7dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ac7e0:
    // 0x2ac7e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ac7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ac7e4:
    // 0x2ac7e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ac7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ac7e8:
    // 0x2ac7e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac7ec:
    // 0x2ac7ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ac7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac7f0:
    // 0x2ac7f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ac7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac7f4:
    // 0x2ac7f4: 0xc088178  jal         func_2205E0
label_2ac7f8:
    if (ctx->pc == 0x2AC7F8u) {
        ctx->pc = 0x2AC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC7F4u;
        // 0x2ac7f8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC7FCu;
        goto label_2ac7fc;
    }
    ctx->pc = 0x2AC7F4u;
    SET_GPR_U32(ctx, 31, 0x2AC7FCu);
    ctx->pc = 0x2AC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC7F4u;
    // 0x2ac7f8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2AC7F4u, 0x2AC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC7FCu;
label_2ac7fc:
    // 0x2ac7fc: 0xa255003d  sb          $s5, 0x3D($s2)
    ctx->pc = 0x2ac7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 61), (uint8_t)GPR_U32(ctx, 21));
label_2ac800:
    // 0x2ac800: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x2ac800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2ac804:
    // 0x2ac804: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
label_2ac808:
    if (ctx->pc == 0x2AC808u) {
        ctx->pc = 0x2AC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC804u;
        // 0x2ac808: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC80Cu;
        goto label_2ac80c;
    }
    ctx->pc = 0x2AC804u;
    {
        const bool branch_taken_0x2ac804 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC804u;
        // 0x2ac808: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac804) {
            ctx->pc = 0x2AC8C0u;
            goto label_2ac8c0;
        }
    }
    ctx->pc = 0x2AC80Cu;
label_2ac80c:
    // 0x2ac80c: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x2ac80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2ac810:
    // 0x2ac810: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2ac810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2ac814:
    // 0x2ac814: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2ac814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_2ac818:
    // 0x2ac818: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2ac818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2ac81c:
    // 0x2ac81c: 0x40f809  jalr        $v0
label_2ac820:
    if (ctx->pc == 0x2AC820u) {
        ctx->pc = 0x2AC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC81Cu;
        // 0x2ac820: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC824u;
        goto label_2ac824;
    }
    ctx->pc = 0x2AC81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AC824u);
        ctx->pc = 0x2AC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC81Cu;
        // 0x2ac820: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC81Cu, 0x2AC824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC824u;
label_2ac824:
    // 0x2ac824: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2ac828:
    if (ctx->pc == 0x2AC828u) {
        ctx->pc = 0x2AC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC824u;
        // 0x2ac828: 0x8e502b04  lw          $s0, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC82Cu;
        goto label_2ac82c;
    }
    ctx->pc = 0x2AC824u;
    {
        const bool branch_taken_0x2ac824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC824u;
        // 0x2ac828: 0x8e502b04  lw          $s0, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac824) {
            ctx->pc = 0x2AC8C0u;
            goto label_2ac8c0;
        }
    }
    ctx->pc = 0x2AC82Cu;
label_2ac82c:
    // 0x2ac82c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2ac82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ac830:
    // 0x2ac830: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2ac830u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac834:
    // 0x2ac834: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ac834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ac838:
    // 0x2ac838: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x2ac838u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_2ac83c:
    // 0x2ac83c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ac83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ac840:
    // 0x2ac840: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x2ac840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2ac844:
    // 0x2ac844: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2ac844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2ac848:
    // 0x2ac848: 0x40f809  jalr        $v0
label_2ac84c:
    if (ctx->pc == 0x2AC84Cu) {
        ctx->pc = 0x2AC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC848u;
        // 0x2ac84c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC850u;
        goto label_2ac850;
    }
    ctx->pc = 0x2AC848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AC850u);
        ctx->pc = 0x2AC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC848u;
        // 0x2ac84c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC848u, 0x2AC850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC850u;
label_2ac850:
    // 0x2ac850: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2ac850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2ac854:
    // 0x2ac854: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ac854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ac858:
    // 0x2ac858: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ac858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ac85c:
    // 0x2ac85c: 0x40f809  jalr        $v0
label_2ac860:
    if (ctx->pc == 0x2AC860u) {
        ctx->pc = 0x2AC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC85Cu;
        // 0x2ac860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC864u;
        goto label_2ac864;
    }
    ctx->pc = 0x2AC85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AC864u);
        ctx->pc = 0x2AC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC85Cu;
        // 0x2ac860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC85Cu, 0x2AC864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC864u;
label_2ac864:
    // 0x2ac864: 0x8e502b04  lw          $s0, 0x2B04($s2)
    ctx->pc = 0x2ac864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2ac868:
    // 0x2ac868: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ac868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ac86c:
    // 0x2ac86c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2ac86cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ac870:
    // 0x2ac870: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ac870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ac874:
    // 0x2ac874: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x2ac874u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_2ac878:
    // 0x2ac878: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ac878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ac87c:
    // 0x2ac87c: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x2ac87cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2ac880:
    // 0x2ac880: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x2ac880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2ac884:
    // 0x2ac884: 0x40f809  jalr        $v0
label_2ac888:
    if (ctx->pc == 0x2AC888u) {
        ctx->pc = 0x2AC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC884u;
        // 0x2ac888: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC88Cu;
        goto label_2ac88c;
    }
    ctx->pc = 0x2AC884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AC88Cu);
        ctx->pc = 0x2AC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC884u;
        // 0x2ac888: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC884u, 0x2AC88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC88Cu;
label_2ac88c:
    // 0x2ac88c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2ac88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2ac890:
    // 0x2ac890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ac890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ac894:
    // 0x2ac894: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ac894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ac898:
    // 0x2ac898: 0x40f809  jalr        $v0
label_2ac89c:
    if (ctx->pc == 0x2AC89Cu) {
        ctx->pc = 0x2AC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC898u;
        // 0x2ac89c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC8A0u;
        goto label_2ac8a0;
    }
    ctx->pc = 0x2AC898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AC8A0u);
        ctx->pc = 0x2AC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC898u;
        // 0x2ac89c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC898u, 0x2AC8A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC8A0u;
label_2ac8a0:
    // 0x2ac8a0: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x2ac8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_2ac8a4:
    // 0x2ac8a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ac8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ac8a8:
    // 0x2ac8a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ac8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac8ac:
    // 0x2ac8ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ac8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2ac8b0:
    // 0x2ac8b0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2ac8b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_2ac8b4:
    // 0x2ac8b4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x2ac8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_2ac8b8:
    // 0x2ac8b8: 0x60f809  jalr        $v1
label_2ac8bc:
    if (ctx->pc == 0x2AC8BCu) {
        ctx->pc = 0x2AC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC8B8u;
        // 0x2ac8bc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC8C0u;
        goto label_2ac8c0;
    }
    ctx->pc = 0x2AC8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AC8C0u);
        ctx->pc = 0x2AC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC8B8u;
        // 0x2ac8bc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC8B8u, 0x2AC8C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC8C0u;
label_2ac8c0:
    // 0x2ac8c0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2ac8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ac8c4:
    // 0x2ac8c4: 0xa28001b2  sb          $zero, 0x1B2($s4)
    ctx->pc = 0x2ac8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 434), (uint8_t)GPR_U32(ctx, 0));
label_2ac8c8:
    // 0x2ac8c8: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x2ac8c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_2ac8cc:
    // 0x2ac8cc: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x2ac8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_2ac8d0:
    // 0x2ac8d0: 0x60f809  jalr        $v1
label_2ac8d4:
    if (ctx->pc == 0x2AC8D4u) {
        ctx->pc = 0x2AC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC8D0u;
        // 0x2ac8d4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC8D8u;
        goto label_2ac8d8;
    }
    ctx->pc = 0x2AC8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AC8D8u);
        ctx->pc = 0x2AC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC8D0u;
        // 0x2ac8d4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC8D0u, 0x2AC8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AC8D8u;
label_2ac8d8:
    // 0x2ac8d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ac8dc:
    // 0x2ac8dc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2ac8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ac8e0:
    // 0x2ac8e0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2ac8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ac8e4:
    // 0x2ac8e4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2ac8e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ac8e8:
    // 0x2ac8e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ac8e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ac8ec:
    // 0x2ac8ec: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2ac8ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ac8f0:
    // 0x2ac8f0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2ac8f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ac8f4:
    // 0x2ac8f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ac8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ac8f8:
    // 0x2ac8f8: 0x3e00008  jr          $ra
label_2ac8fc:
    if (ctx->pc == 0x2AC8FCu) {
        ctx->pc = 0x2AC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC8F8u;
        // 0x2ac8fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AC900u;
        goto label_fallthrough_0x2ac8f8;
    }
    ctx->pc = 0x2AC8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC8F8u;
        // 0x2ac8fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ac8f8:
    ctx->pc = 0x2AC900u;
}
