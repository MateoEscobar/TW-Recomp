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

// Function: sub_001594E0
// Address: 0x1594e0 - 0x159520
void sub_001594E0_0x1594e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001594E0_0x1594e0");
#endif

    switch (ctx->pc) {
        case 0x1594e0u: goto label_1594e0;
        case 0x1594e4u: goto label_1594e4;
        case 0x1594e8u: goto label_1594e8;
        case 0x1594ecu: goto label_1594ec;
        case 0x1594f0u: goto label_1594f0;
        case 0x1594f4u: goto label_1594f4;
        case 0x1594f8u: goto label_1594f8;
        case 0x1594fcu: goto label_1594fc;
        case 0x159500u: goto label_159500;
        case 0x159504u: goto label_159504;
        case 0x159508u: goto label_159508;
        case 0x15950cu: goto label_15950c;
        case 0x159510u: goto label_159510;
        case 0x159514u: goto label_159514;
        case 0x159518u: goto label_159518;
        case 0x15951cu: goto label_15951c;
        default: break;
    }

    ctx->pc = 0x1594e0u;

label_1594e0:
    // 0x1594e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1594e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1594e4:
    // 0x1594e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1594e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1594e8:
    // 0x1594e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1594e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1594ec:
    // 0x1594ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1594ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1594f0:
    // 0x1594f0: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1594f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1594f4:
    // 0x1594f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1594f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1594f8:
    // 0x1594f8: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1594f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1594fc:
    // 0x1594fc: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1594fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_159500:
    // 0x159500: 0x40f809  jalr        $v0
label_159504:
    if (ctx->pc == 0x159504u) {
        ctx->pc = 0x159504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159500u;
        // 0x159504: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159508u;
        goto label_159508;
    }
    ctx->pc = 0x159500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159508u);
        ctx->pc = 0x159504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159500u;
        // 0x159504: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159500u, 0x159508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159508u;
label_159508:
    // 0x159508: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x159508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_15950c:
    // 0x15950c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15950cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159510:
    // 0x159510: 0xac6257d0  sw          $v0, 0x57D0($v1)
    ctx->pc = 0x159510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22480), GPR_U32(ctx, 2));
label_159514:
    // 0x159514: 0x3e00008  jr          $ra
label_159518:
    if (ctx->pc == 0x159518u) {
        ctx->pc = 0x159518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159514u;
        // 0x159518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15951Cu;
        goto label_15951c;
    }
    ctx->pc = 0x159514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159514u;
        // 0x159518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15951Cu;
label_15951c:
    // 0x15951c: 0x0  nop
    ctx->pc = 0x15951cu;
    // NOP
    ctx->pc = 0x159520u;
}
