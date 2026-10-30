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

// Function: sub_0035DEC0
// Address: 0x35dec0 - 0x35def0
void sub_0035DEC0_0x35dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DEC0_0x35dec0");
#endif

    switch (ctx->pc) {
        case 0x35ded4u: goto label_35ded4;
        case 0x35dedcu: goto label_35dedc;
        default: break;
    }

    ctx->pc = 0x35dec0u;

    // 0x35dec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35dec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35dec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35dec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35dec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35decc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35DECCu;
    SET_GPR_U32(ctx, 31, 0x35DED4u);
    ctx->pc = 0x35DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DECCu;
    // 0x35ded0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35DECCu, 0x35DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DED4u;
label_35ded4:
    // 0x35ded4: 0xc08e97a  jal         func_23A5E8
    ctx->pc = 0x35DED4u;
    SET_GPR_U32(ctx, 31, 0x35DEDCu);
    ctx->pc = 0x35DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DED4u;
    // 0x35ded8: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5E8u, 0x35DED4u, 0x35DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DEDCu;
label_35dedc:
    // 0x35dedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35dedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35dee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dee4: 0x3e00008  jr          $ra
    ctx->pc = 0x35DEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DEE4u;
        // 0x35dee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DEECu;
    // 0x35deec: 0x0  nop
    ctx->pc = 0x35deecu;
    // NOP
    ctx->pc = 0x35def0u;
}
