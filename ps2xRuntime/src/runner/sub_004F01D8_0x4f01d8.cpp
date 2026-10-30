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

// Function: sub_004F01D8
// Address: 0x4f01d8 - 0x4f0208
void sub_004F01D8_0x4f01d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F01D8_0x4f01d8");
#endif

    switch (ctx->pc) {
        case 0x4f01d8u: goto label_4f01d8;
        case 0x4f01dcu: goto label_4f01dc;
        case 0x4f01e0u: goto label_4f01e0;
        case 0x4f01e4u: goto label_4f01e4;
        case 0x4f01e8u: goto label_4f01e8;
        case 0x4f01ecu: goto label_4f01ec;
        case 0x4f01f0u: goto label_4f01f0;
        case 0x4f01f4u: goto label_4f01f4;
        case 0x4f01f8u: goto label_4f01f8;
        case 0x4f01fcu: goto label_4f01fc;
        case 0x4f0200u: goto label_4f0200;
        case 0x4f0204u: goto label_4f0204;
        default: break;
    }

    ctx->pc = 0x4f01d8u;

label_4f01d8:
    // 0x4f01d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f01d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4f01dc:
    // 0x4f01dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f01dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f01e0:
    // 0x4f01e0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4f01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4f01e4:
    // 0x4f01e4: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x4f01e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4f01e8:
    // 0x4f01e8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4f01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4f01ec:
    // 0x4f01ec: 0x40f809  jalr        $v0
label_4f01f0:
    if (ctx->pc == 0x4F01F0u) {
        ctx->pc = 0x4F01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F01ECu;
        // 0x4f01f0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F01F4u;
        goto label_4f01f4;
    }
    ctx->pc = 0x4F01ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F01F4u);
        ctx->pc = 0x4F01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F01ECu;
        // 0x4f01f0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F01ECu, 0x4F01F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F01F4u;
label_4f01f4:
    // 0x4f01f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f01f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f01f8:
    // 0x4f01f8: 0x28420012  slti        $v0, $v0, 0x12
    ctx->pc = 0x4f01f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)18) ? 1 : 0);
label_4f01fc:
    // 0x4f01fc: 0x3e00008  jr          $ra
label_4f0200:
    if (ctx->pc == 0x4F0200u) {
        ctx->pc = 0x4F0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F01FCu;
        // 0x4f0200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0204u;
        goto label_4f0204;
    }
    ctx->pc = 0x4F01FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F01FCu;
        // 0x4f0200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F01FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0204u;
label_4f0204:
    // 0x4f0204: 0x0  nop
    ctx->pc = 0x4f0204u;
    // NOP
    ctx->pc = 0x4f0208u;
}
