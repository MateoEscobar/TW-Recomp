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

// Function: sub_0041A3E0
// Address: 0x41a3e0 - 0x41a400
void sub_0041A3E0_0x41a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A3E0_0x41a3e0");
#endif

    ctx->pc = 0x41a3e0u;

    // 0x41a3e0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x41a3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x41a3e4: 0x90a256de  lbu         $v0, 0x56DE($a1)
    ctx->pc = 0x41a3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 22238)));
    // 0x41a3e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41A3E8u;
    {
        const bool branch_taken_0x41a3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A3E8u;
        // 0x41a3ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a3e8) {
            ctx->pc = 0x41A3F8u;
            goto label_41a3f8;
        }
    }
    ctx->pc = 0x41A3F0u;
    // 0x41a3f0: 0x908256e0  lbu         $v0, 0x56E0($a0)
    ctx->pc = 0x41a3f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22240)));
    // 0x41a3f4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x41a3f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41a3f8:
    // 0x41a3f8: 0x3e00008  jr          $ra
    ctx->pc = 0x41A3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A3F8u;
        // 0x41a3fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A400u;
}
