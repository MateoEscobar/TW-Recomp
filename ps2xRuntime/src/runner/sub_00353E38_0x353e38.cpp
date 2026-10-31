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

// Function: sub_00353E38
// Address: 0x353e38 - 0x353e70
void sub_00353E38_0x353e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353E38_0x353e38");
#endif

    switch (ctx->pc) {
        case 0x353e64u: goto label_353e64;
        default: break;
    }

    ctx->pc = 0x353e38u;

    // 0x353e38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x353e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x353e3c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x353e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e40: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x353e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x353e44: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x353e44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x353e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x353e4c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x353e4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e50: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x353e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x353e54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x353e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e58: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x353e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x353e5c: 0xc0d4e06  jal         func_353818
    ctx->pc = 0x353E5Cu;
    SET_GPR_U32(ctx, 31, 0x353E64u);
    ctx->pc = 0x353E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353E5Cu;
    // 0x353e60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353818u, 0x353E5Cu, 0x353E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353E64u;
label_353e64:
    // 0x353e64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x353e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353e68: 0x3e00008  jr          $ra
    ctx->pc = 0x353E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E68u;
        // 0x353e6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353E70u;
}
