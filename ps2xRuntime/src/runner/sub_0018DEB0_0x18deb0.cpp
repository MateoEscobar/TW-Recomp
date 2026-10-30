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

// Function: sub_0018DEB0
// Address: 0x18deb0 - 0x18df00
void sub_0018DEB0_0x18deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DEB0_0x18deb0");
#endif

    switch (ctx->pc) {
        case 0x18ded0u: goto label_18ded0;
        case 0x18dee0u: goto label_18dee0;
        default: break;
    }

    ctx->pc = 0x18deb0u;

    // 0x18deb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18deb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18deb4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18deb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18deb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18debc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18debcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18dec0: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x18dec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18dec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18dec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18dec8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18dec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18decc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18deccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
label_18ded0:
    // 0x18ded0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ded0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ded4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18ded4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18ded8: 0xc062f52  jal         func_18BD48
    ctx->pc = 0x18DED8u;
    SET_GPR_U32(ctx, 31, 0x18DEE0u);
    ctx->pc = 0x18DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DED8u;
    // 0x18dedc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD48u, 0x18DED8u, 0x18DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DEE0u;
label_18dee0:
    // 0x18dee0: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x18dee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18dee4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DEE4u;
    {
        const bool branch_taken_0x18dee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dee4) {
            ctx->pc = 0x18DEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DEE4u;
            // 0x18dee8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ded0;
        }
    }
    ctx->pc = 0x18DEECu;
    // 0x18deec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18deecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18def0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18def0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18def4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18def4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18def8: 0x3e00008  jr          $ra
    ctx->pc = 0x18DEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DEF8u;
        // 0x18defc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DF00u;
}
