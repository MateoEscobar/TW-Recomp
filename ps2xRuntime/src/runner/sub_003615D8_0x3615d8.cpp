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

// Function: sub_003615D8
// Address: 0x3615d8 - 0x3616b8
void sub_003615D8_0x3615d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003615D8_0x3615d8");
#endif

    switch (ctx->pc) {
        case 0x361608u: goto label_361608;
        case 0x361610u: goto label_361610;
        case 0x361624u: goto label_361624;
        case 0x36162cu: goto label_36162c;
        case 0x361640u: goto label_361640;
        case 0x361648u: goto label_361648;
        case 0x36165cu: goto label_36165c;
        case 0x361664u: goto label_361664;
        case 0x361678u: goto label_361678;
        case 0x361690u: goto label_361690;
        default: break;
    }

    ctx->pc = 0x3615d8u;

    // 0x3615d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3615d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3615dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3615dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3615e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3615e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3615e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3615e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3615e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3615e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3615ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3615ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3615f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3615f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3615f4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3615f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3615f8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3615f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3615fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3615fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361600: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361600u;
    SET_GPR_U32(ctx, 31, 0x361608u);
    ctx->pc = 0x361604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361600u;
    // 0x361604: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361600u, 0x361608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361608u;
label_361608:
    // 0x361608: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361608u;
    SET_GPR_U32(ctx, 31, 0x361610u);
    ctx->pc = 0x36160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361608u;
    // 0x36160c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361608u, 0x361610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361610u;
label_361610:
    // 0x361610: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361614: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x361614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361618: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x361618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36161c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36161Cu;
    SET_GPR_U32(ctx, 31, 0x361624u);
    ctx->pc = 0x361620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36161Cu;
    // 0x361620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36161Cu, 0x361624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361624u;
label_361624:
    // 0x361624: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361624u;
    SET_GPR_U32(ctx, 31, 0x36162Cu);
    ctx->pc = 0x361628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361624u;
    // 0x361628: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361624u, 0x36162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36162Cu;
label_36162c:
    // 0x36162c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36162cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361630: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x361630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361634: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x361634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361638: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361638u;
    SET_GPR_U32(ctx, 31, 0x361640u);
    ctx->pc = 0x36163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361638u;
    // 0x36163c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361638u, 0x361640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361640u;
label_361640:
    // 0x361640: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361640u;
    SET_GPR_U32(ctx, 31, 0x361648u);
    ctx->pc = 0x361644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361640u;
    // 0x361644: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361640u, 0x361648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361648u;
label_361648:
    // 0x361648: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36164c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36164cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361650: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x361650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x361654: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361654u;
    SET_GPR_U32(ctx, 31, 0x36165Cu);
    ctx->pc = 0x361658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361654u;
    // 0x361658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361654u, 0x36165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36165Cu;
label_36165c:
    // 0x36165c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36165Cu;
    SET_GPR_U32(ctx, 31, 0x361664u);
    ctx->pc = 0x361660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36165Cu;
    // 0x361660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36165Cu, 0x361664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361664u;
label_361664:
    // 0x361664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x361664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x361668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36166c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36166cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x361670: 0xc1024c6  jal         func_409318
    ctx->pc = 0x361670u;
    SET_GPR_U32(ctx, 31, 0x361678u);
    ctx->pc = 0x361674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361670u;
    // 0x361674: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x361670u, 0x361678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361678u;
label_361678:
    // 0x361678: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x361678u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36167c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36167cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361680: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x361680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361684: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x361684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361688: 0xc0b9594  jal         func_2E5650
    ctx->pc = 0x361688u;
    SET_GPR_U32(ctx, 31, 0x361690u);
    ctx->pc = 0x36168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361688u;
    // 0x36168c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5650u, 0x361688u, 0x361690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361690u;
label_361690:
    // 0x361690: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x361690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x361694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361698: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x361698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36169c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36169cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3616a0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3616a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3616a4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3616a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3616a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3616a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3616ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3616ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3616B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3616ACu;
        // 0x3616b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3616ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3616B4u;
    // 0x3616b4: 0x0  nop
    ctx->pc = 0x3616b4u;
    // NOP
    ctx->pc = 0x3616b8u;
}
