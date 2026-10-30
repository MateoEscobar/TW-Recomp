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

// Function: sub_001173E8
// Address: 0x1173e8 - 0x117420
void sub_001173E8_0x1173e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001173E8_0x1173e8");
#endif

    switch (ctx->pc) {
        case 0x117410u: goto label_117410;
        default: break;
    }

    ctx->pc = 0x1173e8u;

    // 0x1173e8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1173e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1173ec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1173ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1173f0: 0x8c66aa84  lw          $a2, -0x557C($v1)
    ctx->pc = 0x1173f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50AA84u));
    // 0x1173f4: 0x34424280  ori         $v0, $v0, 0x4280
    ctx->pc = 0x1173f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17024);
    // 0x1173f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1173f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1173fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117400: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x117400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x117404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117408: 0xc04355c  jal         func_10D570
    ctx->pc = 0x117408u;
    SET_GPR_U32(ctx, 31, 0x117410u);
    ctx->pc = 0x11740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117408u;
    // 0x11740c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D570u, 0x117408u, 0x117410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117410u;
label_117410:
    // 0x117410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117418: 0x3e00008  jr          $ra
    ctx->pc = 0x117418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117418u;
        // 0x11741c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117420u;
}
