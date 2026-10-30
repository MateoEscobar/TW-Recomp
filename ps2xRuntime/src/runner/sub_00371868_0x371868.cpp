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

// Function: sub_00371868
// Address: 0x371868 - 0x3718a0
void sub_00371868_0x371868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371868_0x371868");
#endif

    switch (ctx->pc) {
        case 0x37187cu: goto label_37187c;
        case 0x371884u: goto label_371884;
        case 0x37188cu: goto label_37188c;
        default: break;
    }

    ctx->pc = 0x371868u;

    // 0x371868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37186c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37186cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371870: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371874: 0xc102472  jal         func_4091C8
    ctx->pc = 0x371874u;
    SET_GPR_U32(ctx, 31, 0x37187Cu);
    ctx->pc = 0x371878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371874u;
    // 0x371878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x371874u, 0x37187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37187Cu;
label_37187c:
    // 0x37187c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37187Cu;
    SET_GPR_U32(ctx, 31, 0x371884u);
    ctx->pc = 0x371880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37187Cu;
    // 0x371880: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37187Cu, 0x371884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371884u;
label_371884:
    // 0x371884: 0xc044de0  jal         func_113780
    ctx->pc = 0x371884u;
    SET_GPR_U32(ctx, 31, 0x37188Cu);
    ctx->pc = 0x371888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371884u;
    // 0x371888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113780u, 0x371884u, 0x37188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37188Cu;
label_37188c:
    // 0x37188c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37188cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x371890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371894: 0x3e00008  jr          $ra
    ctx->pc = 0x371894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371894u;
        // 0x371898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37189Cu;
    // 0x37189c: 0x0  nop
    ctx->pc = 0x37189cu;
    // NOP
    ctx->pc = 0x3718a0u;
}
