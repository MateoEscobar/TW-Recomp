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

// Function: sub_00368278
// Address: 0x368278 - 0x3682a8
void sub_00368278_0x368278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368278_0x368278");
#endif

    switch (ctx->pc) {
        case 0x36828cu: goto label_36828c;
        case 0x368294u: goto label_368294;
        default: break;
    }

    ctx->pc = 0x368278u;

    // 0x368278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36827c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36827cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x368284: 0xc1024c6  jal         func_409318
    ctx->pc = 0x368284u;
    SET_GPR_U32(ctx, 31, 0x36828Cu);
    ctx->pc = 0x368288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368284u;
    // 0x368288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x368284u, 0x36828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36828Cu;
label_36828c:
    // 0x36828c: 0xc063730  jal         func_18DCC0
    ctx->pc = 0x36828Cu;
    SET_GPR_U32(ctx, 31, 0x368294u);
    ctx->pc = 0x368290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36828Cu;
    // 0x368290: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DCC0u, 0x36828Cu, 0x368294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368294u;
label_368294:
    // 0x368294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36829c: 0x3e00008  jr          $ra
    ctx->pc = 0x36829Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3682A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36829Cu;
        // 0x3682a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36829Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3682A4u;
    // 0x3682a4: 0x0  nop
    ctx->pc = 0x3682a4u;
    // NOP
    ctx->pc = 0x3682a8u;
}
