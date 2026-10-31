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

// Function: sub_0020AE68
// Address: 0x20ae68 - 0x20ae90
void sub_0020AE68_0x20ae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AE68_0x20ae68");
#endif

    switch (ctx->pc) {
        case 0x20ae68u: goto label_20ae68;
        case 0x20ae6cu: goto label_20ae6c;
        case 0x20ae70u: goto label_20ae70;
        case 0x20ae74u: goto label_20ae74;
        case 0x20ae78u: goto label_20ae78;
        case 0x20ae7cu: goto label_20ae7c;
        case 0x20ae80u: goto label_20ae80;
        case 0x20ae84u: goto label_20ae84;
        case 0x20ae88u: goto label_20ae88;
        case 0x20ae8cu: goto label_20ae8c;
        default: break;
    }

    ctx->pc = 0x20ae68u;

label_20ae68:
    // 0x20ae68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20ae6c:
    // 0x20ae6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20ae70:
    // 0x20ae70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20ae74:
    // 0x20ae74: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x20ae74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20ae78:
    // 0x20ae78: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x20ae78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20ae7c:
    // 0x20ae7c: 0xa0f809  jalr        $a1
label_20ae80:
    if (ctx->pc == 0x20AE80u) {
        ctx->pc = 0x20AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE7Cu;
        // 0x20ae80: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE84u;
        goto label_20ae84;
    }
    ctx->pc = 0x20AE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20AE84u);
        ctx->pc = 0x20AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE7Cu;
        // 0x20ae80: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE7Cu, 0x20AE84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AE84u;
label_20ae84:
    // 0x20ae84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ae84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ae88:
    // 0x20ae88: 0x3e00008  jr          $ra
label_20ae8c:
    if (ctx->pc == 0x20AE8Cu) {
        ctx->pc = 0x20AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE88u;
        // 0x20ae8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE90u;
        goto label_fallthrough_0x20ae88;
    }
    ctx->pc = 0x20AE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE88u;
        // 0x20ae8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20ae88:
    ctx->pc = 0x20AE90u;
}
