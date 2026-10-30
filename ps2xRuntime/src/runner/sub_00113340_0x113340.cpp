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

// Function: sub_00113340
// Address: 0x113340 - 0x113370
void sub_00113340_0x113340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113340_0x113340");
#endif

    switch (ctx->pc) {
        case 0x113360u: goto label_113360;
        default: break;
    }

    ctx->pc = 0x113340u;

    // 0x113340: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x113340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113344: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x113344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x113348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11334c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11334cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113350: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x113350u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x113354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113358: 0xc0440dc  jal         func_110370
    ctx->pc = 0x113358u;
    SET_GPR_U32(ctx, 31, 0x113360u);
    ctx->pc = 0x11335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113358u;
    // 0x11335c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110370u, 0x113358u, 0x113360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113360u;
label_113360:
    // 0x113360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113364: 0x3e00008  jr          $ra
    ctx->pc = 0x113364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113364u;
        // 0x113368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11336Cu;
    // 0x11336c: 0x0  nop
    ctx->pc = 0x11336cu;
    // NOP
    ctx->pc = 0x113370u;
}
