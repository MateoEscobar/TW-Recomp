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

// Function: sub_002C21D0
// Address: 0x2c21d0 - 0x2c21f8
void sub_002C21D0_0x2c21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C21D0_0x2c21d0");
#endif

    switch (ctx->pc) {
        case 0x2c21d0u: goto label_2c21d0;
        case 0x2c21d4u: goto label_2c21d4;
        case 0x2c21d8u: goto label_2c21d8;
        case 0x2c21dcu: goto label_2c21dc;
        case 0x2c21e0u: goto label_2c21e0;
        case 0x2c21e4u: goto label_2c21e4;
        case 0x2c21e8u: goto label_2c21e8;
        case 0x2c21ecu: goto label_2c21ec;
        case 0x2c21f0u: goto label_2c21f0;
        case 0x2c21f4u: goto label_2c21f4;
        default: break;
    }

    ctx->pc = 0x2c21d0u;

label_2c21d0:
    // 0x2c21d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c21d4:
    // 0x2c21d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c21d8:
    // 0x2c21d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c21dc:
    // 0x2c21dc: 0x84430038  lh          $v1, 0x38($v0)
    ctx->pc = 0x2c21dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2c21e0:
    // 0x2c21e0: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2c21e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2c21e4:
    // 0x2c21e4: 0xa0f809  jalr        $a1
label_2c21e8:
    if (ctx->pc == 0x2C21E8u) {
        ctx->pc = 0x2C21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21E4u;
        // 0x2c21e8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C21ECu;
        goto label_2c21ec;
    }
    ctx->pc = 0x2C21E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C21ECu);
        ctx->pc = 0x2C21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21E4u;
        // 0x2c21e8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C21E4u, 0x2C21ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C21ECu;
label_2c21ec:
    // 0x2c21ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c21ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c21f0:
    // 0x2c21f0: 0x3e00008  jr          $ra
label_2c21f4:
    if (ctx->pc == 0x2C21F4u) {
        ctx->pc = 0x2C21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21F0u;
        // 0x2c21f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C21F8u;
        goto label_fallthrough_0x2c21f0;
    }
    ctx->pc = 0x2C21F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21F0u;
        // 0x2c21f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C21F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c21f0:
    ctx->pc = 0x2C21F8u;
}
