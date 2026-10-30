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

// Function: sub_0014B9D0
// Address: 0x14b9d0 - 0x14ba18
void sub_0014B9D0_0x14b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B9D0_0x14b9d0");
#endif

    switch (ctx->pc) {
        case 0x14b9f0u: goto label_14b9f0;
        default: break;
    }

    ctx->pc = 0x14b9d0u;

    // 0x14b9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14b9d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14b9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14b9d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14b9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b9e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b9e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b9e8: 0xc111590  jal         func_445640
    ctx->pc = 0x14B9E8u;
    SET_GPR_U32(ctx, 31, 0x14B9F0u);
    ctx->pc = 0x14B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B9E8u;
    // 0x14b9ec: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x14B9E8u, 0x14B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B9F0u;
label_14b9f0:
    // 0x14b9f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B9F0u;
    {
        const bool branch_taken_0x14b9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9F0u;
        // 0x14b9f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9f0) {
            ctx->pc = 0x14BA08u;
            goto label_14ba08;
        }
    }
    ctx->pc = 0x14B9F8u;
    // 0x14b9f8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B9F8u;
    {
        const bool branch_taken_0x14b9f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B9F8u;
        // 0x14b9fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9f8) {
            ctx->pc = 0x14BA04u;
            goto label_14ba04;
        }
    }
    ctx->pc = 0x14BA00u;
    // 0x14ba00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_14ba04:
    // 0x14ba04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ba08:
    // 0x14ba08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14ba08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ba0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ba0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ba10: 0x3e00008  jr          $ra
    ctx->pc = 0x14BA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA10u;
        // 0x14ba14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BA18u;
}
