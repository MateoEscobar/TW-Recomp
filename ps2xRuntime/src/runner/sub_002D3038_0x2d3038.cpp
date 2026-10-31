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

// Function: sub_002D3038
// Address: 0x2d3038 - 0x2d3060
void sub_002D3038_0x2d3038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3038_0x2d3038");
#endif

    switch (ctx->pc) {
        case 0x2d3050u: goto label_2d3050;
        default: break;
    }

    ctx->pc = 0x2d3038u;

    // 0x2d3038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d303c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d303cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3040: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d3040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d3044: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d3044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3048: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2D3048u;
    SET_GPR_U32(ctx, 31, 0x2D3050u);
    ctx->pc = 0x2D304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3048u;
    // 0x2d304c: 0x24840468  addiu       $a0, $a0, 0x468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2D3048u, 0x2D3050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3050u;
label_2d3050:
    // 0x2d3050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3054: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3054u;
        // 0x2d3058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D305Cu;
    // 0x2d305c: 0x0  nop
    ctx->pc = 0x2d305cu;
    // NOP
    ctx->pc = 0x2d3060u;
}
