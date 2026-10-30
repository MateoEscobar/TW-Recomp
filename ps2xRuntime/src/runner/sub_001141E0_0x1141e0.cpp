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

// Function: sub_001141E0
// Address: 0x1141e0 - 0x114220
void sub_001141E0_0x1141e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001141E0_0x1141e0");
#endif

    ctx->pc = 0x1141e0u;

    // 0x1141e0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1141e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1141e4: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1141e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1141e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1141e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1141ec: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x1141ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1141f0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1141f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1141f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1141f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141f8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1141f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1141fc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1141fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x114200: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x114200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x114204: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x114204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x114208: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x114208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x11420c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x11420cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x114210: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x114210u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x114214: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x114214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x114218: 0x3e00008  jr          $ra
    ctx->pc = 0x114218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114218u;
        // 0x11421c: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114220u;
}
