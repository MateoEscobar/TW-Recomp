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

// Function: sub_001D1FB8
// Address: 0x1d1fb8 - 0x1d1ff0
void sub_001D1FB8_0x1d1fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1FB8_0x1d1fb8");
#endif

    switch (ctx->pc) {
        case 0x1d1fb8u: goto label_1d1fb8;
        case 0x1d1fbcu: goto label_1d1fbc;
        case 0x1d1fc0u: goto label_1d1fc0;
        case 0x1d1fc4u: goto label_1d1fc4;
        case 0x1d1fc8u: goto label_1d1fc8;
        case 0x1d1fccu: goto label_1d1fcc;
        case 0x1d1fd0u: goto label_1d1fd0;
        case 0x1d1fd4u: goto label_1d1fd4;
        case 0x1d1fd8u: goto label_1d1fd8;
        case 0x1d1fdcu: goto label_1d1fdc;
        case 0x1d1fe0u: goto label_1d1fe0;
        case 0x1d1fe4u: goto label_1d1fe4;
        case 0x1d1fe8u: goto label_1d1fe8;
        case 0x1d1fecu: goto label_1d1fec;
        default: break;
    }

    ctx->pc = 0x1d1fb8u;

label_1d1fb8:
    // 0x1d1fb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d1fbc:
    // 0x1d1fbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d1fc0:
    // 0x1d1fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1fc4:
    // 0x1d1fc4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d1fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1fc8:
    // 0x1d1fc8: 0x8c46ec8c  lw          $a2, -0x1374($v0)
    ctx->pc = 0x1d1fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962316)));
label_1d1fcc:
    // 0x1d1fcc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d1fd0:
    // 0x1d1fd0: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1d1fd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1d1fd4:
    // 0x1d1fd4: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1d1fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d1fd8:
    // 0x1d1fd8: 0x60f809  jalr        $v1
label_1d1fdc:
    if (ctx->pc == 0x1D1FDCu) {
        ctx->pc = 0x1D1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FD8u;
        // 0x1d1fdc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1FE0u;
        goto label_1d1fe0;
    }
    ctx->pc = 0x1D1FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D1FE0u);
        ctx->pc = 0x1D1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FD8u;
        // 0x1d1fdc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1FD8u, 0x1D1FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1FE0u;
label_1d1fe0:
    // 0x1d1fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1fe4:
    // 0x1d1fe4: 0x3e00008  jr          $ra
label_1d1fe8:
    if (ctx->pc == 0x1D1FE8u) {
        ctx->pc = 0x1D1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FE4u;
        // 0x1d1fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1FECu;
        goto label_1d1fec;
    }
    ctx->pc = 0x1D1FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FE4u;
        // 0x1d1fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1FECu;
label_1d1fec:
    // 0x1d1fec: 0x0  nop
    ctx->pc = 0x1d1fecu;
    // NOP
    ctx->pc = 0x1d1ff0u;
}
