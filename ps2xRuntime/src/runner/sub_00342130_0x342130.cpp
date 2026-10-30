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

// Function: sub_00342130
// Address: 0x342130 - 0x342158
void sub_00342130_0x342130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342130_0x342130");
#endif

    switch (ctx->pc) {
        case 0x342140u: goto label_342140;
        default: break;
    }

    ctx->pc = 0x342130u;

    // 0x342130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342138: 0xc0866c2  jal         func_219B08
    ctx->pc = 0x342138u;
    SET_GPR_U32(ctx, 31, 0x342140u);
    ctx->pc = 0x34213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342138u;
    // 0x34213c: 0x8c840034  lw          $a0, 0x34($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219B08u, 0x342138u, 0x342140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342140u;
label_342140:
    // 0x342140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342144: 0x3e00008  jr          $ra
    ctx->pc = 0x342144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342144u;
        // 0x342148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34214Cu;
    // 0x34214c: 0x0  nop
    ctx->pc = 0x34214cu;
    // NOP
    // 0x342150: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x342150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x342154: 0x0  nop
    ctx->pc = 0x342154u;
    // NOP
    ctx->pc = 0x342158u;
}
