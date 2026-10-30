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

// Function: sub_0030BAD0
// Address: 0x30bad0 - 0x30bb28
void sub_0030BAD0_0x30bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BAD0_0x30bad0");
#endif

    switch (ctx->pc) {
        case 0x30baf0u: goto label_30baf0;
        case 0x30baf8u: goto label_30baf8;
        case 0x30bb04u: goto label_30bb04;
        default: break;
    }

    ctx->pc = 0x30bad0u;

    // 0x30bad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30bad4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30bad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30badc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30badcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30bae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30bae4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30bae8: 0x24510048  addiu       $s1, $v0, 0x48
    ctx->pc = 0x30bae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30baec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30baecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30baf0:
    // 0x30baf0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30BAF0u;
    SET_GPR_U32(ctx, 31, 0x30BAF8u);
    ctx->pc = 0x30BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BAF0u;
    // 0x30baf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30BAF0u, 0x30BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BAF8u;
label_30baf8:
    // 0x30baf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30bafc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30BAFCu;
    SET_GPR_U32(ctx, 31, 0x30BB04u);
    ctx->pc = 0x30BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BAFCu;
    // 0x30bb00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30BAFCu, 0x30BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB04u;
label_30bb04:
    // 0x30bb04: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x30bb04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30bb08: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30BB08u;
    {
        const bool branch_taken_0x30bb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB08u;
        // 0x30bb0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bb08) {
            ctx->pc = 0x30BAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30baf0;
        }
    }
    ctx->pc = 0x30BB10u;
    // 0x30bb10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30bb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30bb14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30bb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30bb18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30bb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bb20: 0x3e00008  jr          $ra
    ctx->pc = 0x30BB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB20u;
        // 0x30bb24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BB28u;
}
