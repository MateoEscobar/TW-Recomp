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

// Function: sub_004ED8C8
// Address: 0x4ed8c8 - 0x4ed908
void sub_004ED8C8_0x4ed8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED8C8_0x4ed8c8");
#endif

    switch (ctx->pc) {
        case 0x4ed8e4u: goto label_4ed8e4;
        case 0x4ed8f4u: goto label_4ed8f4;
        default: break;
    }

    ctx->pc = 0x4ed8c8u;

    // 0x4ed8c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed8cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ed8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ed8d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed8d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4ed8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed8dc: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x4ED8DCu;
    SET_GPR_U32(ctx, 31, 0x4ED8E4u);
    ctx->pc = 0x4ED8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED8DCu;
    // 0x4ed8e0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x4ED8DCu, 0x4ED8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED8E4u;
label_4ed8e4:
    // 0x4ed8e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ed8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed8e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ed8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed8ec: 0xc1083ec  jal         func_420FB0
    ctx->pc = 0x4ED8ECu;
    SET_GPR_U32(ctx, 31, 0x4ED8F4u);
    ctx->pc = 0x4ED8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED8ECu;
    // 0x4ed8f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420FB0u, 0x4ED8ECu, 0x4ED8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED8F4u;
label_4ed8f4:
    // 0x4ed8f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ed8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed8f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed900: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED900u;
        // 0x4ed904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED908u;
}
