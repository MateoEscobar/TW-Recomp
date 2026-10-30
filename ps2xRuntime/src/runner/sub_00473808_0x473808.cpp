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

// Function: sub_00473808
// Address: 0x473808 - 0x473850
void sub_00473808_0x473808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473808_0x473808");
#endif

    switch (ctx->pc) {
        case 0x47383cu: goto label_47383c;
        default: break;
    }

    ctx->pc = 0x473808u;

    // 0x473808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x473808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47380c: 0x8f82851c  lw          $v0, -0x7AE4($gp)
    ctx->pc = 0x47380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
    // 0x473810: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x473810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x473814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x473814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47381c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x47381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x473820: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x473820u;
    {
        const bool branch_taken_0x473820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x473824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473820u;
        // 0x473824: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473820) {
            ctx->pc = 0x47383Cu;
            goto label_47383c;
        }
    }
    ctx->pc = 0x473828u;
    // 0x473828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x473828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47382c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47382Cu;
    {
        const bool branch_taken_0x47382c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x473830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47382Cu;
        // 0x473830: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47382c) {
            ctx->pc = 0x473840u;
            goto label_473840;
        }
    }
    ctx->pc = 0x473834u;
    // 0x473834: 0xc11cb26  jal         func_472C98
    ctx->pc = 0x473834u;
    SET_GPR_U32(ctx, 31, 0x47383Cu);
    ctx->pc = 0x473838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473834u;
    // 0x473838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C98u, 0x473834u, 0x47383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47383Cu;
label_47383c:
    // 0x47383c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47383cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_473840:
    // 0x473840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473844: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x473844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473848: 0x3e00008  jr          $ra
    ctx->pc = 0x473848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473848u;
        // 0x47384c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473850u;
}
