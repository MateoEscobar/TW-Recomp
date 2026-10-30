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

// Function: sub_00370C38
// Address: 0x370c38 - 0x370c68
void sub_00370C38_0x370c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370C38_0x370c38");
#endif

    switch (ctx->pc) {
        case 0x370c4cu: goto label_370c4c;
        case 0x370c54u: goto label_370c54;
        default: break;
    }

    ctx->pc = 0x370c38u;

    // 0x370c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370c3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370c44: 0xc1024c6  jal         func_409318
    ctx->pc = 0x370C44u;
    SET_GPR_U32(ctx, 31, 0x370C4Cu);
    ctx->pc = 0x370C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C44u;
    // 0x370c48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x370C44u, 0x370C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C4Cu;
label_370c4c:
    // 0x370c4c: 0xc06d1c8  jal         func_1B4720
    ctx->pc = 0x370C4Cu;
    SET_GPR_U32(ctx, 31, 0x370C54u);
    ctx->pc = 0x370C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C4Cu;
    // 0x370c50: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4720u, 0x370C4Cu, 0x370C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C54u;
label_370c54:
    // 0x370c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370c58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x370C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C5Cu;
        // 0x370c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370C64u;
    // 0x370c64: 0x0  nop
    ctx->pc = 0x370c64u;
    // NOP
    ctx->pc = 0x370c68u;
}
