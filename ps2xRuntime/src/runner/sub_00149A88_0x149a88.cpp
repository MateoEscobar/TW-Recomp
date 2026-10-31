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

// Function: sub_00149A88
// Address: 0x149a88 - 0x149ab0
void sub_00149A88_0x149a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149A88_0x149a88");
#endif

    switch (ctx->pc) {
        case 0x149a9cu: goto label_149a9c;
        default: break;
    }

    ctx->pc = 0x149a88u;

    // 0x149a88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149a8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149a94: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149A94u;
    SET_GPR_U32(ctx, 31, 0x149A9Cu);
    ctx->pc = 0x149A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A94u;
    // 0x149a98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149A94u, 0x149A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A9Cu;
label_149a9c:
    // 0x149a9c: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x149a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x149aa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x149AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AA8u;
        // 0x149aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149AB0u;
}
