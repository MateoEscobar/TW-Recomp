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

// Function: sub_001AC4E8
// Address: 0x1ac4e8 - 0x1ac528
void sub_001AC4E8_0x1ac4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC4E8_0x1ac4e8");
#endif

    switch (ctx->pc) {
        case 0x1ac4e8u: goto label_1ac4e8;
        case 0x1ac4ecu: goto label_1ac4ec;
        case 0x1ac4f0u: goto label_1ac4f0;
        case 0x1ac4f4u: goto label_1ac4f4;
        case 0x1ac4f8u: goto label_1ac4f8;
        case 0x1ac4fcu: goto label_1ac4fc;
        case 0x1ac500u: goto label_1ac500;
        case 0x1ac504u: goto label_1ac504;
        case 0x1ac508u: goto label_1ac508;
        case 0x1ac50cu: goto label_1ac50c;
        case 0x1ac510u: goto label_1ac510;
        case 0x1ac514u: goto label_1ac514;
        case 0x1ac518u: goto label_1ac518;
        case 0x1ac51cu: goto label_1ac51c;
        case 0x1ac520u: goto label_1ac520;
        case 0x1ac524u: goto label_1ac524;
        default: break;
    }

    ctx->pc = 0x1ac4e8u;

label_1ac4e8:
    // 0x1ac4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ac4ec:
    // 0x1ac4ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac4f0:
    // 0x1ac4f0: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x1ac4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_1ac4f4:
    // 0x1ac4f4: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x1ac4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_1ac4f8:
    // 0x1ac4f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ac4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ac4fc:
    // 0x1ac4fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ac4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ac500:
    // 0x1ac500: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1ac500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ac504:
    // 0x1ac504: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1ac504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ac508:
    // 0x1ac508: 0x84a400c8  lh          $a0, 0xC8($a1)
    ctx->pc = 0x1ac508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 200)));
label_1ac50c:
    // 0x1ac50c: 0x8ca200cc  lw          $v0, 0xCC($a1)
    ctx->pc = 0x1ac50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_1ac510:
    // 0x1ac510: 0x40f809  jalr        $v0
label_1ac514:
    if (ctx->pc == 0x1AC514u) {
        ctx->pc = 0x1AC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC510u;
        // 0x1ac514: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC518u;
        goto label_1ac518;
    }
    ctx->pc = 0x1AC510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC518u);
        ctx->pc = 0x1AC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC510u;
        // 0x1ac514: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC510u, 0x1AC518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC518u;
label_1ac518:
    // 0x1ac518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac51c:
    // 0x1ac51c: 0x3e00008  jr          $ra
label_1ac520:
    if (ctx->pc == 0x1AC520u) {
        ctx->pc = 0x1AC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC51Cu;
        // 0x1ac520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC524u;
        goto label_1ac524;
    }
    ctx->pc = 0x1AC51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC51Cu;
        // 0x1ac520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC524u;
label_1ac524:
    // 0x1ac524: 0x0  nop
    ctx->pc = 0x1ac524u;
    // NOP
    ctx->pc = 0x1ac528u;
}
