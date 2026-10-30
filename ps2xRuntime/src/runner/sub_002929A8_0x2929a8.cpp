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

// Function: sub_002929A8
// Address: 0x2929a8 - 0x2929f8
void sub_002929A8_0x2929a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002929A8_0x2929a8");
#endif

    switch (ctx->pc) {
        case 0x2929c4u: goto label_2929c4;
        case 0x2929ccu: goto label_2929cc;
        case 0x2929dcu: goto label_2929dc;
        case 0x2929e8u: goto label_2929e8;
        default: break;
    }

    ctx->pc = 0x2929a8u;

    // 0x2929a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2929a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2929ac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2929acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2929b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2929b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2929b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2929b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2929b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2929bc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2929BCu;
    SET_GPR_U32(ctx, 31, 0x2929C4u);
    ctx->pc = 0x2929C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929BCu;
    // 0x2929c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2929BCu, 0x2929C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929C4u;
label_2929c4:
    // 0x2929c4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2929C4u;
    SET_GPR_U32(ctx, 31, 0x2929CCu);
    ctx->pc = 0x2929C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929C4u;
    // 0x2929c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2929C4u, 0x2929CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929CCu;
label_2929cc:
    // 0x2929cc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2929CCu;
    {
        const bool branch_taken_0x2929cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2929cc) {
            ctx->pc = 0x2929D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2929CCu;
            // 0x2929d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2929ECu;
            goto label_2929ec;
        }
    }
    ctx->pc = 0x2929D4u;
    // 0x2929d4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2929D4u;
    SET_GPR_U32(ctx, 31, 0x2929DCu);
    ctx->pc = 0x2929D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929D4u;
    // 0x2929d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2929D4u, 0x2929DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929DCu;
label_2929dc:
    // 0x2929dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2929dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2929e0: 0xc0a36e2  jal         func_28DB88
    ctx->pc = 0x2929E0u;
    SET_GPR_U32(ctx, 31, 0x2929E8u);
    ctx->pc = 0x2929E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2929E0u;
    // 0x2929e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB88u, 0x2929E0u, 0x2929E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2929E8u;
label_2929e8:
    // 0x2929e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2929e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2929ec:
    // 0x2929ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2929ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2929f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2929F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2929F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2929F0u;
        // 0x2929f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2929F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2929F8u;
}
