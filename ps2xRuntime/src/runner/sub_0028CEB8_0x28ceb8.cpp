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

// Function: sub_0028CEB8
// Address: 0x28ceb8 - 0x28ced8
void sub_0028CEB8_0x28ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CEB8_0x28ceb8");
#endif

    switch (ctx->pc) {
        case 0x28cec8u: goto label_28cec8;
        default: break;
    }

    ctx->pc = 0x28ceb8u;

    // 0x28ceb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28cebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28cec0: 0xc0a306a  jal         func_28C1A8
    ctx->pc = 0x28CEC0u;
    SET_GPR_U32(ctx, 31, 0x28CEC8u);
    ctx->pc = 0x28CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CEC0u;
    // 0x28cec4: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C1A8u, 0x28CEC0u, 0x28CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEC8u;
label_28cec8:
    // 0x28cec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cecc: 0x3e00008  jr          $ra
    ctx->pc = 0x28CECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CECCu;
        // 0x28ced0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CED4u;
    // 0x28ced4: 0x0  nop
    ctx->pc = 0x28ced4u;
    // NOP
    ctx->pc = 0x28ced8u;
}
