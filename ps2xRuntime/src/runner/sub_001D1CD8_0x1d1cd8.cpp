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

// Function: sub_001D1CD8
// Address: 0x1d1cd8 - 0x1d1d08
void sub_001D1CD8_0x1d1cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1CD8_0x1d1cd8");
#endif

    switch (ctx->pc) {
        case 0x1d1cf0u: goto label_1d1cf0;
        default: break;
    }

    ctx->pc = 0x1d1cd8u;

    // 0x1d1cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1cdc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d1ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1ce4: 0x8c850134  lw          $a1, 0x134($a0)
    ctx->pc = 0x1d1ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
    // 0x1d1ce8: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x1D1CE8u;
    SET_GPR_U32(ctx, 31, 0x1D1CF0u);
    ctx->pc = 0x1D1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CE8u;
    // 0x1d1cec: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1D1CE8u, 0x1D1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CF0u;
label_1d1cf0:
    // 0x1d1cf0: 0x90420011  lbu         $v0, 0x11($v0)
    ctx->pc = 0x1d1cf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
    // 0x1d1cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1cf8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d1cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d1cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CFCu;
        // 0x1d1d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1D04u;
    // 0x1d1d04: 0x0  nop
    ctx->pc = 0x1d1d04u;
    // NOP
    ctx->pc = 0x1d1d08u;
}
