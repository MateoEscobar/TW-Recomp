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

// Function: sub_004EF830
// Address: 0x4ef830 - 0x4ef860
void sub_004EF830_0x4ef830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF830_0x4ef830");
#endif

    switch (ctx->pc) {
        case 0x4ef830u: goto label_4ef830;
        case 0x4ef834u: goto label_4ef834;
        case 0x4ef838u: goto label_4ef838;
        case 0x4ef83cu: goto label_4ef83c;
        case 0x4ef840u: goto label_4ef840;
        case 0x4ef844u: goto label_4ef844;
        case 0x4ef848u: goto label_4ef848;
        case 0x4ef84cu: goto label_4ef84c;
        case 0x4ef850u: goto label_4ef850;
        case 0x4ef854u: goto label_4ef854;
        case 0x4ef858u: goto label_4ef858;
        case 0x4ef85cu: goto label_4ef85c;
        default: break;
    }

    ctx->pc = 0x4ef830u;

label_4ef830:
    // 0x4ef830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef834:
    // 0x4ef834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef838:
    // 0x4ef838: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef83c:
    // 0x4ef83c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef83cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef840:
    // 0x4ef840: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef844:
    // 0x4ef844: 0x40f809  jalr        $v0
label_4ef848:
    if (ctx->pc == 0x4EF848u) {
        ctx->pc = 0x4EF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF844u;
        // 0x4ef848: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF84Cu;
        goto label_4ef84c;
    }
    ctx->pc = 0x4EF844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF84Cu);
        ctx->pc = 0x4EF848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF844u;
        // 0x4ef848: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF844u, 0x4EF84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF84Cu;
label_4ef84c:
    // 0x4ef84c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef850:
    // 0x4ef850: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef854:
    // 0x4ef854: 0x3e00008  jr          $ra
label_4ef858:
    if (ctx->pc == 0x4EF858u) {
        ctx->pc = 0x4EF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF854u;
        // 0x4ef858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF85Cu;
        goto label_4ef85c;
    }
    ctx->pc = 0x4EF854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF854u;
        // 0x4ef858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF85Cu;
label_4ef85c:
    // 0x4ef85c: 0x0  nop
    ctx->pc = 0x4ef85cu;
    // NOP
    ctx->pc = 0x4ef860u;
}
