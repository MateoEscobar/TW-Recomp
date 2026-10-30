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

// Function: sub_00253398
// Address: 0x253398 - 0x2533b8
void sub_00253398_0x253398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253398_0x253398");
#endif

    ctx->pc = 0x253398u;

    // 0x253398: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x253398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25339c: 0x3e00008  jr          $ra
    ctx->pc = 0x25339Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2533A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25339Cu;
        // 0x2533a0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25339Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2533A4u;
    // 0x2533a4: 0x0  nop
    ctx->pc = 0x2533a4u;
    // NOP
    // 0x2533a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2533a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2533ac: 0x0  nop
    ctx->pc = 0x2533acu;
    // NOP
    // 0x2533b0: 0x39c20001  xori        $v0, $t6, 0x1
    ctx->pc = 0x2533b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)1);
    // 0x2533b4: 0x0  nop
    ctx->pc = 0x2533b4u;
    // NOP
    ctx->pc = 0x2533b8u;
}
