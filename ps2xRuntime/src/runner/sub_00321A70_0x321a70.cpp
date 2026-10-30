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

// Function: sub_00321A70
// Address: 0x321a70 - 0x321a98
void sub_00321A70_0x321a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321A70_0x321a70");
#endif

    switch (ctx->pc) {
        case 0x321a70u: goto label_321a70;
        case 0x321a74u: goto label_321a74;
        case 0x321a78u: goto label_321a78;
        case 0x321a7cu: goto label_321a7c;
        case 0x321a80u: goto label_321a80;
        case 0x321a84u: goto label_321a84;
        case 0x321a88u: goto label_321a88;
        case 0x321a8cu: goto label_321a8c;
        case 0x321a90u: goto label_321a90;
        case 0x321a94u: goto label_321a94;
        default: break;
    }

    ctx->pc = 0x321a70u;

label_321a70:
    // 0x321a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_321a74:
    // 0x321a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_321a78:
    // 0x321a78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x321a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_321a7c:
    // 0x321a7c: 0x84430010  lh          $v1, 0x10($v0)
    ctx->pc = 0x321a7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_321a80:
    // 0x321a80: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x321a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_321a84:
    // 0x321a84: 0xa0f809  jalr        $a1
label_321a88:
    if (ctx->pc == 0x321A88u) {
        ctx->pc = 0x321A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A84u;
        // 0x321a88: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A8Cu;
        goto label_321a8c;
    }
    ctx->pc = 0x321A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x321A8Cu);
        ctx->pc = 0x321A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A84u;
        // 0x321a88: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321A84u, 0x321A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321A8Cu;
label_321a8c:
    // 0x321a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_321a90:
    // 0x321a90: 0x3e00008  jr          $ra
label_321a94:
    if (ctx->pc == 0x321A94u) {
        ctx->pc = 0x321A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A90u;
        // 0x321a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A98u;
        goto label_fallthrough_0x321a90;
    }
    ctx->pc = 0x321A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A90u;
        // 0x321a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x321a90:
    ctx->pc = 0x321A98u;
}
