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

// Function: sub_004AFA08
// Address: 0x4afa08 - 0x4afa28
void sub_004AFA08_0x4afa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFA08_0x4afa08");
#endif

    switch (ctx->pc) {
        case 0x4afa18u: goto label_4afa18;
        default: break;
    }

    ctx->pc = 0x4afa08u;

    // 0x4afa08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4afa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4afa0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afa10: 0xc12cadc  jal         func_4B2B70
    ctx->pc = 0x4AFA10u;
    SET_GPR_U32(ctx, 31, 0x4AFA18u);
    ctx->pc = 0x4B2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2B70u, 0x4AFA10u, 0x4AFA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFA18u;
label_4afa18:
    // 0x4afa18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFA1Cu;
        // 0x4afa20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFA24u;
    // 0x4afa24: 0x0  nop
    ctx->pc = 0x4afa24u;
    // NOP
    ctx->pc = 0x4afa28u;
}
