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

// Function: sub_00223E20
// Address: 0x223e20 - 0x223e48
void sub_00223E20_0x223e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223E20_0x223e20");
#endif

    switch (ctx->pc) {
        case 0x223e30u: goto label_223e30;
        default: break;
    }

    ctx->pc = 0x223e20u;

    // 0x223e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223e28: 0xc08a200  jal         func_228800
    ctx->pc = 0x223E28u;
    SET_GPR_U32(ctx, 31, 0x223E30u);
    ctx->pc = 0x223E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E28u;
    // 0x223e2c: 0x8c8400cc  lw          $a0, 0xCC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x223E28u, 0x223E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E30u;
label_223e30:
    // 0x223e30: 0x9042011b  lbu         $v0, 0x11B($v0)
    ctx->pc = 0x223e30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x223e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223e38: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x223e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
    // 0x223e3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x223e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x223e40: 0x3e00008  jr          $ra
    ctx->pc = 0x223E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E40u;
        // 0x223e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223E48u;
}
