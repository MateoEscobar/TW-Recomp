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

// Function: sub_0029EB10
// Address: 0x29eb10 - 0x29eb38
void sub_0029EB10_0x29eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EB10_0x29eb10");
#endif

    switch (ctx->pc) {
        case 0x29eb20u: goto label_29eb20;
        case 0x29eb28u: goto label_29eb28;
        default: break;
    }

    ctx->pc = 0x29eb10u;

    // 0x29eb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29eb14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29eb18: 0xc0e19e6  jal         func_386798
    ctx->pc = 0x29EB18u;
    SET_GPR_U32(ctx, 31, 0x29EB20u);
    ctx->pc = 0x386798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386798u, 0x29EB18u, 0x29EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB20u;
label_29eb20:
    // 0x29eb20: 0xc0a7ace  jal         func_29EB38
    ctx->pc = 0x29EB20u;
    SET_GPR_U32(ctx, 31, 0x29EB28u);
    ctx->pc = 0x29EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB20u;
    // 0x29eb24: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB38u, 0x29EB20u, 0x29EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB28u;
label_29eb28:
    // 0x29eb28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29eb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29eb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x29EB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EB2Cu;
        // 0x29eb30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EB34u;
    // 0x29eb34: 0x0  nop
    ctx->pc = 0x29eb34u;
    // NOP
    ctx->pc = 0x29eb38u;
}
