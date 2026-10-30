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

// Function: sub_0046A200
// Address: 0x46a200 - 0x46a240
void sub_0046A200_0x46a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A200_0x46a200");
#endif

    ctx->pc = 0x46a200u;

    // 0x46a200: 0x8f8384bc  lw          $v1, -0x7B44($gp)
    ctx->pc = 0x46a200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x46a204: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x46a204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a208: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x46a208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x46a20c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x46a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x46a210: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x46a210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x46a214: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x46a214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x46a218: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x46a218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x46a21c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x46a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x46a220: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x46a220u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x46a224: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x46a224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x46a228: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x46a228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x46a22c: 0x3e00008  jr          $ra
    ctx->pc = 0x46A22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46A22Cu;
        // 0x46a230: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A234u;
    // 0x46a234: 0x0  nop
    ctx->pc = 0x46a234u;
    // NOP
    // 0x46a238: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x46a238u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x46a23c: 0x0  nop
    ctx->pc = 0x46a23cu;
    // NOP
    ctx->pc = 0x46a240u;
}
