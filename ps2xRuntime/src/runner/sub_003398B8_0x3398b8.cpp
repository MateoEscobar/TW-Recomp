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

// Function: sub_003398B8
// Address: 0x3398b8 - 0x3398f0
void sub_003398B8_0x3398b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003398B8_0x3398b8");
#endif

    switch (ctx->pc) {
        case 0x3398b8u: goto label_3398b8;
        case 0x3398bcu: goto label_3398bc;
        case 0x3398c0u: goto label_3398c0;
        case 0x3398c4u: goto label_3398c4;
        case 0x3398c8u: goto label_3398c8;
        case 0x3398ccu: goto label_3398cc;
        case 0x3398d0u: goto label_3398d0;
        case 0x3398d4u: goto label_3398d4;
        case 0x3398d8u: goto label_3398d8;
        case 0x3398dcu: goto label_3398dc;
        case 0x3398e0u: goto label_3398e0;
        case 0x3398e4u: goto label_3398e4;
        case 0x3398e8u: goto label_3398e8;
        case 0x3398ecu: goto label_3398ec;
        default: break;
    }

    ctx->pc = 0x3398b8u;

label_3398b8:
    // 0x3398b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3398b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3398bc:
    // 0x3398bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3398bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3398c0:
    // 0x3398c0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3398c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3398c4:
    // 0x3398c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3398c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3398c8:
    // 0x3398c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3398c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3398cc:
    // 0x3398cc: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x3398ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3398d0:
    // 0x3398d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3398d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3398d4:
    // 0x3398d4: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x3398d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_3398d8:
    // 0x3398d8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x3398d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_3398dc:
    // 0x3398dc: 0x40f809  jalr        $v0
label_3398e0:
    if (ctx->pc == 0x3398E0u) {
        ctx->pc = 0x3398E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398DCu;
        // 0x3398e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3398E4u;
        goto label_3398e4;
    }
    ctx->pc = 0x3398DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3398E4u);
        ctx->pc = 0x3398E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398DCu;
        // 0x3398e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3398DCu, 0x3398E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3398E4u;
label_3398e4:
    // 0x3398e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3398e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3398e8:
    // 0x3398e8: 0x3e00008  jr          $ra
label_3398ec:
    if (ctx->pc == 0x3398ECu) {
        ctx->pc = 0x3398ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398E8u;
        // 0x3398ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3398F0u;
        goto label_fallthrough_0x3398e8;
    }
    ctx->pc = 0x3398E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3398ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398E8u;
        // 0x3398ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3398E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3398e8:
    ctx->pc = 0x3398F0u;
}
