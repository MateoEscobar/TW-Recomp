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

// Function: sub_001D1198
// Address: 0x1d1198 - 0x1d11c8
void sub_001D1198_0x1d1198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1198_0x1d1198");
#endif

    switch (ctx->pc) {
        case 0x1d11b4u: goto label_1d11b4;
        default: break;
    }

    ctx->pc = 0x1d1198u;

    // 0x1d1198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d119c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d119cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d11a0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1d11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d11a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D11A4u;
    {
        const bool branch_taken_0x1d11a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11A4u;
        // 0x1d11a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11a4) {
            ctx->pc = 0x1D11B8u;
            goto label_1d11b8;
        }
    }
    ctx->pc = 0x1D11ACu;
    // 0x1d11ac: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1D11ACu;
    SET_GPR_U32(ctx, 31, 0x1D11B4u);
    ctx->pc = 0x1D11B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D11ACu;
    // 0x1d11b0: 0x8c850204  lw          $a1, 0x204($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1D11ACu, 0x1D11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11B4u;
label_1d11b4:
    // 0x1d11b4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d11b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d11b8:
    // 0x1d11b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d11b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d11bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1d11bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D11C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11C0u;
        // 0x1d11c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D11C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D11C8u;
}
