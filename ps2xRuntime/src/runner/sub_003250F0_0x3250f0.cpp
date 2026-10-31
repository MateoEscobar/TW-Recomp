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

// Function: sub_003250F0
// Address: 0x3250f0 - 0x325130
void sub_003250F0_0x3250f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003250F0_0x3250f0");
#endif

    switch (ctx->pc) {
        case 0x32510cu: goto label_32510c;
        case 0x325118u: goto label_325118;
        default: break;
    }

    ctx->pc = 0x3250f0u;

    // 0x3250f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3250f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3250f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3250f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3250f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3250f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3250fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3250fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325104: 0xc0c9192  jal         func_324648
    ctx->pc = 0x325104u;
    SET_GPR_U32(ctx, 31, 0x32510Cu);
    ctx->pc = 0x325108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325104u;
    // 0x325108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x325104u, 0x32510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32510Cu;
label_32510c:
    // 0x32510c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32510cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325110: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x325110u;
    SET_GPR_U32(ctx, 31, 0x325118u);
    ctx->pc = 0x325114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325110u;
    // 0x325114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x325110u, 0x325118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325118u;
label_325118:
    // 0x325118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x325118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32511c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325124: 0x3e00008  jr          $ra
    ctx->pc = 0x325124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325124u;
        // 0x325128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32512Cu;
    // 0x32512c: 0x0  nop
    ctx->pc = 0x32512cu;
    // NOP
    ctx->pc = 0x325130u;
}
