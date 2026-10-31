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

// Function: sub_0031EF78
// Address: 0x31ef78 - 0x31efb8
void sub_0031EF78_0x31ef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EF78_0x31ef78");
#endif

    switch (ctx->pc) {
        case 0x31ef94u: goto label_31ef94;
        case 0x31efa4u: goto label_31efa4;
        default: break;
    }

    ctx->pc = 0x31ef78u;

    // 0x31ef78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ef7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ef7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31ef80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31ef84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ef88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ef88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef8c: 0xc059646  jal         func_165918
    ctx->pc = 0x31EF8Cu;
    SET_GPR_U32(ctx, 31, 0x31EF94u);
    ctx->pc = 0x31EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF8Cu;
    // 0x31ef90: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165918u, 0x31EF8Cu, 0x31EF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EF94u;
label_31ef94:
    // 0x31ef94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31ef98: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x31ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x31ef9c: 0xc0590bc  jal         func_1642F0
    ctx->pc = 0x31EF9Cu;
    SET_GPR_U32(ctx, 31, 0x31EFA4u);
    ctx->pc = 0x31EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EF9Cu;
    // 0x31efa0: 0x248401b0  addiu       $a0, $a0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642F0u, 0x31EF9Cu, 0x31EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EFA4u;
label_31efa4:
    // 0x31efa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31efa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31efa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31efa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31efac: 0x3e00008  jr          $ra
    ctx->pc = 0x31EFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EFACu;
        // 0x31efb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EFB4u;
    // 0x31efb4: 0x0  nop
    ctx->pc = 0x31efb4u;
    // NOP
    ctx->pc = 0x31efb8u;
}
