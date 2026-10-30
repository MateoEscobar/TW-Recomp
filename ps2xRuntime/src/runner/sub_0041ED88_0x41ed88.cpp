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

// Function: sub_0041ED88
// Address: 0x41ed88 - 0x41edb8
void sub_0041ED88_0x41ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041ED88_0x41ed88");
#endif

    switch (ctx->pc) {
        case 0x41eda8u: goto label_41eda8;
        default: break;
    }

    ctx->pc = 0x41ed88u;

    // 0x41ed88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41ed8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41ed8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41ed90: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41ed94: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x41ed94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ed98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41ed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41ed9c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x41ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x41eda0: 0xc1078f6  jal         func_41E3D8
    ctx->pc = 0x41EDA0u;
    SET_GPR_U32(ctx, 31, 0x41EDA8u);
    ctx->pc = 0x41EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EDA0u;
    // 0x41eda4: 0x24640480  addiu       $a0, $v1, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3D8u, 0x41EDA0u, 0x41EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EDA8u;
label_41eda8:
    // 0x41eda8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41eda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41edac: 0x3e00008  jr          $ra
    ctx->pc = 0x41EDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EDACu;
        // 0x41edb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41EDB4u;
    // 0x41edb4: 0x0  nop
    ctx->pc = 0x41edb4u;
    // NOP
    ctx->pc = 0x41edb8u;
}
