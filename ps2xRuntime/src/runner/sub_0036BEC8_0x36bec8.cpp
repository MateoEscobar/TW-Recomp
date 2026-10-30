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

// Function: sub_0036BEC8
// Address: 0x36bec8 - 0x36bf28
void sub_0036BEC8_0x36bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BEC8_0x36bec8");
#endif

    switch (ctx->pc) {
        case 0x36bee8u: goto label_36bee8;
        case 0x36bef0u: goto label_36bef0;
        case 0x36bf04u: goto label_36bf04;
        case 0x36bf10u: goto label_36bf10;
        default: break;
    }

    ctx->pc = 0x36bec8u;

    // 0x36bec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36bec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36becc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36beccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bed0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36bed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36bed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36bed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36bed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36bedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36bee0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36BEE0u;
    SET_GPR_U32(ctx, 31, 0x36BEE8u);
    ctx->pc = 0x36BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BEE0u;
    // 0x36bee4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36BEE0u, 0x36BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BEE8u;
label_36bee8:
    // 0x36bee8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36BEE8u;
    SET_GPR_U32(ctx, 31, 0x36BEF0u);
    ctx->pc = 0x36BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BEE8u;
    // 0x36beec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36BEE8u, 0x36BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BEF0u;
label_36bef0:
    // 0x36bef0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36bef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36bef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36befc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36BEFCu;
    SET_GPR_U32(ctx, 31, 0x36BF04u);
    ctx->pc = 0x36BF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BEFCu;
    // 0x36bf00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36BEFCu, 0x36BF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF04u;
label_36bf04:
    // 0x36bf04: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x36bf04u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36bf08: 0xc1076a0  jal         func_41DA80
    ctx->pc = 0x36BF08u;
    SET_GPR_U32(ctx, 31, 0x36BF10u);
    ctx->pc = 0x36BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF08u;
    // 0x36bf0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41DA80u, 0x36BF08u, 0x36BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF10u;
label_36bf10:
    // 0x36bf10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36bf10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36bf14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36bf14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36bf18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bf1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36bf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bf20: 0x3e00008  jr          $ra
    ctx->pc = 0x36BF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF20u;
        // 0x36bf24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BF28u;
}
