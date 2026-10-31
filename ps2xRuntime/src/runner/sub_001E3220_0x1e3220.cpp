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

// Function: sub_001E3220
// Address: 0x1e3220 - 0x1e3248
void sub_001E3220_0x1e3220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3220_0x1e3220");
#endif

    ctx->pc = 0x1e3220u;

    // 0x1e3220: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1e3220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3224: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3224u;
    {
        const bool branch_taken_0x1e3224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3224) {
            ctx->pc = 0x1E323Cu;
            goto label_1e323c;
        }
    }
    ctx->pc = 0x1E322Cu;
    // 0x1e322c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1e322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e3230: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3230u;
    {
        const bool branch_taken_0x1e3230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3230u;
        // 0x1e3234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3230) {
            ctx->pc = 0x1E323Cu;
            goto label_1e323c;
        }
    }
    ctx->pc = 0x1E3238u;
    // 0x1e3238: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1e3238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1e323c:
    // 0x1e323c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E323Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E323Cu;
        // 0x1e3240: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E323Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3244u;
    // 0x1e3244: 0x0  nop
    ctx->pc = 0x1e3244u;
    // NOP
    ctx->pc = 0x1e3248u;
}
