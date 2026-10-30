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

// Function: sub_004B0AD0
// Address: 0x4b0ad0 - 0x4b0af8
void sub_004B0AD0_0x4b0ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0AD0_0x4b0ad0");
#endif

    switch (ctx->pc) {
        case 0x4b0ad0u: goto label_4b0ad0;
        case 0x4b0ad4u: goto label_4b0ad4;
        case 0x4b0ad8u: goto label_4b0ad8;
        case 0x4b0adcu: goto label_4b0adc;
        case 0x4b0ae0u: goto label_4b0ae0;
        case 0x4b0ae4u: goto label_4b0ae4;
        case 0x4b0ae8u: goto label_4b0ae8;
        case 0x4b0aecu: goto label_4b0aec;
        case 0x4b0af0u: goto label_4b0af0;
        case 0x4b0af4u: goto label_4b0af4;
        default: break;
    }

    ctx->pc = 0x4b0ad0u;

label_4b0ad0:
    // 0x4b0ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b0ad4:
    // 0x4b0ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b0ad8:
    // 0x4b0ad8: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x4b0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4b0adc:
    // 0x4b0adc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4b0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4b0ae0:
    // 0x4b0ae0: 0x40f809  jalr        $v0
label_4b0ae4:
    if (ctx->pc == 0x4B0AE4u) {
        ctx->pc = 0x4B0AE8u;
        goto label_4b0ae8;
    }
    ctx->pc = 0x4B0AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B0AE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0AE0u, 0x4B0AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B0AE8u;
label_4b0ae8:
    // 0x4b0ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b0aec:
    // 0x4b0aec: 0x3e00008  jr          $ra
label_4b0af0:
    if (ctx->pc == 0x4B0AF0u) {
        ctx->pc = 0x4B0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0AECu;
        // 0x4b0af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B0AF4u;
        goto label_4b0af4;
    }
    ctx->pc = 0x4B0AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0AECu;
        // 0x4b0af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0AF4u;
label_4b0af4:
    // 0x4b0af4: 0x0  nop
    ctx->pc = 0x4b0af4u;
    // NOP
    ctx->pc = 0x4b0af8u;
}
