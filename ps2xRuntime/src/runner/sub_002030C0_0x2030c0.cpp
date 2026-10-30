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

// Function: sub_002030C0
// Address: 0x2030c0 - 0x2030f0
void sub_002030C0_0x2030c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002030C0_0x2030c0");
#endif

    switch (ctx->pc) {
        case 0x2030e4u: goto label_2030e4;
        default: break;
    }

    ctx->pc = 0x2030c0u;

    // 0x2030c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2030c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2030c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2030c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2030c8: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2030C8u;
    {
        const bool branch_taken_0x2030c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2030CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030C8u;
        // 0x2030cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030c8) {
            ctx->pc = 0x2030E4u;
            goto label_2030e4;
        }
    }
    ctx->pc = 0x2030D0u;
    // 0x2030d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2030D0u;
    {
        const bool branch_taken_0x2030d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030D0u;
        // 0x2030d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030d0) {
            ctx->pc = 0x2030E8u;
            goto label_2030e8;
        }
    }
    ctx->pc = 0x2030D8u;
    // 0x2030d8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2030d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2030dc: 0xc080a6a  jal         func_2029A8
    ctx->pc = 0x2030DCu;
    SET_GPR_U32(ctx, 31, 0x2030E4u);
    ctx->pc = 0x2030E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030DCu;
    // 0x2030e0: 0x2484ef80  addiu       $a0, $a0, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2029A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2029A8u, 0x2030DCu, 0x2030E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030E4u;
label_2030e4:
    // 0x2030e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2030e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2030e8:
    // 0x2030e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2030E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2030ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030E8u;
        // 0x2030ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2030E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2030F0u;
}
