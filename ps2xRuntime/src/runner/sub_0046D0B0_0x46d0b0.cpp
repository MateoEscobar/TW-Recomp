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

// Function: sub_0046D0B0
// Address: 0x46d0b0 - 0x46d0e8
void sub_0046D0B0_0x46d0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D0B0_0x46d0b0");
#endif

    switch (ctx->pc) {
        case 0x46d0dcu: goto label_46d0dc;
        default: break;
    }

    ctx->pc = 0x46d0b0u;

    // 0x46d0b0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x46d0b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d0b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x46d0b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x46d0b8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x46d0b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d0bc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x46d0bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d0c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x46d0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d0c4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x46d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x46d0c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46d0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46d0cc: 0x2444e710  addiu       $a0, $v0, -0x18F0
    ctx->pc = 0x46d0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960912));
    // 0x46d0d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x46d0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d0d4: 0xc11fd86  jal         func_47F618
    ctx->pc = 0x46D0D4u;
    SET_GPR_U32(ctx, 31, 0x46D0DCu);
    ctx->pc = 0x46D0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D0D4u;
    // 0x46d0d8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F618u, 0x46D0D4u, 0x46D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D0DCu;
label_46d0dc:
    // 0x46d0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46d0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x46D0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D0E0u;
        // 0x46d0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D0E8u;
}
