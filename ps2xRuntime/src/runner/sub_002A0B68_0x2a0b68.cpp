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

// Function: sub_002A0B68
// Address: 0x2a0b68 - 0x2a0b98
void sub_002A0B68_0x2a0b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0B68_0x2a0b68");
#endif

    ctx->pc = 0x2a0b68u;

    // 0x2a0b68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a0b6c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2a0b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2a0b70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a0b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a0b74: 0x2463f490  addiu       $v1, $v1, -0xB70
    ctx->pc = 0x2a0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964368));
    // 0x2a0b78: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2a0b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2a0b7c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2a0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2a0b80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a0b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b84: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2a0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2a0b88: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2a0b88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0b8c: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2a0b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0b90: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0B90u;
        // 0x2a0b94: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0B98u;
}
