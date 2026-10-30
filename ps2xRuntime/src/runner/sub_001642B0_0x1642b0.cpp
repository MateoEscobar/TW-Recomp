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

// Function: sub_001642B0
// Address: 0x1642b0 - 0x1642f0
void sub_001642B0_0x1642b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001642B0_0x1642b0");
#endif

    switch (ctx->pc) {
        case 0x1642c8u: goto label_1642c8;
        case 0x1642d0u: goto label_1642d0;
        default: break;
    }

    ctx->pc = 0x1642b0u;

    // 0x1642b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1642b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1642b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1642b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1642b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1642b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1642bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1642bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1642c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1642c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1642c4: 0x26110438  addiu       $s1, $s0, 0x438
    ctx->pc = 0x1642c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1080));
label_1642c8:
    // 0x1642c8: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x1642C8u;
    SET_GPR_U32(ctx, 31, 0x1642D0u);
    ctx->pc = 0x1642CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642C8u;
    // 0x1642cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x1642C8u, 0x1642D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1642D0u;
label_1642d0:
    // 0x1642d0: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x1642d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1642d4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1642d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1642d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1642D8u;
    {
        const bool branch_taken_0x1642d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1642DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642D8u;
        // 0x1642dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642d8) {
            ctx->pc = 0x1642C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1642c8;
        }
    }
    ctx->pc = 0x1642E0u;
    // 0x1642e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1642e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1642e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1642e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1642e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1642E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1642ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642E8u;
        // 0x1642ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1642E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1642F0u;
}
