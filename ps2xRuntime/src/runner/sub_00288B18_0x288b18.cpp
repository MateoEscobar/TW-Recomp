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

// Function: sub_00288B18
// Address: 0x288b18 - 0x288b40
void sub_00288B18_0x288b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288B18_0x288b18");
#endif

    switch (ctx->pc) {
        case 0x288b30u: goto label_288b30;
        default: break;
    }

    ctx->pc = 0x288b18u;

    // 0x288b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x288b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x288b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288b20: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x288B20u;
    {
        const bool branch_taken_0x288b20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x288B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B20u;
        // 0x288b24: 0xa085002a  sb          $a1, 0x2A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b20) {
            ctx->pc = 0x288B30u;
            goto label_288b30;
        }
    }
    ctx->pc = 0x288B28u;
    // 0x288b28: 0xc0a229e  jal         func_288A78
    ctx->pc = 0x288B28u;
    SET_GPR_U32(ctx, 31, 0x288B30u);
    ctx->pc = 0x288B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B28u;
    // 0x288b2c: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288A78u, 0x288B28u, 0x288B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B30u;
label_288b30:
    // 0x288b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288b34: 0x3e00008  jr          $ra
    ctx->pc = 0x288B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B34u;
        // 0x288b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288B3Cu;
    // 0x288b3c: 0x0  nop
    ctx->pc = 0x288b3cu;
    // NOP
    ctx->pc = 0x288b40u;
}
