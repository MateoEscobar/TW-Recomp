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

// Function: sub_0040B410
// Address: 0x40b410 - 0x40b450
void sub_0040B410_0x40b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B410_0x40b410");
#endif

    switch (ctx->pc) {
        case 0x40b428u: goto label_40b428;
        case 0x40b43cu: goto label_40b43c;
        default: break;
    }

    ctx->pc = 0x40b410u;

    // 0x40b410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40b414: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b418: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40b418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40b41c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b420: 0xc1029f6  jal         func_40A7D8
    ctx->pc = 0x40B420u;
    SET_GPR_U32(ctx, 31, 0x40B428u);
    ctx->pc = 0x40B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B420u;
    // 0x40b424: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A7D8u, 0x40B420u, 0x40B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B428u;
label_40b428:
    // 0x40b428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b42c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b430: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x40b430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x40b434: 0xc102b56  jal         func_40AD58
    ctx->pc = 0x40B434u;
    SET_GPR_U32(ctx, 31, 0x40B43Cu);
    ctx->pc = 0x40B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B434u;
    // 0x40b438: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AD58u, 0x40B434u, 0x40B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B43Cu;
label_40b43c:
    // 0x40b43c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40b43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b448: 0x3e00008  jr          $ra
    ctx->pc = 0x40B448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B448u;
        // 0x40b44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B450u;
}
