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

// Function: sub_0036E968
// Address: 0x36e968 - 0x36e998
void sub_0036E968_0x36e968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E968_0x36e968");
#endif

    switch (ctx->pc) {
        case 0x36e97cu: goto label_36e97c;
        case 0x36e984u: goto label_36e984;
        default: break;
    }

    ctx->pc = 0x36e968u;

    // 0x36e968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e96c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e974: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36E974u;
    SET_GPR_U32(ctx, 31, 0x36E97Cu);
    ctx->pc = 0x36E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E974u;
    // 0x36e978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36E974u, 0x36E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E97Cu;
label_36e97c:
    // 0x36e97c: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x36E97Cu;
    SET_GPR_U32(ctx, 31, 0x36E984u);
    ctx->pc = 0x36E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E97Cu;
    // 0x36e980: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5EA8u, 0x36E97Cu, 0x36E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E984u;
label_36e984:
    // 0x36e984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e98c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E98Cu;
        // 0x36e990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E994u;
    // 0x36e994: 0x0  nop
    ctx->pc = 0x36e994u;
    // NOP
    ctx->pc = 0x36e998u;
}
