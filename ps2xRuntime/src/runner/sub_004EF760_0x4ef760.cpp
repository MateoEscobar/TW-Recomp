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

// Function: sub_004EF760
// Address: 0x4ef760 - 0x4ef790
void sub_004EF760_0x4ef760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF760_0x4ef760");
#endif

    switch (ctx->pc) {
        case 0x4ef760u: goto label_4ef760;
        case 0x4ef764u: goto label_4ef764;
        case 0x4ef768u: goto label_4ef768;
        case 0x4ef76cu: goto label_4ef76c;
        case 0x4ef770u: goto label_4ef770;
        case 0x4ef774u: goto label_4ef774;
        case 0x4ef778u: goto label_4ef778;
        case 0x4ef77cu: goto label_4ef77c;
        case 0x4ef780u: goto label_4ef780;
        case 0x4ef784u: goto label_4ef784;
        case 0x4ef788u: goto label_4ef788;
        case 0x4ef78cu: goto label_4ef78c;
        default: break;
    }

    ctx->pc = 0x4ef760u;

label_4ef760:
    // 0x4ef760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef764:
    // 0x4ef764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef768:
    // 0x4ef768: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef76c:
    // 0x4ef76c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef76cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef770:
    // 0x4ef770: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef774:
    // 0x4ef774: 0x40f809  jalr        $v0
label_4ef778:
    if (ctx->pc == 0x4EF778u) {
        ctx->pc = 0x4EF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF774u;
        // 0x4ef778: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF77Cu;
        goto label_4ef77c;
    }
    ctx->pc = 0x4EF774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF77Cu);
        ctx->pc = 0x4EF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF774u;
        // 0x4ef778: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF774u, 0x4EF77Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF77Cu;
label_4ef77c:
    // 0x4ef77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef780:
    // 0x4ef780: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef784:
    // 0x4ef784: 0x3e00008  jr          $ra
label_4ef788:
    if (ctx->pc == 0x4EF788u) {
        ctx->pc = 0x4EF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF784u;
        // 0x4ef788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF78Cu;
        goto label_4ef78c;
    }
    ctx->pc = 0x4EF784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF784u;
        // 0x4ef788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF78Cu;
label_4ef78c:
    // 0x4ef78c: 0x0  nop
    ctx->pc = 0x4ef78cu;
    // NOP
    ctx->pc = 0x4ef790u;
}
