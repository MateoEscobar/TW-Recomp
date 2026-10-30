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

// Function: sub_0037A7E0
// Address: 0x37a7e0 - 0x37a8d0
void sub_0037A7E0_0x37a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A7E0_0x37a7e0");
#endif

    switch (ctx->pc) {
        case 0x37a814u: goto label_37a814;
        case 0x37a81cu: goto label_37a81c;
        case 0x37a830u: goto label_37a830;
        case 0x37a838u: goto label_37a838;
        case 0x37a84cu: goto label_37a84c;
        case 0x37a854u: goto label_37a854;
        case 0x37a868u: goto label_37a868;
        case 0x37a870u: goto label_37a870;
        case 0x37a884u: goto label_37a884;
        case 0x37a88cu: goto label_37a88c;
        case 0x37a8a4u: goto label_37a8a4;
        default: break;
    }

    ctx->pc = 0x37a7e0u;

    // 0x37a7e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x37a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x37a7e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37a7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a7e8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x37a7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x37a7ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x37a7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x37a7f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a7f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37a7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a7f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x37a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x37a7fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37a800: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x37a800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x37a804: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x37a804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x37a808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a80c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A80Cu;
    SET_GPR_U32(ctx, 31, 0x37A814u);
    ctx->pc = 0x37A810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A80Cu;
    // 0x37a810: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A80Cu, 0x37A814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A814u;
label_37a814:
    // 0x37a814: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A814u;
    SET_GPR_U32(ctx, 31, 0x37A81Cu);
    ctx->pc = 0x37A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A814u;
    // 0x37a818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A814u, 0x37A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A81Cu;
label_37a81c:
    // 0x37a81c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a820: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x37a820u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a824: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37a824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a828: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A828u;
    SET_GPR_U32(ctx, 31, 0x37A830u);
    ctx->pc = 0x37A82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A828u;
    // 0x37a82c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A828u, 0x37A830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A830u;
label_37a830:
    // 0x37a830: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A830u;
    SET_GPR_U32(ctx, 31, 0x37A838u);
    ctx->pc = 0x37A834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A830u;
    // 0x37a834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A830u, 0x37A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A838u;
label_37a838:
    // 0x37a838: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a83c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x37a83cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a840: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37a840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a844: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A844u;
    SET_GPR_U32(ctx, 31, 0x37A84Cu);
    ctx->pc = 0x37A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A844u;
    // 0x37a848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A844u, 0x37A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A84Cu;
label_37a84c:
    // 0x37a84c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A84Cu;
    SET_GPR_U32(ctx, 31, 0x37A854u);
    ctx->pc = 0x37A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A84Cu;
    // 0x37a850: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A84Cu, 0x37A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A854u;
label_37a854:
    // 0x37a854: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a858: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37a858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a85c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37a860: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A860u;
    SET_GPR_U32(ctx, 31, 0x37A868u);
    ctx->pc = 0x37A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A860u;
    // 0x37a864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A860u, 0x37A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A868u;
label_37a868:
    // 0x37a868: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A868u;
    SET_GPR_U32(ctx, 31, 0x37A870u);
    ctx->pc = 0x37A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A868u;
    // 0x37a86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A868u, 0x37A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A870u;
label_37a870:
    // 0x37a870: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37a870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a874: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37a874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37a878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a87c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37A87Cu;
    SET_GPR_U32(ctx, 31, 0x37A884u);
    ctx->pc = 0x37A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A87Cu;
    // 0x37a880: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37A87Cu, 0x37A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A884u;
label_37a884:
    // 0x37a884: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37A884u;
    SET_GPR_U32(ctx, 31, 0x37A88Cu);
    ctx->pc = 0x37A888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A884u;
    // 0x37a888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37A884u, 0x37A88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A88Cu;
label_37a88c:
    // 0x37a88c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37a88cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a890: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37a890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a894: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x37a894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a898: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x37a898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a89c: 0xc0a9d16  jal         func_2A7458
    ctx->pc = 0x37A89Cu;
    SET_GPR_U32(ctx, 31, 0x37A8A4u);
    ctx->pc = 0x37A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A89Cu;
    // 0x37a8a0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7458u, 0x37A89Cu, 0x37A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A8A4u;
label_37a8a4:
    // 0x37a8a4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x37a8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37a8a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37a8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a8ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x37a8acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37a8b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x37a8b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37a8b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37a8b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a8b8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x37a8b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a8bc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x37a8bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x37A8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A8C4u;
        // 0x37a8c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A8CCu;
    // 0x37a8cc: 0x0  nop
    ctx->pc = 0x37a8ccu;
    // NOP
    ctx->pc = 0x37a8d0u;
}
