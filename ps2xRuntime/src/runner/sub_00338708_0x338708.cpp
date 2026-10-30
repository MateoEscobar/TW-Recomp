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

// Function: sub_00338708
// Address: 0x338708 - 0x338738
void sub_00338708_0x338708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338708_0x338708");
#endif

    switch (ctx->pc) {
        case 0x338708u: goto label_338708;
        case 0x33870cu: goto label_33870c;
        case 0x338710u: goto label_338710;
        case 0x338714u: goto label_338714;
        case 0x338718u: goto label_338718;
        case 0x33871cu: goto label_33871c;
        case 0x338720u: goto label_338720;
        case 0x338724u: goto label_338724;
        case 0x338728u: goto label_338728;
        case 0x33872cu: goto label_33872c;
        case 0x338730u: goto label_338730;
        case 0x338734u: goto label_338734;
        default: break;
    }

    ctx->pc = 0x338708u;

label_338708:
    // 0x338708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33870c:
    // 0x33870c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33870cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_338710:
    // 0x338710: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x338710u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_338714:
    // 0x338714: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x338714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_338718:
    // 0x338718: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x338718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_33871c:
    // 0x33871c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x33871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_338720:
    // 0x338720: 0x40f809  jalr        $v0
label_338724:
    if (ctx->pc == 0x338724u) {
        ctx->pc = 0x338724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338720u;
        // 0x338724: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338728u;
        goto label_338728;
    }
    ctx->pc = 0x338720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338728u);
        ctx->pc = 0x338724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338720u;
        // 0x338724: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338720u, 0x338728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338728u;
label_338728:
    // 0x338728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33872c:
    // 0x33872c: 0x3e00008  jr          $ra
label_338730:
    if (ctx->pc == 0x338730u) {
        ctx->pc = 0x338730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33872Cu;
        // 0x338730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338734u;
        goto label_338734;
    }
    ctx->pc = 0x33872Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33872Cu;
        // 0x338730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33872Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338734u;
label_338734:
    // 0x338734: 0x0  nop
    ctx->pc = 0x338734u;
    // NOP
    ctx->pc = 0x338738u;
}
