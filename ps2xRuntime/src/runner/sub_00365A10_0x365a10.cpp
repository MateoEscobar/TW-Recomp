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

// Function: sub_00365A10
// Address: 0x365a10 - 0x365a48
void sub_00365A10_0x365a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365A10_0x365a10");
#endif

    switch (ctx->pc) {
        case 0x365a24u: goto label_365a24;
        case 0x365a2cu: goto label_365a2c;
        case 0x365a34u: goto label_365a34;
        default: break;
    }

    ctx->pc = 0x365a10u;

    // 0x365a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x365a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x365a14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365a1c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365A1Cu;
    SET_GPR_U32(ctx, 31, 0x365A24u);
    ctx->pc = 0x365A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A1Cu;
    // 0x365a20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365A1Cu, 0x365A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A24u;
label_365a24:
    // 0x365a24: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365A24u;
    SET_GPR_U32(ctx, 31, 0x365A2Cu);
    ctx->pc = 0x365A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A24u;
    // 0x365a28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365A24u, 0x365A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A2Cu;
label_365a2c:
    // 0x365a2c: 0xc046eb6  jal         func_11BAD8
    ctx->pc = 0x365A2Cu;
    SET_GPR_U32(ctx, 31, 0x365A34u);
    ctx->pc = 0x365A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A2Cu;
    // 0x365a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BAD8u, 0x365A2Cu, 0x365A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A34u;
label_365a34:
    // 0x365a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x365a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365a38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x365A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A3Cu;
        // 0x365a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365A44u;
    // 0x365a44: 0x0  nop
    ctx->pc = 0x365a44u;
    // NOP
    ctx->pc = 0x365a48u;
}
