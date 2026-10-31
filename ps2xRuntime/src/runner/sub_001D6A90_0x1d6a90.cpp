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

// Function: sub_001D6A90
// Address: 0x1d6a90 - 0x1d6ad0
void sub_001D6A90_0x1d6a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6A90_0x1d6a90");
#endif

    switch (ctx->pc) {
        case 0x1d6aa4u: goto label_1d6aa4;
        case 0x1d6aacu: goto label_1d6aac;
        case 0x1d6ab4u: goto label_1d6ab4;
        case 0x1d6abcu: goto label_1d6abc;
        default: break;
    }

    ctx->pc = 0x1d6a90u;

    // 0x1d6a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6a94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d6a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6a9c: 0xc075972  jal         func_1D65C8
    ctx->pc = 0x1D6A9Cu;
    SET_GPR_U32(ctx, 31, 0x1D6AA4u);
    ctx->pc = 0x1D6AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A9Cu;
    // 0x1d6aa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D65C8u, 0x1D6A9Cu, 0x1D6AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AA4u;
label_1d6aa4:
    // 0x1d6aa4: 0xc0734a0  jal         func_1CD280
    ctx->pc = 0x1D6AA4u;
    SET_GPR_U32(ctx, 31, 0x1D6AACu);
    ctx->pc = 0x1D6AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AA4u;
    // 0x1d6aa8: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1D6AA4u, 0x1D6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AACu;
label_1d6aac:
    // 0x1d6aac: 0xc0734a0  jal         func_1CD280
    ctx->pc = 0x1D6AACu;
    SET_GPR_U32(ctx, 31, 0x1D6AB4u);
    ctx->pc = 0x1D6AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AACu;
    // 0x1d6ab0: 0x260403f0  addiu       $a0, $s0, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1D6AACu, 0x1D6AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AB4u;
label_1d6ab4:
    // 0x1d6ab4: 0xc0734a0  jal         func_1CD280
    ctx->pc = 0x1D6AB4u;
    SET_GPR_U32(ctx, 31, 0x1D6ABCu);
    ctx->pc = 0x1D6AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AB4u;
    // 0x1d6ab8: 0x26040320  addiu       $a0, $s0, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1D6AB4u, 0x1D6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6ABCu;
label_1d6abc:
    // 0x1d6abc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AC4u;
        // 0x1d6ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6ACCu;
    // 0x1d6acc: 0x0  nop
    ctx->pc = 0x1d6accu;
    // NOP
    ctx->pc = 0x1d6ad0u;
}
