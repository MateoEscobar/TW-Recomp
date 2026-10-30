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

// Function: sub_00160D00
// Address: 0x160d00 - 0x160d38
void sub_00160D00_0x160d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160D00_0x160d00");
#endif

    switch (ctx->pc) {
        case 0x160d2cu: goto label_160d2c;
        default: break;
    }

    ctx->pc = 0x160d00u;

    // 0x160d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x160d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x160d04: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x160d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160d0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x160d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160d10: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x160d10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x160d14: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x160d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x160d18: 0x24845d90  addiu       $a0, $a0, 0x5D90
    ctx->pc = 0x160d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23952));
    // 0x160d1c: 0x946556dc  lhu         $a1, 0x56DC($v1)
    ctx->pc = 0x160d1cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22236)));
    // 0x160d20: 0xac66014c  sw          $a2, 0x14C($v1)
    ctx->pc = 0x160d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 6));
    // 0x160d24: 0xc0571ea  jal         func_15C7A8
    ctx->pc = 0x160D24u;
    SET_GPR_U32(ctx, 31, 0x160D2Cu);
    ctx->pc = 0x160D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160D24u;
    // 0x160d28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C7A8u, 0x160D24u, 0x160D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D2Cu;
label_160d2c:
    // 0x160d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d30: 0x3e00008  jr          $ra
    ctx->pc = 0x160D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D30u;
        // 0x160d34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D38u;
}
