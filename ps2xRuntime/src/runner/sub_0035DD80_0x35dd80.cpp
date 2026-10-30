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

// Function: sub_0035DD80
// Address: 0x35dd80 - 0x35ddb8
void sub_0035DD80_0x35dd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DD80_0x35dd80");
#endif

    switch (ctx->pc) {
        case 0x35dd94u: goto label_35dd94;
        case 0x35dd9cu: goto label_35dd9c;
        case 0x35dda4u: goto label_35dda4;
        default: break;
    }

    ctx->pc = 0x35dd80u;

    // 0x35dd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35dd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35dd84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dd88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35dd8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DD8Cu;
    SET_GPR_U32(ctx, 31, 0x35DD94u);
    ctx->pc = 0x35DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD8Cu;
    // 0x35dd90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DD8Cu, 0x35DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD94u;
label_35dd94:
    // 0x35dd94: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35DD94u;
    SET_GPR_U32(ctx, 31, 0x35DD9Cu);
    ctx->pc = 0x35DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD94u;
    // 0x35dd98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35DD94u, 0x35DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD9Cu;
label_35dd9c:
    // 0x35dd9c: 0xc08e954  jal         func_23A550
    ctx->pc = 0x35DD9Cu;
    SET_GPR_U32(ctx, 31, 0x35DDA4u);
    ctx->pc = 0x35DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD9Cu;
    // 0x35dda0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A550u, 0x35DD9Cu, 0x35DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DDA4u;
label_35dda4:
    // 0x35dda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35dda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dda8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35dda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ddac: 0x3e00008  jr          $ra
    ctx->pc = 0x35DDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DDACu;
        // 0x35ddb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DDB4u;
    // 0x35ddb4: 0x0  nop
    ctx->pc = 0x35ddb4u;
    // NOP
    ctx->pc = 0x35ddb8u;
}
