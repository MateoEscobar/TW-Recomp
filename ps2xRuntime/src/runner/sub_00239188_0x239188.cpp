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

// Function: sub_00239188
// Address: 0x239188 - 0x2391a8
void sub_00239188_0x239188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239188_0x239188");
#endif

    switch (ctx->pc) {
        case 0x239198u: goto label_239198;
        default: break;
    }

    ctx->pc = 0x239188u;

    // 0x239188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23918c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239190: 0xc09d062  jal         func_274188
    ctx->pc = 0x239190u;
    SET_GPR_U32(ctx, 31, 0x239198u);
    ctx->pc = 0x274188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274188u, 0x239190u, 0x239198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239198u;
label_239198:
    // 0x239198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23919c: 0x3e00008  jr          $ra
    ctx->pc = 0x23919Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2391A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23919Cu;
        // 0x2391a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23919Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2391A4u;
    // 0x2391a4: 0x0  nop
    ctx->pc = 0x2391a4u;
    // NOP
    ctx->pc = 0x2391a8u;
}
