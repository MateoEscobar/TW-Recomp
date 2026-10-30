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

// Function: sub_001233C0
// Address: 0x1233c0 - 0x1233e8
void sub_001233C0_0x1233c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001233C0_0x1233c0");
#endif

    switch (ctx->pc) {
        case 0x1233d8u: goto label_1233d8;
        default: break;
    }

    ctx->pc = 0x1233c0u;

    // 0x1233c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1233c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1233c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1233c8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1233c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1233cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1233ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1233d0: 0xc136bee  jal         func_4DAFB8
    ctx->pc = 0x1233D0u;
    SET_GPR_U32(ctx, 31, 0x1233D8u);
    ctx->pc = 0x1233D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1233D0u;
    // 0x1233d4: 0x24849198  addiu       $a0, $a0, -0x6E68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAFB8u, 0x1233D0u, 0x1233D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233D8u;
label_1233d8:
    // 0x1233d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1233d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1233dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1233DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1233E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233DCu;
        // 0x1233e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1233DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1233E4u;
    // 0x1233e4: 0x0  nop
    ctx->pc = 0x1233e4u;
    // NOP
    ctx->pc = 0x1233e8u;
}
