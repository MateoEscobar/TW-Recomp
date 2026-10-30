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

// Function: sub_0031CF80
// Address: 0x31cf80 - 0x31cfc0
void sub_0031CF80_0x31cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CF80_0x31cf80");
#endif

    switch (ctx->pc) {
        case 0x31cf94u: goto label_31cf94;
        case 0x31cfb0u: goto label_31cfb0;
        default: break;
    }

    ctx->pc = 0x31cf80u;

    // 0x31cf80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31cf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31cf84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31cf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31cf88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31cf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31cf8c: 0xc0c7338  jal         func_31CCE0
    ctx->pc = 0x31CF8Cu;
    SET_GPR_U32(ctx, 31, 0x31CF94u);
    ctx->pc = 0x31CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF8Cu;
    // 0x31cf90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCE0u, 0x31CF8Cu, 0x31CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF94u;
label_31cf94:
    // 0x31cf94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31cf98: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x31cf98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x31cf9c: 0x24c61600  addiu       $a2, $a2, 0x1600
    ctx->pc = 0x31cf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5632));
    // 0x31cfa0: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x31cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x31cfa4: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x31cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x31cfa8: 0xc05905e  jal         func_164178
    ctx->pc = 0x31CFA8u;
    SET_GPR_U32(ctx, 31, 0x31CFB0u);
    ctx->pc = 0x31CFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CFA8u;
    // 0x31cfac: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x31CFA8u, 0x31CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CFB0u;
label_31cfb0:
    // 0x31cfb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31cfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31cfb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31cfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x31CFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CFB8u;
        // 0x31cfbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CFC0u;
}
