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

// Function: sub_001A2638
// Address: 0x1a2638 - 0x1a2648
void sub_001A2638_0x1a2638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2638_0x1a2638");
#endif

    ctx->pc = 0x1a2638u;

    // 0x1a2638: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1a2638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a263c: 0xa08500f8  sb          $a1, 0xF8($a0)
    ctx->pc = 0x1a263cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 248), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a2640: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2640u;
        // 0x1a2644: 0xa08500b7  sb          $a1, 0xB7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 183), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2648u;
}
