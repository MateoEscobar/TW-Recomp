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

// Function: sub_001DFFA8
// Address: 0x1dffa8 - 0x1dffd8
void sub_001DFFA8_0x1dffa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFFA8_0x1dffa8");
#endif

    switch (ctx->pc) {
        case 0x1dffbcu: goto label_1dffbc;
        default: break;
    }

    ctx->pc = 0x1dffa8u;

    // 0x1dffa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dffa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dffac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dffb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dffb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dffb4: 0xc074656  jal         func_1D1958
    ctx->pc = 0x1DFFB4u;
    SET_GPR_U32(ctx, 31, 0x1DFFBCu);
    ctx->pc = 0x1DFFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFFB4u;
    // 0x1dffb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1958u, 0x1DFFB4u, 0x1DFFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFBCu;
label_1dffbc:
    // 0x1dffbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dffc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dffc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dffc4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1dffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1dffc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dffc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dffcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFCCu;
        // 0x1dffd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFFD4u;
    // 0x1dffd4: 0x0  nop
    ctx->pc = 0x1dffd4u;
    // NOP
    ctx->pc = 0x1dffd8u;
}
