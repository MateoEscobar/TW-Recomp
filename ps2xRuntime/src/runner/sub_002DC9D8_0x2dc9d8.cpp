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

// Function: sub_002DC9D8
// Address: 0x2dc9d8 - 0x2dc9f8
void sub_002DC9D8_0x2dc9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC9D8_0x2dc9d8");
#endif

    switch (ctx->pc) {
        case 0x2dc9ecu: goto label_2dc9ec;
        default: break;
    }

    ctx->pc = 0x2dc9d8u;

    // 0x2dc9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc9e0: 0x80850030  lb          $a1, 0x30($a0)
    ctx->pc = 0x2dc9e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2dc9e4: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2DC9E4u;
    SET_GPR_U32(ctx, 31, 0x2DC9ECu);
    ctx->pc = 0x2DC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC9E4u;
    // 0x2dc9e8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2DC9E4u, 0x2DC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC9ECu;
label_2dc9ec:
    // 0x2dc9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC9F0u;
        // 0x2dc9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC9F8u;
}
