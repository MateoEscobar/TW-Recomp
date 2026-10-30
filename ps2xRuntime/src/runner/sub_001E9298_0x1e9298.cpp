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

// Function: sub_001E9298
// Address: 0x1e9298 - 0x1e92d0
void sub_001E9298_0x1e9298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9298_0x1e9298");
#endif

    switch (ctx->pc) {
        case 0x1e92acu: goto label_1e92ac;
        default: break;
    }

    ctx->pc = 0x1e9298u;

    // 0x1e9298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e929c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e92a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e92a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e92a4: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1E92A4u;
    SET_GPR_U32(ctx, 31, 0x1E92ACu);
    ctx->pc = 0x1E92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92A4u;
    // 0x1e92a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1E92A4u, 0x1E92ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92ACu;
label_1e92ac:
    // 0x1e92ac: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e92acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1e92b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e92b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92b4: 0x2463cbc0  addiu       $v1, $v1, -0x3440
    ctx->pc = 0x1e92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953920));
    // 0x1e92b8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1e92b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1e92bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e92bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1e92c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e92c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e92c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e92c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e92c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E92C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E92C8u;
        // 0x1e92cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E92C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E92D0u;
}
