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

// Function: sub_0031BE48
// Address: 0x31be48 - 0x31be88
void sub_0031BE48_0x31be48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BE48_0x31be48");
#endif

    switch (ctx->pc) {
        case 0x31be5cu: goto label_31be5c;
        case 0x31be78u: goto label_31be78;
        default: break;
    }

    ctx->pc = 0x31be48u;

    // 0x31be48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31be48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31be4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31be4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31be50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31be50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31be54: 0xc0c6f4e  jal         func_31BD38
    ctx->pc = 0x31BE54u;
    SET_GPR_U32(ctx, 31, 0x31BE5Cu);
    ctx->pc = 0x31BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE54u;
    // 0x31be58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BD38u, 0x31BE54u, 0x31BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE5Cu;
label_31be5c:
    // 0x31be5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31be5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31be60: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x31be60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x31be64: 0x24c615a8  addiu       $a2, $a2, 0x15A8
    ctx->pc = 0x31be64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5544));
    // 0x31be68: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x31be68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x31be6c: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x31be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x31be70: 0xc05905e  jal         func_164178
    ctx->pc = 0x31BE70u;
    SET_GPR_U32(ctx, 31, 0x31BE78u);
    ctx->pc = 0x31BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE70u;
    // 0x31be74: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x31BE70u, 0x31BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE78u;
label_31be78:
    // 0x31be78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31be78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31be7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31be7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31be80: 0x3e00008  jr          $ra
    ctx->pc = 0x31BE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE80u;
        // 0x31be84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BE88u;
}
