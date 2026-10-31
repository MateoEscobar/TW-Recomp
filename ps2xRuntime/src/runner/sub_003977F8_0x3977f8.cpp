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

// Function: sub_003977F8
// Address: 0x3977f8 - 0x397838
void sub_003977F8_0x3977f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003977F8_0x3977f8");
#endif

    switch (ctx->pc) {
        case 0x397810u: goto label_397810;
        case 0x397824u: goto label_397824;
        default: break;
    }

    ctx->pc = 0x3977f8u;

    // 0x3977f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3977f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3977fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3977FCu;
    {
        const bool branch_taken_0x3977fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x397800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977FCu;
        // 0x397800: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3977fc) {
            ctx->pc = 0x397818u;
            goto label_397818;
        }
    }
    ctx->pc = 0x397804u;
    // 0x397804: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x397804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x397808: 0xc05c648  jal         func_171920
    ctx->pc = 0x397808u;
    SET_GPR_U32(ctx, 31, 0x397810u);
    ctx->pc = 0x39780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397808u;
    // 0x39780c: 0x8c4471a4  lw          $a0, 0x71A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171920u, 0x397808u, 0x397810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397810u;
label_397810:
    // 0x397810: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x397810u;
    {
        const bool branch_taken_0x397810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397810u;
        // 0x397814: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397810) {
            ctx->pc = 0x397828u;
            goto label_397828;
        }
    }
    ctx->pc = 0x397818u;
label_397818:
    // 0x397818: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x397818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x39781c: 0xc05c694  jal         func_171A50
    ctx->pc = 0x39781Cu;
    SET_GPR_U32(ctx, 31, 0x397824u);
    ctx->pc = 0x397820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39781Cu;
    // 0x397820: 0x8c4471a4  lw          $a0, 0x71A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171A50u, 0x39781Cu, 0x397824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397824u;
label_397824:
    // 0x397824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_397828:
    // 0x397828: 0x3e00008  jr          $ra
    ctx->pc = 0x397828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397828u;
        // 0x39782c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397830u;
    // 0x397830: 0x0  nop
    ctx->pc = 0x397830u;
    // NOP
    // 0x397834: 0x0  nop
    ctx->pc = 0x397834u;
    // NOP
    ctx->pc = 0x397838u;
}
