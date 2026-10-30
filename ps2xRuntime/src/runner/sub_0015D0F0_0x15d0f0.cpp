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

// Function: sub_0015D0F0
// Address: 0x15d0f0 - 0x15d128
void sub_0015D0F0_0x15d0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D0F0_0x15d0f0");
#endif

    switch (ctx->pc) {
        case 0x15d108u: goto label_15d108;
        case 0x15d118u: goto label_15d118;
        default: break;
    }

    ctx->pc = 0x15d0f0u;

    // 0x15d0f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15d0f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d0f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d0f8: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x15d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x15d0fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d100: 0xc0e8b20  jal         func_3A2C80
    ctx->pc = 0x15D100u;
    SET_GPR_U32(ctx, 31, 0x15D108u);
    ctx->pc = 0x15D104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D100u;
    // 0x15d104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15D100u, 0x15D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D108u;
label_15d108:
    // 0x15d108: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15d10c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d110: 0xc0517d8  jal         func_145F60
    ctx->pc = 0x15D110u;
    SET_GPR_U32(ctx, 31, 0x15D118u);
    ctx->pc = 0x15D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D110u;
    // 0x15d114: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15D110u, 0x15D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D118u;
label_15d118:
    // 0x15d118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d11c: 0x3e00008  jr          $ra
    ctx->pc = 0x15D11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D11Cu;
        // 0x15d120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D124u;
    // 0x15d124: 0x0  nop
    ctx->pc = 0x15d124u;
    // NOP
    ctx->pc = 0x15d128u;
}
