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

// Function: sub_0018AF88
// Address: 0x18af88 - 0x18afb8
void sub_0018AF88_0x18af88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AF88_0x18af88");
#endif

    switch (ctx->pc) {
        case 0x18afa8u: goto label_18afa8;
        default: break;
    }

    ctx->pc = 0x18af88u;

    // 0x18af88: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x18af88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18af8c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x18af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x18af90: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x18af90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x18af94: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18af94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18af98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18af9c: 0x24a5189c  addiu       $a1, $a1, 0x189C
    ctx->pc = 0x18af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6300));
    // 0x18afa0: 0xc060a94  jal         func_182A50
    ctx->pc = 0x18AFA0u;
    SET_GPR_U32(ctx, 31, 0x18AFA8u);
    ctx->pc = 0x18AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AFA0u;
    // 0x18afa4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182A50u, 0x18AFA0u, 0x18AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFA8u;
label_18afa8:
    // 0x18afa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18afa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18afac: 0x3e00008  jr          $ra
    ctx->pc = 0x18AFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFACu;
        // 0x18afb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AFB4u;
    // 0x18afb4: 0x0  nop
    ctx->pc = 0x18afb4u;
    // NOP
    ctx->pc = 0x18afb8u;
}
