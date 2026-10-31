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

// Function: sub_004DB808
// Address: 0x4db808 - 0x4db828
void sub_004DB808_0x4db808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB808_0x4db808");
#endif

    ctx->pc = 0x4db808u;

    // 0x4db808: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4db808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4db80c: 0x8c62b1cc  lw          $v0, -0x4E34($v1)
    ctx->pc = 0x4db80cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B1CCu));
    // 0x4db810: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB810u;
        // 0x4db814: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB818u;
    // 0x4db818: 0x7c8201f0  sq          $v0, 0x1F0($a0)
    ctx->pc = 0x4db818u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 496), GPR_VEC(ctx, 2));
    // 0x4db81c: 0x0  nop
    ctx->pc = 0x4db81cu;
    // NOP
    // 0x4db820: 0x7c820200  sq          $v0, 0x200($a0)
    ctx->pc = 0x4db820u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 2));
    // 0x4db824: 0x0  nop
    ctx->pc = 0x4db824u;
    // NOP
    ctx->pc = 0x4db828u;
}
