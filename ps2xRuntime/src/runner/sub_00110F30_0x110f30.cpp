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

// Function: sub_00110F30
// Address: 0x110f30 - 0x110f58
void sub_00110F30_0x110f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110F30_0x110f30");
#endif

    switch (ctx->pc) {
        case 0x110f48u: goto label_110f48;
        default: break;
    }

    ctx->pc = 0x110f30u;

    // 0x110f30: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x110f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x110f34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110f38: 0x34424280  ori         $v0, $v0, 0x4280
    ctx->pc = 0x110f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17024);
    // 0x110f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110f40: 0xc0434f2  jal         func_10D3C8
    ctx->pc = 0x110F40u;
    SET_GPR_U32(ctx, 31, 0x110F48u);
    ctx->pc = 0x110F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F40u;
    // 0x110f44: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D3C8u, 0x110F40u, 0x110F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F48u;
label_110f48:
    // 0x110f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x110F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F4Cu;
        // 0x110f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F54u;
    // 0x110f54: 0x0  nop
    ctx->pc = 0x110f54u;
    // NOP
    ctx->pc = 0x110f58u;
}
