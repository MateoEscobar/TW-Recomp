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

// Function: sub_00461258
// Address: 0x461258 - 0x461278
void sub_00461258_0x461258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461258_0x461258");
#endif

    switch (ctx->pc) {
        case 0x461268u: goto label_461268;
        default: break;
    }

    ctx->pc = 0x461258u;

    // 0x461258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x461258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x46125c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46125cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x461260: 0xc11aba8  jal         func_46AEA0
    ctx->pc = 0x461260u;
    SET_GPR_U32(ctx, 31, 0x461268u);
    ctx->pc = 0x461264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461260u;
    // 0x461264: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AEA0u, 0x461260u, 0x461268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461268u;
label_461268:
    // 0x461268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x461268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46126c: 0x3e00008  jr          $ra
    ctx->pc = 0x46126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46126Cu;
        // 0x461270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46126Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x461274u;
    // 0x461274: 0x0  nop
    ctx->pc = 0x461274u;
    // NOP
    ctx->pc = 0x461278u;
}
