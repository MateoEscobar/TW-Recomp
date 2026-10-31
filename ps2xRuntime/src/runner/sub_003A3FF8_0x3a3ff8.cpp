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

// Function: sub_003A3FF8
// Address: 0x3a3ff8 - 0x3a4030
void sub_003A3FF8_0x3a3ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3FF8_0x3a3ff8");
#endif

    ctx->pc = 0x3a3ff8u;

    // 0x3a3ff8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3a3ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x3a3ffc: 0x24020410  addiu       $v0, $zero, 0x410
    ctx->pc = 0x3a3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x3a4000: 0x8ca32c8c  lw          $v1, 0x2C8C($a1)
    ctx->pc = 0x3a4000u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C8Cu));
    // 0x3a4004: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3a4004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x3a4008: 0x24841550  addiu       $a0, $a0, 0x1550
    ctx->pc = 0x3a4008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5456));
    // 0x3a400c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a4010: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3a4010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a4014: 0xaca32c8c  sw          $v1, 0x2C8C($a1)
    ctx->pc = 0x3a4014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11404), GPR_U32(ctx, 3));
    // 0x3a4018: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a4018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a401c: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x3a401cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3a4020: 0xac420404  sw          $v0, 0x404($v0)
    ctx->pc = 0x3a4020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1028), GPR_U32(ctx, 2));
    // 0x3a4024: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4024u;
        // 0x3a4028: 0xac430400  sw          $v1, 0x400($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A402Cu;
    // 0x3a402c: 0x0  nop
    ctx->pc = 0x3a402cu;
    // NOP
    ctx->pc = 0x3a4030u;
}
