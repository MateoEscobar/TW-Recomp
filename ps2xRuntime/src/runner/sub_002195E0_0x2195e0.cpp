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

// Function: sub_002195E0
// Address: 0x2195e0 - 0x219608
void sub_002195E0_0x2195e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002195E0_0x2195e0");
#endif

    switch (ctx->pc) {
        case 0x2195f8u: goto label_2195f8;
        default: break;
    }

    ctx->pc = 0x2195e0u;

    // 0x2195e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2195e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2195e4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2195e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2195e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2195e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2195ec: 0xa08505b7  sb          $a1, 0x5B7($a0)
    ctx->pc = 0x2195ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1463), (uint8_t)GPR_U32(ctx, 5));
    // 0x2195f0: 0xc05c14e  jal         func_170538
    ctx->pc = 0x2195F0u;
    SET_GPR_U32(ctx, 31, 0x2195F8u);
    ctx->pc = 0x2195F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2195F0u;
    // 0x2195f4: 0x8c4471a0  lw          $a0, 0x71A0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170538u, 0x2195F0u, 0x2195F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2195F8u;
label_2195f8:
    // 0x2195f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2195f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2195fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2195FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2195FCu;
        // 0x219600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2195FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219604u;
    // 0x219604: 0x0  nop
    ctx->pc = 0x219604u;
    // NOP
    ctx->pc = 0x219608u;
}
