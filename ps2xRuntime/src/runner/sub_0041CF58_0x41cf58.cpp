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

// Function: sub_0041CF58
// Address: 0x41cf58 - 0x41cf78
void sub_0041CF58_0x41cf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CF58_0x41cf58");
#endif

    ctx->pc = 0x41cf58u;

    // 0x41cf58: 0x248403e8  addiu       $a0, $a0, 0x3E8
    ctx->pc = 0x41cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    // 0x41cf5c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x41cf5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x41cf60: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x41cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x41cf64: 0x63027  nor         $a2, $zero, $a2
    ctx->pc = 0x41cf64u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x41cf68: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x41cf68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x41cf6c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x41cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x41cf70: 0x3e00008  jr          $ra
    ctx->pc = 0x41CF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CF70u;
        // 0x41cf74: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CF78u;
}
