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

// Function: sub_003437E8
// Address: 0x3437e8 - 0x343810
void sub_003437E8_0x3437e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003437E8_0x3437e8");
#endif

    switch (ctx->pc) {
        case 0x343804u: goto label_343804;
        default: break;
    }

    ctx->pc = 0x3437e8u;

    // 0x3437e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3437e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3437ec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3437ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3437f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3437f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3437f4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3437f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3437f8: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x3437f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x3437fc: 0xc0d0a9c  jal         func_342A70
    ctx->pc = 0x3437FCu;
    SET_GPR_U32(ctx, 31, 0x343804u);
    ctx->pc = 0x343800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3437FCu;
    // 0x343800: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342A70u, 0x3437FCu, 0x343804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343804u;
label_343804:
    // 0x343804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343808: 0x3e00008  jr          $ra
    ctx->pc = 0x343808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343808u;
        // 0x34380c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343810u;
}
