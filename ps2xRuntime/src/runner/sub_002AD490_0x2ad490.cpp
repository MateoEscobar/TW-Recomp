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

// Function: sub_002AD490
// Address: 0x2ad490 - 0x2ad4b8
void sub_002AD490_0x2ad490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD490_0x2ad490");
#endif

    switch (ctx->pc) {
        case 0x2ad490u: goto label_2ad490;
        case 0x2ad494u: goto label_2ad494;
        case 0x2ad498u: goto label_2ad498;
        case 0x2ad49cu: goto label_2ad49c;
        case 0x2ad4a0u: goto label_2ad4a0;
        case 0x2ad4a4u: goto label_2ad4a4;
        case 0x2ad4a8u: goto label_2ad4a8;
        case 0x2ad4acu: goto label_2ad4ac;
        case 0x2ad4b0u: goto label_2ad4b0;
        case 0x2ad4b4u: goto label_2ad4b4;
        default: break;
    }

    ctx->pc = 0x2ad490u;

label_2ad490:
    // 0x2ad490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ad494:
    // 0x2ad494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ad498:
    // 0x2ad498: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ad498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ad49c:
    // 0x2ad49c: 0x84430030  lh          $v1, 0x30($v0)
    ctx->pc = 0x2ad49cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_2ad4a0:
    // 0x2ad4a0: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2ad4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2ad4a4:
    // 0x2ad4a4: 0xa0f809  jalr        $a1
label_2ad4a8:
    if (ctx->pc == 0x2AD4A8u) {
        ctx->pc = 0x2AD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD4A4u;
        // 0x2ad4a8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD4ACu;
        goto label_2ad4ac;
    }
    ctx->pc = 0x2AD4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2AD4ACu);
        ctx->pc = 0x2AD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD4A4u;
        // 0x2ad4a8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD4A4u, 0x2AD4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD4ACu;
label_2ad4ac:
    // 0x2ad4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad4b0:
    // 0x2ad4b0: 0x3e00008  jr          $ra
label_2ad4b4:
    if (ctx->pc == 0x2AD4B4u) {
        ctx->pc = 0x2AD4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD4B0u;
        // 0x2ad4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD4B8u;
        goto label_fallthrough_0x2ad4b0;
    }
    ctx->pc = 0x2AD4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD4B0u;
        // 0x2ad4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ad4b0:
    ctx->pc = 0x2AD4B8u;
}
