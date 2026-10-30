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

// Function: sub_0026ADF0
// Address: 0x26adf0 - 0x26ae20
void sub_0026ADF0_0x26adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026ADF0_0x26adf0");
#endif

    switch (ctx->pc) {
        case 0x26ae10u: goto label_26ae10;
        default: break;
    }

    ctx->pc = 0x26adf0u;

    // 0x26adf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26adf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26adf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26adf8: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x26adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x26adfc: 0x84430118  lh          $v1, 0x118($v0)
    ctx->pc = 0x26adfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x26ae00: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AE00u;
    {
        const bool branch_taken_0x26ae00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE00u;
        // 0x26ae04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ae00) {
            ctx->pc = 0x26AE14u;
            goto label_26ae14;
        }
    }
    ctx->pc = 0x26AE08u;
    // 0x26ae08: 0xc0899f2  jal         func_2267C8
    ctx->pc = 0x26AE08u;
    SET_GPR_U32(ctx, 31, 0x26AE10u);
    ctx->pc = 0x2267C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267C8u, 0x26AE08u, 0x26AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE10u;
label_26ae10:
    // 0x26ae10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ae10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26ae14:
    // 0x26ae14: 0x3e00008  jr          $ra
    ctx->pc = 0x26AE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE14u;
        // 0x26ae18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AE1Cu;
    // 0x26ae1c: 0x0  nop
    ctx->pc = 0x26ae1cu;
    // NOP
    ctx->pc = 0x26ae20u;
}
