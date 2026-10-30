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

// Function: sub_004EDFF0
// Address: 0x4edff0 - 0x4ee028
void sub_004EDFF0_0x4edff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EDFF0_0x4edff0");
#endif

    switch (ctx->pc) {
        case 0x4ee014u: goto label_4ee014;
        default: break;
    }

    ctx->pc = 0x4edff0u;

    // 0x4edff0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4edff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4edff4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4edff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4edff8: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x4edff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
    // 0x4edffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4edffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ee000: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4ee000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4ee004: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EE004u;
    {
        const bool branch_taken_0x4ee004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE004u;
        // 0x4ee008: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ee004) {
            ctx->pc = 0x4EE014u;
            goto label_4ee014;
        }
    }
    ctx->pc = 0x4EE00Cu;
    // 0x4ee00c: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4EE00Cu;
    SET_GPR_U32(ctx, 31, 0x4EE014u);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4EE00Cu, 0x4EE014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE014u;
label_4ee014:
    // 0x4ee014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ee014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee018: 0x3e00008  jr          $ra
    ctx->pc = 0x4EE018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EE018u;
        // 0x4ee01c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EE018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EE020u;
    // 0x4ee020: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x4ee020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x4ee024: 0x0  nop
    ctx->pc = 0x4ee024u;
    // NOP
    ctx->pc = 0x4ee028u;
}
