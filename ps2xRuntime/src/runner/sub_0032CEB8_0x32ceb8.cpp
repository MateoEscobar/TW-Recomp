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

// Function: sub_0032CEB8
// Address: 0x32ceb8 - 0x32cef0
void sub_0032CEB8_0x32ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CEB8_0x32ceb8");
#endif

    switch (ctx->pc) {
        case 0x32ced0u: goto label_32ced0;
        case 0x32cedcu: goto label_32cedc;
        default: break;
    }

    ctx->pc = 0x32ceb8u;

    // 0x32ceb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32cebc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32cec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32cec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32cec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32cec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cec8: 0xc0cb386  jal         func_32CE18
    ctx->pc = 0x32CEC8u;
    SET_GPR_U32(ctx, 31, 0x32CED0u);
    ctx->pc = 0x32CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CEC8u;
    // 0x32cecc: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CE18u, 0x32CEC8u, 0x32CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CED0u;
label_32ced0:
    // 0x32ced0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ced4: 0xc0c99fe  jal         func_3267F8
    ctx->pc = 0x32CED4u;
    SET_GPR_U32(ctx, 31, 0x32CEDCu);
    ctx->pc = 0x32CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CED4u;
    // 0x32ced8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3267F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3267F8u, 0x32CED4u, 0x32CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CEDCu;
label_32cedc:
    // 0x32cedc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32cedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cee4: 0x3e00008  jr          $ra
    ctx->pc = 0x32CEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CEE4u;
        // 0x32cee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CEECu;
    // 0x32ceec: 0x0  nop
    ctx->pc = 0x32ceecu;
    // NOP
    ctx->pc = 0x32cef0u;
}
