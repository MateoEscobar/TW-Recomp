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

// Function: sub_00105AB0
// Address: 0x105ab0 - 0x105af0
void sub_00105AB0_0x105ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105AB0_0x105ab0");
#endif

    switch (ctx->pc) {
        case 0x105accu: goto label_105acc;
        case 0x105ad8u: goto label_105ad8;
        default: break;
    }

    ctx->pc = 0x105ab0u;

    // 0x105ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105ab4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x105ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x105ab8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x105ab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x105abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105ac4: 0xc0420dc  jal         func_108370
    ctx->pc = 0x105AC4u;
    SET_GPR_U32(ctx, 31, 0x105ACCu);
    ctx->pc = 0x105AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105AC4u;
    // 0x105ac8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x105AC4u, 0x105ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105ACCu;
label_105acc:
    // 0x105acc: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x105accu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x105ad0: 0xc041128  jal         func_1044A0
    ctx->pc = 0x105AD0u;
    SET_GPR_U32(ctx, 31, 0x105AD8u);
    ctx->pc = 0x105AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105AD0u;
    // 0x105ad4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x105AD0u, 0x105AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105AD8u;
label_105ad8:
    // 0x105ad8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x105ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105ae0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x105ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x105ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x105AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AE4u;
        // 0x105ae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105AECu;
    // 0x105aec: 0x0  nop
    ctx->pc = 0x105aecu;
    // NOP
    ctx->pc = 0x105af0u;
}
