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

// Function: sub_0041D8E0
// Address: 0x41d8e0 - 0x41d910
void sub_0041D8E0_0x41d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D8E0_0x41d8e0");
#endif

    switch (ctx->pc) {
        case 0x41d904u: goto label_41d904;
        default: break;
    }

    ctx->pc = 0x41d8e0u;

    // 0x41d8e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d8e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41d8e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41d8e8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x41d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d8ec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x41d8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x41d8f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d8f4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x41d8f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x41d8f8: 0xa064032a  sb          $a0, 0x32A($v1)
    ctx->pc = 0x41d8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 810), (uint8_t)GPR_U32(ctx, 4));
    // 0x41d8fc: 0xc10742a  jal         func_41D0A8
    ctx->pc = 0x41D8FCu;
    SET_GPR_U32(ctx, 31, 0x41D904u);
    ctx->pc = 0x41D900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D8FCu;
    // 0x41d900: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D0A8u, 0x41D8FCu, 0x41D904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D904u;
label_41d904:
    // 0x41d904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d908: 0x3e00008  jr          $ra
    ctx->pc = 0x41D908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D908u;
        // 0x41d90c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D910u;
}
