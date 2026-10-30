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

// Function: sub_002D4DA0
// Address: 0x2d4da0 - 0x2d4e10
void sub_002D4DA0_0x2d4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4DA0_0x2d4da0");
#endif

    switch (ctx->pc) {
        case 0x2d4ddcu: goto label_2d4ddc;
        case 0x2d4df8u: goto label_2d4df8;
        default: break;
    }

    ctx->pc = 0x2d4da0u;

    // 0x2d4da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d4da4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4da8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d4da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d4dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4db4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4db8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4dbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4dc0: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2d4dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x2d4dc4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2d4dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4dc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4dcc: 0xa0440265  sb          $a0, 0x265($v0)
    ctx->pc = 0x2d4dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4dd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4dd4: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2D4DD4u;
    SET_GPR_U32(ctx, 31, 0x2D4DDCu);
    ctx->pc = 0x2D4DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4DD4u;
    // 0x2d4dd8: 0x82050015  lb          $a1, 0x15($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D4DD4u, 0x2D4DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DDCu;
label_2d4ddc:
    // 0x2d4ddc: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2d4ddcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x2d4de0: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x2d4de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2d4de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4de8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4dec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d4decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d4df0: 0xc0b5384  jal         func_2D4E10
    ctx->pc = 0x2D4DF0u;
    SET_GPR_U32(ctx, 31, 0x2D4DF8u);
    ctx->pc = 0x2D4DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4DF0u;
    // 0x2d4df4: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4E10u, 0x2D4DF0u, 0x2D4DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DF8u;
label_2d4df8:
    // 0x2d4df8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d4df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d4dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4e04: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4E04u;
        // 0x2d4e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4E0Cu;
    // 0x2d4e0c: 0x0  nop
    ctx->pc = 0x2d4e0cu;
    // NOP
    ctx->pc = 0x2d4e10u;
}
