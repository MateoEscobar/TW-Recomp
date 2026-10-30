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

// Function: sub_004B06D8
// Address: 0x4b06d8 - 0x4b06f0
void sub_004B06D8_0x4b06d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B06D8_0x4b06d8");
#endif

    ctx->pc = 0x4b06d8u;

    // 0x4b06d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b06dc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B06DCu;
    {
        const bool branch_taken_0x4b06dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b06dc) {
            ctx->pc = 0x4B06E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B06DCu;
            // 0x4b06e0: 0x34a50004  ori         $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B06E4u;
            goto label_4b06e4;
        }
    }
    ctx->pc = 0x4B06E4u;
label_4b06e4:
    // 0x4b06e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B06E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B06E4u;
        // 0x4b06e8: 0xa085001a  sb          $a1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B06E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B06ECu;
    // 0x4b06ec: 0x0  nop
    ctx->pc = 0x4b06ecu;
    // NOP
    ctx->pc = 0x4b06f0u;
}
