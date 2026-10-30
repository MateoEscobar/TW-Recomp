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

// Function: sub_001CFEA0
// Address: 0x1cfea0 - 0x1cfec0
void sub_001CFEA0_0x1cfea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFEA0_0x1cfea0");
#endif

    switch (ctx->pc) {
        case 0x1cfeb4u: goto label_1cfeb4;
        default: break;
    }

    ctx->pc = 0x1cfea0u;

    // 0x1cfea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfea4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cfea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfeac: 0xc073f94  jal         func_1CFE50
    ctx->pc = 0x1CFEACu;
    SET_GPR_U32(ctx, 31, 0x1CFEB4u);
    ctx->pc = 0x1CFEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEACu;
    // 0x1cfeb0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFE50u, 0x1CFEACu, 0x1CFEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEB4u;
label_1cfeb4:
    // 0x1cfeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEB8u;
        // 0x1cfebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFEC0u;
}
