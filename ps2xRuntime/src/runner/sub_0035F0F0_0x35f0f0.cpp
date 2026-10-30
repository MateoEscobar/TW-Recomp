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

// Function: sub_0035F0F0
// Address: 0x35f0f0 - 0x35f128
void sub_0035F0F0_0x35f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F0F0_0x35f0f0");
#endif

    switch (ctx->pc) {
        case 0x35f104u: goto label_35f104;
        case 0x35f10cu: goto label_35f10c;
        case 0x35f114u: goto label_35f114;
        default: break;
    }

    ctx->pc = 0x35f0f0u;

    // 0x35f0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f0f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f0fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F0FCu;
    SET_GPR_U32(ctx, 31, 0x35F104u);
    ctx->pc = 0x35F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F0FCu;
    // 0x35f100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F0FCu, 0x35F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F104u;
label_35f104:
    // 0x35f104: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35F104u;
    SET_GPR_U32(ctx, 31, 0x35F10Cu);
    ctx->pc = 0x35F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F104u;
    // 0x35f108: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35F104u, 0x35F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F10Cu;
label_35f10c:
    // 0x35f10c: 0xc0a4b3c  jal         func_292CF0
    ctx->pc = 0x35F10Cu;
    SET_GPR_U32(ctx, 31, 0x35F114u);
    ctx->pc = 0x35F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F10Cu;
    // 0x35f110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292CF0u, 0x35F10Cu, 0x35F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F114u;
label_35f114:
    // 0x35f114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f11c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F11Cu;
        // 0x35f120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F124u;
    // 0x35f124: 0x0  nop
    ctx->pc = 0x35f124u;
    // NOP
    ctx->pc = 0x35f128u;
}
