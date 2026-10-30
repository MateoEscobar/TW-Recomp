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

// Function: sub_00433A68
// Address: 0x433a68 - 0x433a88
void sub_00433A68_0x433a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433A68_0x433a68");
#endif

    switch (ctx->pc) {
        case 0x433a7cu: goto label_433a7c;
        default: break;
    }

    ctx->pc = 0x433a68u;

    // 0x433a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x433a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x433a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x433a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x433a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x433a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x433a74: 0xc10e686  jal         func_439A18
    ctx->pc = 0x433A74u;
    SET_GPR_U32(ctx, 31, 0x433A7Cu);
    ctx->pc = 0x433A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433A74u;
    // 0x433a78: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439A18u, 0x433A74u, 0x433A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433A7Cu;
label_433a7c:
    // 0x433a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x433a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x433a80: 0x3e00008  jr          $ra
    ctx->pc = 0x433A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433A80u;
        // 0x433a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x433A88u;
}
