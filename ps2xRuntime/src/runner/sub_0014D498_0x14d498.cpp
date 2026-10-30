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

// Function: sub_0014D498
// Address: 0x14d498 - 0x14d4c0
void sub_0014D498_0x14d498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D498_0x14d498");
#endif

    switch (ctx->pc) {
        case 0x14d4acu: goto label_14d4ac;
        default: break;
    }

    ctx->pc = 0x14d498u;

    // 0x14d498: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14d498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14d49c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14d49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d4a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14d4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14d4a4: 0xc05420e  jal         func_150838
    ctx->pc = 0x14D4A4u;
    SET_GPR_U32(ctx, 31, 0x14D4ACu);
    ctx->pc = 0x14D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D4A4u;
    // 0x14d4a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14D4A4u, 0x14D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D4ACu;
label_14d4ac:
    // 0x14d4ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x14d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14d4b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14d4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4B4u;
        // 0x14d4b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D4BCu;
    // 0x14d4bc: 0x0  nop
    ctx->pc = 0x14d4bcu;
    // NOP
    ctx->pc = 0x14d4c0u;
}
