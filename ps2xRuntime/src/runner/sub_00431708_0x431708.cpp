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

// Function: sub_00431708
// Address: 0x431708 - 0x431748
void sub_00431708_0x431708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431708_0x431708");
#endif

    switch (ctx->pc) {
        case 0x43173cu: goto label_43173c;
        default: break;
    }

    ctx->pc = 0x431708u;

    // 0x431708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x431708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43170c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43170cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x431710: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x431710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x431714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x431714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x431718: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x431718u;
    {
        const bool branch_taken_0x431718 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x43171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431718u;
        // 0x43171c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431718) {
            ctx->pc = 0x431734u;
            goto label_431734;
        }
    }
    ctx->pc = 0x431720u;
    // 0x431720: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x431720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x431724: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x431724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x431728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x431728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x43172c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x43172Cu;
    {
        const bool branch_taken_0x43172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43172Cu;
        // 0x431730: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43172c) {
            ctx->pc = 0x43173Cu;
            goto label_43173c;
        }
    }
    ctx->pc = 0x431734u;
label_431734:
    // 0x431734: 0xc10c9f2  jal         func_4327C8
    ctx->pc = 0x431734u;
    SET_GPR_U32(ctx, 31, 0x43173Cu);
    ctx->pc = 0x4327C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4327C8u, 0x431734u, 0x43173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43173Cu;
label_43173c:
    // 0x43173c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43173cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x431740: 0x3e00008  jr          $ra
    ctx->pc = 0x431740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431740u;
        // 0x431744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431748u;
}
