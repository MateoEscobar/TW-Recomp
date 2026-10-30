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

// Function: sub_00197B78
// Address: 0x197b78 - 0x197ba0
void sub_00197B78_0x197b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197B78_0x197b78");
#endif

    switch (ctx->pc) {
        case 0x197b78u: goto label_197b78;
        case 0x197b7cu: goto label_197b7c;
        case 0x197b80u: goto label_197b80;
        case 0x197b84u: goto label_197b84;
        case 0x197b88u: goto label_197b88;
        case 0x197b8cu: goto label_197b8c;
        case 0x197b90u: goto label_197b90;
        case 0x197b94u: goto label_197b94;
        case 0x197b98u: goto label_197b98;
        case 0x197b9cu: goto label_197b9c;
        default: break;
    }

    ctx->pc = 0x197b78u;

label_197b78:
    // 0x197b78: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x197b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_197b7c:
    // 0x197b7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_197b80:
    // 0x197b80: 0x8c62f77c  lw          $v0, -0x884($v1)
    ctx->pc = 0x197b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965116)));
label_197b84:
    // 0x197b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_197b88:
    // 0x197b88: 0x40f809  jalr        $v0
label_197b8c:
    if (ctx->pc == 0x197B8Cu) {
        ctx->pc = 0x197B90u;
        goto label_197b90;
    }
    ctx->pc = 0x197B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197B90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197B88u, 0x197B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197B90u;
label_197b90:
    // 0x197b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197b94:
    // 0x197b94: 0x3e00008  jr          $ra
label_197b98:
    if (ctx->pc == 0x197B98u) {
        ctx->pc = 0x197B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B94u;
        // 0x197b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B9Cu;
        goto label_197b9c;
    }
    ctx->pc = 0x197B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B94u;
        // 0x197b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197B9Cu;
label_197b9c:
    // 0x197b9c: 0x0  nop
    ctx->pc = 0x197b9cu;
    // NOP
    ctx->pc = 0x197ba0u;
}
