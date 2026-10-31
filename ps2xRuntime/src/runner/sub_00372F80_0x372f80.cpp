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

// Function: sub_00372F80
// Address: 0x372f80 - 0x372fb0
void sub_00372F80_0x372f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372F80_0x372f80");
#endif

    switch (ctx->pc) {
        case 0x372f94u: goto label_372f94;
        case 0x372f9cu: goto label_372f9c;
        default: break;
    }

    ctx->pc = 0x372f80u;

    // 0x372f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372f84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372f8c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x372F8Cu;
    SET_GPR_U32(ctx, 31, 0x372F94u);
    ctx->pc = 0x372F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372F8Cu;
    // 0x372f90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x372F8Cu, 0x372F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F94u;
label_372f94:
    // 0x372f94: 0xc045018  jal         func_114060
    ctx->pc = 0x372F94u;
    SET_GPR_U32(ctx, 31, 0x372F9Cu);
    ctx->pc = 0x372F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372F94u;
    // 0x372f98: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x114060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114060u, 0x372F94u, 0x372F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F9Cu;
label_372f9c:
    // 0x372f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372fa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x372FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FA4u;
        // 0x372fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372FACu;
    // 0x372fac: 0x0  nop
    ctx->pc = 0x372facu;
    // NOP
    ctx->pc = 0x372fb0u;
}
