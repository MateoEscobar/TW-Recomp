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

// Function: sub_00439A50
// Address: 0x439a50 - 0x439a70
void sub_00439A50_0x439a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439A50_0x439a50");
#endif

    ctx->pc = 0x439a50u;

    // 0x439a50: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x439a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x439a54: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x439a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x439a58: 0x24a5c531  addiu       $a1, $a1, -0x3ACF
    ctx->pc = 0x439a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952241));
    // 0x439a5c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x439a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x439a60: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x439a60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x439a64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x439a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x439a68: 0x3e00008  jr          $ra
    ctx->pc = 0x439A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439A68u;
        // 0x439a6c: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x439A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x439A70u;
}
