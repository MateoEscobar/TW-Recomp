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

// Function: sub_001E7408
// Address: 0x1e7408 - 0x1e7468
void sub_001E7408_0x1e7408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7408_0x1e7408");
#endif

    switch (ctx->pc) {
        case 0x1e7430u: goto label_1e7430;
        case 0x1e7448u: goto label_1e7448;
        default: break;
    }

    ctx->pc = 0x1e7408u;

    // 0x1e7408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e740c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e7410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e741c: 0x8e020204  lw          $v0, 0x204($s0)
    ctx->pc = 0x1e741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1e7420: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7420u;
    {
        const bool branch_taken_0x1e7420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7420u;
        // 0x1e7424: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7420) {
            ctx->pc = 0x1E7434u;
            goto label_1e7434;
        }
    }
    ctx->pc = 0x1E7428u;
    // 0x1e7428: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1E7428u;
    SET_GPR_U32(ctx, 31, 0x1E7430u);
    ctx->pc = 0x1E742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7428u;
    // 0x1e742c: 0x8e0502d4  lw          $a1, 0x2D4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1E7428u, 0x1E7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7430u;
label_1e7430:
    // 0x1e7430: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x1e7430u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_1e7434:
    // 0x1e7434: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x1e7434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x1e7438: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7438u;
    {
        const bool branch_taken_0x1e7438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7438u;
        // 0x1e743c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7438) {
            ctx->pc = 0x1E744Cu;
            goto label_1e744c;
        }
    }
    ctx->pc = 0x1E7440u;
    // 0x1e7440: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1E7440u;
    SET_GPR_U32(ctx, 31, 0x1E7448u);
    ctx->pc = 0x1E7444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7440u;
    // 0x1e7444: 0x8c8503d4  lw          $a1, 0x3D4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 980)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1E7440u, 0x1E7448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7448u;
label_1e7448:
    // 0x1e7448: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x1e7448u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_1e744c:
    // 0x1e744c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e744cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7450: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e7450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e745c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E745Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E745Cu;
        // 0x1e7460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E745Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7464u;
    // 0x1e7464: 0x0  nop
    ctx->pc = 0x1e7464u;
    // NOP
    ctx->pc = 0x1e7468u;
}
