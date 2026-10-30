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

// Function: sub_004F1E98
// Address: 0x4f1e98 - 0x4f1ee8
void sub_004F1E98_0x4f1e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1E98_0x4f1e98");
#endif

    switch (ctx->pc) {
        case 0x4f1ebcu: goto label_4f1ebc;
        default: break;
    }

    ctx->pc = 0x4f1e98u;

    // 0x4f1e98: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4f1e9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f1e9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f1ea0: 0x24424b98  addiu       $v0, $v0, 0x4B98
    ctx->pc = 0x4f1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19352));
    // 0x4f1ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f1ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f1ea8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4f1ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4f1eac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F1EACu;
    {
        const bool branch_taken_0x4f1eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1EACu;
        // 0x4f1eb0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1eac) {
            ctx->pc = 0x4F1EBCu;
            goto label_4f1ebc;
        }
    }
    ctx->pc = 0x4F1EB4u;
    // 0x4f1eb4: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4F1EB4u;
    SET_GPR_U32(ctx, 31, 0x4F1EBCu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F1EB4u, 0x4F1EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1EBCu;
label_4f1ebc:
    // 0x4f1ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f1ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1EC0u;
        // 0x4f1ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F1EC8u;
    // 0x4f1ec8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4f1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4f1ecc: 0x0  nop
    ctx->pc = 0x4f1eccu;
    // NOP
    // 0x4f1ed0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f1ed4: 0x0  nop
    ctx->pc = 0x4f1ed4u;
    // NOP
    // 0x4f1ed8: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x4f1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x4f1edc: 0x0  nop
    ctx->pc = 0x4f1edcu;
    // NOP
    // 0x4f1ee0: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x4f1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x4f1ee4: 0x0  nop
    ctx->pc = 0x4f1ee4u;
    // NOP
    ctx->pc = 0x4f1ee8u;
}
