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

// Function: sub_0035EED8
// Address: 0x35eed8 - 0x35ef10
void sub_0035EED8_0x35eed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EED8_0x35eed8");
#endif

    switch (ctx->pc) {
        case 0x35eeecu: goto label_35eeec;
        case 0x35eef4u: goto label_35eef4;
        case 0x35eefcu: goto label_35eefc;
        default: break;
    }

    ctx->pc = 0x35eed8u;

    // 0x35eed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35eed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35eedc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35eedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35eee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35eee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35eee4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EEE4u;
    SET_GPR_U32(ctx, 31, 0x35EEECu);
    ctx->pc = 0x35EEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EEE4u;
    // 0x35eee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EEE4u, 0x35EEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EEECu;
label_35eeec:
    // 0x35eeec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EEECu;
    SET_GPR_U32(ctx, 31, 0x35EEF4u);
    ctx->pc = 0x35EEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EEECu;
    // 0x35eef0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EEECu, 0x35EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EEF4u;
label_35eef4:
    // 0x35eef4: 0xc0a4996  jal         func_292658
    ctx->pc = 0x35EEF4u;
    SET_GPR_U32(ctx, 31, 0x35EEFCu);
    ctx->pc = 0x35EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EEF4u;
    // 0x35eef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292658u, 0x35EEF4u, 0x35EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EEFCu;
label_35eefc:
    // 0x35eefc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35eefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ef00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ef00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ef04: 0x3e00008  jr          $ra
    ctx->pc = 0x35EF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF04u;
        // 0x35ef08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EF0Cu;
    // 0x35ef0c: 0x0  nop
    ctx->pc = 0x35ef0cu;
    // NOP
    ctx->pc = 0x35ef10u;
}
