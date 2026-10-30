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

// Function: sub_00489128
// Address: 0x489128 - 0x489170
void sub_00489128_0x489128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489128_0x489128");
#endif

    switch (ctx->pc) {
        case 0x489154u: goto label_489154;
        case 0x489164u: goto label_489164;
        default: break;
    }

    ctx->pc = 0x489128u;

    // 0x489128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x489128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48912c: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x48912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
    // 0x489130: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x489130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x489134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x489134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x489138: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x489138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x48913c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x489140: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x489140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x489144: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x489144u;
    {
        const bool branch_taken_0x489144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x489144) {
            ctx->pc = 0x48915Cu;
            goto label_48915c;
        }
    }
    ctx->pc = 0x48914Cu;
    // 0x48914c: 0xc121ef4  jal         func_487BD0
    ctx->pc = 0x48914Cu;
    SET_GPR_U32(ctx, 31, 0x489154u);
    ctx->pc = 0x487BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487BD0u, 0x48914Cu, 0x489154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489154u;
label_489154:
    // 0x489154: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x489154u;
    {
        const bool branch_taken_0x489154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x489158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489154u;
        // 0x489158: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x489154) {
            ctx->pc = 0x489168u;
            goto label_489168;
        }
    }
    ctx->pc = 0x48915Cu;
label_48915c:
    // 0x48915c: 0xc121e56  jal         func_487958
    ctx->pc = 0x48915Cu;
    SET_GPR_U32(ctx, 31, 0x489164u);
    ctx->pc = 0x487958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487958u, 0x48915Cu, 0x489164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489164u;
label_489164:
    // 0x489164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x489164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_489168:
    // 0x489168: 0x3e00008  jr          $ra
    ctx->pc = 0x489168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x489168u;
        // 0x48916c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489170u;
}
