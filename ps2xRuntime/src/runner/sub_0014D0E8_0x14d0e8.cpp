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

// Function: sub_0014D0E8
// Address: 0x14d0e8 - 0x14d108
void sub_0014D0E8_0x14d0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D0E8_0x14d0e8");
#endif

    switch (ctx->pc) {
        case 0x14d0fcu: goto label_14d0fc;
        default: break;
    }

    ctx->pc = 0x14d0e8u;

    // 0x14d0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d0ec: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x14d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x14d0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d0f4: 0xc053e4e  jal         func_14F938
    ctx->pc = 0x14D0F4u;
    SET_GPR_U32(ctx, 31, 0x14D0FCu);
    ctx->pc = 0x14D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D0F4u;
    // 0x14d0f8: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F938u, 0x14D0F4u, 0x14D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D0FCu;
label_14d0fc:
    // 0x14d0fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d100: 0x3e00008  jr          $ra
    ctx->pc = 0x14D100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D100u;
        // 0x14d104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D108u;
}
