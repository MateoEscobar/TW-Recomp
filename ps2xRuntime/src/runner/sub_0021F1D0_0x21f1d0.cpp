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

// Function: sub_0021F1D0
// Address: 0x21f1d0 - 0x21f208
void sub_0021F1D0_0x21f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F1D0_0x21f1d0");
#endif

    switch (ctx->pc) {
        case 0x21f1f8u: goto label_21f1f8;
        default: break;
    }

    ctx->pc = 0x21f1d0u;

    // 0x21f1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21f1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f1d8: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x21f1d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x21f1dc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21f1dcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21f1e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F1E0u;
    {
        const bool branch_taken_0x21f1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1E0u;
        // 0x21f1e4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1e0) {
            ctx->pc = 0x21F1F8u;
            goto label_21f1f8;
        }
    }
    ctx->pc = 0x21F1E8u;
    // 0x21f1e8: 0x8c85017c  lw          $a1, 0x17C($a0)
    ctx->pc = 0x21f1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x21f1ec: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x21f1f0: 0xc0440c6  jal         func_110318
    ctx->pc = 0x21F1F0u;
    SET_GPR_U32(ctx, 31, 0x21F1F8u);
    ctx->pc = 0x21F1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1F0u;
    // 0x21f1f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x21F1F0u, 0x21F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1F8u;
label_21f1f8:
    // 0x21f1f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21f1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x21F1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1FCu;
        // 0x21f200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F204u;
    // 0x21f204: 0x0  nop
    ctx->pc = 0x21f204u;
    // NOP
    ctx->pc = 0x21f208u;
}
