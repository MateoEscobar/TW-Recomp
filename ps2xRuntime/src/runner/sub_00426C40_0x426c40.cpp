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

// Function: sub_00426C40
// Address: 0x426c40 - 0x426c78
void sub_00426C40_0x426c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426C40_0x426c40");
#endif

    switch (ctx->pc) {
        case 0x426c50u: goto label_426c50;
        case 0x426c5cu: goto label_426c5c;
        default: break;
    }

    ctx->pc = 0x426c40u;

    // 0x426c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x426c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x426c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x426c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x426c48: 0xc109b8a  jal         func_426E28
    ctx->pc = 0x426C48u;
    SET_GPR_U32(ctx, 31, 0x426C50u);
    ctx->pc = 0x426E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426E28u, 0x426C48u, 0x426C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426C50u;
label_426c50:
    // 0x426c50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x426c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x426c54: 0xc109b56  jal         func_426D58
    ctx->pc = 0x426C54u;
    SET_GPR_U32(ctx, 31, 0x426C5Cu);
    ctx->pc = 0x426C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426C54u;
    // 0x426c58: 0x8c4451b4  lw          $a0, 0x51B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426D58u, 0x426C54u, 0x426C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426C5Cu;
label_426c5c:
    // 0x426c5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x426c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x426c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x426c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x426c64: 0xac6251c4  sw          $v0, 0x51C4($v1)
    ctx->pc = 0x426c64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5151C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5151C4u, _value); } while (0);
    // 0x426c68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x426c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x426c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x426C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426C6Cu;
        // 0x426c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426C74u;
    // 0x426c74: 0x0  nop
    ctx->pc = 0x426c74u;
    // NOP
    ctx->pc = 0x426c78u;
}
