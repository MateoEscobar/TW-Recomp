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

// Function: sub_003952F8
// Address: 0x3952f8 - 0x395330
void sub_003952F8_0x3952f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003952F8_0x3952f8");
#endif

    switch (ctx->pc) {
        case 0x39530cu: goto label_39530c;
        case 0x39531cu: goto label_39531c;
        default: break;
    }

    ctx->pc = 0x3952f8u;

    // 0x3952f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3952f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3952fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3952fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x395300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x395304: 0xc0e8662  jal         func_3A1988
    ctx->pc = 0x395304u;
    SET_GPR_U32(ctx, 31, 0x39530Cu);
    ctx->pc = 0x395308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395304u;
    // 0x395308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1988u, 0x395304u, 0x39530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39530Cu;
label_39530c:
    // 0x39530c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x395310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395314: 0xc0e54cc  jal         func_395330
    ctx->pc = 0x395314u;
    SET_GPR_U32(ctx, 31, 0x39531Cu);
    ctx->pc = 0x395318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395314u;
    // 0x395318: 0xa2020108  sb          $v0, 0x108($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395330u, 0x395314u, 0x39531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39531Cu;
label_39531c:
    // 0x39531c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39531cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395324: 0x3e00008  jr          $ra
    ctx->pc = 0x395324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395324u;
        // 0x395328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39532Cu;
    // 0x39532c: 0x0  nop
    ctx->pc = 0x39532cu;
    // NOP
    ctx->pc = 0x395330u;
}
