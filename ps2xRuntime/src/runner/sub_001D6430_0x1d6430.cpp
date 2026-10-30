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

// Function: sub_001D6430
// Address: 0x1d6430 - 0x1d6480
void sub_001D6430_0x1d6430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6430_0x1d6430");
#endif

    switch (ctx->pc) {
        case 0x1d6460u: goto label_1d6460;
        case 0x1d646cu: goto label_1d646c;
        default: break;
    }

    ctx->pc = 0x1d6430u;

    // 0x1d6430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6434: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d6434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d6438: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d643c: 0x2442bcd0  addiu       $v0, $v0, -0x4330
    ctx->pc = 0x1d643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950096));
    // 0x1d6440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d644c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d644cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6450: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d6450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d6454: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d6454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d6458: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1D6458u;
    SET_GPR_U32(ctx, 31, 0x1D6460u);
    ctx->pc = 0x1D645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6458u;
    // 0x1d645c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1D6458u, 0x1D6460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6460u;
label_1d6460:
    // 0x1d6460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6464: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1D6464u;
    SET_GPR_U32(ctx, 31, 0x1D646Cu);
    ctx->pc = 0x1D6468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6464u;
    // 0x1d6468: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1D6464u, 0x1D646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D646Cu;
label_1d646c:
    // 0x1d646c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d646cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6478: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6478u;
        // 0x1d647c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6480u;
}
