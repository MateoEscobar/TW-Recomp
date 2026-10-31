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

// Function: sub_0011B3C0
// Address: 0x11b3c0 - 0x11b3f8
void sub_0011B3C0_0x11b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B3C0_0x11b3c0");
#endif

    switch (ctx->pc) {
        case 0x11b3c0u: goto label_11b3c0;
        case 0x11b3c4u: goto label_11b3c4;
        case 0x11b3c8u: goto label_11b3c8;
        case 0x11b3ccu: goto label_11b3cc;
        case 0x11b3d0u: goto label_11b3d0;
        case 0x11b3d4u: goto label_11b3d4;
        case 0x11b3d8u: goto label_11b3d8;
        case 0x11b3dcu: goto label_11b3dc;
        case 0x11b3e0u: goto label_11b3e0;
        case 0x11b3e4u: goto label_11b3e4;
        case 0x11b3e8u: goto label_11b3e8;
        case 0x11b3ecu: goto label_11b3ec;
        case 0x11b3f0u: goto label_11b3f0;
        case 0x11b3f4u: goto label_11b3f4;
        default: break;
    }

    ctx->pc = 0x11b3c0u;

label_11b3c0:
    // 0x11b3c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11b3c4:
    // 0x11b3c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11b3c8:
    // 0x11b3c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11b3cc:
    // 0x11b3cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11b3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b3d0:
    // 0x11b3d0: 0x8c46bce4  lw          $a2, -0x431C($v0)
    ctx->pc = 0x11b3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_11b3d4:
    // 0x11b3d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x11b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11b3d8:
    // 0x11b3d8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x11b3d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_11b3dc:
    // 0x11b3dc: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x11b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_11b3e0:
    // 0x11b3e0: 0x40f809  jalr        $v0
label_11b3e4:
    if (ctx->pc == 0x11B3E4u) {
        ctx->pc = 0x11B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3E0u;
        // 0x11b3e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B3E8u;
        goto label_11b3e8;
    }
    ctx->pc = 0x11B3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11B3E8u);
        ctx->pc = 0x11B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3E0u;
        // 0x11b3e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B3E0u, 0x11B3E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B3E8u;
label_11b3e8:
    // 0x11b3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b3ec:
    // 0x11b3ec: 0x3e00008  jr          $ra
label_11b3f0:
    if (ctx->pc == 0x11B3F0u) {
        ctx->pc = 0x11B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3ECu;
        // 0x11b3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B3F4u;
        goto label_11b3f4;
    }
    ctx->pc = 0x11B3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3ECu;
        // 0x11b3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B3F4u;
label_11b3f4:
    // 0x11b3f4: 0x0  nop
    ctx->pc = 0x11b3f4u;
    // NOP
    ctx->pc = 0x11b3f8u;
}
