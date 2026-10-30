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

// Function: sub_001D6A60
// Address: 0x1d6a60 - 0x1d6a90
void sub_001D6A60_0x1d6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6A60_0x1d6a60");
#endif

    switch (ctx->pc) {
        case 0x1d6a60u: goto label_1d6a60;
        case 0x1d6a64u: goto label_1d6a64;
        case 0x1d6a68u: goto label_1d6a68;
        case 0x1d6a6cu: goto label_1d6a6c;
        case 0x1d6a70u: goto label_1d6a70;
        case 0x1d6a74u: goto label_1d6a74;
        case 0x1d6a78u: goto label_1d6a78;
        case 0x1d6a7cu: goto label_1d6a7c;
        case 0x1d6a80u: goto label_1d6a80;
        case 0x1d6a84u: goto label_1d6a84;
        case 0x1d6a88u: goto label_1d6a88;
        case 0x1d6a8cu: goto label_1d6a8c;
        default: break;
    }

    ctx->pc = 0x1d6a60u;

label_1d6a60:
    // 0x1d6a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d6a64:
    // 0x1d6a64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d6a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d6a68:
    // 0x1d6a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6a6c:
    // 0x1d6a6c: 0x8c4304cc  lw          $v1, 0x4CC($v0)
    ctx->pc = 0x1d6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1228)));
label_1d6a70:
    // 0x1d6a70: 0x8c440240  lw          $a0, 0x240($v0)
    ctx->pc = 0x1d6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
label_1d6a74:
    // 0x1d6a74: 0x8c4604c4  lw          $a2, 0x4C4($v0)
    ctx->pc = 0x1d6a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1220)));
label_1d6a78:
    // 0x1d6a78: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d6a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d6a7c:
    // 0x1d6a7c: 0xc0f809  jalr        $a2
label_1d6a80:
    if (ctx->pc == 0x1D6A80u) {
        ctx->pc = 0x1D6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A7Cu;
        // 0x1d6a80: 0xac4304c0  sw          $v1, 0x4C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A84u;
        goto label_1d6a84;
    }
    ctx->pc = 0x1D6A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1D6A84u);
        ctx->pc = 0x1D6A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A7Cu;
        // 0x1d6a80: 0xac4304c0  sw          $v1, 0x4C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6A7Cu, 0x1D6A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6A84u;
label_1d6a84:
    // 0x1d6a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6a88:
    // 0x1d6a88: 0x3e00008  jr          $ra
label_1d6a8c:
    if (ctx->pc == 0x1D6A8Cu) {
        ctx->pc = 0x1D6A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A88u;
        // 0x1d6a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A90u;
        goto label_fallthrough_0x1d6a88;
    }
    ctx->pc = 0x1D6A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A88u;
        // 0x1d6a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d6a88:
    ctx->pc = 0x1D6A90u;
}
