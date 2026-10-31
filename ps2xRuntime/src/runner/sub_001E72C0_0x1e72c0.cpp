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

// Function: sub_001E72C0
// Address: 0x1e72c0 - 0x1e7300
void sub_001E72C0_0x1e72c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E72C0_0x1e72c0");
#endif

    switch (ctx->pc) {
        case 0x1e72d8u: goto label_1e72d8;
        case 0x1e72e0u: goto label_1e72e0;
        case 0x1e72e8u: goto label_1e72e8;
        default: break;
    }

    ctx->pc = 0x1e72c0u;

    // 0x1e72c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e72c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e72c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e72c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e72c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e72c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e72cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e72ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e72d0: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1E72D0u;
    SET_GPR_U32(ctx, 31, 0x1E72D8u);
    ctx->pc = 0x1E72D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E72D0u;
    // 0x1e72d4: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1E72D0u, 0x1E72D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72D8u;
label_1e72d8:
    // 0x1e72d8: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1E72D8u;
    SET_GPR_U32(ctx, 31, 0x1E72E0u);
    ctx->pc = 0x1E72DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E72D8u;
    // 0x1e72dc: 0x26040310  addiu       $a0, $s0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1E72D8u, 0x1E72E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72E0u;
label_1e72e0:
    // 0x1e72e0: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1E72E0u;
    SET_GPR_U32(ctx, 31, 0x1E72E8u);
    ctx->pc = 0x1E72E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E72E0u;
    // 0x1e72e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1E72E0u, 0x1E72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E72E8u;
label_1e72e8:
    // 0x1e72e8: 0xae000434  sw          $zero, 0x434($s0)
    ctx->pc = 0x1e72e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1076), GPR_U32(ctx, 0));
    // 0x1e72ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e72ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e72f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e72f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e72f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E72F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72F4u;
        // 0x1e72f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E72F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E72FCu;
    // 0x1e72fc: 0x0  nop
    ctx->pc = 0x1e72fcu;
    // NOP
    ctx->pc = 0x1e7300u;
}
