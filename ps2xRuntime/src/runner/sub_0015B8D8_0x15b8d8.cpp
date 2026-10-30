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

// Function: sub_0015B8D8
// Address: 0x15b8d8 - 0x15b918
void sub_0015B8D8_0x15b8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B8D8_0x15b8d8");
#endif

    switch (ctx->pc) {
        case 0x15b8d8u: goto label_15b8d8;
        case 0x15b8dcu: goto label_15b8dc;
        case 0x15b8e0u: goto label_15b8e0;
        case 0x15b8e4u: goto label_15b8e4;
        case 0x15b8e8u: goto label_15b8e8;
        case 0x15b8ecu: goto label_15b8ec;
        case 0x15b8f0u: goto label_15b8f0;
        case 0x15b8f4u: goto label_15b8f4;
        case 0x15b8f8u: goto label_15b8f8;
        case 0x15b8fcu: goto label_15b8fc;
        case 0x15b900u: goto label_15b900;
        case 0x15b904u: goto label_15b904;
        case 0x15b908u: goto label_15b908;
        case 0x15b90cu: goto label_15b90c;
        case 0x15b910u: goto label_15b910;
        case 0x15b914u: goto label_15b914;
        default: break;
    }

    ctx->pc = 0x15b8d8u;

label_15b8d8:
    // 0x15b8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15b8dc:
    // 0x15b8dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b8e0:
    // 0x15b8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15b8e4:
    // 0x15b8e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b8e8:
    // 0x15b8e8: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15b8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15b8ec:
    // 0x15b8ec: 0xac60c704  sw          $zero, -0x38FC($v1)
    ctx->pc = 0x15b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952708), GPR_U32(ctx, 0));
label_15b8f0:
    // 0x15b8f0: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x15b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15b8f4:
    // 0x15b8f4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x15b8f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_15b8f8:
    // 0x15b8f8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x15b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_15b8fc:
    // 0x15b8fc: 0x60f809  jalr        $v1
label_15b900:
    if (ctx->pc == 0x15B900u) {
        ctx->pc = 0x15B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8FCu;
        // 0x15b900: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B904u;
        goto label_15b904;
    }
    ctx->pc = 0x15B8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15B904u);
        ctx->pc = 0x15B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8FCu;
        // 0x15b900: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B8FCu, 0x15B904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B904u;
label_15b904:
    // 0x15b904: 0xc056e30  jal         func_15B8C0
label_15b908:
    if (ctx->pc == 0x15B908u) {
        ctx->pc = 0x15B90Cu;
        goto label_15b90c;
    }
    ctx->pc = 0x15B904u;
    SET_GPR_U32(ctx, 31, 0x15B90Cu);
    ctx->pc = 0x15B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B8C0u, 0x15B904u, 0x15B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B90Cu;
label_15b90c:
    // 0x15b90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b910:
    // 0x15b910: 0x3e00008  jr          $ra
label_15b914:
    if (ctx->pc == 0x15B914u) {
        ctx->pc = 0x15B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B910u;
        // 0x15b914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B918u;
        goto label_fallthrough_0x15b910;
    }
    ctx->pc = 0x15B910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B910u;
        // 0x15b914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b910:
    ctx->pc = 0x15B918u;
}
