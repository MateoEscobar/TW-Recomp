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

// Function: sub_00473BD0
// Address: 0x473bd0 - 0x473c00
void sub_00473BD0_0x473bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473BD0_0x473bd0");
#endif

    switch (ctx->pc) {
        case 0x473bd0u: goto label_473bd0;
        case 0x473bd4u: goto label_473bd4;
        case 0x473bd8u: goto label_473bd8;
        case 0x473bdcu: goto label_473bdc;
        case 0x473be0u: goto label_473be0;
        case 0x473be4u: goto label_473be4;
        case 0x473be8u: goto label_473be8;
        case 0x473becu: goto label_473bec;
        case 0x473bf0u: goto label_473bf0;
        case 0x473bf4u: goto label_473bf4;
        case 0x473bf8u: goto label_473bf8;
        case 0x473bfcu: goto label_473bfc;
        default: break;
    }

    ctx->pc = 0x473bd0u;

label_473bd0:
    // 0x473bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x473bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_473bd4:
    // 0x473bd4: 0x8f838518  lw          $v1, -0x7AE8($gp)
    ctx->pc = 0x473bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935832)));
label_473bd8:
    // 0x473bd8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x473bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_473bdc:
    // 0x473bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_473be0:
    // 0x473be0: 0xac40ad1c  sw          $zero, -0x52E4($v0)
    ctx->pc = 0x473be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294946076), GPR_U32(ctx, 0));
label_473be4:
    // 0x473be4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x473be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_473be8:
    // 0x473be8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x473be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_473bec:
    // 0x473bec: 0x40f809  jalr        $v0
label_473bf0:
    if (ctx->pc == 0x473BF0u) {
        ctx->pc = 0x473BF4u;
        goto label_473bf4;
    }
    ctx->pc = 0x473BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473BF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473BECu, 0x473BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473BF4u;
label_473bf4:
    // 0x473bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_473bf8:
    // 0x473bf8: 0x3e00008  jr          $ra
label_473bfc:
    if (ctx->pc == 0x473BFCu) {
        ctx->pc = 0x473BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473BF8u;
        // 0x473bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473C00u;
        goto label_fallthrough_0x473bf8;
    }
    ctx->pc = 0x473BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473BF8u;
        // 0x473bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x473bf8:
    ctx->pc = 0x473C00u;
}
