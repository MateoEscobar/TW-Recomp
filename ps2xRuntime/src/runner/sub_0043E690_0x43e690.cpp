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

// Function: sub_0043E690
// Address: 0x43e690 - 0x43e6c8
void sub_0043E690_0x43e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E690_0x43e690");
#endif

    switch (ctx->pc) {
        case 0x43e698u: goto label_43e698;
        default: break;
    }

    ctx->pc = 0x43e690u;

    // 0x43e690: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x43e690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x43e694: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x43e694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_43e698:
    // 0x43e698: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x43e698u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x43e69c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x43e69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x43e6a0: 0x0  nop
    ctx->pc = 0x43e6a0u;
    // NOP
    // 0x43e6a4: 0x0  nop
    ctx->pc = 0x43e6a4u;
    // NOP
    // 0x43e6a8: 0x0  nop
    ctx->pc = 0x43e6a8u;
    // NOP
    // 0x43e6ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x43E6ACu;
    {
        const bool branch_taken_0x43e6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43e6ac) {
            ctx->pc = 0x43E698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43e698;
        }
    }
    ctx->pc = 0x43E6B4u;
    // 0x43e6b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x43e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x43e6b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x43e6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43e6bc: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x43e6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x43e6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x43E6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E6C0u;
        // 0x43e6c4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43E6C8u;
}
