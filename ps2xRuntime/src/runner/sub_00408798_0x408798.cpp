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

// Function: sub_00408798
// Address: 0x408798 - 0x4087c0
void sub_00408798_0x408798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408798_0x408798");
#endif

    switch (ctx->pc) {
        case 0x408798u: goto label_408798;
        case 0x40879cu: goto label_40879c;
        case 0x4087a0u: goto label_4087a0;
        case 0x4087a4u: goto label_4087a4;
        case 0x4087a8u: goto label_4087a8;
        case 0x4087acu: goto label_4087ac;
        case 0x4087b0u: goto label_4087b0;
        case 0x4087b4u: goto label_4087b4;
        case 0x4087b8u: goto label_4087b8;
        case 0x4087bcu: goto label_4087bc;
        default: break;
    }

    ctx->pc = 0x408798u;

label_408798:
    // 0x408798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x408798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_40879c:
    // 0x40879c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4087a0:
    // 0x4087a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4087a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4087a4:
    // 0x4087a4: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x4087a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_4087a8:
    // 0x4087a8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x4087a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_4087ac:
    // 0x4087ac: 0x40f809  jalr        $v0
label_4087b0:
    if (ctx->pc == 0x4087B0u) {
        ctx->pc = 0x4087B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4087ACu;
        // 0x4087b0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4087B4u;
        goto label_4087b4;
    }
    ctx->pc = 0x4087ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4087B4u);
        ctx->pc = 0x4087B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4087ACu;
        // 0x4087b0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4087ACu, 0x4087B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4087B4u;
label_4087b4:
    // 0x4087b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4087b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4087b8:
    // 0x4087b8: 0x3e00008  jr          $ra
label_4087bc:
    if (ctx->pc == 0x4087BCu) {
        ctx->pc = 0x4087BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4087B8u;
        // 0x4087bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4087C0u;
        goto label_fallthrough_0x4087b8;
    }
    ctx->pc = 0x4087B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4087BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4087B8u;
        // 0x4087bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4087B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4087b8:
    ctx->pc = 0x4087C0u;
}
