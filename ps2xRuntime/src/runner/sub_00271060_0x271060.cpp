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

// Function: sub_00271060
// Address: 0x271060 - 0x271098
void sub_00271060_0x271060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271060_0x271060");
#endif

    switch (ctx->pc) {
        case 0x271074u: goto label_271074;
        case 0x271084u: goto label_271084;
        default: break;
    }

    ctx->pc = 0x271060u;

    // 0x271060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x271064: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x271064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x271068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x271068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27106c: 0xc088e80  jal         func_223A00
    ctx->pc = 0x27106Cu;
    SET_GPR_U32(ctx, 31, 0x271074u);
    ctx->pc = 0x271070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27106Cu;
    // 0x271070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x27106Cu, 0x271074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271074u;
label_271074:
    // 0x271074: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271074u;
    {
        const bool branch_taken_0x271074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271074u;
        // 0x271078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271074) {
            ctx->pc = 0x271084u;
            goto label_271084;
        }
    }
    ctx->pc = 0x27107Cu;
    // 0x27107c: 0xc08af70  jal         func_22BDC0
    ctx->pc = 0x27107Cu;
    SET_GPR_U32(ctx, 31, 0x271084u);
    ctx->pc = 0x271080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27107Cu;
    // 0x271080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDC0u, 0x27107Cu, 0x271084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271084u;
label_271084:
    // 0x271084: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x271084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27108c: 0x3e00008  jr          $ra
    ctx->pc = 0x27108Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27108Cu;
        // 0x271090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27108Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271094u;
    // 0x271094: 0x0  nop
    ctx->pc = 0x271094u;
    // NOP
    ctx->pc = 0x271098u;
}
