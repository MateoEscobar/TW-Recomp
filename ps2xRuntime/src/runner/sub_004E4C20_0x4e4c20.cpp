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

// Function: sub_004E4C20
// Address: 0x4e4c20 - 0x4e4c50
void sub_004E4C20_0x4e4c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C20_0x4e4c20");
#endif

    switch (ctx->pc) {
        case 0x4e4c38u: goto label_4e4c38;
        default: break;
    }

    ctx->pc = 0x4e4c20u;

    // 0x4e4c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e4c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e4c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e4c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4c28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e4c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4e4c2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e4c30: 0xc06e4ea  jal         func_1B93A8
    ctx->pc = 0x4E4C30u;
    SET_GPR_U32(ctx, 31, 0x4E4C38u);
    ctx->pc = 0x4E4C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4C30u;
    // 0x4e4c34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x4E4C30u, 0x4E4C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4C38u;
label_4e4c38:
    // 0x4e4c38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e4c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4c40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e4c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4c44: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4C44u;
        // 0x4e4c48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4C4Cu;
    // 0x4e4c4c: 0x0  nop
    ctx->pc = 0x4e4c4cu;
    // NOP
    ctx->pc = 0x4e4c50u;
}
