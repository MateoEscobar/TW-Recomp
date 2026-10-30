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

// Function: sub_00116828
// Address: 0x116828 - 0x116848
void sub_00116828_0x116828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116828_0x116828");
#endif

    ctx->pc = 0x116828u;

    // 0x116828: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x116828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x11682c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x11682cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x116830: 0x34423cc4  ori         $v0, $v0, 0x3CC4
    ctx->pc = 0x116830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15556);
    // 0x116834: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x116834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116838: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x116838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11683c: 0x3e00008  jr          $ra
    ctx->pc = 0x11683Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11683Cu;
        // 0x116840: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11683Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116844u;
    // 0x116844: 0x0  nop
    ctx->pc = 0x116844u;
    // NOP
    ctx->pc = 0x116848u;
}
