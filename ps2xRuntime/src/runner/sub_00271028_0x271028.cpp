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

// Function: sub_00271028
// Address: 0x271028 - 0x271060
void sub_00271028_0x271028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271028_0x271028");
#endif

    switch (ctx->pc) {
        case 0x27103cu: goto label_27103c;
        case 0x27104cu: goto label_27104c;
        default: break;
    }

    ctx->pc = 0x271028u;

    // 0x271028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27102c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x271030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x271030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x271034: 0xc088e78  jal         func_2239E0
    ctx->pc = 0x271034u;
    SET_GPR_U32(ctx, 31, 0x27103Cu);
    ctx->pc = 0x271038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271034u;
    // 0x271038: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x271034u, 0x27103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27103Cu;
label_27103c:
    // 0x27103c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27103Cu;
    {
        const bool branch_taken_0x27103c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27103Cu;
        // 0x271040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27103c) {
            ctx->pc = 0x27104Cu;
            goto label_27104c;
        }
    }
    ctx->pc = 0x271044u;
    // 0x271044: 0xc08af38  jal         func_22BCE0
    ctx->pc = 0x271044u;
    SET_GPR_U32(ctx, 31, 0x27104Cu);
    ctx->pc = 0x271048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271044u;
    // 0x271048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCE0u, 0x271044u, 0x27104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27104Cu;
label_27104c:
    // 0x27104c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27104cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271054: 0x3e00008  jr          $ra
    ctx->pc = 0x271054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271054u;
        // 0x271058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27105Cu;
    // 0x27105c: 0x0  nop
    ctx->pc = 0x27105cu;
    // NOP
    ctx->pc = 0x271060u;
}
