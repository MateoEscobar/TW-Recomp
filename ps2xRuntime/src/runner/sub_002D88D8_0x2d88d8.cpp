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

// Function: sub_002D88D8
// Address: 0x2d88d8 - 0x2d8920
void sub_002D88D8_0x2d88d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D88D8_0x2d88d8");
#endif

    switch (ctx->pc) {
        case 0x2d88f4u: goto label_2d88f4;
        case 0x2d8910u: goto label_2d8910;
        default: break;
    }

    ctx->pc = 0x2d88d8u;

    // 0x2d88d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d88d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d88dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d88dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d88e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d88e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d88e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d88e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d88e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d88ec: 0xc087420  jal         func_21D080
    ctx->pc = 0x2D88ECu;
    SET_GPR_U32(ctx, 31, 0x2D88F4u);
    ctx->pc = 0x2D88F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D88ECu;
    // 0x2d88f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2D88ECu, 0x2D88F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D88F4u;
label_2d88f4:
    // 0x2d88f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d88f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d88f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d88f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d88fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d8900: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d8900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8904: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2d8904u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2d8908: 0xc0b6256  jal         func_2D8958
    ctx->pc = 0x2D8908u;
    SET_GPR_U32(ctx, 31, 0x2D8910u);
    ctx->pc = 0x2D890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8908u;
    // 0x2d890c: 0xa0400120  sb          $zero, 0x120($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 288), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8958u, 0x2D8908u, 0x2D8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8910u;
label_2d8910:
    // 0x2d8910: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d8910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8918: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8918u;
        // 0x2d891c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8920u;
}
