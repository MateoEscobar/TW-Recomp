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

// Function: sub_0036C1D8
// Address: 0x36c1d8 - 0x36c208
void sub_0036C1D8_0x36c1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C1D8_0x36c1d8");
#endif

    switch (ctx->pc) {
        case 0x36c1ecu: goto label_36c1ec;
        case 0x36c1f4u: goto label_36c1f4;
        default: break;
    }

    ctx->pc = 0x36c1d8u;

    // 0x36c1d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c1dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c1e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c1e4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36C1E4u;
    SET_GPR_U32(ctx, 31, 0x36C1ECu);
    ctx->pc = 0x36C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C1E4u;
    // 0x36c1e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36C1E4u, 0x36C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C1ECu;
label_36c1ec:
    // 0x36c1ec: 0xc107698  jal         func_41DA60
    ctx->pc = 0x36C1ECu;
    SET_GPR_U32(ctx, 31, 0x36C1F4u);
    ctx->pc = 0x36C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C1ECu;
    // 0x36c1f0: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DA60u, 0x36C1ECu, 0x36C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C1F4u;
label_36c1f4:
    // 0x36c1f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c1f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c1f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x36C1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C1FCu;
        // 0x36c200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C204u;
    // 0x36c204: 0x0  nop
    ctx->pc = 0x36c204u;
    // NOP
    ctx->pc = 0x36c208u;
}
