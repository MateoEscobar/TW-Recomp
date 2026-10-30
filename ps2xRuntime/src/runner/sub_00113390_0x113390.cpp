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

// Function: sub_00113390
// Address: 0x113390 - 0x1133b0
void sub_00113390_0x113390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113390_0x113390");
#endif

    ctx->pc = 0x113390u;

    // 0x113390: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113394: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x113394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x113398: 0x8c45aa84  lw          $a1, -0x557C($v0)
    ctx->pc = 0x113398u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50AA84u));
    // 0x11339c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x11339cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1133a0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1133a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1133a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1133A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1133A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133A4u;
        // 0x1133a8: 0xaca47ab4  sw          $a0, 0x7AB4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 31412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1133A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1133ACu;
    // 0x1133ac: 0x0  nop
    ctx->pc = 0x1133acu;
    // NOP
    ctx->pc = 0x1133b0u;
}
