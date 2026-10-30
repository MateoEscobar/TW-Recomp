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

// Function: sub_002C95D8
// Address: 0x2c95d8 - 0x2c9600
void sub_002C95D8_0x2c95d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C95D8_0x2c95d8");
#endif

    switch (ctx->pc) {
        case 0x2c95d8u: goto label_2c95d8;
        case 0x2c95dcu: goto label_2c95dc;
        case 0x2c95e0u: goto label_2c95e0;
        case 0x2c95e4u: goto label_2c95e4;
        case 0x2c95e8u: goto label_2c95e8;
        case 0x2c95ecu: goto label_2c95ec;
        case 0x2c95f0u: goto label_2c95f0;
        case 0x2c95f4u: goto label_2c95f4;
        case 0x2c95f8u: goto label_2c95f8;
        case 0x2c95fcu: goto label_2c95fc;
        default: break;
    }

    ctx->pc = 0x2c95d8u;

label_2c95d8:
    // 0x2c95d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c95d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c95dc:
    // 0x2c95dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c95dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c95e0:
    // 0x2c95e0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c95e4:
    // 0x2c95e4: 0x84430030  lh          $v1, 0x30($v0)
    ctx->pc = 0x2c95e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2c95e8:
    // 0x2c95e8: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2c95e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2c95ec:
    // 0x2c95ec: 0xa0f809  jalr        $a1
label_2c95f0:
    if (ctx->pc == 0x2C95F0u) {
        ctx->pc = 0x2C95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95ECu;
        // 0x2c95f0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C95F4u;
        goto label_2c95f4;
    }
    ctx->pc = 0x2C95ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C95F4u);
        ctx->pc = 0x2C95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95ECu;
        // 0x2c95f0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C95ECu, 0x2C95F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C95F4u;
label_2c95f4:
    // 0x2c95f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c95f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c95f8:
    // 0x2c95f8: 0x3e00008  jr          $ra
label_2c95fc:
    if (ctx->pc == 0x2C95FCu) {
        ctx->pc = 0x2C95FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95F8u;
        // 0x2c95fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9600u;
        goto label_fallthrough_0x2c95f8;
    }
    ctx->pc = 0x2C95F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C95FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95F8u;
        // 0x2c95fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C95F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c95f8:
    ctx->pc = 0x2C9600u;
}
