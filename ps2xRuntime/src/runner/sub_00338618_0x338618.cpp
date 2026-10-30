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

// Function: sub_00338618
// Address: 0x338618 - 0x338640
void sub_00338618_0x338618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338618_0x338618");
#endif

    ctx->pc = 0x338618u;

    // 0x338618: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x338618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33861c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33861cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338620: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x338620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x338624: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x338624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x338628: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x338628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33862c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x338630: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x338630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x338634: 0x3e00008  jr          $ra
    ctx->pc = 0x338634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338634u;
        // 0x338638: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33863Cu;
    // 0x33863c: 0x0  nop
    ctx->pc = 0x33863cu;
    // NOP
    ctx->pc = 0x338640u;
}
