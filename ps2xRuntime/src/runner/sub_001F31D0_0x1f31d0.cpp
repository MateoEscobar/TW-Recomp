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

// Function: sub_001F31D0
// Address: 0x1f31d0 - 0x1f31f8
void sub_001F31D0_0x1f31d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F31D0_0x1f31d0");
#endif

    switch (ctx->pc) {
        case 0x1f31d0u: goto label_1f31d0;
        case 0x1f31d4u: goto label_1f31d4;
        case 0x1f31d8u: goto label_1f31d8;
        case 0x1f31dcu: goto label_1f31dc;
        case 0x1f31e0u: goto label_1f31e0;
        case 0x1f31e4u: goto label_1f31e4;
        case 0x1f31e8u: goto label_1f31e8;
        case 0x1f31ecu: goto label_1f31ec;
        case 0x1f31f0u: goto label_1f31f0;
        case 0x1f31f4u: goto label_1f31f4;
        default: break;
    }

    ctx->pc = 0x1f31d0u;

label_1f31d0:
    // 0x1f31d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f31d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f31d4:
    // 0x1f31d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f31d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f31d8:
    // 0x1f31d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f31dc:
    // 0x1f31dc: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1f31dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f31e0:
    // 0x1f31e0: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x1f31e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f31e4:
    // 0x1f31e4: 0xa0f809  jalr        $a1
label_1f31e8:
    if (ctx->pc == 0x1F31E8u) {
        ctx->pc = 0x1F31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31E4u;
        // 0x1f31e8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31ECu;
        goto label_1f31ec;
    }
    ctx->pc = 0x1F31E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F31ECu);
        ctx->pc = 0x1F31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31E4u;
        // 0x1f31e8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F31E4u, 0x1F31ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F31ECu;
label_1f31ec:
    // 0x1f31ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f31ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f31f0:
    // 0x1f31f0: 0x3e00008  jr          $ra
label_1f31f4:
    if (ctx->pc == 0x1F31F4u) {
        ctx->pc = 0x1F31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31F0u;
        // 0x1f31f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31F8u;
        goto label_fallthrough_0x1f31f0;
    }
    ctx->pc = 0x1F31F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31F0u;
        // 0x1f31f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F31F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f31f0:
    ctx->pc = 0x1F31F8u;
}
