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

// Function: sub_00228168
// Address: 0x228168 - 0x228188
void sub_00228168_0x228168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228168_0x228168");
#endif

    switch (ctx->pc) {
        case 0x228178u: goto label_228178;
        default: break;
    }

    ctx->pc = 0x228168u;

    // 0x228168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22816c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22816cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228170: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228170u;
    SET_GPR_U32(ctx, 31, 0x228178u);
    ctx->pc = 0x228174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228170u;
    // 0x228174: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228170u, 0x228178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228178u;
label_228178:
    // 0x228178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22817c: 0x3e00008  jr          $ra
    ctx->pc = 0x22817Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22817Cu;
        // 0x228180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22817Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228184u;
    // 0x228184: 0x0  nop
    ctx->pc = 0x228184u;
    // NOP
    ctx->pc = 0x228188u;
}
