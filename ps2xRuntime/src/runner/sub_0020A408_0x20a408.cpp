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

// Function: sub_0020A408
// Address: 0x20a408 - 0x20a438
void sub_0020A408_0x20a408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A408_0x20a408");
#endif

    switch (ctx->pc) {
        case 0x20a408u: goto label_20a408;
        case 0x20a40cu: goto label_20a40c;
        case 0x20a410u: goto label_20a410;
        case 0x20a414u: goto label_20a414;
        case 0x20a418u: goto label_20a418;
        case 0x20a41cu: goto label_20a41c;
        case 0x20a420u: goto label_20a420;
        case 0x20a424u: goto label_20a424;
        case 0x20a428u: goto label_20a428;
        case 0x20a42cu: goto label_20a42c;
        case 0x20a430u: goto label_20a430;
        case 0x20a434u: goto label_20a434;
        default: break;
    }

    ctx->pc = 0x20a408u;

label_20a408:
    // 0x20a408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20a40c:
    // 0x20a40c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a410:
    // 0x20a410: 0xac850070  sw          $a1, 0x70($a0)
    ctx->pc = 0x20a410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
label_20a414:
    // 0x20a414: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20a418:
    // 0x20a418: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x20a418u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_20a41c:
    // 0x20a41c: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x20a41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_20a420:
    // 0x20a420: 0xa0f809  jalr        $a1
label_20a424:
    if (ctx->pc == 0x20A424u) {
        ctx->pc = 0x20A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A420u;
        // 0x20a424: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A428u;
        goto label_20a428;
    }
    ctx->pc = 0x20A420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20A428u);
        ctx->pc = 0x20A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A420u;
        // 0x20a424: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A420u, 0x20A428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A428u;
label_20a428:
    // 0x20a428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a42c:
    // 0x20a42c: 0x3e00008  jr          $ra
label_20a430:
    if (ctx->pc == 0x20A430u) {
        ctx->pc = 0x20A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A42Cu;
        // 0x20a430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A434u;
        goto label_20a434;
    }
    ctx->pc = 0x20A42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A42Cu;
        // 0x20a430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A434u;
label_20a434:
    // 0x20a434: 0x0  nop
    ctx->pc = 0x20a434u;
    // NOP
    ctx->pc = 0x20a438u;
}
