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

// Function: sub_00371418
// Address: 0x371418 - 0x371438
void sub_00371418_0x371418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371418_0x371418");
#endif

    switch (ctx->pc) {
        case 0x371428u: goto label_371428;
        default: break;
    }

    ctx->pc = 0x371418u;

    // 0x371418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37141c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371420: 0xc044f8c  jal         func_113E30
    ctx->pc = 0x371420u;
    SET_GPR_U32(ctx, 31, 0x371428u);
    ctx->pc = 0x113E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E30u, 0x371420u, 0x371428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371428u;
label_371428:
    // 0x371428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x371428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37142c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37142cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371430: 0x3e00008  jr          $ra
    ctx->pc = 0x371430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371430u;
        // 0x371434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371438u;
}
