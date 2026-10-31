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

// Function: sub_0032CF40
// Address: 0x32cf40 - 0x32cf70
void sub_0032CF40_0x32cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CF40_0x32cf40");
#endif

    switch (ctx->pc) {
        case 0x32cf54u: goto label_32cf54;
        case 0x32cf60u: goto label_32cf60;
        default: break;
    }

    ctx->pc = 0x32cf40u;

    // 0x32cf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32cf44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32cf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32cf48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32cf4c: 0xc0cb3bc  jal         func_32CEF0
    ctx->pc = 0x32CF4Cu;
    SET_GPR_U32(ctx, 31, 0x32CF54u);
    ctx->pc = 0x32CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF4Cu;
    // 0x32cf50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEF0u, 0x32CF4Cu, 0x32CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF54u;
label_32cf54:
    // 0x32cf54: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x32cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x32cf58: 0xc0cb386  jal         func_32CE18
    ctx->pc = 0x32CF58u;
    SET_GPR_U32(ctx, 31, 0x32CF60u);
    ctx->pc = 0x32CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CF58u;
    // 0x32cf5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CE18u, 0x32CF58u, 0x32CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF60u;
label_32cf60:
    // 0x32cf60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32cf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cf64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cf68: 0x3e00008  jr          $ra
    ctx->pc = 0x32CF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF68u;
        // 0x32cf6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CF70u;
}
