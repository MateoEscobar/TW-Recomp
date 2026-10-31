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

// Function: sub_001E6E78
// Address: 0x1e6e78 - 0x1e6e98
void sub_001E6E78_0x1e6e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6E78_0x1e6e78");
#endif

    switch (ctx->pc) {
        case 0x1e6e8cu: goto label_1e6e8c;
        default: break;
    }

    ctx->pc = 0x1e6e78u;

    // 0x1e6e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6e7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6e84: 0xc079b88  jal         func_1E6E20
    ctx->pc = 0x1E6E84u;
    SET_GPR_U32(ctx, 31, 0x1E6E8Cu);
    ctx->pc = 0x1E6E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E84u;
    // 0x1e6e88: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E20u, 0x1E6E84u, 0x1E6E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6E8Cu;
label_1e6e8c:
    // 0x1e6e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E90u;
        // 0x1e6e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6E98u;
}
