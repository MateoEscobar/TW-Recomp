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

// Function: sub_0020B870
// Address: 0x20b870 - 0x20b898
void sub_0020B870_0x20b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B870_0x20b870");
#endif

    switch (ctx->pc) {
        case 0x20b870u: goto label_20b870;
        case 0x20b874u: goto label_20b874;
        case 0x20b878u: goto label_20b878;
        case 0x20b87cu: goto label_20b87c;
        case 0x20b880u: goto label_20b880;
        case 0x20b884u: goto label_20b884;
        case 0x20b888u: goto label_20b888;
        case 0x20b88cu: goto label_20b88c;
        case 0x20b890u: goto label_20b890;
        case 0x20b894u: goto label_20b894;
        default: break;
    }

    ctx->pc = 0x20b870u;

label_20b870:
    // 0x20b870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20b874:
    // 0x20b874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b878:
    // 0x20b878: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20b87c:
    // 0x20b87c: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x20b87cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_20b880:
    // 0x20b880: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x20b880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20b884:
    // 0x20b884: 0xa0f809  jalr        $a1
label_20b888:
    if (ctx->pc == 0x20B888u) {
        ctx->pc = 0x20B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B884u;
        // 0x20b888: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B88Cu;
        goto label_20b88c;
    }
    ctx->pc = 0x20B884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20B88Cu);
        ctx->pc = 0x20B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B884u;
        // 0x20b888: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B884u, 0x20B88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B88Cu;
label_20b88c:
    // 0x20b88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b890:
    // 0x20b890: 0x3e00008  jr          $ra
label_20b894:
    if (ctx->pc == 0x20B894u) {
        ctx->pc = 0x20B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B890u;
        // 0x20b894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B898u;
        goto label_fallthrough_0x20b890;
    }
    ctx->pc = 0x20B890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B890u;
        // 0x20b894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b890:
    ctx->pc = 0x20B898u;
}
