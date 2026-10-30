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

// Function: sub_002903B0
// Address: 0x2903b0 - 0x290418
void sub_002903B0_0x2903b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002903B0_0x2903b0");
#endif

    switch (ctx->pc) {
        case 0x2903d4u: goto label_2903d4;
        case 0x2903f0u: goto label_2903f0;
        default: break;
    }

    ctx->pc = 0x2903b0u;

    // 0x2903b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2903b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2903b4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2903b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2903b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2903b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2903bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2903bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2903c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2903c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2903c4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2903c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2903c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2903c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2903cc: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2903CCu;
    SET_GPR_U32(ctx, 31, 0x2903D4u);
    ctx->pc = 0x2903D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2903CCu;
    // 0x2903d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2903CCu, 0x2903D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903D4u;
label_2903d4:
    // 0x2903d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2903d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2903d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2903d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2903dc: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2903DCu;
    {
        const bool branch_taken_0x2903dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2903dc) {
            ctx->pc = 0x2903E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2903DCu;
            // 0x2903e0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2903FCu;
            goto label_2903fc;
        }
    }
    ctx->pc = 0x2903E4u;
    // 0x2903e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2903e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2903e8: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2903E8u;
    SET_GPR_U32(ctx, 31, 0x2903F0u);
    ctx->pc = 0x2903ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2903E8u;
    // 0x2903ec: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2903E8u, 0x2903F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903F0u;
label_2903f0:
    // 0x2903f0: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2903F0u;
    {
        const bool branch_taken_0x2903f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2903F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903F0u;
        // 0x2903f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903f0) {
            ctx->pc = 0x290400u;
            goto label_290400;
        }
    }
    ctx->pc = 0x2903F8u;
    // 0x2903f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2903f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2903fc:
    // 0x2903fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2903fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290400:
    // 0x290400: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x290400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290404: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x290404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290408: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x290408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29040c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29040cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290410: 0x3e00008  jr          $ra
    ctx->pc = 0x290410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290410u;
        // 0x290414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290418u;
}
