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

// Function: sub_00314F80
// Address: 0x314f80 - 0x314fb8
void sub_00314F80_0x314f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314F80_0x314f80");
#endif

    switch (ctx->pc) {
        case 0x314f98u: goto label_314f98;
        case 0x314fa4u: goto label_314fa4;
        default: break;
    }

    ctx->pc = 0x314f80u;

    // 0x314f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314f88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314f90: 0xc0c52f6  jal         func_314BD8
    ctx->pc = 0x314F90u;
    SET_GPR_U32(ctx, 31, 0x314F98u);
    ctx->pc = 0x314F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F90u;
    // 0x314f94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314BD8u, 0x314F90u, 0x314F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F98u;
label_314f98:
    // 0x314f98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x314f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x314f9c: 0xc059838  jal         func_1660E0
    ctx->pc = 0x314F9Cu;
    SET_GPR_U32(ctx, 31, 0x314FA4u);
    ctx->pc = 0x314FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F9Cu;
    // 0x314fa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1660E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1660E0u, 0x314F9Cu, 0x314FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314FA4u;
label_314fa4:
    // 0x314fa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314fac: 0x3e00008  jr          $ra
    ctx->pc = 0x314FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FACu;
        // 0x314fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314FB4u;
    // 0x314fb4: 0x0  nop
    ctx->pc = 0x314fb4u;
    // NOP
    ctx->pc = 0x314fb8u;
}
