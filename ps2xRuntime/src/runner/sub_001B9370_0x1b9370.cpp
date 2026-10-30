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

// Function: sub_001B9370
// Address: 0x1b9370 - 0x1b93a0
void sub_001B9370_0x1b9370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9370_0x1b9370");
#endif

    switch (ctx->pc) {
        case 0x1b938cu: goto label_1b938c;
        default: break;
    }

    ctx->pc = 0x1b9370u;

    // 0x1b9370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9374: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1b9374u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b9378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b937c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b937cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9380: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x1b9380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1b9384: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1B9384u;
    SET_GPR_U32(ctx, 31, 0x1B938Cu);
    ctx->pc = 0x1B9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9384u;
    // 0x1b9388: 0x7c620020  sq          $v0, 0x20($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1B9384u, 0x1B938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B938Cu;
label_1b938c:
    // 0x1b938c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b938cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9390: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9390u;
        // 0x1b9394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9398u;
    // 0x1b9398: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b9398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b939c: 0x0  nop
    ctx->pc = 0x1b939cu;
    // NOP
    ctx->pc = 0x1b93a0u;
}
