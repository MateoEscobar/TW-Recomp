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

// Function: sub_004DB6E8
// Address: 0x4db6e8 - 0x4db728
void sub_004DB6E8_0x4db6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB6E8_0x4db6e8");
#endif

    ctx->pc = 0x4db6e8u;

    // 0x4db6e8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4db6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4db6ec: 0x8c62b1cc  lw          $v0, -0x4E34($v1)
    ctx->pc = 0x4db6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B1CCu));
    // 0x4db6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB6F0u;
        // 0x4db6f4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB6F8u;
    // 0x4db6f8: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x4db6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4db6fc: 0x0  nop
    ctx->pc = 0x4db6fcu;
    // NOP
    // 0x4db700: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x4db700u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x4db704: 0x0  nop
    ctx->pc = 0x4db704u;
    // NOP
    // 0x4db708: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x4db708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x4db70c: 0x0  nop
    ctx->pc = 0x4db70cu;
    // NOP
    // 0x4db710: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db714: 0x0  nop
    ctx->pc = 0x4db714u;
    // NOP
    // 0x4db718: 0x7c820210  sq          $v0, 0x210($a0)
    ctx->pc = 0x4db718u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 528), GPR_VEC(ctx, 2));
    // 0x4db71c: 0x0  nop
    ctx->pc = 0x4db71cu;
    // NOP
    // 0x4db720: 0x7c820240  sq          $v0, 0x240($a0)
    ctx->pc = 0x4db720u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 576), GPR_VEC(ctx, 2));
    // 0x4db724: 0x0  nop
    ctx->pc = 0x4db724u;
    // NOP
    ctx->pc = 0x4db728u;
}
