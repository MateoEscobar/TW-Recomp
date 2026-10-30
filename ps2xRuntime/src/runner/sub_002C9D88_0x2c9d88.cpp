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

// Function: sub_002C9D88
// Address: 0x2c9d88 - 0x2c9dd0
void sub_002C9D88_0x2c9d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9D88_0x2c9d88");
#endif

    switch (ctx->pc) {
        case 0x2c9da8u: goto label_2c9da8;
        default: break;
    }

    ctx->pc = 0x2c9d88u;

    // 0x2c9d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c9d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c9d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c9d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d9c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9da0: 0xc0a22c6  jal         func_288B18
    ctx->pc = 0x2C9DA0u;
    SET_GPR_U32(ctx, 31, 0x2C9DA8u);
    ctx->pc = 0x2C9DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9DA0u;
    // 0x2c9da4: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2C9DA0u, 0x2C9DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9DA8u;
label_2c9da8:
    // 0x2c9da8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c9dac: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2c9dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2c9db0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c9db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c9db4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c9db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9db8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c9db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9dc0: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2c9dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x2c9dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DC4u;
        // 0x2c9dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9DCCu;
    // 0x2c9dcc: 0x0  nop
    ctx->pc = 0x2c9dccu;
    // NOP
    ctx->pc = 0x2c9dd0u;
}
