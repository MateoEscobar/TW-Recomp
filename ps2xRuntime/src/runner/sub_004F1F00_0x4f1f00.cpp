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

// Function: sub_004F1F00
// Address: 0x4f1f00 - 0x4f1f30
void sub_004F1F00_0x4f1f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1F00_0x4f1f00");
#endif

    switch (ctx->pc) {
        case 0x4f1f00u: goto label_4f1f00;
        case 0x4f1f04u: goto label_4f1f04;
        case 0x4f1f08u: goto label_4f1f08;
        case 0x4f1f0cu: goto label_4f1f0c;
        case 0x4f1f10u: goto label_4f1f10;
        case 0x4f1f14u: goto label_4f1f14;
        case 0x4f1f18u: goto label_4f1f18;
        case 0x4f1f1cu: goto label_4f1f1c;
        case 0x4f1f20u: goto label_4f1f20;
        case 0x4f1f24u: goto label_4f1f24;
        case 0x4f1f28u: goto label_4f1f28;
        case 0x4f1f2cu: goto label_4f1f2c;
        default: break;
    }

    ctx->pc = 0x4f1f00u;

label_4f1f00:
    // 0x4f1f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f1f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f1f04:
    // 0x4f1f04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f1f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f1f08:
    // 0x4f1f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f1f0c:
    // 0x4f1f0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f1f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f1f10:
    // 0x4f1f10: 0x84660018  lh          $a2, 0x18($v1)
    ctx->pc = 0x4f1f10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_4f1f14:
    // 0x4f1f14: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x4f1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4f1f18:
    // 0x4f1f18: 0x40f809  jalr        $v0
label_4f1f1c:
    if (ctx->pc == 0x4F1F1Cu) {
        ctx->pc = 0x4F1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1F18u;
        // 0x4f1f1c: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1F20u;
        goto label_4f1f20;
    }
    ctx->pc = 0x4F1F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F1F20u);
        ctx->pc = 0x4F1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1F18u;
        // 0x4f1f1c: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1F18u, 0x4F1F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1F20u;
label_4f1f20:
    // 0x4f1f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f1f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f1f24:
    // 0x4f1f24: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4f1f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4f1f28:
    // 0x4f1f28: 0x3e00008  jr          $ra
label_4f1f2c:
    if (ctx->pc == 0x4F1F2Cu) {
        ctx->pc = 0x4F1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1F28u;
        // 0x4f1f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1F30u;
        goto label_fallthrough_0x4f1f28;
    }
    ctx->pc = 0x4F1F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1F28u;
        // 0x4f1f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f1f28:
    ctx->pc = 0x4F1F30u;
}
