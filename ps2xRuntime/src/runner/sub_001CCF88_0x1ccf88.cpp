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

// Function: sub_001CCF88
// Address: 0x1ccf88 - 0x1ccfc0
void sub_001CCF88_0x1ccf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCF88_0x1ccf88");
#endif

    switch (ctx->pc) {
        case 0x1ccfa8u: goto label_1ccfa8;
        default: break;
    }

    ctx->pc = 0x1ccf88u;

    // 0x1ccf88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccf8c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ccf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1ccf90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ccf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ccf94: 0x2442ae78  addiu       $v0, $v0, -0x5188
    ctx->pc = 0x1ccf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946424));
    // 0x1ccf98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccf9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccf9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfa0: 0xc0733fc  jal         func_1CCFF0
    ctx->pc = 0x1CCFA0u;
    SET_GPR_U32(ctx, 31, 0x1CCFA8u);
    ctx->pc = 0x1CCFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFA0u;
    // 0x1ccfa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFF0u, 0x1CCFA0u, 0x1CCFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFA8u;
label_1ccfa8:
    // 0x1ccfa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ccfa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ccfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFB4u;
        // 0x1ccfb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFBCu;
    // 0x1ccfbc: 0x0  nop
    ctx->pc = 0x1ccfbcu;
    // NOP
    ctx->pc = 0x1ccfc0u;
}
