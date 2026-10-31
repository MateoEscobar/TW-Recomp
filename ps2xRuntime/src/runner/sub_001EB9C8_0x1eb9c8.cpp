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

// Function: sub_001EB9C8
// Address: 0x1eb9c8 - 0x1eb9f8
void sub_001EB9C8_0x1eb9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB9C8_0x1eb9c8");
#endif

    switch (ctx->pc) {
        case 0x1eb9e4u: goto label_1eb9e4;
        default: break;
    }

    ctx->pc = 0x1eb9c8u;

    // 0x1eb9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eb9d0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1eb9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1eb9d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB9D4u;
    {
        const bool branch_taken_0x1eb9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9D4u;
        // 0x1eb9d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb9d4) {
            ctx->pc = 0x1EB9E8u;
            goto label_1eb9e8;
        }
    }
    ctx->pc = 0x1EB9DCu;
    // 0x1eb9dc: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1EB9DCu;
    SET_GPR_U32(ctx, 31, 0x1EB9E4u);
    ctx->pc = 0x1EB9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB9DCu;
    // 0x1eb9e0: 0x8c850090  lw          $a1, 0x90($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1EB9DCu, 0x1EB9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB9E4u;
label_1eb9e4:
    // 0x1eb9e4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1eb9e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1eb9e8:
    // 0x1eb9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb9ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1eb9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9F0u;
        // 0x1eb9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB9F8u;
}
