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

// Function: sub_00191530
// Address: 0x191530 - 0x191580
void sub_00191530_0x191530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191530_0x191530");
#endif

    switch (ctx->pc) {
        case 0x191558u: goto label_191558;
        case 0x19156cu: goto label_19156c;
        default: break;
    }

    ctx->pc = 0x191530u;

    // 0x191530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191534: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x191534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x191538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19153c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19153cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191544: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x191544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x191548: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191548u;
    {
        const bool branch_taken_0x191548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191548u;
        // 0x19154c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191548) {
            ctx->pc = 0x191558u;
            goto label_191558;
        }
    }
    ctx->pc = 0x191550u;
    // 0x191550: 0xc064456  jal         func_191158
    ctx->pc = 0x191550u;
    SET_GPR_U32(ctx, 31, 0x191558u);
    ctx->pc = 0x191158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191158u, 0x191550u, 0x191558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191558u;
label_191558:
    // 0x191558: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x191558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x19155c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19155Cu;
    {
        const bool branch_taken_0x19155c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19155c) {
            ctx->pc = 0x191560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19155Cu;
            // 0x191560: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191570u;
            goto label_191570;
        }
    }
    ctx->pc = 0x191564u;
    // 0x191564: 0xc10b208  jal         func_42C820
    ctx->pc = 0x191564u;
    SET_GPR_U32(ctx, 31, 0x19156Cu);
    ctx->pc = 0x191568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191564u;
    // 0x191568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x191564u, 0x19156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19156Cu;
label_19156c:
    // 0x19156c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19156cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_191570:
    // 0x191570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x191570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191578: 0x3e00008  jr          $ra
    ctx->pc = 0x191578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191578u;
        // 0x19157c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191580u;
}
