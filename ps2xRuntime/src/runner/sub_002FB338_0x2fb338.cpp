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

// Function: sub_002FB338
// Address: 0x2fb338 - 0x2fb360
void sub_002FB338_0x2fb338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB338_0x2fb338");
#endif

    ctx->pc = 0x2fb338u;

    // 0x2fb338: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fb338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fb33c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2fb33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2fb340: 0x24632e20  addiu       $v1, $v1, 0x2E20
    ctx->pc = 0x2fb340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11808));
    // 0x2fb344: 0xa4860004  sh          $a2, 0x4($a0)
    ctx->pc = 0x2fb344u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x2fb348: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fb348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb34c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2fb34cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2fb350: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x2fb350u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fb354: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB354u;
        // 0x2fb358: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB35Cu;
    // 0x2fb35c: 0x0  nop
    ctx->pc = 0x2fb35cu;
    // NOP
    ctx->pc = 0x2fb360u;
}
