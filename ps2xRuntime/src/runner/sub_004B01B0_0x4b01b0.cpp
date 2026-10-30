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

// Function: sub_004B01B0
// Address: 0x4b01b0 - 0x4b01d8
void sub_004B01B0_0x4b01b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B01B0_0x4b01b0");
#endif

    switch (ctx->pc) {
        case 0x4b01ccu: goto label_4b01cc;
        default: break;
    }

    ctx->pc = 0x4b01b0u;

    // 0x4b01b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b01b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b01b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b01b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b01b8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4b01b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4b01bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B01BCu;
    {
        const bool branch_taken_0x4b01bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B01BCu;
        // 0x4b01c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b01bc) {
            ctx->pc = 0x4B01D0u;
            goto label_4b01d0;
        }
    }
    ctx->pc = 0x4B01C4u;
    // 0x4b01c4: 0xc12be9a  jal         func_4AFA68
    ctx->pc = 0x4B01C4u;
    SET_GPR_U32(ctx, 31, 0x4B01CCu);
    ctx->pc = 0x4AFA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFA68u, 0x4B01C4u, 0x4B01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B01CCu;
label_4b01cc:
    // 0x4b01cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b01ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b01d0:
    // 0x4b01d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B01D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B01D0u;
        // 0x4b01d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B01D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B01D8u;
}
