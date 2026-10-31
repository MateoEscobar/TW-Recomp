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

// Function: sub_00253170
// Address: 0x253170 - 0x253190
void sub_00253170_0x253170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253170_0x253170");
#endif

    switch (ctx->pc) {
        case 0x253184u: goto label_253184;
        default: break;
    }

    ctx->pc = 0x253170u;

    // 0x253170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x253174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25317c: 0xc094c46  jal         func_253118
    ctx->pc = 0x25317Cu;
    SET_GPR_U32(ctx, 31, 0x253184u);
    ctx->pc = 0x253180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25317Cu;
    // 0x253180: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x253118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253118u, 0x25317Cu, 0x253184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253184u;
label_253184:
    // 0x253184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253188: 0x3e00008  jr          $ra
    ctx->pc = 0x253188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253188u;
        // 0x25318c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253190u;
}
