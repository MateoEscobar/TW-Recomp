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

// Function: sub_00439AA8
// Address: 0x439aa8 - 0x439ad0
void sub_00439AA8_0x439aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439AA8_0x439aa8");
#endif

    switch (ctx->pc) {
        case 0x439ac0u: goto label_439ac0;
        default: break;
    }

    ctx->pc = 0x439aa8u;

    // 0x439aa8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x439aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x439aac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x439aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x439ab0: 0x8c4469ec  lw          $a0, 0x69EC($v0)
    ctx->pc = 0x439ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5169ECu));
    // 0x439ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x439ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x439ab8: 0xc10e6a4  jal         func_439A90
    ctx->pc = 0x439AB8u;
    SET_GPR_U32(ctx, 31, 0x439AC0u);
    ctx->pc = 0x439A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439A90u, 0x439AB8u, 0x439AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439AC0u;
label_439ac0:
    // 0x439ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x439ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x439ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x439AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439AC4u;
        // 0x439ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x439AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x439ACCu;
    // 0x439acc: 0x0  nop
    ctx->pc = 0x439accu;
    // NOP
    ctx->pc = 0x439ad0u;
}
