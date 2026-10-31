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

// Function: sub_001581E8
// Address: 0x1581e8 - 0x158218
void sub_001581E8_0x1581e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001581E8_0x1581e8");
#endif

    switch (ctx->pc) {
        case 0x158200u: goto label_158200;
        default: break;
    }

    ctx->pc = 0x1581e8u;

    // 0x1581e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1581e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1581ec: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1581ECu;
    {
        const bool branch_taken_0x1581ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1581F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581ECu;
        // 0x1581f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581ec) {
            ctx->pc = 0x158208u;
            goto label_158208;
        }
    }
    ctx->pc = 0x1581F4u;
    // 0x1581f4: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x1581f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1581f8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1581F8u;
    SET_GPR_U32(ctx, 31, 0x158200u);
    ctx->pc = 0x1581FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581F8u;
    // 0x1581fc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1581F8u, 0x158200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158200u;
label_158200:
    // 0x158200: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158200u;
    {
        const bool branch_taken_0x158200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158200u;
        // 0x158204: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158200) {
            ctx->pc = 0x158210u;
            goto label_158210;
        }
    }
    ctx->pc = 0x158208u;
label_158208:
    // 0x158208: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x158208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x15820c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15820cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158210:
    // 0x158210: 0x3e00008  jr          $ra
    ctx->pc = 0x158210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158210u;
        // 0x158214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158218u;
}
