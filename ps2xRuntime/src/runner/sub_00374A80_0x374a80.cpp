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

// Function: sub_00374A80
// Address: 0x374a80 - 0x374ab8
void sub_00374A80_0x374a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374A80_0x374a80");
#endif

    switch (ctx->pc) {
        case 0x374a94u: goto label_374a94;
        case 0x374a9cu: goto label_374a9c;
        case 0x374aa4u: goto label_374aa4;
        default: break;
    }

    ctx->pc = 0x374a80u;

    // 0x374a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374a84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374a8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374A8Cu;
    SET_GPR_U32(ctx, 31, 0x374A94u);
    ctx->pc = 0x374A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374A8Cu;
    // 0x374a90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374A8Cu, 0x374A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A94u;
label_374a94:
    // 0x374a94: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374A94u;
    SET_GPR_U32(ctx, 31, 0x374A9Cu);
    ctx->pc = 0x374A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374A94u;
    // 0x374a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374A94u, 0x374A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A9Cu;
label_374a9c:
    // 0x374a9c: 0xc0c575c  jal         func_315D70
    ctx->pc = 0x374A9Cu;
    SET_GPR_U32(ctx, 31, 0x374AA4u);
    ctx->pc = 0x374AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374A9Cu;
    // 0x374aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315D70u, 0x374A9Cu, 0x374AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374AA4u;
label_374aa4:
    // 0x374aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374aa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x374aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374aac: 0x3e00008  jr          $ra
    ctx->pc = 0x374AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374AACu;
        // 0x374ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374AB4u;
    // 0x374ab4: 0x0  nop
    ctx->pc = 0x374ab4u;
    // NOP
    ctx->pc = 0x374ab8u;
}
