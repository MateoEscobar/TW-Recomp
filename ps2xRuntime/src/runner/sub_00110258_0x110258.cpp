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

// Function: sub_00110258
// Address: 0x110258 - 0x1102a0
void sub_00110258_0x110258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110258_0x110258");
#endif

    switch (ctx->pc) {
        case 0x110274u: goto label_110274;
        case 0x110284u: goto label_110284;
        case 0x110290u: goto label_110290;
        default: break;
    }

    ctx->pc = 0x110258u;

    // 0x110258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11025c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x110260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110268: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x110268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x11026c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x11026Cu;
    SET_GPR_U32(ctx, 31, 0x110274u);
    ctx->pc = 0x110270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11026Cu;
    // 0x110270: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x11026Cu, 0x110274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110274u;
label_110274:
    // 0x110274: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x110274u;
    {
        const bool branch_taken_0x110274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110274u;
        // 0x110278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110274) {
            ctx->pc = 0x110290u;
            goto label_110290;
        }
    }
    ctx->pc = 0x11027Cu;
    // 0x11027c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x11027Cu;
    SET_GPR_U32(ctx, 31, 0x110284u);
    ctx->pc = 0x110280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11027Cu;
    // 0x110280: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x11027Cu, 0x110284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110284u;
label_110284:
    // 0x110284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110288: 0xc0447d0  jal         func_111F40
    ctx->pc = 0x110288u;
    SET_GPR_U32(ctx, 31, 0x110290u);
    ctx->pc = 0x11028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110288u;
    // 0x11028c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F40u, 0x110288u, 0x110290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110290u;
label_110290:
    // 0x110290: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x110290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110298: 0x3e00008  jr          $ra
    ctx->pc = 0x110298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110298u;
        // 0x11029c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1102A0u;
}
