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

// Function: sub_002F6878
// Address: 0x2f6878 - 0x2f68b0
void sub_002F6878_0x2f6878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6878_0x2f6878");
#endif

    ctx->pc = 0x2f6878u;

    // 0x2f6878: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f6878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f687c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x2f687cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x2f6880: 0x24c624f0  addiu       $a2, $a2, 0x24F0
    ctx->pc = 0x2f6880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9456));
    // 0x2f6884: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f6884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f6888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f6888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f688c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2f688cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2f6890: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f6890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6894: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2f6894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2f6898: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2f6898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2f689c: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x2f689cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f68a0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2f68a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f68a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F68A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F68A4u;
        // 0x2f68a8: 0xa0800005  sb          $zero, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F68A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F68ACu;
    // 0x2f68ac: 0x0  nop
    ctx->pc = 0x2f68acu;
    // NOP
    ctx->pc = 0x2f68b0u;
}
