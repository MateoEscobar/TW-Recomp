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

// Function: sub_004AEA20
// Address: 0x4aea20 - 0x4aea78
void sub_004AEA20_0x4aea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AEA20_0x4aea20");
#endif

    switch (ctx->pc) {
        case 0x4aea44u: goto label_4aea44;
        case 0x4aea60u: goto label_4aea60;
        default: break;
    }

    ctx->pc = 0x4aea20u;

    // 0x4aea20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4aea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4aea24: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4aea24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4aea28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aea2c: 0x8c625ad0  lw          $v0, 0x5AD0($v1)
    ctx->pc = 0x4aea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715AD0u));
    // 0x4aea30: 0x24705ad0  addiu       $s0, $v1, 0x5AD0
    ctx->pc = 0x4aea30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23248));
    // 0x4aea34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4AEA34u;
    {
        const bool branch_taken_0x4aea34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA34u;
        // 0x4aea38: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aea34) {
            ctx->pc = 0x4AEA60u;
            goto label_4aea60;
        }
    }
    ctx->pc = 0x4AEA3Cu;
    // 0x4aea3c: 0xc12c1ee  jal         func_4B07B8
    ctx->pc = 0x4AEA3Cu;
    SET_GPR_U32(ctx, 31, 0x4AEA44u);
    ctx->pc = 0x4B07B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B07B8u, 0x4AEA3Cu, 0x4AEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEA44u;
label_4aea44:
    // 0x4aea44: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4aea44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4aea48: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4aea48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4aea4c: 0x24a50520  addiu       $a1, $a1, 0x520
    ctx->pc = 0x4aea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1312));
    // 0x4aea50: 0x24c60530  addiu       $a2, $a2, 0x530
    ctx->pc = 0x4aea50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1328));
    // 0x4aea54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aea54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aea58: 0xc10bbee  jal         func_42EFB8
    ctx->pc = 0x4AEA58u;
    SET_GPR_U32(ctx, 31, 0x4AEA60u);
    ctx->pc = 0x4AEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AEA58u;
    // 0x4aea5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFB8u, 0x4AEA58u, 0x4AEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AEA60u;
label_4aea60:
    // 0x4aea60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aea60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aea64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4aea64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aea68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aea68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aea6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AEA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AEA6Cu;
        // 0x4aea70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AEA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AEA74u;
    // 0x4aea74: 0x0  nop
    ctx->pc = 0x4aea74u;
    // NOP
    ctx->pc = 0x4aea78u;
}
