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

// Function: sub_004128E8
// Address: 0x4128e8 - 0x412910
void sub_004128E8_0x4128e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004128E8_0x4128e8");
#endif

    switch (ctx->pc) {
        case 0x412904u: goto label_412904;
        default: break;
    }

    ctx->pc = 0x4128e8u;

    // 0x4128e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4128e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4128ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4128ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4128f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4128f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4128f4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x4128f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x4128f8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x4128f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4128fc: 0xc10c4de  jal         func_431378
    ctx->pc = 0x4128FCu;
    SET_GPR_U32(ctx, 31, 0x412904u);
    ctx->pc = 0x412900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4128FCu;
    // 0x412900: 0xa0400067  sb          $zero, 0x67($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 103), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x4128FCu, 0x412904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412904u;
label_412904:
    // 0x412904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x412904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x412908: 0x3e00008  jr          $ra
    ctx->pc = 0x412908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412908u;
        // 0x41290c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412910u;
}
