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

// Function: sub_003CC650
// Address: 0x3cc650 - 0x3cc680
void sub_003CC650_0x3cc650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC650_0x3cc650");
#endif

    switch (ctx->pc) {
        case 0x3cc650u: goto label_3cc650;
        case 0x3cc654u: goto label_3cc654;
        case 0x3cc658u: goto label_3cc658;
        case 0x3cc65cu: goto label_3cc65c;
        case 0x3cc660u: goto label_3cc660;
        case 0x3cc664u: goto label_3cc664;
        case 0x3cc668u: goto label_3cc668;
        case 0x3cc66cu: goto label_3cc66c;
        case 0x3cc670u: goto label_3cc670;
        case 0x3cc674u: goto label_3cc674;
        case 0x3cc678u: goto label_3cc678;
        case 0x3cc67cu: goto label_3cc67c;
        default: break;
    }

    ctx->pc = 0x3cc650u;

label_3cc650:
    // 0x3cc650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3cc650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3cc654:
    // 0x3cc654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cc654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3cc658:
    // 0x3cc658: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3cc658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3cc65c:
    // 0x3cc65c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3cc65cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cc660:
    // 0x3cc660: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cc660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cc664:
    // 0x3cc664: 0x40f809  jalr        $v0
label_3cc668:
    if (ctx->pc == 0x3CC668u) {
        ctx->pc = 0x3CC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC664u;
        // 0x3cc668: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC66Cu;
        goto label_3cc66c;
    }
    ctx->pc = 0x3CC664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC66Cu);
        ctx->pc = 0x3CC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC664u;
        // 0x3cc668: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC664u, 0x3CC66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC66Cu;
label_3cc66c:
    // 0x3cc66c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cc66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3cc670:
    // 0x3cc670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cc670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc674:
    // 0x3cc674: 0x3e00008  jr          $ra
label_3cc678:
    if (ctx->pc == 0x3CC678u) {
        ctx->pc = 0x3CC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC674u;
        // 0x3cc678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC67Cu;
        goto label_3cc67c;
    }
    ctx->pc = 0x3CC674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC674u;
        // 0x3cc678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC67Cu;
label_3cc67c:
    // 0x3cc67c: 0x0  nop
    ctx->pc = 0x3cc67cu;
    // NOP
    ctx->pc = 0x3cc680u;
}
