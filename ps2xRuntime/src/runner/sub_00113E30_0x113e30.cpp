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

// Function: sub_00113E30
// Address: 0x113e30 - 0x113e60
void sub_00113E30_0x113e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113E30_0x113e30");
#endif

    switch (ctx->pc) {
        case 0x113e48u: goto label_113e48;
        default: break;
    }

    ctx->pc = 0x113e30u;

    // 0x113e30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113e34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113e34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113e38: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x113e38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x113e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113e40: 0xc106802  jal         func_41A008
    ctx->pc = 0x113E40u;
    SET_GPR_U32(ctx, 31, 0x113E48u);
    ctx->pc = 0x113E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E40u;
    // 0x113e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A008u, 0x113E40u, 0x113E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E48u;
label_113e48:
    // 0x113e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x113E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E4Cu;
        // 0x113e50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113E54u;
    // 0x113e54: 0x0  nop
    ctx->pc = 0x113e54u;
    // NOP
    // 0x113e58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x113e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113e5c: 0x0  nop
    ctx->pc = 0x113e5cu;
    // NOP
    ctx->pc = 0x113e60u;
}
