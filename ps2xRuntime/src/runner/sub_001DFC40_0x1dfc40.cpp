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

// Function: sub_001DFC40
// Address: 0x1dfc40 - 0x1dfc80
void sub_001DFC40_0x1dfc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFC40_0x1dfc40");
#endif

    switch (ctx->pc) {
        case 0x1dfc58u: goto label_1dfc58;
        case 0x1dfc64u: goto label_1dfc64;
        case 0x1dfc70u: goto label_1dfc70;
        default: break;
    }

    ctx->pc = 0x1dfc40u;

    // 0x1dfc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfc44: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dfc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dfc48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dfc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dfc4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dfc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dfc50: 0xc077300  jal         func_1DCC00
    ctx->pc = 0x1DFC50u;
    SET_GPR_U32(ctx, 31, 0x1DFC58u);
    ctx->pc = 0x1DFC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC50u;
    // 0x1dfc54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC00u, 0x1DFC50u, 0x1DFC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC58u;
label_1dfc58:
    // 0x1dfc58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc5c: 0xc077300  jal         func_1DCC00
    ctx->pc = 0x1DFC5Cu;
    SET_GPR_U32(ctx, 31, 0x1DFC64u);
    ctx->pc = 0x1DFC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC5Cu;
    // 0x1dfc60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC00u, 0x1DFC5Cu, 0x1DFC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC64u;
label_1dfc64:
    // 0x1dfc64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc68: 0xc077300  jal         func_1DCC00
    ctx->pc = 0x1DFC68u;
    SET_GPR_U32(ctx, 31, 0x1DFC70u);
    ctx->pc = 0x1DFC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFC68u;
    // 0x1dfc6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC00u, 0x1DFC68u, 0x1DFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC70u;
label_1dfc70:
    // 0x1dfc70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dfc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfc74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfc78: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC78u;
        // 0x1dfc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC80u;
}
