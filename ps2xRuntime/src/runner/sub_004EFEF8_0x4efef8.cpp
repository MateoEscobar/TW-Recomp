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

// Function: sub_004EFEF8
// Address: 0x4efef8 - 0x4eff28
void sub_004EFEF8_0x4efef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EFEF8_0x4efef8");
#endif

    switch (ctx->pc) {
        case 0x4efef8u: goto label_4efef8;
        case 0x4efefcu: goto label_4efefc;
        case 0x4eff00u: goto label_4eff00;
        case 0x4eff04u: goto label_4eff04;
        case 0x4eff08u: goto label_4eff08;
        case 0x4eff0cu: goto label_4eff0c;
        case 0x4eff10u: goto label_4eff10;
        case 0x4eff14u: goto label_4eff14;
        case 0x4eff18u: goto label_4eff18;
        case 0x4eff1cu: goto label_4eff1c;
        case 0x4eff20u: goto label_4eff20;
        case 0x4eff24u: goto label_4eff24;
        default: break;
    }

    ctx->pc = 0x4efef8u;

label_4efef8:
    // 0x4efef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4efef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4efefc:
    // 0x4efefc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4efefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eff00:
    // 0x4eff00: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4eff00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4eff04:
    // 0x4eff04: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4eff04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4eff08:
    // 0x4eff08: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4eff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4eff0c:
    // 0x4eff0c: 0x40f809  jalr        $v0
label_4eff10:
    if (ctx->pc == 0x4EFF10u) {
        ctx->pc = 0x4EFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFF0Cu;
        // 0x4eff10: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFF14u;
        goto label_4eff14;
    }
    ctx->pc = 0x4EFF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4EFF14u);
        ctx->pc = 0x4EFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFF0Cu;
        // 0x4eff10: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFF0Cu, 0x4EFF14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EFF14u;
label_4eff14:
    // 0x4eff14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eff14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eff18:
    // 0x4eff18: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4eff18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4eff1c:
    // 0x4eff1c: 0x3e00008  jr          $ra
label_4eff20:
    if (ctx->pc == 0x4EFF20u) {
        ctx->pc = 0x4EFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFF1Cu;
        // 0x4eff20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EFF24u;
        goto label_4eff24;
    }
    ctx->pc = 0x4EFF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EFF1Cu;
        // 0x4eff20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EFF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EFF24u;
label_4eff24:
    // 0x4eff24: 0x0  nop
    ctx->pc = 0x4eff24u;
    // NOP
    ctx->pc = 0x4eff28u;
}
