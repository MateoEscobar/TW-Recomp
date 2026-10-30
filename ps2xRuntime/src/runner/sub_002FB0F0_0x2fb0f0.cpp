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

// Function: sub_002FB0F0
// Address: 0x2fb0f0 - 0x2fb128
void sub_002FB0F0_0x2fb0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB0F0_0x2fb0f0");
#endif

    ctx->pc = 0x2fb0f0u;

    // 0x2fb0f0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fb0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fb0f4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2fb0f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb0f8: 0x24632e60  addiu       $v1, $v1, 0x2E60
    ctx->pc = 0x2fb0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11872));
    // 0x2fb0fc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fb0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fb100: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fb100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb104: 0xa4890004  sh          $t1, 0x4($a0)
    ctx->pc = 0x2fb104u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x2fb108: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fb108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fb10c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2fb10cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2fb110: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x2fb110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2fb114: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x2fb114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
    // 0x2fb118: 0xa4880018  sh          $t0, 0x18($a0)
    ctx->pc = 0x2fb118u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 8));
    // 0x2fb11c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB11Cu;
        // 0x2fb120: 0xa0800006  sb          $zero, 0x6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB124u;
    // 0x2fb124: 0x0  nop
    ctx->pc = 0x2fb124u;
    // NOP
    ctx->pc = 0x2fb128u;
}
