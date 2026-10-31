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

// Function: sub_0036AD50
// Address: 0x36ad50 - 0x36ad80
void sub_0036AD50_0x36ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AD50_0x36ad50");
#endif

    switch (ctx->pc) {
        case 0x36ad64u: goto label_36ad64;
        case 0x36ad6cu: goto label_36ad6c;
        default: break;
    }

    ctx->pc = 0x36ad50u;

    // 0x36ad50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ad54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ad58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ad5c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36AD5Cu;
    SET_GPR_U32(ctx, 31, 0x36AD64u);
    ctx->pc = 0x36AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AD5Cu;
    // 0x36ad60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36AD5Cu, 0x36AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AD64u;
label_36ad64:
    // 0x36ad64: 0xc1075ca  jal         func_41D728
    ctx->pc = 0x36AD64u;
    SET_GPR_U32(ctx, 31, 0x36AD6Cu);
    ctx->pc = 0x36AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AD64u;
    // 0x36ad68: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D728u, 0x36AD64u, 0x36AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AD6Cu;
label_36ad6c:
    // 0x36ad6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ad6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ad70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ad70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad74: 0x3e00008  jr          $ra
    ctx->pc = 0x36AD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD74u;
        // 0x36ad78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AD7Cu;
    // 0x36ad7c: 0x0  nop
    ctx->pc = 0x36ad7cu;
    // NOP
    ctx->pc = 0x36ad80u;
}
