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

// Function: sub_0035DEF0
// Address: 0x35def0 - 0x35df20
void sub_0035DEF0_0x35def0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DEF0_0x35def0");
#endif

    switch (ctx->pc) {
        case 0x35df04u: goto label_35df04;
        case 0x35df0cu: goto label_35df0c;
        default: break;
    }

    ctx->pc = 0x35def0u;

    // 0x35def0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35def0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35def4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35def4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35def8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35def8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35defc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35DEFCu;
    SET_GPR_U32(ctx, 31, 0x35DF04u);
    ctx->pc = 0x35DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DEFCu;
    // 0x35df00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35DEFCu, 0x35DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF04u;
label_35df04:
    // 0x35df04: 0xc08e96e  jal         func_23A5B8
    ctx->pc = 0x35DF04u;
    SET_GPR_U32(ctx, 31, 0x35DF0Cu);
    ctx->pc = 0x35DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF04u;
    // 0x35df08: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5B8u, 0x35DF04u, 0x35DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF0Cu;
label_35df0c:
    // 0x35df0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35df0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35df10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35df10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35df14: 0x3e00008  jr          $ra
    ctx->pc = 0x35DF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF14u;
        // 0x35df18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DF1Cu;
    // 0x35df1c: 0x0  nop
    ctx->pc = 0x35df1cu;
    // NOP
    ctx->pc = 0x35df20u;
}
