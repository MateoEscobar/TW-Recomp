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

// Function: sub_004239E0
// Address: 0x4239e0 - 0x423a08
void sub_004239E0_0x4239e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004239E0_0x4239e0");
#endif

    switch (ctx->pc) {
        case 0x4239f8u: goto label_4239f8;
        default: break;
    }

    ctx->pc = 0x4239e0u;

    // 0x4239e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4239e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4239e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4239e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4239e8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x4239e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x4239ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4239ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4239f0: 0xc109358  jal         func_424D60
    ctx->pc = 0x4239F0u;
    SET_GPR_U32(ctx, 31, 0x4239F8u);
    ctx->pc = 0x4239F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4239F0u;
    // 0x4239f4: 0x2484e998  addiu       $a0, $a0, -0x1668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424D60u, 0x4239F0u, 0x4239F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4239F8u;
label_4239f8:
    // 0x4239f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4239f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4239fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4239FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4239FCu;
        // 0x423a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4239FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423A04u;
    // 0x423a04: 0x0  nop
    ctx->pc = 0x423a04u;
    // NOP
    ctx->pc = 0x423a08u;
}
