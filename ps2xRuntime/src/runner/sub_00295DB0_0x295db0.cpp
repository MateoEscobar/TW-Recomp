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

// Function: sub_00295DB0
// Address: 0x295db0 - 0x295dd8
void sub_00295DB0_0x295db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295DB0_0x295db0");
#endif

    switch (ctx->pc) {
        case 0x295dccu: goto label_295dcc;
        default: break;
    }

    ctx->pc = 0x295db0u;

    // 0x295db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x295db4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x295db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295dbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295dc0: 0xa0450270  sb          $a1, 0x270($v0)
    ctx->pc = 0x295dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 624), (uint8_t)GPR_U32(ctx, 5));
    // 0x295dc4: 0xc0a55b4  jal         func_2956D0
    ctx->pc = 0x295DC4u;
    SET_GPR_U32(ctx, 31, 0x295DCCu);
    ctx->pc = 0x295DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295DC4u;
    // 0x295dc8: 0xa0430274  sb          $v1, 0x274($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 628), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D0u, 0x295DC4u, 0x295DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DCCu;
label_295dcc:
    // 0x295dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x295DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295DD0u;
        // 0x295dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295DD8u;
}
