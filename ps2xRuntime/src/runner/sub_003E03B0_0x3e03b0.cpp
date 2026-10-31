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

// Function: sub_003E03B0
// Address: 0x3e03b0 - 0x3e03d8
void sub_003E03B0_0x3e03b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E03B0_0x3e03b0");
#endif

    switch (ctx->pc) {
        case 0x3e03b0u: goto label_3e03b0;
        case 0x3e03b4u: goto label_3e03b4;
        case 0x3e03b8u: goto label_3e03b8;
        case 0x3e03bcu: goto label_3e03bc;
        case 0x3e03c0u: goto label_3e03c0;
        case 0x3e03c4u: goto label_3e03c4;
        case 0x3e03c8u: goto label_3e03c8;
        case 0x3e03ccu: goto label_3e03cc;
        case 0x3e03d0u: goto label_3e03d0;
        case 0x3e03d4u: goto label_3e03d4;
        default: break;
    }

    ctx->pc = 0x3e03b0u;

label_3e03b0:
    // 0x3e03b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e03b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e03b4:
    // 0x3e03b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e03b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e03b8:
    // 0x3e03b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e03b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e03bc:
    // 0x3e03bc: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3e03bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e03c0:
    // 0x3e03c0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e03c4:
    // 0x3e03c4: 0x40f809  jalr        $v0
label_3e03c8:
    if (ctx->pc == 0x3E03C8u) {
        ctx->pc = 0x3E03C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03C4u;
        // 0x3e03c8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E03CCu;
        goto label_3e03cc;
    }
    ctx->pc = 0x3E03C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E03CCu);
        ctx->pc = 0x3E03C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03C4u;
        // 0x3e03c8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E03C4u, 0x3E03CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E03CCu;
label_3e03cc:
    // 0x3e03cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e03ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e03d0:
    // 0x3e03d0: 0x3e00008  jr          $ra
label_3e03d4:
    if (ctx->pc == 0x3E03D4u) {
        ctx->pc = 0x3E03D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03D0u;
        // 0x3e03d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E03D8u;
        goto label_fallthrough_0x3e03d0;
    }
    ctx->pc = 0x3E03D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E03D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03D0u;
        // 0x3e03d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E03D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e03d0:
    ctx->pc = 0x3E03D8u;
}
