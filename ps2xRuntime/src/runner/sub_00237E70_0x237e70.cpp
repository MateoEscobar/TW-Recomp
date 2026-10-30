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

// Function: sub_00237E70
// Address: 0x237e70 - 0x237e98
void sub_00237E70_0x237e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237E70_0x237e70");
#endif

    switch (ctx->pc) {
        case 0x237e84u: goto label_237e84;
        case 0x237e8cu: goto label_237e8c;
        default: break;
    }

    ctx->pc = 0x237e70u;

    // 0x237e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237e74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237e7c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x237E7Cu;
    SET_GPR_U32(ctx, 31, 0x237E84u);
    ctx->pc = 0x237E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E7Cu;
    // 0x237e80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x237E7Cu, 0x237E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E84u;
label_237e84:
    // 0x237e84: 0xc08c0aa  jal         func_2302A8
    ctx->pc = 0x237E84u;
    SET_GPR_U32(ctx, 31, 0x237E8Cu);
    ctx->pc = 0x237E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E84u;
    // 0x237e88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2302A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2302A8u, 0x237E84u, 0x237E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E8Cu;
label_237e8c:
    // 0x237e8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x237e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237e90: 0x3e00008  jr          $ra
    ctx->pc = 0x237E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E90u;
        // 0x237e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237E98u;
}
