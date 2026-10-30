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

// Function: sub_004A51B8
// Address: 0x4a51b8 - 0x4a51e0
void sub_004A51B8_0x4a51b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A51B8_0x4a51b8");
#endif

    switch (ctx->pc) {
        case 0x4a51ccu: goto label_4a51cc;
        default: break;
    }

    ctx->pc = 0x4a51b8u;

    // 0x4a51b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a51b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a51bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a51bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a51c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a51c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a51c4: 0xc1295b6  jal         func_4A56D8
    ctx->pc = 0x4A51C4u;
    SET_GPR_U32(ctx, 31, 0x4A51CCu);
    ctx->pc = 0x4A51C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A51C4u;
    // 0x4a51c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A56D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A56D8u, 0x4A51C4u, 0x4A51CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A51CCu;
label_4a51cc:
    // 0x4a51cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a51ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a51d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a51d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a51d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a51d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a51d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A51D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A51D8u;
        // 0x4a51dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A51D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A51E0u;
}
