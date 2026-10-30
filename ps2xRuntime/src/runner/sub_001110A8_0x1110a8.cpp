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

// Function: sub_001110A8
// Address: 0x1110a8 - 0x1110c8
void sub_001110A8_0x1110a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001110A8_0x1110a8");
#endif

    switch (ctx->pc) {
        case 0x1110b8u: goto label_1110b8;
        default: break;
    }

    ctx->pc = 0x1110a8u;

    // 0x1110a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1110a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1110ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1110acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1110b0: 0xc04528e  jal         func_114A38
    ctx->pc = 0x1110B0u;
    SET_GPR_U32(ctx, 31, 0x1110B8u);
    ctx->pc = 0x1110B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1110B0u;
    // 0x1110b4: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A38u, 0x1110B0u, 0x1110B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110B8u;
label_1110b8:
    // 0x1110b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1110b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1110bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1110BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1110C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110BCu;
        // 0x1110c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1110BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1110C4u;
    // 0x1110c4: 0x0  nop
    ctx->pc = 0x1110c4u;
    // NOP
    ctx->pc = 0x1110c8u;
}
