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

// Function: sub_001D2D68
// Address: 0x1d2d68 - 0x1d2db0
void sub_001D2D68_0x1d2d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2D68_0x1d2d68");
#endif

    switch (ctx->pc) {
        case 0x1d2d8cu: goto label_1d2d8c;
        case 0x1d2da0u: goto label_1d2da0;
        default: break;
    }

    ctx->pc = 0x1d2d68u;

    // 0x1d2d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2d6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2d74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d78: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1d2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d2d7c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2D7Cu;
    {
        const bool branch_taken_0x1d2d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2d7c) {
            ctx->pc = 0x1D2D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2D7Cu;
            // 0x1d2d80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2DA4u;
            goto label_1d2da4;
        }
    }
    ctx->pc = 0x1D2D84u;
    // 0x1d2d84: 0xc07474a  jal         func_1D1D28
    ctx->pc = 0x1D2D84u;
    SET_GPR_U32(ctx, 31, 0x1D2D8Cu);
    ctx->pc = 0x1D1D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1D28u, 0x1D2D84u, 0x1D2D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D8Cu;
label_1d2d8c:
    // 0x1d2d8c: 0x8e020cb0  lw          $v0, 0xCB0($s0)
    ctx->pc = 0x1d2d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3248)));
    // 0x1d2d90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2D90u;
    {
        const bool branch_taken_0x1d2d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2d90) {
            ctx->pc = 0x1D2D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2D90u;
            // 0x1d2d94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2DA4u;
            goto label_1d2da4;
        }
    }
    ctx->pc = 0x1D2D98u;
    // 0x1d2d98: 0xc075ab4  jal         func_1D6AD0
    ctx->pc = 0x1D2D98u;
    SET_GPR_U32(ctx, 31, 0x1D2DA0u);
    ctx->pc = 0x1D2D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D98u;
    // 0x1d2d9c: 0x260407e0  addiu       $a0, $s0, 0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6AD0u, 0x1D2D98u, 0x1D2DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2DA0u;
label_1d2da0:
    // 0x1d2da0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2da4:
    // 0x1d2da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2da8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DA8u;
        // 0x1d2dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2DB0u;
}
