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

// Function: sub_004F3AE8
// Address: 0x4f3ae8 - 0x4f3b00
void sub_004F3AE8_0x4f3ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3AE8_0x4f3ae8");
#endif

    ctx->pc = 0x4f3ae8u;

    // 0x4f3ae8: 0x90820109  lbu         $v0, 0x109($a0)
    ctx->pc = 0x4f3ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 265)));
    // 0x4f3aec: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3AECu;
        // 0x4f3af0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3AF4u;
    // 0x4f3af4: 0x0  nop
    ctx->pc = 0x4f3af4u;
    // NOP
    // 0x4f3af8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4f3af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4f3afc: 0x0  nop
    ctx->pc = 0x4f3afcu;
    // NOP
    ctx->pc = 0x4f3b00u;
}
