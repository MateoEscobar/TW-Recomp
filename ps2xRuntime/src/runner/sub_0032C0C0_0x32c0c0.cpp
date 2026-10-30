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

// Function: sub_0032C0C0
// Address: 0x32c0c0 - 0x32c100
void sub_0032C0C0_0x32c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C0C0_0x32c0c0");
#endif

    switch (ctx->pc) {
        case 0x32c0d8u: goto label_32c0d8;
        case 0x32c0e0u: goto label_32c0e0;
        case 0x32c0ecu: goto label_32c0ec;
        default: break;
    }

    ctx->pc = 0x32c0c0u;

    // 0x32c0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32c0c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c0c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32c0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32c0cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c0d0: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C0D0u;
    SET_GPR_U32(ctx, 31, 0x32C0D8u);
    ctx->pc = 0x32C0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C0D0u;
    // 0x32c0d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C0D0u, 0x32C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C0D8u;
label_32c0d8:
    // 0x32c0d8: 0xc12e40c  jal         func_4B9030
    ctx->pc = 0x32C0D8u;
    SET_GPR_U32(ctx, 31, 0x32C0E0u);
    ctx->pc = 0x32C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C0D8u;
    // 0x32c0dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B9030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B9030u, 0x32C0D8u, 0x32C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C0E0u;
label_32c0e0:
    // 0x32c0e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c0e4: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C0E4u;
    SET_GPR_U32(ctx, 31, 0x32C0ECu);
    ctx->pc = 0x32C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C0E4u;
    // 0x32c0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C0E4u, 0x32C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C0ECu;
label_32c0ec:
    // 0x32c0ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32c0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c0f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c0f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x32C0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0F8u;
        // 0x32c0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C100u;
}
