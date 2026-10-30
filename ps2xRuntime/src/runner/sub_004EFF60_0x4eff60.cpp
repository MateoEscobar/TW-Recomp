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

// Function: sub_004EFF60
// Address: 0x4eff60 - 0x4eff90
void sub_004EFF60_0x4eff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFF60_0x4eff60");
#endif

    switch (ctx->pc) {
        case 0x4eff60u: goto label_4eff60;
        case 0x4eff64u: goto label_4eff64;
        case 0x4eff68u: goto label_4eff68;
        case 0x4eff6cu: goto label_4eff6c;
        case 0x4eff70u: goto label_4eff70;
        case 0x4eff74u: goto label_4eff74;
        case 0x4eff78u: goto label_4eff78;
        case 0x4eff7cu: goto label_4eff7c;
        case 0x4eff80u: goto label_4eff80;
        case 0x4eff84u: goto label_4eff84;
        case 0x4eff88u: goto label_4eff88;
        case 0x4eff8cu: goto label_4eff8c;
        default: break;
    }

    ctx->pc = 0x4eff60u;

label_4eff60:
    // 0x4eff60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4eff64:
    // 0x4eff64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eff68:
    // 0x4eff68: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4eff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4eff6c:
    // 0x4eff6c: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4eff6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4eff70:
    // 0x4eff70: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4eff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4eff74:
    // 0x4eff74: 0x40f809  jalr        $v0
label_4eff78:
    if (ctx->pc == 0x4EFF78u) {
        ctx->pc = 0x4EFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFF74u;
        // 0x4eff78: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFF7Cu;
        goto label_4eff7c;
    }
    ctx->pc = 0x4EFF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EFF7Cu);
        ctx->pc = 0x4EFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFF74u;
        // 0x4eff78: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFF74u, 0x4EFF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EFF7Cu;
label_4eff7c:
    // 0x4eff7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eff7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eff80:
    // 0x4eff80: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4eff80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4eff84:
    // 0x4eff84: 0x3e00008  jr          $ra
label_4eff88:
    if (ctx->pc == 0x4EFF88u) {
        ctx->pc = 0x4EFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFF84u;
        // 0x4eff88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFF8Cu;
        goto label_4eff8c;
    }
    ctx->pc = 0x4EFF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFF84u;
        // 0x4eff88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFF8Cu;
label_4eff8c:
    // 0x4eff8c: 0x0  nop
    ctx->pc = 0x4eff8cu;
    // NOP
    ctx->pc = 0x4eff90u;
}
