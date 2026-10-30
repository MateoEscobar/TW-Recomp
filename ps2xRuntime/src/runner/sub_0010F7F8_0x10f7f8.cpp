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

// Function: sub_0010F7F8
// Address: 0x10f7f8 - 0x10f810
void sub_0010F7F8_0x10f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F7F8_0x10f7f8");
#endif

    ctx->pc = 0x10f7f8u;

    // 0x10f7f8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x10f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x10f7fc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10f800: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10f800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10f804: 0x3e00008  jr          $ra
    ctx->pc = 0x10F804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F804u;
        // 0x10f808: 0xac807a34  sw          $zero, 0x7A34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 31284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F80Cu;
    // 0x10f80c: 0x0  nop
    ctx->pc = 0x10f80cu;
    // NOP
    ctx->pc = 0x10f810u;
}
