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

// Function: sub_002FA1E0
// Address: 0x2fa1e0 - 0x2fa220
void sub_002FA1E0_0x2fa1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA1E0_0x2fa1e0");
#endif

    switch (ctx->pc) {
        case 0x2fa1f4u: goto label_2fa1f4;
        default: break;
    }

    ctx->pc = 0x2fa1e0u;

    // 0x2fa1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fa1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fa1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fa1e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fa1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa1ec: 0xc08a148  jal         func_228520
    ctx->pc = 0x2FA1ECu;
    SET_GPR_U32(ctx, 31, 0x2FA1F4u);
    ctx->pc = 0x2FA1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA1ECu;
    // 0x2fa1f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228520u, 0x2FA1ECu, 0x2FA1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA1F4u;
label_2fa1f4:
    // 0x2fa1f4: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2fa1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fa1f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa1fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa200: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2fa200u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2fa204: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA204u;
        // 0x2fa208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA20Cu;
    // 0x2fa20c: 0x0  nop
    ctx->pc = 0x2fa20cu;
    // NOP
    // 0x2fa210: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2fa210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa214: 0x0  nop
    ctx->pc = 0x2fa214u;
    // NOP
    // 0x2fa218: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fa218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fa21c: 0x0  nop
    ctx->pc = 0x2fa21cu;
    // NOP
    ctx->pc = 0x2fa220u;
}
