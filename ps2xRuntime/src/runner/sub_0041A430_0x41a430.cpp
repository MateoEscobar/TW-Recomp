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

// Function: sub_0041A430
// Address: 0x41a430 - 0x41a460
void sub_0041A430_0x41a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A430_0x41a430");
#endif

    switch (ctx->pc) {
        case 0x41a454u: goto label_41a454;
        default: break;
    }

    ctx->pc = 0x41a430u;

    // 0x41a430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41a434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a438: 0x8c8256e8  lw          $v0, 0x56E8($a0)
    ctx->pc = 0x41a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22248)));
    // 0x41a43c: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41A43Cu;
    {
        const bool branch_taken_0x41a43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x41A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A43Cu;
        // 0x41a440: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a43c) {
            ctx->pc = 0x41A458u;
            goto label_41a458;
        }
    }
    ctx->pc = 0x41A444u;
    // 0x41a444: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x41A444u;
    {
        const bool branch_taken_0x41a444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A444u;
        // 0x41a448: 0xac8556e8  sw          $a1, 0x56E8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22248), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a444) {
            ctx->pc = 0x41A458u;
            goto label_41a458;
        }
    }
    ctx->pc = 0x41A44Cu;
    // 0x41a44c: 0xc106918  jal         func_41A460
    ctx->pc = 0x41A44Cu;
    SET_GPR_U32(ctx, 31, 0x41A454u);
    ctx->pc = 0x41A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A44Cu;
    // 0x41a450: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A460u, 0x41A44Cu, 0x41A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A454u;
label_41a454:
    // 0x41a454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41a458:
    // 0x41a458: 0x3e00008  jr          $ra
    ctx->pc = 0x41A458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A458u;
        // 0x41a45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A460u;
}
