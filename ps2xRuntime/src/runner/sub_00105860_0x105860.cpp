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

// Function: sub_00105860
// Address: 0x105860 - 0x105898
void sub_00105860_0x105860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105860_0x105860");
#endif

    switch (ctx->pc) {
        case 0x105874u: goto label_105874;
        case 0x105884u: goto label_105884;
        default: break;
    }

    ctx->pc = 0x105860u;

    // 0x105860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105864: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x105864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x105868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10586c: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10586Cu;
    SET_GPR_U32(ctx, 31, 0x105874u);
    ctx->pc = 0x105870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10586Cu;
    // 0x105870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10586Cu, 0x105874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105874u;
label_105874:
    // 0x105874: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x105874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x105878: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x105878u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10587c: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10587Cu;
    SET_GPR_U32(ctx, 31, 0x105884u);
    ctx->pc = 0x105880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10587Cu;
    // 0x105880: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10587Cu, 0x105884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105884u;
label_105884:
    // 0x105884: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x105884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105888: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x105888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10588c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10588cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105890: 0x3e00008  jr          $ra
    ctx->pc = 0x105890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105890u;
        // 0x105894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105898u;
}
