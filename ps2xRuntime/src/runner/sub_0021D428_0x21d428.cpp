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

// Function: sub_0021D428
// Address: 0x21d428 - 0x21d478
void sub_0021D428_0x21d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D428_0x21d428");
#endif

    switch (ctx->pc) {
        case 0x21d44cu: goto label_21d44c;
        case 0x21d460u: goto label_21d460;
        default: break;
    }

    ctx->pc = 0x21d428u;

    // 0x21d428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d42c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21d430: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d438: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x21d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x21d43c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21D43Cu;
    {
        const bool branch_taken_0x21d43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D43Cu;
        // 0x21d440: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d43c) {
            ctx->pc = 0x21D464u;
            goto label_21d464;
        }
    }
    ctx->pc = 0x21D444u;
    // 0x21d444: 0xc0a4eb4  jal         func_293AD0
    ctx->pc = 0x21D444u;
    SET_GPR_U32(ctx, 31, 0x21D44Cu);
    ctx->pc = 0x293AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293AD0u, 0x21D444u, 0x21D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D44Cu;
label_21d44c:
    // 0x21d44c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D44Cu;
    {
        const bool branch_taken_0x21d44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D44Cu;
        // 0x21d450: 0xae0201a4  sw          $v0, 0x1A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d44c) {
            ctx->pc = 0x21D460u;
            goto label_21d460;
        }
    }
    ctx->pc = 0x21D454u;
    // 0x21d454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21d454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d458: 0xc0a52b6  jal         func_294AD8
    ctx->pc = 0x21D458u;
    SET_GPR_U32(ctx, 31, 0x21D460u);
    ctx->pc = 0x21D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D458u;
    // 0x21d45c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AD8u, 0x21D458u, 0x21D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D460u;
label_21d460:
    // 0x21d460: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x21d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_21d464:
    // 0x21d464: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21d464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d46c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D46Cu;
        // 0x21d470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D474u;
    // 0x21d474: 0x0  nop
    ctx->pc = 0x21d474u;
    // NOP
    ctx->pc = 0x21d478u;
}
