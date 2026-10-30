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

// Function: sub_002F8C90
// Address: 0x2f8c90 - 0x2f8ce0
void sub_002F8C90_0x2f8c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8C90_0x2f8c90");
#endif

    ctx->pc = 0x2f8c90u;

    // 0x2f8c90: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f8c94: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f8c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f8c98: 0x24632a60  addiu       $v1, $v1, 0x2A60
    ctx->pc = 0x2f8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10848));
    // 0x2f8c9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f8c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f8ca0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f8ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8ca4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2f8ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2f8ca8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2f8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2f8cac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f8cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8cb0: 0xa086002a  sb          $a2, 0x2A($a0)
    ctx->pc = 0x2f8cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f8cb4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2f8cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2f8cb8: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2f8cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8cbc: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2f8cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8cc0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2f8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2f8cc4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2f8cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2f8cc8: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x2f8cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8ccc: 0xa0800029  sb          $zero, 0x29($a0)
    ctx->pc = 0x2f8cccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8cd0: 0x78a30230  lq          $v1, 0x230($a1)
    ctx->pc = 0x2f8cd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 560)));
    // 0x2f8cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CD4u;
        // 0x2f8cd8: 0x7c830010  sq          $v1, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8CDCu;
    // 0x2f8cdc: 0x0  nop
    ctx->pc = 0x2f8cdcu;
    // NOP
    ctx->pc = 0x2f8ce0u;
}
