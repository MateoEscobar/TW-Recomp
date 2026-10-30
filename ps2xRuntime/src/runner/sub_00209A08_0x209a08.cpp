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

// Function: sub_00209A08
// Address: 0x209a08 - 0x209a30
void sub_00209A08_0x209a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209A08_0x209a08");
#endif

    switch (ctx->pc) {
        case 0x209a08u: goto label_209a08;
        case 0x209a0cu: goto label_209a0c;
        case 0x209a10u: goto label_209a10;
        case 0x209a14u: goto label_209a14;
        case 0x209a18u: goto label_209a18;
        case 0x209a1cu: goto label_209a1c;
        case 0x209a20u: goto label_209a20;
        case 0x209a24u: goto label_209a24;
        case 0x209a28u: goto label_209a28;
        case 0x209a2cu: goto label_209a2c;
        default: break;
    }

    ctx->pc = 0x209a08u;

label_209a08:
    // 0x209a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_209a0c:
    // 0x209a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_209a10:
    // 0x209a10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x209a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_209a14:
    // 0x209a14: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x209a14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_209a18:
    // 0x209a18: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x209a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_209a1c:
    // 0x209a1c: 0xa0f809  jalr        $a1
label_209a20:
    if (ctx->pc == 0x209A20u) {
        ctx->pc = 0x209A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A1Cu;
        // 0x209a20: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A24u;
        goto label_209a24;
    }
    ctx->pc = 0x209A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x209A24u);
        ctx->pc = 0x209A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A1Cu;
        // 0x209a20: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A1Cu, 0x209A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209A24u;
label_209a24:
    // 0x209a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209a28:
    // 0x209a28: 0x3e00008  jr          $ra
label_209a2c:
    if (ctx->pc == 0x209A2Cu) {
        ctx->pc = 0x209A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A28u;
        // 0x209a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A30u;
        goto label_fallthrough_0x209a28;
    }
    ctx->pc = 0x209A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A28u;
        // 0x209a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x209a28:
    ctx->pc = 0x209A30u;
}
