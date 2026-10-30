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

// Function: sub_003864B0
// Address: 0x3864b0 - 0x3864e0
void sub_003864B0_0x3864b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003864B0_0x3864b0");
#endif

    switch (ctx->pc) {
        case 0x3864b0u: goto label_3864b0;
        case 0x3864b4u: goto label_3864b4;
        case 0x3864b8u: goto label_3864b8;
        case 0x3864bcu: goto label_3864bc;
        case 0x3864c0u: goto label_3864c0;
        case 0x3864c4u: goto label_3864c4;
        case 0x3864c8u: goto label_3864c8;
        case 0x3864ccu: goto label_3864cc;
        case 0x3864d0u: goto label_3864d0;
        case 0x3864d4u: goto label_3864d4;
        case 0x3864d8u: goto label_3864d8;
        case 0x3864dcu: goto label_3864dc;
        default: break;
    }

    ctx->pc = 0x3864b0u;

label_3864b0:
    // 0x3864b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3864b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3864b4:
    // 0x3864b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3864b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3864b8:
    // 0x3864b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3864b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3864bc:
    // 0x3864bc: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x3864bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_3864c0:
    // 0x3864c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3864c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3864c4:
    // 0x3864c4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x3864c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_3864c8:
    // 0x3864c8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3864c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3864cc:
    // 0x3864cc: 0x40f809  jalr        $v0
label_3864d0:
    if (ctx->pc == 0x3864D0u) {
        ctx->pc = 0x3864D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3864CCu;
        // 0x3864d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3864D4u;
        goto label_3864d4;
    }
    ctx->pc = 0x3864CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3864D4u);
        ctx->pc = 0x3864D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3864CCu;
        // 0x3864d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3864CCu, 0x3864D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3864D4u;
label_3864d4:
    // 0x3864d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3864d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3864d8:
    // 0x3864d8: 0x3e00008  jr          $ra
label_3864dc:
    if (ctx->pc == 0x3864DCu) {
        ctx->pc = 0x3864DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3864D8u;
        // 0x3864dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3864E0u;
        goto label_fallthrough_0x3864d8;
    }
    ctx->pc = 0x3864D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3864DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3864D8u;
        // 0x3864dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3864D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3864d8:
    ctx->pc = 0x3864E0u;
}
