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

// Function: sub_0036EEC8
// Address: 0x36eec8 - 0x36eef8
void sub_0036EEC8_0x36eec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EEC8_0x36eec8");
#endif

    switch (ctx->pc) {
        case 0x36eedcu: goto label_36eedc;
        case 0x36eee4u: goto label_36eee4;
        default: break;
    }

    ctx->pc = 0x36eec8u;

    // 0x36eec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36eec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36eecc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36eeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36eed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36eed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36eed4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36EED4u;
    SET_GPR_U32(ctx, 31, 0x36EEDCu);
    ctx->pc = 0x36EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EED4u;
    // 0x36eed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36EED4u, 0x36EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EEDCu;
label_36eedc:
    // 0x36eedc: 0xc06d7fc  jal         func_1B5FF0
    ctx->pc = 0x36EEDCu;
    SET_GPR_U32(ctx, 31, 0x36EEE4u);
    ctx->pc = 0x36EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EEDCu;
    // 0x36eee0: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5FF0u, 0x36EEDCu, 0x36EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EEE4u;
label_36eee4:
    // 0x36eee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36eee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36eee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36eee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eeec: 0x3e00008  jr          $ra
    ctx->pc = 0x36EEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EEECu;
        // 0x36eef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EEF4u;
    // 0x36eef4: 0x0  nop
    ctx->pc = 0x36eef4u;
    // NOP
    ctx->pc = 0x36eef8u;
}
