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

// Function: sub_001A21B8
// Address: 0x1a21b8 - 0x1a21e8
void sub_001A21B8_0x1a21b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A21B8_0x1a21b8");
#endif

    switch (ctx->pc) {
        case 0x1a21b8u: goto label_1a21b8;
        case 0x1a21bcu: goto label_1a21bc;
        case 0x1a21c0u: goto label_1a21c0;
        case 0x1a21c4u: goto label_1a21c4;
        case 0x1a21c8u: goto label_1a21c8;
        case 0x1a21ccu: goto label_1a21cc;
        case 0x1a21d0u: goto label_1a21d0;
        case 0x1a21d4u: goto label_1a21d4;
        case 0x1a21d8u: goto label_1a21d8;
        case 0x1a21dcu: goto label_1a21dc;
        case 0x1a21e0u: goto label_1a21e0;
        case 0x1a21e4u: goto label_1a21e4;
        default: break;
    }

    ctx->pc = 0x1a21b8u;

label_1a21b8:
    // 0x1a21b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a21b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a21bc:
    // 0x1a21bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a21bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a21c0:
    // 0x1a21c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a21c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a21c4:
    // 0x1a21c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a21c8:
    // 0x1a21c8: 0x84430098  lh          $v1, 0x98($v0)
    ctx->pc = 0x1a21c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1a21cc:
    // 0x1a21cc: 0x8c46009c  lw          $a2, 0x9C($v0)
    ctx->pc = 0x1a21ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1a21d0:
    // 0x1a21d0: 0xc0f809  jalr        $a2
label_1a21d4:
    if (ctx->pc == 0x1A21D4u) {
        ctx->pc = 0x1A21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21D0u;
        // 0x1a21d4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A21D8u;
        goto label_1a21d8;
    }
    ctx->pc = 0x1A21D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A21D8u);
        ctx->pc = 0x1A21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21D0u;
        // 0x1a21d4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A21D0u, 0x1A21D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A21D8u;
label_1a21d8:
    // 0x1a21d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a21d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a21dc:
    // 0x1a21dc: 0x3e00008  jr          $ra
label_1a21e0:
    if (ctx->pc == 0x1A21E0u) {
        ctx->pc = 0x1A21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21DCu;
        // 0x1a21e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A21E4u;
        goto label_1a21e4;
    }
    ctx->pc = 0x1A21DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A21E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21DCu;
        // 0x1a21e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A21DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A21E4u;
label_1a21e4:
    // 0x1a21e4: 0x0  nop
    ctx->pc = 0x1a21e4u;
    // NOP
    ctx->pc = 0x1a21e8u;
}
