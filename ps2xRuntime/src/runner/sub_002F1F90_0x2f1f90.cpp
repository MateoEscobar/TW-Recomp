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

// Function: sub_002F1F90
// Address: 0x2f1f90 - 0x2f1fd0
void sub_002F1F90_0x2f1f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1F90_0x2f1f90");
#endif

    switch (ctx->pc) {
        case 0x2f1fa8u: goto label_2f1fa8;
        case 0x2f1fb4u: goto label_2f1fb4;
        default: break;
    }

    ctx->pc = 0x2f1f90u;

    // 0x2f1f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1f94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f1f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f1f98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f1f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f1f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f1fa0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2F1FA0u;
    SET_GPR_U32(ctx, 31, 0x2F1FA8u);
    ctx->pc = 0x2F1FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1FA0u;
    // 0x2f1fa4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F1FA0u, 0x2F1FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1FA8u;
label_2f1fa8:
    // 0x2f1fa8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f1fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f1fac: 0xc0a404e  jal         func_290138
    ctx->pc = 0x2F1FACu;
    SET_GPR_U32(ctx, 31, 0x2F1FB4u);
    ctx->pc = 0x2F1FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1FACu;
    // 0x2f1fb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2F1FACu, 0x2F1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1FB4u;
label_2f1fb4:
    // 0x2f1fb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f1fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f1fb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f1fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f1fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1fc0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f1fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f1fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FC4u;
        // 0x2f1fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1FCCu;
    // 0x2f1fcc: 0x0  nop
    ctx->pc = 0x2f1fccu;
    // NOP
    ctx->pc = 0x2f1fd0u;
}
