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

// Function: sub_004EF628
// Address: 0x4ef628 - 0x4ef658
void sub_004EF628_0x4ef628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF628_0x4ef628");
#endif

    switch (ctx->pc) {
        case 0x4ef628u: goto label_4ef628;
        case 0x4ef62cu: goto label_4ef62c;
        case 0x4ef630u: goto label_4ef630;
        case 0x4ef634u: goto label_4ef634;
        case 0x4ef638u: goto label_4ef638;
        case 0x4ef63cu: goto label_4ef63c;
        case 0x4ef640u: goto label_4ef640;
        case 0x4ef644u: goto label_4ef644;
        case 0x4ef648u: goto label_4ef648;
        case 0x4ef64cu: goto label_4ef64c;
        case 0x4ef650u: goto label_4ef650;
        case 0x4ef654u: goto label_4ef654;
        default: break;
    }

    ctx->pc = 0x4ef628u;

label_4ef628:
    // 0x4ef628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ef62c:
    // 0x4ef62c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ef630:
    // 0x4ef630: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4ef630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4ef634:
    // 0x4ef634: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4ef634u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4ef638:
    // 0x4ef638: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4ef638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ef63c:
    // 0x4ef63c: 0x40f809  jalr        $v0
label_4ef640:
    if (ctx->pc == 0x4EF640u) {
        ctx->pc = 0x4EF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF63Cu;
        // 0x4ef640: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF644u;
        goto label_4ef644;
    }
    ctx->pc = 0x4EF63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EF644u);
        ctx->pc = 0x4EF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF63Cu;
        // 0x4ef640: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF63Cu, 0x4EF644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EF644u;
label_4ef644:
    // 0x4ef644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ef648:
    // 0x4ef648: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4ef648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4ef64c:
    // 0x4ef64c: 0x3e00008  jr          $ra
label_4ef650:
    if (ctx->pc == 0x4EF650u) {
        ctx->pc = 0x4EF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF64Cu;
        // 0x4ef650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EF654u;
        goto label_4ef654;
    }
    ctx->pc = 0x4EF64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF64Cu;
        // 0x4ef650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EF64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EF654u;
label_4ef654:
    // 0x4ef654: 0x0  nop
    ctx->pc = 0x4ef654u;
    // NOP
    ctx->pc = 0x4ef658u;
}
