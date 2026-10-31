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

// Function: sub_003BFB58
// Address: 0x3bfb58 - 0x3bfb80
void sub_003BFB58_0x3bfb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFB58_0x3bfb58");
#endif

    switch (ctx->pc) {
        case 0x3bfb58u: goto label_3bfb58;
        case 0x3bfb5cu: goto label_3bfb5c;
        case 0x3bfb60u: goto label_3bfb60;
        case 0x3bfb64u: goto label_3bfb64;
        case 0x3bfb68u: goto label_3bfb68;
        case 0x3bfb6cu: goto label_3bfb6c;
        case 0x3bfb70u: goto label_3bfb70;
        case 0x3bfb74u: goto label_3bfb74;
        case 0x3bfb78u: goto label_3bfb78;
        case 0x3bfb7cu: goto label_3bfb7c;
        default: break;
    }

    ctx->pc = 0x3bfb58u;

label_3bfb58:
    // 0x3bfb58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bfb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3bfb5c:
    // 0x3bfb5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bfb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bfb60:
    // 0x3bfb60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3bfb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bfb64:
    // 0x3bfb64: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3bfb64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3bfb68:
    // 0x3bfb68: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3bfb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3bfb6c:
    // 0x3bfb6c: 0x40f809  jalr        $v0
label_3bfb70:
    if (ctx->pc == 0x3BFB70u) {
        ctx->pc = 0x3BFB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB6Cu;
        // 0x3bfb70: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFB74u;
        goto label_3bfb74;
    }
    ctx->pc = 0x3BFB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BFB74u);
        ctx->pc = 0x3BFB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB6Cu;
        // 0x3bfb70: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFB6Cu, 0x3BFB74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BFB74u;
label_3bfb74:
    // 0x3bfb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bfb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bfb78:
    // 0x3bfb78: 0x3e00008  jr          $ra
label_3bfb7c:
    if (ctx->pc == 0x3BFB7Cu) {
        ctx->pc = 0x3BFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB78u;
        // 0x3bfb7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFB80u;
        goto label_fallthrough_0x3bfb78;
    }
    ctx->pc = 0x3BFB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB78u;
        // 0x3bfb7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bfb78:
    ctx->pc = 0x3BFB80u;
}
