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

// Function: sub_001D7CB0
// Address: 0x1d7cb0 - 0x1d7ce0
void sub_001D7CB0_0x1d7cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7CB0_0x1d7cb0");
#endif

    switch (ctx->pc) {
        case 0x1d7cc4u: goto label_1d7cc4;
        case 0x1d7cd0u: goto label_1d7cd0;
        default: break;
    }

    ctx->pc = 0x1d7cb0u;

    // 0x1d7cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7cb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7cbc: 0xc06d234  jal         func_1B48D0
    ctx->pc = 0x1D7CBCu;
    SET_GPR_U32(ctx, 31, 0x1D7CC4u);
    ctx->pc = 0x1D7CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CBCu;
    // 0x1d7cc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B48D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B48D0u, 0x1D7CBCu, 0x1D7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CC4u;
label_1d7cc4:
    // 0x1d7cc4: 0xae020644  sw          $v0, 0x644($s0)
    ctx->pc = 0x1d7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 2));
    // 0x1d7cc8: 0xc075c8e  jal         func_1D7238
    ctx->pc = 0x1D7CC8u;
    SET_GPR_U32(ctx, 31, 0x1D7CD0u);
    ctx->pc = 0x1D7CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CC8u;
    // 0x1d7ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7238u, 0x1D7CC8u, 0x1D7CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CD0u;
label_1d7cd0:
    // 0x1d7cd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CD8u;
        // 0x1d7cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7CE0u;
}
