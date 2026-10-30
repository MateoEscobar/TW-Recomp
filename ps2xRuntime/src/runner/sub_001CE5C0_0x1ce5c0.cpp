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

// Function: sub_001CE5C0
// Address: 0x1ce5c0 - 0x1ce718
void sub_001CE5C0_0x1ce5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE5C0_0x1ce5c0");
#endif

    switch (ctx->pc) {
        case 0x1ce5c0u: goto label_1ce5c0;
        case 0x1ce5c4u: goto label_1ce5c4;
        case 0x1ce5c8u: goto label_1ce5c8;
        case 0x1ce5ccu: goto label_1ce5cc;
        case 0x1ce5d0u: goto label_1ce5d0;
        case 0x1ce5d4u: goto label_1ce5d4;
        case 0x1ce5d8u: goto label_1ce5d8;
        case 0x1ce5dcu: goto label_1ce5dc;
        case 0x1ce5e0u: goto label_1ce5e0;
        case 0x1ce5e4u: goto label_1ce5e4;
        case 0x1ce5e8u: goto label_1ce5e8;
        case 0x1ce5ecu: goto label_1ce5ec;
        case 0x1ce5f0u: goto label_1ce5f0;
        case 0x1ce5f4u: goto label_1ce5f4;
        case 0x1ce5f8u: goto label_1ce5f8;
        case 0x1ce5fcu: goto label_1ce5fc;
        case 0x1ce600u: goto label_1ce600;
        case 0x1ce604u: goto label_1ce604;
        case 0x1ce608u: goto label_1ce608;
        case 0x1ce60cu: goto label_1ce60c;
        case 0x1ce610u: goto label_1ce610;
        case 0x1ce614u: goto label_1ce614;
        case 0x1ce618u: goto label_1ce618;
        case 0x1ce61cu: goto label_1ce61c;
        case 0x1ce620u: goto label_1ce620;
        case 0x1ce624u: goto label_1ce624;
        case 0x1ce628u: goto label_1ce628;
        case 0x1ce62cu: goto label_1ce62c;
        case 0x1ce630u: goto label_1ce630;
        case 0x1ce634u: goto label_1ce634;
        case 0x1ce638u: goto label_1ce638;
        case 0x1ce63cu: goto label_1ce63c;
        case 0x1ce640u: goto label_1ce640;
        case 0x1ce644u: goto label_1ce644;
        case 0x1ce648u: goto label_1ce648;
        case 0x1ce64cu: goto label_1ce64c;
        case 0x1ce650u: goto label_1ce650;
        case 0x1ce654u: goto label_1ce654;
        case 0x1ce658u: goto label_1ce658;
        case 0x1ce65cu: goto label_1ce65c;
        case 0x1ce660u: goto label_1ce660;
        case 0x1ce664u: goto label_1ce664;
        case 0x1ce668u: goto label_1ce668;
        case 0x1ce66cu: goto label_1ce66c;
        case 0x1ce670u: goto label_1ce670;
        case 0x1ce674u: goto label_1ce674;
        case 0x1ce678u: goto label_1ce678;
        case 0x1ce67cu: goto label_1ce67c;
        case 0x1ce680u: goto label_1ce680;
        case 0x1ce684u: goto label_1ce684;
        case 0x1ce688u: goto label_1ce688;
        case 0x1ce68cu: goto label_1ce68c;
        case 0x1ce690u: goto label_1ce690;
        case 0x1ce694u: goto label_1ce694;
        case 0x1ce698u: goto label_1ce698;
        case 0x1ce69cu: goto label_1ce69c;
        case 0x1ce6a0u: goto label_1ce6a0;
        case 0x1ce6a4u: goto label_1ce6a4;
        case 0x1ce6a8u: goto label_1ce6a8;
        case 0x1ce6acu: goto label_1ce6ac;
        case 0x1ce6b0u: goto label_1ce6b0;
        case 0x1ce6b4u: goto label_1ce6b4;
        case 0x1ce6b8u: goto label_1ce6b8;
        case 0x1ce6bcu: goto label_1ce6bc;
        case 0x1ce6c0u: goto label_1ce6c0;
        case 0x1ce6c4u: goto label_1ce6c4;
        case 0x1ce6c8u: goto label_1ce6c8;
        case 0x1ce6ccu: goto label_1ce6cc;
        case 0x1ce6d0u: goto label_1ce6d0;
        case 0x1ce6d4u: goto label_1ce6d4;
        case 0x1ce6d8u: goto label_1ce6d8;
        case 0x1ce6dcu: goto label_1ce6dc;
        case 0x1ce6e0u: goto label_1ce6e0;
        case 0x1ce6e4u: goto label_1ce6e4;
        case 0x1ce6e8u: goto label_1ce6e8;
        case 0x1ce6ecu: goto label_1ce6ec;
        case 0x1ce6f0u: goto label_1ce6f0;
        case 0x1ce6f4u: goto label_1ce6f4;
        case 0x1ce6f8u: goto label_1ce6f8;
        case 0x1ce6fcu: goto label_1ce6fc;
        case 0x1ce700u: goto label_1ce700;
        case 0x1ce704u: goto label_1ce704;
        case 0x1ce708u: goto label_1ce708;
        case 0x1ce70cu: goto label_1ce70c;
        case 0x1ce710u: goto label_1ce710;
        case 0x1ce714u: goto label_1ce714;
        default: break;
    }

    ctx->pc = 0x1ce5c0u;

label_1ce5c0:
    // 0x1ce5c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ce5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ce5c4:
    // 0x1ce5c4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1ce5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1ce5c8:
    // 0x1ce5c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1ce5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1ce5cc:
    // 0x1ce5cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce5ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ce5d0:
    // 0x1ce5d0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ce5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1ce5d4:
    // 0x1ce5d4: 0x10a00049  beqz        $a1, . + 4 + (0x49 << 2)
label_1ce5d8:
    if (ctx->pc == 0x1CE5D8u) {
        ctx->pc = 0x1CE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5D4u;
        // 0x1ce5d8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE5DCu;
        goto label_1ce5dc;
    }
    ctx->pc = 0x1CE5D4u;
    {
        const bool branch_taken_0x1ce5d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5D4u;
        // 0x1ce5d8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce5d4) {
            ctx->pc = 0x1CE6FCu;
            goto label_1ce6fc;
        }
    }
    ctx->pc = 0x1CE5DCu;
label_1ce5dc:
    // 0x1ce5dc: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1ce5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_1ce5e0:
    // 0x1ce5e0: 0x5445000b  bnel        $v0, $a1, . + 4 + (0xB << 2)
label_1ce5e4:
    if (ctx->pc == 0x1CE5E4u) {
        ctx->pc = 0x1CE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5E0u;
        // 0x1ce5e4: 0x8e240290  lw          $a0, 0x290($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE5E8u;
        goto label_1ce5e8;
    }
    ctx->pc = 0x1CE5E0u;
    {
        const bool branch_taken_0x1ce5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ce5e0) {
            ctx->pc = 0x1CE5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE5E0u;
            // 0x1ce5e4: 0x8e240290  lw          $a0, 0x290($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE610u;
            goto label_1ce610;
        }
    }
    ctx->pc = 0x1CE5E8u;
label_1ce5e8:
    // 0x1ce5e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce5ec:
    // 0x1ce5ec: 0xc0738f0  jal         func_1CE3C0
label_1ce5f0:
    if (ctx->pc == 0x1CE5F0u) {
        ctx->pc = 0x1CE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5ECu;
        // 0x1ce5f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE5F4u;
        goto label_1ce5f4;
    }
    ctx->pc = 0x1CE5ECu;
    SET_GPR_U32(ctx, 31, 0x1CE5F4u);
    ctx->pc = 0x1CE5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5ECu;
    // 0x1ce5f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE3C0u, 0x1CE5ECu, 0x1CE5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5F4u;
label_1ce5f4:
    // 0x1ce5f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ce5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ce5f8:
    // 0x1ce5f8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ce5f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ce5fc:
    // 0x1ce5fc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ce5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ce600:
    // 0x1ce600: 0x60f809  jalr        $v1
label_1ce604:
    if (ctx->pc == 0x1CE604u) {
        ctx->pc = 0x1CE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE600u;
        // 0x1ce604: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE608u;
        goto label_1ce608;
    }
    ctx->pc = 0x1CE600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CE608u);
        ctx->pc = 0x1CE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE600u;
        // 0x1ce604: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE600u, 0x1CE608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE608u;
label_1ce608:
    // 0x1ce608: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1ce60c:
    if (ctx->pc == 0x1CE60Cu) {
        ctx->pc = 0x1CE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE608u;
        // 0x1ce60c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE610u;
        goto label_1ce610;
    }
    ctx->pc = 0x1CE608u;
    {
        const bool branch_taken_0x1ce608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE608u;
        // 0x1ce60c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce608) {
            ctx->pc = 0x1CE700u;
            goto label_1ce700;
        }
    }
    ctx->pc = 0x1CE610u;
label_1ce610:
    // 0x1ce610: 0x1080003b  beqz        $a0, . + 4 + (0x3B << 2)
label_1ce614:
    if (ctx->pc == 0x1CE614u) {
        ctx->pc = 0x1CE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE610u;
        // 0x1ce614: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE618u;
        goto label_1ce618;
    }
    ctx->pc = 0x1CE610u;
    {
        const bool branch_taken_0x1ce610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE610u;
        // 0x1ce614: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce610) {
            ctx->pc = 0x1CE700u;
            goto label_1ce700;
        }
    }
    ctx->pc = 0x1CE618u;
label_1ce618:
    // 0x1ce618: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ce618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ce61c:
    // 0x1ce61c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ce61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ce620:
    // 0x1ce620: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1ce620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1ce624:
    // 0x1ce624: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ce624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ce628:
    // 0x1ce628: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_1ce62c:
    if (ctx->pc == 0x1CE62Cu) {
        ctx->pc = 0x1CE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE628u;
        // 0x1ce62c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE630u;
        goto label_1ce630;
    }
    ctx->pc = 0x1CE628u;
    {
        const bool branch_taken_0x1ce628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE628u;
        // 0x1ce62c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce628) {
            ctx->pc = 0x1CE700u;
            goto label_1ce700;
        }
    }
    ctx->pc = 0x1CE630u;
label_1ce630:
    // 0x1ce630: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x1ce630u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_1ce634:
    // 0x1ce634: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1ce634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1ce638:
    // 0x1ce638: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1ce638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce63c:
    // 0x1ce63c: 0x8cf20008  lw          $s2, 0x8($a3)
    ctx->pc = 0x1ce63cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1ce640:
    // 0x1ce640: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ce640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ce644:
    // 0x1ce644: 0x54450026  bnel        $v0, $a1, . + 4 + (0x26 << 2)
label_1ce648:
    if (ctx->pc == 0x1CE648u) {
        ctx->pc = 0x1CE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE644u;
        // 0x1ce648: 0xafa70030  sw          $a3, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE64Cu;
        goto label_1ce64c;
    }
    ctx->pc = 0x1CE644u;
    {
        const bool branch_taken_0x1ce644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ce644) {
            ctx->pc = 0x1CE648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE644u;
            // 0x1ce648: 0xafa70030  sw          $a3, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE6E0u;
            goto label_1ce6e0;
        }
    }
    ctx->pc = 0x1CE64Cu;
label_1ce64c:
    // 0x1ce64c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x1ce64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
label_1ce650:
    // 0x1ce650: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x1ce650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ce654:
    // 0x1ce654: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1ce654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1ce658:
    // 0x1ce658: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1ce658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1ce65c:
    // 0x1ce65c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ce65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ce660:
    // 0x1ce660: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ce660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce664:
    // 0x1ce664: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1ce668:
    if (ctx->pc == 0x1CE668u) {
        ctx->pc = 0x1CE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE664u;
        // 0x1ce668: 0x8d08b9c0  lw          $t0, -0x4640($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE66Cu;
        goto label_1ce66c;
    }
    ctx->pc = 0x1CE664u;
    {
        const bool branch_taken_0x1ce664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE664u;
        // 0x1ce668: 0x8d08b9c0  lw          $t0, -0x4640($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce664) {
            ctx->pc = 0x1CE688u;
            goto label_1ce688;
        }
    }
    ctx->pc = 0x1CE66Cu;
label_1ce66c:
    // 0x1ce66c: 0x24c65998  addiu       $a2, $a2, 0x5998
    ctx->pc = 0x1ce66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22936));
label_1ce670:
    // 0x1ce670: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1ce670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1ce674:
    // 0x1ce674: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1ce674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1ce678:
    // 0x1ce678: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1ce678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1ce67c:
    // 0x1ce67c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1ce67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1ce680:
    // 0x1ce680: 0x60f809  jalr        $v1
label_1ce684:
    if (ctx->pc == 0x1CE684u) {
        ctx->pc = 0x1CE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE680u;
        // 0x1ce684: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE688u;
        goto label_1ce688;
    }
    ctx->pc = 0x1CE680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CE688u);
        ctx->pc = 0x1CE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE680u;
        // 0x1ce684: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE680u, 0x1CE688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE688u;
label_1ce688:
    // 0x1ce688: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1ce688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1ce68c:
    // 0x1ce68c: 0x8e240294  lw          $a0, 0x294($s1)
    ctx->pc = 0x1ce68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
label_1ce690:
    // 0x1ce690: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x1ce690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1ce694:
    // 0x1ce694: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ce694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ce698:
    // 0x1ce698: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ce698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1ce69c:
    // 0x1ce69c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ce69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ce6a0:
    // 0x1ce6a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ce6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ce6a4:
    // 0x1ce6a4: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1ce6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_1ce6a8:
    // 0x1ce6a8: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1ce6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
label_1ce6ac:
    // 0x1ce6ac: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1ce6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ce6b0:
    // 0x1ce6b0: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1ce6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1ce6b4:
    // 0x1ce6b4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1ce6b8:
    if (ctx->pc == 0x1CE6B8u) {
        ctx->pc = 0x1CE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6B4u;
        // 0x1ce6b8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE6BCu;
        goto label_1ce6bc;
    }
    ctx->pc = 0x1CE6B4u;
    {
        const bool branch_taken_0x1ce6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce6b4) {
            ctx->pc = 0x1CE6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE6B4u;
            // 0x1ce6b8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE6D4u;
            goto label_1ce6d4;
        }
    }
    ctx->pc = 0x1CE6BCu;
label_1ce6bc:
    // 0x1ce6bc: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x1ce6bcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ce6c0:
    // 0x1ce6c0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_1ce6c4:
    if (ctx->pc == 0x1CE6C4u) {
        ctx->pc = 0x1CE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6C0u;
        // 0x1ce6c4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE6C8u;
        goto label_1ce6c8;
    }
    ctx->pc = 0x1CE6C0u;
    {
        const bool branch_taken_0x1ce6c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce6c0) {
            ctx->pc = 0x1CE6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE6C0u;
            // 0x1ce6c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE6C8u;
            goto label_1ce6c8;
        }
    }
    ctx->pc = 0x1CE6C8u;
label_1ce6c8:
    // 0x1ce6c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1ce6c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ce6cc:
    // 0x1ce6cc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1ce6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1ce6d0:
    // 0x1ce6d0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ce6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ce6d4:
    // 0x1ce6d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ce6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ce6d8:
    // 0x1ce6d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ce6dc:
    if (ctx->pc == 0x1CE6DCu) {
        ctx->pc = 0x1CE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6D8u;
        // 0x1ce6dc: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE6E0u;
        goto label_1ce6e0;
    }
    ctx->pc = 0x1CE6D8u;
    {
        const bool branch_taken_0x1ce6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6D8u;
        // 0x1ce6dc: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6d8) {
            ctx->pc = 0x1CE6FCu;
            goto label_1ce6fc;
        }
    }
    ctx->pc = 0x1CE6E0u;
label_1ce6e0:
    // 0x1ce6e0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1ce6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ce6e4:
    // 0x1ce6e4: 0x8e240290  lw          $a0, 0x290($s1)
    ctx->pc = 0x1ce6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
label_1ce6e8:
    // 0x1ce6e8: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1ce6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_1ce6ec:
    // 0x1ce6ec: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1ce6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1ce6f0:
    // 0x1ce6f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ce6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ce6f4:
    // 0x1ce6f4: 0x1462ffd0  bne         $v1, $v0, . + 4 + (-0x30 << 2)
label_1ce6f8:
    if (ctx->pc == 0x1CE6F8u) {
        ctx->pc = 0x1CE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6F4u;
        // 0x1ce6f8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE6FCu;
        goto label_1ce6fc;
    }
    ctx->pc = 0x1CE6F4u;
    {
        const bool branch_taken_0x1ce6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6F4u;
        // 0x1ce6f8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6f4) {
            ctx->pc = 0x1CE638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce638;
        }
    }
    ctx->pc = 0x1CE6FCu;
label_1ce6fc:
    // 0x1ce6fc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ce6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ce700:
    // 0x1ce700: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ce700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ce704:
    // 0x1ce704: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ce704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ce708:
    // 0x1ce708: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ce708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ce70c:
    // 0x1ce70c: 0x3e00008  jr          $ra
label_1ce710:
    if (ctx->pc == 0x1CE710u) {
        ctx->pc = 0x1CE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE70Cu;
        // 0x1ce710: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE714u;
        goto label_1ce714;
    }
    ctx->pc = 0x1CE70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE70Cu;
        // 0x1ce710: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE714u;
label_1ce714:
    // 0x1ce714: 0x0  nop
    ctx->pc = 0x1ce714u;
    // NOP
    ctx->pc = 0x1ce718u;
}
