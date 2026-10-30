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

// Function: sub_0046C100
// Address: 0x46c100 - 0x46c118
void sub_0046C100_0x46c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C100_0x46c100");
#endif

    ctx->pc = 0x46c100u;

    // 0x46c100: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x46c100u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x46c104: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x46c104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c108: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46c108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46c10c: 0x3e00008  jr          $ra
    ctx->pc = 0x46C10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C10Cu;
        // 0x46c110: 0xa483000e  sh          $v1, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C114u;
    // 0x46c114: 0x0  nop
    ctx->pc = 0x46c114u;
    // NOP
    ctx->pc = 0x46c118u;
}
