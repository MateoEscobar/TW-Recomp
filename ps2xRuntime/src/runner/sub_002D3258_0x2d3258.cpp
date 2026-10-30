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

// Function: sub_002D3258
// Address: 0x2d3258 - 0x2d3290
void sub_002D3258_0x2d3258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3258_0x2d3258");
#endif

    switch (ctx->pc) {
        case 0x2d3280u: goto label_2d3280;
        default: break;
    }

    ctx->pc = 0x2d3258u;

    // 0x2d3258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d325c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3260: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d3260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3264: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2d3264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x2d3268: 0x90850030  lbu         $a1, 0x30($a0)
    ctx->pc = 0x2d3268u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d326c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2d326cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3270: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d3270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d3274: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2d3274u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2d3278: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2D3278u;
    SET_GPR_U32(ctx, 31, 0x2D3280u);
    ctx->pc = 0x2D327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3278u;
    // 0x2d327c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D3278u, 0x2D3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3280u;
label_2d3280:
    // 0x2d3280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3284: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3284u;
        // 0x2d3288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D328Cu;
    // 0x2d328c: 0x0  nop
    ctx->pc = 0x2d328cu;
    // NOP
    ctx->pc = 0x2d3290u;
}
