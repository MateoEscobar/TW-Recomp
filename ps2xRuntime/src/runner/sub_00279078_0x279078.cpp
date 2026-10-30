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

// Function: sub_00279078
// Address: 0x279078 - 0x2790a8
void sub_00279078_0x279078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279078_0x279078");
#endif

    switch (ctx->pc) {
        case 0x279094u: goto label_279094;
        default: break;
    }

    ctx->pc = 0x279078u;

    // 0x279078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27907c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x27907cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x279080: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x279080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x279084: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x279084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x279088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27908c: 0xc0a731e  jal         func_29CC78
    ctx->pc = 0x27908Cu;
    SET_GPR_U32(ctx, 31, 0x279094u);
    ctx->pc = 0x279090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27908Cu;
    // 0x279090: 0x24a58fa0  addiu       $a1, $a1, -0x7060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC78u, 0x27908Cu, 0x279094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279094u;
label_279094:
    // 0x279094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279098: 0x3e00008  jr          $ra
    ctx->pc = 0x279098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279098u;
        // 0x27909c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2790A0u;
    // 0x2790a0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2790a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2790a4: 0x0  nop
    ctx->pc = 0x2790a4u;
    // NOP
    ctx->pc = 0x2790a8u;
}
