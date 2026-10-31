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

// Function: sub_00202D00
// Address: 0x202d00 - 0x202d28
void sub_00202D00_0x202d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202D00_0x202d00");
#endif

    ctx->pc = 0x202d00u;

    // 0x202d00: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x202d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x202d04: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x202d04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x202d08: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x202d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x202d0c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x202d0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x202d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202d14: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x202d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x202d18: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x202d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x202d1c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x202d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x202d20: 0x3e00008  jr          $ra
    ctx->pc = 0x202D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D20u;
        // 0x202d24: 0xac870050  sw          $a3, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202D28u;
}
