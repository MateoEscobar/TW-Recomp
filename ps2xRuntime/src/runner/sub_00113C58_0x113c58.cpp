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

// Function: sub_00113C58
// Address: 0x113c58 - 0x113c98
void sub_00113C58_0x113c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113C58_0x113c58");
#endif

    switch (ctx->pc) {
        case 0x113c88u: goto label_113c88;
        default: break;
    }

    ctx->pc = 0x113c58u;

    // 0x113c58: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x113c58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113c64: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x113c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c68: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x113c68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c6c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x113c6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c70: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x113c70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113c74: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x113c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113c7c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x113c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c80: 0xc0443e0  jal         func_110F80
    ctx->pc = 0x113C80u;
    SET_GPR_U32(ctx, 31, 0x113C88u);
    ctx->pc = 0x113C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C80u;
    // 0x113c84: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F80u, 0x113C80u, 0x113C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C88u;
label_113c88:
    // 0x113c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x113C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C8Cu;
        // 0x113c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113C94u;
    // 0x113c94: 0x0  nop
    ctx->pc = 0x113c94u;
    // NOP
    ctx->pc = 0x113c98u;
}
