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

// Function: sub_003D95C8
// Address: 0x3d95c8 - 0x3d9690
void sub_003D95C8_0x3d95c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D95C8_0x3d95c8");
#endif

    switch (ctx->pc) {
        case 0x3d95c8u: goto label_3d95c8;
        case 0x3d95ccu: goto label_3d95cc;
        case 0x3d95d0u: goto label_3d95d0;
        case 0x3d95d4u: goto label_3d95d4;
        case 0x3d95d8u: goto label_3d95d8;
        case 0x3d95dcu: goto label_3d95dc;
        case 0x3d95e0u: goto label_3d95e0;
        case 0x3d95e4u: goto label_3d95e4;
        case 0x3d95e8u: goto label_3d95e8;
        case 0x3d95ecu: goto label_3d95ec;
        case 0x3d95f0u: goto label_3d95f0;
        case 0x3d95f4u: goto label_3d95f4;
        case 0x3d95f8u: goto label_3d95f8;
        case 0x3d95fcu: goto label_3d95fc;
        case 0x3d9600u: goto label_3d9600;
        case 0x3d9604u: goto label_3d9604;
        case 0x3d9608u: goto label_3d9608;
        case 0x3d960cu: goto label_3d960c;
        case 0x3d9610u: goto label_3d9610;
        case 0x3d9614u: goto label_3d9614;
        case 0x3d9618u: goto label_3d9618;
        case 0x3d961cu: goto label_3d961c;
        case 0x3d9620u: goto label_3d9620;
        case 0x3d9624u: goto label_3d9624;
        case 0x3d9628u: goto label_3d9628;
        case 0x3d962cu: goto label_3d962c;
        case 0x3d9630u: goto label_3d9630;
        case 0x3d9634u: goto label_3d9634;
        case 0x3d9638u: goto label_3d9638;
        case 0x3d963cu: goto label_3d963c;
        case 0x3d9640u: goto label_3d9640;
        case 0x3d9644u: goto label_3d9644;
        case 0x3d9648u: goto label_3d9648;
        case 0x3d964cu: goto label_3d964c;
        case 0x3d9650u: goto label_3d9650;
        case 0x3d9654u: goto label_3d9654;
        case 0x3d9658u: goto label_3d9658;
        case 0x3d965cu: goto label_3d965c;
        case 0x3d9660u: goto label_3d9660;
        case 0x3d9664u: goto label_3d9664;
        case 0x3d9668u: goto label_3d9668;
        case 0x3d966cu: goto label_3d966c;
        case 0x3d9670u: goto label_3d9670;
        case 0x3d9674u: goto label_3d9674;
        case 0x3d9678u: goto label_3d9678;
        case 0x3d967cu: goto label_3d967c;
        case 0x3d9680u: goto label_3d9680;
        case 0x3d9684u: goto label_3d9684;
        case 0x3d9688u: goto label_3d9688;
        case 0x3d968cu: goto label_3d968c;
        default: break;
    }

    ctx->pc = 0x3d95c8u;

label_3d95c8:
    // 0x3d95c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d95c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d95cc:
    // 0x3d95cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3d95ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3d95d0:
    // 0x3d95d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d95d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d95d4:
    // 0x3d95d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3d95d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d95d8:
    // 0x3d95d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3d95d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3d95dc:
    // 0x3d95dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d95dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d95e0:
    // 0x3d95e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d95e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d95e4:
    // 0x3d95e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d95e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d95e8:
    // 0x3d95e8: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3d95e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d95ec:
    // 0x3d95ec: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d95f0:
    // 0x3d95f0: 0x40f809  jalr        $v0
label_3d95f4:
    if (ctx->pc == 0x3D95F4u) {
        ctx->pc = 0x3D95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95F0u;
        // 0x3d95f4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D95F8u;
        goto label_3d95f8;
    }
    ctx->pc = 0x3D95F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D95F8u);
        ctx->pc = 0x3D95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95F0u;
        // 0x3d95f4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D95F0u, 0x3D95F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D95F8u;
label_3d95f8:
    // 0x3d95f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d95f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d95fc:
    // 0x3d95fc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3d95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3d9600:
    // 0x3d9600: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_3d9604:
    if (ctx->pc == 0x3D9604u) {
        ctx->pc = 0x3D9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9600u;
        // 0x3d9604: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9608u;
        goto label_3d9608;
    }
    ctx->pc = 0x3D9600u;
    {
        const bool branch_taken_0x3d9600 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D9604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9600u;
        // 0x3d9604: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9600) {
            ctx->pc = 0x3D9618u;
            goto label_3d9618;
        }
    }
    ctx->pc = 0x3D9608u;
label_3d9608:
    // 0x3d9608: 0x52220010  beql        $s1, $v0, . + 4 + (0x10 << 2)
label_3d960c:
    if (ctx->pc == 0x3D960Cu) {
        ctx->pc = 0x3D960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9608u;
        // 0x3d960c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9610u;
        goto label_3d9610;
    }
    ctx->pc = 0x3D9608u;
    {
        const bool branch_taken_0x3d9608 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d9608) {
            ctx->pc = 0x3D960Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9608u;
            // 0x3d960c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D964Cu;
            goto label_3d964c;
        }
    }
    ctx->pc = 0x3D9610u;
label_3d9610:
    // 0x3d9610: 0x10000019  b           . + 4 + (0x19 << 2)
label_3d9614:
    if (ctx->pc == 0x3D9614u) {
        ctx->pc = 0x3D9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9610u;
        // 0x3d9614: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9618u;
        goto label_3d9618;
    }
    ctx->pc = 0x3D9610u;
    {
        const bool branch_taken_0x3d9610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9610u;
        // 0x3d9614: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9610) {
            ctx->pc = 0x3D9678u;
            goto label_3d9678;
        }
    }
    ctx->pc = 0x3D9618u;
label_3d9618:
    // 0x3d9618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d961c:
    // 0x3d961c: 0xc0ea16a  jal         func_3A85A8
label_3d9620:
    if (ctx->pc == 0x3D9620u) {
        ctx->pc = 0x3D9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D961Cu;
        // 0x3d9620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9624u;
        goto label_3d9624;
    }
    ctx->pc = 0x3D961Cu;
    SET_GPR_U32(ctx, 31, 0x3D9624u);
    ctx->pc = 0x3D9620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D961Cu;
    // 0x3d9620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D961Cu, 0x3D9624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9624u;
label_3d9624:
    // 0x3d9624: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x3d9624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d9628:
    // 0x3d9628: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d9628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d962c:
    // 0x3d962c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d962cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d9630:
    // 0x3d9630: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d9630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d9634:
    // 0x3d9634: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d9634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d9638:
    // 0x3d9638: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d9638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d963c:
    // 0x3d963c: 0x60f809  jalr        $v1
label_3d9640:
    if (ctx->pc == 0x3D9640u) {
        ctx->pc = 0x3D9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D963Cu;
        // 0x3d9640: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9644u;
        goto label_3d9644;
    }
    ctx->pc = 0x3D963Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D9644u);
        ctx->pc = 0x3D9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D963Cu;
        // 0x3d9640: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D963Cu, 0x3D9644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9644u;
label_3d9644:
    // 0x3d9644: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d9648:
    if (ctx->pc == 0x3D9648u) {
        ctx->pc = 0x3D9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9644u;
        // 0x3d9648: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D964Cu;
        goto label_3d964c;
    }
    ctx->pc = 0x3D9644u;
    {
        const bool branch_taken_0x3d9644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9644u;
        // 0x3d9648: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9644) {
            ctx->pc = 0x3D9678u;
            goto label_3d9678;
        }
    }
    ctx->pc = 0x3D964Cu;
label_3d964c:
    // 0x3d964c: 0xc0ea16a  jal         func_3A85A8
label_3d9650:
    if (ctx->pc == 0x3D9650u) {
        ctx->pc = 0x3D9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D964Cu;
        // 0x3d9650: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9654u;
        goto label_3d9654;
    }
    ctx->pc = 0x3D964Cu;
    SET_GPR_U32(ctx, 31, 0x3D9654u);
    ctx->pc = 0x3D9650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D964Cu;
    // 0x3d9650: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D964Cu, 0x3D9654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9654u;
label_3d9654:
    // 0x3d9654: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x3d9654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d9658:
    // 0x3d9658: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3d9658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d965c:
    // 0x3d965c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3d965cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d9660:
    // 0x3d9660: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d9660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d9664:
    // 0x3d9664: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d9664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d9668:
    // 0x3d9668: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d9668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d966c:
    // 0x3d966c: 0x60f809  jalr        $v1
label_3d9670:
    if (ctx->pc == 0x3D9670u) {
        ctx->pc = 0x3D9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D966Cu;
        // 0x3d9670: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9674u;
        goto label_3d9674;
    }
    ctx->pc = 0x3D966Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D9674u);
        ctx->pc = 0x3D9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D966Cu;
        // 0x3d9670: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D966Cu, 0x3D9674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9674u;
label_3d9674:
    // 0x3d9674: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3d9674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d9678:
    // 0x3d9678: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d9678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d967c:
    // 0x3d967c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3d967cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9680:
    // 0x3d9680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9684:
    // 0x3d9684: 0x3e00008  jr          $ra
label_3d9688:
    if (ctx->pc == 0x3D9688u) {
        ctx->pc = 0x3D9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9684u;
        // 0x3d9688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D968Cu;
        goto label_3d968c;
    }
    ctx->pc = 0x3D9684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9684u;
        // 0x3d9688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D968Cu;
label_3d968c:
    // 0x3d968c: 0x0  nop
    ctx->pc = 0x3d968cu;
    // NOP
    ctx->pc = 0x3d9690u;
}
