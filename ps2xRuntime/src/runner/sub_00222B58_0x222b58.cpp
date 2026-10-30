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

// Function: sub_00222B58
// Address: 0x222b58 - 0x222b78
void sub_00222B58_0x222b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222B58_0x222b58");
#endif

    switch (ctx->pc) {
        case 0x222b68u: goto label_222b68;
        default: break;
    }

    ctx->pc = 0x222b58u;

    // 0x222b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222b60: 0xc08a212  jal         func_228848
    ctx->pc = 0x222B60u;
    SET_GPR_U32(ctx, 31, 0x222B68u);
    ctx->pc = 0x222B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B60u;
    // 0x222b64: 0x808401ba  lb          $a0, 0x1BA($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 442)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228848u, 0x222B60u, 0x222B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B68u;
label_222b68:
    // 0x222b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x222B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B6Cu;
        // 0x222b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222B74u;
    // 0x222b74: 0x0  nop
    ctx->pc = 0x222b74u;
    // NOP
    ctx->pc = 0x222b78u;
}
