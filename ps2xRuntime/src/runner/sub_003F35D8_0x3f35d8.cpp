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

// Function: sub_003F35D8
// Address: 0x3f35d8 - 0x3f36a0
void sub_003F35D8_0x3f35d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F35D8_0x3f35d8");
#endif

    switch (ctx->pc) {
        case 0x3f35d8u: goto label_3f35d8;
        case 0x3f35dcu: goto label_3f35dc;
        case 0x3f35e0u: goto label_3f35e0;
        case 0x3f35e4u: goto label_3f35e4;
        case 0x3f35e8u: goto label_3f35e8;
        case 0x3f35ecu: goto label_3f35ec;
        case 0x3f35f0u: goto label_3f35f0;
        case 0x3f35f4u: goto label_3f35f4;
        case 0x3f35f8u: goto label_3f35f8;
        case 0x3f35fcu: goto label_3f35fc;
        case 0x3f3600u: goto label_3f3600;
        case 0x3f3604u: goto label_3f3604;
        case 0x3f3608u: goto label_3f3608;
        case 0x3f360cu: goto label_3f360c;
        case 0x3f3610u: goto label_3f3610;
        case 0x3f3614u: goto label_3f3614;
        case 0x3f3618u: goto label_3f3618;
        case 0x3f361cu: goto label_3f361c;
        case 0x3f3620u: goto label_3f3620;
        case 0x3f3624u: goto label_3f3624;
        case 0x3f3628u: goto label_3f3628;
        case 0x3f362cu: goto label_3f362c;
        case 0x3f3630u: goto label_3f3630;
        case 0x3f3634u: goto label_3f3634;
        case 0x3f3638u: goto label_3f3638;
        case 0x3f363cu: goto label_3f363c;
        case 0x3f3640u: goto label_3f3640;
        case 0x3f3644u: goto label_3f3644;
        case 0x3f3648u: goto label_3f3648;
        case 0x3f364cu: goto label_3f364c;
        case 0x3f3650u: goto label_3f3650;
        case 0x3f3654u: goto label_3f3654;
        case 0x3f3658u: goto label_3f3658;
        case 0x3f365cu: goto label_3f365c;
        case 0x3f3660u: goto label_3f3660;
        case 0x3f3664u: goto label_3f3664;
        case 0x3f3668u: goto label_3f3668;
        case 0x3f366cu: goto label_3f366c;
        case 0x3f3670u: goto label_3f3670;
        case 0x3f3674u: goto label_3f3674;
        case 0x3f3678u: goto label_3f3678;
        case 0x3f367cu: goto label_3f367c;
        case 0x3f3680u: goto label_3f3680;
        case 0x3f3684u: goto label_3f3684;
        case 0x3f3688u: goto label_3f3688;
        case 0x3f368cu: goto label_3f368c;
        case 0x3f3690u: goto label_3f3690;
        case 0x3f3694u: goto label_3f3694;
        case 0x3f3698u: goto label_3f3698;
        case 0x3f369cu: goto label_3f369c;
        default: break;
    }

    ctx->pc = 0x3f35d8u;

label_3f35d8:
    // 0x3f35d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f35d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f35dc:
    // 0x3f35dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f35dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3f35e0:
    // 0x3f35e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f35e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f35e4:
    // 0x3f35e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f35e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f35e8:
    // 0x3f35e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f35e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3f35ec:
    // 0x3f35ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f35ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f35f0:
    // 0x3f35f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f35f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f35f4:
    // 0x3f35f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f35f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f35f8:
    // 0x3f35f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f35f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f35fc:
    // 0x3f35fc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f35fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f3600:
    // 0x3f3600: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f3604:
    // 0x3f3604: 0x40f809  jalr        $v0
label_3f3608:
    if (ctx->pc == 0x3F3608u) {
        ctx->pc = 0x3F3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3604u;
        // 0x3f3608: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F360Cu;
        goto label_3f360c;
    }
    ctx->pc = 0x3F3604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F360Cu);
        ctx->pc = 0x3F3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3604u;
        // 0x3f3608: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3604u, 0x3F360Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F360Cu;
label_3f360c:
    // 0x3f360c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f360cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f3610:
    // 0x3f3610: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3f3610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3f3614:
    // 0x3f3614: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
label_3f3618:
    if (ctx->pc == 0x3F3618u) {
        ctx->pc = 0x3F3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3614u;
        // 0x3f3618: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F361Cu;
        goto label_3f361c;
    }
    ctx->pc = 0x3F3614u;
    {
        const bool branch_taken_0x3f3614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3614u;
        // 0x3f3618: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3614) {
            ctx->pc = 0x3F3664u;
            goto label_3f3664;
        }
    }
    ctx->pc = 0x3F361Cu;
label_3f361c:
    // 0x3f361c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3f3620:
    if (ctx->pc == 0x3F3620u) {
        ctx->pc = 0x3F3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F361Cu;
        // 0x3f3620: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3624u;
        goto label_3f3624;
    }
    ctx->pc = 0x3F361Cu;
    {
        const bool branch_taken_0x3f361c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F361Cu;
        // 0x3f3620: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f361c) {
            ctx->pc = 0x3F3634u;
            goto label_3f3634;
        }
    }
    ctx->pc = 0x3F3624u;
label_3f3624:
    // 0x3f3624: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3f3628:
    if (ctx->pc == 0x3F3628u) {
        ctx->pc = 0x3F3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3624u;
        // 0x3f3628: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F362Cu;
        goto label_3f362c;
    }
    ctx->pc = 0x3F3624u;
    {
        const bool branch_taken_0x3f3624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3624u;
        // 0x3f3628: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3624) {
            ctx->pc = 0x3F3648u;
            goto label_3f3648;
        }
    }
    ctx->pc = 0x3F362Cu;
label_3f362c:
    // 0x3f362c: 0x10000018  b           . + 4 + (0x18 << 2)
label_3f3630:
    if (ctx->pc == 0x3F3630u) {
        ctx->pc = 0x3F3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F362Cu;
        // 0x3f3630: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3634u;
        goto label_3f3634;
    }
    ctx->pc = 0x3F362Cu;
    {
        const bool branch_taken_0x3f362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F362Cu;
        // 0x3f3630: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f362c) {
            ctx->pc = 0x3F3690u;
            goto label_3f3690;
        }
    }
    ctx->pc = 0x3F3634u;
label_3f3634:
    // 0x3f3634: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x3f3634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_3f3638:
    // 0x3f3638: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
label_3f363c:
    if (ctx->pc == 0x3F363Cu) {
        ctx->pc = 0x3F363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3638u;
        // 0x3f363c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3640u;
        goto label_3f3640;
    }
    ctx->pc = 0x3F3638u;
    {
        const bool branch_taken_0x3f3638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3638u;
        // 0x3f363c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3638) {
            ctx->pc = 0x3F367Cu;
            goto label_3f367c;
        }
    }
    ctx->pc = 0x3F3640u;
label_3f3640:
    // 0x3f3640: 0x10000013  b           . + 4 + (0x13 << 2)
label_3f3644:
    if (ctx->pc == 0x3F3644u) {
        ctx->pc = 0x3F3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3640u;
        // 0x3f3644: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3648u;
        goto label_3f3648;
    }
    ctx->pc = 0x3F3640u;
    {
        const bool branch_taken_0x3f3640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3640u;
        // 0x3f3644: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3640) {
            ctx->pc = 0x3F3690u;
            goto label_3f3690;
        }
    }
    ctx->pc = 0x3F3648u;
label_3f3648:
    // 0x3f3648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f364c:
    // 0x3f364c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3650:
    // 0x3f3650: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3f3650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3f3654:
    // 0x3f3654: 0xc0e858c  jal         func_3A1630
label_3f3658:
    if (ctx->pc == 0x3F3658u) {
        ctx->pc = 0x3F3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3654u;
        // 0x3f3658: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F365Cu;
        goto label_3f365c;
    }
    ctx->pc = 0x3F3654u;
    SET_GPR_U32(ctx, 31, 0x3F365Cu);
    ctx->pc = 0x3F3658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3654u;
    // 0x3f3658: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F3654u, 0x3F365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F365Cu;
label_3f365c:
    // 0x3f365c: 0x1000000b  b           . + 4 + (0xB << 2)
label_3f3660:
    if (ctx->pc == 0x3F3660u) {
        ctx->pc = 0x3F3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F365Cu;
        // 0x3f3660: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3664u;
        goto label_3f3664;
    }
    ctx->pc = 0x3F365Cu;
    {
        const bool branch_taken_0x3f365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F365Cu;
        // 0x3f3660: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f365c) {
            ctx->pc = 0x3F368Cu;
            goto label_3f368c;
        }
    }
    ctx->pc = 0x3F3664u;
label_3f3664:
    // 0x3f3664: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3f3664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_3f3668:
    // 0x3f3668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f3668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f366c:
    // 0x3f366c: 0xc0e858c  jal         func_3A1630
label_3f3670:
    if (ctx->pc == 0x3F3670u) {
        ctx->pc = 0x3F3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F366Cu;
        // 0x3f3670: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3674u;
        goto label_3f3674;
    }
    ctx->pc = 0x3F366Cu;
    SET_GPR_U32(ctx, 31, 0x3F3674u);
    ctx->pc = 0x3F3670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F366Cu;
    // 0x3f3670: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F366Cu, 0x3F3674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3674u;
label_3f3674:
    // 0x3f3674: 0x10000005  b           . + 4 + (0x5 << 2)
label_3f3678:
    if (ctx->pc == 0x3F3678u) {
        ctx->pc = 0x3F3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3674u;
        // 0x3f3678: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F367Cu;
        goto label_3f367c;
    }
    ctx->pc = 0x3F3674u;
    {
        const bool branch_taken_0x3f3674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3674u;
        // 0x3f3678: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3674) {
            ctx->pc = 0x3F368Cu;
            goto label_3f368c;
        }
    }
    ctx->pc = 0x3F367Cu;
label_3f367c:
    // 0x3f367c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f3680:
    // 0x3f3680: 0xc0fcd62  jal         func_3F3588
label_3f3684:
    if (ctx->pc == 0x3F3684u) {
        ctx->pc = 0x3F3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3680u;
        // 0x3f3684: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F3688u;
        goto label_3f3688;
    }
    ctx->pc = 0x3F3680u;
    SET_GPR_U32(ctx, 31, 0x3F3688u);
    ctx->pc = 0x3F3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F3680u;
    // 0x3f3684: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F3588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F3588u, 0x3F3680u, 0x3F3688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3688u;
label_3f3688:
    // 0x3f3688: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f3688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f368c:
    // 0x3f368c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f368cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f3690:
    // 0x3f3690: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f3690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f3694:
    // 0x3f3694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f3698:
    // 0x3f3698: 0x3e00008  jr          $ra
label_3f369c:
    if (ctx->pc == 0x3F369Cu) {
        ctx->pc = 0x3F369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3698u;
        // 0x3f369c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F36A0u;
        goto label_fallthrough_0x3f3698;
    }
    ctx->pc = 0x3F3698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3698u;
        // 0x3f369c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f3698:
    ctx->pc = 0x3F36A0u;
}
