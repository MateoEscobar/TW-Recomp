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

// Function: sub_00488F90
// Address: 0x488f90 - 0x488fb0
void sub_00488F90_0x488f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488F90_0x488f90");
#endif

    ctx->pc = 0x488f90u;

    // 0x488f90: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
    // 0x488f94: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x488f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x488f98: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x488f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x488f9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x488f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x488fa0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x488fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x488FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488FA4u;
        // 0x488fa8: 0xac640010  sw          $a0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488FACu;
    // 0x488fac: 0x0  nop
    ctx->pc = 0x488facu;
    // NOP
    ctx->pc = 0x488fb0u;
}
