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

// Function: sub_004EF420
// Address: 0x4ef420 - 0x4ef450
void sub_004EF420_0x4ef420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF420_0x4ef420");
#endif

    switch (ctx->pc) {
        case 0x4ef420u: goto label_4ef420;
        case 0x4ef424u: goto label_4ef424;
        case 0x4ef428u: goto label_4ef428;
        case 0x4ef42cu: goto label_4ef42c;
        case 0x4ef430u: goto label_4ef430;
        case 0x4ef434u: goto label_4ef434;
        case 0x4ef438u: goto label_4ef438;
        case 0x4ef43cu: goto label_4ef43c;
        case 0x4ef440u: goto label_4ef440;
        case 0x4ef444u: goto label_4ef444;
        case 0x4ef448u: goto label_4ef448;
        case 0x4ef44cu: goto label_4ef44c;
        default: break;
    }

    ctx->pc = 0x4ef420u;

label_4ef420:
    // 0x4ef420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef424:
    // 0x4ef424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef428:
    // 0x4ef428: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef42c:
    // 0x4ef42c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef42cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef430:
    // 0x4ef430: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef434:
    // 0x4ef434: 0x40f809  jalr        $v0
label_4ef438:
    if (ctx->pc == 0x4EF438u) {
        ctx->pc = 0x4EF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF434u;
        // 0x4ef438: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF43Cu;
        goto label_4ef43c;
    }
    ctx->pc = 0x4EF434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF43Cu);
        ctx->pc = 0x4EF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF434u;
        // 0x4ef438: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF434u, 0x4EF43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF43Cu;
label_4ef43c:
    // 0x4ef43c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef440:
    // 0x4ef440: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef444:
    // 0x4ef444: 0x3e00008  jr          $ra
label_4ef448:
    if (ctx->pc == 0x4EF448u) {
        ctx->pc = 0x4EF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF444u;
        // 0x4ef448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF44Cu;
        goto label_4ef44c;
    }
    ctx->pc = 0x4EF444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF444u;
        // 0x4ef448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF44Cu;
label_4ef44c:
    // 0x4ef44c: 0x0  nop
    ctx->pc = 0x4ef44cu;
    // NOP
    ctx->pc = 0x4ef450u;
}
