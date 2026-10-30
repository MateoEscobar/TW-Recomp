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

// Function: sub_001E0430
// Address: 0x1e0430 - 0x1e0460
void sub_001E0430_0x1e0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0430_0x1e0430");
#endif

    switch (ctx->pc) {
        case 0x1e0444u: goto label_1e0444;
        case 0x1e044cu: goto label_1e044c;
        default: break;
    }

    ctx->pc = 0x1e0430u;

    // 0x1e0430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0434: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e0438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e043c: 0xc074712  jal         func_1D1C48
    ctx->pc = 0x1E043Cu;
    SET_GPR_U32(ctx, 31, 0x1E0444u);
    ctx->pc = 0x1E0440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E043Cu;
    // 0x1e0440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1C48u, 0x1E043Cu, 0x1E0444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0444u;
label_1e0444:
    // 0x1e0444: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1E0444u;
    SET_GPR_U32(ctx, 31, 0x1E044Cu);
    ctx->pc = 0x1E0448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0444u;
    // 0x1e0448: 0x26040880  addiu       $a0, $s0, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1E0444u, 0x1E044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E044Cu;
label_1e044c:
    // 0x1e044c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e044cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0454: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0454u;
        // 0x1e0458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E045Cu;
    // 0x1e045c: 0x0  nop
    ctx->pc = 0x1e045cu;
    // NOP
    ctx->pc = 0x1e0460u;
}
