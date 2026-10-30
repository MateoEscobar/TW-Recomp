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

// Function: sub_00407730
// Address: 0x407730 - 0x407758
void sub_00407730_0x407730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407730_0x407730");
#endif

    switch (ctx->pc) {
        case 0x407730u: goto label_407730;
        case 0x407734u: goto label_407734;
        case 0x407738u: goto label_407738;
        case 0x40773cu: goto label_40773c;
        case 0x407740u: goto label_407740;
        case 0x407744u: goto label_407744;
        case 0x407748u: goto label_407748;
        case 0x40774cu: goto label_40774c;
        case 0x407750u: goto label_407750;
        case 0x407754u: goto label_407754;
        default: break;
    }

    ctx->pc = 0x407730u;

label_407730:
    // 0x407730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x407730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_407734:
    // 0x407734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x407734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_407738:
    // 0x407738: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x407738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40773c:
    // 0x40773c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x40773cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_407740:
    // 0x407740: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x407740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_407744:
    // 0x407744: 0x40f809  jalr        $v0
label_407748:
    if (ctx->pc == 0x407748u) {
        ctx->pc = 0x407748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407744u;
        // 0x407748: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40774Cu;
        goto label_40774c;
    }
    ctx->pc = 0x407744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40774Cu);
        ctx->pc = 0x407748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407744u;
        // 0x407748: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407744u, 0x40774Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40774Cu;
label_40774c:
    // 0x40774c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40774cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_407750:
    // 0x407750: 0x3e00008  jr          $ra
label_407754:
    if (ctx->pc == 0x407754u) {
        ctx->pc = 0x407754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407750u;
        // 0x407754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407758u;
        goto label_fallthrough_0x407750;
    }
    ctx->pc = 0x407750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407750u;
        // 0x407754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x407750:
    ctx->pc = 0x407758u;
}
