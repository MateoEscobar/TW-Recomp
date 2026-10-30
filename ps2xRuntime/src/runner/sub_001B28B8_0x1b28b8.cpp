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

// Function: sub_001B28B8
// Address: 0x1b28b8 - 0x1b28e8
void sub_001B28B8_0x1b28b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B28B8_0x1b28b8");
#endif

    switch (ctx->pc) {
        case 0x1b28dcu: goto label_1b28dc;
        default: break;
    }

    ctx->pc = 0x1b28b8u;

    // 0x1b28b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b28b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b28bc: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1b28bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b28c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B28C0u;
    {
        const bool branch_taken_0x1b28c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28C0u;
        // 0x1b28c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28c0) {
            ctx->pc = 0x1B28DCu;
            goto label_1b28dc;
        }
    }
    ctx->pc = 0x1B28C8u;
    // 0x1b28c8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b28cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b28d0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1b28d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b28d4: 0xc06ff30  jal         func_1BFCC0
    ctx->pc = 0x1B28D4u;
    SET_GPR_U32(ctx, 31, 0x1B28DCu);
    ctx->pc = 0x1B28D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B28D4u;
    // 0x1b28d8: 0x24843480  addiu       $a0, $a0, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFCC0u, 0x1B28D4u, 0x1B28DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B28DCu;
label_1b28dc:
    // 0x1b28dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b28dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b28e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B28E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28E0u;
        // 0x1b28e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B28E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B28E8u;
}
