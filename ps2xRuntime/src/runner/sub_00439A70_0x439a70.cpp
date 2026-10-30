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

// Function: sub_00439A70
// Address: 0x439a70 - 0x439a90
void sub_00439A70_0x439a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439A70_0x439a70");
#endif

    ctx->pc = 0x439a70u;

    // 0x439a70: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x439a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x439a74: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x439a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x439a78: 0x24a5c531  addiu       $a1, $a1, -0x3ACF
    ctx->pc = 0x439a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952241));
    // 0x439a7c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x439a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x439a80: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x439a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x439a84: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x439a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x439a88: 0x3e00008  jr          $ra
    ctx->pc = 0x439A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439A88u;
        // 0x439a8c: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x439A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x439A90u;
}
