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

// Function: sub_0028BEC8
// Address: 0x28bec8 - 0x28bf00
void sub_0028BEC8_0x28bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BEC8_0x28bec8");
#endif

    switch (ctx->pc) {
        case 0x28bee0u: goto label_28bee0;
        case 0x28bee8u: goto label_28bee8;
        default: break;
    }

    ctx->pc = 0x28bec8u;

    // 0x28bec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28bec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28becc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28beccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28bed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28bed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28bed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28bed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bed8: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x28BED8u;
    SET_GPR_U32(ctx, 31, 0x28BEE0u);
    ctx->pc = 0x28BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BED8u;
    // 0x28bedc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x28BED8u, 0x28BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BEE0u;
label_28bee0:
    // 0x28bee0: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x28BEE0u;
    SET_GPR_U32(ctx, 31, 0x28BEE8u);
    ctx->pc = 0x28BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28BEE0u;
    // 0x28bee4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x28BEE0u, 0x28BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BEE8u;
label_28bee8:
    // 0x28bee8: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x28bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x28beec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28beecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28bef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bef4: 0x3e00008  jr          $ra
    ctx->pc = 0x28BEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BEF4u;
        // 0x28bef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BEFCu;
    // 0x28befc: 0x0  nop
    ctx->pc = 0x28befcu;
    // NOP
    ctx->pc = 0x28bf00u;
}
