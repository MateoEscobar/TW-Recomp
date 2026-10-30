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

// Function: sub_0019AFD0
// Address: 0x19afd0 - 0x19aff8
void sub_0019AFD0_0x19afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AFD0_0x19afd0");
#endif

    switch (ctx->pc) {
        case 0x19afecu: goto label_19afec;
        default: break;
    }

    ctx->pc = 0x19afd0u;

    // 0x19afd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19afd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19afd4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x19afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x19afd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19afdc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19afdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afe0: 0x24429140  addiu       $v0, $v0, -0x6EC0
    ctx->pc = 0x19afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938944));
    // 0x19afe4: 0xc066eae  jal         func_19BAB8
    ctx->pc = 0x19AFE4u;
    SET_GPR_U32(ctx, 31, 0x19AFECu);
    ctx->pc = 0x19AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AFE4u;
    // 0x19afe8: 0xac620094  sw          $v0, 0x94($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BAB8u, 0x19AFE4u, 0x19AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AFECu;
label_19afec:
    // 0x19afec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19afecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aff0: 0x3e00008  jr          $ra
    ctx->pc = 0x19AFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFF0u;
        // 0x19aff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AFF8u;
}
