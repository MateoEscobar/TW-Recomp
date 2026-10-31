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

// Function: sub_0018DFA8
// Address: 0x18dfa8 - 0x18dff8
void sub_0018DFA8_0x18dfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DFA8_0x18dfa8");
#endif

    switch (ctx->pc) {
        case 0x18dfc8u: goto label_18dfc8;
        case 0x18dfd8u: goto label_18dfd8;
        default: break;
    }

    ctx->pc = 0x18dfa8u;

    // 0x18dfa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18dfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18dfac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18dfb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18dfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18dfb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18dfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18dfb8: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x18dfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18dfbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18dfc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18dfc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dfc4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
label_18dfc8:
    // 0x18dfc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18dfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dfcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18dfccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18dfd0: 0xc062f52  jal         func_18BD48
    ctx->pc = 0x18DFD0u;
    SET_GPR_U32(ctx, 31, 0x18DFD8u);
    ctx->pc = 0x18DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DFD0u;
    // 0x18dfd4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD48u, 0x18DFD0u, 0x18DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DFD8u;
label_18dfd8:
    // 0x18dfd8: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x18dfd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18dfdc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18DFDCu;
    {
        const bool branch_taken_0x18dfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dfdc) {
            ctx->pc = 0x18DFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DFDCu;
            // 0x18dfe0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18dfc8;
        }
    }
    ctx->pc = 0x18DFE4u;
    // 0x18dfe4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18dfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18dfe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18dfe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dfec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18dfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dff0: 0x3e00008  jr          $ra
    ctx->pc = 0x18DFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFF0u;
        // 0x18dff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DFF8u;
}
