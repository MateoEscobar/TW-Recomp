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

// Function: sub_00169468
// Address: 0x169468 - 0x169498
void sub_00169468_0x169468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169468_0x169468");
#endif

    switch (ctx->pc) {
        case 0x169488u: goto label_169488;
        default: break;
    }

    ctx->pc = 0x169468u;

    // 0x169468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16946c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x16946cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x169470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169474: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x169474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x169478: 0x24c6cac8  addiu       $a2, $a2, -0x3538
    ctx->pc = 0x169478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953672));
    // 0x16947c: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x16947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x169480: 0xc05905e  jal         func_164178
    ctx->pc = 0x169480u;
    SET_GPR_U32(ctx, 31, 0x169488u);
    ctx->pc = 0x169484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169480u;
    // 0x169484: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x169480u, 0x169488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169488u;
label_169488:
    // 0x169488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16948c: 0x3e00008  jr          $ra
    ctx->pc = 0x16948Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16948Cu;
        // 0x169490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16948Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169494u;
    // 0x169494: 0x0  nop
    ctx->pc = 0x169494u;
    // NOP
    ctx->pc = 0x169498u;
}
