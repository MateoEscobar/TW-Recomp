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

// Function: sub_001B4038
// Address: 0x1b4038 - 0x1b4098
void sub_001B4038_0x1b4038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4038_0x1b4038");
#endif

    switch (ctx->pc) {
        case 0x1b406cu: goto label_1b406c;
        case 0x1b407cu: goto label_1b407c;
        default: break;
    }

    ctx->pc = 0x1b4038u;

    // 0x1b4038: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b4038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b403c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b403cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b4040: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b4040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b4044: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1b4044u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1b4048: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b4048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b404c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b404cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4054: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x1b4054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x1b4058: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b4058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b405c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b405cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4064: 0xc06cb28  jal         func_1B2CA0
    ctx->pc = 0x1B4064u;
    SET_GPR_U32(ctx, 31, 0x1B406Cu);
    ctx->pc = 0x1B4068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4064u;
    // 0x1b4068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2CA0u, 0x1B4064u, 0x1B406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B406Cu;
label_1b406c:
    // 0x1b406c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b406cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4070: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b4070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4074: 0xc06cafc  jal         func_1B2BF0
    ctx->pc = 0x1B4074u;
    SET_GPR_U32(ctx, 31, 0x1B407Cu);
    ctx->pc = 0x1B4078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4074u;
    // 0x1b4078: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2BF0u, 0x1B4074u, 0x1B407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B407Cu;
label_1b407c:
    // 0x1b407c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b407cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4080: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b4080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4084: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b4084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b408c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B408Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B408Cu;
        // 0x1b4090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B408Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4094u;
    // 0x1b4094: 0x0  nop
    ctx->pc = 0x1b4094u;
    // NOP
    ctx->pc = 0x1b4098u;
}
