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

// Function: sub_00390248
// Address: 0x390248 - 0x390268
void sub_00390248_0x390248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390248_0x390248");
#endif

    switch (ctx->pc) {
        case 0x390258u: goto label_390258;
        default: break;
    }

    ctx->pc = 0x390248u;

    // 0x390248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x390248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39024c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39024cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x390250: 0xc0e4060  jal         func_390180
    ctx->pc = 0x390250u;
    SET_GPR_U32(ctx, 31, 0x390258u);
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x390250u, 0x390258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390258u;
label_390258:
    // 0x390258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39025c: 0x3e00008  jr          $ra
    ctx->pc = 0x39025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39025Cu;
        // 0x390260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39025Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390264u;
    // 0x390264: 0x0  nop
    ctx->pc = 0x390264u;
    // NOP
    ctx->pc = 0x390268u;
}
