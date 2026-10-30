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

// Function: sub_00288C60
// Address: 0x288c60 - 0x288cb0
void sub_00288C60_0x288c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288C60_0x288c60");
#endif

    switch (ctx->pc) {
        case 0x288c88u: goto label_288c88;
        case 0x288c98u: goto label_288c98;
        default: break;
    }

    ctx->pc = 0x288c60u;

    // 0x288c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x288c64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x288c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x288c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288c74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x288c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x288c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c7c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x288c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x288c80: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x288C80u;
    SET_GPR_U32(ctx, 31, 0x288C88u);
    ctx->pc = 0x288C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C80u;
    // 0x288c84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x288C80u, 0x288C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C88u;
label_288c88:
    // 0x288c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x288c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c90: 0xc0a232c  jal         func_288CB0
    ctx->pc = 0x288C90u;
    SET_GPR_U32(ctx, 31, 0x288C98u);
    ctx->pc = 0x288C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C90u;
    // 0x288c94: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x288CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288CB0u, 0x288C90u, 0x288C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C98u;
label_288c98:
    // 0x288c98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x288c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288c9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x288CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288CA4u;
        // 0x288ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288CACu;
    // 0x288cac: 0x0  nop
    ctx->pc = 0x288cacu;
    // NOP
    ctx->pc = 0x288cb0u;
}
