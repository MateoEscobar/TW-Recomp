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

// Function: sub_0035D438
// Address: 0x35d438 - 0x35d498
void sub_0035D438_0x35d438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D438_0x35d438");
#endif

    switch (ctx->pc) {
        case 0x35d458u: goto label_35d458;
        case 0x35d460u: goto label_35d460;
        case 0x35d474u: goto label_35d474;
        case 0x35d480u: goto label_35d480;
        default: break;
    }

    ctx->pc = 0x35d438u;

    // 0x35d438: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35d438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35d43c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d440: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35d440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35d444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d44c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d450: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D450u;
    SET_GPR_U32(ctx, 31, 0x35D458u);
    ctx->pc = 0x35D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D450u;
    // 0x35d454: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D450u, 0x35D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D458u;
label_35d458:
    // 0x35d458: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D458u;
    SET_GPR_U32(ctx, 31, 0x35D460u);
    ctx->pc = 0x35D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D458u;
    // 0x35d45c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D458u, 0x35D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D460u;
label_35d460:
    // 0x35d460: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35d460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d46c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35D46Cu;
    SET_GPR_U32(ctx, 31, 0x35D474u);
    ctx->pc = 0x35D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D46Cu;
    // 0x35d470: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35D46Cu, 0x35D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D474u;
label_35d474:
    // 0x35d474: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35d474u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35d478: 0xc08e7b8  jal         func_239EE0
    ctx->pc = 0x35D478u;
    SET_GPR_U32(ctx, 31, 0x35D480u);
    ctx->pc = 0x35D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D478u;
    // 0x35d47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239EE0u, 0x35D478u, 0x35D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D480u;
label_35d480:
    // 0x35d480: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35d480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d484: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d490: 0x3e00008  jr          $ra
    ctx->pc = 0x35D490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D490u;
        // 0x35d494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D498u;
}
