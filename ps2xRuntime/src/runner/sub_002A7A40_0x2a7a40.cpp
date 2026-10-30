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

// Function: sub_002A7A40
// Address: 0x2a7a40 - 0x2a7a88
void sub_002A7A40_0x2a7a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7A40_0x2a7a40");
#endif

    ctx->pc = 0x2a7a40u;

    // 0x2a7a40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a7a44: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2a7a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2a7a48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a7a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a7a4c: 0x2463f850  addiu       $v1, $v1, -0x7B0
    ctx->pc = 0x2a7a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965328));
    // 0x2a7a50: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2a7a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2a7a54: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2a7a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2a7a58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a7a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a5c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2a7a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2a7a60: 0xac890018  sw          $t1, 0x18($a0)
    ctx->pc = 0x2a7a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 9));
    // 0x2a7a64: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x2a7a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x2a7a68: 0xa4870020  sh          $a3, 0x20($a0)
    ctx->pc = 0x2a7a68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a7a6c: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x2a7a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x2a7a70: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2a7a70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7a74: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2a7a74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7a78: 0xa480002a  sh          $zero, 0x2A($a0)
    ctx->pc = 0x2a7a78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a7a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7A7Cu;
        // 0x2a7a80: 0xa480002c  sh          $zero, 0x2C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7A84u;
    // 0x2a7a84: 0x0  nop
    ctx->pc = 0x2a7a84u;
    // NOP
    ctx->pc = 0x2a7a88u;
}
