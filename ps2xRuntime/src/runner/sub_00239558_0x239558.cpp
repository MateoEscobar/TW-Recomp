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

// Function: sub_00239558
// Address: 0x239558 - 0x2395a0
void sub_00239558_0x239558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239558_0x239558");
#endif

    switch (ctx->pc) {
        case 0x239574u: goto label_239574;
        case 0x23957cu: goto label_23957c;
        case 0x23958cu: goto label_23958c;
        default: break;
    }

    ctx->pc = 0x239558u;

    // 0x239558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23955c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23955cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x239560: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x239564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x239564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23956c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23956Cu;
    SET_GPR_U32(ctx, 31, 0x239574u);
    ctx->pc = 0x239570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23956Cu;
    // 0x239570: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23956Cu, 0x239574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239574u;
label_239574:
    // 0x239574: 0xc08a61a  jal         func_229868
    ctx->pc = 0x239574u;
    SET_GPR_U32(ctx, 31, 0x23957Cu);
    ctx->pc = 0x239578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239574u;
    // 0x239578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x239574u, 0x23957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23957Cu;
label_23957c:
    // 0x23957c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23957Cu;
    {
        const bool branch_taken_0x23957c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23957Cu;
        // 0x239580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23957c) {
            ctx->pc = 0x23958Cu;
            goto label_23958c;
        }
    }
    ctx->pc = 0x239584u;
    // 0x239584: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x239584u;
    SET_GPR_U32(ctx, 31, 0x23958Cu);
    ctx->pc = 0x239588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239584u;
    // 0x239588: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x239584u, 0x23958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23958Cu;
label_23958c:
    // 0x23958c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23958cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239594: 0x3e00008  jr          $ra
    ctx->pc = 0x239594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239594u;
        // 0x239598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23959Cu;
    // 0x23959c: 0x0  nop
    ctx->pc = 0x23959cu;
    // NOP
    ctx->pc = 0x2395a0u;
}
