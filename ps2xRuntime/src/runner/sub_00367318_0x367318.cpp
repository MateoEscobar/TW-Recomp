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

// Function: sub_00367318
// Address: 0x367318 - 0x367350
void sub_00367318_0x367318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367318_0x367318");
#endif

    switch (ctx->pc) {
        case 0x36732cu: goto label_36732c;
        case 0x367334u: goto label_367334;
        case 0x36733cu: goto label_36733c;
        default: break;
    }

    ctx->pc = 0x367318u;

    // 0x367318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x367318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36731c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36731cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367324: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367324u;
    SET_GPR_U32(ctx, 31, 0x36732Cu);
    ctx->pc = 0x367328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367324u;
    // 0x367328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367324u, 0x36732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36732Cu;
label_36732c:
    // 0x36732c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36732Cu;
    SET_GPR_U32(ctx, 31, 0x367334u);
    ctx->pc = 0x367330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36732Cu;
    // 0x367330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36732Cu, 0x367334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367334u;
label_367334:
    // 0x367334: 0xc047840  jal         func_11E100
    ctx->pc = 0x367334u;
    SET_GPR_U32(ctx, 31, 0x36733Cu);
    ctx->pc = 0x367338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367334u;
    // 0x367338: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E100u, 0x367334u, 0x36733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36733Cu;
label_36733c:
    // 0x36733c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36733cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x367340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367344: 0x3e00008  jr          $ra
    ctx->pc = 0x367344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367344u;
        // 0x367348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36734Cu;
    // 0x36734c: 0x0  nop
    ctx->pc = 0x36734cu;
    // NOP
    ctx->pc = 0x367350u;
}
