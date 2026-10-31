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

// Function: sub_00386370
// Address: 0x386370 - 0x3863a0
void sub_00386370_0x386370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386370_0x386370");
#endif

    switch (ctx->pc) {
        case 0x386370u: goto label_386370;
        case 0x386374u: goto label_386374;
        case 0x386378u: goto label_386378;
        case 0x38637cu: goto label_38637c;
        case 0x386380u: goto label_386380;
        case 0x386384u: goto label_386384;
        case 0x386388u: goto label_386388;
        case 0x38638cu: goto label_38638c;
        case 0x386390u: goto label_386390;
        case 0x386394u: goto label_386394;
        case 0x386398u: goto label_386398;
        case 0x38639cu: goto label_38639c;
        default: break;
    }

    ctx->pc = 0x386370u;

label_386370:
    // 0x386370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x386370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_386374:
    // 0x386374: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x386374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_386378:
    // 0x386378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38637c:
    // 0x38637c: 0x8c452b04  lw          $a1, 0x2B04($v0)
    ctx->pc = 0x38637cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_386380:
    // 0x386380: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x386380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_386384:
    // 0x386384: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x386384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_386388:
    // 0x386388: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x386388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_38638c:
    // 0x38638c: 0x40f809  jalr        $v0
label_386390:
    if (ctx->pc == 0x386390u) {
        ctx->pc = 0x386390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38638Cu;
        // 0x386390: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386394u;
        goto label_386394;
    }
    ctx->pc = 0x38638Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x386394u);
        ctx->pc = 0x386390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38638Cu;
        // 0x386390: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38638Cu, 0x386394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386394u;
label_386394:
    // 0x386394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_386398:
    // 0x386398: 0x3e00008  jr          $ra
label_38639c:
    if (ctx->pc == 0x38639Cu) {
        ctx->pc = 0x38639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386398u;
        // 0x38639c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3863A0u;
        goto label_fallthrough_0x386398;
    }
    ctx->pc = 0x386398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386398u;
        // 0x38639c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x386398:
    ctx->pc = 0x3863A0u;
}
