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

// Function: sub_00111618
// Address: 0x111618 - 0x111650
void sub_00111618_0x111618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111618_0x111618");
#endif

    switch (ctx->pc) {
        case 0x111644u: goto label_111644;
        default: break;
    }

    ctx->pc = 0x111618u;

    // 0x111618: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x111618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x11161c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11161cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111620: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x111620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x111624: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x111624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x111628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11162c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111630: 0x3463fa48  ori         $v1, $v1, 0xFA48
    ctx->pc = 0x111630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64072);
    // 0x111634: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x111634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x111638: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x111638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11163c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x11163Cu;
    SET_GPR_U32(ctx, 31, 0x111644u);
    ctx->pc = 0x111640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11163Cu;
    // 0x111640: 0xa0407a57  sb          $zero, 0x7A57($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 31319), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x11163Cu, 0x111644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111644u;
label_111644:
    // 0x111644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111648: 0x3e00008  jr          $ra
    ctx->pc = 0x111648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111648u;
        // 0x11164c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111650u;
}
