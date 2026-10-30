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

// Function: sub_002D3C08
// Address: 0x2d3c08 - 0x2d3c30
void sub_002D3C08_0x2d3c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3C08_0x2d3c08");
#endif

    switch (ctx->pc) {
        case 0x2d3c20u: goto label_2d3c20;
        default: break;
    }

    ctx->pc = 0x2d3c08u;

    // 0x2d3c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d3c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3c14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d3c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3c18: 0xc087612  jal         func_21D848
    ctx->pc = 0x2D3C18u;
    SET_GPR_U32(ctx, 31, 0x2D3C20u);
    ctx->pc = 0x2D3C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C18u;
    // 0x2d3c1c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2D3C18u, 0x2D3C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C20u;
label_2d3c20:
    // 0x2d3c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3c24: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C24u;
        // 0x2d3c28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3C2Cu;
    // 0x2d3c2c: 0x0  nop
    ctx->pc = 0x2d3c2cu;
    // NOP
    ctx->pc = 0x2d3c30u;
}
