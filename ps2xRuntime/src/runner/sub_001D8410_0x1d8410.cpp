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

// Function: sub_001D8410
// Address: 0x1d8410 - 0x1d8440
void sub_001D8410_0x1d8410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8410_0x1d8410");
#endif

    switch (ctx->pc) {
        case 0x1d8430u: goto label_1d8430;
        default: break;
    }

    ctx->pc = 0x1d8410u;

    // 0x1d8410: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d8414: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8418: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1d8418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1d841c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d841cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8420: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1d8420u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1d8424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8428: 0xc04416c  jal         func_1105B0
    ctx->pc = 0x1D8428u;
    SET_GPR_U32(ctx, 31, 0x1D8430u);
    ctx->pc = 0x1D842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8428u;
    // 0x1d842c: 0xaca30840  sw          $v1, 0x840($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 2112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1105B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1105B0u, 0x1D8428u, 0x1D8430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8430u;
label_1d8430:
    // 0x1d8430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8434: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8434u;
        // 0x1d8438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D843Cu;
    // 0x1d843c: 0x0  nop
    ctx->pc = 0x1d843cu;
    // NOP
    ctx->pc = 0x1d8440u;
}
