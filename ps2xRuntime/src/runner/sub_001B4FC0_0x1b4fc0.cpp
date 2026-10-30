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

// Function: sub_001B4FC0
// Address: 0x1b4fc0 - 0x1b5008
void sub_001B4FC0_0x1b4fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4FC0_0x1b4fc0");
#endif

    switch (ctx->pc) {
        case 0x1b4fe8u: goto label_1b4fe8;
        case 0x1b4ff4u: goto label_1b4ff4;
        default: break;
    }

    ctx->pc = 0x1b4fc0u;

    // 0x1b4fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4fc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b4fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b4fc8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1b4fc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b4fcc: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x1b4fccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x1b4fd0: 0x2610b180  addiu       $s0, $s0, -0x4E80
    ctx->pc = 0x1b4fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947200));
    // 0x1b4fd4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b4fd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4fdc: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x1b4fdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    // 0x1b4fe0: 0xc068e48  jal         func_1A3920
    ctx->pc = 0x1B4FE0u;
    SET_GPR_U32(ctx, 31, 0x1B4FE8u);
    ctx->pc = 0x1B4FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FE0u;
    // 0x1b4fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3920u, 0x1B4FE0u, 0x1B4FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FE8u;
label_1b4fe8:
    // 0x1b4fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fec: 0xc068e46  jal         func_1A3918
    ctx->pc = 0x1B4FECu;
    SET_GPR_U32(ctx, 31, 0x1B4FF4u);
    ctx->pc = 0x1B4FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FECu;
    // 0x1b4ff0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3918u, 0x1B4FECu, 0x1B4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FF4u;
label_1b4ff4:
    // 0x1b4ff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b4ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4ffc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b4ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b5000: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5000u;
        // 0x1b5004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5008u;
}
