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

// Function: sub_00312310
// Address: 0x312310 - 0x312348
void sub_00312310_0x312310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312310_0x312310");
#endif

    switch (ctx->pc) {
        case 0x312338u: goto label_312338;
        default: break;
    }

    ctx->pc = 0x312310u;

    // 0x312310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312318: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x312318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x31231c: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31231Cu;
    {
        const bool branch_taken_0x31231c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x31231c) {
            ctx->pc = 0x312330u;
            goto label_312330;
        }
    }
    ctx->pc = 0x312324u;
    // 0x312324: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x312324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x312328: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x312328u;
    {
        const bool branch_taken_0x312328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x31232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312328u;
        // 0x31232c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312328) {
            ctx->pc = 0x31233Cu;
            goto label_31233c;
        }
    }
    ctx->pc = 0x312330u;
label_312330:
    // 0x312330: 0xc0c47de  jal         func_311F78
    ctx->pc = 0x312330u;
    SET_GPR_U32(ctx, 31, 0x312338u);
    ctx->pc = 0x312334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312330u;
    // 0x312334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311F78u, 0x312330u, 0x312338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312338u;
label_312338:
    // 0x312338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31233c:
    // 0x31233c: 0x3e00008  jr          $ra
    ctx->pc = 0x31233Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31233Cu;
        // 0x312340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31233Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312344u;
    // 0x312344: 0x0  nop
    ctx->pc = 0x312344u;
    // NOP
    ctx->pc = 0x312348u;
}
