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

// Function: sub_004B0808
// Address: 0x4b0808 - 0x4b0848
void sub_004B0808_0x4b0808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0808_0x4b0808");
#endif

    switch (ctx->pc) {
        case 0x4b0834u: goto label_4b0834;
        default: break;
    }

    ctx->pc = 0x4b0808u;

    // 0x4b0808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b080c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b080cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4b0810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b0814: 0x8c6271e8  lw          $v0, 0x71E8($v1)
    ctx->pc = 0x4b0814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5971E8u));
    // 0x4b0818: 0x247071e8  addiu       $s0, $v1, 0x71E8
    ctx->pc = 0x4b0818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29160));
    // 0x4b081c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B081Cu;
    {
        const bool branch_taken_0x4b081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B081Cu;
        // 0x4b0820: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b081c) {
            ctx->pc = 0x4B0834u;
            goto label_4b0834;
        }
    }
    ctx->pc = 0x4B0824u;
    // 0x4b0824: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4b0824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4b0828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b0828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b082c: 0xc10bc00  jal         func_42F000
    ctx->pc = 0x4B082Cu;
    SET_GPR_U32(ctx, 31, 0x4B0834u);
    ctx->pc = 0x4B0830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B082Cu;
    // 0x4b0830: 0x24a506a0  addiu       $a1, $a1, 0x6A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F000u, 0x4B082Cu, 0x4B0834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0834u;
label_4b0834:
    // 0x4b0834: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b0834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b0838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b083c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b083cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0840: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0840u;
        // 0x4b0844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0848u;
}
