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

// Function: sub_002269D8
// Address: 0x2269d8 - 0x226a00
void sub_002269D8_0x2269d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002269D8_0x2269d8");
#endif

    switch (ctx->pc) {
        case 0x2269f4u: goto label_2269f4;
        default: break;
    }

    ctx->pc = 0x2269d8u;

    // 0x2269d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2269d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2269dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2269dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2269e0: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x2269e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2269e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2269E4u;
    {
        const bool branch_taken_0x2269e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2269E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269E4u;
        // 0x2269e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269e4) {
            ctx->pc = 0x2269F4u;
            goto label_2269f4;
        }
    }
    ctx->pc = 0x2269ECu;
    // 0x2269ec: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2269ECu;
    SET_GPR_U32(ctx, 31, 0x2269F4u);
    ctx->pc = 0x2269F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2269ECu;
    // 0x2269f0: 0x248400c4  addiu       $a0, $a0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2269ECu, 0x2269F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269F4u;
label_2269f4:
    // 0x2269f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2269f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2269f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2269F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2269FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269F8u;
        // 0x2269fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2269F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226A00u;
}
