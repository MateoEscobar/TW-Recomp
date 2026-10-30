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

// Function: sub_001B2380
// Address: 0x1b2380 - 0x1b23d0
void sub_001B2380_0x1b2380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2380_0x1b2380");
#endif

    switch (ctx->pc) {
        case 0x1b23a0u: goto label_1b23a0;
        case 0x1b23acu: goto label_1b23ac;
        default: break;
    }

    ctx->pc = 0x1b2380u;

    // 0x1b2380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2384: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b2384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b2388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b238c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1b238cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b2390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2394: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b2394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2398: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b2398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b239c: 0x0  nop
    ctx->pc = 0x1b239cu;
    // NOP
label_1b23a0:
    // 0x1b23a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b23a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1b23a4: 0xc083816  jal         func_20E058
    ctx->pc = 0x1B23A4u;
    SET_GPR_U32(ctx, 31, 0x1B23ACu);
    ctx->pc = 0x1B23A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23A4u;
    // 0x1b23a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E058u, 0x1B23A4u, 0x1B23ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23ACu;
label_1b23ac:
    // 0x1b23ac: 0x0  nop
    ctx->pc = 0x1b23acu;
    // NOP
    // 0x1b23b0: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B23B0u;
    {
        const bool branch_taken_0x1b23b0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1b23b0) {
            ctx->pc = 0x1B23B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B23B0u;
            // 0x1b23b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B23A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b23a0;
        }
    }
    ctx->pc = 0x1B23B8u;
    // 0x1b23b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b23b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b23bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b23bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b23c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b23c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b23c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B23C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23C4u;
        // 0x1b23c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B23C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B23CCu;
    // 0x1b23cc: 0x0  nop
    ctx->pc = 0x1b23ccu;
    // NOP
    ctx->pc = 0x1b23d0u;
}
