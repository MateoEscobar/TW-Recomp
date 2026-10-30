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

// Function: sub_00113C00
// Address: 0x113c00 - 0x113c30
void sub_00113C00_0x113c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113C00_0x113c00");
#endif

    switch (ctx->pc) {
        case 0x113c24u: goto label_113c24;
        default: break;
    }

    ctx->pc = 0x113c00u;

    // 0x113c00: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x113c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x113c04: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x113c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x113c08: 0x8c66aa84  lw          $a2, -0x557C($v1)
    ctx->pc = 0x113c08u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113c0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113c10: 0x34424280  ori         $v0, $v0, 0x4280
    ctx->pc = 0x113c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17024);
    // 0x113c14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x113c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113c1c: 0xc0434a8  jal         func_10D2A0
    ctx->pc = 0x113C1Cu;
    SET_GPR_U32(ctx, 31, 0x113C24u);
    ctx->pc = 0x113C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C1Cu;
    // 0x113c20: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D2A0u, 0x113C1Cu, 0x113C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C24u;
label_113c24:
    // 0x113c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113c28: 0x3e00008  jr          $ra
    ctx->pc = 0x113C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C28u;
        // 0x113c2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113C30u;
}
