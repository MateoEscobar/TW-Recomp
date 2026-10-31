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

// Function: sub_001E7750
// Address: 0x1e7750 - 0x1e77a0
void sub_001E7750_0x1e7750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7750_0x1e7750");
#endif

    switch (ctx->pc) {
        case 0x1e7774u: goto label_1e7774;
        case 0x1e777cu: goto label_1e777c;
        case 0x1e7784u: goto label_1e7784;
        default: break;
    }

    ctx->pc = 0x1e7750u;

    // 0x1e7750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7754: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e7754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e7758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e775c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e775cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7760: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x1e7760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1e7764: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7764u;
    {
        const bool branch_taken_0x1e7764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7764) {
            ctx->pc = 0x1E7768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7764u;
            // 0x1e7768: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7788u;
            goto label_1e7788;
        }
    }
    ctx->pc = 0x1E776Cu;
    // 0x1e776c: 0xc068998  jal         func_1A2660
    ctx->pc = 0x1E776Cu;
    SET_GPR_U32(ctx, 31, 0x1E7774u);
    ctx->pc = 0x1E7770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E776Cu;
    // 0x1e7770: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1E776Cu, 0x1E7774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7774u;
label_1e7774:
    // 0x1e7774: 0xc068998  jal         func_1A2660
    ctx->pc = 0x1E7774u;
    SET_GPR_U32(ctx, 31, 0x1E777Cu);
    ctx->pc = 0x1E7778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7774u;
    // 0x1e7778: 0x26040310  addiu       $a0, $s0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1E7774u, 0x1E777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E777Cu;
label_1e777c:
    // 0x1e777c: 0xc06ec70  jal         func_1BB1C0
    ctx->pc = 0x1E777Cu;
    SET_GPR_U32(ctx, 31, 0x1E7784u);
    ctx->pc = 0x1E7780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E777Cu;
    // 0x1e7780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1E777Cu, 0x1E7784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7784u;
label_1e7784:
    // 0x1e7784: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e7784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7788:
    // 0x1e7788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e778c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E778Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E778Cu;
        // 0x1e7790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E778Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7794u;
    // 0x1e7794: 0x0  nop
    ctx->pc = 0x1e7794u;
    // NOP
    // 0x1e7798: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e7798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e779c: 0x0  nop
    ctx->pc = 0x1e779cu;
    // NOP
    ctx->pc = 0x1e77a0u;
}
