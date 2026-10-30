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

// Function: sub_004DB0E0
// Address: 0x4db0e0 - 0x4db108
void sub_004DB0E0_0x4db0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB0E0_0x4db0e0");
#endif

    switch (ctx->pc) {
        case 0x4db0fcu: goto label_4db0fc;
        default: break;
    }

    ctx->pc = 0x4db0e0u;

    // 0x4db0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4db0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4db0e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4db0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db0ec: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x4db0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x4db0f0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x4db0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4db0f4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x4DB0F4u;
    SET_GPR_U32(ctx, 31, 0x4DB0FCu);
    ctx->pc = 0x4DB0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB0F4u;
    // 0x4db0f8: 0xa040003f  sb          $zero, 0x3F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x4DB0F4u, 0x4DB0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB0FCu;
label_4db0fc:
    // 0x4db0fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db100: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB100u;
        // 0x4db104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB108u;
}
