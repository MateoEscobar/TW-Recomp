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

// Function: sub_002911F8
// Address: 0x2911f8 - 0x291218
void sub_002911F8_0x2911f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002911F8_0x2911f8");
#endif

    ctx->pc = 0x2911f8u;

    // 0x2911f8: 0x8c830208  lw          $v1, 0x208($a0)
    ctx->pc = 0x2911f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x2911fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2911FCu;
    {
        const bool branch_taken_0x2911fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911FCu;
        // 0x291200: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911fc) {
            ctx->pc = 0x291210u;
            goto label_291210;
        }
    }
    ctx->pc = 0x291204u;
    // 0x291204: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x291204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x291208: 0x3e00008  jr          $ra
    ctx->pc = 0x291208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291208u;
        // 0x29120c: 0x90620298  lbu         $v0, 0x298($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 664)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291210u;
label_291210:
    // 0x291210: 0x3e00008  jr          $ra
    ctx->pc = 0x291210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291210u;
        // 0x291214: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291218u;
}
