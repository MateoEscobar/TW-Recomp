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

// Function: sub_002D98B0
// Address: 0x2d98b0 - 0x2d98f8
void sub_002D98B0_0x2d98b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D98B0_0x2d98b0");
#endif

    switch (ctx->pc) {
        case 0x2d98d4u: goto label_2d98d4;
        case 0x2d98e4u: goto label_2d98e4;
        default: break;
    }

    ctx->pc = 0x2d98b0u;

    // 0x2d98b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d98b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d98b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d98b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d98b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d98b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d98bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d98bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d98c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d98c4: 0xac400208  sw          $zero, 0x208($v0)
    ctx->pc = 0x2d98c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
    // 0x2d98c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d98c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d98cc: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2D98CCu;
    SET_GPR_U32(ctx, 31, 0x2D98D4u);
    ctx->pc = 0x2D98D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D98CCu;
    // 0x2d98d0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2D98CCu, 0x2D98D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98D4u;
label_2d98d4:
    // 0x2d98d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d98d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d98d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d98d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d98dc: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2D98DCu;
    SET_GPR_U32(ctx, 31, 0x2D98E4u);
    ctx->pc = 0x2D98E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D98DCu;
    // 0x2d98e0: 0x248403c8  addiu       $a0, $a0, 0x3C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2D98DCu, 0x2D98E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98E4u;
label_2d98e4:
    // 0x2d98e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d98e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d98e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d98e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d98ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D98ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D98ECu;
        // 0x2d98f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D98ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D98F4u;
    // 0x2d98f4: 0x0  nop
    ctx->pc = 0x2d98f4u;
    // NOP
    ctx->pc = 0x2d98f8u;
}
