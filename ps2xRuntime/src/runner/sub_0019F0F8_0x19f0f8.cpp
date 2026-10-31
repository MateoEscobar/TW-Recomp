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

// Function: sub_0019F0F8
// Address: 0x19f0f8 - 0x19f128
void sub_0019F0F8_0x19f0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F0F8_0x19f0f8");
#endif

    switch (ctx->pc) {
        case 0x19f110u: goto label_19f110;
        case 0x19f118u: goto label_19f118;
        default: break;
    }

    ctx->pc = 0x19f0f8u;

    // 0x19f0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f0fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19f0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19f100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f108: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x19F108u;
    SET_GPR_U32(ctx, 31, 0x19F110u);
    ctx->pc = 0x19F10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F108u;
    // 0x19f10c: 0x26040480  addiu       $a0, $s0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x19F108u, 0x19F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F110u;
label_19f110:
    // 0x19f110: 0xc079cb0  jal         func_1E72C0
    ctx->pc = 0x19F110u;
    SET_GPR_U32(ctx, 31, 0x19F118u);
    ctx->pc = 0x19F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F110u;
    // 0x19f114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E72C0u, 0x19F110u, 0x19F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F118u;
label_19f118:
    // 0x19f118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f120: 0x3e00008  jr          $ra
    ctx->pc = 0x19F120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F120u;
        // 0x19f124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F128u;
}
