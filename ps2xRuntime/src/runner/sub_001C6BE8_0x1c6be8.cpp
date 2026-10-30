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

// Function: sub_001C6BE8
// Address: 0x1c6be8 - 0x1c6c10
void sub_001C6BE8_0x1c6be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6BE8_0x1c6be8");
#endif

    switch (ctx->pc) {
        case 0x1c6be8u: goto label_1c6be8;
        case 0x1c6becu: goto label_1c6bec;
        case 0x1c6bf0u: goto label_1c6bf0;
        case 0x1c6bf4u: goto label_1c6bf4;
        case 0x1c6bf8u: goto label_1c6bf8;
        case 0x1c6bfcu: goto label_1c6bfc;
        case 0x1c6c00u: goto label_1c6c00;
        case 0x1c6c04u: goto label_1c6c04;
        case 0x1c6c08u: goto label_1c6c08;
        case 0x1c6c0cu: goto label_1c6c0c;
        default: break;
    }

    ctx->pc = 0x1c6be8u;

label_1c6be8:
    // 0x1c6be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c6bec:
    // 0x1c6bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c6bf0:
    // 0x1c6bf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c6bf4:
    // 0x1c6bf4: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1c6bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1c6bf8:
    // 0x1c6bf8: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1c6bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1c6bfc:
    // 0x1c6bfc: 0xa0f809  jalr        $a1
label_1c6c00:
    if (ctx->pc == 0x1C6C00u) {
        ctx->pc = 0x1C6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BFCu;
        // 0x1c6c00: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6C04u;
        goto label_1c6c04;
    }
    ctx->pc = 0x1C6BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1C6C04u);
        ctx->pc = 0x1C6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BFCu;
        // 0x1c6c00: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BFCu, 0x1C6C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C6C04u;
label_1c6c04:
    // 0x1c6c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c6c08:
    // 0x1c6c08: 0x3e00008  jr          $ra
label_1c6c0c:
    if (ctx->pc == 0x1C6C0Cu) {
        ctx->pc = 0x1C6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C08u;
        // 0x1c6c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6C10u;
        goto label_fallthrough_0x1c6c08;
    }
    ctx->pc = 0x1C6C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C08u;
        // 0x1c6c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c6c08:
    ctx->pc = 0x1C6C10u;
}
