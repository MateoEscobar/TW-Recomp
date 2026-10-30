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

// Function: sub_001D7C70
// Address: 0x1d7c70 - 0x1d7cb0
void sub_001D7C70_0x1d7c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7C70_0x1d7c70");
#endif

    switch (ctx->pc) {
        case 0x1d7c84u: goto label_1d7c84;
        case 0x1d7c8cu: goto label_1d7c8c;
        case 0x1d7c94u: goto label_1d7c94;
        case 0x1d7c9cu: goto label_1d7c9c;
        default: break;
    }

    ctx->pc = 0x1d7c70u;

    // 0x1d7c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7c74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7c7c: 0xc075c86  jal         func_1D7218
    ctx->pc = 0x1D7C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C84u);
    ctx->pc = 0x1D7C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C7Cu;
    // 0x1d7c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7218u, 0x1D7C7Cu, 0x1D7C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C84u;
label_1d7c84:
    // 0x1d7c84: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1D7C84u;
    SET_GPR_U32(ctx, 31, 0x1D7C8Cu);
    ctx->pc = 0x1D7C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C84u;
    // 0x1d7c88: 0x26040650  addiu       $a0, $s0, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1D7C84u, 0x1D7C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C8Cu;
label_1d7c8c:
    // 0x1d7c8c: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x1D7C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C94u);
    ctx->pc = 0x1D7C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C8Cu;
    // 0x1d7c90: 0x26040750  addiu       $a0, $s0, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1D7C8Cu, 0x1D7C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C94u;
label_1d7c94:
    // 0x1d7c94: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1D7C94u;
    SET_GPR_U32(ctx, 31, 0x1D7C9Cu);
    ctx->pc = 0x1D7C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C94u;
    // 0x1d7c98: 0x26040850  addiu       $a0, $s0, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1D7C94u, 0x1D7C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C9Cu;
label_1d7c9c:
    // 0x1d7c9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CA4u;
        // 0x1d7ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7CACu;
    // 0x1d7cac: 0x0  nop
    ctx->pc = 0x1d7cacu;
    // NOP
    ctx->pc = 0x1d7cb0u;
}
