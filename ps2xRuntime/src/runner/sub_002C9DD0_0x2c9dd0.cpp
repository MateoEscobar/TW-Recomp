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

// Function: sub_002C9DD0
// Address: 0x2c9dd0 - 0x2c9e18
void sub_002C9DD0_0x2c9dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9DD0_0x2c9dd0");
#endif

    switch (ctx->pc) {
        case 0x2c9df0u: goto label_2c9df0;
        default: break;
    }

    ctx->pc = 0x2c9dd0u;

    // 0x2c9dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9dd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c9dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9dd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c9dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c9ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9de0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9de4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c9de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9de8: 0xc0a22c6  jal         func_288B18
    ctx->pc = 0x2C9DE8u;
    SET_GPR_U32(ctx, 31, 0x2C9DF0u);
    ctx->pc = 0x2C9DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9DE8u;
    // 0x2c9dec: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2C9DE8u, 0x2C9DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9DF0u;
label_2c9df0:
    // 0x2c9df0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9df4: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2c9df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
    // 0x2c9df8: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2c9df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
    // 0x2c9dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9e00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c9e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9e08: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2c9e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x2c9e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E0Cu;
        // 0x2c9e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9E14u;
    // 0x2c9e14: 0x0  nop
    ctx->pc = 0x2c9e14u;
    // NOP
    ctx->pc = 0x2c9e18u;
}
