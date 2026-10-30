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

// Function: sub_004E91C0
// Address: 0x4e91c0 - 0x4e91f8
void sub_004E91C0_0x4e91c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E91C0_0x4e91c0");
#endif

    switch (ctx->pc) {
        case 0x4e91c0u: goto label_4e91c0;
        case 0x4e91c4u: goto label_4e91c4;
        case 0x4e91c8u: goto label_4e91c8;
        case 0x4e91ccu: goto label_4e91cc;
        case 0x4e91d0u: goto label_4e91d0;
        case 0x4e91d4u: goto label_4e91d4;
        case 0x4e91d8u: goto label_4e91d8;
        case 0x4e91dcu: goto label_4e91dc;
        case 0x4e91e0u: goto label_4e91e0;
        case 0x4e91e4u: goto label_4e91e4;
        case 0x4e91e8u: goto label_4e91e8;
        case 0x4e91ecu: goto label_4e91ec;
        case 0x4e91f0u: goto label_4e91f0;
        case 0x4e91f4u: goto label_4e91f4;
        default: break;
    }

    ctx->pc = 0x4e91c0u;

label_4e91c0:
    // 0x4e91c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e91c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4e91c4:
    // 0x4e91c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e91c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e91c8:
    // 0x4e91c8: 0xa0850080  sb          $a1, 0x80($a0)
    ctx->pc = 0x4e91c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 128), (uint8_t)GPR_U32(ctx, 5));
label_4e91cc:
    // 0x4e91cc: 0x8c860060  lw          $a2, 0x60($a0)
    ctx->pc = 0x4e91ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_4e91d0:
    // 0x4e91d0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4e91d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4e91d4:
    // 0x4e91d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4e91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4e91d8:
    // 0x4e91d8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x4e91d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_4e91dc:
    // 0x4e91dc: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x4e91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_4e91e0:
    // 0x4e91e0: 0x60f809  jalr        $v1
label_4e91e4:
    if (ctx->pc == 0x4E91E4u) {
        ctx->pc = 0x4E91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E91E0u;
        // 0x4e91e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E91E8u;
        goto label_4e91e8;
    }
    ctx->pc = 0x4E91E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E91E8u);
        ctx->pc = 0x4E91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E91E0u;
        // 0x4e91e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E91E0u, 0x4E91E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E91E8u;
label_4e91e8:
    // 0x4e91e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e91e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e91ec:
    // 0x4e91ec: 0x3e00008  jr          $ra
label_4e91f0:
    if (ctx->pc == 0x4E91F0u) {
        ctx->pc = 0x4E91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E91ECu;
        // 0x4e91f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E91F4u;
        goto label_4e91f4;
    }
    ctx->pc = 0x4E91ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E91ECu;
        // 0x4e91f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E91ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E91F4u;
label_4e91f4:
    // 0x4e91f4: 0x0  nop
    ctx->pc = 0x4e91f4u;
    // NOP
    ctx->pc = 0x4e91f8u;
}
