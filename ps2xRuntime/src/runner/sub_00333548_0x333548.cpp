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

// Function: sub_00333548
// Address: 0x333548 - 0x333588
void sub_00333548_0x333548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333548_0x333548");
#endif

    switch (ctx->pc) {
        case 0x333564u: goto label_333564;
        case 0x333574u: goto label_333574;
        default: break;
    }

    ctx->pc = 0x333548u;

    // 0x333548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x333548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33354c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33354cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x333550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x333550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x333554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33355c: 0xc0ccce0  jal         func_333380
    ctx->pc = 0x33355Cu;
    SET_GPR_U32(ctx, 31, 0x333564u);
    ctx->pc = 0x333560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33355Cu;
    // 0x333560: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333380u, 0x33355Cu, 0x333564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333564u;
label_333564:
    // 0x333564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333568: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x333568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33356c: 0xc0ccc5a  jal         func_333168
    ctx->pc = 0x33356Cu;
    SET_GPR_U32(ctx, 31, 0x333574u);
    ctx->pc = 0x333570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33356Cu;
    // 0x333570: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333168u, 0x33356Cu, 0x333574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333574u;
label_333574:
    // 0x333574: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x333574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x333578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33357c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33357cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333580: 0x3e00008  jr          $ra
    ctx->pc = 0x333580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333580u;
        // 0x333584: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333588u;
}
