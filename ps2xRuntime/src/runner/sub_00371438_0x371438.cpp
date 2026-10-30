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

// Function: sub_00371438
// Address: 0x371438 - 0x371470
void sub_00371438_0x371438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371438_0x371438");
#endif

    switch (ctx->pc) {
        case 0x37144cu: goto label_37144c;
        case 0x371454u: goto label_371454;
        case 0x37145cu: goto label_37145c;
        default: break;
    }

    ctx->pc = 0x371438u;

    // 0x371438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37143c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37143cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371444: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371444u;
    SET_GPR_U32(ctx, 31, 0x37144Cu);
    ctx->pc = 0x371448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371444u;
    // 0x371448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371444u, 0x37144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37144Cu;
label_37144c:
    // 0x37144c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37144Cu;
    SET_GPR_U32(ctx, 31, 0x371454u);
    ctx->pc = 0x371450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37144Cu;
    // 0x371450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37144Cu, 0x371454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371454u;
label_371454:
    // 0x371454: 0xc044f98  jal         func_113E60
    ctx->pc = 0x371454u;
    SET_GPR_U32(ctx, 31, 0x37145Cu);
    ctx->pc = 0x371458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371454u;
    // 0x371458: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E60u, 0x371454u, 0x37145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37145Cu;
label_37145c:
    // 0x37145c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37145cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x371460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371464: 0x3e00008  jr          $ra
    ctx->pc = 0x371464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371464u;
        // 0x371468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37146Cu;
    // 0x37146c: 0x0  nop
    ctx->pc = 0x37146cu;
    // NOP
    ctx->pc = 0x371470u;
}
