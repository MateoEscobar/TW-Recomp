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

// Function: sub_00206408
// Address: 0x206408 - 0x206430
void sub_00206408_0x206408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206408_0x206408");
#endif

    switch (ctx->pc) {
        case 0x206408u: goto label_206408;
        case 0x20640cu: goto label_20640c;
        case 0x206410u: goto label_206410;
        case 0x206414u: goto label_206414;
        case 0x206418u: goto label_206418;
        case 0x20641cu: goto label_20641c;
        case 0x206420u: goto label_206420;
        case 0x206424u: goto label_206424;
        case 0x206428u: goto label_206428;
        case 0x20642cu: goto label_20642c;
        default: break;
    }

    ctx->pc = 0x206408u;

label_206408:
    // 0x206408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20640c:
    // 0x20640c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20640cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206410:
    // 0x206410: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x206410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_206414:
    // 0x206414: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x206414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_206418:
    // 0x206418: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x206418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_20641c:
    // 0x20641c: 0xa0f809  jalr        $a1
label_206420:
    if (ctx->pc == 0x206420u) {
        ctx->pc = 0x206420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20641Cu;
        // 0x206420: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206424u;
        goto label_206424;
    }
    ctx->pc = 0x20641Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x206424u);
        ctx->pc = 0x206420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20641Cu;
        // 0x206420: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20641Cu, 0x206424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206424u;
label_206424:
    // 0x206424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206428:
    // 0x206428: 0x3e00008  jr          $ra
label_20642c:
    if (ctx->pc == 0x20642Cu) {
        ctx->pc = 0x20642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206428u;
        // 0x20642c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206430u;
        goto label_fallthrough_0x206428;
    }
    ctx->pc = 0x206428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206428u;
        // 0x20642c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206428:
    ctx->pc = 0x206430u;
}
