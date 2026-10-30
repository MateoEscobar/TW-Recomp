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

// Function: sub_00473A68
// Address: 0x473a68 - 0x473a98
void sub_00473A68_0x473a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473A68_0x473a68");
#endif

    switch (ctx->pc) {
        case 0x473a80u: goto label_473a80;
        default: break;
    }

    ctx->pc = 0x473a68u;

    // 0x473a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x473a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x473a6c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x473a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473a70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x473a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x473a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x473a78: 0xc11d826  jal         func_476098
    ctx->pc = 0x473A78u;
    SET_GPR_U32(ctx, 31, 0x473A80u);
    ctx->pc = 0x473A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473A78u;
    // 0x473a7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476098u, 0x473A78u, 0x473A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473A80u;
label_473a80:
    // 0x473a80: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x473a80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x473a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473a88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x473a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473a8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x473a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473a90: 0x3e00008  jr          $ra
    ctx->pc = 0x473A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473A90u;
        // 0x473a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473A98u;
}
