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

// Function: sub_00219890
// Address: 0x219890 - 0x2198b8
void sub_00219890_0x219890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219890_0x219890");
#endif

    switch (ctx->pc) {
        case 0x2198a0u: goto label_2198a0;
        default: break;
    }

    ctx->pc = 0x219890u;

    // 0x219890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219898: 0xc087408  jal         func_21D020
    ctx->pc = 0x219898u;
    SET_GPR_U32(ctx, 31, 0x2198A0u);
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x219898u, 0x2198A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198A0u;
label_2198a0:
    // 0x2198a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2198a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2198a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2198a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2198a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2198A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2198ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198A8u;
        // 0x2198ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2198A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2198B0u;
    // 0x2198b0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2198b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2198b4: 0x0  nop
    ctx->pc = 0x2198b4u;
    // NOP
    ctx->pc = 0x2198b8u;
}
