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

// Function: sub_0011B2F0
// Address: 0x11b2f0 - 0x11b330
void sub_0011B2F0_0x11b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B2F0_0x11b2f0");
#endif

    switch (ctx->pc) {
        case 0x11b2f0u: goto label_11b2f0;
        case 0x11b2f4u: goto label_11b2f4;
        case 0x11b2f8u: goto label_11b2f8;
        case 0x11b2fcu: goto label_11b2fc;
        case 0x11b300u: goto label_11b300;
        case 0x11b304u: goto label_11b304;
        case 0x11b308u: goto label_11b308;
        case 0x11b30cu: goto label_11b30c;
        case 0x11b310u: goto label_11b310;
        case 0x11b314u: goto label_11b314;
        case 0x11b318u: goto label_11b318;
        case 0x11b31cu: goto label_11b31c;
        case 0x11b320u: goto label_11b320;
        case 0x11b324u: goto label_11b324;
        case 0x11b328u: goto label_11b328;
        case 0x11b32cu: goto label_11b32c;
        default: break;
    }

    ctx->pc = 0x11b2f0u;

label_11b2f0:
    // 0x11b2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11b2f4:
    // 0x11b2f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11b2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11b2f8:
    // 0x11b2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11b2fc:
    // 0x11b2fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_11b300:
    // 0x11b300: 0xac8600e4  sw          $a2, 0xE4($a0)
    ctx->pc = 0x11b300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 6));
label_11b304:
    // 0x11b304: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11b304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b308:
    // 0x11b308: 0x8c47bce4  lw          $a3, -0x431C($v0)
    ctx->pc = 0x11b308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_11b30c:
    // 0x11b30c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_11b310:
    // 0x11b310: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x11b310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_11b314:
    // 0x11b314: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x11b314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_11b318:
    // 0x11b318: 0x60f809  jalr        $v1
label_11b31c:
    if (ctx->pc == 0x11B31Cu) {
        ctx->pc = 0x11B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B318u;
        // 0x11b31c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B320u;
        goto label_11b320;
    }
    ctx->pc = 0x11B318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B320u);
        ctx->pc = 0x11B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B318u;
        // 0x11b31c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B318u, 0x11B320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11B320u;
label_11b320:
    // 0x11b320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b324:
    // 0x11b324: 0x3e00008  jr          $ra
label_11b328:
    if (ctx->pc == 0x11B328u) {
        ctx->pc = 0x11B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B324u;
        // 0x11b328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11B32Cu;
        goto label_11b32c;
    }
    ctx->pc = 0x11B324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B324u;
        // 0x11b328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B32Cu;
label_11b32c:
    // 0x11b32c: 0x0  nop
    ctx->pc = 0x11b32cu;
    // NOP
    ctx->pc = 0x11b330u;
}
