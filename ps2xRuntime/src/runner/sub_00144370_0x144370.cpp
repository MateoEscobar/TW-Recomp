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

// Function: sub_00144370
// Address: 0x144370 - 0x144398
void sub_00144370_0x144370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144370_0x144370");
#endif

    switch (ctx->pc) {
        case 0x144380u: goto label_144380;
        case 0x14438cu: goto label_14438c;
        default: break;
    }

    ctx->pc = 0x144370u;

    // 0x144370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144378: 0xc051048  jal         func_144120
    ctx->pc = 0x144378u;
    SET_GPR_U32(ctx, 31, 0x144380u);
    ctx->pc = 0x14437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144378u;
    // 0x14437c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x144378u, 0x144380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144380u;
label_144380:
    // 0x144380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144384: 0xc051052  jal         func_144148
    ctx->pc = 0x144384u;
    SET_GPR_U32(ctx, 31, 0x14438Cu);
    ctx->pc = 0x144388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144384u;
    // 0x144388: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144148u, 0x144384u, 0x14438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14438Cu;
label_14438c:
    // 0x14438c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14438cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144390: 0x3e00008  jr          $ra
    ctx->pc = 0x144390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144390u;
        // 0x144394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144398u;
}
