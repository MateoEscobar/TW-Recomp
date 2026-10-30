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

// Function: sub_00113DF8
// Address: 0x113df8 - 0x113e30
void sub_00113DF8_0x113df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113DF8_0x113df8");
#endif

    switch (ctx->pc) {
        case 0x113e20u: goto label_113e20;
        default: break;
    }

    ctx->pc = 0x113df8u;

    // 0x113df8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x113df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113dfc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x113dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113e04: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x113e04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e08: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x113e08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x113e0c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x113e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113e14: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x113e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e18: 0xc044418  jal         func_111060
    ctx->pc = 0x113E18u;
    SET_GPR_U32(ctx, 31, 0x113E20u);
    ctx->pc = 0x113E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E18u;
    // 0x113e1c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111060u, 0x113E18u, 0x113E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E20u;
label_113e20:
    // 0x113e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113e24: 0x3e00008  jr          $ra
    ctx->pc = 0x113E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E24u;
        // 0x113e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113E2Cu;
    // 0x113e2c: 0x0  nop
    ctx->pc = 0x113e2cu;
    // NOP
    ctx->pc = 0x113e30u;
}
