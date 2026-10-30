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

// Function: sub_0046A860
// Address: 0x46a860 - 0x46a890
void sub_0046A860_0x46a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A860_0x46a860");
#endif

    switch (ctx->pc) {
        case 0x46a878u: goto label_46a878;
        default: break;
    }

    ctx->pc = 0x46a860u;

    // 0x46a860: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x46a860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a864: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x46a864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x46a868: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46a868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x46a86c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a870: 0xc11ff82  jal         func_47FE08
    ctx->pc = 0x46A870u;
    SET_GPR_U32(ctx, 31, 0x46A878u);
    ctx->pc = 0x46A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46A870u;
    // 0x46a874: 0x2484e6b0  addiu       $a0, $a0, -0x1950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE08u, 0x46A870u, 0x46A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A878u;
label_46a878:
    // 0x46a878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a87c: 0x3e00008  jr          $ra
    ctx->pc = 0x46A87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A87Cu;
        // 0x46a880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A884u;
    // 0x46a884: 0x0  nop
    ctx->pc = 0x46a884u;
    // NOP
    // 0x46a888: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x46a888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46a88c: 0x0  nop
    ctx->pc = 0x46a88cu;
    // NOP
    ctx->pc = 0x46a890u;
}
