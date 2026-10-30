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

// Function: sub_001B24D0
// Address: 0x1b24d0 - 0x1b2500
void sub_001B24D0_0x1b24d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B24D0_0x1b24d0");
#endif

    ctx->pc = 0x1b24d0u;

    // 0x1b24d0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b24d4: 0x3403e050  ori         $v1, $zero, 0xE050
    ctx->pc = 0x1b24d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57424);
    // 0x1b24d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1b24d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1b24dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b24e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1b24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b24e4: 0xe44c1128  swc1        $f12, 0x1128($v0)
    ctx->pc = 0x1b24e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4392), bits); }
    // 0x1b24e8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1b24e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1b24ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B24ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24ECu;
        // 0x1b24f0: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B24ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B24F4u;
    // 0x1b24f4: 0x0  nop
    ctx->pc = 0x1b24f4u;
    // NOP
    // 0x1b24f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b24f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b24fc: 0x0  nop
    ctx->pc = 0x1b24fcu;
    // NOP
    ctx->pc = 0x1b2500u;
}
