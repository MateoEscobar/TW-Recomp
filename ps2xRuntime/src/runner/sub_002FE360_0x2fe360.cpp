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

// Function: sub_002FE360
// Address: 0x2fe360 - 0x2fe380
void sub_002FE360_0x2fe360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE360_0x2fe360");
#endif

    ctx->pc = 0x2fe360u;

    // 0x2fe360: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2fe360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2fe364: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2fe364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fe368: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2fe368u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2fe36c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2fe36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2fe370: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2fe370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fe374: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE374u;
        // 0x2fe378: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE37Cu;
    // 0x2fe37c: 0x0  nop
    ctx->pc = 0x2fe37cu;
    // NOP
    ctx->pc = 0x2fe380u;
}
