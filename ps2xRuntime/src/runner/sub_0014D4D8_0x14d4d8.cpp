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

// Function: sub_0014D4D8
// Address: 0x14d4d8 - 0x14d508
void sub_0014D4D8_0x14d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D4D8_0x14d4d8");
#endif

    switch (ctx->pc) {
        case 0x14d4fcu: goto label_14d4fc;
        default: break;
    }

    ctx->pc = 0x14d4d8u;

    // 0x14d4d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d4dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14d4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14d4e0: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D4E0u;
    {
        const bool branch_taken_0x14d4e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4E0u;
        // 0x14d4e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4e0) {
            ctx->pc = 0x14D4FCu;
            goto label_14d4fc;
        }
    }
    ctx->pc = 0x14D4E8u;
    // 0x14d4e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D4E8u;
    {
        const bool branch_taken_0x14d4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4E8u;
        // 0x14d4ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4e8) {
            ctx->pc = 0x14D500u;
            goto label_14d500;
        }
    }
    ctx->pc = 0x14D4F0u;
    // 0x14d4f0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14d4f4: 0xc052e86  jal         func_14BA18
    ctx->pc = 0x14D4F4u;
    SET_GPR_U32(ctx, 31, 0x14D4FCu);
    ctx->pc = 0x14D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D4F4u;
    // 0x14d4f8: 0x2484f1e0  addiu       $a0, $a0, -0xE20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BA18u, 0x14D4F4u, 0x14D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D4FCu;
label_14d4fc:
    // 0x14d4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d500:
    // 0x14d500: 0x3e00008  jr          $ra
    ctx->pc = 0x14D500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D500u;
        // 0x14d504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D508u;
}
