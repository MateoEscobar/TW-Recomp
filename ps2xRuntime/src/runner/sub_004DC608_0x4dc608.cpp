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

// Function: sub_004DC608
// Address: 0x4dc608 - 0x4dc638
void sub_004DC608_0x4dc608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC608_0x4dc608");
#endif

    switch (ctx->pc) {
        case 0x4dc608u: goto label_4dc608;
        case 0x4dc60cu: goto label_4dc60c;
        case 0x4dc610u: goto label_4dc610;
        case 0x4dc614u: goto label_4dc614;
        case 0x4dc618u: goto label_4dc618;
        case 0x4dc61cu: goto label_4dc61c;
        case 0x4dc620u: goto label_4dc620;
        case 0x4dc624u: goto label_4dc624;
        case 0x4dc628u: goto label_4dc628;
        case 0x4dc62cu: goto label_4dc62c;
        case 0x4dc630u: goto label_4dc630;
        case 0x4dc634u: goto label_4dc634;
        default: break;
    }

    ctx->pc = 0x4dc608u;

label_4dc608:
    // 0x4dc608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dc608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dc60c:
    // 0x4dc60c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc610:
    // 0x4dc610: 0x8c850214  lw          $a1, 0x214($a0)
    ctx->pc = 0x4dc610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_4dc614:
    // 0x4dc614: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dc614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4dc618:
    // 0x4dc618: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x4dc618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_4dc61c:
    // 0x4dc61c: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x4dc61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_4dc620:
    // 0x4dc620: 0x60f809  jalr        $v1
label_4dc624:
    if (ctx->pc == 0x4DC624u) {
        ctx->pc = 0x4DC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC620u;
        // 0x4dc624: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC628u;
        goto label_4dc628;
    }
    ctx->pc = 0x4DC620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DC628u);
        ctx->pc = 0x4DC624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC620u;
        // 0x4dc624: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC620u, 0x4DC628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC628u;
label_4dc628:
    // 0x4dc628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc62c:
    // 0x4dc62c: 0x3e00008  jr          $ra
label_4dc630:
    if (ctx->pc == 0x4DC630u) {
        ctx->pc = 0x4DC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC62Cu;
        // 0x4dc630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC634u;
        goto label_4dc634;
    }
    ctx->pc = 0x4DC62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC62Cu;
        // 0x4dc630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC634u;
label_4dc634:
    // 0x4dc634: 0x0  nop
    ctx->pc = 0x4dc634u;
    // NOP
    ctx->pc = 0x4dc638u;
}
