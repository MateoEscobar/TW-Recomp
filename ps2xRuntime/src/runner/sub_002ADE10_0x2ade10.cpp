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

// Function: sub_002ADE10
// Address: 0x2ade10 - 0x2ade50
void sub_002ADE10_0x2ade10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADE10_0x2ade10");
#endif

    ctx->pc = 0x2ade10u;

    // 0x2ade10: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ade10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ade14: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2ade14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2ade18: 0x24630450  addiu       $v1, $v1, 0x450
    ctx->pc = 0x2ade18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1104));
    // 0x2ade1c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2ade1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2ade20: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2ade20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2ade24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ade24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade28: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2ade28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2ade2c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2ade2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2ade30: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x2ade30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x2ade34: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x2ade34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x2ade38: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2ade38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ade3c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2ade3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ade40: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2ade40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2ade44: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADE44u;
        // 0x2ade48: 0xa080001c  sb          $zero, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADE4Cu;
    // 0x2ade4c: 0x0  nop
    ctx->pc = 0x2ade4cu;
    // NOP
    ctx->pc = 0x2ade50u;
}
