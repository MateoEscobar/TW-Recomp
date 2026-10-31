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

// Function: sub_00144050
// Address: 0x144050 - 0x144080
void sub_00144050_0x144050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144050_0x144050");
#endif

    switch (ctx->pc) {
        case 0x144074u: goto label_144074;
        default: break;
    }

    ctx->pc = 0x144050u;

    // 0x144050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144054: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x144054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x144058: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x144058u;
    {
        const bool branch_taken_0x144058 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144058u;
        // 0x14405c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144058) {
            ctx->pc = 0x144074u;
            goto label_144074;
        }
    }
    ctx->pc = 0x144060u;
    // 0x144060: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144060u;
    {
        const bool branch_taken_0x144060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x144064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144060u;
        // 0x144064: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144060) {
            ctx->pc = 0x144078u;
            goto label_144078;
        }
    }
    ctx->pc = 0x144068u;
    // 0x144068: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x144068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x14406c: 0xc050fa8  jal         func_143EA0
    ctx->pc = 0x14406Cu;
    SET_GPR_U32(ctx, 31, 0x144074u);
    ctx->pc = 0x144070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14406Cu;
    // 0x144070: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143EA0u, 0x14406Cu, 0x144074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144074u;
label_144074:
    // 0x144074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_144078:
    // 0x144078: 0x3e00008  jr          $ra
    ctx->pc = 0x144078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144078u;
        // 0x14407c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144080u;
}
