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

// Function: sub_00498450
// Address: 0x498450 - 0x4984b0
void sub_00498450_0x498450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498450_0x498450");
#endif

    switch (ctx->pc) {
        case 0x498478u: goto label_498478;
        case 0x498490u: goto label_498490;
        default: break;
    }

    ctx->pc = 0x498450u;

    // 0x498450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x498450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x498454: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x498454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x498458: 0x8f908a48  lw          $s0, -0x75B8($gp)
    ctx->pc = 0x498458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937160)));
    // 0x49845c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x49845Cu;
    {
        const bool branch_taken_0x49845c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49845Cu;
        // 0x498460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49845c) {
            ctx->pc = 0x498494u;
            goto label_498494;
        }
    }
    ctx->pc = 0x498464u;
    // 0x498464: 0x8f84872c  lw          $a0, -0x78D4($gp)
    ctx->pc = 0x498464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936364)));
    // 0x498468: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x498468u;
    {
        const bool branch_taken_0x498468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x498468) {
            ctx->pc = 0x49846Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x498468u;
            // 0x49846c: 0x8f848728  lw          $a0, -0x78D8($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498480u;
            goto label_498480;
        }
    }
    ctx->pc = 0x498470u;
    // 0x498470: 0xc121888  jal         func_486220
    ctx->pc = 0x498470u;
    SET_GPR_U32(ctx, 31, 0x498478u);
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x498470u, 0x498478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498478u;
label_498478:
    // 0x498478: 0xaf80872c  sw          $zero, -0x78D4($gp)
    ctx->pc = 0x498478u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936364), GPR_U32(ctx, 0));
    // 0x49847c: 0x8f848728  lw          $a0, -0x78D8($gp)
    ctx->pc = 0x49847cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936360)));
label_498480:
    // 0x498480: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x498480u;
    {
        const bool branch_taken_0x498480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x498484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498480u;
        // 0x498484: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498480) {
            ctx->pc = 0x498498u;
            goto label_498498;
        }
    }
    ctx->pc = 0x498488u;
    // 0x498488: 0xc121888  jal         func_486220
    ctx->pc = 0x498488u;
    SET_GPR_U32(ctx, 31, 0x498490u);
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x498488u, 0x498490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498490u;
label_498490:
    // 0x498490: 0xaf808728  sw          $zero, -0x78D8($gp)
    ctx->pc = 0x498490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936360), GPR_U32(ctx, 0));
label_498494:
    // 0x498494: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498498:
    // 0x498498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49849c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49849cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4984a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4984A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4984A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4984A0u;
        // 0x4984a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4984A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4984A8u;
    // 0x4984a8: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x4984a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x4984ac: 0x0  nop
    ctx->pc = 0x4984acu;
    // NOP
    ctx->pc = 0x4984b0u;
}
