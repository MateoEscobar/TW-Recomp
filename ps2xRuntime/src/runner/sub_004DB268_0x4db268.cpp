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

// Function: sub_004DB268
// Address: 0x4db268 - 0x4db2d8
void sub_004DB268_0x4db268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB268_0x4db268");
#endif

    ctx->pc = 0x4db268u;

    // 0x4db268: 0x908201d5  lbu         $v0, 0x1D5($a0)
    ctx->pc = 0x4db268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 469)));
    // 0x4db26c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB26Cu;
        // 0x4db270: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB274u;
    // 0x4db274: 0x0  nop
    ctx->pc = 0x4db274u;
    // NOP
    // 0x4db278: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db27c: 0x0  nop
    ctx->pc = 0x4db27cu;
    // NOP
    // 0x4db280: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db284: 0x0  nop
    ctx->pc = 0x4db284u;
    // NOP
    // 0x4db288: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4db288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4db28c: 0x0  nop
    ctx->pc = 0x4db28cu;
    // NOP
    // 0x4db290: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db294: 0x0  nop
    ctx->pc = 0x4db294u;
    // NOP
    // 0x4db298: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4db298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4db29c: 0x0  nop
    ctx->pc = 0x4db29cu;
    // NOP
    // 0x4db2a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4db2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db2a4: 0x0  nop
    ctx->pc = 0x4db2a4u;
    // NOP
    // 0x4db2a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4db2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4db2ac: 0x0  nop
    ctx->pc = 0x4db2acu;
    // NOP
    // 0x4db2b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db2b4: 0x0  nop
    ctx->pc = 0x4db2b4u;
    // NOP
    // 0x4db2b8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4db2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4db2bc: 0x0  nop
    ctx->pc = 0x4db2bcu;
    // NOP
    // 0x4db2c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db2c4: 0x0  nop
    ctx->pc = 0x4db2c4u;
    // NOP
    // 0x4db2c8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4db2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4db2cc: 0x0  nop
    ctx->pc = 0x4db2ccu;
    // NOP
    // 0x4db2d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4db2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4db2d4: 0x0  nop
    ctx->pc = 0x4db2d4u;
    // NOP
    ctx->pc = 0x4db2d8u;
}
