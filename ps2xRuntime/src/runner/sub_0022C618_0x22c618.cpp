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

// Function: sub_0022C618
// Address: 0x22c618 - 0x22c730
void sub_0022C618_0x22c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C618_0x22c618");
#endif

    switch (ctx->pc) {
        case 0x22c618u: goto label_22c618;
        case 0x22c61cu: goto label_22c61c;
        case 0x22c620u: goto label_22c620;
        case 0x22c624u: goto label_22c624;
        case 0x22c628u: goto label_22c628;
        case 0x22c62cu: goto label_22c62c;
        case 0x22c630u: goto label_22c630;
        case 0x22c634u: goto label_22c634;
        case 0x22c638u: goto label_22c638;
        case 0x22c63cu: goto label_22c63c;
        case 0x22c640u: goto label_22c640;
        case 0x22c644u: goto label_22c644;
        case 0x22c648u: goto label_22c648;
        case 0x22c64cu: goto label_22c64c;
        case 0x22c650u: goto label_22c650;
        case 0x22c654u: goto label_22c654;
        case 0x22c658u: goto label_22c658;
        case 0x22c65cu: goto label_22c65c;
        case 0x22c660u: goto label_22c660;
        case 0x22c664u: goto label_22c664;
        case 0x22c668u: goto label_22c668;
        case 0x22c66cu: goto label_22c66c;
        case 0x22c670u: goto label_22c670;
        case 0x22c674u: goto label_22c674;
        case 0x22c678u: goto label_22c678;
        case 0x22c67cu: goto label_22c67c;
        case 0x22c680u: goto label_22c680;
        case 0x22c684u: goto label_22c684;
        case 0x22c688u: goto label_22c688;
        case 0x22c68cu: goto label_22c68c;
        case 0x22c690u: goto label_22c690;
        case 0x22c694u: goto label_22c694;
        case 0x22c698u: goto label_22c698;
        case 0x22c69cu: goto label_22c69c;
        case 0x22c6a0u: goto label_22c6a0;
        case 0x22c6a4u: goto label_22c6a4;
        case 0x22c6a8u: goto label_22c6a8;
        case 0x22c6acu: goto label_22c6ac;
        case 0x22c6b0u: goto label_22c6b0;
        case 0x22c6b4u: goto label_22c6b4;
        case 0x22c6b8u: goto label_22c6b8;
        case 0x22c6bcu: goto label_22c6bc;
        case 0x22c6c0u: goto label_22c6c0;
        case 0x22c6c4u: goto label_22c6c4;
        case 0x22c6c8u: goto label_22c6c8;
        case 0x22c6ccu: goto label_22c6cc;
        case 0x22c6d0u: goto label_22c6d0;
        case 0x22c6d4u: goto label_22c6d4;
        case 0x22c6d8u: goto label_22c6d8;
        case 0x22c6dcu: goto label_22c6dc;
        case 0x22c6e0u: goto label_22c6e0;
        case 0x22c6e4u: goto label_22c6e4;
        case 0x22c6e8u: goto label_22c6e8;
        case 0x22c6ecu: goto label_22c6ec;
        case 0x22c6f0u: goto label_22c6f0;
        case 0x22c6f4u: goto label_22c6f4;
        case 0x22c6f8u: goto label_22c6f8;
        case 0x22c6fcu: goto label_22c6fc;
        case 0x22c700u: goto label_22c700;
        case 0x22c704u: goto label_22c704;
        case 0x22c708u: goto label_22c708;
        case 0x22c70cu: goto label_22c70c;
        case 0x22c710u: goto label_22c710;
        case 0x22c714u: goto label_22c714;
        case 0x22c718u: goto label_22c718;
        case 0x22c71cu: goto label_22c71c;
        case 0x22c720u: goto label_22c720;
        case 0x22c724u: goto label_22c724;
        case 0x22c728u: goto label_22c728;
        case 0x22c72cu: goto label_22c72c;
        default: break;
    }

    ctx->pc = 0x22c618u;

label_22c618:
    // 0x22c618: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22c618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22c61c:
    // 0x22c61c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22c61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22c620:
    // 0x22c620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c624:
    // 0x22c624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c628:
    // 0x22c628: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x22c628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_22c62c:
    // 0x22c62c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22c62cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22c630:
    // 0x22c630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22c634:
    // 0x22c634: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22c638:
    // 0x22c638: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22c63c:
    // 0x22c63c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_22c640:
    // 0x22c640: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22c640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22c644:
    // 0x22c644: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c644u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22c648:
    // 0x22c648: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22c648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22c64c:
    // 0x22c64c: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22c650:
    // 0x22c650: 0x60f809  jalr        $v1
label_22c654:
    if (ctx->pc == 0x22C654u) {
        ctx->pc = 0x22C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C650u;
        // 0x22c654: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C658u;
        goto label_22c658;
    }
    ctx->pc = 0x22C650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22C658u);
        ctx->pc = 0x22C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C650u;
        // 0x22c654: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C650u, 0x22C658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C658u;
label_22c658:
    // 0x22c658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c65c:
    // 0x22c65c: 0xc089988  jal         func_226620
label_22c660:
    if (ctx->pc == 0x22C660u) {
        ctx->pc = 0x22C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C65Cu;
        // 0x22c660: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C664u;
        goto label_22c664;
    }
    ctx->pc = 0x22C65Cu;
    SET_GPR_U32(ctx, 31, 0x22C664u);
    ctx->pc = 0x22C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C65Cu;
    // 0x22c660: 0x3c050800  lui         $a1, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22C65Cu, 0x22C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C664u;
label_22c664:
    // 0x22c664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c668:
    // 0x22c668: 0xc08997c  jal         func_2265F0
label_22c66c:
    if (ctx->pc == 0x22C66Cu) {
        ctx->pc = 0x22C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C668u;
        // 0x22c66c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C670u;
        goto label_22c670;
    }
    ctx->pc = 0x22C668u;
    SET_GPR_U32(ctx, 31, 0x22C670u);
    ctx->pc = 0x22C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C668u;
    // 0x22c66c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22C668u, 0x22C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C670u;
label_22c670:
    // 0x22c670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c674:
    if (ctx->pc == 0x22C674u) {
        ctx->pc = 0x22C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C670u;
        // 0x22c674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C678u;
        goto label_22c678;
    }
    ctx->pc = 0x22C670u;
    {
        const bool branch_taken_0x22c670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C670u;
        // 0x22c674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c670) {
            ctx->pc = 0x22C680u;
            goto label_22c680;
        }
    }
    ctx->pc = 0x22C678u;
label_22c678:
    // 0x22c678: 0xc08abd2  jal         func_22AF48
label_22c67c:
    if (ctx->pc == 0x22C67Cu) {
        ctx->pc = 0x22C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C678u;
        // 0x22c67c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C680u;
        goto label_22c680;
    }
    ctx->pc = 0x22C678u;
    SET_GPR_U32(ctx, 31, 0x22C680u);
    ctx->pc = 0x22C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C678u;
    // 0x22c67c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AF48u, 0x22C678u, 0x22C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C680u;
label_22c680:
    // 0x22c680: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_22c684:
    if (ctx->pc == 0x22C684u) {
        ctx->pc = 0x22C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C680u;
        // 0x22c684: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C688u;
        goto label_22c688;
    }
    ctx->pc = 0x22C680u;
    {
        const bool branch_taken_0x22c680 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C680u;
        // 0x22c684: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c680) {
            ctx->pc = 0x22C714u;
            goto label_22c714;
        }
    }
    ctx->pc = 0x22C688u;
label_22c688:
    // 0x22c688: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c68c:
    // 0x22c68c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22c690:
    // 0x22c690: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22c690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22c694:
    // 0x22c694: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22c694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22c698:
    // 0x22c698: 0x40f809  jalr        $v0
label_22c69c:
    if (ctx->pc == 0x22C69Cu) {
        ctx->pc = 0x22C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C698u;
        // 0x22c69c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6A0u;
        goto label_22c6a0;
    }
    ctx->pc = 0x22C698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C6A0u);
        ctx->pc = 0x22C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C698u;
        // 0x22c69c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C698u, 0x22C6A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C6A0u;
label_22c6a0:
    // 0x22c6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c6a4:
    // 0x22c6a4: 0xc089988  jal         func_226620
label_22c6a8:
    if (ctx->pc == 0x22C6A8u) {
        ctx->pc = 0x22C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6A4u;
        // 0x22c6a8: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6ACu;
        goto label_22c6ac;
    }
    ctx->pc = 0x22C6A4u;
    SET_GPR_U32(ctx, 31, 0x22C6ACu);
    ctx->pc = 0x22C6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C6A4u;
    // 0x22c6a8: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22C6A4u, 0x22C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C6ACu;
label_22c6ac:
    // 0x22c6ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c6b0:
    // 0x22c6b0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c6b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c6b4:
    // 0x22c6b4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c6b8:
    // 0x22c6b8: 0x40f809  jalr        $v0
label_22c6bc:
    if (ctx->pc == 0x22C6BCu) {
        ctx->pc = 0x22C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6B8u;
        // 0x22c6bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6C0u;
        goto label_22c6c0;
    }
    ctx->pc = 0x22C6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C6C0u);
        ctx->pc = 0x22C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6B8u;
        // 0x22c6bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C6B8u, 0x22C6C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C6C0u;
label_22c6c0:
    // 0x22c6c0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_22c6c4:
    if (ctx->pc == 0x22C6C4u) {
        ctx->pc = 0x22C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6C0u;
        // 0x22c6c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6C8u;
        goto label_22c6c8;
    }
    ctx->pc = 0x22C6C0u;
    {
        const bool branch_taken_0x22c6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c6c0) {
            ctx->pc = 0x22C6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C6C0u;
            // 0x22c6c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C718u;
            goto label_22c718;
        }
    }
    ctx->pc = 0x22C6C8u;
label_22c6c8:
    // 0x22c6c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22c6cc:
    // 0x22c6cc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c6ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c6d0:
    // 0x22c6d0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c6d4:
    // 0x22c6d4: 0x40f809  jalr        $v0
label_22c6d8:
    if (ctx->pc == 0x22C6D8u) {
        ctx->pc = 0x22C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6D4u;
        // 0x22c6d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6DCu;
        goto label_22c6dc;
    }
    ctx->pc = 0x22C6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C6DCu);
        ctx->pc = 0x22C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6D4u;
        // 0x22c6d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C6D4u, 0x22C6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C6DCu;
label_22c6dc:
    // 0x22c6dc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_22c6e0:
    if (ctx->pc == 0x22C6E0u) {
        ctx->pc = 0x22C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6DCu;
        // 0x22c6e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6E4u;
        goto label_22c6e4;
    }
    ctx->pc = 0x22C6DCu;
    {
        const bool branch_taken_0x22c6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c6dc) {
            ctx->pc = 0x22C6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C6DCu;
            // 0x22c6e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C718u;
            goto label_22c718;
        }
    }
    ctx->pc = 0x22C6E4u;
label_22c6e4:
    // 0x22c6e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22c6e8:
    // 0x22c6e8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c6e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c6ec:
    // 0x22c6ec: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c6f0:
    // 0x22c6f0: 0x40f809  jalr        $v0
label_22c6f4:
    if (ctx->pc == 0x22C6F4u) {
        ctx->pc = 0x22C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6F0u;
        // 0x22c6f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C6F8u;
        goto label_22c6f8;
    }
    ctx->pc = 0x22C6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C6F8u);
        ctx->pc = 0x22C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C6F0u;
        // 0x22c6f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C6F0u, 0x22C6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C6F8u;
label_22c6f8:
    // 0x22c6f8: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22c6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22c6fc:
    // 0x22c6fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c700:
    // 0x22c700: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c704:
    // 0x22c704: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c708:
    // 0x22c708: 0x40f809  jalr        $v0
label_22c70c:
    if (ctx->pc == 0x22C70Cu) {
        ctx->pc = 0x22C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C708u;
        // 0x22c70c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C710u;
        goto label_22c710;
    }
    ctx->pc = 0x22C708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C710u);
        ctx->pc = 0x22C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C708u;
        // 0x22c70c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C708u, 0x22C710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C710u;
label_22c710:
    // 0x22c710: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22c710u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22c714:
    // 0x22c714: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22c714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c718:
    // 0x22c718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c71c:
    // 0x22c71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22c720:
    // 0x22c720: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x22c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22c724:
    // 0x22c724: 0x3e00008  jr          $ra
label_22c728:
    if (ctx->pc == 0x22C728u) {
        ctx->pc = 0x22C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C724u;
        // 0x22c728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C72Cu;
        goto label_22c72c;
    }
    ctx->pc = 0x22C724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C724u;
        // 0x22c728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C72Cu;
label_22c72c:
    // 0x22c72c: 0x0  nop
    ctx->pc = 0x22c72cu;
    // NOP
    ctx->pc = 0x22c730u;
}
