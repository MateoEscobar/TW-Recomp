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

// Function: sub_004B00F0
// Address: 0x4b00f0 - 0x4b0118
void sub_004B00F0_0x4b00f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B00F0_0x4b00f0");
#endif

    switch (ctx->pc) {
        case 0x4b0108u: goto label_4b0108;
        default: break;
    }

    ctx->pc = 0x4b00f0u;

    // 0x4b00f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b00f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b00f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b00f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b00f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4b00f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b00fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b00fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0100: 0xc12cc82  jal         func_4B3208
    ctx->pc = 0x4B0100u;
    SET_GPR_U32(ctx, 31, 0x4B0108u);
    ctx->pc = 0x4B0104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0100u;
    // 0x4b0104: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4B0100u, 0x4B0108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0108u;
label_4b0108:
    // 0x4b0108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b010c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B010Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B010Cu;
        // 0x4b0110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B010Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0114u;
    // 0x4b0114: 0x0  nop
    ctx->pc = 0x4b0114u;
    // NOP
    ctx->pc = 0x4b0118u;
}
