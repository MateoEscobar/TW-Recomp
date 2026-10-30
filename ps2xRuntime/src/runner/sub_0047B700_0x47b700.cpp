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

// Function: sub_0047B700
// Address: 0x47b700 - 0x47b720
void sub_0047B700_0x47b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B700_0x47b700");
#endif

    switch (ctx->pc) {
        case 0x47b710u: goto label_47b710;
        default: break;
    }

    ctx->pc = 0x47b700u;

    // 0x47b700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47b704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47b708: 0xc11cfa8  jal         func_473EA0
    ctx->pc = 0x47B708u;
    SET_GPR_U32(ctx, 31, 0x47B710u);
    ctx->pc = 0x47B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47B708u;
    // 0x47b70c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473EA0u, 0x47B708u, 0x47B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47B710u;
label_47b710:
    // 0x47b710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47b710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b714: 0x3e00008  jr          $ra
    ctx->pc = 0x47B714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47B714u;
        // 0x47b718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B71Cu;
    // 0x47b71c: 0x0  nop
    ctx->pc = 0x47b71cu;
    // NOP
    ctx->pc = 0x47b720u;
}
