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

// Function: sub_001540D0
// Address: 0x1540d0 - 0x154100
void sub_001540D0_0x1540d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001540D0_0x1540d0");
#endif

    switch (ctx->pc) {
        case 0x1540d0u: goto label_1540d0;
        case 0x1540d4u: goto label_1540d4;
        case 0x1540d8u: goto label_1540d8;
        case 0x1540dcu: goto label_1540dc;
        case 0x1540e0u: goto label_1540e0;
        case 0x1540e4u: goto label_1540e4;
        case 0x1540e8u: goto label_1540e8;
        case 0x1540ecu: goto label_1540ec;
        case 0x1540f0u: goto label_1540f0;
        case 0x1540f4u: goto label_1540f4;
        case 0x1540f8u: goto label_1540f8;
        case 0x1540fcu: goto label_1540fc;
        default: break;
    }

    ctx->pc = 0x1540d0u;

label_1540d0:
    // 0x1540d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1540d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1540d4:
    // 0x1540d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1540d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1540d8:
    // 0x1540d8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1540d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1540dc:
    // 0x1540dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1540dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1540e0:
    // 0x1540e0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1540e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1540e4:
    // 0x1540e4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1540e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1540e8:
    // 0x1540e8: 0x40f809  jalr        $v0
label_1540ec:
    if (ctx->pc == 0x1540ECu) {
        ctx->pc = 0x1540ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540E8u;
        // 0x1540ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540F0u;
        goto label_1540f0;
    }
    ctx->pc = 0x1540E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1540F0u);
        ctx->pc = 0x1540ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540E8u;
        // 0x1540ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1540E8u, 0x1540F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1540F0u;
label_1540f0:
    // 0x1540f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1540f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1540f4:
    // 0x1540f4: 0x3e00008  jr          $ra
label_1540f8:
    if (ctx->pc == 0x1540F8u) {
        ctx->pc = 0x1540F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540F4u;
        // 0x1540f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1540FCu;
        goto label_1540fc;
    }
    ctx->pc = 0x1540F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1540F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540F4u;
        // 0x1540f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1540F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1540FCu;
label_1540fc:
    // 0x1540fc: 0x0  nop
    ctx->pc = 0x1540fcu;
    // NOP
    ctx->pc = 0x154100u;
}
