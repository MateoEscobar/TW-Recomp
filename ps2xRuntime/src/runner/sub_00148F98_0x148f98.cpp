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

// Function: sub_00148F98
// Address: 0x148f98 - 0x148fc8
void sub_00148F98_0x148f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148F98_0x148f98");
#endif

    switch (ctx->pc) {
        case 0x148fb0u: goto label_148fb0;
        default: break;
    }

    ctx->pc = 0x148f98u;

    // 0x148f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x148fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fa8: 0xc0523f2  jal         func_148FC8
    ctx->pc = 0x148FA8u;
    SET_GPR_U32(ctx, 31, 0x148FB0u);
    ctx->pc = 0x148FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148FA8u;
    // 0x148fac: 0xfe000008  sd          $zero, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148FC8u, 0x148FA8u, 0x148FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FB0u;
label_148fb0:
    // 0x148fb0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x148fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x148fb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x148fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x148FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148FBCu;
        // 0x148fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148FC4u;
    // 0x148fc4: 0x0  nop
    ctx->pc = 0x148fc4u;
    // NOP
    ctx->pc = 0x148fc8u;
}
