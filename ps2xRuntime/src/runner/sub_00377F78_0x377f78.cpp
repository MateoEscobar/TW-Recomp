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

// Function: sub_00377F78
// Address: 0x377f78 - 0x377fd8
void sub_00377F78_0x377f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377F78_0x377f78");
#endif

    switch (ctx->pc) {
        case 0x377f98u: goto label_377f98;
        case 0x377fa0u: goto label_377fa0;
        case 0x377fb4u: goto label_377fb4;
        case 0x377fc0u: goto label_377fc0;
        default: break;
    }

    ctx->pc = 0x377f78u;

    // 0x377f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377f7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377f80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x377f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377f90: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377F90u;
    SET_GPR_U32(ctx, 31, 0x377F98u);
    ctx->pc = 0x377F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F90u;
    // 0x377f94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377F90u, 0x377F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F98u;
label_377f98:
    // 0x377f98: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377F98u;
    SET_GPR_U32(ctx, 31, 0x377FA0u);
    ctx->pc = 0x377F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F98u;
    // 0x377f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377F98u, 0x377FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377FA0u;
label_377fa0:
    // 0x377fa0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x377fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377fa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377fac: 0xc1024c6  jal         func_409318
    ctx->pc = 0x377FACu;
    SET_GPR_U32(ctx, 31, 0x377FB4u);
    ctx->pc = 0x377FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377FACu;
    // 0x377fb0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x377FACu, 0x377FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377FB4u;
label_377fb4:
    // 0x377fb4: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x377fb4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x377fb8: 0xc0e5aa4  jal         func_396A90
    ctx->pc = 0x377FB8u;
    SET_GPR_U32(ctx, 31, 0x377FC0u);
    ctx->pc = 0x377FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377FB8u;
    // 0x377fbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396A90u, 0x377FB8u, 0x377FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377FC0u;
label_377fc0:
    // 0x377fc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377fc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x377fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x377FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377FD0u;
        // 0x377fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377FD8u;
}
