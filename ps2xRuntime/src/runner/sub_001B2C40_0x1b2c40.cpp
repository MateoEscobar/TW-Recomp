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

// Function: sub_001B2C40
// Address: 0x1b2c40 - 0x1b2ca0
void sub_001B2C40_0x1b2c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2C40_0x1b2c40");
#endif

    switch (ctx->pc) {
        case 0x1b2c70u: goto label_1b2c70;
        case 0x1b2c84u: goto label_1b2c84;
        default: break;
    }

    ctx->pc = 0x1b2c40u;

    // 0x1b2c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b2c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b2c44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b2c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b2c48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b2c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b2c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b2c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b2c54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c58: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1b2c58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b2c5c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b2c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c60: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b2c60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b2c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2c68: 0xc0711a4  jal         func_1C4690
    ctx->pc = 0x1B2C68u;
    SET_GPR_U32(ctx, 31, 0x1B2C70u);
    ctx->pc = 0x1B2C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C68u;
    // 0x1b2c6c: 0x260415d0  addiu       $a0, $s0, 0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4690u, 0x1B2C68u, 0x1B2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C70u;
label_1b2c70:
    // 0x1b2c70: 0x26043f10  addiu       $a0, $s0, 0x3F10
    ctx->pc = 0x1b2c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16144));
    // 0x1b2c74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c78: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b2c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c7c: 0xc0711a4  jal         func_1C4690
    ctx->pc = 0x1B2C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B2C84u);
    ctx->pc = 0x1B2C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C7Cu;
    // 0x1b2c80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4690u, 0x1B2C7Cu, 0x1B2C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C84u;
label_1b2c84:
    // 0x1b2c84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b2c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2c88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b2c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2c8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b2c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2c94: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1b2c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2c98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C98u;
        // 0x1b2c9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2CA0u;
}
