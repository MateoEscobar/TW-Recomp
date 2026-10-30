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

// Function: sub_003E4030
// Address: 0x3e4030 - 0x3e4058
void sub_003E4030_0x3e4030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4030_0x3e4030");
#endif

    switch (ctx->pc) {
        case 0x3e4030u: goto label_3e4030;
        case 0x3e4034u: goto label_3e4034;
        case 0x3e4038u: goto label_3e4038;
        case 0x3e403cu: goto label_3e403c;
        case 0x3e4040u: goto label_3e4040;
        case 0x3e4044u: goto label_3e4044;
        case 0x3e4048u: goto label_3e4048;
        case 0x3e404cu: goto label_3e404c;
        case 0x3e4050u: goto label_3e4050;
        case 0x3e4054u: goto label_3e4054;
        default: break;
    }

    ctx->pc = 0x3e4030u;

label_3e4030:
    // 0x3e4030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e4030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e4034:
    // 0x3e4034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e4034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e4038:
    // 0x3e4038: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e4038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e403c:
    // 0x3e403c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3e403cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e4040:
    // 0x3e4040: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e4040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e4044:
    // 0x3e4044: 0x40f809  jalr        $v0
label_3e4048:
    if (ctx->pc == 0x3E4048u) {
        ctx->pc = 0x3E4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4044u;
        // 0x3e4048: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E404Cu;
        goto label_3e404c;
    }
    ctx->pc = 0x3E4044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E404Cu);
        ctx->pc = 0x3E4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4044u;
        // 0x3e4048: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4044u, 0x3E404Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E404Cu;
label_3e404c:
    // 0x3e404c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e404cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e4050:
    // 0x3e4050: 0x3e00008  jr          $ra
label_3e4054:
    if (ctx->pc == 0x3E4054u) {
        ctx->pc = 0x3E4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4050u;
        // 0x3e4054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4058u;
        goto label_fallthrough_0x3e4050;
    }
    ctx->pc = 0x3E4050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4050u;
        // 0x3e4054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e4050:
    ctx->pc = 0x3E4058u;
}
