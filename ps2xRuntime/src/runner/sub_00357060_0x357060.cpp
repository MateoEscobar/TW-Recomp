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

// Function: sub_00357060
// Address: 0x357060 - 0x357098
void sub_00357060_0x357060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357060_0x357060");
#endif

    switch (ctx->pc) {
        case 0x357078u: goto label_357078;
        case 0x357084u: goto label_357084;
        default: break;
    }

    ctx->pc = 0x357060u;

    // 0x357060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357064: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x357064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x357068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35706c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x357070: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x357070u;
    SET_GPR_U32(ctx, 31, 0x357078u);
    ctx->pc = 0x357074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357070u;
    // 0x357074: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x357070u, 0x357078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357078u;
label_357078:
    // 0x357078: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x357078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35707c: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x35707Cu;
    SET_GPR_U32(ctx, 31, 0x357084u);
    ctx->pc = 0x357080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35707Cu;
    // 0x357080: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x35707Cu, 0x357084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357084u;
label_357084:
    // 0x357084: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x357084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35708c: 0x3e00008  jr          $ra
    ctx->pc = 0x35708Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35708Cu;
        // 0x357090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35708Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357094u;
    // 0x357094: 0x0  nop
    ctx->pc = 0x357094u;
    // NOP
    ctx->pc = 0x357098u;
}
