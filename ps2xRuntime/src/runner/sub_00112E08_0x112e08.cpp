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

// Function: sub_00112E08
// Address: 0x112e08 - 0x112e30
void sub_00112E08_0x112e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112E08_0x112e08");
#endif

    switch (ctx->pc) {
        case 0x112e24u: goto label_112e24;
        default: break;
    }

    ctx->pc = 0x112e08u;

    // 0x112e08: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x112e08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x112e0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112e10: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x112e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112e18: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x112e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x112e1c: 0xc04363a  jal         func_10D8E8
    ctx->pc = 0x112E1Cu;
    SET_GPR_U32(ctx, 31, 0x112E24u);
    ctx->pc = 0x112E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E1Cu;
    // 0x112e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D8E8u, 0x112E1Cu, 0x112E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E24u;
label_112e24:
    // 0x112e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112e28: 0x3e00008  jr          $ra
    ctx->pc = 0x112E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E28u;
        // 0x112e2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112E30u;
}
