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

// Function: sub_003635D0
// Address: 0x3635d0 - 0x3636c8
void sub_003635D0_0x3635d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003635D0_0x3635d0");
#endif

    switch (ctx->pc) {
        case 0x363604u: goto label_363604;
        case 0x36360cu: goto label_36360c;
        case 0x363620u: goto label_363620;
        case 0x363628u: goto label_363628;
        case 0x36363cu: goto label_36363c;
        case 0x363650u: goto label_363650;
        case 0x363664u: goto label_363664;
        case 0x36367cu: goto label_36367c;
        case 0x363684u: goto label_363684;
        case 0x3636a0u: goto label_3636a0;
        default: break;
    }

    ctx->pc = 0x3635d0u;

    // 0x3635d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3635d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3635d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3635d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3635d8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3635d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3635dc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3635dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3635e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3635e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3635e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3635e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3635e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3635e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3635ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3635ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3635f0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3635f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3635f4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3635f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3635f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3635f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3635fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3635FCu;
    SET_GPR_U32(ctx, 31, 0x363604u);
    ctx->pc = 0x363600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3635FCu;
    // 0x363600: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3635FCu, 0x363604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363604u;
label_363604:
    // 0x363604: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363604u;
    SET_GPR_U32(ctx, 31, 0x36360Cu);
    ctx->pc = 0x363608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363604u;
    // 0x363608: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363604u, 0x36360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36360Cu;
label_36360c:
    // 0x36360c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36360cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363610: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x363610u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363614: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x363614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363618: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363618u;
    SET_GPR_U32(ctx, 31, 0x363620u);
    ctx->pc = 0x36361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363618u;
    // 0x36361c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363618u, 0x363620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363620u;
label_363620:
    // 0x363620: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363620u;
    SET_GPR_U32(ctx, 31, 0x363628u);
    ctx->pc = 0x363624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363620u;
    // 0x363624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363620u, 0x363628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363628u;
label_363628:
    // 0x363628: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x363628u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36362c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36362cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363630: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x363630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363634: 0xc102488  jal         func_409220
    ctx->pc = 0x363634u;
    SET_GPR_U32(ctx, 31, 0x36363Cu);
    ctx->pc = 0x363638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363634u;
    // 0x363638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363634u, 0x36363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36363Cu;
label_36363c:
    // 0x36363c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36363cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363644: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x363644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x363648: 0xc102488  jal         func_409220
    ctx->pc = 0x363648u;
    SET_GPR_U32(ctx, 31, 0x363650u);
    ctx->pc = 0x36364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363648u;
    // 0x36364c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363648u, 0x363650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363650u;
label_363650:
    // 0x363650: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x363650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363658: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x363658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36365c: 0xc102488  jal         func_409220
    ctx->pc = 0x36365Cu;
    SET_GPR_U32(ctx, 31, 0x363664u);
    ctx->pc = 0x363660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36365Cu;
    // 0x363660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36365Cu, 0x363664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363664u;
label_363664:
    // 0x363664: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x363664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x363668: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x363668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x36366c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36366cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363674: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363674u;
    SET_GPR_U32(ctx, 31, 0x36367Cu);
    ctx->pc = 0x363678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363674u;
    // 0x363678: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363674u, 0x36367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36367Cu;
label_36367c:
    // 0x36367c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36367Cu;
    SET_GPR_U32(ctx, 31, 0x363684u);
    ctx->pc = 0x363680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36367Cu;
    // 0x363680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36367Cu, 0x363684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363684u;
label_363684:
    // 0x363684: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x363684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363688: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x363688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36368c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36368cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363690: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x363690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363694: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x363694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363698: 0xc0b4e50  jal         func_2D3940
    ctx->pc = 0x363698u;
    SET_GPR_U32(ctx, 31, 0x3636A0u);
    ctx->pc = 0x36369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363698u;
    // 0x36369c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3940u, 0x363698u, 0x3636A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3636A0u;
label_3636a0:
    // 0x3636a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3636a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3636a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3636a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3636a8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3636a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3636ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3636acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3636b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3636b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3636b4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3636b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3636b8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3636b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3636bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3636bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3636c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3636C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3636C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3636C0u;
        // 0x3636c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3636C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3636C8u;
}
