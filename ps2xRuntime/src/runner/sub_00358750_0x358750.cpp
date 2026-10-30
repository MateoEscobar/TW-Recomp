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

// Function: sub_00358750
// Address: 0x358750 - 0x3587b0
void sub_00358750_0x358750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358750_0x358750");
#endif

    switch (ctx->pc) {
        case 0x358770u: goto label_358770;
        case 0x358778u: goto label_358778;
        case 0x35878cu: goto label_35878c;
        case 0x358798u: goto label_358798;
        default: break;
    }

    ctx->pc = 0x358750u;

    // 0x358750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358758: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35875c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35875cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x358764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358768: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358768u;
    SET_GPR_U32(ctx, 31, 0x358770u);
    ctx->pc = 0x35876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358768u;
    // 0x35876c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358768u, 0x358770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358770u;
label_358770:
    // 0x358770: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358770u;
    SET_GPR_U32(ctx, 31, 0x358778u);
    ctx->pc = 0x358774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358770u;
    // 0x358774: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358770u, 0x358778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358778u;
label_358778:
    // 0x358778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35877c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35877cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358784: 0xc1024c6  jal         func_409318
    ctx->pc = 0x358784u;
    SET_GPR_U32(ctx, 31, 0x35878Cu);
    ctx->pc = 0x358788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358784u;
    // 0x358788: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x358784u, 0x35878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35878Cu;
label_35878c:
    // 0x35878c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35878cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358790: 0xc08d00e  jal         func_234038
    ctx->pc = 0x358790u;
    SET_GPR_U32(ctx, 31, 0x358798u);
    ctx->pc = 0x358794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358790u;
    // 0x358794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234038u, 0x358790u, 0x358798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358798u;
label_358798:
    // 0x358798: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35879c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35879cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3587a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3587a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3587a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3587a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3587a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3587A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3587ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587A8u;
        // 0x3587ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3587A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3587B0u;
}
