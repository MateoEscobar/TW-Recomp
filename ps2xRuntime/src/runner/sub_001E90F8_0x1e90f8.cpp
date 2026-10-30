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

// Function: sub_001E90F8
// Address: 0x1e90f8 - 0x1e9130
void sub_001E90F8_0x1e90f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E90F8_0x1e90f8");
#endif

    switch (ctx->pc) {
        case 0x1e911cu: goto label_1e911c;
        default: break;
    }

    ctx->pc = 0x1e90f8u;

    // 0x1e90f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e90f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e90fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e90fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e9100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9108: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x1e9108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1e910c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E910Cu;
    {
        const bool branch_taken_0x1e910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e910c) {
            ctx->pc = 0x1E9110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E910Cu;
            // 0x1e9110: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9124u;
            goto label_1e9124;
        }
    }
    ctx->pc = 0x1E9114u;
    // 0x1e9114: 0xc073462  jal         func_1CD188
    ctx->pc = 0x1E9114u;
    SET_GPR_U32(ctx, 31, 0x1E911Cu);
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1E9114u, 0x1E911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E911Cu;
label_1e911c:
    // 0x1e911c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x1e911cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x1e9120: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e9120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9124:
    // 0x1e9124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9128: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9128u;
        // 0x1e912c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9130u;
}
