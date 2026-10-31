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

// Function: sub_00201650
// Address: 0x201650 - 0x201680
void sub_00201650_0x201650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201650_0x201650");
#endif

    switch (ctx->pc) {
        case 0x201650u: goto label_201650;
        case 0x201654u: goto label_201654;
        case 0x201658u: goto label_201658;
        case 0x20165cu: goto label_20165c;
        case 0x201660u: goto label_201660;
        case 0x201664u: goto label_201664;
        case 0x201668u: goto label_201668;
        case 0x20166cu: goto label_20166c;
        case 0x201670u: goto label_201670;
        case 0x201674u: goto label_201674;
        case 0x201678u: goto label_201678;
        case 0x20167cu: goto label_20167c;
        default: break;
    }

    ctx->pc = 0x201650u;

label_201650:
    // 0x201650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_201654:
    // 0x201654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_201658:
    // 0x201658: 0x8c8500b8  lw          $a1, 0xB8($a0)
    ctx->pc = 0x201658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_20165c:
    // 0x20165c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20165cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201660:
    // 0x201660: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x201660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_201664:
    // 0x201664: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x201664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_201668:
    // 0x201668: 0x60f809  jalr        $v1
label_20166c:
    if (ctx->pc == 0x20166Cu) {
        ctx->pc = 0x20166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201668u;
        // 0x20166c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201670u;
        goto label_201670;
    }
    ctx->pc = 0x201668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201670u);
        ctx->pc = 0x20166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201668u;
        // 0x20166c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201668u, 0x201670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201670u;
label_201670:
    // 0x201670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201674:
    // 0x201674: 0x3e00008  jr          $ra
label_201678:
    if (ctx->pc == 0x201678u) {
        ctx->pc = 0x201678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201674u;
        // 0x201678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20167Cu;
        goto label_20167c;
    }
    ctx->pc = 0x201674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201674u;
        // 0x201678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20167Cu;
label_20167c:
    // 0x20167c: 0x0  nop
    ctx->pc = 0x20167cu;
    // NOP
    ctx->pc = 0x201680u;
}
