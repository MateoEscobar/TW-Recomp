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

// Function: sub_00106C08
// Address: 0x106c08 - 0x106c38
void sub_00106C08_0x106c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106C08_0x106c08");
#endif

    switch (ctx->pc) {
        case 0x106c24u: goto label_106c24;
        default: break;
    }

    ctx->pc = 0x106c08u;

    // 0x106c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106c0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x106c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x106c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c18: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x106c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x106c1c: 0xc05d4e0  jal         func_175380
    ctx->pc = 0x106C1Cu;
    SET_GPR_U32(ctx, 31, 0x106C24u);
    ctx->pc = 0x106C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C1Cu;
    // 0x106c20: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x106C1Cu, 0x106C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C24u;
label_106c24:
    // 0x106c24: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x106c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x106c28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x106c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106c30: 0x3e00008  jr          $ra
    ctx->pc = 0x106C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C30u;
        // 0x106c34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106C38u;
}
