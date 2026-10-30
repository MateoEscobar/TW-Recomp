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

// Function: sub_003EE318
// Address: 0x3ee318 - 0x3ee338
void sub_003EE318_0x3ee318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE318_0x3ee318");
#endif

    switch (ctx->pc) {
        case 0x3ee32cu: goto label_3ee32c;
        default: break;
    }

    ctx->pc = 0x3ee318u;

    // 0x3ee318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ee318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ee31c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ee31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ee320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ee324: 0xc0fb892  jal         func_3EE248
    ctx->pc = 0x3EE324u;
    SET_GPR_U32(ctx, 31, 0x3EE32Cu);
    ctx->pc = 0x3EE328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE324u;
    // 0x3ee328: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE248u, 0x3EE324u, 0x3EE32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE32Cu;
label_3ee32c:
    // 0x3ee32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ee32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee330: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE330u;
        // 0x3ee334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE338u;
}
