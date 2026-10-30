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

// Function: sub_00368240
// Address: 0x368240 - 0x368278
void sub_00368240_0x368240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368240_0x368240");
#endif

    switch (ctx->pc) {
        case 0x368254u: goto label_368254;
        case 0x36825cu: goto label_36825c;
        case 0x368264u: goto label_368264;
        default: break;
    }

    ctx->pc = 0x368240u;

    // 0x368240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x368244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36824c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36824Cu;
    SET_GPR_U32(ctx, 31, 0x368254u);
    ctx->pc = 0x368250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36824Cu;
    // 0x368250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36824Cu, 0x368254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368254u;
label_368254:
    // 0x368254: 0xc10b108  jal         func_42C420
    ctx->pc = 0x368254u;
    SET_GPR_U32(ctx, 31, 0x36825Cu);
    ctx->pc = 0x368258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368254u;
    // 0x368258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x368254u, 0x36825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36825Cu;
label_36825c:
    // 0x36825c: 0xc0d5312  jal         func_354C48
    ctx->pc = 0x36825Cu;
    SET_GPR_U32(ctx, 31, 0x368264u);
    ctx->pc = 0x368260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36825Cu;
    // 0x368260: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354C48u, 0x36825Cu, 0x368264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368264u;
label_368264:
    // 0x368264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368268: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36826c: 0x3e00008  jr          $ra
    ctx->pc = 0x36826Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36826Cu;
        // 0x368270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36826Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368274u;
    // 0x368274: 0x0  nop
    ctx->pc = 0x368274u;
    // NOP
    ctx->pc = 0x368278u;
}
