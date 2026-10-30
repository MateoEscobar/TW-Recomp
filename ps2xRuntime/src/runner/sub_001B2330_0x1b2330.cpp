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

// Function: sub_001B2330
// Address: 0x1b2330 - 0x1b2380
void sub_001B2330_0x1b2330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2330_0x1b2330");
#endif

    switch (ctx->pc) {
        case 0x1b2350u: goto label_1b2350;
        case 0x1b235cu: goto label_1b235c;
        default: break;
    }

    ctx->pc = 0x1b2330u;

    // 0x1b2330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2334: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b2334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b2338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b233c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1b233cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b2340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2344: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b2344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2348: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b2348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b234c: 0x0  nop
    ctx->pc = 0x1b234cu;
    // NOP
label_1b2350:
    // 0x1b2350: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1b2354: 0xc08380a  jal         func_20E028
    ctx->pc = 0x1B2354u;
    SET_GPR_U32(ctx, 31, 0x1B235Cu);
    ctx->pc = 0x1B2358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2354u;
    // 0x1b2358: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E028u, 0x1B2354u, 0x1B235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B235Cu;
label_1b235c:
    // 0x1b235c: 0x0  nop
    ctx->pc = 0x1b235cu;
    // NOP
    // 0x1b2360: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B2360u;
    {
        const bool branch_taken_0x1b2360 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1b2360) {
            ctx->pc = 0x1B2364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2360u;
            // 0x1b2364: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2350;
        }
    }
    ctx->pc = 0x1B2368u;
    // 0x1b2368: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b2368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b236c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b236cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2374: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2374u;
        // 0x1b2378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B237Cu;
    // 0x1b237c: 0x0  nop
    ctx->pc = 0x1b237cu;
    // NOP
    ctx->pc = 0x1b2380u;
}
