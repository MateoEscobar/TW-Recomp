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

// Function: sub_004AFA28
// Address: 0x4afa28 - 0x4afa48
void sub_004AFA28_0x4afa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFA28_0x4afa28");
#endif

    switch (ctx->pc) {
        case 0x4afa38u: goto label_4afa38;
        default: break;
    }

    ctx->pc = 0x4afa28u;

    // 0x4afa28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afa2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afa30: 0xc12c392  jal         func_4B0E48
    ctx->pc = 0x4AFA30u;
    SET_GPR_U32(ctx, 31, 0x4AFA38u);
    ctx->pc = 0x4B0E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0E48u, 0x4AFA30u, 0x4AFA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFA38u;
label_4afa38:
    // 0x4afa38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFA3Cu;
        // 0x4afa40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFA44u;
    // 0x4afa44: 0x0  nop
    ctx->pc = 0x4afa44u;
    // NOP
    ctx->pc = 0x4afa48u;
}
