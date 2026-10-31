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

// Function: sub_004827B8
// Address: 0x4827b8 - 0x4827d8
void sub_004827B8_0x4827b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004827B8_0x4827b8");
#endif

    switch (ctx->pc) {
        case 0x4827b8u: goto label_4827b8;
        case 0x4827bcu: goto label_4827bc;
        case 0x4827c0u: goto label_4827c0;
        case 0x4827c4u: goto label_4827c4;
        case 0x4827c8u: goto label_4827c8;
        case 0x4827ccu: goto label_4827cc;
        case 0x4827d0u: goto label_4827d0;
        case 0x4827d4u: goto label_4827d4;
        default: break;
    }

    ctx->pc = 0x4827b8u;

label_4827b8:
    // 0x4827b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4827b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4827bc:
    // 0x4827bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4827bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4827c0:
    // 0x4827c0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4827c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_4827c4:
    // 0x4827c4: 0x40f809  jalr        $v0
label_4827c8:
    if (ctx->pc == 0x4827C8u) {
        ctx->pc = 0x4827CCu;
        goto label_4827cc;
    }
    ctx->pc = 0x4827C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4827CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4827C4u, 0x4827CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4827CCu;
label_4827cc:
    // 0x4827cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4827ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4827d0:
    // 0x4827d0: 0x3e00008  jr          $ra
label_4827d4:
    if (ctx->pc == 0x4827D4u) {
        ctx->pc = 0x4827D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4827D0u;
        // 0x4827d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4827D8u;
        goto label_fallthrough_0x4827d0;
    }
    ctx->pc = 0x4827D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4827D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4827D0u;
        // 0x4827d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4827D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4827d0:
    ctx->pc = 0x4827D8u;
}
