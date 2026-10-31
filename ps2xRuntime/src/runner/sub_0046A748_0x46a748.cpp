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

// Function: sub_0046A748
// Address: 0x46a748 - 0x46a790
void sub_0046A748_0x46a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A748_0x46a748");
#endif

    switch (ctx->pc) {
        case 0x46a780u: goto label_46a780;
        default: break;
    }

    ctx->pc = 0x46a748u;

    // 0x46a748: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x46a748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a74c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x46a74cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x46a750: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x46a750u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a754: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x46a754u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a758: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x46a758u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a75c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x46a75cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a760: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46a760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x46a764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a768: 0x2484e6b0  addiu       $a0, $a0, -0x1950
    ctx->pc = 0x46a768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960816));
    // 0x46a76c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46a76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a770: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x46a770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a774: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x46a774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a778: 0xc11feb2  jal         func_47FAC8
    ctx->pc = 0x46A778u;
    SET_GPR_U32(ctx, 31, 0x46A780u);
    ctx->pc = 0x46A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A778u;
    // 0x46a77c: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FAC8u, 0x46A778u, 0x46A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A780u;
label_46a780:
    // 0x46a780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a784: 0x3e00008  jr          $ra
    ctx->pc = 0x46A784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A784u;
        // 0x46a788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A78Cu;
    // 0x46a78c: 0x0  nop
    ctx->pc = 0x46a78cu;
    // NOP
    ctx->pc = 0x46a790u;
}
