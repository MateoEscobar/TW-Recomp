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

// Function: sub_002FDA38
// Address: 0x2fda38 - 0x2fda68
void sub_002FDA38_0x2fda38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDA38_0x2fda38");
#endif

    ctx->pc = 0x2fda38u;

    // 0x2fda38: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2fda38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2fda3c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fda40: 0x244231a0  addiu       $v0, $v0, 0x31A0
    ctx->pc = 0x2fda40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
    // 0x2fda44: 0xa4870004  sh          $a3, 0x4($a0)
    ctx->pc = 0x2fda44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x2fda48: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2fda48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2fda4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fda4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fda50: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2fda50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fda54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fda54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fda58: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2fda58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fda5c: 0xa0850020  sb          $a1, 0x20($a0)
    ctx->pc = 0x2fda5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2fda60: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDA60u;
        // 0x2fda64: 0x7c830010  sq          $v1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA68u;
}
