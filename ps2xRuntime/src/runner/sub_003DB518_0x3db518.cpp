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

// Function: sub_003DB518
// Address: 0x3db518 - 0x3db5c0
void sub_003DB518_0x3db518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB518_0x3db518");
#endif

    switch (ctx->pc) {
        case 0x3db518u: goto label_3db518;
        case 0x3db51cu: goto label_3db51c;
        case 0x3db520u: goto label_3db520;
        case 0x3db524u: goto label_3db524;
        case 0x3db528u: goto label_3db528;
        case 0x3db52cu: goto label_3db52c;
        case 0x3db530u: goto label_3db530;
        case 0x3db534u: goto label_3db534;
        case 0x3db538u: goto label_3db538;
        case 0x3db53cu: goto label_3db53c;
        case 0x3db540u: goto label_3db540;
        case 0x3db544u: goto label_3db544;
        case 0x3db548u: goto label_3db548;
        case 0x3db54cu: goto label_3db54c;
        case 0x3db550u: goto label_3db550;
        case 0x3db554u: goto label_3db554;
        case 0x3db558u: goto label_3db558;
        case 0x3db55cu: goto label_3db55c;
        case 0x3db560u: goto label_3db560;
        case 0x3db564u: goto label_3db564;
        case 0x3db568u: goto label_3db568;
        case 0x3db56cu: goto label_3db56c;
        case 0x3db570u: goto label_3db570;
        case 0x3db574u: goto label_3db574;
        case 0x3db578u: goto label_3db578;
        case 0x3db57cu: goto label_3db57c;
        case 0x3db580u: goto label_3db580;
        case 0x3db584u: goto label_3db584;
        case 0x3db588u: goto label_3db588;
        case 0x3db58cu: goto label_3db58c;
        case 0x3db590u: goto label_3db590;
        case 0x3db594u: goto label_3db594;
        case 0x3db598u: goto label_3db598;
        case 0x3db59cu: goto label_3db59c;
        case 0x3db5a0u: goto label_3db5a0;
        case 0x3db5a4u: goto label_3db5a4;
        case 0x3db5a8u: goto label_3db5a8;
        case 0x3db5acu: goto label_3db5ac;
        case 0x3db5b0u: goto label_3db5b0;
        case 0x3db5b4u: goto label_3db5b4;
        case 0x3db5b8u: goto label_3db5b8;
        case 0x3db5bcu: goto label_3db5bc;
        default: break;
    }

    ctx->pc = 0x3db518u;

label_3db518:
    // 0x3db518: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3db518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3db51c:
    // 0x3db51c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3db51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3db520:
    // 0x3db520: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3db520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3db524:
    // 0x3db524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3db524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3db528:
    // 0x3db528: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3db528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3db52c:
    // 0x3db52c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3db52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3db530:
    // 0x3db530: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3db530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3db534:
    // 0x3db534: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3db534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3db538:
    // 0x3db538: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3db538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3db53c:
    // 0x3db53c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3db53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3db540:
    // 0x3db540: 0x40f809  jalr        $v0
label_3db544:
    if (ctx->pc == 0x3DB544u) {
        ctx->pc = 0x3DB544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB540u;
        // 0x3db544: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB548u;
        goto label_3db548;
    }
    ctx->pc = 0x3DB540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DB548u);
        ctx->pc = 0x3DB544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB540u;
        // 0x3db544: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB540u, 0x3DB548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DB548u;
label_3db548:
    // 0x3db548: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3db548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3db54c:
    // 0x3db54c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3db54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3db550:
    // 0x3db550: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3db550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3db554:
    // 0x3db554: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3db554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3db558:
    // 0x3db558: 0xc0e858c  jal         func_3A1630
label_3db55c:
    if (ctx->pc == 0x3DB55Cu) {
        ctx->pc = 0x3DB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB558u;
        // 0x3db55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB560u;
        goto label_3db560;
    }
    ctx->pc = 0x3DB558u;
    SET_GPR_U32(ctx, 31, 0x3DB560u);
    ctx->pc = 0x3DB55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB558u;
    // 0x3db55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DB558u, 0x3DB560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB560u;
label_3db560:
    // 0x3db560: 0xc0ea14c  jal         func_3A8530
label_3db564:
    if (ctx->pc == 0x3DB564u) {
        ctx->pc = 0x3DB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB560u;
        // 0x3db564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB568u;
        goto label_3db568;
    }
    ctx->pc = 0x3DB560u;
    SET_GPR_U32(ctx, 31, 0x3DB568u);
    ctx->pc = 0x3DB564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB560u;
    // 0x3db564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DB560u, 0x3DB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB568u;
label_3db568:
    // 0x3db568: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3db568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3db56c:
    // 0x3db56c: 0xc0ea12a  jal         func_3A84A8
label_3db570:
    if (ctx->pc == 0x3DB570u) {
        ctx->pc = 0x3DB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB56Cu;
        // 0x3db570: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB574u;
        goto label_3db574;
    }
    ctx->pc = 0x3DB56Cu;
    SET_GPR_U32(ctx, 31, 0x3DB574u);
    ctx->pc = 0x3DB570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB56Cu;
    // 0x3db570: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DB56Cu, 0x3DB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB574u;
label_3db574:
    // 0x3db574: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3db574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3db578:
    // 0x3db578: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3db578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3db57c:
    // 0x3db57c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3db57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3db580:
    // 0x3db580: 0xc0ea12a  jal         func_3A84A8
label_3db584:
    if (ctx->pc == 0x3DB584u) {
        ctx->pc = 0x3DB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB580u;
        // 0x3db584: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB588u;
        goto label_3db588;
    }
    ctx->pc = 0x3DB580u;
    SET_GPR_U32(ctx, 31, 0x3DB588u);
    ctx->pc = 0x3DB584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB580u;
    // 0x3db584: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DB580u, 0x3DB588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB588u;
label_3db588:
    // 0x3db588: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3db588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3db58c:
    // 0x3db58c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3db58cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3db590:
    // 0x3db590: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3db590u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3db594:
    // 0x3db594: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3db594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3db598:
    // 0x3db598: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3db598u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_3db59c:
    // 0x3db59c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x3db59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_3db5a0:
    // 0x3db5a0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3db5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3db5a4:
    // 0x3db5a4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x3db5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_3db5a8:
    // 0x3db5a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3db5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3db5ac:
    // 0x3db5ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3db5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3db5b0:
    // 0x3db5b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3db5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3db5b4:
    // 0x3db5b4: 0x3e00008  jr          $ra
label_3db5b8:
    if (ctx->pc == 0x3DB5B8u) {
        ctx->pc = 0x3DB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB5B4u;
        // 0x3db5b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB5BCu;
        goto label_3db5bc;
    }
    ctx->pc = 0x3DB5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB5B4u;
        // 0x3db5b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB5BCu;
label_3db5bc:
    // 0x3db5bc: 0x0  nop
    ctx->pc = 0x3db5bcu;
    // NOP
    ctx->pc = 0x3db5c0u;
}
