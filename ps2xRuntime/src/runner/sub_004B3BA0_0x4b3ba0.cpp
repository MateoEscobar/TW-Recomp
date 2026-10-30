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

// Function: sub_004B3BA0
// Address: 0x4b3ba0 - 0x4b3bc8
void sub_004B3BA0_0x4b3ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3BA0_0x4b3ba0");
#endif

    ctx->pc = 0x4b3ba0u;

    // 0x4b3ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3ba4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b3ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b3ba8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4b3ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b3bac: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x4b3bacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b3bb0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3bb4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4b3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x4b3bb8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x4b3bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x4b3bbc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x4b3bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x4b3bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3BC0u;
        // 0x4b3bc4: 0xa480000e  sh          $zero, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3BC8u;
}
