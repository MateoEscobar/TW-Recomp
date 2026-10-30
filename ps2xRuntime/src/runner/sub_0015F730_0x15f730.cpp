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

// Function: sub_0015F730
// Address: 0x15f730 - 0x15f750
void sub_0015F730_0x15f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F730_0x15f730");
#endif

    ctx->pc = 0x15f730u;

    // 0x15f730: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15f730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15f734: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x15f734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x15f738: 0x2442f750  addiu       $v0, $v0, -0x8B0
    ctx->pc = 0x15f738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965072));
    // 0x15f73c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15f740: 0xac62c7ac  sw          $v0, -0x3854($v1)
    ctx->pc = 0x15f740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C7ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C7ACu, _value); } while (0);
    // 0x15f744: 0x3e00008  jr          $ra
    ctx->pc = 0x15F744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F744u;
        // 0x15f748: 0xac80c7a4  sw          $zero, -0x385C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294952868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F74Cu;
    // 0x15f74c: 0x0  nop
    ctx->pc = 0x15f74cu;
    // NOP
    ctx->pc = 0x15f750u;
}
