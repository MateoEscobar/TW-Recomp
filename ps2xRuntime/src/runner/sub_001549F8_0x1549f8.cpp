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

// Function: sub_001549F8
// Address: 0x1549f8 - 0x154a28
void sub_001549F8_0x1549f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001549F8_0x1549f8");
#endif

    switch (ctx->pc) {
        case 0x1549f8u: goto label_1549f8;
        case 0x1549fcu: goto label_1549fc;
        case 0x154a00u: goto label_154a00;
        case 0x154a04u: goto label_154a04;
        case 0x154a08u: goto label_154a08;
        case 0x154a0cu: goto label_154a0c;
        case 0x154a10u: goto label_154a10;
        case 0x154a14u: goto label_154a14;
        case 0x154a18u: goto label_154a18;
        case 0x154a1cu: goto label_154a1c;
        case 0x154a20u: goto label_154a20;
        case 0x154a24u: goto label_154a24;
        default: break;
    }

    ctx->pc = 0x1549f8u;

label_1549f8:
    // 0x1549f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1549f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1549fc:
    // 0x1549fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1549fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_154a00:
    // 0x154a00: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x154a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_154a04:
    // 0x154a04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x154a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_154a08:
    // 0x154a08: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x154a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_154a0c:
    // 0x154a0c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x154a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_154a10:
    // 0x154a10: 0x60f809  jalr        $v1
label_154a14:
    if (ctx->pc == 0x154A14u) {
        ctx->pc = 0x154A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A10u;
        // 0x154a14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A18u;
        goto label_154a18;
    }
    ctx->pc = 0x154A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154A18u);
        ctx->pc = 0x154A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A10u;
        // 0x154a14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154A10u, 0x154A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154A18u;
label_154a18:
    // 0x154a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154a1c:
    // 0x154a1c: 0x3e00008  jr          $ra
label_154a20:
    if (ctx->pc == 0x154A20u) {
        ctx->pc = 0x154A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A1Cu;
        // 0x154a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A24u;
        goto label_154a24;
    }
    ctx->pc = 0x154A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A1Cu;
        // 0x154a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154A24u;
label_154a24:
    // 0x154a24: 0x0  nop
    ctx->pc = 0x154a24u;
    // NOP
    ctx->pc = 0x154a28u;
}
