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

// Function: sub_003291B8
// Address: 0x3291b8 - 0x3291f0
void sub_003291B8_0x3291b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003291B8_0x3291b8");
#endif

    switch (ctx->pc) {
        case 0x3291d4u: goto label_3291d4;
        case 0x3291e0u: goto label_3291e0;
        default: break;
    }

    ctx->pc = 0x3291b8u;

    // 0x3291b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3291b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3291bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3291bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3291c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3291c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3291c4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3291C4u;
    {
        const bool branch_taken_0x3291c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3291C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291C4u;
        // 0x3291c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291c4) {
            ctx->pc = 0x3291D4u;
            goto label_3291d4;
        }
    }
    ctx->pc = 0x3291CCu;
    // 0x3291cc: 0xc0ca444  jal         func_329110
    ctx->pc = 0x3291CCu;
    SET_GPR_U32(ctx, 31, 0x3291D4u);
    ctx->pc = 0x329110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329110u, 0x3291CCu, 0x3291D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291D4u;
label_3291d4:
    // 0x3291d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3291d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3291d8: 0xc0ca47c  jal         func_3291F0
    ctx->pc = 0x3291D8u;
    SET_GPR_U32(ctx, 31, 0x3291E0u);
    ctx->pc = 0x3291DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3291D8u;
    // 0x3291dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291F0u, 0x3291D8u, 0x3291E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291E0u;
label_3291e0:
    // 0x3291e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3291e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3291e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3291e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3291e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3291E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3291ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291E8u;
        // 0x3291ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3291E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3291F0u;
}
