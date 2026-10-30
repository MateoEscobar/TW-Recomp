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

// Function: sub_002B49F8
// Address: 0x2b49f8 - 0x2b4a38
void sub_002B49F8_0x2b49f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B49F8_0x2b49f8");
#endif

    ctx->pc = 0x2b49f8u;

    // 0x2b49f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b49fc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b49fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b4a00: 0x24630210  addiu       $v1, $v1, 0x210
    ctx->pc = 0x2b4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x2b4a04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b4a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b4a08: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b4a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b4a0c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2b4a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b4a10: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2b4a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2b4a14: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b4a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b4a18: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b4a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4a1c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2b4a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4a20: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2b4a20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4a24: 0x8ca3bd30  lw          $v1, -0x42D0($a1)
    ctx->pc = 0x2b4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2b4a28: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2b4a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2b4a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A2Cu;
        // 0x2b4a30: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4A34u;
    // 0x2b4a34: 0x0  nop
    ctx->pc = 0x2b4a34u;
    // NOP
    ctx->pc = 0x2b4a38u;
}
