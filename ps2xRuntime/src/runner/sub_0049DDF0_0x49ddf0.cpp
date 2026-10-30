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

// Function: sub_0049DDF0
// Address: 0x49ddf0 - 0x49de30
void sub_0049DDF0_0x49ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DDF0_0x49ddf0");
#endif

    switch (ctx->pc) {
        case 0x49de08u: goto label_49de08;
        case 0x49de20u: goto label_49de20;
        default: break;
    }

    ctx->pc = 0x49ddf0u;

    // 0x49ddf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ddf4: 0x8f848a60  lw          $a0, -0x75A0($gp)
    ctx->pc = 0x49ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937184)));
    // 0x49ddf8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49DDF8u;
    {
        const bool branch_taken_0x49ddf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DDF8u;
        // 0x49ddfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ddf8) {
            ctx->pc = 0x49DE0Cu;
            goto label_49de0c;
        }
    }
    ctx->pc = 0x49DE00u;
    // 0x49de00: 0xc121888  jal         func_486220
    ctx->pc = 0x49DE00u;
    SET_GPR_U32(ctx, 31, 0x49DE08u);
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x49DE00u, 0x49DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DE08u;
label_49de08:
    // 0x49de08: 0xaf808a60  sw          $zero, -0x75A0($gp)
    ctx->pc = 0x49de08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937184), GPR_U32(ctx, 0));
label_49de0c:
    // 0x49de0c: 0x8f848a64  lw          $a0, -0x759C($gp)
    ctx->pc = 0x49de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x49de10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49DE10u;
    {
        const bool branch_taken_0x49de10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE10u;
        // 0x49de14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49de10) {
            ctx->pc = 0x49DE28u;
            goto label_49de28;
        }
    }
    ctx->pc = 0x49DE18u;
    // 0x49de18: 0xc121888  jal         func_486220
    ctx->pc = 0x49DE18u;
    SET_GPR_U32(ctx, 31, 0x49DE20u);
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x49DE18u, 0x49DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DE20u;
label_49de20:
    // 0x49de20: 0xaf808a64  sw          $zero, -0x759C($gp)
    ctx->pc = 0x49de20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937188), GPR_U32(ctx, 0));
    // 0x49de24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49de24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49de28:
    // 0x49de28: 0x3e00008  jr          $ra
    ctx->pc = 0x49DE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE28u;
        // 0x49de2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DE30u;
}
