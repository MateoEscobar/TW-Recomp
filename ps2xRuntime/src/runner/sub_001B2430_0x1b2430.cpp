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

// Function: sub_001B2430
// Address: 0x1b2430 - 0x1b2460
void sub_001B2430_0x1b2430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2430_0x1b2430");
#endif

    switch (ctx->pc) {
        case 0x1b2454u: goto label_1b2454;
        default: break;
    }

    ctx->pc = 0x1b2430u;

    // 0x1b2430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2434: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b2434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2438: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2438u;
    {
        const bool branch_taken_0x1b2438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2438u;
        // 0x1b243c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2438) {
            ctx->pc = 0x1B2454u;
            goto label_1b2454;
        }
    }
    ctx->pc = 0x1B2440u;
    // 0x1b2440: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b2440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b2444: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b2444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b2448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b244c: 0xc0837f4  jal         func_20DFD0
    ctx->pc = 0x1B244Cu;
    SET_GPR_U32(ctx, 31, 0x1B2454u);
    ctx->pc = 0x1B2450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B244Cu;
    // 0x1b2450: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DFD0u, 0x1B244Cu, 0x1B2454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2454u;
label_1b2454:
    // 0x1b2454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2458: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2458u;
        // 0x1b245c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2460u;
}
