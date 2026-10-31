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

// Function: sub_0041E218
// Address: 0x41e218 - 0x41e250
void sub_0041E218_0x41e218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E218_0x41e218");
#endif

    switch (ctx->pc) {
        case 0x41e230u: goto label_41e230;
        default: break;
    }

    ctx->pc = 0x41e218u;

    // 0x41e218: 0x240203f4  addiu       $v0, $zero, 0x3F4
    ctx->pc = 0x41e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x41e21c: 0x248407ec  addiu       $a0, $a0, 0x7EC
    ctx->pc = 0x41e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2028));
    // 0x41e220: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x41e220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x41e224: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x41e224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e228: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x41e228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x41e22c: 0x0  nop
    ctx->pc = 0x41e22cu;
    // NOP
label_41e230:
    // 0x41e230: 0xaca0f838  sw          $zero, -0x7C8($a1)
    ctx->pc = 0x41e230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294965304), GPR_U32(ctx, 0));
    // 0x41e234: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x41e234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x41e238: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x41e238u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x41e23c: 0x2c620017  sltiu       $v0, $v1, 0x17
    ctx->pc = 0x41e23cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x41e240: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x41E240u;
    {
        const bool branch_taken_0x41e240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E240u;
        // 0x41e244: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e240) {
            ctx->pc = 0x41E230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e230;
        }
    }
    ctx->pc = 0x41E248u;
    // 0x41e248: 0x3e00008  jr          $ra
    ctx->pc = 0x41E248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E250u;
}
