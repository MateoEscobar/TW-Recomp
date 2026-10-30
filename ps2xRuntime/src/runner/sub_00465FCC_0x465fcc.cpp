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

// Function: sub_00465FCC
// Address: 0x465fcc - 0x465fe8
void sub_00465FCC_0x465fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465FCC_0x465fcc");
#endif

    switch (ctx->pc) {
        case 0x465fdcu: goto label_465fdc;
        default: break;
    }

    ctx->pc = 0x465fccu;

    // 0x465fcc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x465fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x465fd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x465fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x465fd4: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x465fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
    // 0x465fd8: 0xfca00038  sd          $zero, 0x38($a1)
    ctx->pc = 0x465fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 0));
label_465fdc:
    // 0x465fdc: 0xfca20028  sd          $v0, 0x28($a1)
    ctx->pc = 0x465fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
    // 0x465fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x465FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465FE0u;
        // 0x465fe4: 0xfca00030  sd          $zero, 0x30($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465FE8u;
}
