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

// Function: sub_00370E68
// Address: 0x370e68 - 0x370e98
void sub_00370E68_0x370e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370E68_0x370e68");
#endif

    switch (ctx->pc) {
        case 0x370e7cu: goto label_370e7c;
        case 0x370e84u: goto label_370e84;
        default: break;
    }

    ctx->pc = 0x370e68u;

    // 0x370e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370e74: 0xc1024c6  jal         func_409318
    ctx->pc = 0x370E74u;
    SET_GPR_U32(ctx, 31, 0x370E7Cu);
    ctx->pc = 0x370E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370E74u;
    // 0x370e78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x370E74u, 0x370E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E7Cu;
label_370e7c:
    // 0x370e7c: 0xc108d92  jal         func_423648
    ctx->pc = 0x370E7Cu;
    SET_GPR_U32(ctx, 31, 0x370E84u);
    ctx->pc = 0x370E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370E7Cu;
    // 0x370e80: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x423648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423648u, 0x370E7Cu, 0x370E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E84u;
label_370e84:
    // 0x370e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370e88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x370E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E8Cu;
        // 0x370e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370E94u;
    // 0x370e94: 0x0  nop
    ctx->pc = 0x370e94u;
    // NOP
    ctx->pc = 0x370e98u;
}
