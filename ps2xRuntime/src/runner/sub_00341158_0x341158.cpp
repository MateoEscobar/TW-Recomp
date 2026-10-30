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

// Function: sub_00341158
// Address: 0x341158 - 0x341190
void sub_00341158_0x341158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341158_0x341158");
#endif

    ctx->pc = 0x341158u;

    // 0x341158: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x341158u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x34115c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x34115cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x341160: 0x24e716c0  addiu       $a3, $a3, 0x16C0
    ctx->pc = 0x341160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5824));
    // 0x341164: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x341164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x341168: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x341168u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x5116C0u));
    // 0x34116c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x34116cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341170: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x341170u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x341174: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x341174u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x341178: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x341178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x34117c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x34117cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x341180: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x341180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x341184: 0x3e00008  jr          $ra
    ctx->pc = 0x341184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341184u;
        // 0x341188: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34118Cu;
    // 0x34118c: 0x0  nop
    ctx->pc = 0x34118cu;
    // NOP
    ctx->pc = 0x341190u;
}
