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

// Function: sub_0041B4F0
// Address: 0x41b4f0 - 0x41b520
void sub_0041B4F0_0x41b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B4F0_0x41b4f0");
#endif

    switch (ctx->pc) {
        case 0x41b508u: goto label_41b508;
        default: break;
    }

    ctx->pc = 0x41b4f0u;

    // 0x41b4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41b4f4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x41B4F4u;
    {
        const bool branch_taken_0x41b4f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4F4u;
        // 0x41b4f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b4f4) {
            ctx->pc = 0x41B510u;
            goto label_41b510;
        }
    }
    ctx->pc = 0x41B4FCu;
    // 0x41b4fc: 0x248402fc  addiu       $a0, $a0, 0x2FC
    ctx->pc = 0x41b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 764));
    // 0x41b500: 0xc10c4de  jal         func_431378
    ctx->pc = 0x41B500u;
    SET_GPR_U32(ctx, 31, 0x41B508u);
    ctx->pc = 0x41B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B500u;
    // 0x41b504: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x41B500u, 0x41B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B508u;
label_41b508:
    // 0x41b508: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x41B508u;
    {
        const bool branch_taken_0x41b508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B508u;
        // 0x41b50c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b508) {
            ctx->pc = 0x41B518u;
            goto label_41b518;
        }
    }
    ctx->pc = 0x41B510u;
label_41b510:
    // 0x41b510: 0xa08002fc  sb          $zero, 0x2FC($a0)
    ctx->pc = 0x41b510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 764), (uint8_t)GPR_U32(ctx, 0));
    // 0x41b514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41b514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41b518:
    // 0x41b518: 0x3e00008  jr          $ra
    ctx->pc = 0x41B518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B518u;
        // 0x41b51c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B520u;
}
