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

// Function: sub_0015C6C8
// Address: 0x15c6c8 - 0x15c6f8
void sub_0015C6C8_0x15c6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C6C8_0x15c6c8");
#endif

    switch (ctx->pc) {
        case 0x15c6d8u: goto label_15c6d8;
        case 0x15c6e8u: goto label_15c6e8;
        default: break;
    }

    ctx->pc = 0x15c6c8u;

    // 0x15c6c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15c6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15c6cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15c6d0: 0xc05717e  jal         func_15C5F8
    ctx->pc = 0x15C6D0u;
    SET_GPR_U32(ctx, 31, 0x15C6D8u);
    ctx->pc = 0x15C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C5F8u, 0x15C6D0u, 0x15C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C6D8u;
label_15c6d8:
    // 0x15c6d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15c6dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6e0: 0xc0517d8  jal         func_145F60
    ctx->pc = 0x15C6E0u;
    SET_GPR_U32(ctx, 31, 0x15C6E8u);
    ctx->pc = 0x15C6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C6E0u;
    // 0x15c6e4: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15C6E0u, 0x15C6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C6E8u;
label_15c6e8:
    // 0x15c6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15C6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6ECu;
        // 0x15c6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C6F4u;
    // 0x15c6f4: 0x0  nop
    ctx->pc = 0x15c6f4u;
    // NOP
    ctx->pc = 0x15c6f8u;
}
