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

// Function: sub_004EF910
// Address: 0x4ef910 - 0x4ef940
void sub_004EF910_0x4ef910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF910_0x4ef910");
#endif

    switch (ctx->pc) {
        case 0x4ef910u: goto label_4ef910;
        case 0x4ef914u: goto label_4ef914;
        case 0x4ef918u: goto label_4ef918;
        case 0x4ef91cu: goto label_4ef91c;
        case 0x4ef920u: goto label_4ef920;
        case 0x4ef924u: goto label_4ef924;
        case 0x4ef928u: goto label_4ef928;
        case 0x4ef92cu: goto label_4ef92c;
        case 0x4ef930u: goto label_4ef930;
        case 0x4ef934u: goto label_4ef934;
        case 0x4ef938u: goto label_4ef938;
        case 0x4ef93cu: goto label_4ef93c;
        default: break;
    }

    ctx->pc = 0x4ef910u;

label_4ef910:
    // 0x4ef910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef914:
    // 0x4ef914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef918:
    // 0x4ef918: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef91c:
    // 0x4ef91c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef91cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef920:
    // 0x4ef920: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef924:
    // 0x4ef924: 0x40f809  jalr        $v0
label_4ef928:
    if (ctx->pc == 0x4EF928u) {
        ctx->pc = 0x4EF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF924u;
        // 0x4ef928: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF92Cu;
        goto label_4ef92c;
    }
    ctx->pc = 0x4EF924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF92Cu);
        ctx->pc = 0x4EF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF924u;
        // 0x4ef928: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF924u, 0x4EF92Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF92Cu;
label_4ef92c:
    // 0x4ef92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef930:
    // 0x4ef930: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef934:
    // 0x4ef934: 0x3e00008  jr          $ra
label_4ef938:
    if (ctx->pc == 0x4EF938u) {
        ctx->pc = 0x4EF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF934u;
        // 0x4ef938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF93Cu;
        goto label_4ef93c;
    }
    ctx->pc = 0x4EF934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF934u;
        // 0x4ef938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF93Cu;
label_4ef93c:
    // 0x4ef93c: 0x0  nop
    ctx->pc = 0x4ef93cu;
    // NOP
    ctx->pc = 0x4ef940u;
}
