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

// Function: sub_0042C9B0
// Address: 0x42c9b0 - 0x42c9d8
void sub_0042C9B0_0x42c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C9B0_0x42c9b0");
#endif

    switch (ctx->pc) {
        case 0x42c9b0u: goto label_42c9b0;
        case 0x42c9b4u: goto label_42c9b4;
        case 0x42c9b8u: goto label_42c9b8;
        case 0x42c9bcu: goto label_42c9bc;
        case 0x42c9c0u: goto label_42c9c0;
        case 0x42c9c4u: goto label_42c9c4;
        case 0x42c9c8u: goto label_42c9c8;
        case 0x42c9ccu: goto label_42c9cc;
        case 0x42c9d0u: goto label_42c9d0;
        case 0x42c9d4u: goto label_42c9d4;
        default: break;
    }

    ctx->pc = 0x42c9b0u;

label_42c9b0:
    // 0x42c9b0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x42c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_42c9b4:
    // 0x42c9b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42c9b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_42c9b8:
    // 0x42c9b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x42c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_42c9bc:
    // 0x42c9bc: 0x2442c9d8  addiu       $v0, $v0, -0x3628
    ctx->pc = 0x42c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953432));
label_42c9c0:
    // 0x42c9c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42c9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42c9c4:
    // 0x42c9c4: 0x40f809  jalr        $v0
label_42c9c8:
    if (ctx->pc == 0x42C9C8u) {
        ctx->pc = 0x42C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C9C4u;
        // 0x42c9c8: 0xac6254c8  sw          $v0, 0x54C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42C9CCu;
        goto label_42c9cc;
    }
    ctx->pc = 0x42C9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42C9CCu);
        ctx->pc = 0x42C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C9C4u;
        // 0x42c9c8: 0xac6254c8  sw          $v0, 0x54C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C9C4u, 0x42C9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42C9CCu;
label_42c9cc:
    // 0x42c9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42c9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42c9d0:
    // 0x42c9d0: 0x3e00008  jr          $ra
label_42c9d4:
    if (ctx->pc == 0x42C9D4u) {
        ctx->pc = 0x42C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C9D0u;
        // 0x42c9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42C9D8u;
        goto label_fallthrough_0x42c9d0;
    }
    ctx->pc = 0x42C9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C9D0u;
        // 0x42c9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x42c9d0:
    ctx->pc = 0x42C9D8u;
}
