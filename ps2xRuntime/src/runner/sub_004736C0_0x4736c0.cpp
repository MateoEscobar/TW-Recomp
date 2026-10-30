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

// Function: sub_004736C0
// Address: 0x4736c0 - 0x4736e8
void sub_004736C0_0x4736c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004736C0_0x4736c0");
#endif

    ctx->pc = 0x4736c0u;

    // 0x4736c0: 0x8f858524  lw          $a1, -0x7ADC($gp)
    ctx->pc = 0x4736c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935844)));
    // 0x4736c4: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x4736c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x4736c8: 0x24c62310  addiu       $a2, $a2, 0x2310
    ctx->pc = 0x4736c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8976));
    // 0x4736cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4736ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4736d0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x4736d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4736d4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4736d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4736d8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x4736d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4736dc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x4736dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x4736e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4736E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4736E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4736E0u;
        // 0x4736e4: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4736E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4736E8u;
}
