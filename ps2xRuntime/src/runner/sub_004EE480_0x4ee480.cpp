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

// Function: sub_004EE480
// Address: 0x4ee480 - 0x4ee4b8
void sub_004EE480_0x4ee480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE480_0x4ee480");
#endif

    ctx->pc = 0x4ee480u;

    // 0x4ee480: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x4ee480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x4ee484: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE484u;
        // 0x4ee488: 0x24423908  addiu       $v0, $v0, 0x3908 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14600));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE48Cu;
    // 0x4ee48c: 0x0  nop
    ctx->pc = 0x4ee48cu;
    // NOP
    // 0x4ee490: 0x24420128  addiu       $v0, $v0, 0x128
    ctx->pc = 0x4ee490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x4ee494: 0x0  nop
    ctx->pc = 0x4ee494u;
    // NOP
    // 0x4ee498: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ee498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ee49c: 0x0  nop
    ctx->pc = 0x4ee49cu;
    // NOP
    // 0x4ee4a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ee4a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ee4a4: 0x0  nop
    ctx->pc = 0x4ee4a4u;
    // NOP
    // 0x4ee4a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4ee4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4ee4ac: 0x0  nop
    ctx->pc = 0x4ee4acu;
    // NOP
    // 0x4ee4b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4ee4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee4b4: 0x0  nop
    ctx->pc = 0x4ee4b4u;
    // NOP
    ctx->pc = 0x4ee4b8u;
}
