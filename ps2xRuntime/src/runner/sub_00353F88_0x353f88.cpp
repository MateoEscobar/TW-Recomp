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

// Function: sub_00353F88
// Address: 0x353f88 - 0x353fc8
void sub_00353F88_0x353f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353F88_0x353f88");
#endif

    switch (ctx->pc) {
        case 0x353f9cu: goto label_353f9c;
        case 0x353fb4u: goto label_353fb4;
        default: break;
    }

    ctx->pc = 0x353f88u;

    // 0x353f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353f8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x353f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x353f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353f94: 0xc0d4da6  jal         func_353698
    ctx->pc = 0x353F94u;
    SET_GPR_U32(ctx, 31, 0x353F9Cu);
    ctx->pc = 0x353F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353F94u;
    // 0x353f98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x353F94u, 0x353F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353F9Cu;
label_353f9c:
    // 0x353f9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x353f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x353fa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353fa4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x353fa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x353fa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x353fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353fac: 0xc0d4ebc  jal         func_353AF0
    ctx->pc = 0x353FACu;
    SET_GPR_U32(ctx, 31, 0x353FB4u);
    ctx->pc = 0x353FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353FACu;
    // 0x353fb0: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353AF0u, 0x353FACu, 0x353FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FB4u;
label_353fb4:
    // 0x353fb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x353fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x353FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353FBCu;
        // 0x353fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353FC4u;
    // 0x353fc4: 0x0  nop
    ctx->pc = 0x353fc4u;
    // NOP
    ctx->pc = 0x353fc8u;
}
