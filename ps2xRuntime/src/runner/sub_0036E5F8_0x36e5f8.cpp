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

// Function: sub_0036E5F8
// Address: 0x36e5f8 - 0x36e630
void sub_0036E5F8_0x36e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E5F8_0x36e5f8");
#endif

    switch (ctx->pc) {
        case 0x36e60cu: goto label_36e60c;
        case 0x36e614u: goto label_36e614;
        case 0x36e61cu: goto label_36e61c;
        default: break;
    }

    ctx->pc = 0x36e5f8u;

    // 0x36e5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e5fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e604: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E604u;
    SET_GPR_U32(ctx, 31, 0x36E60Cu);
    ctx->pc = 0x36E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E604u;
    // 0x36e608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E604u, 0x36E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E60Cu;
label_36e60c:
    // 0x36e60c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E60Cu;
    SET_GPR_U32(ctx, 31, 0x36E614u);
    ctx->pc = 0x36E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E60Cu;
    // 0x36e610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E60Cu, 0x36E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E614u;
label_36e614:
    // 0x36e614: 0xc103242  jal         func_40C908
    ctx->pc = 0x36E614u;
    SET_GPR_U32(ctx, 31, 0x36E61Cu);
    ctx->pc = 0x36E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E614u;
    // 0x36e618: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C908u, 0x36E614u, 0x36E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E61Cu;
label_36e61c:
    // 0x36e61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e624: 0x3e00008  jr          $ra
    ctx->pc = 0x36E624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E624u;
        // 0x36e628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E62Cu;
    // 0x36e62c: 0x0  nop
    ctx->pc = 0x36e62cu;
    // NOP
    ctx->pc = 0x36e630u;
}
