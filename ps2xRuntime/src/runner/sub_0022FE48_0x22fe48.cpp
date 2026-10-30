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

// Function: sub_0022FE48
// Address: 0x22fe48 - 0x22fe80
void sub_0022FE48_0x22fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FE48_0x22fe48");
#endif

    switch (ctx->pc) {
        case 0x22fe5cu: goto label_22fe5c;
        case 0x22fe68u: goto label_22fe68;
        default: break;
    }

    ctx->pc = 0x22fe48u;

    // 0x22fe48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fe48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22fe4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22fe4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22fe50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fe50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fe54: 0xc0a002e  jal         func_2800B8
    ctx->pc = 0x22FE54u;
    SET_GPR_U32(ctx, 31, 0x22FE5Cu);
    ctx->pc = 0x22FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE54u;
    // 0x22fe58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2800B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2800B8u, 0x22FE54u, 0x22FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE5Cu;
label_22fe5c:
    // 0x22fe5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fe60: 0xc089974  jal         func_2265D0
    ctx->pc = 0x22FE60u;
    SET_GPR_U32(ctx, 31, 0x22FE68u);
    ctx->pc = 0x22FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FE60u;
    // 0x22fe64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22FE60u, 0x22FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FE68u;
label_22fe68:
    // 0x22fe68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22fe68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fe6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fe6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fe70: 0x3e00008  jr          $ra
    ctx->pc = 0x22FE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE70u;
        // 0x22fe74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FE78u;
    // 0x22fe78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22fe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22fe7c: 0x0  nop
    ctx->pc = 0x22fe7cu;
    // NOP
    ctx->pc = 0x22fe80u;
}
