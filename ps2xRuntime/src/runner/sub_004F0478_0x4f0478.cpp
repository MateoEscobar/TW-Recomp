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

// Function: sub_004F0478
// Address: 0x4f0478 - 0x4f04a8
void sub_004F0478_0x4f0478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0478_0x4f0478");
#endif

    switch (ctx->pc) {
        case 0x4f049cu: goto label_4f049c;
        default: break;
    }

    ctx->pc = 0x4f0478u;

    // 0x4f0478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f047c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f047cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4f0480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f0484: 0x24424258  addiu       $v0, $v0, 0x4258
    ctx->pc = 0x4f0484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16984));
    // 0x4f0488: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4f0488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4f048c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F048Cu;
    {
        const bool branch_taken_0x4f048c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F048Cu;
        // 0x4f0490: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f048c) {
            ctx->pc = 0x4F049Cu;
            goto label_4f049c;
        }
    }
    ctx->pc = 0x4F0494u;
    // 0x4f0494: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4F0494u;
    SET_GPR_U32(ctx, 31, 0x4F049Cu);
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F0494u, 0x4F049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F049Cu;
label_4f049c:
    // 0x4f049c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f049cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f04a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F04A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F04A0u;
        // 0x4f04a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F04A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F04A8u;
}
