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

// Function: sub_00338650
// Address: 0x338650 - 0x338680
void sub_00338650_0x338650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338650_0x338650");
#endif

    ctx->pc = 0x338650u;

    // 0x338650: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x338650u;
    {
        const bool branch_taken_0x338650 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x338654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338650u;
        // 0x338654: 0x6102b  sltu        $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x338650) {
            ctx->pc = 0x33865Cu;
            goto label_33865c;
        }
    }
    ctx->pc = 0x338658u;
    // 0x338658: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x338658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_33865c:
    // 0x33865c: 0x3e00008  jr          $ra
    ctx->pc = 0x33865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33865Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338664u;
    // 0x338664: 0x0  nop
    ctx->pc = 0x338664u;
    // NOP
    // 0x338668: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x338668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33866c: 0x0  nop
    ctx->pc = 0x33866cu;
    // NOP
    // 0x338670: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x338670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x338674: 0x0  nop
    ctx->pc = 0x338674u;
    // NOP
    // 0x338678: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x338678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33867c: 0x0  nop
    ctx->pc = 0x33867cu;
    // NOP
    ctx->pc = 0x338680u;
}
