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

// Function: sub_0035EB78
// Address: 0x35eb78 - 0x35ebd8
void sub_0035EB78_0x35eb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EB78_0x35eb78");
#endif

    switch (ctx->pc) {
        case 0x35eb98u: goto label_35eb98;
        case 0x35eba0u: goto label_35eba0;
        case 0x35ebb4u: goto label_35ebb4;
        case 0x35ebc0u: goto label_35ebc0;
        default: break;
    }

    ctx->pc = 0x35eb78u;

    // 0x35eb78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35eb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35eb7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35eb80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35eb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35eb84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35eb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eb88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35eb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35eb8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35eb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35eb90: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EB90u;
    SET_GPR_U32(ctx, 31, 0x35EB98u);
    ctx->pc = 0x35EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB90u;
    // 0x35eb94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EB90u, 0x35EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EB98u;
label_35eb98:
    // 0x35eb98: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EB98u;
    SET_GPR_U32(ctx, 31, 0x35EBA0u);
    ctx->pc = 0x35EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB98u;
    // 0x35eb9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EB98u, 0x35EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EBA0u;
label_35eba0:
    // 0x35eba0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35eba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35eba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eba8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35eba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ebac: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35EBACu;
    SET_GPR_U32(ctx, 31, 0x35EBB4u);
    ctx->pc = 0x35EBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EBACu;
    // 0x35ebb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35EBACu, 0x35EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EBB4u;
label_35ebb4:
    // 0x35ebb4: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35ebb4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35ebb8: 0xc0a48cc  jal         func_292330
    ctx->pc = 0x35EBB8u;
    SET_GPR_U32(ctx, 31, 0x35EBC0u);
    ctx->pc = 0x35EBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EBB8u;
    // 0x35ebbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x35EBB8u, 0x35EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EBC0u;
label_35ebc0:
    // 0x35ebc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35ebc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ebc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ebc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ebc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ebc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ebcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ebccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ebd0: 0x3e00008  jr          $ra
    ctx->pc = 0x35EBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBD0u;
        // 0x35ebd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EBD8u;
}
