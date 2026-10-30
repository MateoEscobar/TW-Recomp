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

// Function: sub_003386D8
// Address: 0x3386d8 - 0x338708
void sub_003386D8_0x3386d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003386D8_0x3386d8");
#endif

    switch (ctx->pc) {
        case 0x3386fcu: goto label_3386fc;
        default: break;
    }

    ctx->pc = 0x3386d8u;

    // 0x3386d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3386d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3386dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3386dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3386e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3386e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3386e4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3386e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3386e8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3386e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x3386ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3386ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3386f0: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x3386f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x3386f4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x3386F4u;
    SET_GPR_U32(ctx, 31, 0x3386FCu);
    ctx->pc = 0x3386F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3386F4u;
    // 0x3386f8: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x3386F4u, 0x3386FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3386FCu;
label_3386fc:
    // 0x3386fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3386fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338700: 0x3e00008  jr          $ra
    ctx->pc = 0x338700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338700u;
        // 0x338704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338708u;
}
