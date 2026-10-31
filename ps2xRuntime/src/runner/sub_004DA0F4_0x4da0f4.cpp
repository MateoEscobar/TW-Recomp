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

// Function: sub_004DA0F4
// Address: 0x4da0f4 - 0x4da118
void sub_004DA0F4_0x4da0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA0F4_0x4da0f4");
#endif

    switch (ctx->pc) {
        case 0x4da0fcu: goto label_4da0fc;
        case 0x4da100u: goto label_4da100;
        default: break;
    }

    ctx->pc = 0x4da0f4u;

    // 0x4da0f4: 0xc10b61a  jal         func_42D868
    ctx->pc = 0x4DA0F4u;
    SET_GPR_U32(ctx, 31, 0x4DA0FCu);
    ctx->pc = 0x42D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D868u, 0x4DA0F4u, 0x4DA0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA0FCu;
label_4da0fc:
    // 0x4da0fc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4da0fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4da100:
    // 0x4da100: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x4da100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4da104: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4da104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4da108: 0x3e00008  jr          $ra
    ctx->pc = 0x4DA108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DA108u;
        // 0x4da10c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DA108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DA110u;
    // 0x4da110: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4da110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4da114: 0x0  nop
    ctx->pc = 0x4da114u;
    // NOP
    ctx->pc = 0x4da118u;
}
