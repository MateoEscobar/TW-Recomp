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

// Function: sub_00119F78
// Address: 0x119f78 - 0x119fc0
void sub_00119F78_0x119f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119F78_0x119f78");
#endif

    ctx->pc = 0x119f78u;

    // 0x119f78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x119f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119f7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x119f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119f80: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x119f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x119f84: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x119f84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x119f88: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x119f88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x119f8c: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x119f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x119f90: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x119f90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x119f94: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x119f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x119f98: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x119f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x119f9c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x119f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x119fa0: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x119fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x119fa4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x119fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x119fa8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x119fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x119fac: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x119facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x119fb0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x119fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x119fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x119FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FB4u;
        // 0x119fb8: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119FBCu;
    // 0x119fbc: 0x0  nop
    ctx->pc = 0x119fbcu;
    // NOP
    ctx->pc = 0x119fc0u;
}
