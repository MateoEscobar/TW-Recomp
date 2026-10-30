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

// Function: sub_001FBA78
// Address: 0x1fba78 - 0x1fba98
void sub_001FBA78_0x1fba78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBA78_0x1fba78");
#endif

    switch (ctx->pc) {
        case 0x1fba88u: goto label_1fba88;
        default: break;
    }

    ctx->pc = 0x1fba78u;

    // 0x1fba78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fba78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fba7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fba80: 0xc07eca4  jal         func_1FB290
    ctx->pc = 0x1FBA80u;
    SET_GPR_U32(ctx, 31, 0x1FBA88u);
    ctx->pc = 0x1FBA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA80u;
    // 0x1fba84: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB290u, 0x1FBA80u, 0x1FBA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA88u;
label_1fba88:
    // 0x1fba88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fba88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fba8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA8Cu;
        // 0x1fba90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBA94u;
    // 0x1fba94: 0x0  nop
    ctx->pc = 0x1fba94u;
    // NOP
    ctx->pc = 0x1fba98u;
}
