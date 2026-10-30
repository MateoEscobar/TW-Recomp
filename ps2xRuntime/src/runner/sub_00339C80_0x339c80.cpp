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

// Function: sub_00339C80
// Address: 0x339c80 - 0x339cb8
void sub_00339C80_0x339c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339C80_0x339c80");
#endif

    switch (ctx->pc) {
        case 0x339ca0u: goto label_339ca0;
        default: break;
    }

    ctx->pc = 0x339c80u;

    // 0x339c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339c84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x339c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x339c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x339c8c: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x339c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x339c90: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x339c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x339c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x339c98: 0xc0ce512  jal         func_339448
    ctx->pc = 0x339C98u;
    SET_GPR_U32(ctx, 31, 0x339CA0u);
    ctx->pc = 0x339C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C98u;
    // 0x339c9c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339448u, 0x339C98u, 0x339CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339CA0u;
label_339ca0:
    // 0x339ca0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x339CA0u;
    {
        const bool branch_taken_0x339ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339ca0) {
            ctx->pc = 0x339CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339CA0u;
            // 0x339ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339CACu;
            goto label_339cac;
        }
    }
    ctx->pc = 0x339CA8u;
    // 0x339ca8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_339cac:
    // 0x339cac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x339CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CB0u;
        // 0x339cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339CB8u;
}
