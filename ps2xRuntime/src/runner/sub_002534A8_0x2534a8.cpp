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

// Function: sub_002534A8
// Address: 0x2534a8 - 0x2534c0
void sub_002534A8_0x2534a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002534A8_0x2534a8");
#endif

    ctx->pc = 0x2534a8u;

    // 0x2534a8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2534a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2534ac: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2534acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2534b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2534b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2534b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2534B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2534B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534B4u;
        // 0x2534b8: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2534B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2534BCu;
    // 0x2534bc: 0x0  nop
    ctx->pc = 0x2534bcu;
    // NOP
    ctx->pc = 0x2534c0u;
}
