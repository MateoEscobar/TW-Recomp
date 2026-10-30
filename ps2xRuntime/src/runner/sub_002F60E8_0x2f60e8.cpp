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

// Function: sub_002F60E8
// Address: 0x2f60e8 - 0x2f6120
void sub_002F60E8_0x2f60e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F60E8_0x2f60e8");
#endif

    ctx->pc = 0x2f60e8u;

    // 0x2f60e8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f60ec: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x2f60ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x2f60f0: 0x24c62550  addiu       $a2, $a2, 0x2550
    ctx->pc = 0x2f60f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9552));
    // 0x2f60f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f60f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f60f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f60f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f60fc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2f60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2f6100: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f6100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6104: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2f6104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2f6108: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2f6108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2f610c: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x2f610cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f6110: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2f6110u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6114: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6114u;
        // 0x2f6118: 0xa0800005  sb          $zero, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F611Cu;
    // 0x2f611c: 0x0  nop
    ctx->pc = 0x2f611cu;
    // NOP
    ctx->pc = 0x2f6120u;
}
