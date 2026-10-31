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

// Function: sub_00433F98
// Address: 0x433f98 - 0x433fd8
void sub_00433F98_0x433f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433F98_0x433f98");
#endif

    switch (ctx->pc) {
        case 0x433fccu: goto label_433fcc;
        default: break;
    }

    ctx->pc = 0x433f98u;

    // 0x433f98: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x433f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x433f9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x433f9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x433fa0: 0x8c626d54  lw          $v0, 0x6D54($v1)
    ctx->pc = 0x433fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x516D54u));
    // 0x433fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x433fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x433fa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x433fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x433fac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x433FACu;
    {
        const bool branch_taken_0x433fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x433FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433FACu;
        // 0x433fb0: 0xac626d54  sw          $v0, 0x6D54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27988), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433fac) {
            ctx->pc = 0x433FCCu;
            goto label_433fcc;
        }
    }
    ctx->pc = 0x433FB4u;
    // 0x433fb4: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x433fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x433fb8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x433fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x433fbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x433fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x433fc0: 0x8c448f28  lw          $a0, -0x70D8($v0)
    ctx->pc = 0x433fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x518F28u));
    // 0x433fc4: 0xc10f430  jal         func_43D0C0
    ctx->pc = 0x433FC4u;
    SET_GPR_U32(ctx, 31, 0x433FCCu);
    ctx->pc = 0x433FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x433FC4u;
    // 0x433fc8: 0xaca36d50  sw          $v1, 0x6D50($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 27984), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0C0u, 0x433FC4u, 0x433FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x433FCCu;
label_433fcc:
    // 0x433fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x433fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x433fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x433FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433FD0u;
        // 0x433fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x433FD8u;
}
