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

// Function: sub_001DF6D0
// Address: 0x1df6d0 - 0x1df700
void sub_001DF6D0_0x1df6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF6D0_0x1df6d0");
#endif

    ctx->pc = 0x1df6d0u;

    // 0x1df6d0: 0x8c821b80  lw          $v0, 0x1B80($a0)
    ctx->pc = 0x1df6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7040)));
    // 0x1df6d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF6D4u;
    {
        const bool branch_taken_0x1df6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6D4u;
        // 0x1df6d8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6d4) {
            ctx->pc = 0x1DF6F4u;
            goto label_1df6f4;
        }
    }
    ctx->pc = 0x1DF6DCu;
    // 0x1df6dc: 0x90833b9c  lbu         $v1, 0x3B9C($a0)
    ctx->pc = 0x1df6dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15260)));
    // 0x1df6e0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1df6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1df6e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1df6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1df6e8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1df6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1df6ec: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1df6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1df6f0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1df6f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1df6f4:
    // 0x1df6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6F4u;
        // 0x1df6f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF6FCu;
    // 0x1df6fc: 0x0  nop
    ctx->pc = 0x1df6fcu;
    // NOP
    ctx->pc = 0x1df700u;
}
