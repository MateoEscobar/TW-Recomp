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

// Function: sub_002F3390
// Address: 0x2f3390 - 0x2f33e0
void sub_002F3390_0x2f3390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3390_0x2f3390");
#endif

    switch (ctx->pc) {
        case 0x2f33b0u: goto label_2f33b0;
        case 0x2f33bcu: goto label_2f33bc;
        default: break;
    }

    ctx->pc = 0x2f3390u;

    // 0x2f3390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f3390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f3394: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f3394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f3398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f339c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f33a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f33a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f33a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f33a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f33a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f33ac: 0x245003c8  addiu       $s0, $v0, 0x3C8
    ctx->pc = 0x2f33acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 968));
label_2f33b0:
    // 0x2f33b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f33b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f33b4: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2F33B4u;
    SET_GPR_U32(ctx, 31, 0x2F33BCu);
    ctx->pc = 0x2F33B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F33B4u;
    // 0x2f33b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2F33B4u, 0x2F33BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F33BCu;
label_2f33bc:
    // 0x2f33bc: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x2f33bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f33c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F33C0u;
    {
        const bool branch_taken_0x2f33c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33C0u;
        // 0x2f33c4: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33c0) {
            ctx->pc = 0x2F33B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f33b0;
        }
    }
    ctx->pc = 0x2F33C8u;
    // 0x2f33c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f33c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f33cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f33ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f33d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f33d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f33d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F33D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33D4u;
        // 0x2f33d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F33D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F33DCu;
    // 0x2f33dc: 0x0  nop
    ctx->pc = 0x2f33dcu;
    // NOP
    ctx->pc = 0x2f33e0u;
}
