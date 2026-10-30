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

// Function: sub_001E1FA8
// Address: 0x1e1fa8 - 0x1e1fe0
void sub_001E1FA8_0x1e1fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1FA8_0x1e1fa8");
#endif

    switch (ctx->pc) {
        case 0x1e1fa8u: goto label_1e1fa8;
        case 0x1e1facu: goto label_1e1fac;
        case 0x1e1fb0u: goto label_1e1fb0;
        case 0x1e1fb4u: goto label_1e1fb4;
        case 0x1e1fb8u: goto label_1e1fb8;
        case 0x1e1fbcu: goto label_1e1fbc;
        case 0x1e1fc0u: goto label_1e1fc0;
        case 0x1e1fc4u: goto label_1e1fc4;
        case 0x1e1fc8u: goto label_1e1fc8;
        case 0x1e1fccu: goto label_1e1fcc;
        case 0x1e1fd0u: goto label_1e1fd0;
        case 0x1e1fd4u: goto label_1e1fd4;
        case 0x1e1fd8u: goto label_1e1fd8;
        case 0x1e1fdcu: goto label_1e1fdc;
        default: break;
    }

    ctx->pc = 0x1e1fa8u;

label_1e1fa8:
    // 0x1e1fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e1fac:
    // 0x1e1fac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e1facu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e1fb0:
    // 0x1e1fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1fb4:
    // 0x1e1fb4: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x1e1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_1e1fb8:
    // 0x1e1fb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e1fbc:
    // 0x1e1fbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e1fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1fc0:
    // 0x1e1fc0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e1fc4:
    // 0x1e1fc4: 0x846400f8  lh          $a0, 0xF8($v1)
    ctx->pc = 0x1e1fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 248)));
label_1e1fc8:
    // 0x1e1fc8: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x1e1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_1e1fcc:
    // 0x1e1fcc: 0x40f809  jalr        $v0
label_1e1fd0:
    if (ctx->pc == 0x1E1FD0u) {
        ctx->pc = 0x1E1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FCCu;
        // 0x1e1fd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FD4u;
        goto label_1e1fd4;
    }
    ctx->pc = 0x1E1FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E1FD4u);
        ctx->pc = 0x1E1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FCCu;
        // 0x1e1fd0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1FCCu, 0x1E1FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1FD4u;
label_1e1fd4:
    // 0x1e1fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1fd8:
    // 0x1e1fd8: 0x3e00008  jr          $ra
label_1e1fdc:
    if (ctx->pc == 0x1E1FDCu) {
        ctx->pc = 0x1E1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FD8u;
        // 0x1e1fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FE0u;
        goto label_fallthrough_0x1e1fd8;
    }
    ctx->pc = 0x1E1FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FD8u;
        // 0x1e1fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1fd8:
    ctx->pc = 0x1E1FE0u;
}
