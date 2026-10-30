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

// Function: sub_00116D10
// Address: 0x116d10 - 0x116d48
void sub_00116D10_0x116d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116D10_0x116d10");
#endif

    ctx->pc = 0x116d10u;

    // 0x116d10: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x116d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x116d14: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x116d14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x116d18: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x116d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x116d1c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x116d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x116d20: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x116d20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116d24: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x116d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x116d28: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x116d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x116d2c: 0xac464070  sw          $a2, 0x4070($v0)
    ctx->pc = 0x116d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16496), GPR_U32(ctx, 6));
    // 0x116d30: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x116d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x116d34: 0xa0874078  sb          $a3, 0x4078($a0)
    ctx->pc = 0x116d34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16504), (uint8_t)GPR_U32(ctx, 7));
    // 0x116d38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x116d38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x116D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D3Cu;
        // 0x116d40: 0xac694074  sw          $t1, 0x4074($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16500), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116D44u;
    // 0x116d44: 0x0  nop
    ctx->pc = 0x116d44u;
    // NOP
    ctx->pc = 0x116d48u;
}
