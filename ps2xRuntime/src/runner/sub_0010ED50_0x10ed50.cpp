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

// Function: sub_0010ED50
// Address: 0x10ed50 - 0x10ed90
void sub_0010ED50_0x10ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ED50_0x10ed50");
#endif

    switch (ctx->pc) {
        case 0x10ed74u: goto label_10ed74;
        default: break;
    }

    ctx->pc = 0x10ed50u;

    // 0x10ed50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ed54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10ed58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ed58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ed5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ed5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed60: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x10ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10ed64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10ed68: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x10ed6c: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x10ED6Cu;
    SET_GPR_U32(ctx, 31, 0x10ED74u);
    ctx->pc = 0x10ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED6Cu;
    // 0x10ed70: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EF90u, 0x10ED6Cu, 0x10ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED74u;
label_10ed74:
    // 0x10ed74: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x10ed74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10ed78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ed78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ed7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10ed80: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10ed84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10ed84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ed88: 0x3e00008  jr          $ra
    ctx->pc = 0x10ED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED88u;
        // 0x10ed8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ED88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ED90u;
}
