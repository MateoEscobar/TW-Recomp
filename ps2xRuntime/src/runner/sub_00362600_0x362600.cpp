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

// Function: sub_00362600
// Address: 0x362600 - 0x3626f0
void sub_00362600_0x362600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362600_0x362600");
#endif

    switch (ctx->pc) {
        case 0x362634u: goto label_362634;
        case 0x36263cu: goto label_36263c;
        case 0x362650u: goto label_362650;
        case 0x362658u: goto label_362658;
        case 0x36266cu: goto label_36266c;
        case 0x362674u: goto label_362674;
        case 0x362688u: goto label_362688;
        case 0x362690u: goto label_362690;
        case 0x3626a4u: goto label_3626a4;
        case 0x3626acu: goto label_3626ac;
        case 0x3626c4u: goto label_3626c4;
        default: break;
    }

    ctx->pc = 0x362600u;

    // 0x362600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x362600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x362604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362608: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x362608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x36260c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x36260cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x362610: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x362614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362618: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x362618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x36261c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36261cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x362620: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x362620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x362624: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x362624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x362628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36262c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36262Cu;
    SET_GPR_U32(ctx, 31, 0x362634u);
    ctx->pc = 0x362630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36262Cu;
    // 0x362630: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36262Cu, 0x362634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362634u;
label_362634:
    // 0x362634: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362634u;
    SET_GPR_U32(ctx, 31, 0x36263Cu);
    ctx->pc = 0x362638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362634u;
    // 0x362638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362634u, 0x36263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36263Cu;
label_36263c:
    // 0x36263c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36263cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362640: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x362640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362644: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x362644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362648: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362648u;
    SET_GPR_U32(ctx, 31, 0x362650u);
    ctx->pc = 0x36264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362648u;
    // 0x36264c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362648u, 0x362650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362650u;
label_362650:
    // 0x362650: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362650u;
    SET_GPR_U32(ctx, 31, 0x362658u);
    ctx->pc = 0x362654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362650u;
    // 0x362654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362650u, 0x362658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362658u;
label_362658:
    // 0x362658: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36265c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x36265cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x362660: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x362660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362664: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362664u;
    SET_GPR_U32(ctx, 31, 0x36266Cu);
    ctx->pc = 0x362668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362664u;
    // 0x362668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362664u, 0x36266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36266Cu;
label_36266c:
    // 0x36266c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36266Cu;
    SET_GPR_U32(ctx, 31, 0x362674u);
    ctx->pc = 0x362670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36266Cu;
    // 0x362670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36266Cu, 0x362674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362674u;
label_362674:
    // 0x362674: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362678: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x362678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36267c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36267cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x362680: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362680u;
    SET_GPR_U32(ctx, 31, 0x362688u);
    ctx->pc = 0x362684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362680u;
    // 0x362684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362680u, 0x362688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362688u;
label_362688:
    // 0x362688: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362688u;
    SET_GPR_U32(ctx, 31, 0x362690u);
    ctx->pc = 0x36268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362688u;
    // 0x36268c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362688u, 0x362690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362690u;
label_362690:
    // 0x362690: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362694: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x362694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x362698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36269c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36269Cu;
    SET_GPR_U32(ctx, 31, 0x3626A4u);
    ctx->pc = 0x3626A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36269Cu;
    // 0x3626a0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36269Cu, 0x3626A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3626A4u;
label_3626a4:
    // 0x3626a4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3626A4u;
    SET_GPR_U32(ctx, 31, 0x3626ACu);
    ctx->pc = 0x3626A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3626A4u;
    // 0x3626a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3626A4u, 0x3626ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3626ACu;
label_3626ac:
    // 0x3626ac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3626acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3626b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3626b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3626b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3626b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3626b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3626b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3626bc: 0xc0a86aa  jal         func_2A1AA8
    ctx->pc = 0x3626BCu;
    SET_GPR_U32(ctx, 31, 0x3626C4u);
    ctx->pc = 0x3626C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3626BCu;
    // 0x3626c0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1AA8u, 0x3626BCu, 0x3626C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3626C4u;
label_3626c4:
    // 0x3626c4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3626c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3626c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3626c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3626cc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3626ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3626d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3626d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3626d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3626d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3626d8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3626d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3626dc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3626dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3626e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3626e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3626e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3626E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3626E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3626E4u;
        // 0x3626e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3626E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3626ECu;
    // 0x3626ec: 0x0  nop
    ctx->pc = 0x3626ecu;
    // NOP
    ctx->pc = 0x3626f0u;
}
