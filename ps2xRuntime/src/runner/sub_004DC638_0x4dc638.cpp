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

// Function: sub_004DC638
// Address: 0x4dc638 - 0x4dc668
void sub_004DC638_0x4dc638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC638_0x4dc638");
#endif

    switch (ctx->pc) {
        case 0x4dc638u: goto label_4dc638;
        case 0x4dc63cu: goto label_4dc63c;
        case 0x4dc640u: goto label_4dc640;
        case 0x4dc644u: goto label_4dc644;
        case 0x4dc648u: goto label_4dc648;
        case 0x4dc64cu: goto label_4dc64c;
        case 0x4dc650u: goto label_4dc650;
        case 0x4dc654u: goto label_4dc654;
        case 0x4dc658u: goto label_4dc658;
        case 0x4dc65cu: goto label_4dc65c;
        case 0x4dc660u: goto label_4dc660;
        case 0x4dc664u: goto label_4dc664;
        default: break;
    }

    ctx->pc = 0x4dc638u;

label_4dc638:
    // 0x4dc638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dc638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dc63c:
    // 0x4dc63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc640:
    // 0x4dc640: 0x8c850214  lw          $a1, 0x214($a0)
    ctx->pc = 0x4dc640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_4dc644:
    // 0x4dc644: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dc644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4dc648:
    // 0x4dc648: 0x84440198  lh          $a0, 0x198($v0)
    ctx->pc = 0x4dc648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 408)));
label_4dc64c:
    // 0x4dc64c: 0x8c43019c  lw          $v1, 0x19C($v0)
    ctx->pc = 0x4dc64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
label_4dc650:
    // 0x4dc650: 0x60f809  jalr        $v1
label_4dc654:
    if (ctx->pc == 0x4DC654u) {
        ctx->pc = 0x4DC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC650u;
        // 0x4dc654: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC658u;
        goto label_4dc658;
    }
    ctx->pc = 0x4DC650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DC658u);
        ctx->pc = 0x4DC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC650u;
        // 0x4dc654: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC650u, 0x4DC658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC658u;
label_4dc658:
    // 0x4dc658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc65c:
    // 0x4dc65c: 0x3e00008  jr          $ra
label_4dc660:
    if (ctx->pc == 0x4DC660u) {
        ctx->pc = 0x4DC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC65Cu;
        // 0x4dc660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC664u;
        goto label_4dc664;
    }
    ctx->pc = 0x4DC65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC65Cu;
        // 0x4dc660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC664u;
label_4dc664:
    // 0x4dc664: 0x0  nop
    ctx->pc = 0x4dc664u;
    // NOP
    ctx->pc = 0x4dc668u;
}
