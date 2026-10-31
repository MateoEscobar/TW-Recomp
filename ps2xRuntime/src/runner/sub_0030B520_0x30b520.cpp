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

// Function: sub_0030B520
// Address: 0x30b520 - 0x30b550
void sub_0030B520_0x30b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B520_0x30b520");
#endif

    switch (ctx->pc) {
        case 0x30b520u: goto label_30b520;
        case 0x30b524u: goto label_30b524;
        case 0x30b528u: goto label_30b528;
        case 0x30b52cu: goto label_30b52c;
        case 0x30b530u: goto label_30b530;
        case 0x30b534u: goto label_30b534;
        case 0x30b538u: goto label_30b538;
        case 0x30b53cu: goto label_30b53c;
        case 0x30b540u: goto label_30b540;
        case 0x30b544u: goto label_30b544;
        case 0x30b548u: goto label_30b548;
        case 0x30b54cu: goto label_30b54c;
        default: break;
    }

    ctx->pc = 0x30b520u;

label_30b520:
    // 0x30b520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30b520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30b524:
    // 0x30b524: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x30b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_30b528:
    // 0x30b528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30b52c:
    // 0x30b52c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x30b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_30b530:
    // 0x30b530: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x30b530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30b534:
    // 0x30b534: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x30b534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30b538:
    // 0x30b538: 0xc0f809  jalr        $a2
label_30b53c:
    if (ctx->pc == 0x30B53Cu) {
        ctx->pc = 0x30B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B538u;
        // 0x30b53c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B540u;
        goto label_30b540;
    }
    ctx->pc = 0x30B538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x30B540u);
        ctx->pc = 0x30B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B538u;
        // 0x30b53c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B538u, 0x30B540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30B540u;
label_30b540:
    // 0x30b540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30b544:
    // 0x30b544: 0x3e00008  jr          $ra
label_30b548:
    if (ctx->pc == 0x30B548u) {
        ctx->pc = 0x30B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B544u;
        // 0x30b548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B54Cu;
        goto label_30b54c;
    }
    ctx->pc = 0x30B544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B544u;
        // 0x30b548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B54Cu;
label_30b54c:
    // 0x30b54c: 0x0  nop
    ctx->pc = 0x30b54cu;
    // NOP
    ctx->pc = 0x30b550u;
}
