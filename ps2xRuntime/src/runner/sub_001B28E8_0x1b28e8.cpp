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

// Function: sub_001B28E8
// Address: 0x1b28e8 - 0x1b2918
void sub_001B28E8_0x1b28e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B28E8_0x1b28e8");
#endif

    switch (ctx->pc) {
        case 0x1b290cu: goto label_1b290c;
        default: break;
    }

    ctx->pc = 0x1b28e8u;

    // 0x1b28e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b28e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b28ec: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1b28ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b28f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B28F0u;
    {
        const bool branch_taken_0x1b28f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28F0u;
        // 0x1b28f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28f0) {
            ctx->pc = 0x1B290Cu;
            goto label_1b290c;
        }
    }
    ctx->pc = 0x1B28F8u;
    // 0x1b28f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b28fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b2900: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1b2900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b2904: 0xc06ff4c  jal         func_1BFD30
    ctx->pc = 0x1B2904u;
    SET_GPR_U32(ctx, 31, 0x1B290Cu);
    ctx->pc = 0x1B2908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2904u;
    // 0x1b2908: 0x24843480  addiu       $a0, $a0, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFD30u, 0x1B2904u, 0x1B290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B290Cu;
label_1b290c:
    // 0x1b290c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2910: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2910u;
        // 0x1b2914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2918u;
}
