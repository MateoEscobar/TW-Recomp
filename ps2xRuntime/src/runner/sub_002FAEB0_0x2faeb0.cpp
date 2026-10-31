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

// Function: sub_002FAEB0
// Address: 0x2faeb0 - 0x2faee0
void sub_002FAEB0_0x2faeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAEB0_0x2faeb0");
#endif

    ctx->pc = 0x2faeb0u;

    // 0x2faeb0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2faeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2faeb4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2faeb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2faeb8: 0x24632ca0  addiu       $v1, $v1, 0x2CA0
    ctx->pc = 0x2faeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11424));
    // 0x2faebc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2faebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2faec0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2faec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faec4: 0xa4870004  sh          $a3, 0x4($a0)
    ctx->pc = 0x2faec4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x2faec8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2faec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2faecc: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2faeccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2faed0: 0xa0880010  sb          $t0, 0x10($a0)
    ctx->pc = 0x2faed0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 8));
    // 0x2faed4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAED4u;
        // 0x2faed8: 0xa0800006  sb          $zero, 0x6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAEDCu;
    // 0x2faedc: 0x0  nop
    ctx->pc = 0x2faedcu;
    // NOP
    ctx->pc = 0x2faee0u;
}
