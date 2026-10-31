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

// Function: sub_0036BE20
// Address: 0x36be20 - 0x36be50
void sub_0036BE20_0x36be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BE20_0x36be20");
#endif

    switch (ctx->pc) {
        case 0x36be34u: goto label_36be34;
        case 0x36be3cu: goto label_36be3c;
        default: break;
    }

    ctx->pc = 0x36be20u;

    // 0x36be20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36be24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36be28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36be2c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36BE2Cu;
    SET_GPR_U32(ctx, 31, 0x36BE34u);
    ctx->pc = 0x36BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE2Cu;
    // 0x36be30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36BE2Cu, 0x36BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE34u;
label_36be34:
    // 0x36be34: 0xc1075dc  jal         func_41D770
    ctx->pc = 0x36BE34u;
    SET_GPR_U32(ctx, 31, 0x36BE3Cu);
    ctx->pc = 0x36BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BE34u;
    // 0x36be38: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D770u, 0x36BE34u, 0x36BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BE3Cu;
label_36be3c:
    // 0x36be3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36be3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36be40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36be40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36be44: 0x3e00008  jr          $ra
    ctx->pc = 0x36BE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BE44u;
        // 0x36be48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BE4Cu;
    // 0x36be4c: 0x0  nop
    ctx->pc = 0x36be4cu;
    // NOP
    ctx->pc = 0x36be50u;
}
