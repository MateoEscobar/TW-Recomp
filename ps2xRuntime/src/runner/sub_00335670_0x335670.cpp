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

// Function: sub_00335670
// Address: 0x335670 - 0x3356a0
void sub_00335670_0x335670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335670_0x335670");
#endif

    switch (ctx->pc) {
        case 0x335684u: goto label_335684;
        default: break;
    }

    ctx->pc = 0x335670u;

    // 0x335670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335674: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x335674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x335678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33567c: 0xc0cd582  jal         func_335608
    ctx->pc = 0x33567Cu;
    SET_GPR_U32(ctx, 31, 0x335684u);
    ctx->pc = 0x335680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33567Cu;
    // 0x335680: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335608u, 0x33567Cu, 0x335684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335684u;
label_335684:
    // 0x335684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335688: 0x3e00008  jr          $ra
    ctx->pc = 0x335688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335688u;
        // 0x33568c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335690u;
    // 0x335690: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x335690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x335694: 0x0  nop
    ctx->pc = 0x335694u;
    // NOP
    // 0x335698: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x335698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33569c: 0x0  nop
    ctx->pc = 0x33569cu;
    // NOP
    ctx->pc = 0x3356a0u;
}
