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

// Function: sub_003978A8
// Address: 0x3978a8 - 0x3978d0
void sub_003978A8_0x3978a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003978A8_0x3978a8");
#endif

    switch (ctx->pc) {
        case 0x3978c0u: goto label_3978c0;
        default: break;
    }

    ctx->pc = 0x3978a8u;

    // 0x3978a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3978a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3978ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3978acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3978b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3978b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3978b4: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3978b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3978b8: 0xc0e66c8  jal         func_399B20
    ctx->pc = 0x3978B8u;
    SET_GPR_U32(ctx, 31, 0x3978C0u);
    ctx->pc = 0x3978BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3978B8u;
    // 0x3978bc: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399B20u, 0x3978B8u, 0x3978C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3978C0u;
label_3978c0:
    // 0x3978c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3978c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3978c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3978C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3978C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978C4u;
        // 0x3978c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3978C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3978CCu;
    // 0x3978cc: 0x0  nop
    ctx->pc = 0x3978ccu;
    // NOP
    ctx->pc = 0x3978d0u;
}
