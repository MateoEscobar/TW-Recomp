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

// Function: sub_002FE6E8
// Address: 0x2fe6e8 - 0x2fe720
void sub_002FE6E8_0x2fe6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE6E8_0x2fe6e8");
#endif

    ctx->pc = 0x2fe6e8u;

    // 0x2fe6e8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fe6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fe6ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fe6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fe6f0: 0x24632fa0  addiu       $v1, $v1, 0x2FA0
    ctx->pc = 0x2fe6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12192));
    // 0x2fe6f4: 0xa4880004  sh          $t0, 0x4($a0)
    ctx->pc = 0x2fe6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2fe6f8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fe6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fe6fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fe6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe700: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2fe700u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fe704: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2fe704u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2fe708: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x2fe708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x2fe70c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2fe70cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2fe710: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2fe710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2fe714: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE714u;
        // 0x2fe718: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE71Cu;
    // 0x2fe71c: 0x0  nop
    ctx->pc = 0x2fe71cu;
    // NOP
    ctx->pc = 0x2fe720u;
}
