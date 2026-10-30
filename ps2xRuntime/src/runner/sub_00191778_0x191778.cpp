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

// Function: sub_00191778
// Address: 0x191778 - 0x191798
void sub_00191778_0x191778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191778_0x191778");
#endif

    ctx->pc = 0x191778u;

    // 0x191778: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x191778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x19177c: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x19177cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x191780: 0x53202  srl         $a2, $a1, 8
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x191784: 0xa0820066  sb          $v0, 0x66($a0)
    ctx->pc = 0x191784u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 102), (uint8_t)GPR_U32(ctx, 2));
    // 0x191788: 0xa0830067  sb          $v1, 0x67($a0)
    ctx->pc = 0x191788u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 103), (uint8_t)GPR_U32(ctx, 3));
    // 0x19178c: 0xa0860065  sb          $a2, 0x65($a0)
    ctx->pc = 0x19178cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 6));
    // 0x191790: 0x3e00008  jr          $ra
    ctx->pc = 0x191790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191790u;
        // 0x191794: 0xa0850064  sb          $a1, 0x64($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191798u;
}
