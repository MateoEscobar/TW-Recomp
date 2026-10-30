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

// Function: sub_002F9F48
// Address: 0x2f9f48 - 0x2f9f78
void sub_002F9F48_0x2f9f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9F48_0x2f9f48");
#endif

    ctx->pc = 0x2f9f48u;

    // 0x2f9f48: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f9f4c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2f9f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2f9f50: 0x24632c60  addiu       $v1, $v1, 0x2C60
    ctx->pc = 0x2f9f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11360));
    // 0x2f9f54: 0xa4890004  sh          $t1, 0x4($a0)
    ctx->pc = 0x2f9f54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x2f9f58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f9f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f5c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2f9f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2f9f60: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2f9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2f9f64: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x2f9f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x2f9f68: 0xa4880014  sh          $t0, 0x14($a0)
    ctx->pc = 0x2f9f68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 8));
    // 0x2f9f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F6Cu;
        // 0x2f9f70: 0xa0800006  sb          $zero, 0x6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9F74u;
    // 0x2f9f74: 0x0  nop
    ctx->pc = 0x2f9f74u;
    // NOP
    ctx->pc = 0x2f9f78u;
}
