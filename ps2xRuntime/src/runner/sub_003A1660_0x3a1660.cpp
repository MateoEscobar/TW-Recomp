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

// Function: sub_003A1660
// Address: 0x3a1660 - 0x3a1688
void sub_003A1660_0x3a1660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1660_0x3a1660");
#endif

    switch (ctx->pc) {
        case 0x3a167cu: goto label_3a167c;
        default: break;
    }

    ctx->pc = 0x3a1660u;

    // 0x3a1660: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a1660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1664: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a1664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a1668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a1668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a166c: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x3a166cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3a1670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a1674: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3A1674u;
    SET_GPR_U32(ctx, 31, 0x3A167Cu);
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3A1674u, 0x3A167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A167Cu;
label_3a167c:
    // 0x3a167c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1680: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1680u;
        // 0x3a1684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1688u;
}
