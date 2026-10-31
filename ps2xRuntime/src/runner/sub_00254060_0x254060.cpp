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

// Function: sub_00254060
// Address: 0x254060 - 0x254078
void sub_00254060_0x254060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254060_0x254060");
#endif

    ctx->pc = 0x254060u;

    // 0x254060: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x254060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x254064: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x254064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x254068: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x254068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25406c: 0x3e00008  jr          $ra
    ctx->pc = 0x25406Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25406Cu;
        // 0x254070: 0x90620010  lbu         $v0, 0x10($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25406Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254074u;
    // 0x254074: 0x0  nop
    ctx->pc = 0x254074u;
    // NOP
    ctx->pc = 0x254078u;
}
