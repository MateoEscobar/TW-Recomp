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

// Function: sub_00161868
// Address: 0x161868 - 0x1618b8
void sub_00161868_0x161868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161868_0x161868");
#endif

    switch (ctx->pc) {
        case 0x161890u: goto label_161890;
        case 0x1618a4u: goto label_1618a4;
        default: break;
    }

    ctx->pc = 0x161868u;

    // 0x161868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16186c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x16186cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x161870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161874: 0x24428938  addiu       $v0, $v0, -0x76C8
    ctx->pc = 0x161874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936888));
    // 0x161878: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x161878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16187c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16187cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161884: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x161884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161888: 0xc05863c  jal         func_1618F0
    ctx->pc = 0x161888u;
    SET_GPR_U32(ctx, 31, 0x161890u);
    ctx->pc = 0x16188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161888u;
    // 0x16188c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1618F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1618F0u, 0x161888u, 0x161890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161890u;
label_161890:
    // 0x161890: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x161890u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x161894: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161894u;
    {
        const bool branch_taken_0x161894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x161898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161894u;
        // 0x161898: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161894) {
            ctx->pc = 0x1618A8u;
            goto label_1618a8;
        }
    }
    ctx->pc = 0x16189Cu;
    // 0x16189c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x16189Cu;
    SET_GPR_U32(ctx, 31, 0x1618A4u);
    ctx->pc = 0x1618A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16189Cu;
    // 0x1618a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x16189Cu, 0x1618A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1618A4u;
label_1618a4:
    // 0x1618a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1618a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1618a8:
    // 0x1618a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1618a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1618ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1618acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1618b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1618B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1618B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618B0u;
        // 0x1618b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1618B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1618B8u;
}
