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

// Function: sub_002548C8
// Address: 0x2548c8 - 0x2548f0
void sub_002548C8_0x2548c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002548C8_0x2548c8");
#endif

    ctx->pc = 0x2548c8u;

    // 0x2548c8: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x2548c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2548cc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2548ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548d0: 0x8c450160  lw          $a1, 0x160($v0)
    ctx->pc = 0x2548d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2548d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2548D4u;
    {
        const bool branch_taken_0x2548d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548D4u;
        // 0x2548d8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548d4) {
            ctx->pc = 0x2548E4u;
            goto label_2548e4;
        }
    }
    ctx->pc = 0x2548DCu;
    // 0x2548dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2548dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2548e0: 0xa446000a  sh          $a2, 0xA($v0)
    ctx->pc = 0x2548e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 6));
label_2548e4:
    // 0x2548e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2548E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2548E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2548ECu;
    // 0x2548ec: 0x0  nop
    ctx->pc = 0x2548ecu;
    // NOP
    ctx->pc = 0x2548f0u;
}
