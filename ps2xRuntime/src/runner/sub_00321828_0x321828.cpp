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

// Function: sub_00321828
// Address: 0x321828 - 0x321838
void sub_00321828_0x321828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321828_0x321828");
#endif

    ctx->pc = 0x321828u;

    // 0x321828: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x321828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x32182c: 0x3e00008  jr          $ra
    ctx->pc = 0x32182Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32182Cu;
        // 0x321830: 0xac40b6e0  sw          $zero, -0x4920($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32182Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321834u;
    // 0x321834: 0x0  nop
    ctx->pc = 0x321834u;
    // NOP
    ctx->pc = 0x321838u;
}
