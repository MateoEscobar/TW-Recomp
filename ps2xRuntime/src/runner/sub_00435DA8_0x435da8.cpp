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

// Function: sub_00435DA8
// Address: 0x435da8 - 0x435dd0
void sub_00435DA8_0x435da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435DA8_0x435da8");
#endif

    switch (ctx->pc) {
        case 0x435dc0u: goto label_435dc0;
        default: break;
    }

    ctx->pc = 0x435da8u;

    // 0x435da8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x435da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x435dac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x435dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x435db0: 0x8c4669ec  lw          $a2, 0x69EC($v0)
    ctx->pc = 0x435db0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5169ECu));
    // 0x435db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x435db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x435db8: 0xc10d774  jal         func_435DD0
    ctx->pc = 0x435DB8u;
    SET_GPR_U32(ctx, 31, 0x435DC0u);
    ctx->pc = 0x435DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435DB8u;
    // 0x435dbc: 0x24c6005c  addiu       $a2, $a2, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435DD0u, 0x435DB8u, 0x435DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435DC0u;
label_435dc0:
    // 0x435dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x435dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x435DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435DC4u;
        // 0x435dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435DCCu;
    // 0x435dcc: 0x0  nop
    ctx->pc = 0x435dccu;
    // NOP
    ctx->pc = 0x435dd0u;
}
