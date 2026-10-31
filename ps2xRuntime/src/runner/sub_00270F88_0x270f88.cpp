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

// Function: sub_00270F88
// Address: 0x270f88 - 0x270fc0
void sub_00270F88_0x270f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270F88_0x270f88");
#endif

    switch (ctx->pc) {
        case 0x270fa0u: goto label_270fa0;
        case 0x270facu: goto label_270fac;
        default: break;
    }

    ctx->pc = 0x270f88u;

    // 0x270f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270f8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x270f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x270f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270f98: 0xc0e409a  jal         func_390268
    ctx->pc = 0x270F98u;
    SET_GPR_U32(ctx, 31, 0x270FA0u);
    ctx->pc = 0x270F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F98u;
    // 0x270f9c: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x270F98u, 0x270FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FA0u;
label_270fa0:
    // 0x270fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270fa4: 0xc08b0e2  jal         func_22C388
    ctx->pc = 0x270FA4u;
    SET_GPR_U32(ctx, 31, 0x270FACu);
    ctx->pc = 0x270FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270FA4u;
    // 0x270fa8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x270FA4u, 0x270FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FACu;
label_270fac:
    // 0x270fac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x270facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x270FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FB4u;
        // 0x270fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270FBCu;
    // 0x270fbc: 0x0  nop
    ctx->pc = 0x270fbcu;
    // NOP
    ctx->pc = 0x270fc0u;
}
