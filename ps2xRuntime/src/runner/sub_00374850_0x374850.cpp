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

// Function: sub_00374850
// Address: 0x374850 - 0x3748e0
void sub_00374850_0x374850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374850_0x374850");
#endif

    switch (ctx->pc) {
        case 0x374878u: goto label_374878;
        case 0x374880u: goto label_374880;
        case 0x374894u: goto label_374894;
        case 0x37489cu: goto label_37489c;
        case 0x3748b4u: goto label_3748b4;
        case 0x3748c4u: goto label_3748c4;
        default: break;
    }

    ctx->pc = 0x374850u;

    // 0x374850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x374850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x374854: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374858: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x374858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37485c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37485cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x374860: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x374860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x374864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374868: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x374868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37486c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374870: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374870u;
    SET_GPR_U32(ctx, 31, 0x374878u);
    ctx->pc = 0x374874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374870u;
    // 0x374874: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374870u, 0x374878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374878u;
label_374878:
    // 0x374878: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374878u;
    SET_GPR_U32(ctx, 31, 0x374880u);
    ctx->pc = 0x37487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374878u;
    // 0x37487c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374878u, 0x374880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374880u;
label_374880:
    // 0x374880: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x374880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374884: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x374884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374888: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37488c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37488Cu;
    SET_GPR_U32(ctx, 31, 0x374894u);
    ctx->pc = 0x374890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37488Cu;
    // 0x374890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37488Cu, 0x374894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374894u;
label_374894:
    // 0x374894: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374894u;
    SET_GPR_U32(ctx, 31, 0x37489Cu);
    ctx->pc = 0x374898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374894u;
    // 0x374898: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374894u, 0x37489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37489Cu;
label_37489c:
    // 0x37489c: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x37489cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3748a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3748a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3748a4: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3748a4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3748a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3748a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3748ac: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3748ACu;
    SET_GPR_U32(ctx, 31, 0x3748B4u);
    ctx->pc = 0x3748B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3748ACu;
    // 0x3748b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3748ACu, 0x3748B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3748B4u;
label_3748b4:
    // 0x3748b4: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x3748b4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3748b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3748b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3748bc: 0xc1076fa  jal         func_41DBE8
    ctx->pc = 0x3748BCu;
    SET_GPR_U32(ctx, 31, 0x3748C4u);
    ctx->pc = 0x3748C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3748BCu;
    // 0x3748c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DBE8u, 0x3748BCu, 0x3748C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3748C4u;
label_3748c4:
    // 0x3748c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3748c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3748c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3748c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3748cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3748ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3748d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3748d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3748d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3748d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3748d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3748D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3748DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748D8u;
        // 0x3748dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3748D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3748E0u;
}
