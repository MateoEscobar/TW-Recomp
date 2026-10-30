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

// Function: sub_0014BBB0
// Address: 0x14bbb0 - 0x14bbd8
void sub_0014BBB0_0x14bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BBB0_0x14bbb0");
#endif

    ctx->pc = 0x14bbb0u;

    // 0x14bbb0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x14bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x14bbb4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x14bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14bbb8: 0xac460888  sw          $a2, 0x888($v0)
    ctx->pc = 0x14bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2184), GPR_U32(ctx, 6));
    // 0x14bbbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14bbbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbc0: 0xac67088c  sw          $a3, 0x88C($v1)
    ctx->pc = 0x14bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2188), GPR_U32(ctx, 7));
    // 0x14bbc4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14bbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14bbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbcc: 0xacc80890  sw          $t0, 0x890($a2)
    ctx->pc = 0x14bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2192), GPR_U32(ctx, 8));
    // 0x14bbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x14BBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBD0u;
        // 0x14bbd4: 0xac890894  sw          $t1, 0x894($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2196), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BBD8u;
}
