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

// Function: sub_00123888
// Address: 0x123888 - 0x1238a8
void sub_00123888_0x123888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123888_0x123888");
#endif

    switch (ctx->pc) {
        case 0x123898u: goto label_123898;
        default: break;
    }

    ctx->pc = 0x123888u;

    // 0x123888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12388c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123890: 0xc048e2a  jal         func_1238A8
    ctx->pc = 0x123890u;
    SET_GPR_U32(ctx, 31, 0x123898u);
    ctx->pc = 0x123894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123890u;
    // 0x123894: 0xac8501e0  sw          $a1, 0x1E0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238A8u, 0x123890u, 0x123898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123898u;
label_123898:
    // 0x123898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12389c: 0x3e00008  jr          $ra
    ctx->pc = 0x12389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1238A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12389Cu;
        // 0x1238a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12389Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1238A4u;
    // 0x1238a4: 0x0  nop
    ctx->pc = 0x1238a4u;
    // NOP
    ctx->pc = 0x1238a8u;
}
