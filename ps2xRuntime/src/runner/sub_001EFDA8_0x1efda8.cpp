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

// Function: sub_001EFDA8
// Address: 0x1efda8 - 0x1efdd0
void sub_001EFDA8_0x1efda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFDA8_0x1efda8");
#endif

    switch (ctx->pc) {
        case 0x1efda8u: goto label_1efda8;
        case 0x1efdacu: goto label_1efdac;
        case 0x1efdb0u: goto label_1efdb0;
        case 0x1efdb4u: goto label_1efdb4;
        case 0x1efdb8u: goto label_1efdb8;
        case 0x1efdbcu: goto label_1efdbc;
        case 0x1efdc0u: goto label_1efdc0;
        case 0x1efdc4u: goto label_1efdc4;
        case 0x1efdc8u: goto label_1efdc8;
        case 0x1efdccu: goto label_1efdcc;
        default: break;
    }

    ctx->pc = 0x1efda8u;

label_1efda8:
    // 0x1efda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1efda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1efdac:
    // 0x1efdac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1efdb0:
    // 0x1efdb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1efdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1efdb4:
    // 0x1efdb4: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1efdb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1efdb8:
    // 0x1efdb8: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1efdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1efdbc:
    // 0x1efdbc: 0xa0f809  jalr        $a1
label_1efdc0:
    if (ctx->pc == 0x1EFDC0u) {
        ctx->pc = 0x1EFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDBCu;
        // 0x1efdc0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFDC4u;
        goto label_1efdc4;
    }
    ctx->pc = 0x1EFDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1EFDC4u);
        ctx->pc = 0x1EFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDBCu;
        // 0x1efdc0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFDBCu, 0x1EFDC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EFDC4u;
label_1efdc4:
    // 0x1efdc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1efdc8:
    // 0x1efdc8: 0x3e00008  jr          $ra
label_1efdcc:
    if (ctx->pc == 0x1EFDCCu) {
        ctx->pc = 0x1EFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDC8u;
        // 0x1efdcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EFDD0u;
        goto label_fallthrough_0x1efdc8;
    }
    ctx->pc = 0x1EFDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDC8u;
        // 0x1efdcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1efdc8:
    ctx->pc = 0x1EFDD0u;
}
